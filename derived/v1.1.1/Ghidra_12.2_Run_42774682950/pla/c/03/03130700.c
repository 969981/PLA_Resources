/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03130700; name: _INIT_706
 */


void _INIT_706(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04433ab8 & 1) == 0) {
    DAT_04433aa8 = 0;
    DAT_04433ab0 = 0;
    DAT_0444ac08 = &DAT_04433a98;
    DAT_04433a98 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433aa0 = &DAT_042e8550;
    DAT_04433ab8 = 1;
  }
  return;
}


