/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312ffc0; name: _INIT_677
 */


void _INIT_677(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04433630 & 1) == 0) {
    DAT_04433620 = 0;
    DAT_04433628 = 0;
    DAT_0444ac08 = &DAT_04433610;
    DAT_04433610 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433618 = &DAT_042e65c8;
    DAT_04433630 = 1;
  }
  return;
}


