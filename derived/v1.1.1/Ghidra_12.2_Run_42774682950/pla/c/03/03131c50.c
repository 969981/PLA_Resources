/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03131c50; name: _INIT_789
 */


void _INIT_789(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044347b0 & 1) == 0) {
    DAT_044347a0 = 0;
    DAT_044347a8 = 0;
    DAT_0444ac08 = &DAT_04434790;
    DAT_04434790 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04434798 = &DAT_042edb20;
    DAT_044347b0 = 1;
  }
  return;
}


