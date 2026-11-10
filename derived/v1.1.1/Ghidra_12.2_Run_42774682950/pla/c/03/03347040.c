/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03347040; name: _INIT_1697
 */


void _INIT_1697(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444df60 & 1) == 0) {
    DAT_0444df50 = 0;
    DAT_0444df58 = 0;
    DAT_0444ac08 = &DAT_0444df40;
    DAT_0444df40 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444df48 = &DAT_0435ed08;
    DAT_0444df60 = 1;
  }
  return;
}


