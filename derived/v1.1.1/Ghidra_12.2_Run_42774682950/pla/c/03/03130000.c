/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03130000; name: _INIT_678
 */


void _INIT_678(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04433658 & 1) == 0) {
    DAT_04433648 = 0;
    DAT_04433650 = 0;
    DAT_0444ac08 = &DAT_04433638;
    DAT_04433638 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433640 = &DAT_042e66d8;
    DAT_04433658 = 1;
  }
  return;
}


