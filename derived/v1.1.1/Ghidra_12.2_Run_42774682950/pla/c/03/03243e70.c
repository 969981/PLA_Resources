/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03243e70; name: _INIT_930
 */


void _INIT_930(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04438e50 & 1) == 0) {
    DAT_04438e40 = 0;
    DAT_04438e48 = 0;
    DAT_0444ac08 = &DAT_04438e30;
    DAT_04438e30 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438e38 = &DAT_04310e40;
    DAT_04438e50 = 1;
  }
  return;
}


