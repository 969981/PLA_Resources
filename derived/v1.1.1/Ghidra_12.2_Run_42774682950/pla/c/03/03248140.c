/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03248140; name: _INIT_1113
 */


void _INIT_1113(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443aae8 & 1) == 0) {
    DAT_0443aad8 = 0;
    DAT_0443aae0 = 0;
    DAT_0444ac08 = &DAT_0443aac8;
    DAT_0443aac8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443aad0 = &DAT_0431c248;
    DAT_0443aae8 = 1;
  }
  return;
}


