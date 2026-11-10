/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03364750; name: _INIT_1802
 */


void _INIT_1802(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444f998 & 1) == 0) {
    DAT_0444f988 = 0;
    DAT_0444f990 = 0;
    DAT_0444ac08 = &DAT_0444f978;
    DAT_0444f978 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444f980 = &DAT_04369608;
    DAT_0444f998 = 1;
  }
  return;
}


