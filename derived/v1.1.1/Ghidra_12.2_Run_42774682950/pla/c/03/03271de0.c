/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03271de0; name: _INIT_1266
 */


void _INIT_1266(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443cf98 & 1) == 0) {
    DAT_0443cf88 = 0;
    DAT_0443cf90 = 0;
    DAT_0444ac08 = &DAT_0443cf78;
    DAT_0443cf78 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443cf80 = &DAT_0432db80;
    DAT_0443cf98 = 1;
  }
  return;
}


