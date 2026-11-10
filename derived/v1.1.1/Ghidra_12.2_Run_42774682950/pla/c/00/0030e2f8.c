/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030e2f8; name: FUN_0030e2f8
 */


void FUN_0030e2f8(long *param_1,long param_2,int param_3,int param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04373a48;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = param_2;
  if (param_4 < 1) {
    param_4 = param_3;
  }
  *(int *)(param_1 + 2) = param_3;
  *(int *)((long)param_1 + 0x14) = param_4;
  return;
}


