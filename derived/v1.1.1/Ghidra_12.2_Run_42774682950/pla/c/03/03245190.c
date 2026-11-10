/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03245190; name: _INIT_991
 */


void _INIT_991(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044397d8 & 1) == 0) {
    DAT_044397c8 = 0;
    DAT_044397d0 = 0;
    DAT_0444ac08 = &DAT_044397b8;
    DAT_044397b8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044397c0 = &DAT_04314f70;
    DAT_044397d8 = 1;
  }
  return;
}


