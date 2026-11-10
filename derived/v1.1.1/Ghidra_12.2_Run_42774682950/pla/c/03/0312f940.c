/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312f940; name: _INIT_651
 */


void _INIT_651(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04433220 & 1) == 0) {
    DAT_04433210 = 0;
    DAT_04433218 = 0;
    DAT_0444ac08 = &DAT_04433200;
    DAT_04433200 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433208 = &DAT_042e4c10;
    DAT_04433220 = 1;
  }
  return;
}


