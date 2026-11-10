/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312e180; name: _INIT_561
 */


void _INIT_561(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04432420 & 1) == 0) {
    DAT_04432410 = 0;
    DAT_04432418 = 0;
    DAT_0444ac08 = &DAT_04432400;
    DAT_04432400 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04432408 = &DAT_042df5b0;
    DAT_04432420 = 1;
  }
  return;
}


