/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03365220; name: _INIT_1844
 */


void _INIT_1844(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04450008 & 1) == 0) {
    DAT_0444fff8 = 0;
    DAT_04450000 = 0;
    DAT_0444ac08 = &DAT_0444ffe8;
    DAT_0444ffe8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444fff0 = &DAT_0436c080;
    DAT_04450008 = 1;
  }
  return;
}


