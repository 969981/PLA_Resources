/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03364a50; name: _INIT_1814
 */


void _INIT_1814(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444fb58 & 1) == 0) {
    DAT_0444fb48 = 0;
    DAT_0444fb50 = 0;
    DAT_0444ac08 = &DAT_0444fb38;
    DAT_0444fb38 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444fb40 = &DAT_0436a210;
    DAT_0444fb58 = 1;
  }
  return;
}


