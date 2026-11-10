/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03131610; name: _INIT_764
 */


void _INIT_764(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044343c8 & 1) == 0) {
    DAT_044343b8 = 0;
    DAT_044343c0 = 0;
    DAT_0444ac08 = &DAT_044343a8;
    DAT_044343a8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044343b0 = &DAT_042ec300;
    DAT_044343c8 = 1;
  }
  return;
}


