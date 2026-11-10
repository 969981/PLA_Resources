/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010e62c4; name: FUN_010e62c4
 */


uint FUN_010e62c4(long param_1)

{
  int iVar1;
  
  if (*(byte *)(param_1 + 0x4a8) == 0x20) {
    iVar1 = FUN_010e630c();
    return iVar1 + 0x1d;
  }
  return (uint)*(byte *)(param_1 + 0x4a8);
}


