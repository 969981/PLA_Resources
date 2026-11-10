/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03365320; name: _INIT_1848
 */


void _INIT_1848(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044500a8 & 1) == 0) {
    DAT_04450098 = 0;
    DAT_044500a0 = 0;
    DAT_0444ac08 = &DAT_04450088;
    DAT_04450088 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04450090 = &DAT_0436c6f0;
    DAT_044500a8 = 1;
  }
  return;
}


