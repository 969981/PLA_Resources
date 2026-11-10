/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00934624; name: FUN_00934624
 */


undefined1 FUN_00934624(void)

{
  long lVar1;
  
  lVar1 = FUN_00934460();
  if (lVar1 == 0) {
    return 0x1f;
  }
  return *(undefined1 *)(*(long *)(lVar1 + 0x70) + 0x7d);
}


