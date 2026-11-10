/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0324a190; name: _INIT_1225
 */


void _INIT_1225(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443bc68 & 1) == 0) {
    DAT_0443bc58 = 0;
    DAT_0443bc60 = 0;
    DAT_0444ac08 = &DAT_0443bc48;
    DAT_0443bc48 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443bc50 = &DAT_04323908;
    DAT_0443bc68 = 1;
  }
  return;
}


