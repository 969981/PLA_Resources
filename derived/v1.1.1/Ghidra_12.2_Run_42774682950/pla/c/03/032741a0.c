/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032741a0; name: _INIT_1346
 */


void _INIT_1346(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443dc18 & 1) == 0) {
    DAT_0443dc08 = 0;
    DAT_0443dc10 = 0;
    DAT_0444ac08 = &DAT_0443dbf8;
    DAT_0443dbf8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443dc00 = &DAT_04333758;
    DAT_0443dc18 = 1;
  }
  return;
}


