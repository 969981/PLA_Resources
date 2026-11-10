/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329aef0; name: _INIT_1488
 */


void _INIT_1488(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443fb78 & 1) == 0) {
    DAT_0443fb68 = 0;
    DAT_0443fb70 = 0;
    DAT_0444ac08 = &DAT_0443fb58;
    DAT_0443fb58 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443fb60 = &DAT_04342b68;
    DAT_0443fb78 = 1;
  }
  return;
}


