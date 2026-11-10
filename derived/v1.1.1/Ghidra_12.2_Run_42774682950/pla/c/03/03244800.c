/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03244800; name: _INIT_953
 */


void _INIT_953(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044391e8 & 1) == 0) {
    DAT_044391d8 = 0;
    DAT_044391e0 = 0;
    DAT_0444ac08 = &DAT_044391c8;
    DAT_044391c8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044391d0 = &DAT_04312480;
    DAT_044391e8 = 1;
  }
  return;
}


