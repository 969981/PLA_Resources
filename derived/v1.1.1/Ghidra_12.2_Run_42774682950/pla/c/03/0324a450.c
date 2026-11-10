/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0324a450; name: _INIT_1236
 */


void _INIT_1236(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443be20 & 1) == 0) {
    DAT_0443be10 = 0;
    DAT_0443be18 = 0;
    DAT_0444ac08 = &DAT_0443be00;
    DAT_0443be00 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443be08 = &DAT_04324220;
    DAT_0443be20 = 1;
  }
  return;
}


