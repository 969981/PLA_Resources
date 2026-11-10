/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03329950; name: _INIT_1660
 */


void _INIT_1660(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444b530 & 1) == 0) {
    DAT_0444b520 = 0;
    DAT_0444b528 = 0;
    DAT_0444ac08 = &DAT_0444b510;
    DAT_0444b510 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444b518 = &DAT_043507c0;
    DAT_0444b530 = 1;
  }
  return;
}


