/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03130880; name: _INIT_712
 */


void _INIT_712(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04433ba8 & 1) == 0) {
    DAT_04433b98 = 0;
    DAT_04433ba0 = 0;
    DAT_0444ac08 = &DAT_04433b88;
    DAT_04433b88 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433b90 = &DAT_042e8b80;
    DAT_04433ba8 = 1;
  }
  return;
}


