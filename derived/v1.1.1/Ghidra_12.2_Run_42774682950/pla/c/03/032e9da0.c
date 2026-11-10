/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e9da0; name: _INIT_1601
 */


void _INIT_1601(void)

{
  if ((DAT_0444a7d0 & 1) == 0) {
    DAT_0444a7d0 = 1;
    DAT_0444a7c0 = &PTR_LAB_0434bff8;
    DAT_0444a7c8 = 1;
  }
  return;
}


