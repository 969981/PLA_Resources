/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312fb40; name: _INIT_659
 */


void _INIT_659(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04433360 & 1) == 0) {
    DAT_04433350 = 0;
    DAT_04433358 = 0;
    DAT_0444ac08 = &DAT_04433340;
    DAT_04433340 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433348 = &DAT_042e5388;
    DAT_04433360 = 1;
  }
  return;
}


