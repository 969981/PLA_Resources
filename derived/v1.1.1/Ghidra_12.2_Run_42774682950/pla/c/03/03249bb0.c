/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03249bb0; name: _INIT_1207
 */


void _INIT_1207(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443b998 & 1) == 0) {
    DAT_0443b988 = 0;
    DAT_0443b990 = 0;
    DAT_0444ac08 = &DAT_0443b978;
    DAT_0443b978 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443b980 = &DAT_04322578;
    DAT_0443b998 = 1;
  }
  return;
}


