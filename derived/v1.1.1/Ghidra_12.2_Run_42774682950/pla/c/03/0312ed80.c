/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312ed80; name: _INIT_607
 */


void _INIT_607(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04432b40 & 1) == 0) {
    DAT_04432b30 = 0;
    DAT_04432b38 = 0;
    DAT_0444ac08 = &DAT_04432b20;
    DAT_04432b20 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04432b28 = &DAT_042e2290;
    DAT_04432b40 = 1;
  }
  return;
}


