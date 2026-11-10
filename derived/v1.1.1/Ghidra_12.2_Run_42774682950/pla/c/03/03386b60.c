/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03386b60; name: _INIT_1880
 */


void _INIT_1880(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044509c0 & 1) == 0) {
    DAT_044509b0 = 0;
    DAT_044509b8 = 0;
    DAT_0444ac08 = &DAT_044509a0;
    DAT_044509a0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044509a8 = &DAT_0436ee00;
    DAT_044509c0 = 1;
  }
  return;
}


