/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03364c50; name: _INIT_1822
 */


void _INIT_1822(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444fc98 & 1) == 0) {
    DAT_0444fc88 = 0;
    DAT_0444fc90 = 0;
    DAT_0444ac08 = &DAT_0444fc78;
    DAT_0444fc78 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444fc80 = &DAT_0436aa88;
    DAT_0444fc98 = 1;
  }
  return;
}


