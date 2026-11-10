/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0324a750; name: _INIT_1248
 */


void _INIT_1248(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443c000 & 1) == 0) {
    DAT_0443bff0 = 0;
    DAT_0443bff8 = 0;
    DAT_0444ac08 = &DAT_0443bfe0;
    DAT_0443bfe0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443bfe8 = &DAT_04324c98;
    DAT_0443c000 = 1;
  }
  return;
}


