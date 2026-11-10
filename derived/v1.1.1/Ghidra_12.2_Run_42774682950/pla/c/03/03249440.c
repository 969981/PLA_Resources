/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03249440; name: _INIT_1178
 */


void _INIT_1178(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443b510 & 1) == 0) {
    DAT_0443b500 = 0;
    DAT_0443b508 = 0;
    DAT_0444ac08 = &DAT_0443b4f0;
    DAT_0443b4f0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443b4f8 = &DAT_04320678;
    DAT_0443b510 = 1;
  }
  return;
}


