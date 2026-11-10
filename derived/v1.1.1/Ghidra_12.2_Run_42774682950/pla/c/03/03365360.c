/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03365360; name: _INIT_1849
 */


void _INIT_1849(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044500d0 & 1) == 0) {
    DAT_044500c0 = 0;
    DAT_044500c8 = 0;
    DAT_0444ac08 = &DAT_044500b0;
    DAT_044500b0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044500b8 = &DAT_0436c838;
    DAT_044500d0 = 1;
  }
  return;
}


