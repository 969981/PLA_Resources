/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312d710; name: _INIT_521
 */


void _INIT_521(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04431de0 & 1) == 0) {
    DAT_04431dd0 = 0;
    DAT_04431dd8 = 0;
    DAT_0444ac08 = &DAT_04431dc0;
    DAT_04431dc0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04431dc8 = &DAT_042dcce8;
    DAT_04431de0 = 1;
  }
  return;
}


