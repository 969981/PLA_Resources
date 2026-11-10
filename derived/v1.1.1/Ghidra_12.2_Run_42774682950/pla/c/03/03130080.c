/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03130080; name: _INIT_680
 */


void _INIT_680(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044336a8 & 1) == 0) {
    DAT_04433698 = 0;
    DAT_044336a0 = 0;
    DAT_0444ac08 = &DAT_04433688;
    DAT_04433688 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433690 = &DAT_042e68c0;
    DAT_044336a8 = 1;
  }
  return;
}


