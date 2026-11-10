/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ad648; name: FUN_032ad648
 */


uint FUN_032ad648(uint param_1)

{
  return (param_1 & 0x8000) * 0x1fe00 | (param_1 & 0x1f) * 0x83c00 + 0x5c00 & 0xff0000 |
         (param_1 & 0x3e0) * 0x20f + 0x2e0 >> 3 & 0xff00 |
         (param_1 & 0x7c00) * 0x20f + 0x5c00 >> 0x10 & 0xff;
}


