/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03244e00; name: _INIT_977
 */


void _INIT_977(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044395a8 & 1) == 0) {
    DAT_04439598 = 0;
    DAT_044395a0 = 0;
    DAT_0444ac08 = &DAT_04439588;
    DAT_04439588 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439590 = &DAT_04314158;
    DAT_044395a8 = 1;
  }
  return;
}


