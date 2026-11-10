/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032740e0; name: _INIT_1343
 */


void _INIT_1343(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443dba0 & 1) == 0) {
    DAT_0443db90 = 0;
    DAT_0443db98 = 0;
    DAT_0444ac08 = &DAT_0443db80;
    DAT_0443db80 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443db88 = &DAT_04333420;
    DAT_0443dba0 = 1;
  }
  return;
}


