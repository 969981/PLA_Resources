/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032760c0; name: _INIT_1407
 */


void _INIT_1407(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443e5a0 & 1) == 0) {
    DAT_0443e590 = 0;
    DAT_0443e598 = 0;
    DAT_0444ac08 = &DAT_0443e580;
    DAT_0443e580 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443e588 = &DAT_043377a8;
    DAT_0443e5a0 = 1;
  }
  return;
}


