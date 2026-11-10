/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031307c0; name: _INIT_709
 */


void _INIT_709(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04433b30 & 1) == 0) {
    DAT_04433b20 = 0;
    DAT_04433b28 = 0;
    DAT_0444ac08 = &DAT_04433b10;
    DAT_04433b10 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433b18 = &DAT_042e8868;
    DAT_04433b30 = 1;
  }
  return;
}


