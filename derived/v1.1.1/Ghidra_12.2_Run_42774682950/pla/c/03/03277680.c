/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03277680; name: _INIT_1427
 */


void _INIT_1427(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443e8c0 & 1) == 0) {
    DAT_0443e8b0 = 0;
    DAT_0443e8b8 = 0;
    DAT_0444ac08 = &DAT_0443e8a0;
    DAT_0443e8a0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443e8a8 = &DAT_04338a08;
    DAT_0443e8c0 = 1;
  }
  return;
}


