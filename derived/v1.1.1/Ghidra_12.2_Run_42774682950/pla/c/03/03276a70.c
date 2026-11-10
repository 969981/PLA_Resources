/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03276a70; name: _INIT_1419
 */


void _INIT_1419(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443e780 & 1) == 0) {
    DAT_0443e770 = 0;
    DAT_0443e778 = 0;
    DAT_0444ac08 = &DAT_0443e760;
    DAT_0443e760 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443e768 = &DAT_043382b8;
    DAT_0443e780 = 1;
  }
  return;
}


