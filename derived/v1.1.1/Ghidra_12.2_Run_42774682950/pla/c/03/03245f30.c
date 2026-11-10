/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03245f30; name: _INIT_1030
 */


void _INIT_1030(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439df0 & 1) == 0) {
    DAT_04439de0 = 0;
    DAT_04439de8 = 0;
    DAT_0444ac08 = &DAT_04439dd0;
    DAT_04439dd0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439dd8 = &DAT_04317668;
    DAT_04439df0 = 1;
  }
  return;
}


