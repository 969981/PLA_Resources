/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329ef8c; name: FUN_0329ef8c
 */


void FUN_0329ef8c(long *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  undefined4 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  long lVar20;
  undefined8 uVar21;
  int local_6b4;
  undefined4 local_6b0 [85];
  int local_55c;
  long local_558;
  undefined8 local_550;
  undefined4 local_548 [66];
  int local_440;
  uint local_43c;
  undefined2 local_438;
  undefined4 local_434;
  undefined1 auStack_430 [784];
  undefined1 auStack_120 [20];
  char local_10c;
  long local_108;
  long *local_100;
  long local_f8;
  int local_e0;
  uint local_dc;
  int local_d8;
  int local_d4;
  ushort local_d0;
  undefined2 local_ce [19];
  int local_a8;
  undefined4 local_a4;
  long local_a0;
  undefined8 local_98;
  long *local_90;
  undefined4 local_88;
  int local_7c;
  int local_78;
  int local_74 [5];
  
  local_74[0] = (**(code **)(*param_1 + 0x20))();
  local_78 = (**(code **)(*param_1 + 0x40))(param_1);
  if ((3 < DAT_04440288) || (uVar11 = FUN_03327170(), (uVar11 & 1) != 0)) {
    uVar11 = FUN_03327170();
    if ((uVar11 & 1) == 0) {
      FUN_03326994(auStack_430,&DAT_04440238,4);
      lVar12 = FUN_03326338(auStack_430,"---------------------------------------------------",
                            PTR_DAT_04372528);
      *(char **)(lVar12 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/GeometryUtilities/Mesh/Skin/hkSkinnedMeshShape.cpp"
      ;
      *(undefined8 *)(lVar12 + 0x40) = 0x35;
      FUN_033269dc(auStack_430);
    }
    else {
      FUN_03326a7c(auStack_430,&DAT_04440238,4);
      lVar12 = FUN_03326338(auStack_430,"---------------------------------------------------",
                            PTR_DAT_04372528);
      *(char **)(lVar12 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/GeometryUtilities/Mesh/Skin/hkSkinnedMeshShape.cpp"
      ;
      *(undefined8 *)(lVar12 + 0x40) = 0x35;
      FUN_03326adc(auStack_430);
    }
  }
  if ((3 < DAT_04440288) || (uVar11 = FUN_03327170(), (uVar11 & 1) != 0)) {
    uVar11 = FUN_03327170();
    if ((uVar11 & 1) == 0) {
      FUN_03326994(auStack_430,&DAT_04440238,4);
      lVar12 = FUN_03326338(auStack_430,"Num bone sections: {}. Num parts: {}.",&DAT_0411b3a0,
                            local_74,&local_78);
      *(char **)(lVar12 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/GeometryUtilities/Mesh/Skin/hkSkinnedMeshShape.cpp"
      ;
      *(undefined8 *)(lVar12 + 0x40) = 0x36;
      FUN_033269dc(auStack_430);
    }
    else {
      FUN_03326a7c(auStack_430,&DAT_04440238,4);
      lVar12 = FUN_03326338(auStack_430,"Num bone sections: {}. Num parts: {}.",&DAT_0411b3a0,
                            local_74,&local_78);
      *(char **)(lVar12 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/GeometryUtilities/Mesh/Skin/hkSkinnedMeshShape.cpp"
      ;
      *(undefined8 *)(lVar12 + 0x40) = 0x36;
      FUN_03326adc(auStack_430);
    }
  }
  puVar7 = PTR_PTR_0434a090;
  puVar6 = PTR_PTR_0434a080;
  local_7c = 0;
  if (0 < local_74[0]) {
    uVar16 = (ulong)&local_e0 | 4;
    uVar17 = (ulong)&local_e0 | 8;
    uVar11 = (ulong)&local_e0 | 0xc;
    do {
      local_90 = (long *)0x0;
      local_88 = 0xffff;
      (**(code **)(*param_1 + 0x28))(param_1,local_7c,&local_90);
      plVar9 = local_90;
      local_a0 = 0;
      local_98 = 0x8000000000000000;
      local_a4 = (**(code **)(*local_90 + 0x20))(local_90);
      if ((3 < DAT_04440288) || (uVar13 = FUN_03327170(), (uVar13 & 1) != 0)) {
        uVar13 = FUN_03327170();
        if ((uVar13 & 1) == 0) {
          FUN_03326994(auStack_430,&DAT_04440238,4);
          local_6b0[0] = CONCAT22(local_6b0[0]._2_2_,(undefined2)local_88);
          lVar12 = FUN_03326338(auStack_430,
                                "Bone section {}. Start boneSet {}, numBoneSets {}. Num sections {}"
                                ,&DAT_04345fd0,&local_7c,local_6b0,(long)&local_88 + 2,&local_a4);
          *(char **)(lVar12 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/GeometryUtilities/Mesh/Skin/hkSkinnedMeshShape.cpp"
          ;
          *(undefined8 *)(lVar12 + 0x40) = 0x40;
          FUN_033269dc(auStack_430);
        }
        else {
          FUN_03326a7c(auStack_430,&DAT_04440238,4);
          local_548[0] = CONCAT22(local_548[0]._2_2_,(undefined2)local_88);
          lVar12 = FUN_03326338(auStack_430,
                                "Bone section {}. Start boneSet {}, numBoneSets {}. Num sections {}"
                                ,&DAT_04345fd0,&local_7c,local_548,(long)&local_88 + 2,&local_a4);
          *(char **)(lVar12 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/GeometryUtilities/Mesh/Skin/hkSkinnedMeshShape.cpp"
          ;
          *(undefined8 *)(lVar12 + 0x40) = 0x40;
          FUN_03326adc(auStack_430);
        }
      }
      local_a8 = 0;
      if (0 < local_78) {
        do {
          (**(code **)(*param_1 + 0x48))(param_1,local_a8,&local_e0);
          if (((local_88 & 0xffff) <= (uint)local_d0) &&
             ((int)(uint)local_d0 < (int)((int)local_88._2_2_ + (local_88 & 0xffff)))) {
            local_100 = (long *)0x0;
            local_f8 = 0;
            (**(code **)(*plVar9 + 0x28))(plVar9,local_ce[0],3,auStack_120);
            if ((3 < DAT_04440288) || (uVar13 = FUN_03327170(), (uVar13 & 1) != 0)) {
              uVar13 = FUN_03327170();
              if ((uVar13 & 1) == 0) {
                FUN_03326994(auStack_430,&DAT_04440238,4);
                local_6b0[0] = CONCAT22(local_6b0[0]._2_2_,local_d0);
                lVar12 = FUN_03326338(auStack_430,
                                      "Part {}. BoneSet {}. Sub-mesh {}. Start vertex {}. NumVerts {}. Start Index {}. NumIndices {}."
                                      ,&DAT_04345ff8,&local_a8,local_6b0,local_ce,&local_e0,uVar16,
                                      uVar17,uVar11);
                *(char **)(lVar12 + 0x38) =
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/GeometryUtilities/Mesh/Skin/hkSkinnedMeshShape.cpp"
                ;
                *(undefined8 *)(lVar12 + 0x40) = 0x4e;
                FUN_033269dc(auStack_430);
              }
              else {
                FUN_03326a7c(auStack_430,&DAT_04440238,4);
                local_548[0] = CONCAT22(local_548[0]._2_2_,local_d0);
                lVar12 = FUN_03326338(auStack_430,
                                      "Part {}. BoneSet {}. Sub-mesh {}. Start vertex {}. NumVerts {}. Start Index {}. NumIndices {}."
                                      ,&DAT_04345ff8,&local_a8,local_548,local_ce,&local_e0,uVar16,
                                      uVar17,uVar11);
                *(char **)(lVar12 + 0x38) =
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/GeometryUtilities/Mesh/Skin/hkSkinnedMeshShape.cpp"
                ;
                *(undefined8 *)(lVar12 + 0x40) = 0x4e;
                FUN_03326adc(auStack_430);
              }
            }
            plVar8 = local_100;
            local_43c = local_dc;
            local_438 = 0;
            local_440 = local_e0;
            local_434 = 1;
            (**(code **)(*local_100 + 0x40))(local_100,&local_440,auStack_430);
            FUN_0329c8d0(local_548);
            (**(code **)(*plVar8 + 0x30))(plVar8,local_548);
            uVar10 = FUN_0329c9b8(local_548,1,0);
            uVar13 = local_98;
            lVar12 = local_a0;
            uVar3 = local_dc;
            if ((int)(local_98._4_4_ & 0x3fffffff) < (int)local_dc) {
              if (0x3fffffff < (int)local_dc) {
                FUN_032bd0a8(local_dc);
              }
              uVar15 = (local_98._4_4_ & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar15) {
                uVar15 = 0x3fffffff;
              }
              uVar2 = uVar3;
              if ((int)uVar3 <= (int)uVar15) {
                uVar2 = uVar15;
              }
              local_a0 = FUN_032bd1d4(puVar6,uVar2,0x10,lVar12,uVar13 & 0xffffffff,
                                      (long)&local_98 + 4);
            }
            if ((uint)local_98 != uVar3) {
              local_98 = CONCAT44(local_98._4_4_,uVar3);
            }
            local_558 = 0;
            local_550 = -0x8000000000000000;
            uVar3 = local_dc * 4;
            if ((int)local_dc < 1) {
              if (uVar3 != 0) goto LAB_0329f478;
            }
            else {
              if ((int)local_dc < 0x10000000) {
                uVar15 = 0;
              }
              else {
                FUN_032bd0a8(uVar3);
                uVar15 = local_550._4_4_;
              }
              uVar15 = (uVar15 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar15) {
                uVar15 = 0x3fffffff;
              }
              uVar2 = uVar3;
              if ((int)uVar3 <= (int)uVar15) {
                uVar2 = uVar15;
              }
              local_558 = FUN_032bd1d4(puVar7,uVar2,4,0,0,(long)&local_550 + 4);
              if ((uint)local_550 != uVar3) {
LAB_0329f478:
                local_550 = CONCAT44(local_550._4_4_,uVar3);
              }
            }
            (**(code **)(*plVar8 + 0x50))(plVar8,auStack_430,uVar10,local_558);
            if (0 < (int)local_dc) {
              uVar13 = 0;
              lVar12 = 0;
              do {
                uVar18 = uVar13 & 0xfffffffc;
                uVar13 = uVar13 + 4;
                puVar4 = (undefined8 *)(local_558 + uVar18 * 4);
                uVar21 = *puVar4;
                puVar5 = (undefined8 *)(local_a0 + lVar12 * 0x10);
                puVar5[1] = puVar4[1];
                *puVar5 = uVar21;
                lVar12 = lVar12 + 1;
              } while (lVar12 < (int)local_dc);
              if (0 < (int)local_dc) {
                lVar20 = 0;
                lVar12 = 0;
                do {
                  if ((3 < DAT_04440288) || (uVar13 = FUN_03327170(), (uVar13 & 1) != 0)) {
                    uVar13 = FUN_03327170();
                    if ((uVar13 & 1) == 0) {
                      FUN_03326994(local_6b0,&DAT_04440238,4);
                      local_55c = (int)lVar12 + local_e0;
                      lVar14 = FUN_03326338(local_6b0,"Vtx {}.\t{:,3}",&DAT_04346038,&local_55c,
                                            local_a0 + lVar20);
                      *(char **)(lVar14 + 0x38) =
                           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/GeometryUtilities/Mesh/Skin/hkSkinnedMeshShape.cpp"
                      ;
                      *(undefined8 *)(lVar14 + 0x40) = 0x69;
                      FUN_033269dc(local_6b0);
                    }
                    else {
                      FUN_03326a7c(local_6b0,&DAT_04440238,4);
                      local_6b4 = (int)lVar12 + local_e0;
                      lVar14 = FUN_03326338(local_6b0,"Vtx {}.\t{:,3}",&DAT_04346038,&local_6b4,
                                            local_a0 + lVar20);
                      *(char **)(lVar14 + 0x38) =
                           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/GeometryUtilities/Mesh/Skin/hkSkinnedMeshShape.cpp"
                      ;
                      *(undefined8 *)(lVar14 + 0x40) = 0x69;
                      FUN_03326adc(local_6b0);
                    }
                  }
                  lVar12 = lVar12 + 1;
                  lVar20 = lVar20 + 0x10;
                } while (lVar12 < (int)local_dc);
              }
            }
            lVar12 = local_550;
            uVar3 = local_550._4_4_;
            local_550 = (ulong)local_550._4_4_ << 0x20;
            if ((-1 < lVar12) && (local_558 != 0)) {
              FUN_032cf244(puVar7,local_558,4,uVar3 & 0x3fffffff);
            }
            (**(code **)(*plVar8 + 0x70))(plVar8,auStack_430);
            lVar12 = local_108;
            if (local_10c == '\x01') {
              if (0 < local_d4) {
                iVar19 = 0;
                do {
                  iVar1 = iVar19 + local_d8;
                  local_6b0[0] = CONCAT22(local_6b0[0]._2_2_,
                                          *(undefined2 *)(lVar12 + (long)iVar1 * 2));
                  local_548[0] = CONCAT22(local_548[0]._2_2_,
                                          *(undefined2 *)(lVar12 + (long)(iVar1 + 1) * 2));
                  local_440 = CONCAT22(local_440._2_2_,
                                       *(undefined2 *)(lVar12 + (long)(iVar1 + 2) * 2));
                  if ((3 < DAT_04440288) || (uVar13 = FUN_03327170(), (uVar13 & 1) != 0)) {
                    uVar13 = FUN_03327170();
                    if ((uVar13 & 1) == 0) {
                      FUN_03326994(auStack_430,&DAT_04440238,4);
                      lVar20 = FUN_03326338(auStack_430,"Tri ({}, {}, {}).",&DAT_04346050,local_6b0,
                                            local_548,&local_440);
                      *(char **)(lVar20 + 0x38) =
                           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/GeometryUtilities/Mesh/Skin/hkSkinnedMeshShape.cpp"
                      ;
                      *(undefined8 *)(lVar20 + 0x40) = 0x7a;
                      FUN_033269dc(auStack_430);
                    }
                    else {
                      FUN_03326a7c(auStack_430,&DAT_04440238,4);
                      lVar20 = FUN_03326338(auStack_430,"Tri ({}, {}, {}).",&DAT_04346050,local_6b0,
                                            local_548,&local_440);
                      *(char **)(lVar20 + 0x38) =
                           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/GeometryUtilities/Mesh/Skin/hkSkinnedMeshShape.cpp"
                      ;
                      *(undefined8 *)(lVar20 + 0x40) = 0x7a;
                      FUN_03326adc(auStack_430);
                    }
                  }
                  iVar19 = iVar19 + 3;
                } while (iVar19 < local_d4);
              }
            }
            else if ((local_10c == '\x02') && (0 < local_d4)) {
              iVar19 = 0;
              do {
                iVar1 = iVar19 + local_d8;
                local_6b0[0] = *(undefined4 *)(lVar12 + (long)iVar1 * 4);
                local_548[0] = *(undefined4 *)(lVar12 + (long)(iVar1 + 1) * 4);
                local_440 = *(int *)(lVar12 + (long)(iVar1 + 2) * 4);
                if ((3 < DAT_04440288) || (uVar13 = FUN_03327170(), (uVar13 & 1) != 0)) {
                  uVar13 = FUN_03327170();
                  if ((uVar13 & 1) == 0) {
                    FUN_03326994(auStack_430,&DAT_04440238,4);
                    lVar20 = FUN_03326338(auStack_430,"Tri ({}, {}, {}).",&DAT_04346070,local_6b0,
                                          local_548,&local_440);
                    *(char **)(lVar20 + 0x38) =
                         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/GeometryUtilities/Mesh/Skin/hkSkinnedMeshShape.cpp"
                    ;
                    *(undefined8 *)(lVar20 + 0x40) = 0x85;
                    FUN_033269dc(auStack_430);
                  }
                  else {
                    FUN_03326a7c(auStack_430,&DAT_04440238,4);
                    lVar20 = FUN_03326338(auStack_430,"Tri ({}, {}, {}).",&DAT_04346070,local_6b0,
                                          local_548,&local_440);
                    *(char **)(lVar20 + 0x38) =
                         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/GeometryUtilities/Mesh/Skin/hkSkinnedMeshShape.cpp"
                    ;
                    *(undefined8 *)(lVar20 + 0x40) = 0x85;
                    FUN_03326adc(auStack_430);
                  }
                }
                iVar19 = iVar19 + 3;
              } while (iVar19 < local_d4);
            }
            (**(code **)(*plVar9 + 0x30))(plVar9,auStack_120);
            if (local_f8 != 0) {
              FUN_032d647c();
            }
            if (local_100 != (long *)0x0) {
              FUN_032d647c();
            }
          }
          local_a8 = local_a8 + 1;
        } while (local_a8 < local_78);
      }
      uVar13 = local_98;
      uVar3 = local_98._4_4_;
      local_98 = (ulong)local_98._4_4_ << 0x20;
      if ((-1 < (long)uVar13) && (local_a0 != 0)) {
        FUN_032cf244(puVar6,local_a0,0x10,uVar3 & 0x3fffffff);
      }
      if (local_90 != (long *)0x0) {
        FUN_032d647c();
      }
      local_7c = local_7c + 1;
    } while (local_7c < local_74[0]);
  }
  return;
}


