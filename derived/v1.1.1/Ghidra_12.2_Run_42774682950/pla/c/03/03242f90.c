/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03242f90; name: _INIT_904
 */


void _INIT_904(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04438a40 & 1) == 0) {
    DAT_04438a30 = 0;
    DAT_04438a38 = 0;
    DAT_0444ac08 = &DAT_04438a20;
    DAT_04438a20 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438a28 = &DAT_0430f5e0;
    DAT_04438a40 = 1;
  }
  return;
}


