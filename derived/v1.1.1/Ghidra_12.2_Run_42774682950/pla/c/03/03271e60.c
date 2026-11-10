/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03271e60; name: _INIT_1268
 */


void _INIT_1268(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443cfe8 & 1) == 0) {
    DAT_0443cfd8 = 0;
    DAT_0443cfe0 = 0;
    DAT_0444ac08 = &DAT_0443cfc8;
    DAT_0443cfc8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443cfd0 = &DAT_0432dd68;
    DAT_0443cfe8 = 1;
  }
  return;
}


