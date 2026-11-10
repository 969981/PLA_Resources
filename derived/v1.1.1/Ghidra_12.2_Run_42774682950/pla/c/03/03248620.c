/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03248620; name: _INIT_1123
 */


void _INIT_1123(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443ac78 & 1) == 0) {
    DAT_0443ac68 = 0;
    DAT_0443ac70 = 0;
    DAT_0444ac08 = &DAT_0443ac58;
    DAT_0443ac58 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443ac60 = &DAT_0431cde0;
    DAT_0443ac78 = 1;
  }
  return;
}


