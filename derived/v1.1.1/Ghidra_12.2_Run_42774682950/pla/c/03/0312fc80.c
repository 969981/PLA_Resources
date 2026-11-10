/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312fc80; name: _INIT_664
 */


void _INIT_664(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04433428 & 1) == 0) {
    DAT_04433418 = 0;
    DAT_04433420 = 0;
    DAT_0444ac08 = &DAT_04433408;
    DAT_04433408 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433410 = &DAT_042e5888;
    DAT_04433428 = 1;
  }
  return;
}


