/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032b5c90; name: _INIT_1545
 */


void _INIT_1545(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04444848 & 1) == 0) {
    DAT_04444838 = 0;
    DAT_04444840 = 0;
    DAT_0444ac08 = &DAT_04444828;
    DAT_04444828 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04444830 = &DAT_04347e68;
    DAT_04444848 = 1;
  }
  return;
}


