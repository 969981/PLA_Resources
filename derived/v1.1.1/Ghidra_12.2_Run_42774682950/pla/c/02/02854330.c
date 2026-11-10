/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02854330; name: FUN_02854330
 */


undefined8 FUN_02854330(long param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  iVar3 = *(int *)(param_1 + 0x490);
  if (iVar3 == 0) {
    return 0;
  }
  if (iVar3 == 2) {
    uVar4 = FUN_02854770(param_1);
    if ((uVar4 & 1) == 0) {
      return 1;
    }
    FUN_02854814(param_1);
  }
  else {
    if (iVar3 == 3) {
      uVar4 = FUN_02854770(param_1);
      if ((uVar4 & 1) == 0) {
        return 1;
      }
      plVar2 = *(long **)(*(long *)(param_1 + 8) + 0x148);
      lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x150);
      lVar7 = *(long *)(param_1 + 0x2c8);
      plVar5 = *(long **)(param_1 + 0x2e0);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))();
      }
      if ((lVar9 != 0) && (*plVar2 != lVar7)) {
        plVar8 = plVar2 + lVar9 * 6;
        lVar9 = lVar9 * 0x30;
        plVar6 = plVar2;
        do {
          lVar9 = lVar9 + -0x30;
          plVar2 = plVar8;
          if (lVar9 == 0) break;
          plVar2 = plVar6 + 6;
          plVar1 = plVar6 + 6;
          plVar6 = plVar2;
        } while (*plVar1 != lVar7);
      }
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))();
      }
      *(byte *)(plVar2[4] + 0x58) = *(byte *)(plVar2[4] + 0x58) & 0xfe;
      plVar5 = *(long **)(param_1 + 0x300);
      plVar2 = *(long **)(*(long *)(param_1 + 8) + 0x148);
      lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x150);
      lVar7 = *(long *)(param_1 + 0x2e8);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))();
      }
      if ((lVar9 != 0) && (*plVar2 != lVar7)) {
        plVar8 = plVar2 + lVar9 * 6;
        lVar9 = lVar9 * 0x30;
        plVar6 = plVar2;
        do {
          lVar9 = lVar9 + -0x30;
          plVar2 = plVar8;
          if (lVar9 == 0) break;
          plVar2 = plVar6 + 6;
          plVar1 = plVar6 + 6;
          plVar6 = plVar2;
        } while (*plVar1 != lVar7);
      }
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))();
      }
      *(byte *)(plVar2[4] + 0x58) = *(byte *)(plVar2[4] + 0x58) & 0xfe;
      *(undefined4 *)(param_1 + 0x490) = 0;
      *(undefined8 *)(param_1 + 0x488) = 0;
      return 0;
    }
    if (iVar3 != 1) {
      return 1;
    }
    FUN_02854534(param_1);
  }
  *(int *)(param_1 + 0x490) = *(int *)(param_1 + 0x490) + 1;
  return 1;
}


