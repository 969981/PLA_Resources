/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032b5d10; name: _INIT_1547
 */


void _INIT_1547(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04444898 & 1) == 0) {
    DAT_04444888 = 0;
    DAT_04444890 = 0;
    DAT_0444ac08 = &DAT_04444878;
    DAT_04444878 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04444880 = &DAT_04348000;
    DAT_04444898 = 1;
  }
  return;
}


