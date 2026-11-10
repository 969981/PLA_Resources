/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03244b40; name: _INIT_966
 */


void _INIT_966(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044393f0 & 1) == 0) {
    DAT_044393e0 = 0;
    DAT_044393e8 = 0;
    DAT_0444ac08 = &DAT_044393d0;
    DAT_044393d0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044393d8 = &DAT_043134c8;
    DAT_044393f0 = 1;
  }
  return;
}


