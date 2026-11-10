/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032da2f0; name: _INIT_1586
 */


void _INIT_1586(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444a158 & 1) == 0) {
    DAT_0444a148 = 0;
    DAT_0444a150 = 0;
    DAT_0444ac08 = &DAT_0444a138;
    DAT_0444a138 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444a140 = &DAT_0434aeb8;
    DAT_0444a158 = 1;
  }
  return;
}


