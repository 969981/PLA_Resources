/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318a850; name: _INIT_816
 */


void _INIT_816(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04434c40 & 1) == 0) {
    DAT_04434c30 = 0;
    DAT_04434c38 = 0;
    DAT_0444ac08 = &DAT_04434c20;
    DAT_04434c20 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04434c28 = &DAT_042f03c8;
    DAT_04434c40 = 1;
  }
  return;
}


