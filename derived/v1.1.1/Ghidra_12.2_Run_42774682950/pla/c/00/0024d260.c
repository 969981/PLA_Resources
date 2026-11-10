/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0024d260; name: FUN_0024d260
 */


int FUN_0024d260(long param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(ushort *)(param_1 + 0x110) != 0) {
    iVar1 = *(ushort *)(param_1 + 0x110) - 1;
  }
  return iVar1;
}


