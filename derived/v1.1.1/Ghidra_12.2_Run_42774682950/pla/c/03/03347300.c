/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03347300; name: _INIT_1708
 */


void _INIT_1708(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444e118 & 1) == 0) {
    DAT_0444e108 = 0;
    DAT_0444e110 = 0;
    DAT_0444ac08 = &DAT_0444e0f8;
    DAT_0444e0f8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444e100 = &DAT_0435f778;
    DAT_0444e118 = 1;
  }
  return;
}


