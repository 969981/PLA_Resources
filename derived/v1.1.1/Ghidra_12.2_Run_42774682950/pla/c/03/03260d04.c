/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03260d04; name: FUN_03260d04
 */


void FUN_03260d04(long *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  
  lVar8 = *param_1;
  puVar9 = (uint *)(lVar8 + (long)(int)param_2 * 0x10);
  uVar3 = *puVar9;
  uVar10 = *(undefined8 *)(puVar9 + 1);
  uVar4 = puVar9[3];
  lVar7 = param_1[1];
  uVar6 = (int)lVar7 - 2U >> 1;
  if (uVar6 < param_2) {
LAB_03260d38:
    uVar6 = (int)lVar7 - 1;
    if (param_2 == ((uVar6 & 1) - 1 & uVar6 >> 1)) {
      lVar8 = *param_1;
      uVar6 = param_2 << 1;
      if (*(uint *)(lVar8 + (-(ulong)((param_2 & 0x7fffffff) >> 0x1e) & 0xfffffff000000000 |
                            (ulong)uVar6 << 4)) < uVar3) {
        puVar2 = (undefined8 *)(lVar8 + (long)(int)uVar6 * 0x10);
        puVar1 = (undefined8 *)(lVar8 + (long)(int)param_2 * 0x10);
        puVar1[1] = puVar2[1];
        *puVar1 = *puVar2;
        param_2 = uVar6;
      }
    }
    puVar9 = (uint *)(*param_1 + (long)(int)param_2 * 0x10);
  }
  else {
    uVar12 = param_2 << 1;
    if (*(uint *)(lVar8 + ((long)(int)uVar12 | 1U) * 0x10) <=
        *(uint *)(lVar8 + (-(ulong)((param_2 & 0x7fffffff) >> 0x1e) & 0xfffffff000000000 |
                          (ulong)uVar12 << 4))) {
      uVar12 = (uint)((long)(int)uVar12 | 1U);
    }
    uVar11 = (ulong)uVar12;
    uVar5 = *(uint *)(lVar8 + (-(ulong)(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar11 << 4));
    while (uVar5 < uVar3) {
      puVar1 = (undefined8 *)(lVar8 + (long)(int)param_2 * 0x10);
      param_2 = (uint)uVar11;
      puVar2 = (undefined8 *)(lVar8 + (long)(int)uVar12 * 0x10);
      puVar1[1] = puVar2[1];
      *puVar1 = *puVar2;
      if (uVar6 < param_2) goto LAB_03260d38;
      lVar8 = *param_1;
      uVar12 = param_2 << 1;
      if (*(uint *)(lVar8 + ((long)(int)uVar12 | 1U) * 0x10) <=
          *(uint *)(lVar8 + (-(ulong)((param_2 & 0x7fffffff) >> 0x1e) & 0xfffffff000000000 |
                            (ulong)uVar12 << 4))) {
        uVar12 = (uint)((long)(int)uVar12 | 1U);
      }
      uVar11 = (ulong)uVar12;
      uVar5 = *(uint *)(lVar8 + (-(ulong)(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar11 << 4));
    }
    puVar9 = (uint *)(lVar8 + (long)(int)param_2 * 0x10);
  }
  *puVar9 = uVar3;
  puVar9[3] = uVar4;
  *(undefined8 *)(puVar9 + 1) = uVar10;
  return;
}


