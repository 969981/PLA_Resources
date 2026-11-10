/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03245150; name: _INIT_990
 */


void _INIT_990(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044397b0 & 1) == 0) {
    DAT_044397a0 = 0;
    DAT_044397a8 = 0;
    DAT_0444ac08 = &DAT_04439790;
    DAT_04439790 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439798 = &DAT_04314eb8;
    DAT_044397b0 = 1;
  }
  return;
}


