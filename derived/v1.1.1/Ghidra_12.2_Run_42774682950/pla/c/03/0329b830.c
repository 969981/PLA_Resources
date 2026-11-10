/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329b830; name: _INIT_1525
 */


void _INIT_1525(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04440140 & 1) == 0) {
    DAT_04440130 = 0;
    DAT_04440138 = 0;
    DAT_0444ac08 = &DAT_04440120;
    DAT_04440120 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04440128 = &DAT_043455c8;
    DAT_04440140 = 1;
  }
  return;
}


