/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0328ccb0; name: _INIT_1469
 */


void _INIT_1469(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443f188 & 1) == 0) {
    DAT_0443f178 = 0;
    DAT_0443f180 = 0;
    DAT_0444ac08 = &DAT_0443f168;
    DAT_0443f168 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443f170 = &DAT_0433d6b0;
    DAT_0443f188 = 1;
  }
  return;
}


