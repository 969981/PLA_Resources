/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312edc0; name: _INIT_608
 */


void _INIT_608(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04432b68 & 1) == 0) {
    DAT_04432b58 = 0;
    DAT_04432b60 = 0;
    DAT_0444ac08 = &DAT_04432b48;
    DAT_04432b48 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04432b50 = &DAT_042e2320;
    DAT_04432b68 = 1;
  }
  return;
}


