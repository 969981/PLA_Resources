/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033470c0; name: _INIT_1699
 */


void _INIT_1699(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444dfb0 & 1) == 0) {
    DAT_0444dfa0 = 0;
    DAT_0444dfa8 = 0;
    DAT_0444ac08 = &DAT_0444df90;
    DAT_0444df90 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444df98 = &DAT_0435eef8;
    DAT_0444dfb0 = 1;
  }
  return;
}


