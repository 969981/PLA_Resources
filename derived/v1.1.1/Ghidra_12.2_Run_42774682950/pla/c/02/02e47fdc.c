/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e47fdc; name: FUN_02e47fdc
 */


void FUN_02e47fdc(long *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)*param_1;
  if ((plVar2 == (long *)0x0) || (plVar2 <= param_2 && param_2 < plVar2 + 0x3500)) {
    plVar3 = (long *)0x0;
  }
  else {
    do {
      plVar3 = plVar2;
      plVar2 = (long *)plVar3[0x3500];
      if (plVar2 == (long *)0x0) break;
    } while (param_2 < plVar2 || plVar2 + 0x3500 <= param_2);
  }
  if (plVar2[0x3502] == 0) {
    plVar2[0x3502] = (long)param_2;
    *param_2 = 0;
  }
  else {
    *param_2 = plVar2[0x3502];
    plVar2[0x3502] = (long)param_2;
  }
  iVar1 = (int)plVar2[0x3501] + 1;
  *(int *)(plVar2 + 0x3501) = iVar1;
  if (iVar1 != 0x40) {
    return;
  }
  if ((long *)*param_1 != plVar2) {
    param_1 = plVar3 + 0x3500;
  }
  *param_1 = plVar2[0x3500];
  FUN_02f59e70(10);
  return;
}


