/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edc4dc; name: FUN_02edc4dc
 */


undefined8 FUN_02edc4dc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  plVar5 = (long *)*param_1;
  uVar4 = *(uint *)(param_1 + 1);
  plVar2 = plVar5 + uVar4;
  if ((uVar4 != 0) && (*plVar5 != param_2)) {
    lVar7 = (ulong)uVar4 * 8;
    plVar6 = plVar5;
    do {
      lVar7 = lVar7 + -8;
      if (lVar7 == 0) goto LAB_02edc580;
      plVar5 = plVar6 + 1;
      plVar1 = plVar6 + 1;
      plVar6 = plVar5;
    } while (*plVar1 != param_2);
  }
  if (plVar2 == plVar5) {
LAB_02edc580:
    uVar3 = 0x24;
  }
  else {
    lVar7 = *plVar5;
    if (1 < uVar4) {
      *plVar5 = plVar2[-1];
      uVar4 = *(uint *)(param_1 + 1);
    }
    *(uint *)(param_1 + 1) = uVar4 - 1;
    FUN_02edb3e8(lVar7);
    FUN_02edc420(lVar7);
    uVar3 = 1;
  }
  return uVar3;
}


