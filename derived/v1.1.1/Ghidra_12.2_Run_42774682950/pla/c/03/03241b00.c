/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03241b00; name: _INIT_844
 */


void _INIT_844(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044380e0 & 1) == 0) {
    DAT_044380d0 = 0;
    DAT_044380d8 = 0;
    DAT_0444ac08 = &DAT_044380c0;
    DAT_044380c0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044380c8 = &DAT_0430bae0;
    DAT_044380e0 = 1;
  }
  return;
}


