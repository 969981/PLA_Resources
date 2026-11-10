/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312ebc0; name: _INIT_600
 */


void _INIT_600(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04432a28 & 1) == 0) {
    DAT_04432a18 = 0;
    DAT_04432a20 = 0;
    DAT_0444ac08 = &DAT_04432a08;
    DAT_04432a08 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04432a10 = &DAT_042e1b28;
    DAT_04432a28 = 1;
  }
  return;
}


