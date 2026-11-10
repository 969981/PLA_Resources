/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f2314; name: FUN_007f2314
 */


ushort FUN_007f2314(long param_1)

{
  ushort uVar1;
  
  if ((*(long *)(param_1 + 0x20) == 0) || (*(int *)(param_1 + 0x28) == 0)) {
    return 0;
  }
  uVar1 = *(ushort *)(*(long *)(param_1 + 0x20) + 3);
  return uVar1 >> 8 | uVar1 << 8;
}


