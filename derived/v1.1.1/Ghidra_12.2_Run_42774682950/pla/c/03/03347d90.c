/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03347d90; name: _INIT_1750
 */


void _INIT_1750(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444e7a8 & 1) == 0) {
    DAT_0444e798 = 0;
    DAT_0444e7a0 = 0;
    DAT_0444ac08 = &DAT_0444e788;
    DAT_0444e788 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444e790 = &DAT_04361ff8;
    DAT_0444e7a8 = 1;
  }
  return;
}


