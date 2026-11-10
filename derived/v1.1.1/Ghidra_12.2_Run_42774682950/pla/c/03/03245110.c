/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03245110; name: _INIT_989
 */


void _INIT_989(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439788 & 1) == 0) {
    DAT_04439778 = 0;
    DAT_04439780 = 0;
    DAT_0444ac08 = &DAT_04439768;
    DAT_04439768 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439770 = &DAT_04314d20;
    DAT_04439788 = 1;
  }
  return;
}


