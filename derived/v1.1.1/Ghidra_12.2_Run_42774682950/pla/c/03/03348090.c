/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03348090; name: _INIT_1762
 */


void _INIT_1762(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444e988 & 1) == 0) {
    DAT_0444e978 = 0;
    DAT_0444e980 = 0;
    DAT_0444ac08 = &DAT_0444e968;
    DAT_0444e968 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444e970 = &DAT_04362c48;
    DAT_0444e988 = 1;
  }
  return;
}


