/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312f740; name: _INIT_644
 */


void _INIT_644(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04433108 & 1) == 0) {
    DAT_044330f8 = 0;
    DAT_04433100 = 0;
    DAT_0444ac08 = &DAT_044330e8;
    DAT_044330e8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044330f0 = &DAT_042e4310;
    DAT_04433108 = 1;
  }
  return;
}


