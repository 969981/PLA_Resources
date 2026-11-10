/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032446d0; name: _INIT_949
 */


void _INIT_949(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439148 & 1) == 0) {
    DAT_04439138 = 0;
    DAT_04439140 = 0;
    DAT_0444ac08 = &DAT_04439128;
    DAT_04439128 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439130 = &DAT_04312108;
    DAT_04439148 = 1;
  }
  return;
}


