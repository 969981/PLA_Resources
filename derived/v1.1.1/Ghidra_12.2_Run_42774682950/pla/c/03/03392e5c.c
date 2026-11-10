/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03392e5c; name: FUN_03392e5c
 */


void FUN_03392e5c(long *param_1,int param_2,uint param_3)

{
  FUN_03397090(param_2,param_1);
  *(uint *)(*param_1 + (long)param_2 * 0xc) = param_3 | 0x40000000;
  *(undefined4 *)(*param_1 + (long)param_2 * 0xc + 4) = 0xffffffff;
  *(undefined4 *)(*param_1 + (long)param_2 * 0xc + 8) = 0;
  return;
}


