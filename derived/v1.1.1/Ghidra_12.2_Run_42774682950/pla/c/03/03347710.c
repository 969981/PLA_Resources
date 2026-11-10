/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03347710; name: _INIT_1724
 */


void _INIT_1724(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444e398 & 1) == 0) {
    DAT_0444e388 = 0;
    DAT_0444e390 = 0;
    DAT_0444ac08 = &DAT_0444e378;
    DAT_0444e378 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444e380 = &DAT_04360750;
    DAT_0444e398 = 1;
  }
  return;
}


