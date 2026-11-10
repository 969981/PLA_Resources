/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312fe80; name: _INIT_672
 */


void _INIT_672(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04433568 & 1) == 0) {
    DAT_04433558 = 0;
    DAT_04433560 = 0;
    DAT_0444ac08 = &DAT_04433548;
    DAT_04433548 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433550 = &DAT_042e60c0;
    DAT_04433568 = 1;
  }
  return;
}


