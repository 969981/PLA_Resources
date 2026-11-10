/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03249780; name: _INIT_1191
 */


void _INIT_1191(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443b718 & 1) == 0) {
    DAT_0443b708 = 0;
    DAT_0443b710 = 0;
    DAT_0444ac08 = &DAT_0443b6f8;
    DAT_0443b6f8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443b700 = &DAT_04321380;
    DAT_0443b718 = 1;
  }
  return;
}


