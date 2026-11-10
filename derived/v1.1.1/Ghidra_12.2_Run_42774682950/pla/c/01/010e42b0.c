/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010e42b0; name: FUN_010e42b0
 */


void FUN_010e42b0(long *param_1,long *param_2,long *param_3,long *param_4)

{
  uint uVar1;
  ulong *__src;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  size_t __n;
  ulong uVar7;
  
  __src = (ulong *)*param_2;
  uVar1 = *(uint *)(param_2 + 1);
  uVar7 = ((ulong)*(uint *)(param_3 + 1) + (*param_3 - (long)__src) * 8) - (ulong)uVar1;
  if (0 < (long)uVar7) {
    if (uVar1 != 0) {
      uVar3 = (ulong)(0x40 - uVar1);
      uVar6 = uVar7;
      if ((long)uVar3 <= (long)uVar7) {
        uVar6 = uVar3;
      }
      uVar3 = 0xffffffffffffffffU >> (uVar3 - uVar6 & 0x3f) & -1L << ((ulong)uVar1 & 0x3f);
      uVar4 = *__src;
      *(ulong *)*param_4 = *(ulong *)*param_4 & (uVar3 ^ 0xffffffffffffffff);
      *(ulong *)*param_4 = *(ulong *)*param_4 | uVar4 & uVar3;
      uVar7 = uVar7 - uVar6;
      lVar2 = uVar6 + *(uint *)(param_4 + 1);
      lVar5 = lVar2 + 0x3f;
      if (-1 < lVar2) {
        lVar5 = lVar2;
      }
      *param_4 = *param_4 + (lVar5 >> 6) * 8;
      *(int *)(param_4 + 1) = (int)lVar2 + (int)(lVar5 >> 6) * -0x40;
      __src = (ulong *)(*param_2 + 8);
      *param_2 = (long)__src;
    }
    uVar6 = uVar7 + 0x3f;
    if (-1 < (long)uVar7) {
      uVar6 = uVar7;
    }
    __n = ((long)uVar6 >> 6) * 8;
    memmove((void *)*param_4,__src,__n);
    lVar2 = (long)uVar7 % 0x40;
    *param_4 = *param_4 + __n;
    if (0 < lVar2) {
      lVar5 = *param_2;
      *param_2 = lVar5 + __n;
      uVar6 = 0xffffffffffffffff >> (-lVar2 & 0x3fU);
      uVar7 = *(ulong *)(lVar5 + __n);
      *(ulong *)*param_4 = *(ulong *)*param_4 & (uVar6 ^ 0xffffffffffffffff);
      *(ulong *)*param_4 = *(ulong *)*param_4 | uVar7 & uVar6;
      *(int *)(param_4 + 1) = (int)lVar2;
    }
  }
  *param_1 = *param_4;
  *(int *)(param_1 + 1) = (int)param_4[1];
  return;
}


