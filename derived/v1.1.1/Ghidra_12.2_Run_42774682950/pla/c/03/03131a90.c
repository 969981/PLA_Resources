/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03131a90; name: _INIT_782
 */


void _INIT_782(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04434698 & 1) == 0) {
    DAT_04434688 = 0;
    DAT_04434690 = 0;
    DAT_0444ac08 = &DAT_04434678;
    DAT_04434678 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04434680 = &DAT_042ed4e0;
    DAT_04434698 = 1;
  }
  return;
}


