/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312e840; name: _INIT_586
 */


void _INIT_586(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044327f8 & 1) == 0) {
    DAT_044327e8 = 0;
    DAT_044327f0 = 0;
    DAT_0444ac08 = &DAT_044327d8;
    DAT_044327d8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044327e0 = &DAT_042e0d10;
    DAT_044327f8 = 1;
  }
  return;
}


