/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0be90; name: FUN_02f0be90
 */


void FUN_02f0be90(long *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  if ((DAT_0440ab50 == (long *)0x0) ||
     (plVar3 = DAT_0440ab50, DAT_0440ab50 <= param_1 && param_1 < DAT_0440ab50 + 0x780)) {
    plVar4 = (long *)0x0;
    lVar5 = DAT_0440ab50[0x782];
    plVar3 = DAT_0440ab50;
  }
  else {
    do {
      plVar4 = plVar3;
      plVar3 = (long *)plVar4[0x780];
      if (plVar3 == (long *)0x0) break;
    } while ((param_1 < plVar3) || (plVar3 + 0x780 <= param_1));
    lVar5 = plVar3[0x782];
  }
  if (lVar5 == 0) {
    plVar3[0x782] = (long)param_1;
    *param_1 = 0;
  }
  else {
    *param_1 = lVar5;
    plVar3[0x782] = (long)param_1;
  }
  iVar1 = (int)plVar3[0x781] + 1;
  *(int *)(plVar3 + 0x781) = iVar1;
  if (iVar1 != 0x80) {
    return;
  }
  plVar2 = (long *)&DAT_0440ab50;
  if (DAT_0440ab50 != plVar3) {
    plVar2 = plVar4 + 0x780;
  }
  *plVar2 = plVar3[0x780];
                    /* WARNING: Could not recover jumptable at 0x02f0bf28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0442d150)(0);
  return;
}


