/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0286b054; name: FUN_0286b054
 */


bool FUN_0286b054(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x50) + 0xd0);
  if (((lVar1 == 0) || (*(long *)(lVar1 + 0x68) == 0)) || (*(char *)(lVar1 + 0x78) == '\0')) {
    return false;
  }
  return *(char *)(*(long *)(lVar1 + 0x68) + 0x7e0) != '\0';
}


