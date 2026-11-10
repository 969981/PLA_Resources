/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312e800; name: _INIT_585
 */


void _INIT_585(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044327d0 & 1) == 0) {
    DAT_044327c0 = 0;
    DAT_044327c8 = 0;
    DAT_0444ac08 = &DAT_044327b0;
    DAT_044327b0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044327b8 = &DAT_042e0c00;
    DAT_044327d0 = 1;
  }
  return;
}


