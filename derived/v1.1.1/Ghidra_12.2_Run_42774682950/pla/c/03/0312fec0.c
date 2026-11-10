/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312fec0; name: _INIT_673
 */


void _INIT_673(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04433590 & 1) == 0) {
    DAT_04433580 = 0;
    DAT_04433588 = 0;
    DAT_0444ac08 = &DAT_04433570;
    DAT_04433570 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433578 = &DAT_042e61c8;
    DAT_04433590 = 1;
  }
  return;
}


