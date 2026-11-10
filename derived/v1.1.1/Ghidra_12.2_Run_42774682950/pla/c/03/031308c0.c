/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031308c0; name: _INIT_713
 */


void _INIT_713(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04433bd0 & 1) == 0) {
    DAT_04433bc0 = 0;
    DAT_04433bc8 = 0;
    DAT_0444ac08 = &DAT_04433bb0;
    DAT_04433bb0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433bb8 = &DAT_042e8c88;
    DAT_04433bd0 = 1;
  }
  return;
}


