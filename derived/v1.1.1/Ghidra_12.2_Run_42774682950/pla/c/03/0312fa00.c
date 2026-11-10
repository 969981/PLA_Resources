/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312fa00; name: _INIT_654
 */


void _INIT_654(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04433298 & 1) == 0) {
    DAT_04433288 = 0;
    DAT_04433290 = 0;
    DAT_0444ac08 = &DAT_04433278;
    DAT_04433278 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433280 = &DAT_042e4e88;
    DAT_04433298 = 1;
  }
  return;
}


