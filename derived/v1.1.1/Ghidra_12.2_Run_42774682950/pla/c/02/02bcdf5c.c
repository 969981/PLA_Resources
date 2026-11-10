/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcdf5c; name: FUN_02bcdf5c
 */


long FUN_02bcdf5c(ulong *param_1)

{
  long lVar1;
  
  lVar1 = *param_1 + 0x18;
  if (*param_1 < 0x11) {
    lVar1 = 0x28;
  }
  return lVar1;
}


