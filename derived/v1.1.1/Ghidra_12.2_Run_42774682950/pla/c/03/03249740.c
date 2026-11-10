/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03249740; name: _INIT_1190
 */


void _INIT_1190(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443b6f0 & 1) == 0) {
    DAT_0443b6e0 = 0;
    DAT_0443b6e8 = 0;
    DAT_0444ac08 = &DAT_0443b6d0;
    DAT_0443b6d0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443b6d8 = &DAT_04321278;
    DAT_0443b6f0 = 1;
  }
  return;
}


