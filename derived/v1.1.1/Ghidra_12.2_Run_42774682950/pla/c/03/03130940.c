/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03130940; name: _INIT_715
 */


void _INIT_715(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04433c20 & 1) == 0) {
    DAT_04433c10 = 0;
    DAT_04433c18 = 0;
    DAT_0444ac08 = &DAT_04433c00;
    DAT_04433c00 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433c08 = &DAT_042e8e30;
    DAT_04433c20 = 1;
  }
  return;
}


