/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03130a20; name: _INIT_718
 */


void _INIT_718(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04433c98 & 1) == 0) {
    DAT_04433c88 = 0;
    DAT_04433c90 = 0;
    DAT_0444ac08 = &DAT_04433c78;
    DAT_04433c78 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433c80 = &DAT_042e9088;
    DAT_04433c98 = 1;
  }
  return;
}


