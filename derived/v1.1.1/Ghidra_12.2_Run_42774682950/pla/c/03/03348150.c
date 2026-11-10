/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03348150; name: _INIT_1765
 */


void _INIT_1765(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444ea00 & 1) == 0) {
    DAT_0444e9f0 = 0;
    DAT_0444e9f8 = 0;
    DAT_0444ac08 = &DAT_0444e9e0;
    DAT_0444e9e0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444e9e8 = &DAT_04362f50;
    DAT_0444ea00 = 1;
  }
  return;
}


