/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03131260; name: _INIT_750
 */


void _INIT_750(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04434198 & 1) == 0) {
    DAT_04434188 = 0;
    DAT_04434190 = 0;
    DAT_0444ac08 = &DAT_04434178;
    DAT_04434178 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04434180 = &DAT_042eb178;
    DAT_04434198 = 1;
  }
  return;
}


