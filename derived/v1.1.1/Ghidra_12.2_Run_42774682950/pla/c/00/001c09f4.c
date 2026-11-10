/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001c09f4; name: FUN_001c09f4
 */


void FUN_001c09f4(long param_1,int param_2,long param_3,undefined4 param_4,ulong param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  float *pfVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  uint *puVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined4 *local_80;
  undefined8 local_78;
  long local_70;
  long *plStack_68;
  
  lVar10 = *(long *)(param_1 + 0x18);
  if (*(int *)(lVar10 + 0x1f0) == 2) {
    iVar11 = 1;
    if ((param_5 & 1) != 0) {
      iVar11 = 2;
    }
    iVar4 = *(int *)(param_3 + 0x20);
    local_80 = (undefined4 *)0x0;
    local_78._0_4_ = 0;
    local_78._4_4_ = 0x80000000;
    uVar1 = iVar4 + *(int *)(lVar10 + 0x60);
    uVar13 = *(undefined8 *)PTR_PTR_04372408;
    puVar16 = (uint *)(param_3 + 0x24);
    uVar9 = *puVar16;
    if ((int)(uVar9 & 0x3fffffff) < (int)uVar1) {
      uVar17 = *(undefined8 *)(param_3 + 0x18);
      if (0x3fffffff < (int)uVar1) {
        FUN_032bd0a8(uVar1);
        uVar9 = *puVar16;
      }
      uVar9 = (uVar9 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar9) {
        uVar9 = 0x3fffffff;
      }
      uVar3 = uVar1;
      if ((int)uVar1 <= (int)uVar9) {
        uVar3 = uVar9;
      }
      lVar10 = FUN_032bd1d4(uVar13,uVar3,0x10,uVar17,iVar4,puVar16);
      *(long *)(param_3 + 0x18) = lVar10;
    }
    else {
      lVar10 = *(long *)(param_3 + 0x18);
    }
    puVar16 = (uint *)(param_3 + 0x34);
    uVar9 = *puVar16;
    *(uint *)(param_3 + 0x20) = uVar1;
    iVar5 = *(int *)(param_3 + 0x30);
    uVar1 = iVar5 + (*(int *)(*(long *)(param_1 + 0x18) + 0x60) + -2) * iVar11;
    if ((int)(uVar9 & 0x3fffffff) < (int)uVar1) {
      uVar17 = *(undefined8 *)(param_3 + 0x28);
      if (0x3fffffff < (int)uVar1) {
        FUN_032bd0a8(uVar1);
        uVar9 = *puVar16;
      }
      uVar9 = (uVar9 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar9) {
        uVar9 = 0x3fffffff;
      }
      uVar3 = uVar1;
      if ((int)uVar1 <= (int)uVar9) {
        uVar3 = uVar9;
      }
      lVar15 = FUN_032bd1d4(uVar13,uVar3,0x10,uVar17,iVar5,puVar16);
      *(long *)(param_3 + 0x28) = lVar15;
    }
    else {
      lVar15 = *(long *)(param_3 + 0x28);
    }
    *(uint *)(param_3 + 0x30) = uVar1;
    iVar11 = *(int *)(*(long *)(param_1 + 0x18) + 0x60);
    if (iVar11 < 1) {
      puVar8 = (undefined4 *)0x0;
      local_78._0_4_ = 0;
      plVar14 = *(long **)(*(long *)(param_1 + 0x18) + 0x58);
      uVar1 = local_78._4_4_;
    }
    else {
      if (0x3fffffff < iVar11) {
        FUN_032bd0a8(iVar11);
      }
      puVar8 = (undefined4 *)FUN_032bd1d4(uVar13,iVar11,4,0,0,(long)&local_78 + 4);
      plVar14 = *(long **)(*(long *)(param_1 + 0x18) + 0x58);
      local_80 = puVar8;
      uVar1 = local_78._4_4_;
    }
    if (plVar14 != (long *)0x0) {
      pfVar12 = (float *)(lVar10 + (long)iVar4 * 0x10);
      iVar11 = (int)local_78;
      if (param_2 == 0) {
        puVar8[(int)local_78] = (int)local_78 + iVar4;
        local_78._0_4_ = (int)local_78 + 1;
        auVar18 = *(undefined1 (*) [16])(plVar14 + 2);
        *(long *)(pfVar12 + 2) = auVar18._8_8_;
        *(long *)pfVar12 = auVar18._0_8_;
        plVar14 = (long *)*plVar14;
        if (plVar14 != (long *)0x0) {
          iVar11 = (int)local_78;
          do {
            local_78._0_4_ = iVar11 + 1;
            local_80[iVar11] = iVar11 + iVar4;
            auVar18 = *(undefined1 (*) [16])(plVar14 + 2);
            *(long *)(pfVar12 + 6) = auVar18._8_8_;
            *(long *)(pfVar12 + 4) = auVar18._0_8_;
            plVar14 = (long *)*plVar14;
            iVar11 = (int)local_78;
            pfVar12 = pfVar12 + 4;
          } while (plVar14 != (long *)0x0);
        }
      }
      else {
        while( true ) {
          local_78._0_4_ = iVar11 + 1;
          puVar8[iVar11] = iVar11 + iVar4;
          auVar18 = NEON_scvtf(*(undefined1 (*) [16])(plVar14 + 4),4);
          lVar10 = *(long *)(param_1 + 0x18);
          uVar21 = *(undefined8 *)(lVar10 + 0x158);
          uVar17 = *(undefined8 *)(lVar10 + 0x150);
          uVar22 = *(undefined8 *)(lVar10 + 0x138);
          uVar20 = *(undefined8 *)(lVar10 + 0x130);
          pfVar12[2] = (float)uVar22 + (float)uVar21 * auVar18._8_4_;
          pfVar12[3] = (float)((ulong)uVar22 >> 0x20) + (float)((ulong)uVar21 >> 0x20) * 0.0;
          *pfVar12 = (float)uVar20 + (float)uVar17 * auVar18._0_4_;
          pfVar12[1] = (float)((ulong)uVar20 >> 0x20) +
                       (float)((ulong)uVar17 >> 0x20) * auVar18._4_4_;
          plVar14 = (long *)*plVar14;
          if (plVar14 == (long *)0x0) break;
          pfVar12 = pfVar12 + 4;
          puVar8 = local_80;
          iVar11 = (int)local_78;
        }
      }
    }
    uVar9 = (int)local_78 - 1;
    if (1 < (int)uVar9) {
      puVar8 = (undefined4 *)(lVar15 + (long)iVar5 * 0x10);
      if ((param_5 & 1) == 0) {
        lVar10 = (ulong)uVar9 - 1;
        lVar15 = 0;
        do {
          puVar2 = puVar8 + lVar15;
          *puVar2 = *local_80;
          puVar2[1] = *(undefined4 *)((long)local_80 + lVar15 + 4);
          lVar10 = lVar10 + -1;
          puVar2[2] = *(undefined4 *)((long)local_80 + lVar15 + 8);
          puVar2[3] = param_4;
          lVar15 = lVar15 + 4;
        } while (lVar10 != 0);
      }
      else {
        lVar10 = 0;
        do {
          *puVar8 = *local_80;
          lVar15 = lVar10 + 1;
          puVar8[1] = local_80[lVar10 + 1];
          puVar8[2] = local_80[lVar10 + 2];
          puVar8[3] = param_4;
          puVar8[4] = *local_80;
          puVar8[5] = local_80[lVar10 + 2];
          puVar8[6] = local_80[lVar10 + 1];
          puVar8[7] = param_4;
          puVar8 = puVar8 + 8;
          lVar10 = lVar15;
        } while ((ulong)uVar9 - 1 != lVar15);
      }
    }
    local_78 = (ulong)uVar1 << 0x20;
    if ((-1 < (int)uVar1) && (local_80 != (undefined4 *)0x0)) {
      FUN_032cf244(uVar13,local_80,4,uVar1 & 0x3fffffff);
    }
  }
  else if (*(int *)(lVar10 + 0x1f0) == 3) {
    iVar11 = *(int *)(param_3 + 0x20);
    lVar15 = (long)iVar11;
    local_80 = (undefined4 *)0x0;
    local_78 = 0xffffffff00000000;
    uVar1 = iVar11 + *(int *)(lVar10 + 0x60);
    uVar13 = *(undefined8 *)PTR_PTR_04372408;
    puVar16 = (uint *)(param_3 + 0x24);
    uVar9 = *puVar16;
    if ((int)(uVar9 & 0x3fffffff) < (int)uVar1) {
      uVar17 = *(undefined8 *)(param_3 + 0x18);
      if (0x3fffffff < (int)uVar1) {
        FUN_032bd0a8(uVar1);
        uVar9 = *puVar16;
      }
      uVar9 = (uVar9 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar9) {
        uVar9 = 0x3fffffff;
      }
      uVar3 = uVar1;
      if ((int)uVar1 <= (int)uVar9) {
        uVar3 = uVar9;
      }
      lVar10 = FUN_032bd1d4(uVar13,uVar3,0x10,uVar17,iVar11,puVar16);
      *(long *)(param_3 + 0x18) = lVar10;
    }
    else {
      lVar10 = *(long *)(param_3 + 0x18);
    }
    puVar16 = (uint *)(param_3 + 0x34);
    uVar9 = *puVar16;
    *(uint *)(param_3 + 0x20) = uVar1;
    iVar11 = *(int *)(param_3 + 0x30);
    uVar1 = iVar11 + *(int *)(*(long *)(param_1 + 0x18) + 0x78);
    if ((int)(uVar9 & 0x3fffffff) < (int)uVar1) {
      uVar17 = *(undefined8 *)(param_3 + 0x28);
      if (0x3fffffff < (int)uVar1) {
        FUN_032bd0a8(uVar1);
        uVar9 = *puVar16;
      }
      uVar9 = (uVar9 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar9) {
        uVar9 = 0x3fffffff;
      }
      uVar3 = uVar1;
      if ((int)uVar1 <= (int)uVar9) {
        uVar3 = uVar9;
      }
      lVar6 = FUN_032bd1d4(uVar13,uVar3,0x10,uVar17,iVar11,puVar16);
      *(long *)(param_3 + 0x28) = lVar6;
    }
    else {
      lVar6 = *(long *)(param_3 + 0x28);
    }
    *(uint *)(param_3 + 0x30) = uVar1;
    FUN_032c3100(&local_80,uVar13,*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x60));
    plVar14 = *(long **)(*(long *)(param_1 + 0x18) + 0x58);
    if (plVar14 != (long *)0x0) {
      puVar7 = (undefined8 *)(lVar10 + lVar15 * 0x10);
      if (param_2 == 0) {
        do {
          local_70 = (local_78 & 0x7fffffff) + lVar15;
          plStack_68 = plVar14;
          FUN_032c2c3c(&local_80,uVar13,&plStack_68,&local_70);
          auVar18 = *(undefined1 (*) [16])(plVar14 + 2);
          puVar7[1] = auVar18._8_8_;
          *puVar7 = auVar18._0_8_;
          plVar14 = (long *)*plVar14;
          puVar7 = puVar7 + 2;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          local_70 = (local_78 & 0x7fffffff) + lVar15;
          plStack_68 = plVar14;
          FUN_032c2c3c(&local_80,uVar13,&plStack_68,&local_70);
          lVar10 = *(long *)(param_1 + 0x18);
          auVar18 = NEON_scvtf(*(undefined1 (*) [16])(plVar14 + 4),4);
          auVar19._0_8_ =
               CONCAT44(*(float *)(lVar10 + 0x134) + *(float *)(lVar10 + 0x154) * auVar18._4_4_,
                        *(float *)(lVar10 + 0x130) + *(float *)(lVar10 + 0x150) * auVar18._0_4_);
          auVar19._8_4_ = *(float *)(lVar10 + 0x138) + *(float *)(lVar10 + 0x158) * auVar18._8_4_;
          auVar19._12_4_ = *(float *)(lVar10 + 0x13c) + *(float *)(lVar10 + 0x15c) * 0.0;
          puVar7[1] = auVar19._8_8_;
          *puVar7 = auVar19._0_8_;
          plVar14 = (long *)*plVar14;
          puVar7 = puVar7 + 2;
        } while (plVar14 != (long *)0x0);
      }
    }
    plVar14 = *(long **)(*(long *)(param_1 + 0x18) + 0x70);
    if (plVar14 != (long *)0x0) {
      puVar8 = (undefined4 *)(lVar6 + (long)iVar11 * 0x10);
      do {
        plStack_68 = (long *)plVar14[2];
        local_70 = -1;
        puVar7 = (undefined8 *)FUN_032c2dcc(&local_80,&plStack_68,&local_70);
        *puVar8 = (int)*puVar7;
        plStack_68 = (long *)plVar14[3];
        local_70 = -1;
        puVar7 = (undefined8 *)FUN_032c2dcc(&local_80,&plStack_68,&local_70);
        puVar8[1] = (int)*puVar7;
        plStack_68 = (long *)plVar14[4];
        local_70 = -1;
        puVar7 = (undefined8 *)FUN_032c2dcc(&local_80,&plStack_68,&local_70);
        puVar8[2] = (int)*puVar7;
        puVar8[3] = param_4;
        plVar14 = (long *)*plVar14;
        puVar8 = puVar8 + 4;
      } while (plVar14 != (long *)0x0);
    }
    FUN_032c3060(&local_80,uVar13);
    FUN_032c2c38(&local_80);
  }
  return;
}


