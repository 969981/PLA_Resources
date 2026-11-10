/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03131810; name: _INIT_772
 */


void _INIT_772(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04434508 & 1) == 0) {
    DAT_044344f8 = 0;
    DAT_04434500 = 0;
    DAT_0444ac08 = &DAT_044344e8;
    DAT_044344e8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044344f0 = &DAT_042ecda8;
    DAT_04434508 = 1;
  }
  return;
}


