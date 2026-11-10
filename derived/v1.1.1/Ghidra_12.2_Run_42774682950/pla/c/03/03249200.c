/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03249200; name: _INIT_1169
 */


void _INIT_1169(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443b3a8 & 1) == 0) {
    DAT_0443b398 = 0;
    DAT_0443b3a0 = 0;
    DAT_0444ac08 = &DAT_0443b388;
    DAT_0443b388 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443b390 = &DAT_0431fc58;
    DAT_0443b3a8 = 1;
  }
  return;
}


