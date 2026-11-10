/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03130f90; name: _INIT_739
 */


void _INIT_739(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04433fe0 & 1) == 0) {
    DAT_04433fd0 = 0;
    DAT_04433fd8 = 0;
    DAT_0444ac08 = &DAT_04433fc0;
    DAT_04433fc0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433fc8 = &DAT_042ea4b8;
    DAT_04433fe0 = 1;
  }
  return;
}


