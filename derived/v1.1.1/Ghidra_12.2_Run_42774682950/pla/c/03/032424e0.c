/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032424e0; name: _INIT_883
 */


void _INIT_883(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044386f8 & 1) == 0) {
    DAT_044386e8 = 0;
    DAT_044386f0 = 0;
    DAT_0444ac08 = &DAT_044386d8;
    DAT_044386d8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044386e0 = &DAT_0430e1e8;
    DAT_044386f8 = 1;
  }
  return;
}


