/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03130f50; name: _INIT_738
 */


void _INIT_738(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04433fb8 & 1) == 0) {
    DAT_04433fa8 = 0;
    DAT_04433fb0 = 0;
    DAT_0444ac08 = &DAT_04433f98;
    DAT_04433f98 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433fa0 = &DAT_042ea3b0;
    DAT_04433fb8 = 1;
  }
  return;
}


