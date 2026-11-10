/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03243390; name: _INIT_907
 */


void _INIT_907(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04438ab8 & 1) == 0) {
    DAT_04438aa8 = 0;
    DAT_04438ab0 = 0;
    DAT_0444ac08 = &DAT_04438a98;
    DAT_04438a98 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438aa0 = &DAT_0430f898;
    DAT_04438ab8 = 1;
  }
  return;
}


