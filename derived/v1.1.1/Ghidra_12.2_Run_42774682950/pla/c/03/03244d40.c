/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03244d40; name: _INIT_974
 */


void _INIT_974(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439530 & 1) == 0) {
    DAT_04439520 = 0;
    DAT_04439528 = 0;
    DAT_0444ac08 = &DAT_04439510;
    DAT_04439510 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439518 = &DAT_04313d20;
    DAT_04439530 = 1;
  }
  return;
}


