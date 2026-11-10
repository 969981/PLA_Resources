/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312f490; name: _INIT_634
 */


void _INIT_634(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04432f78 & 1) == 0) {
    DAT_04432f68 = 0;
    DAT_04432f70 = 0;
    DAT_0444ac08 = &DAT_04432f58;
    DAT_04432f58 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04432f60 = &DAT_042e3ab0;
    DAT_04432f78 = 1;
  }
  return;
}


