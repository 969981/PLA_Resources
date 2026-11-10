/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03274a70; name: _INIT_1381
 */


void _INIT_1381(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443e190 & 1) == 0) {
    DAT_0443e180 = 0;
    DAT_0443e188 = 0;
    DAT_0444ac08 = &DAT_0443e170;
    DAT_0443e170 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443e178 = &DAT_04335f18;
    DAT_0443e190 = 1;
  }
  return;
}


