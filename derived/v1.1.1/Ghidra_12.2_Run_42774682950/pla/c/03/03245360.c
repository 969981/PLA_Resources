/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03245360; name: _INIT_998
 */


void _INIT_998(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044398f0 & 1) == 0) {
    DAT_044398e0 = 0;
    DAT_044398e8 = 0;
    DAT_0444ac08 = &DAT_044398d0;
    DAT_044398d0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044398d8 = &DAT_04315640;
    DAT_044398f0 = 1;
  }
  return;
}


