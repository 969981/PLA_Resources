/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03241f90; name: _INIT_862
 */


void _INIT_862(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044383b0 & 1) == 0) {
    DAT_044383a0 = 0;
    DAT_044383a8 = 0;
    DAT_0444ac08 = &DAT_04438390;
    DAT_04438390 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438398 = &DAT_0430cd98;
    DAT_044383b0 = 1;
  }
  return;
}


