/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03246220; name: _INIT_1041
 */


void _INIT_1041(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439fa8 & 1) == 0) {
    DAT_04439f98 = 0;
    DAT_04439fa0 = 0;
    DAT_0444ac08 = &DAT_04439f88;
    DAT_04439f88 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439f90 = &DAT_04318298;
    DAT_04439fa8 = 1;
  }
  return;
}


