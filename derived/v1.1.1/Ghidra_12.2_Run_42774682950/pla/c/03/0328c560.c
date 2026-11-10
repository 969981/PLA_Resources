/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0328c560; name: _INIT_1451
 */


void _INIT_1451(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443eeb8 & 1) == 0) {
    DAT_0443eea8 = 0;
    DAT_0443eeb0 = 0;
    DAT_0444ac08 = &DAT_0443ee98;
    DAT_0443ee98 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443eea0 = &DAT_0433c2f0;
    DAT_0443eeb8 = 1;
  }
  return;
}


