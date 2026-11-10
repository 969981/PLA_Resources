/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312fd40; name: _INIT_667
 */


void _INIT_667(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044334a0 & 1) == 0) {
    DAT_04433490 = 0;
    DAT_04433498 = 0;
    DAT_0444ac08 = &DAT_04433480;
    DAT_04433480 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433488 = &DAT_042e5bb8;
    DAT_044334a0 = 1;
  }
  return;
}


