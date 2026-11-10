/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312e940; name: _INIT_590
 */


void _INIT_590(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04432898 & 1) == 0) {
    DAT_04432888 = 0;
    DAT_04432890 = 0;
    DAT_0444ac08 = &DAT_04432878;
    DAT_04432878 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04432880 = &DAT_042e10a0;
    DAT_04432898 = 1;
  }
  return;
}


