/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03365420; name: _INIT_1852
 */


void _INIT_1852(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04450148 & 1) == 0) {
    DAT_04450138 = 0;
    DAT_04450140 = 0;
    DAT_0444ac08 = &DAT_04450128;
    DAT_04450128 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04450130 = &DAT_0436caf0;
    DAT_04450148 = 1;
  }
  return;
}


