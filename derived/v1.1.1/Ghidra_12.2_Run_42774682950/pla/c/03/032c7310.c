/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c7310; name: _INIT_1562
 */


void _INIT_1562(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04444d20 & 1) == 0) {
    DAT_04444d10 = 0;
    DAT_04444d18 = 0;
    DAT_0444ac08 = &DAT_04444d00;
    DAT_04444d00 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04444d08 = &DAT_04349390;
    DAT_04444d20 = 1;
  }
  return;
}


