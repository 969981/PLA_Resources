/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03271ea0; name: _INIT_1269
 */


void _INIT_1269(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443d010 & 1) == 0) {
    DAT_0443d000 = 0;
    DAT_0443d008 = 0;
    DAT_0444ac08 = &DAT_0443cff0;
    DAT_0443cff0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443cff8 = &DAT_0432df00;
    DAT_0443d010 = 1;
  }
  return;
}


