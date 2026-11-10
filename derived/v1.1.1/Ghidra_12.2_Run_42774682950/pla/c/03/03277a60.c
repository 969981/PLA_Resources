/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03277a60; name: _INIT_1435
 */


void _INIT_1435(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443ea00 & 1) == 0) {
    DAT_0443e9f0 = 0;
    DAT_0443e9f8 = 0;
    DAT_0444ac08 = &DAT_0443e9e0;
    DAT_0443e9e0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443e9e8 = &DAT_043391a0;
    DAT_0443ea00 = 1;
  }
  return;
}


