/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03249240; name: _INIT_1170
 */


void _INIT_1170(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443b3d0 & 1) == 0) {
    DAT_0443b3c0 = 0;
    DAT_0443b3c8 = 0;
    DAT_0444ac08 = &DAT_0443b3b0;
    DAT_0443b3b0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443b3b8 = &DAT_0431fdf0;
    DAT_0443b3d0 = 1;
  }
  return;
}


