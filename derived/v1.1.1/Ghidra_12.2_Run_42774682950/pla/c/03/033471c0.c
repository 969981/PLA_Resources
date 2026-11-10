/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033471c0; name: _INIT_1703
 */


void _INIT_1703(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444e050 & 1) == 0) {
    DAT_0444e040 = 0;
    DAT_0444e048 = 0;
    DAT_0444ac08 = &DAT_0444e030;
    DAT_0444e030 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444e038 = &DAT_0435f2d8;
    DAT_0444e050 = 1;
  }
  return;
}


