/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0324a7d0; name: _INIT_1250
 */


void _INIT_1250(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443c050 & 1) == 0) {
    DAT_0443c040 = 0;
    DAT_0443c048 = 0;
    DAT_0444ac08 = &DAT_0443c030;
    DAT_0443c030 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443c038 = &DAT_04324e00;
    DAT_0443c050 = 1;
  }
  return;
}


