/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033480d0; name: _INIT_1763
 */


void _INIT_1763(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444e9b0 & 1) == 0) {
    DAT_0444e9a0 = 0;
    DAT_0444e9a8 = 0;
    DAT_0444ac08 = &DAT_0444e990;
    DAT_0444e990 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444e998 = &DAT_04362d00;
    DAT_0444e9b0 = 1;
  }
  return;
}


