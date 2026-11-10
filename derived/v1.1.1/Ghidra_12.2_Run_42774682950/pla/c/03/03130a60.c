/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03130a60; name: _INIT_719
 */


void _INIT_719(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04433cc0 & 1) == 0) {
    DAT_04433cb0 = 0;
    DAT_04433cb8 = 0;
    DAT_0444ac08 = &DAT_04433ca0;
    DAT_04433ca0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433ca8 = &DAT_042e91a0;
    DAT_04433cc0 = 1;
  }
  return;
}


