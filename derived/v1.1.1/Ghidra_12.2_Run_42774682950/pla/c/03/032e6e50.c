/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e6e50; name: _INIT_1594
 */


void _INIT_1594(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444a688 & 1) == 0) {
    DAT_0444a678 = 0;
    DAT_0444a680 = 0;
    DAT_0444ac08 = &DAT_0444a668;
    DAT_0444a668 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444a670 = &DAT_0434bae8;
    DAT_0444a688 = 1;
  }
  return;
}


