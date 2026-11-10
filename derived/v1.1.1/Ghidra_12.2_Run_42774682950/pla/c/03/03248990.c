/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03248990; name: _INIT_1136
 */


void _INIT_1136(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443ae80 & 1) == 0) {
    DAT_0443ae70 = 0;
    DAT_0443ae78 = 0;
    DAT_0444ac08 = &DAT_0443ae60;
    DAT_0443ae60 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443ae68 = &DAT_0431dba8;
    DAT_0443ae80 = 1;
  }
  return;
}


