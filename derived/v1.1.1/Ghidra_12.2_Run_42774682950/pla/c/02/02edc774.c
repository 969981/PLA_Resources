/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edc774; name: FUN_02edc774
 */


undefined8 FUN_02edc774(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  short sVar2;
  undefined8 uVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  plVar5 = (long *)*param_1;
  uVar4 = *(uint *)(param_1 + 1);
  plVar6 = plVar5 + uVar4;
  if ((uVar4 != 0) && (*plVar5 != param_2)) {
    lVar8 = (ulong)uVar4 * 8;
    plVar7 = plVar5;
    do {
      lVar8 = lVar8 + -8;
      plVar5 = plVar6;
      if (lVar8 == 0) break;
      plVar5 = plVar7 + 1;
      plVar1 = plVar7 + 1;
      plVar7 = plVar5;
    } while (*plVar1 != param_2);
  }
  if ((plVar5 != (long *)0x0) && (plVar6 != plVar5)) {
    plVar6 = *(long **)(param_2 + 0x30);
    uVar4 = *(uint *)(param_2 + 0x38);
    plVar5 = plVar6 + uVar4;
    if ((uVar4 != 0) && (*plVar6 != param_3)) {
      lVar8 = (ulong)uVar4 * 8;
      plVar7 = plVar6;
      do {
        lVar8 = lVar8 + -8;
        if (lVar8 == 0) {
          return 0x29;
        }
        plVar6 = plVar7 + 1;
        plVar1 = plVar7 + 1;
        plVar7 = plVar6;
      } while (*plVar1 != param_3);
    }
    if (plVar5 == plVar6) {
      return 0x29;
    }
    if (1 < uVar4) {
      *plVar6 = plVar5[-1];
      uVar4 = *(uint *)(param_2 + 0x38);
    }
    *(uint *)(param_2 + 0x38) = uVar4 - 1;
    sVar2 = *(short *)(param_2 + 0x42) + -1;
    *(short *)(param_2 + 0x42) = sVar2;
    if (*(short *)(param_2 + 0x40) == 0 && sVar2 == 0) {
      uVar3 = FUN_02edc4dc();
      return uVar3;
    }
  }
  return 1;
}


