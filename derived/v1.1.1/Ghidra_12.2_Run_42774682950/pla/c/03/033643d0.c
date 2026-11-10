/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033643d0; name: _INIT_1788
 */


void _INIT_1788(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444f778 & 1) == 0) {
    DAT_0444f768 = 0;
    DAT_0444f770 = 0;
    DAT_0444ac08 = &DAT_0444f758;
    DAT_0444f758 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444f760 = &DAT_04368770;
    DAT_0444f778 = 1;
  }
  return;
}


