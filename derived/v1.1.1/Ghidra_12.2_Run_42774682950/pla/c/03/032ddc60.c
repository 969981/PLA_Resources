/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ddc60; name: _INIT_1589
 */


void _INIT_1589(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444a288 & 1) == 0) {
    DAT_0444a278 = 0;
    DAT_0444a280 = 0;
    DAT_0444ac08 = &DAT_0444a268;
    DAT_0444a268 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444a270 = &DAT_0434b180;
    DAT_0444a288 = 1;
  }
  return;
}


