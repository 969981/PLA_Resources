/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01123744; name: FUN_01123744
 */


void FUN_01123744(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint *puVar1;
  uint *puVar2;
  long *plVar3;
  uint *puVar4;
  uint *puVar5;
  ulong uVar6;
  uint *puVar7;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xa0));
  if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
    puVar2 = *(uint **)(param_1 + 0x10);
    uVar6 = (long)puVar2 - (long)*(uint **)(param_1 + 8);
    if (0 < (long)uVar6) {
      puVar4 = *(uint **)(param_1 + 8);
      puVar5 = puVar2;
      do {
        puVar7 = puVar4 + (uVar6 / 0x60) * 0xc;
        if (*puVar7 == 0xf25c070e) goto LAB_011237d8;
        puVar1 = puVar7 + 0xc;
        if (0xf25c070d < *puVar7) {
          puVar1 = puVar4;
          puVar5 = puVar7;
        }
        uVar6 = (long)puVar5 - (long)puVar1;
        puVar4 = puVar1;
      } while (0 < (long)uVar6);
    }
    puVar7 = puVar2;
LAB_011237d8:
    if ((puVar7 == (uint *)0x0) || (puVar2 == puVar7)) {
      FUN_01124388(param_1,param_2,param_3);
    }
    else {
      uVar6 = FUN_010d7974(param_1,puVar7);
      if (((uVar6 & 1) == 0) && (plVar3 = *(long **)(param_1 + 0x60), plVar3 != (long *)0x0)) {
        (**(code **)(*plVar3 + 0x58))(plVar3,&DAT_03a78f74);
      }
      FUN_01124170(param_1,puVar7,param_2,param_3);
    }
  }
  else if (*(long **)(param_1 + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x60) + 0x60))();
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xa0));
  return;
}


