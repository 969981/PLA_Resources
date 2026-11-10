/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03130640; name: _INIT_703
 */


void _INIT_703(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04433a40 & 1) == 0) {
    DAT_04433a30 = 0;
    DAT_04433a38 = 0;
    DAT_0444ac08 = &DAT_04433a20;
    DAT_04433a20 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433a28 = &DAT_042e8238;
    DAT_04433a40 = 1;
  }
  return;
}


