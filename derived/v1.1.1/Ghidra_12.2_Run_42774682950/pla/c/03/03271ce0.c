/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03271ce0; name: _INIT_1262
 */


void _INIT_1262(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443cef8 & 1) == 0) {
    DAT_0443cee8 = 0;
    DAT_0443cef0 = 0;
    DAT_0444ac08 = &DAT_0443ced8;
    DAT_0443ced8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443cee0 = &DAT_0432d760;
    DAT_0443cef8 = 1;
  }
  return;
}


