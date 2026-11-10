/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03130900; name: _INIT_714
 */


void _INIT_714(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04433bf8 & 1) == 0) {
    DAT_04433be8 = 0;
    DAT_04433bf0 = 0;
    DAT_0444ac08 = &DAT_04433bd8;
    DAT_04433bd8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433be0 = &DAT_042e8d90;
    DAT_04433bf8 = 1;
  }
  return;
}


