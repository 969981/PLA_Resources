/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312e420; name: _INIT_570
 */


void _INIT_570(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04432588 & 1) == 0) {
    DAT_04432578 = 0;
    DAT_04432580 = 0;
    DAT_0444ac08 = &DAT_04432568;
    DAT_04432568 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04432570 = &DAT_042dfe10;
    DAT_04432588 = 1;
  }
  return;
}


