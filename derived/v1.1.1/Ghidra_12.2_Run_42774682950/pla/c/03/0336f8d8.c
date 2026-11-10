/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0336f8d8; name: FUN_0336f8d8
 */


void FUN_0336f8d8(long *param_1,long param_2,uint param_3,long param_4)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 *puVar13;
  uint *puVar14;
  uint uVar15;
  long lVar16;
  long *plVar17;
  
  *param_1 = (long)&PTR_LAB_04367df0;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = param_4;
  if (param_4 != 0) {
    FUN_032d645c(param_4);
  }
  puVar6 = PTR_DAT_04389498;
  param_1[4] = param_2;
  *param_1 = (long)(puVar6 + 0x10);
  if (param_2 != 0) {
    FUN_032d645c(param_2);
  }
  plVar17 = param_1 + 5;
  *plVar17 = 0;
  param_1[6] = 0;
  lVar8 = FUN_032cf5b0(0xd98);
  FUN_03370f60();
  lVar9 = *plVar17;
  if ((lVar9 != lVar8) && (*plVar17 = lVar8, lVar9 != 0)) {
    FUN_032d647c();
  }
  puVar10 = (undefined8 *)FUN_032cf5b0(0x28);
  *puVar10 = &PTR_LAB_0436de98;
  puVar10[1] = 0xffffffff;
  puVar10[2] = 1;
  puVar10[3] = 0;
  puVar10[4] = 0x8000000000000000;
  puVar13 = (undefined8 *)param_1[6];
  if ((puVar13 != puVar10) && (param_1[6] = (long)puVar10, puVar13 != (undefined8 *)0x0)) {
    FUN_032d647c(puVar13);
  }
  if (param_3 == 0) {
    return;
  }
  lVar8 = *plVar17;
  uVar15 = *(uint *)(lVar8 + 0x24);
  if (*(int *)(lVar8 + 0x20) != 0) {
    *(undefined4 *)(lVar8 + 0x20) = 0;
  }
  uVar2 = param_3 + 8;
  if ((int)(uVar15 & 0x3fffffff) < (int)uVar2) {
    uVar11 = *(undefined8 *)(lVar8 + 0x18);
    if (0x3fffffff < (int)uVar2) {
      FUN_032bd0a8(uVar2);
      uVar15 = *(uint *)(lVar8 + 0x24);
    }
    uVar15 = (uVar15 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar15) {
      uVar15 = 0x3fffffff;
    }
    uVar4 = uVar2;
    if ((int)uVar2 <= (int)uVar15) {
      uVar4 = uVar15;
    }
    uVar11 = FUN_032bd1d4(PTR_PTR_0434a080,uVar4,4,uVar11,0);
    iVar12 = *(int *)(lVar8 + 0x20);
    *(undefined8 *)(lVar8 + 0x18) = uVar11;
    bVar7 = SBORROW4(uVar2,iVar12);
    uVar15 = uVar2 - iVar12;
    if ((int)uVar2 <= iVar12) goto LAB_0336fc60;
  }
  else {
    iVar12 = 0;
    bVar7 = false;
    uVar15 = uVar2;
    if ((int)uVar2 < 1) {
LAB_0336fc60:
      if ((int)uVar15 < 0 != bVar7) {
        *(uint *)(lVar8 + 0x20) = uVar2;
      }
      goto LAB_0336fa4c;
    }
  }
  *(uint *)(lVar8 + 0x20) = uVar2;
  memset((void *)(*(long *)(lVar8 + 0x18) + (long)iVar12 * 4),0,
         (ulong)((param_3 - iVar12) + 7) * 4 + 4);
LAB_0336fa4c:
  puVar14 = *(uint **)(lVar8 + 0x18);
  puVar1 = puVar14 + (int)(param_3 + 4);
  puVar14[2] = 4;
  puVar14[3] = puVar14[3] | 0x40000000;
  puVar14[6] = param_3;
  puVar14[(long)(int)param_3 + 2] = param_3;
  puVar14[(long)(int)param_3 + 3] = puVar14[(long)(int)param_3 + 3] | 0x40000000;
  puVar1[2] = 4;
  puVar1[3] = puVar1[3] | 0x40000000;
  *puVar14 = *puVar14 & 0x7fffffff;
  puVar14[puVar14[2] - 1] = puVar14[puVar14[2] - 1] & 0x7fffffff;
  puVar14[4] = puVar14[4] | 0x80000000;
  puVar14[(ulong)(puVar14[6] - 1) + 4] = puVar14[(ulong)(puVar14[6] - 1) + 4] | 0x80000000;
  *puVar1 = *puVar1 & 0x7fffffff;
  puVar1[puVar1[2] - 1] = puVar1[puVar1[2] - 1] & 0x7fffffff;
  puVar14[1] = 0;
  puVar14[5] = 0;
  puVar1[1] = 0;
  *puVar14 = *puVar14 & 0xe0000000;
  puVar14[4] = puVar14[4] & 0xe0000000;
  *puVar1 = *puVar1 & 0xe0000000;
  lVar9 = *(long *)(lVar8 + 0x18);
  uVar2 = *(uint *)(lVar9 + 0x18);
  uVar15 = uVar2 | uVar2 >> 1;
  uVar15 = uVar15 | uVar15 >> 2;
  uVar15 = uVar15 | uVar15 >> 4;
  uVar15 = uVar15 | uVar15 >> 8;
  uVar15 = uVar15 | uVar15 >> 0x10;
  uVar15 = uVar15 - (uVar15 >> 1 & 0x55555555);
  uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
  uVar4 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
  uVar5 = uVar4 - 3;
  uVar15 = uVar5;
  if (4 < uVar5) {
    uVar15 = 5;
  }
  uVar15 = (uVar2 & (0x80000000U >> (ulong)(-uVar4 & 0x1f) ^ 0xffffffff)) >>
           ((ulong)(uVar4 + ~uVar15) & 0x3f);
  lVar3 = lVar8 + (ulong)uVar5 * 0x80 + (ulong)uVar15 * 4;
  iVar12 = *(int *)(lVar3 + 0x94);
  lVar16 = (long)iVar12 * 4;
  *(int *)(lVar9 + 0x14) = iVar12;
  *(uint *)(lVar9 + 0x10) = *(uint *)(lVar9 + 0x10) & 0xe0000000;
  *(uint *)(lVar9 + lVar16) = *(uint *)(lVar9 + lVar16) & 0xe0000000 | 4;
  *(undefined4 *)(lVar3 + 0x94) = 4;
  *(uint *)(lVar8 + 0x28) = 1 << (ulong)(uVar5 & 0x1f) | *(uint *)(lVar8 + 0x28);
  lVar8 = lVar8 + (ulong)uVar5 * 4;
  *(uint *)(lVar8 + 0x2c) = 1 << (ulong)(uVar15 & 0x1f) | *(uint *)(lVar8 + 0x2c);
  return;
}


