/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033652e0; name: _INIT_1847
 */


void _INIT_1847(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04450080 & 1) == 0) {
    DAT_04450070 = 0;
    DAT_04450078 = 0;
    DAT_0444ac08 = &DAT_04450060;
    DAT_04450060 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04450068 = &DAT_0436c558;
    DAT_04450080 = 1;
  }
  return;
}


