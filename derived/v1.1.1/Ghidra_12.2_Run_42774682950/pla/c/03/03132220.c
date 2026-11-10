/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03132220; name: _INIT_805
 */


void _INIT_805(void)

{
  if ((DAT_04434a30 & 1) == 0) {
    DAT_04434a28 = 0;
    DAT_04434a20 = FUN_03131fa0;
    DAT_04434a18 = 1;
    DAT_04434a10 = &PTR_LAB_0434dae8;
    DAT_04434a30 = 1;
  }
  return;
}


