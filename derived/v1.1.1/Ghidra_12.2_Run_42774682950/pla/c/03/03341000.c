/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03341000; name: _INIT_1694
 */


void _INIT_1694(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444bb70 & 1) == 0) {
    DAT_0444bb60 = 0;
    DAT_0444bb68 = 0;
    DAT_0444ac08 = &DAT_0444bb50;
    DAT_0444bb50 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444bb58 = &DAT_04352328;
    DAT_0444bb70 = 1;
  }
  return;
}


