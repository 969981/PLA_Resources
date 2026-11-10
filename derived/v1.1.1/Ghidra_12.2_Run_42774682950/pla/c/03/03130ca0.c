/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03130ca0; name: _INIT_728
 */


void _INIT_728(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04433e28 & 1) == 0) {
    DAT_04433e18 = 0;
    DAT_04433e20 = 0;
    DAT_0444ac08 = &DAT_04433e08;
    DAT_04433e08 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433e10 = &DAT_042e9920;
    DAT_04433e28 = 1;
  }
  return;
}


