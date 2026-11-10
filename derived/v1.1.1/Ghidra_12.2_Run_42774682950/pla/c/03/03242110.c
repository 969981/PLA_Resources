/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03242110; name: _INIT_868
 */


void _INIT_868(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044384a0 & 1) == 0) {
    DAT_04438490 = 0;
    DAT_04438498 = 0;
    DAT_0444ac08 = &DAT_04438480;
    DAT_04438480 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438488 = &DAT_0430d398;
    DAT_044384a0 = 1;
  }
  return;
}


