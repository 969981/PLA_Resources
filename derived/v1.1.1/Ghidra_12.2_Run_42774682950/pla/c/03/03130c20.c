/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03130c20; name: _INIT_726
 */


void _INIT_726(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04433dd8 & 1) == 0) {
    DAT_04433dc8 = 0;
    DAT_04433dd0 = 0;
    DAT_0444ac08 = &DAT_04433db8;
    DAT_04433db8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433dc0 = &DAT_042e9760;
    DAT_04433dd8 = 1;
  }
  return;
}


