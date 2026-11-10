/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03131da0; name: _INIT_794
 */


void _INIT_794(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04434878 & 1) == 0) {
    DAT_04434868 = 0;
    DAT_04434870 = 0;
    DAT_0444ac08 = &DAT_04434858;
    DAT_04434858 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04434860 = &DAT_042ee260;
    DAT_04434878 = 1;
  }
  return;
}


