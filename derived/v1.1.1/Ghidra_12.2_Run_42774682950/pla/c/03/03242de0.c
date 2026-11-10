/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03242de0; name: _INIT_898
 */


void _INIT_898(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04438950 & 1) == 0) {
    DAT_04438940 = 0;
    DAT_04438948 = 0;
    DAT_0444ac08 = &DAT_04438930;
    DAT_04438930 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438938 = &DAT_0430f010;
    DAT_04438950 = 1;
  }
  return;
}


