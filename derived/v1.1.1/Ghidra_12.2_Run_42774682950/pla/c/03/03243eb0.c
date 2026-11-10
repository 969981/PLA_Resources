/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03243eb0; name: _INIT_931
 */


void _INIT_931(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04438e78 & 1) == 0) {
    DAT_04438e68 = 0;
    DAT_04438e70 = 0;
    DAT_0444ac08 = &DAT_04438e58;
    DAT_04438e58 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438e60 = &DAT_04310f00;
    DAT_04438e78 = 1;
  }
  return;
}


