/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032769f0; name: _INIT_1417
 */


void _INIT_1417(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443e730 & 1) == 0) {
    DAT_0443e720 = 0;
    DAT_0443e728 = 0;
    DAT_0444ac08 = &DAT_0443e710;
    DAT_0443e710 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443e718 = &DAT_043380d8;
    DAT_0443e730 = 1;
  }
  return;
}


