/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033479d0; name: _INIT_1735
 */


void _INIT_1735(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444e550 & 1) == 0) {
    DAT_0444e540 = 0;
    DAT_0444e548 = 0;
    DAT_0444ac08 = &DAT_0444e530;
    DAT_0444e530 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444e538 = &DAT_04361280;
    DAT_0444e550 = 1;
  }
  return;
}


