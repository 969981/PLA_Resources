/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03244d00; name: _INIT_973
 */


void _INIT_973(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439508 & 1) == 0) {
    DAT_044394f8 = 0;
    DAT_04439500 = 0;
    DAT_0444ac08 = &DAT_044394e8;
    DAT_044394e8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044394f0 = &DAT_04313b88;
    DAT_04439508 = 1;
  }
  return;
}


