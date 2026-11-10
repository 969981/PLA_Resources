/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032462e0; name: _INIT_1044
 */


void _INIT_1044(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443a020 & 1) == 0) {
    DAT_0443a010 = 0;
    DAT_0443a018 = 0;
    DAT_0444ac08 = &DAT_0443a000;
    DAT_0443a000 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443a008 = &DAT_043184f0;
    DAT_0443a020 = 1;
  }
  return;
}


