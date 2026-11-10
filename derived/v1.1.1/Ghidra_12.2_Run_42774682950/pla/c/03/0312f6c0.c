/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312f6c0; name: _INIT_642
 */


void _INIT_642(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044330b8 & 1) == 0) {
    DAT_044330a8 = 0;
    DAT_044330b0 = 0;
    DAT_0444ac08 = &DAT_04433098;
    DAT_04433098 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044330a0 = &DAT_042e41a0;
    DAT_044330b8 = 1;
  }
  return;
}


