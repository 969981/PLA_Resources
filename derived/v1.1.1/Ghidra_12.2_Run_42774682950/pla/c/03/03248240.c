/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03248240; name: _INIT_1117
 */


void _INIT_1117(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443ab88 & 1) == 0) {
    DAT_0443ab78 = 0;
    DAT_0443ab80 = 0;
    DAT_0444ac08 = &DAT_0443ab68;
    DAT_0443ab68 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443ab70 = &DAT_0431c718;
    DAT_0443ab88 = 1;
  }
  return;
}


