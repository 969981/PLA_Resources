/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e35f4; name: FUN_032e35f4
 */


undefined1  [16] FUN_032e35f4(ulong *param_1)

{
  short *psVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  
  do {
    uVar2 = (uint)*param_1;
    if ((uVar2 >> 0x17 & 1) != 0) {
      if ((param_1 != (ulong *)0x0) &&
         (uVar2 = (uVar2 & 0x7fffff) - (uVar2 >> 1 & 0x155555),
         uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333),
         psVar1 = (short *)param_1[(ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
                                   2], psVar1 != (short *)0x0)) {
        auVar3._0_8_ = psVar1 + 4;
        auVar3._8_8_ = auVar3._0_8_ + (long)*psVar1 * 4;
        return auVar3;
      }
      break;
    }
    if ((*param_1 & 1) != 0) {
      return ZEXT816(0);
    }
    param_1 = (ulong *)param_1[1];
  } while (param_1 != (ulong *)0x0);
  return ZEXT816(0);
}


