/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03244b80; name: _INIT_967
 */


void _INIT_967(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439418 & 1) == 0) {
    DAT_04439408 = 0;
    DAT_04439410 = 0;
    DAT_0444ac08 = &DAT_044393f8;
    DAT_044393f8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439400 = &DAT_043135a8;
    DAT_04439418 = 1;
  }
  return;
}


