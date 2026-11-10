/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7a59c; name: FUN_02e7a59c
 */


long * FUN_02e7a59c(undefined8 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = (long *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  if ((uVar2 == 0) || (*plVar6 == param_2)) {
    plVar4 = plVar6;
  }
  else {
    lVar5 = (ulong)uVar2 * 0x20;
    plVar7 = plVar6;
    do {
      lVar5 = lVar5 + -0x20;
      if (lVar5 == 0) goto LAB_02e7a628;
      plVar4 = plVar7 + 4;
      plVar1 = plVar7 + 4;
      plVar7 = plVar4;
    } while (*plVar1 != param_2);
  }
  if (plVar4 == plVar6 + (ulong)uVar2 * 4) {
LAB_02e7a628:
    plVar4 = (long *)FUN_02e7b0f8();
    if (plVar4 == (long *)0x0) {
      return (long *)0x0;
    }
    *plVar4 = param_2;
  }
  lVar5 = param_3[1];
  lVar3 = param_3[2];
  plVar4[1] = *param_3;
  *(short *)(plVar4 + 3) = (short)lVar3;
  plVar4[2] = lVar5;
  return plVar4 + 1;
}


