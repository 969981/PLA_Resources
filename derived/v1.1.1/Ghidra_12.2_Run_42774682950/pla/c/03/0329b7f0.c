/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329b7f0; name: _INIT_1524
 */


void _INIT_1524(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04440118 & 1) == 0) {
    DAT_04440108 = 0;
    DAT_04440110 = 0;
    DAT_0444ac08 = &DAT_044400f8;
    DAT_044400f8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04440100 = &DAT_043454c0;
    DAT_04440118 = 1;
  }
  return;
}


