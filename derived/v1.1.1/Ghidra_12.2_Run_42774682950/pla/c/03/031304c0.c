/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031304c0; name: _INIT_697
 */


void _INIT_697(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04433950 & 1) == 0) {
    DAT_04433940 = 0;
    DAT_04433948 = 0;
    DAT_0444ac08 = &DAT_04433930;
    DAT_04433930 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433938 = &DAT_042e7c00;
    DAT_04433950 = 1;
  }
  return;
}


