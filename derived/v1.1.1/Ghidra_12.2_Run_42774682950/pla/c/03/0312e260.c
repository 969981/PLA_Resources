/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312e260; name: _INIT_564
 */


void _INIT_564(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04432498 & 1) == 0) {
    DAT_04432488 = 0;
    DAT_04432490 = 0;
    DAT_0444ac08 = &DAT_04432478;
    DAT_04432478 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04432480 = &DAT_042df8b8;
    DAT_04432498 = 1;
  }
  return;
}


