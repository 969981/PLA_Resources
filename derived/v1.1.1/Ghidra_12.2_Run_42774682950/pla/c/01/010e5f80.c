/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010e5f80; name: FUN_010e5f80
 */


uint FUN_010e5f80(long param_1,uint *param_2,undefined8 param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  long *plVar4;
  uint *puVar5;
  uint *puVar6;
  ulong uVar7;
  uint *puVar8;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xa0));
  if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
    puVar2 = *(uint **)(param_1 + 0x10);
    uVar7 = (long)puVar2 - (long)*(uint **)(param_1 + 8);
    if (0 < (long)uVar7) {
      puVar5 = *(uint **)(param_1 + 8);
      puVar6 = puVar2;
      do {
        puVar8 = puVar5 + (uVar7 / 0x60) * 0xc;
        if (*puVar8 == *param_2) goto LAB_010e6010;
        puVar1 = puVar8 + 0xc;
        if (*param_2 <= *puVar8) {
          puVar1 = puVar5;
          puVar6 = puVar8;
        }
        uVar7 = (long)puVar6 - (long)puVar1;
        puVar5 = puVar1;
      } while (0 < (long)uVar7);
    }
    puVar8 = puVar2;
LAB_010e6010:
    if ((puVar8 == (uint *)0x0) || (puVar2 == puVar8)) {
      uVar3 = FUN_010e9c88(param_1,param_2,param_3);
    }
    else {
      uVar7 = FUN_010e9924(param_1,puVar8);
      if (((uVar7 & 1) == 0) && (plVar4 = *(long **)(param_1 + 0x60), plVar4 != (long *)0x0)) {
        (**(code **)(*plVar4 + 0x58))(plVar4,param_2);
      }
      uVar3 = FUN_010e9a80(param_1,puVar8,param_3);
    }
  }
  else if (*(long **)(param_1 + 0x60) == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x60) + 0x60))();
    uVar3 = 0;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xa0));
  return uVar3 & 1;
}


