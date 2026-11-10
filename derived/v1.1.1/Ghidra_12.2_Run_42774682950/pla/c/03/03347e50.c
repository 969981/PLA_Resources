/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03347e50; name: _INIT_1753
 */


void _INIT_1753(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444e820 & 1) == 0) {
    DAT_0444e810 = 0;
    DAT_0444e818 = 0;
    DAT_0444ac08 = &DAT_0444e800;
    DAT_0444e800 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444e808 = &DAT_04362310;
    DAT_0444e820 = 1;
  }
  return;
}


