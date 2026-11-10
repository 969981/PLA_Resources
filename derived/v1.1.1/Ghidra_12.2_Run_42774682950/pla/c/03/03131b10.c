/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03131b10; name: _INIT_784
 */


void _INIT_784(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044346e8 & 1) == 0) {
    DAT_044346d8 = 0;
    DAT_044346e0 = 0;
    DAT_0444ac08 = &DAT_044346c8;
    DAT_044346c8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044346d0 = &DAT_042ed620;
    DAT_044346e8 = 1;
  }
  return;
}


