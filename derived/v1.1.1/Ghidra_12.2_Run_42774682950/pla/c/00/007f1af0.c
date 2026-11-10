/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f1af0; name: FUN_007f1af0
 */


void FUN_007f1af0(ushort *param_1,ushort param_2)

{
  ushort uVar1;
  
  uVar1 = *param_1;
  if (*param_1 <= param_2) {
    uVar1 = param_2;
  }
  *param_1 = uVar1;
  param_1[1] = param_2;
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
  return;
}


