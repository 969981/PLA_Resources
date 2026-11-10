/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03249340; name: _INIT_1174
 */


void _INIT_1174(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443b470 & 1) == 0) {
    DAT_0443b460 = 0;
    DAT_0443b468 = 0;
    DAT_0444ac08 = &DAT_0443b450;
    DAT_0443b450 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443b458 = &DAT_043202d0;
    DAT_0443b470 = 1;
  }
  return;
}


