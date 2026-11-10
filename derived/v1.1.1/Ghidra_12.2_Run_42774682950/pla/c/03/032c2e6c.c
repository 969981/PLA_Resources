/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c2e6c; name: FUN_032c2e6c
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_032c2e6c(long *param_1,long *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar1 = *(uint *)((long)param_1 + 0xc);
  if (0 < (int)uVar1) {
    lVar3 = *param_2;
    uVar4 = (int)lVar3 * -0x61c8864f;
    uVar2 = (int)((ulong)lVar3 >> 0x20) * -0x61c8864f;
    uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar4 = (uVar4 + (uVar4 >> 2) + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2) & uVar1;
    uVar5 = (ulong)uVar4;
    lVar6 = *(long *)(*param_1 + uVar5 * 0x10);
    while (lVar6 != -1) {
      if (lVar6 == lVar3) goto joined_r0x032c2f10;
      uVar4 = (int)uVar5 + 1U & uVar1;
      uVar5 = (ulong)uVar4;
      lVar6 = *(long *)(*param_1 + uVar5 * 0x10);
    }
  }
  uVar5 = (long)(int)uVar1 + 1;
  uVar4 = (uint)uVar5;
joined_r0x032c2f10:
  if ((int)uVar1 < (int)uVar4) {
    return 0x80040200;
  }
  *param_3 = *(undefined8 *)(*param_1 + ((long)(uVar5 << 0x20) >> 0x1c) + 8);
  return 0;
}


