/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033652a0; name: _INIT_1846
 */


void _INIT_1846(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04450058 & 1) == 0) {
    DAT_04450048 = 0;
    DAT_04450050 = 0;
    DAT_0444ac08 = &DAT_04450038;
    DAT_04450038 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04450040 = &DAT_0436c3c0;
    DAT_04450058 = 1;
  }
  return;
}


