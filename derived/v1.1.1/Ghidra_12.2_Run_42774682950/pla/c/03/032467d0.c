/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032467d0; name: _INIT_1057
 */


void _INIT_1057(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443a228 & 1) == 0) {
    DAT_0443a218 = 0;
    DAT_0443a220 = 0;
    DAT_0444ac08 = &DAT_0443a208;
    DAT_0443a208 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443a210 = &DAT_04318ff0;
    DAT_0443a228 = 1;
  }
  return;
}


