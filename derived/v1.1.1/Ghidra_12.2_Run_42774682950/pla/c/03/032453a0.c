/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032453a0; name: _INIT_999
 */


void _INIT_999(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439918 & 1) == 0) {
    DAT_04439908 = 0;
    DAT_04439910 = 0;
    DAT_0444ac08 = &DAT_044398f8;
    DAT_044398f8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439900 = &DAT_043157d8;
    DAT_04439918 = 1;
  }
  return;
}


