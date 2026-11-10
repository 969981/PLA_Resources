/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03244980; name: _INIT_959
 */


void _INIT_959(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044392d8 & 1) == 0) {
    DAT_044392c8 = 0;
    DAT_044392d0 = 0;
    DAT_0444ac08 = &DAT_044392b8;
    DAT_044392b8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044392c0 = &DAT_04312c18;
    DAT_044392d8 = 1;
  }
  return;
}


