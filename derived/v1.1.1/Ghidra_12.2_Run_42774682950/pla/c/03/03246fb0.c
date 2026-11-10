/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03246fb0; name: _INIT_1073
 */


void _INIT_1073(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443a4a8 & 1) == 0) {
    DAT_0443a498 = 0;
    DAT_0443a4a0 = 0;
    DAT_0444ac08 = &DAT_0443a488;
    DAT_0443a488 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443a490 = &DAT_04319e98;
    DAT_0443a4a8 = 1;
  }
  return;
}


