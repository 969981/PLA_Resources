/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0328caf0; name: _INIT_1462
 */


void _INIT_1462(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443f070 & 1) == 0) {
    DAT_0443f060 = 0;
    DAT_0443f068 = 0;
    DAT_0444ac08 = &DAT_0443f050;
    DAT_0443f050 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443f058 = &DAT_0433cf40;
    DAT_0443f070 = 1;
  }
  return;
}


