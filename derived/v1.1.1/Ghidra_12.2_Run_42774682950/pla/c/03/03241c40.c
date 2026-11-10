/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03241c40; name: _INIT_849
 */


void _INIT_849(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044381a8 & 1) == 0) {
    DAT_04438198 = 0;
    DAT_044381a0 = 0;
    DAT_0444ac08 = &DAT_04438188;
    DAT_04438188 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438190 = &DAT_0430c098;
    DAT_044381a8 = 1;
  }
  return;
}


