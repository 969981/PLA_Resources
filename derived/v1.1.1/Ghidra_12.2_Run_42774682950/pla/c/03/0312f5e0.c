/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312f5e0; name: _INIT_639
 */


void _INIT_639(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04433040 & 1) == 0) {
    DAT_04433030 = 0;
    DAT_04433038 = 0;
    DAT_0444ac08 = &DAT_04433020;
    DAT_04433020 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433028 = &DAT_042e3f78;
    DAT_04433040 = 1;
  }
  return;
}


