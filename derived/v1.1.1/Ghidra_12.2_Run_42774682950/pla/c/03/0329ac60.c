/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329ac60; name: _INIT_1478
 */


void _INIT_1478(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443f9e8 & 1) == 0) {
    DAT_0443f9d8 = 0;
    DAT_0443f9e0 = 0;
    DAT_0444ac08 = &DAT_0443f9c8;
    DAT_0443f9c8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443f9d0 = &DAT_04341f40;
    DAT_0443f9e8 = 1;
  }
  return;
}


