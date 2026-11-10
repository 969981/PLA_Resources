/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03276600; name: _INIT_1415
 */


void _INIT_1415(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443e6e0 & 1) == 0) {
    DAT_0443e6d0 = 0;
    DAT_0443e6d8 = 0;
    DAT_0444ac08 = &DAT_0443e6c0;
    DAT_0443e6c0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443e6c8 = &DAT_04337f40;
    DAT_0443e6e0 = 1;
  }
  return;
}


