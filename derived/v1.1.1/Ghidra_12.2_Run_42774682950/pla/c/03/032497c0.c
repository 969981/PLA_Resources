/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032497c0; name: _INIT_1192
 */


void _INIT_1192(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443b740 & 1) == 0) {
    DAT_0443b730 = 0;
    DAT_0443b738 = 0;
    DAT_0444ac08 = &DAT_0443b720;
    DAT_0443b720 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443b728 = &DAT_04321518;
    DAT_0443b740 = 1;
  }
  return;
}


