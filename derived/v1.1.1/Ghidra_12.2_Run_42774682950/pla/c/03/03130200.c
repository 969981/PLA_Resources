/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03130200; name: _INIT_686
 */


void _INIT_686(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04433798 & 1) == 0) {
    DAT_04433788 = 0;
    DAT_04433790 = 0;
    DAT_0444ac08 = &DAT_04433778;
    DAT_04433778 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433780 = &DAT_042e7040;
    DAT_04433798 = 1;
  }
  return;
}


