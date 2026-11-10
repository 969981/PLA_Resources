/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f00c0; name: _INIT_1616
 */


void _INIT_1616(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444aaa0 & 1) == 0) {
    DAT_0444aa90 = 0;
    DAT_0444aa98 = 0;
    DAT_0444ac08 = &DAT_0444aa80;
    DAT_0444aa80 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444aa88 = &DAT_0434cfc0;
    DAT_0444aaa0 = 1;
  }
  return;
}


