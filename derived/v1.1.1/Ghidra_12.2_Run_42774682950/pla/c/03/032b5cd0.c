/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032b5cd0; name: _INIT_1546
 */


void _INIT_1546(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04444870 & 1) == 0) {
    DAT_04444860 = 0;
    DAT_04444868 = 0;
    DAT_0444ac08 = &DAT_04444850;
    DAT_04444850 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04444858 = &DAT_04347f60;
    DAT_04444870 = 1;
  }
  return;
}


