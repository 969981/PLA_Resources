/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03131c10; name: _INIT_788
 */


void _INIT_788(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04434788 & 1) == 0) {
    DAT_04434778 = 0;
    DAT_04434780 = 0;
    DAT_0444ac08 = &DAT_04434768;
    DAT_04434768 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04434770 = &DAT_042eda18;
    DAT_04434788 = 1;
  }
  return;
}


