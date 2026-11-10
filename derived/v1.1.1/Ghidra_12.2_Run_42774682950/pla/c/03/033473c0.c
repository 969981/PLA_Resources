/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033473c0; name: _INIT_1711
 */


void _INIT_1711(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444e190 & 1) == 0) {
    DAT_0444e180 = 0;
    DAT_0444e188 = 0;
    DAT_0444ac08 = &DAT_0444e170;
    DAT_0444e170 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444e178 = &DAT_0435fad0;
    DAT_0444e190 = 1;
  }
  return;
}


