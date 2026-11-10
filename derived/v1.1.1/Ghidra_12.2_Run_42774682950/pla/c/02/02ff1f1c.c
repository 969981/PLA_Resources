/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ff1f1c; name: FUN_02ff1f1c
 */


void FUN_02ff1f1c(long *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  ulong uVar17;
  ulong uVar18;
  
  uVar5 = *(uint *)(param_1 + 2);
  uVar2 = param_3 + 0x1f >> 5;
  *(int *)(param_1 + 2) = param_3;
  if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) < (int)uVar2) {
    uVar11 = (*(uint *)((long)param_1 + 0xc) & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar11) {
      uVar11 = 0x3fffffff;
    }
    uVar8 = uVar2;
    if ((int)uVar2 <= (int)uVar11) {
      uVar8 = uVar11;
    }
    lVar10 = FUN_032bd1d4(PTR_PTR_0434a080,uVar8,4,*param_1,(int)param_1[1]);
    *param_1 = lVar10;
  }
  if (*(uint *)(param_1 + 1) != uVar2) {
    *(uint *)(param_1 + 1) = uVar2;
  }
  uVar2 = *(uint *)(param_1 + 2) & (int)*(uint *)(param_1 + 2) >> 0x1f;
  if ((int)param_2 < (int)uVar2) {
    lVar10 = *param_1;
    uVar8 = (int)param_2 >> 5;
    uVar3 = (int)uVar2 >> 5;
    uVar6 = -1 << (ulong)(uVar2 & 0x1f);
    uVar11 = -1 << (ulong)(param_2 & 0x1f);
    uVar7 = ~uVar6;
    uVar9 = -param_4;
    if (uVar3 == uVar8) {
      uVar11 = uVar11 & uVar7;
      if (uVar11 != 0) {
        uVar17 = -(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar8 << 2;
        *(uint *)(lVar10 + uVar17) =
             *(uint *)(lVar10 + uVar17) & (uVar11 ^ 0xffffffff) | uVar11 & uVar9;
      }
    }
    else {
      uVar17 = -(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar8 << 2;
      *(uint *)(lVar10 + uVar17) =
           *(uint *)(lVar10 + uVar17) & (uVar11 ^ 0xffffffff) | uVar11 & uVar9;
      if ((uVar2 & 0x1f) != 0) {
        uVar17 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2;
        *(uint *)(lVar10 + uVar17) = *(uint *)(lVar10 + uVar17) & uVar6 | uVar7 & uVar9;
      }
      uVar17 = (long)(int)uVar3 + (long)(int)~uVar8;
      puVar14 = (uint *)(lVar10 + (long)(int)uVar8 * 4 + 4);
      puVar16 = puVar14;
      if (((ulong)puVar14 & 0xf) == 0) {
        uVar18 = uVar17;
      }
      else {
        uVar18 = 4 - (((ulong)puVar14 & 0xf) >> 2);
        uVar12 = uVar17;
        if (uVar18 <= uVar17) {
          uVar12 = uVar18;
        }
        uVar18 = uVar17 - uVar12;
        if (0 < (long)uVar12) {
          puVar15 = puVar14;
          do {
            puVar16 = puVar15 + 1;
            *puVar15 = uVar9;
            puVar15 = puVar16;
          } while (puVar16 < puVar14 + uVar12);
        }
      }
      if ((3 < uVar18) && (0 < (long)(uVar18 & 0xfffffffffffffffc))) {
        puVar15 = puVar16 + (uVar18 & 0xfffffffffffffffc);
        puVar4 = puVar15;
        if (puVar15 <= puVar16 + 4) {
          puVar4 = puVar16 + 4;
        }
        uVar12 = ~(ulong)puVar16;
        uVar2 = ((uint)((long)puVar4 + uVar12 >> 4) & 0xfffffff) + 1;
        uVar18 = (ulong)uVar2 & 7;
        puVar13 = puVar16;
        if ((uVar2 & 7) != 0) {
          do {
            uVar18 = uVar18 - 1;
            puVar16 = puVar13 + 4;
            *(ulong *)(puVar13 + 2) = CONCAT44(uVar9,uVar9);
            *(ulong *)puVar13 = CONCAT44(uVar9,uVar9);
            puVar13 = puVar16;
          } while (uVar18 != 0);
        }
        if (0x6f < (long)puVar4 + uVar12) {
          do {
            *(ulong *)(puVar16 + 2) = CONCAT44(uVar9,uVar9);
            *(ulong *)puVar16 = CONCAT44(uVar9,uVar9);
            *(ulong *)(puVar16 + 6) = CONCAT44(uVar9,uVar9);
            *(ulong *)(puVar16 + 4) = CONCAT44(uVar9,uVar9);
            *(ulong *)(puVar16 + 10) = CONCAT44(uVar9,uVar9);
            *(ulong *)(puVar16 + 8) = CONCAT44(uVar9,uVar9);
            *(ulong *)(puVar16 + 0xe) = CONCAT44(uVar9,uVar9);
            *(ulong *)(puVar16 + 0xc) = CONCAT44(uVar9,uVar9);
            *(ulong *)(puVar16 + 0x12) = CONCAT44(uVar9,uVar9);
            *(ulong *)(puVar16 + 0x10) = CONCAT44(uVar9,uVar9);
            *(ulong *)(puVar16 + 0x16) = CONCAT44(uVar9,uVar9);
            *(ulong *)(puVar16 + 0x14) = CONCAT44(uVar9,uVar9);
            *(ulong *)(puVar16 + 0x1a) = CONCAT44(uVar9,uVar9);
            *(ulong *)(puVar16 + 0x18) = CONCAT44(uVar9,uVar9);
            *(ulong *)(puVar16 + 0x1e) = CONCAT44(uVar9,uVar9);
            *(ulong *)(puVar16 + 0x1c) = CONCAT44(uVar9,uVar9);
            puVar16 = puVar16 + 0x20;
          } while (puVar16 < puVar15);
        }
      }
      for (; puVar16 < puVar14 + uVar17; puVar16 = puVar16 + 1) {
        *puVar16 = uVar9;
      }
    }
  }
  if ((int)uVar5 <= (int)param_2) {
    uVar5 = param_2;
  }
  uVar2 = (int)param_1[2] + 0x1f;
  if ((int)(uVar2 & 0xffffffe0) <= (int)uVar5) {
    return;
  }
  uVar11 = (int)uVar5 >> 5;
  uVar2 = (int)uVar2 >> 5;
  if (uVar2 == uVar11) {
    return;
  }
  uVar5 = -1 << (ulong)(uVar5 & 0x1f);
  puVar14 = (uint *)(*param_1 + (long)(int)uVar11 * 4);
  uVar8 = -param_4;
  puVar16 = puVar14 + 1;
  *puVar14 = *puVar14 & (uVar5 ^ 0xffffffff) | uVar5 & uVar8;
  iVar1 = uVar2 + ~uVar11;
  uVar17 = (ulong)iVar1;
  if (((ulong)puVar16 & 0xf) != 0) {
    uVar12 = 4 - (((ulong)puVar16 & 0xf) >> 2);
    uVar18 = uVar17;
    if (uVar12 <= uVar17) {
      uVar18 = uVar12;
    }
    uVar17 = uVar17 - uVar18;
    if (0 < (long)uVar18) {
      puVar15 = puVar16;
      do {
        puVar14 = puVar15 + 1;
        *puVar15 = uVar8;
        puVar15 = puVar14;
      } while (puVar14 < puVar16 + uVar18);
      goto LAB_02ff2040;
    }
  }
  puVar14 = puVar16;
LAB_02ff2040:
  if ((3 < uVar17) && (0 < (long)(uVar17 & 0xfffffffffffffffc))) {
    puVar15 = puVar14 + (uVar17 & 0xfffffffffffffffc);
    puVar4 = puVar15;
    if (puVar15 <= puVar14 + 4) {
      puVar4 = puVar14 + 4;
    }
    uVar18 = ~(ulong)puVar14;
    uVar2 = ((uint)((long)puVar4 + uVar18 >> 4) & 0xfffffff) + 1;
    uVar17 = (ulong)uVar2 & 7;
    puVar13 = puVar14;
    if ((uVar2 & 7) != 0) {
      do {
        uVar17 = uVar17 - 1;
        puVar14 = puVar13 + 4;
        *(ulong *)(puVar13 + 2) = CONCAT44(uVar8,uVar8);
        *(ulong *)puVar13 = CONCAT44(uVar8,uVar8);
        puVar13 = puVar14;
      } while (uVar17 != 0);
    }
    if (0x6f < (long)puVar4 + uVar18) {
      do {
        *(ulong *)(puVar14 + 2) = CONCAT44(uVar8,uVar8);
        *(ulong *)puVar14 = CONCAT44(uVar8,uVar8);
        *(ulong *)(puVar14 + 6) = CONCAT44(uVar8,uVar8);
        *(ulong *)(puVar14 + 4) = CONCAT44(uVar8,uVar8);
        *(ulong *)(puVar14 + 10) = CONCAT44(uVar8,uVar8);
        *(ulong *)(puVar14 + 8) = CONCAT44(uVar8,uVar8);
        *(ulong *)(puVar14 + 0xe) = CONCAT44(uVar8,uVar8);
        *(ulong *)(puVar14 + 0xc) = CONCAT44(uVar8,uVar8);
        *(ulong *)(puVar14 + 0x12) = CONCAT44(uVar8,uVar8);
        *(ulong *)(puVar14 + 0x10) = CONCAT44(uVar8,uVar8);
        *(ulong *)(puVar14 + 0x16) = CONCAT44(uVar8,uVar8);
        *(ulong *)(puVar14 + 0x14) = CONCAT44(uVar8,uVar8);
        *(ulong *)(puVar14 + 0x1a) = CONCAT44(uVar8,uVar8);
        *(ulong *)(puVar14 + 0x18) = CONCAT44(uVar8,uVar8);
        *(ulong *)(puVar14 + 0x1e) = CONCAT44(uVar8,uVar8);
        *(ulong *)(puVar14 + 0x1c) = CONCAT44(uVar8,uVar8);
        puVar14 = puVar14 + 0x20;
      } while (puVar14 < puVar15);
    }
  }
  for (; puVar14 < puVar16 + iVar1; puVar14 = puVar14 + 1) {
    *puVar14 = uVar8;
  }
  return;
}


