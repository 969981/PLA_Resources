/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00310e54; name: FUN_00310e54
 */


long * FUN_00310e54(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  
  if ((char)param_1[7] != '\0') {
    return param_1 + 2;
  }
  iVar4 = FUN_00310abc(param_1);
  if ((char)param_1[7] != '\0') {
    return param_1 + 2;
  }
  plVar5 = (long *)param_1[1];
  lVar1 = (long)plVar5 + (long)iVar4 + -0x10;
  plVar3 = plVar5;
  if (iVar4 < 0x11) {
    lVar1 = (long)(param_1 + 2) + (long)iVar4;
    plVar3 = param_1 + 2;
  }
  *param_1 = lVar1;
  plVar2 = (long *)0x0;
  if (iVar4 < 0x11) {
    plVar2 = plVar5;
  }
  param_1[1] = (long)plVar2;
  return plVar3;
}


