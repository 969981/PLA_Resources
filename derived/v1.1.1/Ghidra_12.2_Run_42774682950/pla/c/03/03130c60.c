/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03130c60; name: _INIT_727
 */


void _INIT_727(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04433e00 & 1) == 0) {
    DAT_04433df0 = 0;
    DAT_04433df8 = 0;
    DAT_0444ac08 = &DAT_04433de0;
    DAT_04433de0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433de8 = &DAT_042e9840;
    DAT_04433e00 = 1;
  }
  return;
}


