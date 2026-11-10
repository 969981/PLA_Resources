/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013aa6d0; name: FUN_013aa6d0
 */


void FUN_013aa6d0(long *param_1,int param_2,char *param_3)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (param_2 != 2) {
    if (param_2 != 1) {
      if (param_2 != 0) {
        return;
      }
      param_1 = param_1 + 1;
      goto LAB_013aa714;
    }
    if (*param_3 != '\0') {
      FUN_02728014(param_3 + 8);
    }
  }
  param_1 = (long *)((long)param_1 + 0xc);
LAB_013aa714:
  *(int *)(lVar1 + 0x90) = (int)*param_1;
  return;
}


