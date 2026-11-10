/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312f560; name: _INIT_637
 */


void _INIT_637(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04432ff0 & 1) == 0) {
    DAT_04432fe0 = 0;
    DAT_04432fe8 = 0;
    DAT_0444ac08 = &DAT_04432fd0;
    DAT_04432fd0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04432fd8 = &DAT_042e3db8;
    DAT_04432ff0 = 1;
  }
  return;
}


