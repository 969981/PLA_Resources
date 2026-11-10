/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03248ad0; name: _INIT_1141
 */


void _INIT_1141(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443af48 & 1) == 0) {
    DAT_0443af38 = 0;
    DAT_0443af40 = 0;
    DAT_0444ac08 = &DAT_0443af28;
    DAT_0443af28 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443af30 = &DAT_0431e1b0;
    DAT_0443af48 = 1;
  }
  return;
}


