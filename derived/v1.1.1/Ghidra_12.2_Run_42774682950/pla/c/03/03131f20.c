/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03131f20; name: _INIT_800
 */


void _INIT_800(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04434968 & 1) == 0) {
    DAT_04434958 = 0;
    DAT_04434960 = 0;
    DAT_0444ac08 = &DAT_04434948;
    DAT_04434948 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04434950 = &DAT_042eeac0;
    DAT_04434968 = 1;
  }
  return;
}


