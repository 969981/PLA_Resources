/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031303c0; name: _INIT_693
 */


void _INIT_693(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044338b0 & 1) == 0) {
    DAT_044338a0 = 0;
    DAT_044338a8 = 0;
    DAT_0444ac08 = &DAT_04433890;
    DAT_04433890 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433898 = &DAT_042e7640;
    DAT_044338b0 = 1;
  }
  return;
}


