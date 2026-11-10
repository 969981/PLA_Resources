/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03365560; name: _INIT_1857
 */


void _INIT_1857(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04450210 & 1) == 0) {
    DAT_04450200 = 0;
    DAT_04450208 = 0;
    DAT_0444ac08 = &DAT_044501f0;
    DAT_044501f0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044501f8 = &DAT_0436d0e8;
    DAT_04450210 = 1;
  }
  return;
}


