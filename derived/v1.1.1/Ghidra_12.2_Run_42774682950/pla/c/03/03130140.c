/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03130140; name: _INIT_683
 */


void _INIT_683(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04433720 & 1) == 0) {
    DAT_04433710 = 0;
    DAT_04433718 = 0;
    DAT_0444ac08 = &DAT_04433700;
    DAT_04433700 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433708 = &DAT_042e6d28;
    DAT_04433720 = 1;
  }
  return;
}


