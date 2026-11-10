/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03249b30; name: _INIT_1205
 */


void _INIT_1205(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443b948 & 1) == 0) {
    DAT_0443b938 = 0;
    DAT_0443b940 = 0;
    DAT_0444ac08 = &DAT_0443b928;
    DAT_0443b928 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443b930 = &DAT_043223c0;
    DAT_0443b948 = 1;
  }
  return;
}


