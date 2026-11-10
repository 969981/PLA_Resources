/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03248cb0; name: _INIT_1148
 */


void _INIT_1148(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443b060 & 1) == 0) {
    DAT_0443b050 = 0;
    DAT_0443b058 = 0;
    DAT_0444ac08 = &DAT_0443b040;
    DAT_0443b040 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443b048 = &DAT_0431e760;
    DAT_0443b060 = 1;
  }
  return;
}


