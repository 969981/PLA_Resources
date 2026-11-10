/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312fe00; name: _INIT_670
 */


void _INIT_670(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04433518 & 1) == 0) {
    DAT_04433508 = 0;
    DAT_04433510 = 0;
    DAT_0444ac08 = &DAT_044334f8;
    DAT_044334f8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433500 = &DAT_042e5eb0;
    DAT_04433518 = 1;
  }
  return;
}


