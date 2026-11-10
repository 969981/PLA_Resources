/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032da1a0; name: _INIT_1584
 */


void _INIT_1584(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444a108 & 1) == 0) {
    DAT_0444a0f8 = 0;
    DAT_0444a100 = 0;
    DAT_0444ac08 = &DAT_0444a0e8;
    DAT_0444a0e8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444a0f0 = &DAT_0434ad90;
    DAT_0444a108 = 1;
  }
  return;
}


