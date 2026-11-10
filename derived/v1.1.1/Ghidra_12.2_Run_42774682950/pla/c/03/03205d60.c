/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03205d60; name: _INIT_830
 */


void _INIT_830(void)

{
  if ((DAT_04434e78 & 1) == 0) {
    DAT_04434e70 = &PTR_FUN_042f1cf0;
    DAT_04434e78 = 1;
  }
  return;
}


