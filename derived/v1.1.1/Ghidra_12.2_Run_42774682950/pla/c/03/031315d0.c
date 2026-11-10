/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031315d0; name: _INIT_763
 */


void _INIT_763(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044343a0 & 1) == 0) {
    DAT_04434390 = 0;
    DAT_04434398 = 0;
    DAT_0444ac08 = &DAT_04434380;
    DAT_04434380 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04434388 = &DAT_042ec168;
    DAT_044343a0 = 1;
  }
  return;
}


