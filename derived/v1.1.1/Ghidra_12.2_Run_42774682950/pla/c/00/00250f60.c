/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00250f60; name: FUN_00250f60
 */


bool FUN_00250f60(long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x28) == 0) ||
     (lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x20), lVar1 == 0)) {
    return false;
  }
  return *(char *)(lVar1 + 0x110) != '\0';
}


