/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03364690; name: _INIT_1799
 */


void _INIT_1799(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444f920 & 1) == 0) {
    DAT_0444f910 = 0;
    DAT_0444f918 = 0;
    DAT_0444ac08 = &DAT_0444f900;
    DAT_0444f900 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444f908 = &DAT_043692c0;
    DAT_0444f920 = 1;
  }
  return;
}


