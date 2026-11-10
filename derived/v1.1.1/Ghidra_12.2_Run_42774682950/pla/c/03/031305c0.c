/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031305c0; name: _INIT_701
 */


void _INIT_701(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044339f0 & 1) == 0) {
    DAT_044339e0 = 0;
    DAT_044339e8 = 0;
    DAT_0444ac08 = &DAT_044339d0;
    DAT_044339d0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044339d8 = &DAT_042e8028;
    DAT_044339f0 = 1;
  }
  return;
}


