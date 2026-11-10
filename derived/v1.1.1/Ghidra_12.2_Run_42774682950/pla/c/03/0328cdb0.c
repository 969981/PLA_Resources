/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0328cdb0; name: _INIT_1473
 */


void _INIT_1473(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443f228 & 1) == 0) {
    DAT_0443f218 = 0;
    DAT_0443f220 = 0;
    DAT_0444ac08 = &DAT_0443f208;
    DAT_0443f208 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443f210 = &DAT_0433db98;
    DAT_0443f228 = 1;
  }
  return;
}


