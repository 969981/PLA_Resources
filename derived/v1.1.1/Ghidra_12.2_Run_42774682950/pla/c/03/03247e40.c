/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03247e40; name: _INIT_1101
 */


void _INIT_1101(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443a908 & 1) == 0) {
    DAT_0443a8f8 = 0;
    DAT_0443a900 = 0;
    DAT_0444ac08 = &DAT_0443a8e8;
    DAT_0443a8e8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443a8f0 = &DAT_0431b7e0;
    DAT_0443a908 = 1;
  }
  return;
}


