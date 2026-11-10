/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03274ab0; name: _INIT_1382
 */


void _INIT_1382(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443e1b8 & 1) == 0) {
    DAT_0443e1a8 = 0;
    DAT_0443e1b0 = 0;
    DAT_0444ac08 = &DAT_0443e198;
    DAT_0443e198 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443e1a0 = &DAT_04336010;
    DAT_0443e1b8 = 1;
  }
  return;
}


