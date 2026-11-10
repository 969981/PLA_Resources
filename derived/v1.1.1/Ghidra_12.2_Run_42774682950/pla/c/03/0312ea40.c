/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312ea40; name: _INIT_594
 */


void _INIT_594(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04432938 & 1) == 0) {
    DAT_04432928 = 0;
    DAT_04432930 = 0;
    DAT_0444ac08 = &DAT_04432918;
    DAT_04432918 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04432920 = &DAT_042e1520;
    DAT_04432938 = 1;
  }
  return;
}


