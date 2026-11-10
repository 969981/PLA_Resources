/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312ee40; name: _INIT_610
 */


void _INIT_610(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04432bb8 & 1) == 0) {
    DAT_04432ba8 = 0;
    DAT_04432bb0 = 0;
    DAT_0444ac08 = &DAT_04432b98;
    DAT_04432b98 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04432ba0 = &DAT_042e2548;
    DAT_04432bb8 = 1;
  }
  return;
}


