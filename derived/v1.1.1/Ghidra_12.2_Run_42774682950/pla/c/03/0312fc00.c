/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312fc00; name: _INIT_662
 */


void _INIT_662(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044333d8 & 1) == 0) {
    DAT_044333c8 = 0;
    DAT_044333d0 = 0;
    DAT_0444ac08 = &DAT_044333b8;
    DAT_044333b8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044333c0 = &DAT_042e5678;
    DAT_044333d8 = 1;
  }
  return;
}


