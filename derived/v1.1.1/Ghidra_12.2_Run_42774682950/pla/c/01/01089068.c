/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01089068; name: FUN_01089068
 */


void FUN_01089068(long param_1,long param_2)

{
  float fVar1;
  
  FUN_010896ac();
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  fVar1 = *(float *)(param_2 + 0x14);
  *(float *)(param_1 + 0x18) = fVar1;
  *(long *)(param_1 + 0x20) = (long)fVar1;
  FUN_010890a8(param_1);
  return;
}


