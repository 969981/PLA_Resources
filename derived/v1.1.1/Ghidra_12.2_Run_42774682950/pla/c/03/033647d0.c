/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033647d0; name: _INIT_1804
 */


void _INIT_1804(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444f9e8 & 1) == 0) {
    DAT_0444f9d8 = 0;
    DAT_0444f9e0 = 0;
    DAT_0444ac08 = &DAT_0444f9c8;
    DAT_0444f9c8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444f9d0 = &DAT_043698a8;
    DAT_0444f9e8 = 1;
  }
  return;
}


