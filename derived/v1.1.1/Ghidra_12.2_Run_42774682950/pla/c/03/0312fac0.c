/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312fac0; name: _INIT_657
 */


void _INIT_657(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04433310 & 1) == 0) {
    DAT_04433300 = 0;
    DAT_04433308 = 0;
    DAT_0444ac08 = &DAT_044332f0;
    DAT_044332f0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044332f8 = &DAT_042e5178;
    DAT_04433310 = 1;
  }
  return;
}


