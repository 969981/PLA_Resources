/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03248790; name: _INIT_1128
 */


void _INIT_1128(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443ad40 & 1) == 0) {
    DAT_0443ad30 = 0;
    DAT_0443ad38 = 0;
    DAT_0444ac08 = &DAT_0443ad20;
    DAT_0443ad20 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443ad28 = &DAT_0431d2d8;
    DAT_0443ad40 = 1;
  }
  return;
}


