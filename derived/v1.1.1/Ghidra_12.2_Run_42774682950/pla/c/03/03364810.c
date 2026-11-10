/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03364810; name: _INIT_1805
 */


void _INIT_1805(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444fa10 & 1) == 0) {
    DAT_0444fa00 = 0;
    DAT_0444fa08 = 0;
    DAT_0444ac08 = &DAT_0444f9f0;
    DAT_0444f9f0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444f9f8 = &DAT_043699f8;
    DAT_0444fa10 = 1;
  }
  return;
}


