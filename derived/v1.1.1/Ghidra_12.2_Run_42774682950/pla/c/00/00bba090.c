/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00bba090; name: FUN_00bba090
 */


void FUN_00bba090(long *param_1,long *param_2,long *param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  puVar4 = (ulong *)*param_2;
  uVar1 = *(uint *)(param_2 + 1);
  uVar3 = ((ulong)*(uint *)(param_3 + 1) + (*param_3 - (long)puVar4) * 8) - (ulong)uVar1;
  if (0 < (long)uVar3) {
    if (uVar1 != 0) {
      uVar8 = (ulong)(0x40 - uVar1);
      uVar9 = uVar3;
      if ((long)uVar8 <= (long)uVar3) {
        uVar9 = uVar8;
      }
      uVar7 = (ulong)(0x40 - *(uint *)(param_4 + 1));
      uVar3 = uVar3 - uVar9;
      uVar5 = 0xffffffffffffffffU >> (uVar8 - uVar9 & 0x3f) & -1L << ((ulong)uVar1 & 0x3f) & *puVar4
      ;
      uVar8 = uVar7;
      if (uVar9 <= uVar7) {
        uVar8 = uVar9;
      }
      *(ulong *)*param_4 =
           *(ulong *)*param_4 &
           (0xffffffffffffffffU >> (uVar7 - uVar8 & 0x3f) &
            -1L << ((ulong)*(uint *)(param_4 + 1) & 0x3f) ^ 0xffffffffffffffff);
      uVar1 = *(uint *)(param_4 + 1);
      uVar2 = *(uint *)(param_2 + 1);
      uVar7 = uVar5 << ((ulong)(uVar1 - uVar2) & 0x3f);
      if (uVar1 < uVar2 || uVar1 - uVar2 == 0) {
        uVar7 = uVar5 >> ((ulong)(uVar2 - uVar1) & 0x3f);
      }
      *(ulong *)*param_4 = *(ulong *)*param_4 | uVar7;
      uVar1 = *(uint *)(param_4 + 1);
      *(uint *)(param_4 + 1) = uVar1 + (int)uVar8 & 0x3f;
      lVar6 = uVar9 - uVar8;
      puVar4 = (ulong *)(*param_4 + (uVar8 + uVar1 >> 3 & 0x1ffffffffffffff8));
      *param_4 = (long)puVar4;
      if (0 < lVar6) {
        *puVar4 = *puVar4 & (0xffffffffffffffffU >> (-lVar6 & 0x3fU) ^ 0xffffffffffffffff);
        *(ulong *)*param_4 = uVar5 >> (uVar8 + *(uint *)(param_2 + 1) & 0x3f) | *(ulong *)*param_4;
        *(int *)(param_4 + 1) = (int)lVar6;
      }
      puVar4 = (ulong *)(*param_2 + 8);
      *param_2 = (long)puVar4;
    }
    uVar1 = 0x40 - *(uint *)(param_4 + 1);
    if (0x3f < (long)uVar3) {
      uVar8 = -1L << ((ulong)*(uint *)(param_4 + 1) & 0x3f);
      uVar9 = uVar3;
      do {
        uVar9 = uVar9 - 0x40;
        uVar5 = *puVar4;
        *(ulong *)*param_4 = *(ulong *)*param_4 & ~uVar8;
        *(ulong *)*param_4 = *(ulong *)*param_4 | uVar5 << ((ulong)*(uint *)(param_4 + 1) & 0x3f);
        lVar6 = *param_4;
        *param_4 = lVar6 + 8;
        *(ulong *)(lVar6 + 8) = *(ulong *)(lVar6 + 8) & uVar8;
        *(ulong *)*param_4 = *(ulong *)*param_4 | uVar5 >> ((ulong)uVar1 & 0x3f);
        puVar4 = (ulong *)(*param_2 + 8);
        *param_2 = (long)puVar4;
      } while (0x3f < (long)uVar9);
      uVar3 = uVar3 & 0x3f;
    }
    if (0 < (long)uVar3) {
      uVar5 = (ulong)uVar1;
      uVar8 = *puVar4 & 0xffffffffffffffffU >> (-uVar3 & 0x3f);
      uVar9 = uVar5;
      if ((long)uVar3 <= (long)uVar5) {
        uVar9 = uVar3;
      }
      lVar6 = uVar3 - uVar9;
      *(ulong *)*param_4 =
           *(ulong *)*param_4 &
           (-1L << ((ulong)*(uint *)(param_4 + 1) & 0x3f) &
            0xffffffffffffffffU >> (uVar5 - uVar9 & 0x3f) ^ 0xffffffffffffffff);
      *(ulong *)*param_4 = *(ulong *)*param_4 | uVar8 << ((ulong)*(uint *)(param_4 + 1) & 0x3f);
      puVar4 = (ulong *)(*param_4 + (uVar9 + *(uint *)(param_4 + 1) >> 3 & 0x1ffffffffffffff8));
      *(uint *)(param_4 + 1) = *(uint *)(param_4 + 1) + (int)uVar9 & 0x3f;
      *param_4 = (long)puVar4;
      if (0 < lVar6) {
        *puVar4 = *puVar4 & (0xffffffffffffffffU >> (-lVar6 & 0x3fU) ^ 0xffffffffffffffff);
        *(ulong *)*param_4 = *(ulong *)*param_4 | uVar8 >> (uVar9 & 0x3f);
        *(int *)(param_4 + 1) = (int)lVar6;
      }
    }
  }
  *param_1 = *param_4;
  *(int *)(param_1 + 1) = (int)param_4[1];
  return;
}


