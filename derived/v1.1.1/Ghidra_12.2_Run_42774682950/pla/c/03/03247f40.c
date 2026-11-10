/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03247f40; name: _INIT_1105
 */


void _INIT_1105(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443a9a8 & 1) == 0) {
    DAT_0443a998 = 0;
    DAT_0443a9a0 = 0;
    DAT_0444ac08 = &DAT_0443a988;
    DAT_0443a988 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443a990 = &DAT_0431bb40;
    DAT_0443a9a8 = 1;
  }
  return;
}


