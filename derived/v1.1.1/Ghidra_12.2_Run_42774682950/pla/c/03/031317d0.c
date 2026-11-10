/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031317d0; name: _INIT_771
 */


void _INIT_771(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044344e0 & 1) == 0) {
    DAT_044344d0 = 0;
    DAT_044344d8 = 0;
    DAT_0444ac08 = &DAT_044344c0;
    DAT_044344c0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044344c8 = &DAT_042ecc10;
    DAT_044344e0 = 1;
  }
  return;
}


