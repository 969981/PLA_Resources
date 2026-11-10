/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f5c60; name: _INIT_1618
 */


void _INIT_1618(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444ab60 & 1) == 0) {
    DAT_0444ab50 = 0;
    DAT_0444ab58 = 0;
    DAT_0444ac08 = &DAT_0444ab40;
    DAT_0444ab40 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444ab48 = &DAT_0434d358;
    DAT_0444ab60 = 1;
  }
  return;
}


