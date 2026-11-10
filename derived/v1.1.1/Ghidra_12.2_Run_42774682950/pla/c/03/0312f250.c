/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312f250; name: _INIT_626
 */


void _INIT_626(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04432e38 & 1) == 0) {
    DAT_04432e28 = 0;
    DAT_04432e30 = 0;
    DAT_0444ac08 = &DAT_04432e18;
    DAT_04432e18 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04432e20 = &DAT_042e3450;
    DAT_04432e38 = 1;
  }
  return;
}


