/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033476d0; name: _INIT_1723
 */


void _INIT_1723(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444e370 & 1) == 0) {
    DAT_0444e360 = 0;
    DAT_0444e368 = 0;
    DAT_0444ac08 = &DAT_0444e350;
    DAT_0444e350 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444e358 = &DAT_04360678;
    DAT_0444e370 = 1;
  }
  return;
}


