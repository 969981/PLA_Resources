/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312dcc0; name: _INIT_543
 */


void _INIT_543(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04432150 & 1) == 0) {
    DAT_04432140 = 0;
    DAT_04432148 = 0;
    DAT_0444ac08 = &DAT_04432130;
    DAT_04432130 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04432138 = &DAT_042de250;
    DAT_04432150 = 1;
  }
  return;
}


