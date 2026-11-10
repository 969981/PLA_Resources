/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032b5c50; name: _INIT_1544
 */


void _INIT_1544(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04444820 & 1) == 0) {
    DAT_04444810 = 0;
    DAT_04444818 = 0;
    DAT_0444ac08 = &DAT_04444800;
    DAT_04444800 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04444808 = &DAT_04347d70;
    DAT_04444820 = 1;
  }
  return;
}


