/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03249040; name: _INIT_1162
 */


void _INIT_1162(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443b290 & 1) == 0) {
    DAT_0443b280 = 0;
    DAT_0443b288 = 0;
    DAT_0444ac08 = &DAT_0443b270;
    DAT_0443b270 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443b278 = &DAT_0431f658;
    DAT_0443b290 = 1;
  }
  return;
}


