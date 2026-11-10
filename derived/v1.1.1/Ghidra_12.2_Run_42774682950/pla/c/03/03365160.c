/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03365160; name: _INIT_1841
 */


void _INIT_1841(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444ff90 & 1) == 0) {
    DAT_0444ff80 = 0;
    DAT_0444ff88 = 0;
    DAT_0444ac08 = &DAT_0444ff70;
    DAT_0444ff70 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444ff78 = &DAT_0436bc08;
    DAT_0444ff90 = 1;
  }
  return;
}


