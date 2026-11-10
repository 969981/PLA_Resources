/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03130340; name: _INIT_691
 */


void _INIT_691(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04433860 & 1) == 0) {
    DAT_04433850 = 0;
    DAT_04433858 = 0;
    DAT_0444ac08 = &DAT_04433840;
    DAT_04433840 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433848 = &DAT_042e74e0;
    DAT_04433860 = 1;
  }
  return;
}


