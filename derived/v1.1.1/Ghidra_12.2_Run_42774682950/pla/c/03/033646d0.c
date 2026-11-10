/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033646d0; name: _INIT_1800
 */


void _INIT_1800(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444f948 & 1) == 0) {
    DAT_0444f938 = 0;
    DAT_0444f940 = 0;
    DAT_0444ac08 = &DAT_0444f928;
    DAT_0444f928 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444f930 = &DAT_04369400;
    DAT_0444f948 = 1;
  }
  return;
}


