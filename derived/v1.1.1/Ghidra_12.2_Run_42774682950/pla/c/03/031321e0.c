/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031321e0; name: _INIT_804
 */


void _INIT_804(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04434a08 & 1) == 0) {
    DAT_044349f8 = 0;
    DAT_04434a00 = 0;
    DAT_0444ac08 = &DAT_044349e8;
    DAT_044349e8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044349f0 = &DAT_042eee98;
    DAT_04434a08 = 1;
  }
  return;
}


