/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03131d60; name: _INIT_793
 */


void _INIT_793(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04434850 & 1) == 0) {
    DAT_04434840 = 0;
    DAT_04434848 = 0;
    DAT_0444ac08 = &DAT_04434830;
    DAT_04434830 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04434838 = &DAT_042ee0c8;
    DAT_04434850 = 1;
  }
  return;
}


