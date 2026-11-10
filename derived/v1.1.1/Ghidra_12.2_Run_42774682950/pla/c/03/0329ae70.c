/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329ae70; name: _INIT_1486
 */


void _INIT_1486(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443fb28 & 1) == 0) {
    DAT_0443fb18 = 0;
    DAT_0443fb20 = 0;
    DAT_0444ac08 = &DAT_0443fb08;
    DAT_0443fb08 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443fb10 = &DAT_043429e8;
    DAT_0443fb28 = 1;
  }
  return;
}


