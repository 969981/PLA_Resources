/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312e100; name: _INIT_559
 */


void _INIT_559(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044323d0 & 1) == 0) {
    DAT_044323c0 = 0;
    DAT_044323c8 = 0;
    DAT_0444ac08 = &DAT_044323b0;
    DAT_044323b0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044323b8 = &DAT_042df338;
    DAT_044323d0 = 1;
  }
  return;
}


