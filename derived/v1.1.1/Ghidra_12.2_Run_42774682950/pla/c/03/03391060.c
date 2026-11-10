/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03391060; name: FUN_03391060
 */


undefined8 FUN_03391060(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  int iVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  int *piVar26;
  uint *puVar27;
  long lVar28;
  int iVar29;
  uint uVar30;
  long lVar31;
  undefined8 *puVar32;
  undefined1 *puVar33;
  undefined1 auVar34 [16];
  long local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined *local_260;
  long *local_258;
  ulong *local_250;
  undefined1 auStack_240 [32];
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined1 local_200;
  undefined8 local_1f8;
  undefined1 local_1f0;
  undefined8 local_1e8;
  long local_1e0;
  long lStack_1d8;
  long local_1d0;
  long lStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined1 *local_190;
  undefined1 *puStack_188;
  undefined8 *local_180;
  undefined8 *puStack_178;
  int *local_170;
  int *piStack_168;
  ulong local_90;
  uint local_84;
  ulong local_80;
  undefined *local_78;
  uint *puStack_70;
  
  if (*(int *)(param_1 + 0x1f8) != 0) {
    if ((DAT_04450a40 == '\0') && (uVar9 = FUN_03327170(), (uVar9 & 1) == 0)) {
      return 0x80040200;
    }
    uVar9 = FUN_03327170();
    if ((uVar9 & 1) == 0) {
      FUN_03326994(&local_1e0,&DAT_044509f0,1);
      lVar10 = FUN_03326338(&local_1e0,"Type Compendium already begun",PTR_DAT_04372528);
      *(char **)(lVar10 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
      ;
      *(undefined8 *)(lVar10 + 0x40) = 0x660;
      FUN_033269dc(&local_1e0);
      return 0x80040200;
    }
    FUN_03326a7c(&local_1e0,&DAT_044509f0,1);
    lVar10 = FUN_03326338(&local_1e0,"Type Compendium already begun",PTR_DAT_04372528);
    *(char **)(lVar10 + 0x38) =
         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
    ;
    *(undefined8 *)(lVar10 + 0x40) = 0x660;
    FUN_03326adc(&local_1e0);
    return 0x80040200;
  }
  if ((*param_3 == 0) && (param_3[2] == 0)) goto LAB_03391c40;
  local_1f8 = 0;
  local_220 = 0;
  uStack_218 = 0;
  local_200 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_210 = 0;
  uStack_208 = 0;
  FUN_033215ac(&local_220,param_3);
  FUN_03385da4(auStack_240);
  lVar10 = FUN_03386374(auStack_240,&local_220);
  if (lVar10 == 0) {
    if ((DAT_04450a40 != '\0') || (uVar9 = FUN_03327170(), (uVar9 & 1) != 0)) {
      uVar9 = FUN_03327170();
      if ((uVar9 & 1) == 0) {
        FUN_03326994(&local_1e0,&DAT_044509f0,1);
        lVar10 = FUN_03326338(&local_1e0,"Cannot reuse the existing type compendium",
                              PTR_DAT_04372528);
        *(char **)(lVar10 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
        ;
        *(undefined8 *)(lVar10 + 0x40) = 0x66b;
        FUN_033269dc(&local_1e0);
      }
      else {
        FUN_03326a7c(&local_1e0,&DAT_044509f0,1);
        lVar10 = FUN_03326338(&local_1e0,"Cannot reuse the existing type compendium",
                              PTR_DAT_04372528);
        *(char **)(lVar10 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
        ;
        *(undefined8 *)(lVar10 + 0x40) = 0x66b;
        FUN_03326adc(&local_1e0);
      }
    }
    FUN_03385e44(auStack_240);
    FUN_03321570(&local_220);
    return 0x80040200;
  }
  FUN_03386668(&local_1e0,auStack_240);
  lVar28 = param_1 + 0x308;
  FUN_03391f08(param_1 + 0x48,local_1c0,uStack_1b8,lVar28);
  FUN_03391f08(param_1 + 0x80,local_1b0,uStack_1a8,lVar28);
  FUN_03391f08(param_1 + 0xb8,local_1a0,uStack_198,lVar28);
  puVar4 = PTR_PTR_0434a080;
  plVar1 = (long *)(param_1 + 0xf0);
  if (&local_1d0 != plVar1) {
    uVar30 = (int)(lStack_1c8 - local_1d0 >> 3) * -0x55555555;
    uVar7 = *(uint *)(param_1 + 0xfc) & 0x3fffffff;
    if ((int)uVar7 < (int)uVar30) {
      lVar28 = *(long *)(param_1 + 0xf0);
      uVar16 = *(uint *)(param_1 + 0xf8);
      uVar9 = (ulong)uVar16;
      local_90 = CONCAT44(local_90._4_4_,0x18);
      local_80 = ((long)(int)uVar30 + (long)(int)uVar30 * 2) * 8;
      local_278 = CONCAT44(local_278._4_4_,uVar30);
      if ((int)uVar30 < 0) {
        local_268 = 2;
        local_260 = &DAT_0411b3a0;
        local_258 = &local_278;
        local_250 = &local_90;
        FUN_03320b50(0x1bd2a77e,
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                     ,0x53,"Array size overflow {}*{}",&local_268);
        uVar14 = (uint)local_278;
        if ((int)uVar7 <= (int)(uint)local_278) goto LAB_03391228;
LAB_03391234:
        local_268 = 1;
        local_258 = &local_278;
        local_260 = &DAT_0411b3b8;
        FUN_03320b50(0x65816502,
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                     ,0x5a,"Invalid requestedCapacity {}",&local_268);
      }
      else {
        uVar14 = uVar30;
        if ((int)uVar30 < (int)uVar7) goto LAB_03391234;
LAB_03391228:
        if (0x3fffffff < (int)uVar14) goto LAB_03391234;
      }
      uVar7 = *(uint *)(param_1 + 0xfc);
      lVar11 = (**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_80,&local_80);
      if (0 < (int)uVar16) {
        lVar23 = 0;
        uVar24 = uVar9;
        do {
          puVar18 = (undefined8 *)(lVar28 + lVar23);
          puVar20 = (undefined8 *)(lVar11 + lVar23);
          *puVar20 = *puVar18;
          puVar20[1] = 0;
          puVar20[2] = 0x8000000000000000;
          if (*(int *)((long)puVar18 + 0x14) < 0) {
            FUN_0338cbf4(puVar4,puVar18 + 1);
          }
          puVar20[1] = puVar18[1];
          *(undefined4 *)(puVar20 + 2) = *(undefined4 *)(puVar18 + 2);
          uVar24 = uVar24 - 1;
          lVar23 = lVar23 + 0x18;
          *(undefined4 *)((long)puVar20 + 0x14) = *(undefined4 *)((long)puVar18 + 0x14);
          puVar18[1] = 0;
          puVar18[2] = 0;
        } while (uVar24 != 0);
        puVar27 = (uint *)(lVar28 + 0x14);
        do {
          puVar27[-1] = 0;
          if ((-1 < (int)*puVar27) && (*(long *)(puVar27 + -3) != 0)) {
            (**(code **)(*(long *)puVar4 + 0x18))
                      (puVar4,*(long *)(puVar27 + -3),((ulong)*puVar27 & 0x3fffffff) << 4);
          }
          puVar27[-3] = 0;
          puVar27[-2] = 0;
          uVar9 = uVar9 - 1;
          *puVar27 = 0x80000000;
          puVar27 = puVar27 + 6;
        } while (uVar9 != 0);
      }
      if (-1 < (int)uVar7) {
        (**(code **)(*(long *)puVar4 + 0x18))(puVar4,lVar28,((ulong)uVar7 & 0x3fffffff) * 0x18);
      }
      if (local_80 < 0x5ffffffe8) {
        uVar8 = (undefined4)(local_80 / 0x18);
      }
      else {
        uVar8 = 0x3fffffff;
      }
      *(undefined4 *)(param_1 + 0xfc) = uVar8;
      *(long *)(param_1 + 0xf0) = lVar11;
    }
    uVar7 = *(uint *)(param_1 + 0xf8);
    if ((int)uVar30 < (int)uVar7) {
      lVar28 = *plVar1;
      lVar11 = (long)(int)uVar7;
      lVar23 = lVar28 + lVar11 * 0x18;
      *(undefined4 *)(lVar23 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar23 + -4)) && (*(long *)(lVar23 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar4 + 0x18))
                  (puVar4,*(long *)(lVar23 + -0x10),
                   ((ulong)*(uint *)(lVar23 + -4) & 0x3fffffff) << 4);
      }
      *(undefined8 *)(lVar23 + -0x10) = 0;
      *(undefined4 *)(lVar23 + -4) = 0x80000000;
      if (lVar23 + -0x18 != lVar28 + (long)(int)uVar30 * 0x18) {
        plVar25 = (long *)(lVar11 * 0x18 + lVar28 + -0x28);
        lVar28 = (long)(int)uVar30 * 0x18 + lVar11 * -0x18 + 0x18;
        do {
          *(undefined4 *)(plVar25 + 1) = 0;
          if ((-1 < (int)*(uint *)((long)plVar25 + 0xc)) && (*plVar25 != 0)) {
            (**(code **)(*(long *)puVar4 + 0x18))
                      (puVar4,*plVar25,((ulong)*(uint *)((long)plVar25 + 0xc) & 0x3fffffff) << 4);
          }
          *plVar25 = 0;
          lVar28 = lVar28 + 0x18;
          *(undefined4 *)((long)plVar25 + 0xc) = 0x80000000;
          plVar25 = plVar25 + -3;
        } while (lVar28 != 0);
      }
      uVar7 = *(uint *)(param_1 + 0xf8);
    }
    lVar28 = *plVar1;
    if ((int)uVar30 <= (int)uVar7) {
      uVar7 = uVar30;
    }
    if ((lVar28 != local_1d0) && (0 < (int)uVar7)) {
      uVar9 = 0;
      do {
        puVar18 = (undefined8 *)(local_1d0 + uVar9 * 0x18);
        puVar20 = (undefined8 *)(lVar28 + uVar9 * 0x18);
        puVar27 = (uint *)((long)puVar20 + 0x14);
        *puVar20 = *puVar18;
        plVar25 = puVar20 + 1;
        lVar31 = *plVar25;
        uVar16 = *puVar27;
        uVar14 = *(uint *)(puVar18 + 2);
        lVar23 = puVar18[1];
        lVar11 = lVar31;
        if ((int)(uVar16 & 0x3fffffff) < (int)uVar14) {
          uVar3 = *(uint *)(lVar28 + uVar9 * 0x18 + 0x10);
          uVar24 = (ulong)uVar3;
          local_80 = (long)(int)uVar14 << 4;
          local_278 = CONCAT44(local_278._4_4_,uVar14);
          local_90 = CONCAT44(local_90._4_4_,0x10);
          uVar15 = uVar14;
          if ((int)uVar14 < 0) {
            local_260 = &DAT_0411b3a0;
            local_268 = 2;
            local_250 = &local_90;
            local_258 = &local_278;
            FUN_03320b50(0x1bd2a77e,
                         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                         ,0x53,"Array size overflow {}*{}",&local_268);
            uVar15 = (uint)local_278;
          }
          if ((int)uVar15 < (int)(uVar16 & 0x3fffffff) || 0x3fffffff < (int)uVar15) {
            local_268 = 1;
            local_258 = &local_278;
            local_260 = &DAT_0411b3b8;
            FUN_03320b50(0x65816502,
                         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                         ,0x5a,"Invalid requestedCapacity {}",&local_268);
          }
          uVar16 = *puVar27;
          lVar11 = (**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_80,&local_80);
          if (0 < (int)uVar3) {
            uVar17 = uVar24 & 3;
            if (uVar24 - 1 < 3) {
              lVar21 = 0;
            }
            else {
              lVar21 = 0;
              puVar18 = (undefined8 *)(lVar11 + 0x20);
              puVar20 = (undefined8 *)(lVar31 + 0x20);
              do {
                uVar2 = puVar20[-3];
                lVar21 = lVar21 + 4;
                puVar18[-4] = puVar20[-4];
                puVar18[-3] = uVar2;
                uVar2 = puVar20[-1];
                puVar18[-2] = puVar20[-2];
                puVar18[-1] = uVar2;
                uVar2 = puVar20[1];
                *puVar18 = *puVar20;
                puVar18[1] = uVar2;
                puVar32 = puVar20 + 2;
                uVar2 = puVar20[3];
                puVar20 = puVar20 + 8;
                puVar18[2] = *puVar32;
                puVar18[3] = uVar2;
                puVar18 = puVar18 + 8;
              } while (uVar24 - uVar17 != lVar21);
            }
            if ((uVar3 & 3) != 0) {
              puVar18 = (undefined8 *)(lVar31 + lVar21 * 0x10);
              puVar20 = (undefined8 *)(lVar11 + lVar21 * 0x10);
              do {
                uVar2 = puVar18[1];
                uVar17 = uVar17 - 1;
                *puVar20 = *puVar18;
                puVar20[1] = uVar2;
                puVar18 = puVar18 + 2;
                puVar20 = puVar20 + 2;
              } while (uVar17 != 0);
            }
          }
          if (-1 < (int)uVar16) {
            (**(code **)(*(long *)puVar4 + 0x18))(puVar4,lVar31,((ulong)uVar16 & 0x3fffffff) << 4);
          }
          if (local_80 < 0x3fffffff0) {
            uVar16 = (uint)(local_80 >> 4);
          }
          else {
            uVar16 = 0x3fffffff;
          }
          *puVar27 = uVar16;
          *plVar25 = lVar11;
        }
        puVar27 = (uint *)(lVar28 + uVar9 * 0x18 + 0x10);
        uVar16 = *puVar27;
        if ((int)uVar14 <= (int)uVar16) {
          uVar16 = uVar14;
        }
        if (lVar11 != lVar23 && 0 < (int)uVar16) {
          uVar17 = (ulong)uVar16;
          uVar24 = uVar17 & 3;
          if (uVar17 - 1 < 3) {
            lVar31 = 0;
          }
          else {
            lVar31 = 0;
            puVar18 = (undefined8 *)(lVar23 + 0x20);
            puVar20 = (undefined8 *)(lVar11 + 0x20);
            do {
              uVar2 = puVar18[-3];
              lVar31 = lVar31 + 4;
              puVar20[-4] = puVar18[-4];
              puVar20[-3] = uVar2;
              uVar2 = puVar18[-1];
              puVar20[-2] = puVar18[-2];
              puVar20[-1] = uVar2;
              uVar2 = puVar18[1];
              *puVar20 = *puVar18;
              puVar20[1] = uVar2;
              puVar32 = puVar18 + 2;
              uVar2 = puVar18[3];
              puVar18 = puVar18 + 8;
              puVar20[2] = *puVar32;
              puVar20[3] = uVar2;
              puVar20 = puVar20 + 8;
            } while (uVar17 - uVar24 != lVar31);
          }
          if ((uVar16 & 3) != 0) {
            puVar18 = (undefined8 *)(lVar11 + lVar31 * 0x10);
            puVar20 = (undefined8 *)(lVar23 + lVar31 * 0x10);
            do {
              uVar2 = puVar20[1];
              uVar24 = uVar24 - 1;
              *puVar18 = *puVar20;
              puVar18[1] = uVar2;
              puVar18 = puVar18 + 2;
              puVar20 = puVar20 + 2;
            } while (uVar24 != 0);
          }
          lVar11 = *plVar25;
        }
        iVar22 = uVar14 - uVar16;
        if (0 < iVar22) {
          puVar18 = (undefined8 *)(lVar23 + (long)(int)uVar16 * 0x10);
          puVar20 = (undefined8 *)(lVar11 + (long)(int)uVar16 * 0x10);
          do {
            uVar2 = puVar18[1];
            *puVar20 = *puVar18;
            puVar20[1] = uVar2;
            iVar22 = iVar22 + -1;
            puVar18 = puVar18 + 2;
            puVar20 = puVar20 + 2;
          } while (iVar22 != 0);
        }
        uVar9 = uVar9 + 1;
        *puVar27 = uVar14;
      } while (uVar9 != uVar7);
    }
    if (0 < (int)(uVar30 - uVar7)) {
      iVar22 = 0;
      puVar18 = (undefined8 *)(local_1d0 + (long)(int)uVar7 * 0x18);
      puVar20 = (undefined8 *)(*plVar1 + (long)(int)uVar7 * 0x18);
      do {
        *puVar20 = *puVar18;
        puVar20[1] = 0;
        puVar20[2] = 0x8000000000000000;
        iVar29 = *(int *)(puVar18 + 2);
        puVar32 = (undefined8 *)puVar18[1];
        puVar18 = puVar18 + 3;
        local_268 = CONCAT44(local_268._4_4_,iVar29);
        if (iVar29 < 1) {
          puVar20[1] = 0;
          puVar20[2] = 0x8000000000000000;
        }
        else {
          puVar12 = (undefined8 *)FUN_032cf190(puVar4,0x10,&local_268);
          puVar20[1] = puVar12;
          *(int *)(puVar20 + 2) = iVar29;
          *(undefined4 *)((long)puVar20 + 0x14) = (undefined4)local_268;
          do {
            uVar2 = puVar32[1];
            *puVar12 = *puVar32;
            puVar12[1] = uVar2;
            iVar29 = iVar29 + -1;
            puVar12 = puVar12 + 2;
            puVar32 = puVar32 + 2;
          } while (iVar29 != 0);
        }
        iVar22 = iVar22 + 1;
        puVar20 = puVar20 + 3;
      } while (iVar22 != uVar30 - uVar7);
    }
    *(uint *)(param_1 + 0xf8) = uVar30;
  }
  FUN_032e80d0(&local_268,0xffffffffffffffff);
  puVar4 = PTR_PTR_0434a090;
  local_278 = 0;
  local_270._0_4_ = 0;
  local_270._4_4_ = 0x80000000;
  uVar7 = (uint)((ulong)(lStack_1d8 - local_1e0) >> 3);
  if ((int)uVar7 < 1) {
LAB_033918c0:
    local_278 = FUN_03397bbc(puVar4,1,local_278,0,(long)&local_270 + 4);
    lVar28 = (long)(int)(uint)local_270;
  }
  else {
    local_90 = (((lStack_1d8 - local_1e0) * 0x20000000 >> 0x20) + (long)(int)uVar7 * 2) * 8;
    local_84 = uVar7;
    if (uVar7 >> 0x1e != 0) {
      local_80 = 1;
      puStack_70 = &local_84;
      local_78 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_80);
    }
    local_278 = (**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_90,&local_90);
    if (local_90 < 0x5ffffffe8) {
      local_270._4_4_ = (uint)(local_90 / 0x18);
      if ((local_90 / 0x18 & 0x3fffffff) == 0) goto LAB_033918c0;
      lVar28 = 0;
    }
    else {
      lVar28 = 0;
      local_270._4_4_ = 0x3fffffff;
    }
  }
  puVar18 = (undefined8 *)(local_278 + lVar28 * 0x18);
  *(undefined8 *)((long)puVar18 + 0xd) = 0;
  *puVar18 = 0;
  puVar18[1] = 0;
  lVar28 = 1;
  local_270._0_4_ = 1;
  lVar11 = local_278;
  if (1 < (ulong)(lStack_1d8 - local_1e0 >> 3)) {
    lVar23 = 0;
    lVar31 = 0;
    do {
      lVar28 = lVar31;
      uVar9 = lVar28 + 1;
      if (uVar9 < (ulong)(long)*(int *)(lVar10 + 0x10)) {
        bVar6 = *(long *)(*(long *)(lVar10 + 8) + lVar28 * 8 + 8) != 0;
      }
      else {
        bVar6 = false;
      }
      if ((local_270._4_4_ & 0x3fffffff) <= (uint)uVar9) {
        lVar11 = FUN_03397bbc(puVar4,lVar28 + 2U & 0xffffffff,lVar11,uVar9,(long)&local_270 + 4);
        uVar9 = (ulong)(uint)local_270;
        local_278 = lVar11;
      }
      puVar18 = (undefined8 *)(lVar11 + (long)(int)uVar9 * 0x18);
      *(undefined8 *)((long)puVar18 + 0xd) = 0;
      *puVar18 = 0;
      puVar18[1] = 0;
      local_270._0_4_ = (uint)(lVar28 + 2U);
      pbVar13 = *(byte **)(local_1e0 + lVar28 * 8 + 8);
      if ((*pbVar13 >> 3 & 1) != 0) {
        if (*(long *)(param_1 + 0x218) != 0) {
          pbVar13 = (byte *)FUN_033763f4(*(long *)(param_1 + 0x218),pbVar13,0);
        }
        auVar34 = FUN_032e2464(pbVar13);
        *(undefined1 (*) [16])(lVar11 + lVar23 + 0x18) = auVar34;
      }
      if (bVar6) {
        uVar8 = FUN_032e8598(&local_268,*(undefined8 *)(*(long *)(lVar10 + 8) + lVar28 * 8 + 8));
        lVar31 = lVar11 + lVar23;
        if (*(char *)(lVar31 + 0x2c) == '\0') {
          *(undefined4 *)(lVar31 + 0x28) = uVar8;
          *(undefined1 *)(lVar31 + 0x2c) = 1;
        }
        else {
          *(undefined4 *)(lVar31 + 0x28) = uVar8;
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar10 + 8) + lVar28 * 8 + 8) + 3) & 1) != 0) {
          *(undefined1 *)(param_1 + 0x1c0) = 1;
        }
        uVar7 = FUN_032e35d8();
        *(uint *)(*(long *)(param_1 + 0xf0) + lVar23 + 0x1c) = uVar7 & 0x1f;
      }
      lVar23 = lVar23 + 0x18;
      lVar31 = lVar28 + 1;
    } while (lVar28 + 2U < (ulong)(lStack_1d8 - local_1e0 >> 3));
    lVar28 = lVar28 + 2;
  }
  FUN_03377e40(param_1 + 0x200);
  FUN_03377b54(param_1 + 0x200,lVar11,lVar11 + lVar28 * 0x18);
  if (local_170 != piStack_168) {
    piVar26 = local_170;
    do {
      iVar22 = *piVar26;
      local_80 = CONCAT44(local_80._4_4_,iVar22);
      FUN_03397d70(param_1 + 0x2e8,&local_80);
      uVar8 = FUN_032e8598(&local_268,*(undefined8 *)(*(long *)(lVar10 + 8) + (long)iVar22 * 8));
      FUN_0339202c(param_1 + 0x18,iVar22,uVar8);
      if (*(int *)(param_1 + 0x210) < iVar22) {
        *(int *)(param_1 + 0x210) = iVar22;
      }
      piVar26 = piVar26 + 2;
    } while (piStack_168 != piVar26);
  }
  puVar5 = PTR_PTR_0434a080;
  puVar27 = (uint *)(param_1 + 0x3c);
  uVar30 = *puVar27;
  iVar22 = *(int *)(param_1 + 0x38);
  lVar10 = *(long *)(param_1 + 0x30);
  uVar7 = iVar22 + ((int)puStack_188 - (int)local_190);
  if ((int)(uVar30 & 0x3fffffff) < (int)uVar7) {
    if (0x3fffffff < (int)uVar7) {
      FUN_032bd0a8(uVar7);
      uVar30 = *puVar27;
    }
    uVar30 = (uVar30 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar30) {
      uVar30 = 0x3fffffff;
    }
    uVar16 = uVar7;
    if ((int)uVar7 <= (int)uVar30) {
      uVar16 = uVar30;
    }
    lVar10 = FUN_032bd1d4(puVar5,uVar16,1,lVar10,iVar22,puVar27);
    *(long *)(param_1 + 0x30) = lVar10;
  }
  if (local_190 != puStack_188) {
    puVar19 = (undefined1 *)(lVar10 + iVar22);
    do {
      puVar33 = local_190 + 1;
      *puVar19 = *local_190;
      puVar19 = puVar19 + 1;
      local_190 = puVar33;
    } while (puStack_188 != puVar33);
  }
  *(uint *)(param_1 + 0x38) = uVar7;
  iVar29 = *(int *)(param_1 + 0x1f0);
  iVar22 = iVar29 + (int)((ulong)((long)puStack_178 - (long)local_180) >> 3);
  lVar10 = *(long *)(param_1 + 0x1e8);
  if ((int)(*(uint *)(param_1 + 500) & 0x3fffffff) < iVar22) {
    lVar10 = FUN_03153020(puVar5,iVar22,lVar10,iVar29,param_1 + 500);
    *(long *)(param_1 + 0x1e8) = lVar10;
  }
  uVar7 = local_270._4_4_;
  if (local_180 != puStack_178) {
    uVar9 = ((long)puStack_178 - (long)local_180) - 8;
    puVar18 = (undefined8 *)(lVar10 + (long)iVar29 * 8);
    uVar30 = ((uint)(uVar9 >> 3) & 0x1fffffff) + 1;
    if ((uVar30 & 3) != 0) {
      lVar10 = -((ulong)uVar30 & 3);
      puVar20 = puVar18;
      puVar32 = local_180;
      do {
        local_180 = puVar32 + 1;
        bVar6 = lVar10 != -1;
        lVar10 = lVar10 + 1;
        puVar18 = puVar20 + 1;
        *puVar20 = *puVar32;
        puVar20 = puVar18;
        puVar32 = local_180;
      } while (bVar6);
    }
    if (0x17 < uVar9) {
      do {
        *puVar18 = *local_180;
        puVar18[1] = local_180[1];
        puVar18[2] = local_180[2];
        puVar20 = local_180 + 3;
        local_180 = local_180 + 4;
        puVar18[3] = *puVar20;
        puVar18 = puVar18 + 4;
      } while (local_180 != puStack_178);
    }
  }
  *(int *)(param_1 + 0x1f0) = iVar22;
  uVar9 = (ulong)local_270._4_4_;
  local_270 = (ulong)local_270._4_4_ << 0x20;
  if ((-1 < (int)uVar7) && (local_278 != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))(puVar4,local_278,(uVar9 & 0x3fffffff) * 0x18);
  }
  FUN_032e8100(&local_268);
  FUN_03385e44(auStack_240);
  FUN_03321570(&local_220);
LAB_03391c40:
  lVar10 = *param_2;
  if (lVar10 != 0) {
    FUN_032d645c(lVar10);
  }
  lVar28 = param_2[1];
  lVar11 = param_2[2];
  lVar31 = param_2[3];
  lVar23 = *(long *)(param_1 + 0x1c8);
  *(long *)(param_1 + 0x1c8) = lVar10;
  if (lVar23 != 0) {
    FUN_032d647c();
  }
  *(long *)(param_1 + 0x1d0) = lVar28;
  *(long *)(param_1 + 0x1d8) = lVar11;
  *(long *)(param_1 + 0x1e0) = lVar31;
  *(undefined4 *)(param_1 + 0x1f8) = 1;
  return 0;
}


