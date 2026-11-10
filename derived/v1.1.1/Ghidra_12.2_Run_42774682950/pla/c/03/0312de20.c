/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312de20; name: _INIT_548
 */


void _INIT_548(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04432218 & 1) == 0) {
    DAT_04432208 = 0;
    DAT_04432210 = 0;
    DAT_0444ac08 = &DAT_044321f8;
    DAT_044321f8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04432200 = &DAT_042de7d0;
    DAT_04432218 = 1;
  }
  return;
}


