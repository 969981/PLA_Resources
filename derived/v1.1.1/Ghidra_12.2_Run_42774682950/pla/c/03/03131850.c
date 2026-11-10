/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03131850; name: _INIT_773
 */


void _INIT_773(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04434530 & 1) == 0) {
    DAT_04434520 = 0;
    DAT_04434528 = 0;
    DAT_0444ac08 = &DAT_04434510;
    DAT_04434510 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04434518 = &DAT_042ecf40;
    DAT_04434530 = 1;
  }
  return;
}


