/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03131bd0; name: _INIT_787
 */


void _INIT_787(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04434760 & 1) == 0) {
    DAT_04434750 = 0;
    DAT_04434758 = 0;
    DAT_0444ac08 = &DAT_04434740;
    DAT_04434740 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04434748 = &DAT_042ed910;
    DAT_04434760 = 1;
  }
  return;
}


