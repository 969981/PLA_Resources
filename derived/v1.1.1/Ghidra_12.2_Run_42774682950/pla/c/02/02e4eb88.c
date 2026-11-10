/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4eb88; name: FUN_02e4eb88
 */


void FUN_02e4eb88(long *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar2 = (long *)*param_1;
  if ((plVar2 == (long *)0x0) || (plVar2 <= param_2 && param_2 < plVar2 + 0x50)) {
    plVar3 = (long *)0x0;
    lVar4 = plVar2[0x52];
  }
  else {
    do {
      plVar3 = plVar2;
      plVar2 = (long *)plVar3[0x50];
      if (plVar2 == (long *)0x0) break;
    } while ((param_2 < plVar2) || (plVar2 + 0x50 <= param_2));
    lVar4 = plVar2[0x52];
  }
  if (lVar4 == 0) {
    plVar2[0x52] = (long)param_2;
    *param_2 = 0;
  }
  else {
    *param_2 = lVar4;
    plVar2[0x52] = (long)param_2;
  }
  iVar1 = (int)plVar2[0x51] + 1;
  *(int *)(plVar2 + 0x51) = iVar1;
  if (iVar1 != 8) {
    return;
  }
  if ((long *)*param_1 != plVar2) {
    param_1 = plVar3 + 0x50;
  }
  *param_1 = plVar2[0x50];
  FUN_02f59e60(0xb);
  return;
}


