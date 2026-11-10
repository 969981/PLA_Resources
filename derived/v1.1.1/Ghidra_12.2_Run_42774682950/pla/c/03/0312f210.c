/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312f210; name: _INIT_625
 */


void _INIT_625(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04432e10 & 1) == 0) {
    DAT_04432e00 = 0;
    DAT_04432e08 = 0;
    DAT_0444ac08 = &DAT_04432df0;
    DAT_04432df0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04432df8 = &DAT_042e3348;
    DAT_04432e10 = 1;
  }
  return;
}


