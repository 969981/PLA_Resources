/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03365460; name: _INIT_1853
 */


void _INIT_1853(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04450170 & 1) == 0) {
    DAT_04450160 = 0;
    DAT_04450168 = 0;
    DAT_0444ac08 = &DAT_04450150;
    DAT_04450150 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04450158 = &DAT_0436cc38;
    DAT_04450170 = 1;
  }
  return;
}


