/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312eb40; name: _INIT_598
 */


void _INIT_598(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044329d8 & 1) == 0) {
    DAT_044329c8 = 0;
    DAT_044329d0 = 0;
    DAT_0444ac08 = &DAT_044329b8;
    DAT_044329b8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044329c0 = &DAT_042e1918;
    DAT_044329d8 = 1;
  }
  return;
}


