/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312ff40; name: _INIT_675
 */


void _INIT_675(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044335e0 & 1) == 0) {
    DAT_044335d0 = 0;
    DAT_044335d8 = 0;
    DAT_0444ac08 = &DAT_044335c0;
    DAT_044335c0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044335c8 = &DAT_042e63d8;
    DAT_044335e0 = 1;
  }
  return;
}


