/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032448c0; name: _INIT_956
 */


void _INIT_956(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439260 & 1) == 0) {
    DAT_04439250 = 0;
    DAT_04439258 = 0;
    DAT_0444ac08 = &DAT_04439240;
    DAT_04439240 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439248 = &DAT_04312750;
    DAT_04439260 = 1;
  }
  return;
}


