/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03146320; name: _INIT_812
 */


void _INIT_812(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04434b20 & 1) == 0) {
    DAT_04434b10 = 0;
    DAT_04434b18 = 0;
    DAT_0444ac08 = &DAT_04434b00;
    DAT_04434b00 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04434b08 = &DAT_042ef670;
    DAT_04434b20 = 1;
  }
  return;
}


