/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03130d80; name: _INIT_731
 */


void _INIT_731(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04433ea0 & 1) == 0) {
    DAT_04433e90 = 0;
    DAT_04433e98 = 0;
    DAT_0444ac08 = &DAT_04433e80;
    DAT_04433e80 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433e88 = &DAT_042e9c78;
    DAT_04433ea0 = 1;
  }
  return;
}


