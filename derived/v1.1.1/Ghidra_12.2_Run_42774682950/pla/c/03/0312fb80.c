/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312fb80; name: _INIT_660
 */


void _INIT_660(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04433388 & 1) == 0) {
    DAT_04433378 = 0;
    DAT_04433380 = 0;
    DAT_0444ac08 = &DAT_04433368;
    DAT_04433368 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433370 = &DAT_042e5490;
    DAT_04433388 = 1;
  }
  return;
}


