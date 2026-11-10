/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028cc690; name: FUN_028cc690
 */


void FUN_028cc690(long *param_1,ulong *param_2,uint param_3,long param_4,ulong param_5,long *param_6
                 )

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = (ulong)param_3;
  uVar3 = ((param_5 & 0xffffffff) - uVar4) + (param_4 - (long)param_2) * 8;
  if (0 < (long)uVar3) {
    if (param_3 == 0) {
      uVar7 = (ulong)*(uint *)(param_6 + 1);
    }
    else {
      uVar8 = (ulong)(0x40 - param_3);
      uVar7 = uVar3;
      if ((long)uVar8 <= (long)uVar3) {
        uVar7 = uVar8;
      }
      uVar6 = (ulong)(0x40 - *(uint *)(param_6 + 1));
      uVar5 = 0xffffffffffffffffU >> (uVar8 - uVar7 & 0x3f) & -1L << (uVar4 & 0x3f) & *param_2;
      uVar8 = uVar6;
      if (uVar7 <= uVar6) {
        uVar8 = uVar7;
      }
      *(ulong *)*param_6 =
           *(ulong *)*param_6 &
           (0xffffffffffffffffU >> (uVar6 - uVar8 & 0x3f) &
            -1L << ((ulong)*(uint *)(param_6 + 1) & 0x3f) ^ 0xffffffffffffffff);
      uVar1 = *(uint *)(param_6 + 1);
      uVar6 = uVar5 << ((ulong)(uVar1 - param_3) & 0x3f);
      if (uVar1 < param_3 || uVar1 - param_3 == 0) {
        uVar6 = uVar5 >> ((ulong)(param_3 - uVar1) & 0x3f);
      }
      *(ulong *)*param_6 = *(ulong *)*param_6 | uVar6;
      puVar2 = (ulong *)(*param_6 + (uVar8 + *(uint *)(param_6 + 1) >> 3 & 0x1ffffffffffffff8));
      uVar6 = uVar7 - uVar8;
      uVar3 = uVar3 - uVar7;
      uVar1 = *(uint *)(param_6 + 1) + (int)uVar8 & 0x3f;
      uVar7 = (ulong)uVar1;
      *(uint *)(param_6 + 1) = uVar1;
      *param_6 = (long)puVar2;
      if (0 < (long)uVar6) {
        *puVar2 = *puVar2 & (0xffffffffffffffffU >> (-uVar6 & 0x3f) ^ 0xffffffffffffffff);
        uVar7 = uVar6 & 0xffffffff;
        *(ulong *)*param_6 = *(ulong *)*param_6 | uVar5 >> (uVar8 + uVar4 & 0x3f);
        *(int *)(param_6 + 1) = (int)uVar6;
      }
      param_2 = param_2 + 1;
    }
    uVar1 = 0x40 - (int)uVar7;
    if (0x3f < (long)uVar3) {
      uVar7 = -1L << (uVar7 & 0x3f);
      puVar2 = param_2;
      uVar4 = uVar3;
      do {
        param_2 = puVar2 + 1;
        uVar8 = *puVar2;
        uVar4 = uVar4 - 0x40;
        *(ulong *)*param_6 = *(ulong *)*param_6 & ~uVar7;
        *(ulong *)*param_6 = *(ulong *)*param_6 | uVar8 << ((ulong)*(uint *)(param_6 + 1) & 0x3f);
        lVar9 = *param_6;
        *param_6 = lVar9 + 8;
        *(ulong *)(lVar9 + 8) = *(ulong *)(lVar9 + 8) & uVar7;
        *(ulong *)*param_6 = *(ulong *)*param_6 | uVar8 >> ((ulong)uVar1 & 0x3f);
        puVar2 = param_2;
      } while (0x3f < (long)uVar4);
      uVar3 = uVar3 & 0x3f;
    }
    if (0 < (long)uVar3) {
      uVar8 = (ulong)uVar1;
      uVar7 = *param_2 & 0xffffffffffffffffU >> (-uVar3 & 0x3f);
      uVar4 = uVar8;
      if ((long)uVar3 <= (long)uVar8) {
        uVar4 = uVar3;
      }
      lVar9 = uVar3 - uVar4;
      *(ulong *)*param_6 =
           *(ulong *)*param_6 &
           (-1L << ((ulong)*(uint *)(param_6 + 1) & 0x3f) &
            0xffffffffffffffffU >> (uVar8 - uVar4 & 0x3f) ^ 0xffffffffffffffff);
      *(ulong *)*param_6 = *(ulong *)*param_6 | uVar7 << ((ulong)*(uint *)(param_6 + 1) & 0x3f);
      puVar2 = (ulong *)(*param_6 + (uVar4 + *(uint *)(param_6 + 1) >> 3 & 0x1ffffffffffffff8));
      *(uint *)(param_6 + 1) = *(uint *)(param_6 + 1) + (int)uVar4 & 0x3f;
      *param_6 = (long)puVar2;
      if (0 < lVar9) {
        *puVar2 = *puVar2 & (0xffffffffffffffffU >> (-lVar9 & 0x3fU) ^ 0xffffffffffffffff);
        *(ulong *)*param_6 = *(ulong *)*param_6 | uVar7 >> (uVar4 & 0x3f);
        *(int *)(param_6 + 1) = (int)lVar9;
      }
    }
  }
  *param_1 = *param_6;
  *(int *)(param_1 + 1) = (int)param_6[1];
  return;
}


