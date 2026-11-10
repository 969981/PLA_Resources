/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03131b50; name: _INIT_785
 */


void _INIT_785(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04434710 & 1) == 0) {
    DAT_04434700 = 0;
    DAT_04434708 = 0;
    DAT_0444ac08 = &DAT_044346f0;
    DAT_044346f0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044346f8 = &DAT_042ed7b8;
    DAT_04434710 = 1;
  }
  return;
}


