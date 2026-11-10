/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03130500; name: _INIT_698
 */


void _INIT_698(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04433978 & 1) == 0) {
    DAT_04433968 = 0;
    DAT_04433970 = 0;
    DAT_0444ac08 = &DAT_04433958;
    DAT_04433958 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433960 = &DAT_042e7d10;
    DAT_04433978 = 1;
  }
  return;
}


