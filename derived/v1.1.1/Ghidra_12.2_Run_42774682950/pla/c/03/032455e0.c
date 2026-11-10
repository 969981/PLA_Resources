/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032455e0; name: _INIT_1008
 */


void _INIT_1008(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439a80 & 1) == 0) {
    DAT_04439a70 = 0;
    DAT_04439a78 = 0;
    DAT_0444ac08 = &DAT_04439a60;
    DAT_04439a60 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439a68 = &DAT_04316138;
    DAT_04439a80 = 1;
  }
  return;
}


