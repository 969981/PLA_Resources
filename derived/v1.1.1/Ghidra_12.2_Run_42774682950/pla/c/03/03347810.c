/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03347810; name: _INIT_1728
 */


void _INIT_1728(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444e438 & 1) == 0) {
    DAT_0444e428 = 0;
    DAT_0444e430 = 0;
    DAT_0444ac08 = &DAT_0444e418;
    DAT_0444e418 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444e420 = &DAT_04360a20;
    DAT_0444e438 = 1;
  }
  return;
}


