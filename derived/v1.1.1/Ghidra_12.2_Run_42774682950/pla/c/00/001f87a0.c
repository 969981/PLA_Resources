/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f87a0; name: FUN_001f87a0
 */


long * FUN_001f87a0(long param_1,int param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long local_38;
  long local_30;
  
  if (param_3 == (long *)0x0) {
    return (long *)0x0;
  }
  plVar3 = &local_38;
  local_38 = 0;
  local_30 = 0;
  plVar2 = &local_38;
  for (; param_1 < param_3[4]; param_3 = (long *)*param_3) {
LAB_001f87c0:
    plVar1 = (long *)*param_3;
    if (plVar1 == (long *)0x0) goto LAB_001f8874;
    if ((param_1 < plVar1[4]) || ((param_1 <= plVar1[4] && (param_2 < (int)plVar1[5])))) {
      *param_3 = plVar1[1];
      plVar1[1] = (long)param_3;
      param_3 = plVar1;
      if (*plVar1 == 0) goto LAB_001f8878;
    }
    *plVar3 = (long)param_3;
    plVar1 = plVar2;
    plVar3 = param_3;
LAB_001f886c:
    plVar2 = plVar1;
  }
  if (param_3[4] < param_1) {
LAB_001f8810:
    plVar1 = (long *)param_3[1];
    if (plVar1 != (long *)0x0) {
      if ((param_1 < plVar1[4]) || ((param_1 <= plVar1[4] && (param_2 <= (int)plVar1[5])))) {
        plVar1 = param_3;
LAB_001f8860:
        plVar2[1] = (long)plVar1;
        param_3 = plVar1 + 1;
        goto LAB_001f886c;
      }
      param_3[1] = *plVar1;
      *plVar1 = (long)param_3;
      if (plVar1[1] != 0) goto LAB_001f8860;
      goto LAB_001f8878;
    }
  }
  else {
    if (param_2 < (int)param_3[5]) goto LAB_001f87c0;
    if ((int)param_3[5] < param_2) goto LAB_001f8810;
  }
LAB_001f8874:
  plVar1 = param_3;
LAB_001f8878:
  plVar2[1] = *plVar1;
  *plVar3 = plVar1[1];
  *plVar1 = local_30;
  plVar1[1] = local_38;
  return plVar1;
}


