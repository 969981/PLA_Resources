/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032424a0; name: _INIT_882
 */


void _INIT_882(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044386d0 & 1) == 0) {
    DAT_044386c0 = 0;
    DAT_044386c8 = 0;
    DAT_0444ac08 = &DAT_044386b0;
    DAT_044386b0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044386b8 = &DAT_0430e108;
    DAT_044386d0 = 1;
  }
  return;
}


