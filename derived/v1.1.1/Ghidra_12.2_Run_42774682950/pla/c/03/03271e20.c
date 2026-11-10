/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03271e20; name: _INIT_1267
 */


void _INIT_1267(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443cfc0 & 1) == 0) {
    DAT_0443cfb0 = 0;
    DAT_0443cfb8 = 0;
    DAT_0444ac08 = &DAT_0443cfa0;
    DAT_0443cfa0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443cfa8 = &DAT_0432dc88;
    DAT_0443cfc0 = 1;
  }
  return;
}


