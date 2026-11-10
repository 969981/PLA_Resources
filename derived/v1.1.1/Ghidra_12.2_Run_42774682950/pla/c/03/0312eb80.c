/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312eb80; name: _INIT_599
 */


void _INIT_599(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04432a00 & 1) == 0) {
    DAT_044329f0 = 0;
    DAT_044329f8 = 0;
    DAT_0444ac08 = &DAT_044329e0;
    DAT_044329e0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044329e8 = &DAT_042e1a20;
    DAT_04432a00 = 1;
  }
  return;
}


