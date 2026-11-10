/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03131690; name: _INIT_766
 */


void _INIT_766(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04434418 & 1) == 0) {
    DAT_04434408 = 0;
    DAT_04434410 = 0;
    DAT_0444ac08 = &DAT_044343f8;
    DAT_044343f8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04434400 = &DAT_042ec538;
    DAT_04434418 = 1;
  }
  return;
}


