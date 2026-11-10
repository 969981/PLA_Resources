/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03273e60; name: _INIT_1333
 */


void _INIT_1333(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443da10 & 1) == 0) {
    DAT_0443da00 = 0;
    DAT_0443da08 = 0;
    DAT_0444ac08 = &DAT_0443d9f0;
    DAT_0443d9f0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443d9f8 = &DAT_043327b8;
    DAT_0443da10 = 1;
  }
  return;
}


