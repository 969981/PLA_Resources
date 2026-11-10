/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03347950; name: _INIT_1733
 */


void _INIT_1733(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444e500 & 1) == 0) {
    DAT_0444e4f0 = 0;
    DAT_0444e4f8 = 0;
    DAT_0444ac08 = &DAT_0444e4e0;
    DAT_0444e4e0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444e4e8 = &DAT_04360f50;
    DAT_0444e500 = 1;
  }
  return;
}


