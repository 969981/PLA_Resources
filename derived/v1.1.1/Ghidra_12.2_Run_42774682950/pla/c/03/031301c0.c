/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031301c0; name: _INIT_685
 */


void _INIT_685(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04433770 & 1) == 0) {
    DAT_04433760 = 0;
    DAT_04433768 = 0;
    DAT_0444ac08 = &DAT_04433750;
    DAT_04433750 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433758 = &DAT_042e6f38;
    DAT_04433770 = 1;
  }
  return;
}


