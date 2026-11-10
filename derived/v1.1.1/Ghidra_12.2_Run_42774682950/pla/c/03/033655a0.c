/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033655a0; name: _INIT_1858
 */


void _INIT_1858(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04450238 & 1) == 0) {
    DAT_04450228 = 0;
    DAT_04450230 = 0;
    DAT_0444ac08 = &DAT_04450218;
    DAT_04450218 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04450220 = &DAT_0436d230;
    DAT_04450238 = 1;
  }
  return;
}


