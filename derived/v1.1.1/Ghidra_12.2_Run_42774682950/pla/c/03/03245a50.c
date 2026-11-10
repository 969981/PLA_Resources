/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03245a50; name: _INIT_1019
 */


void _INIT_1019(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439c38 & 1) == 0) {
    DAT_04439c28 = 0;
    DAT_04439c30 = 0;
    DAT_0444ac08 = &DAT_04439c18;
    DAT_04439c18 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439c20 = &DAT_04316c18;
    DAT_04439c38 = 1;
  }
  return;
}


