/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03244a40; name: _INIT_962
 */


void _INIT_962(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439350 & 1) == 0) {
    DAT_04439340 = 0;
    DAT_04439348 = 0;
    DAT_0444ac08 = &DAT_04439330;
    DAT_04439330 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439338 = &DAT_04313000;
    DAT_04439350 = 1;
  }
  return;
}


