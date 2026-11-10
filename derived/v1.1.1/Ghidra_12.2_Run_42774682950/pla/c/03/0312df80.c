/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312df80; name: _INIT_553
 */


void _INIT_553(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044322e0 & 1) == 0) {
    DAT_044322d0 = 0;
    DAT_044322d8 = 0;
    DAT_0444ac08 = &DAT_044322c0;
    DAT_044322c0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044322c8 = &DAT_042ded50;
    DAT_044322e0 = 1;
  }
  return;
}


