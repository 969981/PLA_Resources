/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032427d0; name: _INIT_888
 */


void _INIT_888(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044387c0 & 1) == 0) {
    DAT_044387b0 = 0;
    DAT_044387b8 = 0;
    DAT_0444ac08 = &DAT_044387a0;
    DAT_044387a0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044387a8 = &DAT_0430e6e0;
    DAT_044387c0 = 1;
  }
  return;
}


