/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03249600; name: _INIT_1185
 */


void _INIT_1185(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443b628 & 1) == 0) {
    DAT_0443b618 = 0;
    DAT_0443b620 = 0;
    DAT_0444ac08 = &DAT_0443b608;
    DAT_0443b608 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443b610 = &DAT_04320de8;
    DAT_0443b628 = 1;
  }
  return;
}


