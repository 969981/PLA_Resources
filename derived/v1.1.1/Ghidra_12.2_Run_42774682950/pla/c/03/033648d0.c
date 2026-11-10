/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033648d0; name: _INIT_1808
 */


void _INIT_1808(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444fa78 & 1) == 0) {
    DAT_0444fa68 = 0;
    DAT_0444fa70 = 0;
    DAT_0444ac08 = &DAT_0444fa58;
    DAT_0444fa58 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444fa60 = &DAT_04369c98;
    DAT_0444fa78 = 1;
  }
  return;
}


