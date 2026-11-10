/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312ef00; name: _INIT_613
 */


void _INIT_613(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04432c30 & 1) == 0) {
    DAT_04432c20 = 0;
    DAT_04432c28 = 0;
    DAT_0444ac08 = &DAT_04432c10;
    DAT_04432c10 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04432c18 = &DAT_042e27f8;
    DAT_04432c30 = 1;
  }
  return;
}


