/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312dfc0; name: _INIT_554
 */


void _INIT_554(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04432308 & 1) == 0) {
    DAT_044322f8 = 0;
    DAT_04432300 = 0;
    DAT_0444ac08 = &DAT_044322e8;
    DAT_044322e8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044322f0 = &DAT_042dee30;
    DAT_04432308 = 1;
  }
  return;
}


