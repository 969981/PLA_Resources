/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312de60; name: _INIT_549
 */


void _INIT_549(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04432240 & 1) == 0) {
    DAT_04432230 = 0;
    DAT_04432238 = 0;
    DAT_0444ac08 = &DAT_04432220;
    DAT_04432220 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04432228 = &DAT_042de8b0;
    DAT_04432240 = 1;
  }
  return;
}


