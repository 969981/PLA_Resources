/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033656a0; name: _INIT_1862
 */


void _INIT_1862(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044502d8 & 1) == 0) {
    DAT_044502c8 = 0;
    DAT_044502d0 = 0;
    DAT_0444ac08 = &DAT_044502b8;
    DAT_044502b8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044502c0 = &DAT_0436d750;
    DAT_044502d8 = 1;
  }
  return;
}


