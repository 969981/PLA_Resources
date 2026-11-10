/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03131060; name: _INIT_742
 */


void _INIT_742(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04434058 & 1) == 0) {
    DAT_04434048 = 0;
    DAT_04434050 = 0;
    DAT_0444ac08 = &DAT_04434038;
    DAT_04434038 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04434040 = &DAT_042ea770;
    DAT_04434058 = 1;
  }
  return;
}


