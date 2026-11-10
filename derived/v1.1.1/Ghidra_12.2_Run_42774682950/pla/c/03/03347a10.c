/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03347a10; name: _INIT_1736
 */


void _INIT_1736(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444e578 & 1) == 0) {
    DAT_0444e568 = 0;
    DAT_0444e570 = 0;
    DAT_0444ac08 = &DAT_0444e558;
    DAT_0444e558 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444e560 = &DAT_04361418;
    DAT_0444e578 = 1;
  }
  return;
}


