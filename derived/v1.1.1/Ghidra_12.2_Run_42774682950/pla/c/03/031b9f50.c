/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b9f50; name: FUN_031b9f50
 */


long FUN_031b9f50(long param_1,int param_2,long *param_3,long *param_4,long param_5,long *param_6,
                 long *param_7,long *param_8,int param_9,int param_10,long *param_11)

{
  long lVar1;
  int iVar2;
  
  if (param_9 < param_2) {
    iVar2 = param_9;
    if ((int)param_8[1] != 0) {
      iVar2 = *(int *)(*param_8 + (long)param_9 * 4);
    }
    if (iVar2 == -1) {
      param_5 = param_5 + (long)(param_10 * param_9) * 4;
      *param_11 = param_5;
      param_11[1] = param_5 + (long)param_10 * 4;
    }
    else {
      lVar1 = *param_6 + (long)(iVar2 * param_10) * 4;
      *param_11 = lVar1;
      param_11[1] = lVar1 + (long)param_10 * 4;
      param_1 = *param_3;
      param_9 = iVar2;
    }
  }
  else {
    lVar1 = *param_7 + (long)((param_9 - param_2) * param_10) * 4;
    *param_11 = lVar1;
    param_11[1] = lVar1 + (long)param_10 * 4;
    param_1 = *param_4;
    param_9 = param_9 - param_2;
  }
  return param_1 + (long)param_9 * 0x14;
}


