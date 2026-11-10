/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03243cc0; name: _INIT_924
 */


void _INIT_924(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04438d60 & 1) == 0) {
    DAT_04438d50 = 0;
    DAT_04438d58 = 0;
    DAT_0444ac08 = &DAT_04438d40;
    DAT_04438d40 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438d48 = &DAT_04310888;
    DAT_04438d60 = 1;
  }
  return;
}


