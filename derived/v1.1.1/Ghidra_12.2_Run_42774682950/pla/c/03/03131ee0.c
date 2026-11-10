/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03131ee0; name: _INIT_799
 */


void _INIT_799(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04434940 & 1) == 0) {
    DAT_04434930 = 0;
    DAT_04434938 = 0;
    DAT_0444ac08 = &DAT_04434920;
    DAT_04434920 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04434928 = &DAT_042ee9a0;
    DAT_04434940 = 1;
  }
  return;
}


