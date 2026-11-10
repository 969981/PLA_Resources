/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03130240; name: _INIT_687
 */


void _INIT_687(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044337c0 & 1) == 0) {
    DAT_044337b0 = 0;
    DAT_044337b8 = 0;
    DAT_0444ac08 = &DAT_044337a0;
    DAT_044337a0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044337a8 = &DAT_042e70f8;
    DAT_044337c0 = 1;
  }
  return;
}


