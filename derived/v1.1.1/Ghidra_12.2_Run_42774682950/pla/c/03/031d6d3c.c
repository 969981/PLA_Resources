/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d6d3c; name: FUN_031d6d3c
 */


void FUN_031d6d3c(long param_1,long *param_2,int *param_3,int *param_4,long *param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  short sVar13;
  ulong uVar14;
  undefined1 *puVar15;
  uint uVar16;
  uint uVar17;
  int local_a8 [2];
  undefined4 local_a0 [2];
  int local_98 [2];
  int local_90 [2];
  undefined4 local_88 [2];
  int local_80 [2];
  undefined4 local_78 [2];
  int local_70 [2];
  uint local_68 [2];
  
  lVar10 = FUN_031dbecc(param_2,param_3);
  if ((lVar10 == 0) ||
     (uVar14 = (ulong)*(uint *)(lVar10 + 4) | (lVar10 - param_2[2]) * 0x20000000, (int)uVar14 < 0))
  {
    iVar5 = *param_3;
    local_68[0] = 0x400000;
    iVar12 = (int)param_5[1];
    iVar4 = param_3[10];
    lVar10 = *(long *)(*(long *)(param_1 + 8) + 0x18) + (long)iVar5 * 0x10;
    lVar11 = *param_5;
    iVar2 = iVar12 + 1;
    if ((int)(*(uint *)((long)param_5 + 0xc) & 0x3fffffff) <= iVar12) {
      lVar11 = FUN_031db48c(PTR_PTR_0434a080,iVar2);
      iVar12 = (int)param_5[1];
      *param_5 = lVar11;
    }
    puVar15 = (undefined1 *)(lVar11 + (long)iVar12 * 0xc);
    *puVar15 = 0;
    *(int *)(puVar15 + 4) = iVar5;
    *(int *)(puVar15 + 8) = iVar4;
    *(int *)(param_5 + 1) = iVar2;
    uVar9 = (int)*(short *)(lVar10 + 10) + (int)*(short *)(lVar10 + 8);
    if ((int)uVar9 < 1) {
      uVar8 = 0x400000;
    }
    else {
      uVar14 = 0;
      uVar8 = 0x400000;
      do {
        iVar2 = *param_4;
        if ((long)(short)param_4[2] <= (long)uVar14) {
          iVar2 = param_4[1] - (int)(short)param_4[2];
        }
        uVar3 = *(uint *)(*(long *)(param_3 + 2) + (uVar14 >> 5 & 0x7ffffff) * 4);
        uVar17 = (uint)uVar14;
        uVar16 = 1 << (ulong)(uVar17 & 0x1f);
        uVar7 = uVar14 & 0x3f;
        if ((uVar3 & uVar16) != 0) {
          lVar10 = *(long *)(*(long *)(param_1 + 8) + 0x28);
          iVar12 = *(int *)(lVar10 + (long)(int)(uVar17 + iVar2) * 0x14 + 0xc);
          if (iVar12 != -1 && iVar12 != *param_3) {
            local_a0[0] = *(undefined4 *)(lVar10 + (long)(int)(uVar17 + iVar2) * 0x14 + 8);
            local_98[0] = iVar12;
            FUN_031d85f8(param_1,local_98,local_a0,param_5);
          }
        }
        uVar14 = uVar14 + 1;
        uVar8 = (uint)((uVar3 & uVar16) != 0) << (ulong)(uVar17 & 0x1f) |
                uVar8 & ((uint)(1L << uVar7) ^ 0xffffffff);
      } while (uVar9 != uVar14);
      local_68[0] = uVar8;
    }
    local_a8[0] = *param_3;
    FUN_031db044(param_1,local_68,local_a8,param_5 + 2);
    uVar9 = FUN_031dd9a8(param_2,param_3);
    if (*(uint *)(param_2 + 1) == uVar9) {
      lVar10 = *param_2;
      iVar2 = uVar9 + 1;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) <= (int)uVar9) {
        lVar10 = FUN_031dda90(PTR_PTR_0434a080,iVar2);
        uVar9 = *(uint *)(param_2 + 1);
        *param_2 = lVar10;
      }
      piVar1 = (int *)(lVar10 + (long)(int)uVar9 * 8);
      *piVar1 = *param_3;
      piVar1[1] = uVar8;
      *(int *)(param_2 + 1) = iVar2;
    }
    else {
      *(uint *)(*param_2 + ((long)((ulong)uVar9 << 0x20) >> 0x1d) + 4) = uVar8;
    }
  }
  else {
    uVar9 = *(uint *)(*param_2 + ((long)(uVar14 << 0x20) >> 0x1d) + 4) | 0x400000;
    iVar12 = (int)param_5[1];
    iVar4 = *param_3;
    iVar5 = param_3[10];
    lVar10 = *param_5;
    iVar2 = iVar12 + 1;
    local_68[0] = uVar9;
    if ((int)(*(uint *)((long)param_5 + 0xc) & 0x3fffffff) <= iVar12) {
      lVar10 = FUN_031db48c(PTR_PTR_0434a080,iVar2);
      iVar12 = (int)param_5[1];
      *param_5 = lVar10;
    }
    puVar15 = (undefined1 *)(lVar10 + (long)iVar12 * 0xc);
    *puVar15 = 0;
    *(int *)(puVar15 + 4) = iVar4;
    *(int *)(puVar15 + 8) = iVar5;
    *(int *)(param_5 + 1) = iVar2;
    sVar13 = (short)param_4[2];
    uVar8 = (int)*(short *)((long)param_4 + 10) + (int)sVar13;
    if (0 < (int)uVar8) {
      uVar14 = 0;
      while( true ) {
        iVar2 = *param_4;
        if ((long)sVar13 <= (long)uVar14) {
          iVar2 = param_4[1] - (int)sVar13;
        }
        uVar16 = (uint)uVar14;
        uVar3 = *(uint *)(*(long *)(param_3 + 2) + (uVar14 >> 5 & 0x7ffffff) * 4) >>
                (ulong)(uVar16 & 0x1f) & 1;
        if ((uVar9 >> (ulong)(uVar16 & 0x1f) & 1) != uVar3) {
          lVar10 = *(long *)(*(long *)(param_1 + 8) + 0x28);
          uVar9 = uVar3 << (ulong)(uVar16 & 0x1f) |
                  uVar9 & ((uint)(1L << (uVar14 & 0x3f)) ^ 0xffffffff);
          iVar12 = *(int *)(lVar10 + (long)(int)(uVar16 + iVar2) * 0x14 + 0xc);
          if ((iVar12 != -1) && (iVar12 != *param_3)) {
            uVar6 = *(undefined4 *)(lVar10 + (long)(int)(uVar16 + iVar2) * 0x14 + 8);
            if (uVar3 == 0) {
              local_88[0] = uVar6;
              local_80[0] = iVar12;
              FUN_031d9978(param_1,local_80,local_88,param_5);
            }
            else {
              local_78[0] = uVar6;
              local_70[0] = iVar12;
              FUN_031d85f8(param_1,local_70,local_78,param_5);
            }
          }
        }
        if ((ulong)uVar8 - 1 == uVar14) break;
        sVar13 = (short)param_4[2];
        uVar14 = uVar14 + 1;
      }
      local_68[0] = uVar9;
    }
    local_90[0] = *param_3;
    FUN_031db044(param_1,local_68,local_90,param_5 + 2);
    uVar8 = FUN_031dd9a8(param_2,param_3);
    if (*(uint *)(param_2 + 1) == uVar8) {
      lVar10 = *param_2;
      iVar2 = uVar8 + 1;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) <= (int)uVar8) {
        lVar10 = FUN_031dda90(PTR_PTR_0434a080,iVar2);
        uVar8 = *(uint *)(param_2 + 1);
        *param_2 = lVar10;
      }
      piVar1 = (int *)(lVar10 + (long)(int)uVar8 * 8);
      *piVar1 = *param_3;
      piVar1[1] = uVar9;
      *(int *)(param_2 + 1) = iVar2;
    }
    else {
      *(uint *)(*param_2 + ((long)((ulong)uVar8 << 0x20) >> 0x1d) + 4) = uVar9;
    }
  }
  return;
}


