/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03365720; name: _INIT_1864
 */


void _INIT_1864(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04450328 & 1) == 0) {
    DAT_04450318 = 0;
    DAT_04450320 = 0;
    DAT_0444ac08 = &DAT_04450308;
    DAT_04450308 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04450310 = &DAT_0436d9b8;
    DAT_04450328 = 1;
  }
  return;
}


