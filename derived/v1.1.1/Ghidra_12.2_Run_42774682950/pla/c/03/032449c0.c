/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032449c0; name: _INIT_960
 */


void _INIT_960(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439300 & 1) == 0) {
    DAT_044392f0 = 0;
    DAT_044392f8 = 0;
    DAT_0444ac08 = &DAT_044392e0;
    DAT_044392e0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044392e8 = &DAT_04312db0;
    DAT_04439300 = 1;
  }
  return;
}


