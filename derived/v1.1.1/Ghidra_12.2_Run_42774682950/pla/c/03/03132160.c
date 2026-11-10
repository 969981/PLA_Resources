/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03132160; name: _INIT_802
 */


void _INIT_802(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044349b8 & 1) == 0) {
    DAT_044349a8 = 0;
    DAT_044349b0 = 0;
    DAT_0444ac08 = &DAT_04434998;
    DAT_04434998 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044349a0 = &DAT_042eec58;
    DAT_044349b8 = 1;
  }
  return;
}


