/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032747f0; name: _INIT_1371
 */


void _INIT_1371(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443e000 & 1) == 0) {
    DAT_0443dff0 = 0;
    DAT_0443dff8 = 0;
    DAT_0444ac08 = &DAT_0443dfe0;
    DAT_0443dfe0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443dfe8 = &DAT_04335148;
    DAT_0443e000 = 1;
  }
  return;
}


