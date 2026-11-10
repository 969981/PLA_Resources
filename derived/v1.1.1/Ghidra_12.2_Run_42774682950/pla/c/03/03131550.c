/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03131550; name: _INIT_761
 */


void _INIT_761(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04434350 & 1) == 0) {
    DAT_04434340 = 0;
    DAT_04434348 = 0;
    DAT_0444ac08 = &DAT_04434330;
    DAT_04434330 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04434338 = &DAT_042ebe38;
    DAT_04434350 = 1;
  }
  return;
}


