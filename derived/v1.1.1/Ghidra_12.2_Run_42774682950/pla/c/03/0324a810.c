/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0324a810; name: _INIT_1251
 */


void _INIT_1251(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443c078 & 1) == 0) {
    DAT_0443c068 = 0;
    DAT_0443c070 = 0;
    DAT_0444ac08 = &DAT_0443c058;
    DAT_0443c058 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443c060 = &DAT_04324ea0;
    DAT_0443c078 = 1;
  }
  return;
}


