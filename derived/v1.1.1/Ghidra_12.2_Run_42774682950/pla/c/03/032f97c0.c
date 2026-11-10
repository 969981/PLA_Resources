/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f97c0; name: _INIT_1625
 */


void _INIT_1625(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444ac58 & 1) == 0) {
    DAT_0444ac48 = 0;
    DAT_0444ac50 = 0;
    DAT_0444ac08 = &DAT_0444ac38;
    DAT_0444ac38 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444ac40 = &DAT_0434d7d8;
    DAT_0444ac58 = 1;
  }
  return;
}


