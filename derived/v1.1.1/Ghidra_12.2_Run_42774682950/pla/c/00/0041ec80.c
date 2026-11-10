/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041ec80; name: FUN_0041ec80
 */


void FUN_0041ec80(int *param_1,int param_2,long param_3)

{
  int iVar1;
  int *local_18;
  
  if (*(long *)(param_1 + 2) != 0) {
    local_18 = param_1;
    FUN_00421b50(&local_18,0,0);
    param_1 = local_18;
  }
  *param_1 = param_2;
  if (param_2 != 1) {
    *(long *)(param_1 + 2) = param_3;
    return;
  }
  iVar1 = 0;
  if (param_3 != 0) {
    iVar1 = 0xff;
  }
  param_1[2] = iVar1;
  return;
}


