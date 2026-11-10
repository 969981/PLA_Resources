/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020c708; name: FUN_0020c708
 */


bool FUN_0020c708(long param_1)

{
  long lVar1;
  
  lVar1 = **(long **)(param_1 + 8);
  if (lVar1 == 0) {
    return false;
  }
  return *(long *)(lVar1 + 0x20) != *(long *)(lVar1 + 0x18);
}


