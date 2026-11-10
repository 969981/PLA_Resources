/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03130dc0; name: _INIT_732
 */


void _INIT_732(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04433ec8 & 1) == 0) {
    DAT_04433eb8 = 0;
    DAT_04433ec0 = 0;
    DAT_0444ac08 = &DAT_04433ea8;
    DAT_04433ea8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433eb0 = &DAT_042e9d80;
    DAT_04433ec8 = 1;
  }
  return;
}


