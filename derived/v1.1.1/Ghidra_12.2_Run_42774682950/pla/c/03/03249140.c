/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03249140; name: _INIT_1166
 */


void _INIT_1166(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443b330 & 1) == 0) {
    DAT_0443b320 = 0;
    DAT_0443b328 = 0;
    DAT_0444ac08 = &DAT_0443b310;
    DAT_0443b310 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443b318 = &DAT_0431fa00;
    DAT_0443b330 = 1;
  }
  return;
}


