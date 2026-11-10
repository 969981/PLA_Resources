/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0328cb30; name: _INIT_1463
 */


void _INIT_1463(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443f098 & 1) == 0) {
    DAT_0443f088 = 0;
    DAT_0443f090 = 0;
    DAT_0444ac08 = &DAT_0443f078;
    DAT_0443f078 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443f080 = &DAT_0433d028;
    DAT_0443f098 = 1;
  }
  return;
}


