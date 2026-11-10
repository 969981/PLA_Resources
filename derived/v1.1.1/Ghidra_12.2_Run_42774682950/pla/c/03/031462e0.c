/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031462e0; name: _INIT_811
 */


void _INIT_811(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04434af8 & 1) == 0) {
    DAT_04434ae8 = 0;
    DAT_04434af0 = 0;
    DAT_0444ac08 = &DAT_04434ad8;
    DAT_04434ad8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04434ae0 = &DAT_042ef5f8;
    DAT_04434af8 = 1;
  }
  return;
}


