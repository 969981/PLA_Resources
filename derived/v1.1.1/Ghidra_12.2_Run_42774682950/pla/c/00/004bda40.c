/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004bda40; name: FUN_004bda40
 */


undefined8 FUN_004bda40(uint param_1)

{
  if ((param_1 & 0xff) < 0xc) {
    return (&DAT_0439ea30)[param_1 & 0xff];
  }
  return 0;
}


