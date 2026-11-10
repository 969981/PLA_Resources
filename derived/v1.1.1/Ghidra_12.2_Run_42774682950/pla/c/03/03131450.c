/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03131450; name: _INIT_757
 */


void _INIT_757(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044342b0 & 1) == 0) {
    DAT_044342a0 = 0;
    DAT_044342a8 = 0;
    DAT_0444ac08 = &DAT_04434290;
    DAT_04434290 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04434298 = &DAT_042ebb58;
    DAT_044342b0 = 1;
  }
  return;
}


