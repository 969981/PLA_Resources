/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03246560; name: _INIT_1054
 */


void _INIT_1054(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443a1b0 & 1) == 0) {
    DAT_0443a1a0 = 0;
    DAT_0443a1a8 = 0;
    DAT_0444ac08 = &DAT_0443a190;
    DAT_0443a190 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443a198 = &DAT_04318d38;
    DAT_0443a1b0 = 1;
  }
  return;
}


