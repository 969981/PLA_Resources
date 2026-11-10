/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edbd74; name: FUN_02edbd74
 */


long * FUN_02edbd74(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (*param_1 == 0) {
    *param_1 = lVar1;
  }
  else {
    FUN_02e9ecd8();
    *param_1 = lVar1;
  }
  if (lVar1 != 0) {
    *(short *)(lVar1 + 0x10) = *(short *)(lVar1 + 0x10) + 1;
  }
  return param_1;
}


