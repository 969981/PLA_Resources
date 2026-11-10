/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312dbc0; name: _INIT_539
 */


void _INIT_539(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044320b0 & 1) == 0) {
    DAT_044320a0 = 0;
    DAT_044320a8 = 0;
    DAT_0444ac08 = &DAT_04432090;
    DAT_04432090 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04432098 = &DAT_042dddb0;
    DAT_044320b0 = 1;
  }
  return;
}


