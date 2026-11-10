/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e31d4; name: FUN_032e31d4
 */


undefined1  [16] FUN_032e31d4(ulong *param_1)

{
  uint uVar1;
  short *psVar2;
  undefined1 auVar3 [16];
  
  while( true ) {
    uVar1 = (uint)*param_1;
    if ((uVar1 >> 0x17 & 1) != 0) break;
    if (((*param_1 & 1) != 0) || (param_1 = (ulong *)param_1[1], param_1 == (ulong *)0x0))
    goto LAB_032e3250;
  }
  if ((param_1 != (ulong *)0x0) &&
     (uVar1 = (uVar1 & 0x7fffff) - (uVar1 >> 1 & 0x155555),
     uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333),
     psVar2 = (short *)param_1[(ulong)((uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2],
     psVar2 != (short *)0x0)) {
    auVar3._8_8_ = psVar2 + 4 + ((long)psVar2[1] + (long)*psVar2) * 4;
    auVar3._0_8_ = psVar2 + 4;
    return auVar3;
  }
LAB_032e3250:
  return ZEXT816(0);
}


