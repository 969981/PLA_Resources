/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03249640; name: _INIT_1186
 */


void _INIT_1186(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443b650 & 1) == 0) {
    DAT_0443b640 = 0;
    DAT_0443b648 = 0;
    DAT_0444ac08 = &DAT_0443b630;
    DAT_0443b630 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443b638 = &DAT_04320ec0;
    DAT_0443b650 = 1;
  }
  return;
}


