/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03249680; name: _INIT_1187
 */


void _INIT_1187(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443b678 & 1) == 0) {
    DAT_0443b668 = 0;
    DAT_0443b670 = 0;
    DAT_0444ac08 = &DAT_0443b658;
    DAT_0443b658 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443b660 = &DAT_04320f60;
    DAT_0443b678 = 1;
  }
  return;
}


