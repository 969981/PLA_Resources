/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03245320; name: _INIT_997
 */


void _INIT_997(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044398c8 & 1) == 0) {
    DAT_044398b8 = 0;
    DAT_044398c0 = 0;
    DAT_0444ac08 = &DAT_044398a8;
    DAT_044398a8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044398b0 = &DAT_04315560;
    DAT_044398c8 = 1;
  }
  return;
}


