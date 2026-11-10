/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03364bd0; name: _INIT_1820
 */


void _INIT_1820(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444fc48 & 1) == 0) {
    DAT_0444fc38 = 0;
    DAT_0444fc40 = 0;
    DAT_0444ac08 = &DAT_0444fc28;
    DAT_0444fc28 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444fc30 = &DAT_0436a890;
    DAT_0444fc48 = 1;
  }
  return;
}


