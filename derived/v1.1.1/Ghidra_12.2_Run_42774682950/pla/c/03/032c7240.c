/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c7240; name: _INIT_1559
 */


void _INIT_1559(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04444ca8 & 1) == 0) {
    DAT_04444c98 = 0;
    DAT_04444ca0 = 0;
    DAT_0444ac08 = &DAT_04444c88;
    DAT_04444c88 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04444c90 = &DAT_04349070;
    DAT_04444ca8 = 1;
  }
  return;
}


