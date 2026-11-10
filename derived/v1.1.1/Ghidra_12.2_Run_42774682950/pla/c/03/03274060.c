/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03274060; name: _INIT_1341
 */


void _INIT_1341(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443db50 & 1) == 0) {
    DAT_0443db40 = 0;
    DAT_0443db48 = 0;
    DAT_0444ac08 = &DAT_0443db30;
    DAT_0443db30 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443db38 = &DAT_04333190;
    DAT_0443db50 = 1;
  }
  return;
}


