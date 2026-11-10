/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031322a0; name: _INIT_807
 */


void _INIT_807(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04434a80 & 1) == 0) {
    DAT_04434a70 = 0;
    DAT_04434a78 = 0;
    DAT_0444ac08 = &DAT_04434a60;
    DAT_04434a60 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04434a68 = &DAT_042ef150;
    DAT_04434a80 = 1;
  }
  return;
}


