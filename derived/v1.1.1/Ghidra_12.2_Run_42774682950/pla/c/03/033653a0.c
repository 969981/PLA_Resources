/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033653a0; name: _INIT_1850
 */


void _INIT_1850(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044500f8 & 1) == 0) {
    DAT_044500e8 = 0;
    DAT_044500f0 = 0;
    DAT_0444ac08 = &DAT_044500d8;
    DAT_044500d8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044500e0 = &DAT_0436c980;
    DAT_044500f8 = 1;
  }
  return;
}


