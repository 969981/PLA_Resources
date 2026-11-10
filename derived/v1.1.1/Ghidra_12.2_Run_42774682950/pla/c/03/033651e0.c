/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033651e0; name: _INIT_1843
 */


void _INIT_1843(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444ffe0 & 1) == 0) {
    DAT_0444ffd0 = 0;
    DAT_0444ffd8 = 0;
    DAT_0444ac08 = &DAT_0444ffc0;
    DAT_0444ffc0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444ffc8 = &DAT_0436bee8;
    DAT_0444ffe0 = 1;
  }
  return;
}


