/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032749b0; name: _INIT_1378
 */


void _INIT_1378(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443e118 & 1) == 0) {
    DAT_0443e108 = 0;
    DAT_0443e110 = 0;
    DAT_0444ac08 = &DAT_0443e0f8;
    DAT_0443e0f8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443e100 = &DAT_04335ac8;
    DAT_0443e118 = 1;
  }
  return;
}


