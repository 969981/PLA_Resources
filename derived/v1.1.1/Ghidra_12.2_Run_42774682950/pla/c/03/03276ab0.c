/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03276ab0; name: _INIT_1420
 */


void _INIT_1420(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443e7a8 & 1) == 0) {
    DAT_0443e798 = 0;
    DAT_0443e7a0 = 0;
    DAT_0444ac08 = &DAT_0443e788;
    DAT_0443e788 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443e790 = &DAT_043383d8;
    DAT_0443e7a8 = 1;
  }
  return;
}


