/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0324a510; name: _INIT_1239
 */


void _INIT_1239(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443be98 & 1) == 0) {
    DAT_0443be88 = 0;
    DAT_0443be90 = 0;
    DAT_0444ac08 = &DAT_0443be78;
    DAT_0443be78 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443be80 = &DAT_04324400;
    DAT_0443be98 = 1;
  }
  return;
}


