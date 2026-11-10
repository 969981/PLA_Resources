/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004cf3f0; name: FUN_004cf3f0
 */


undefined8 FUN_004cf3f0(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = FUN_004bfbc0(*(undefined8 *)(param_1 + 0x458),*(undefined8 *)(param_2 + 0x20),
                       *(int *)(param_2 + 8) + 0x400,*(undefined8 *)(param_2 + 0x28));
  if (iVar1 < 0) {
    return 0;
  }
  *(long *)(param_2 + 8) = (long)iVar1;
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_2 + 0x20);
  return 1;
}


