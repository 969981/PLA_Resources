/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312d5c0; name: _INIT_516
 */


void _INIT_516(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04431d18 & 1) == 0) {
    DAT_04431d08 = 0;
    DAT_04431d10 = 0;
    DAT_0444ac08 = &DAT_04431cf8;
    DAT_04431cf8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04431d00 = &DAT_042dc8c0;
    DAT_04431d18 = 1;
  }
  return;
}


