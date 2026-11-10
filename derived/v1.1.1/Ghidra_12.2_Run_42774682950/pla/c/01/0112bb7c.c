/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0112bb7c; name: FUN_0112bb7c
 */


void FUN_0112bb7c(long param_1,undefined8 param_2,undefined8 param_3)

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
        if (*puVar7 == 0x3bfc2c3c) goto LAB_0112bc10;
        puVar1 = puVar7 + 0xc;
        if (0x3bfc2c3b < *puVar7) {
          puVar1 = puVar4;
          puVar5 = puVar7;
        }
        uVar6 = (long)puVar5 - (long)puVar1;
        puVar4 = puVar1;
      } while (0 < (long)uVar6);
    }
    puVar7 = puVar2;
LAB_0112bc10:
    if ((puVar7 == (uint *)0x0) || (puVar2 == puVar7)) {
      FUN_0112dfc8(param_1,param_2,param_3);
    }
    else {
      uVar6 = FUN_010d7974(param_1,puVar7);
      if (((uVar6 & 1) == 0) && (plVar3 = *(long **)(param_1 + 0x60), plVar3 != (long *)0x0)) {
        (**(code **)(*plVar3 + 0x58))(plVar3,&DAT_03a78fb4);
      }
      FUN_0112ddb0(param_1,puVar7,param_2,param_3);
    }
  }
  else if (*(long **)(param_1 + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x60) + 0x60))();
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xa0));
  return;
}


