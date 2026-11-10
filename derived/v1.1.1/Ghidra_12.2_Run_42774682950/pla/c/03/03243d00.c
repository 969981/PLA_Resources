/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03243d00; name: _INIT_925
 */


void _INIT_925(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04438d88 & 1) == 0) {
    DAT_04438d78 = 0;
    DAT_04438d80 = 0;
    DAT_0444ac08 = &DAT_04438d68;
    DAT_04438d68 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438d70 = &DAT_043109a8;
    DAT_04438d88 = 1;
  }
  return;
}


