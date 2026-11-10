/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03242900; name: _INIT_892
 */


void _INIT_892(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04438860 & 1) == 0) {
    DAT_04438850 = 0;
    DAT_04438858 = 0;
    DAT_0444ac08 = &DAT_04438840;
    DAT_04438840 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438848 = &DAT_0430ea58;
    DAT_04438860 = 1;
  }
  return;
}


