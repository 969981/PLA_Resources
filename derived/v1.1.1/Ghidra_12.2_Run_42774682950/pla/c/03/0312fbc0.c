/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312fbc0; name: _INIT_661
 */


void _INIT_661(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044333b0 & 1) == 0) {
    DAT_044333a0 = 0;
    DAT_044333a8 = 0;
    DAT_0444ac08 = &DAT_04433390;
    DAT_04433390 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433398 = &DAT_042e5598;
    DAT_044333b0 = 1;
  }
  return;
}


