/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032dbdc0; name: FUN_032dbdc0
 */


ulong FUN_032dbdc0(long *param_1,ulong *param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *param_1;
  uVar2 = FUN_032dec64(lVar5 + 0x38);
  while( true ) {
    uVar3 = (uint)*param_2;
    if ((uVar3 >> 0x14 & 1) != 0) break;
    if (((*param_2 & 1) != 0) || (param_2 = (ulong *)param_2[1], param_2 == (ulong *)0x0))
    goto LAB_032dbe00;
  }
  if (param_2 != (ulong *)0x0) {
    uVar3 = (uVar3 & 0xfffff) - (uVar3 >> 1 & 0x55555);
    uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
    uVar4 = (param_2[(ulong)((uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] & 0xffff)
            << 0x20;
    goto LAB_032dbe50;
  }
LAB_032dbe00:
  uVar4 = 0;
LAB_032dbe50:
  uVar1 = 0xffffffff;
  if (*(int *)(*(long *)(lVar5 + 0x38) + (long)(int)uVar2 * 0x18 + 0x10) != 0) {
    uVar1 = (ulong)uVar2;
  }
  return uVar4 | uVar1;
}


