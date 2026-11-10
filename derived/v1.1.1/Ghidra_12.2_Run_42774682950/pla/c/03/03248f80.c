/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03248f80; name: _INIT_1159
 */


void _INIT_1159(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443b218 & 1) == 0) {
    DAT_0443b208 = 0;
    DAT_0443b210 = 0;
    DAT_0444ac08 = &DAT_0443b1f8;
    DAT_0443b1f8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443b200 = &DAT_0431f330;
    DAT_0443b218 = 1;
  }
  return;
}


