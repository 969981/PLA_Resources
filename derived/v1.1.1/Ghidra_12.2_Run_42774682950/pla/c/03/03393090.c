/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03393090; name: FUN_03393090
 */


void FUN_03393090(long *param_1,int param_2,int param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  
  iVar1 = param_2;
  if (param_2 <= param_3) {
    iVar1 = param_3;
  }
  FUN_03397090(iVar1,param_1);
  *(uint *)(*param_1 + (long)param_3 * 0xc) = param_4 | 0x30000000;
  *(undefined4 *)(*param_1 + (long)param_3 * 0xc + 4) = param_5;
  *(int *)(*param_1 + (long)param_3 * 0xc + 8) = param_2;
  if (*(uint *)(*param_1 + (long)param_2 * 0xc) >> 0x1c == 0) {
    *(int *)(*param_1 + (long)param_2 * 0xc + 8) = param_3;
  }
  return;
}


