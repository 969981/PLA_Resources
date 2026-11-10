/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0331993c; name: FUN_0331993c
 */


undefined4 FUN_0331993c(long *param_1,ulong *param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte *pbVar4;
  ulong *puVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long extraout_x1;
  undefined8 *puVar14;
  ushort uVar15;
  uint uVar16;
  code *pcVar17;
  ushort uVar18;
  ulong *puVar19;
  ulong uVar20;
  undefined1 auVar21 [16];
  byte *local_608;
  ulong *local_600;
  ulong *puStack_5f8;
  char *local_4b0;
  byte *local_4a8;
  ulong *local_4a0;
  undefined8 local_498;
  undefined1 *local_490;
  undefined8 local_488;
  undefined1 local_480 [1024];
  undefined4 local_80 [2];
  ulong *local_78;
  undefined4 local_70 [4];
  
  local_80[0] = 0;
  local_78 = param_2;
  lVar9 = FUN_032e20b0(param_2,1);
  if (lVar9 == 0) {
    lVar9 = *(long *)(*param_1 + 0x28);
    if ((lVar9 != 0) &&
       ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar9 + 0x50) ||
        (uVar10 = FUN_03327170(), (uVar10 & 1) != 0)))) {
      uVar10 = FUN_03327170();
      if ((uVar10 & 1) == 0) {
        FUN_03326994(&local_490,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
        lVar9 = FUN_03326338(&local_490,"Every type must have an Opt::FORMAT in its hierarchy",
                             PTR_DAT_04372528);
        *(undefined4 *)(lVar9 + 0x1c) = 0xb73f79e0;
        *(char **)(lVar9 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        *(undefined8 *)(lVar9 + 0x40) = 0x24a;
        FUN_033269dc(&local_490);
      }
      else {
        FUN_03326a7c(&local_490,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
        lVar9 = FUN_03326338(&local_490,"Every type must have an Opt::FORMAT in its hierarchy",
                             PTR_DAT_04372528);
        *(undefined4 *)(lVar9 + 0x1c) = 0xb73f79e0;
        *(char **)(lVar9 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        *(undefined8 *)(lVar9 + 0x40) = 0x24a;
        FUN_03326adc(&local_490);
      }
    }
    local_70[0] = 0;
    FUN_03319240(local_70);
    return local_70[0];
  }
  uVar10 = FUN_032f04e0(param_2);
  if ((uVar10 & 1) != 0) {
    return 0;
  }
  iVar7 = FUN_0331d4a0(param_1,param_2);
  if (iVar7 < 0) {
    FUN_03319240(local_80);
    if (*(char *)*param_1 != '\0') {
      return local_80[0];
    }
    param_2 = local_78;
  }
  uVar10 = FUN_032e35d8(param_2);
  if ((param_2 != (ulong *)0x0) && ((uVar10 & 0x1f) == 7)) {
    lVar9 = FUN_032dcd08(param_2);
    local_600 = *(ulong **)(lVar9 + 8);
    if (local_600 != (ulong *)0x0) {
      do {
        uVar8 = (uint)*param_2;
        if ((uVar8 >> 0x14 & 1) != 0) {
          uVar8 = (uVar8 & 0xfffff) - (uVar8 >> 1 & 0x55555);
          uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
          uVar15 = (ushort)param_2[(ulong)((uVar8 + (uVar8 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
                                   2];
          goto LAB_03319af8;
        }
      } while (((*param_2 & 1) == 0) && (param_2 = (ulong *)param_2[1], param_2 != (ulong *)0x0));
      uVar15 = 0;
LAB_03319af8:
      puVar19 = local_600;
      do {
        uVar8 = (uint)*puVar19;
        if ((uVar8 >> 0x14 & 1) != 0) {
          uVar18 = 0;
          if (puVar19 != (ulong *)0x0) {
            uVar8 = (uVar8 & 0xfffff) - (uVar8 >> 1 & 0x55555);
            uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
            uVar18 = (ushort)puVar19[(ulong)((uVar8 + (uVar8 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18)
                                     + 2];
          }
          goto LAB_03319b48;
        }
        if ((*puVar19 & 1) != 0) goto LAB_03319be0;
        puVar19 = (ulong *)puVar19[1];
      } while (puVar19 != (ulong *)0x0);
      uVar18 = 0;
LAB_03319b48:
      if (uVar15 < uVar18) {
        FUN_03319240(local_80);
        lVar9 = *(long *)(*param_1 + 0x28);
        if ((lVar9 != 0) &&
           ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar9 + 0x50) ||
            (uVar10 = FUN_03327170(), (uVar10 & 1) != 0)))) {
          uVar10 = FUN_03327170();
          if ((uVar10 & 1) == 0) {
            FUN_03326994(&local_490,*(undefined8 *)(*param_1 + 0x28),
                         *(undefined1 *)(*param_1 + 0x30));
            lVar9 = FUN_03326338(&local_490,"Type \'{}\' is smaller than parent type \'{}\'",
                                 PTR_DAT_04389350,&local_78,&local_600);
            *(char **)(lVar9 + 0x38) =
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            *(undefined8 *)(lVar9 + 0x40) = 600;
            FUN_033269dc(&local_490);
          }
          else {
            FUN_03326a7c(&local_490,*(undefined8 *)(*param_1 + 0x28),
                         *(undefined1 *)(*param_1 + 0x30));
            lVar9 = FUN_03326338(&local_490,"Type \'{}\' is smaller than parent type \'{}\'",
                                 PTR_DAT_04389350,&local_78,&local_600);
            *(char **)(lVar9 + 0x38) =
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            *(undefined8 *)(lVar9 + 0x40) = 600;
            FUN_03326adc(&local_490);
          }
        }
        if (*(char *)*param_1 != '\0') {
          return local_80[0];
        }
      }
LAB_03319be0:
      auVar21 = FUN_032e35f4(local_600);
      if (((int)((ulong)(auVar21._8_8_ - auVar21._0_8_) >> 3) != 0) &&
         (auVar21 = FUN_032e35f4(local_78), (int)((ulong)(auVar21._8_8_ - auVar21._0_8_) >> 3) != 0)
         ) {
        FUN_032e35f4(local_600);
        local_4a0 = *(ulong **)(extraout_x1 + -8);
        iVar7 = FUN_032e3f38(&local_4a0);
        puVar19 = local_4a0;
        do {
          uVar8 = (uint)*puVar19;
          if ((uVar8 >> 0x14 & 1) != 0) {
            uVar16 = 0;
            if (puVar19 != (ulong *)0x0) {
              uVar8 = (uVar8 & 0xfffff) - (uVar8 >> 1 & 0x55555);
              uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
              uVar16 = (uint)(ushort)puVar19[(ulong)((uVar8 + (uVar8 >> 4) & 0xf0f0f0f) * 0x1010101
                                                    >> 0x18) + 2];
            }
            goto LAB_03319c74;
          }
          if ((*puVar19 & 1) != 0) {
            uVar16 = 0;
            goto LAB_03319c74;
          }
          puVar19 = (ulong *)puVar19[1];
        } while (puVar19 != (ulong *)0x0);
        uVar16 = 0;
LAB_03319c74:
        local_4a8 = (byte *)CONCAT44(local_4a8._4_4_,uVar16 + iVar7);
        FUN_032e35f4(local_78);
        iVar7 = FUN_032e3f38();
        local_4b0 = (char *)CONCAT44(local_4b0._4_4_,iVar7);
        if (iVar7 < (int)local_4a8) {
          FUN_03319240(local_80);
          lVar9 = *(long *)(*param_1 + 0x28);
          if ((lVar9 != 0) &&
             ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar9 + 0x50) ||
              (uVar10 = FUN_03327170(), (uVar10 & 1) != 0)))) {
            uVar10 = FUN_03327170();
            if ((uVar10 & 1) == 0) {
              FUN_03326994(&local_490,*(undefined8 *)(*param_1 + 0x28),
                           *(undefined1 *)(*param_1 + 0x30));
              uVar11 = FUN_032e35f4(local_78);
              lVar9 = FUN_03326338(&local_490,
                                   "Field \'{}\' (starts at offset {}) overlaps with field \'{}\' in parent (ends at offset {})"
                                   ,&DAT_0434fb50,uVar11,&local_4b0,&local_4a0,&local_4a8);
              *(char **)(lVar9 + 0x38) =
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
              ;
              *(undefined8 *)(lVar9 + 0x40) = 0x261;
              FUN_033269dc(&local_490);
            }
            else {
              FUN_03326a7c(&local_490,*(undefined8 *)(*param_1 + 0x28),
                           *(undefined1 *)(*param_1 + 0x30));
              uVar11 = FUN_032e35f4(local_78);
              lVar9 = FUN_03326338(&local_490,
                                   "Field \'{}\' (starts at offset {}) overlaps with field \'{}\' in parent (ends at offset {})"
                                   ,&DAT_0434fb50,uVar11,&local_4b0,&local_4a0,&local_4a8);
              *(char **)(lVar9 + 0x38) =
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
              ;
              *(undefined8 *)(lVar9 + 0x40) = 0x261;
              FUN_03326adc(&local_490);
            }
          }
          if (*(char *)*param_1 != '\0') {
            return local_80[0];
          }
        }
      }
    }
    param_2 = local_78;
  }
  if ((*(byte *)((long)param_2 + 1) >> 6 & 1) != 0) {
    puVar12 = (undefined8 *)FUN_032e2008(param_2,0x4000);
    puVar2 = PTR_DAT_04389350;
    puVar3 = PTR_DAT_043891f8;
    if (((puVar12 != (undefined8 *)0x0) && (puVar19 = (ulong *)*puVar12, puVar19 != (ulong *)0x0))
       && (uVar10 = *puVar19, 0 < (int)uVar10)) {
      uVar20 = 0;
      do {
        local_4a0 = (ulong *)puVar19[uVar20 * 2 + 1];
        if (local_4a0 == (ulong *)0x0) {
          FUN_03319240(local_80);
          lVar9 = *(long *)(*param_1 + 0x28);
          if ((lVar9 != 0) &&
             ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar9 + 0x50) ||
              (uVar13 = FUN_03327170(), (uVar13 & 1) != 0)))) {
            uVar13 = FUN_03327170();
            if ((uVar13 & 1) == 0) {
              FUN_03326994(&local_490,*(undefined8 *)(*param_1 + 0x28),
                           *(undefined1 *)(*param_1 + 0x30));
              lVar9 = FUN_03326338(&local_490,"Type \'{}\' has null interface type.",puVar3,
                                   &local_78);
              *(char **)(lVar9 + 0x38) =
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
              ;
              uVar11 = 0x26e;
              goto LAB_03319ef0;
            }
            FUN_03326a7c(&local_490,*(undefined8 *)(*param_1 + 0x28),
                         *(undefined1 *)(*param_1 + 0x30));
            lVar9 = FUN_03326338(&local_490,"Type \'{}\' has null interface type.",puVar3,&local_78)
            ;
            uVar11 = 0x26e;
            *(char **)(lVar9 + 0x38) =
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
LAB_0331a1a8:
            *(undefined8 *)(lVar9 + 0x40) = uVar11;
            FUN_03326adc(&local_490);
          }
        }
        else {
          pcVar17 = *(code **)(*param_1 + 0x10);
          if ((pcVar17 == (code *)0x0) ||
             (uVar13 = (*pcVar17)(local_4a0,*(undefined8 *)(*param_1 + 0x18)), (uVar13 & 1) != 0)) {
            puVar5 = local_4a0;
            uVar13 = FUN_032e35d8(local_4a0);
            if ((puVar5 == (ulong *)0x0) || ((uVar13 & 0x1f) != 7)) {
              FUN_03319240(local_80);
              lVar9 = *(long *)(*param_1 + 0x28);
              if ((lVar9 != 0) &&
                 ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar9 + 0x50) ||
                  (uVar13 = FUN_03327170(), (uVar13 & 1) != 0)))) {
                uVar13 = FUN_03327170();
                if ((uVar13 & 1) == 0) {
                  FUN_03326994(&local_490,*(undefined8 *)(*param_1 + 0x28),
                               *(undefined1 *)(*param_1 + 0x30));
                  lVar9 = FUN_03326338(&local_490,
                                       "Type \'{}\' has interface \'{}\' which is not a record type."
                                       ,puVar2,&local_78,&local_4a0);
                  *(char **)(lVar9 + 0x38) =
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                  ;
                  uVar11 = 0x272;
                  goto LAB_03319ef0;
                }
                FUN_03326a7c(&local_490,*(undefined8 *)(*param_1 + 0x28),
                             *(undefined1 *)(*param_1 + 0x30));
                lVar9 = FUN_03326338(&local_490,
                                     "Type \'{}\' has interface \'{}\' which is not a record type.",
                                     puVar2,&local_78,&local_4a0);
                *(char **)(lVar9 + 0x38) =
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                ;
                uVar11 = 0x272;
                goto LAB_0331a1a8;
              }
            }
            else {
              FUN_032e2dd4(&local_600,puVar19[uVar20 * 2 + 1],0);
              do {
                while (local_600 + 1 < puStack_5f8) {
                  local_600 = local_600 + 1;
                  uVar8 = FUN_032e3f8c();
                  if ((uVar8 >> 5 & 1) != 0) goto LAB_03319e1c;
                }
                uVar13 = FUN_032e2de0(&local_600);
                if ((uVar13 & 1) == 0) goto LAB_03319f08;
                uVar8 = FUN_032e3f8c(local_600);
              } while ((uVar8 >> 5 & 1) == 0);
LAB_03319e1c:
              FUN_03319240(local_80);
              lVar9 = *(long *)(*param_1 + 0x28);
              if ((lVar9 != 0) &&
                 ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar9 + 0x50) ||
                  (uVar13 = FUN_03327170(), (uVar13 & 1) != 0)))) {
                uVar13 = FUN_03327170();
                if ((uVar13 & 1) != 0) {
                  FUN_03326a7c(&local_490,*(undefined8 *)(*param_1 + 0x28),
                               *(undefined1 *)(*param_1 + 0x30));
                  lVar9 = FUN_03326338(&local_490,
                                       "Type \'{}\' has interface \'{}\' with non-empty decl array."
                                       ,puVar2,&local_78,&local_4a0);
                  *(char **)(lVar9 + 0x38) =
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                  ;
                  uVar11 = 0x278;
                  goto LAB_0331a1a8;
                }
                FUN_03326994(&local_490,*(undefined8 *)(*param_1 + 0x28),
                             *(undefined1 *)(*param_1 + 0x30));
                lVar9 = FUN_03326338(&local_490,
                                     "Type \'{}\' has interface \'{}\' with non-empty decl array.",
                                     puVar2,&local_78,&local_4a0);
                uVar11 = 0x278;
                *(char **)(lVar9 + 0x38) =
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                ;
LAB_03319ef0:
                *(undefined8 *)(lVar9 + 0x40) = uVar11;
                FUN_033269dc(&local_490);
              }
            }
          }
          else {
            FUN_03319240(local_80);
            lVar9 = *(long *)(*param_1 + 0x28);
            if ((lVar9 != 0) &&
               ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar9 + 0x50) ||
                (uVar13 = FUN_03327170(), (uVar13 & 1) != 0)))) {
              uVar13 = FUN_03327170();
              if ((uVar13 & 1) == 0) {
                FUN_03326994(&local_490,*(undefined8 *)(*param_1 + 0x28),
                             *(undefined1 *)(*param_1 + 0x30));
                lVar9 = FUN_03326338(&local_490,
                                     "Type \'{}\' has unreachable interface type (not in scope).",
                                     puVar3,&local_78);
                *(char **)(lVar9 + 0x38) =
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                ;
                uVar11 = 0x26f;
                goto LAB_03319ef0;
              }
              FUN_03326a7c(&local_490,*(undefined8 *)(*param_1 + 0x28),
                           *(undefined1 *)(*param_1 + 0x30));
              lVar9 = FUN_03326338(&local_490,
                                   "Type \'{}\' has unreachable interface type (not in scope).",
                                   puVar3,&local_78);
              *(char **)(lVar9 + 0x38) =
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
              ;
              uVar11 = 0x26f;
              goto LAB_0331a1a8;
            }
          }
        }
        if (*(char *)*param_1 != '\0') {
          return local_80[0];
        }
LAB_03319f08:
        uVar20 = uVar20 + 1;
      } while (uVar20 != (uVar10 & 0xffffffff));
    }
  }
  puVar3 = PTR_PTR_0434a080;
  if ((*local_78 & 1) != 0) {
    local_490 = local_480;
    local_488 = 0x8000008000000000;
    local_4a0 = (ulong *)0x0;
    local_498 = 0x8000000000000000;
    uVar10 = local_78[1];
    if (uVar10 != 0) {
      do {
        auVar21 = FUN_032e31d4(uVar10);
        uVar20 = local_488;
        puVar6 = local_490;
        puVar19 = auVar21._0_8_;
        uVar8 = (int)local_488 + (int)((ulong)((long)auVar21._8_8_ - (long)puVar19) >> 3);
        if ((int)(local_488._4_4_ & 0x3fffffff) < (int)uVar8) {
          if (0x3fffffff < (int)uVar8) {
            FUN_032bd0a8(uVar8);
          }
          uVar16 = (local_488._4_4_ & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar16) {
            uVar16 = 0x3fffffff;
          }
          if ((int)uVar8 <= (int)uVar16) {
            uVar8 = uVar16;
          }
          local_490 = (undefined1 *)
                      FUN_032bd1d4(puVar3,uVar8,8,puVar6,uVar20 & 0xffffffff,(long)&local_488 + 4);
        }
        for (; puVar19 != auVar21._8_8_; puVar19 = puVar19 + 1) {
          local_600 = (ulong *)*puVar19;
          uVar11 = FUN_032e2c18(&local_600);
          FUN_032c7a54(&local_4a8,uVar11,0xffffffff);
          iVar7 = (int)local_498 + 1;
          if ((int)(local_498._4_4_ & 0x3fffffff) <= (int)local_498) {
            local_4a0 = (ulong *)FUN_03152c04(puVar3,iVar7,local_4a0,local_498 & 0xffffffff,
                                              (long)&local_498 + 4);
          }
          local_4a0[(int)local_498] = (ulong)local_4a8;
          local_4a8 = (byte *)0x0;
          local_498 = CONCAT44(local_498._4_4_,iVar7);
          FUN_032c7b9c(&local_4a8);
        }
        uVar10 = *(ulong *)(uVar10 + 8);
      } while (uVar10 != 0);
    }
    auVar21 = FUN_032e31d4(local_78);
    uVar10 = local_488;
    puVar6 = local_490;
    puVar14 = auVar21._8_8_;
    puVar12 = auVar21._0_8_;
    uVar8 = (int)local_488 + (int)((ulong)((long)puVar14 - (long)puVar12) >> 3);
    puVar2 = PTR_DAT_043892a8;
    if ((int)(local_488._4_4_ & 0x3fffffff) < (int)uVar8) {
      if (0x3fffffff < (int)uVar8) {
        FUN_032bd0a8(uVar8);
      }
      uVar16 = (local_488._4_4_ & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar16) {
        uVar16 = 0x3fffffff;
      }
      if ((int)uVar8 <= (int)uVar16) {
        uVar8 = uVar16;
      }
      local_490 = (undefined1 *)
                  FUN_032bd1d4(puVar3,uVar8,8,puVar6,uVar10 & 0xffffffff,(long)&local_488 + 4);
      puVar2 = PTR_DAT_043892a8;
    }
    PTR_DAT_043892a8 = puVar2;
    if (puVar12 != puVar14) {
      do {
        local_4a8 = (byte *)*puVar12;
        local_4b0 = (char *)FUN_032e2c18(&local_4a8);
        if (0 < (int)local_488) {
          uVar10 = 0;
          do {
            if (*(char **)(local_490 + uVar10 * 8) == local_4b0) goto LAB_0331a4bc;
            uVar10 = uVar10 + 1;
          } while ((local_488 & 0xffffffff) != uVar10);
        }
        uVar10 = 0xffffffff;
LAB_0331a4bc:
        FUN_032c7a54(&local_600,local_4b0,0xffffffff);
        iVar7 = (int)local_498 + 1;
        if ((int)(local_498._4_4_ & 0x3fffffff) <= (int)local_498) {
          local_4a0 = (ulong *)FUN_03152c04(puVar3,iVar7,local_4a0,local_498 & 0xffffffff,
                                            (long)&local_498 + 4);
        }
        local_4a0[(int)local_498] = (ulong)local_600;
        local_600 = (ulong *)0x0;
        local_498 = CONCAT44(local_498._4_4_,iVar7);
        FUN_032c7b9c(&local_600);
        if ((-1 < (int)uVar10) && ((*(char *)(*param_1 + 0x20) == '\0' || (*local_4b0 != '$')))) {
          FUN_03319240(local_80);
          lVar9 = *(long *)(*param_1 + 0x28);
          if ((lVar9 != 0) &&
             ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar9 + 0x50) ||
              (uVar10 = FUN_03327170(), (uVar10 & 1) != 0)))) {
            uVar10 = FUN_03327170();
            if ((uVar10 & 1) == 0) {
              FUN_03326994(&local_600,*(undefined8 *)(*param_1 + 0x28),
                           *(undefined1 *)(*param_1 + 0x30));
              lVar9 = FUN_03326338(&local_600,
                                   "Type \'{}\' has duplicate field with name \'{}\' (possibly from ancestor)."
                                   ,PTR_DAT_04389208,&local_78,&local_4b0);
              *(char **)(lVar9 + 0x38) =
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
              ;
              *(undefined8 *)(lVar9 + 0x40) = 0x29c;
              FUN_033269dc(&local_600);
            }
            else {
              FUN_03326a7c(&local_600,*(undefined8 *)(*param_1 + 0x28),
                           *(undefined1 *)(*param_1 + 0x30));
              lVar9 = FUN_03326338(&local_600,
                                   "Type \'{}\' has duplicate field with name \'{}\' (possibly from ancestor)."
                                   ,PTR_DAT_04389208,&local_78,&local_4b0);
              *(char **)(lVar9 + 0x38) =
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
              ;
              *(undefined8 *)(lVar9 + 0x40) = 0x29c;
              FUN_03326adc(&local_600);
            }
          }
          if (*(char *)*param_1 == '\0') goto LAB_0331a5bc;
LAB_0331a994:
          bVar1 = true;
          local_70[0] = local_80[0];
          puVar19 = local_4a0;
          goto joined_r0x0331a9a4;
        }
LAB_0331a5bc:
        *(char **)(local_490 + (long)(int)local_488 * 8) = local_4b0;
        local_488 = CONCAT44(local_488._4_4_,(int)local_488 + 1);
        local_608 = local_4a8;
        if (local_4a8 == (byte *)0x0) {
          FUN_03319240(local_80);
          lVar9 = *(long *)(*param_1 + 0x28);
          if ((lVar9 != 0) &&
             ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar9 + 0x50) ||
              (uVar10 = FUN_03327170(), (uVar10 & 1) != 0)))) {
            uVar10 = FUN_03327170();
            if ((uVar10 & 1) == 0) {
              FUN_03326994(&local_600,*(undefined8 *)(*param_1 + 0x28),
                           *(undefined1 *)(*param_1 + 0x30));
              lVar9 = FUN_03326338(&local_600,"Field \'{}\' of type \'{}\' has invalid NULL type.",
                                   puVar2,&local_4b0,&local_78);
              *(char **)(lVar9 + 0x38) =
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
              ;
              uVar11 = 0x2a1;
              goto LAB_0331a7a4;
            }
            FUN_03326a7c(&local_600,*(undefined8 *)(*param_1 + 0x28),
                         *(undefined1 *)(*param_1 + 0x30));
            lVar9 = FUN_03326338(&local_600,"Field \'{}\' of type \'{}\' has invalid NULL type.",
                                 puVar2,&local_4b0,&local_78);
            *(char **)(lVar9 + 0x38) =
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            uVar11 = 0x2a1;
LAB_0331ab0c:
            *(undefined8 *)(lVar9 + 0x40) = uVar11;
            FUN_03326adc(&local_600);
          }
LAB_0331a7b0:
          if (*(char *)*param_1 != '\0') goto LAB_0331a994;
        }
        else {
          if ((*local_4a8 & 1) != 0) {
            FUN_03319240(local_80);
            lVar9 = *(long *)(*param_1 + 0x28);
            if ((lVar9 != 0) &&
               ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar9 + 0x50) ||
                (uVar10 = FUN_03327170(), (uVar10 & 1) != 0)))) {
              uVar10 = FUN_03327170();
              if ((uVar10 & 1) != 0) {
                FUN_03326a7c(&local_600,*(undefined8 *)(*param_1 + 0x28),
                             *(undefined1 *)(*param_1 + 0x30));
                lVar9 = FUN_03326338(&local_600,
                                     "Field \'{}\' of type \'{}\' has non-decorator type.",puVar2,
                                     &local_4b0,&local_78);
                *(char **)(lVar9 + 0x38) =
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                ;
                uVar11 = 0x2a8;
                goto LAB_0331ab0c;
              }
              FUN_03326994(&local_600,*(undefined8 *)(*param_1 + 0x28),
                           *(undefined1 *)(*param_1 + 0x30));
              lVar9 = FUN_03326338(&local_600,"Field \'{}\' of type \'{}\' has non-decorator type.",
                                   puVar2,&local_4b0,&local_78);
              *(char **)(lVar9 + 0x38) =
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
              ;
              uVar11 = 0x2a8;
LAB_0331a7a4:
              *(undefined8 *)(lVar9 + 0x40) = uVar11;
              FUN_033269dc(&local_600);
            }
            goto LAB_0331a7b0;
          }
          iVar7 = FUN_0331ba60(param_1);
          if (iVar7 < 0) {
            FUN_03319240(local_80);
            lVar9 = *(long *)(*param_1 + 0x28);
            if ((lVar9 != 0) &&
               ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar9 + 0x50) ||
                (uVar10 = FUN_03327170(), (uVar10 & 1) != 0)))) {
              uVar10 = FUN_03327170();
              if ((uVar10 & 1) != 0) {
                FUN_03326a7c(&local_600,*(undefined8 *)(*param_1 + 0x28),
                             *(undefined1 *)(*param_1 + 0x30));
                lVar9 = FUN_03326338(&local_600,
                                     "Field decorator type \'{}\' of decl \'{}\' of type \'{}\' failed inner checks."
                                     ,&DAT_0434fb78,&local_608,&local_4b0,&local_78);
                *(char **)(lVar9 + 0x38) =
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                ;
                uVar11 = 0x2a9;
                goto LAB_0331ab0c;
              }
              FUN_03326994(&local_600,*(undefined8 *)(*param_1 + 0x28),
                           *(undefined1 *)(*param_1 + 0x30));
              lVar9 = FUN_03326338(&local_600,
                                   "Field decorator type \'{}\' of decl \'{}\' of type \'{}\' failed inner checks."
                                   ,&DAT_0434fb78,&local_608,&local_4b0,&local_78);
              *(char **)(lVar9 + 0x38) =
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
              ;
              uVar11 = 0x2a9;
              goto LAB_0331a7a4;
            }
            goto LAB_0331a7b0;
          }
          if (*(long *)(local_608 + 8) == 0) {
            FUN_03319240(local_80);
            lVar9 = *(long *)(*param_1 + 0x28);
            if ((lVar9 != 0) &&
               ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar9 + 0x50) ||
                (uVar10 = FUN_03327170(), (uVar10 & 1) != 0)))) {
              uVar10 = FUN_03327170();
              if ((uVar10 & 1) != 0) {
                FUN_03326a7c(&local_600,*(undefined8 *)(*param_1 + 0x28),
                             *(undefined1 *)(*param_1 + 0x30));
                lVar9 = FUN_03326338(&local_600,"Field \'{}\' has null type.",PTR_DAT_04389290,
                                     &local_4a8);
                uVar11 = 0x2aa;
                *(char **)(lVar9 + 0x38) =
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                ;
                goto LAB_0331ab0c;
              }
              FUN_03326994(&local_600,*(undefined8 *)(*param_1 + 0x28),
                           *(undefined1 *)(*param_1 + 0x30));
              lVar9 = FUN_03326338(&local_600,"Field \'{}\' has null type.",PTR_DAT_04389290,
                                   &local_4a8);
              *(char **)(lVar9 + 0x38) =
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
              ;
              uVar11 = 0x2aa;
              goto LAB_0331a7a4;
            }
            goto LAB_0331a7b0;
          }
          pcVar17 = *(code **)(*param_1 + 0x10);
          if ((pcVar17 != (code *)0x0) &&
             (uVar10 = (*pcVar17)(*(long *)(local_608 + 8),*(undefined8 *)(*param_1 + 0x18)),
             (uVar10 & 1) == 0)) {
            FUN_03319240(local_80);
            lVar9 = *(long *)(*param_1 + 0x28);
            if ((lVar9 != 0) &&
               ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar9 + 0x50) ||
                (uVar10 = FUN_03327170(), (uVar10 & 1) != 0)))) {
              uVar10 = FUN_03327170();
              if ((uVar10 & 1) != 0) {
                FUN_03326a7c(&local_600,*(undefined8 *)(*param_1 + 0x28),
                             *(undefined1 *)(*param_1 + 0x30));
                lVar9 = FUN_03326338(&local_600,"Type of field \'{}\' is not reachable.",
                                     PTR_DAT_04389290,&local_4a8);
                *(char **)(lVar9 + 0x38) =
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                ;
                uVar11 = 0x2ad;
                goto LAB_0331ab0c;
              }
              FUN_03326994(&local_600,*(undefined8 *)(*param_1 + 0x28),
                           *(undefined1 *)(*param_1 + 0x30));
              lVar9 = FUN_03326338(&local_600,"Type of field \'{}\' is not reachable.",
                                   PTR_DAT_04389290,&local_4a8);
              *(char **)(lVar9 + 0x38) =
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
              ;
              uVar11 = 0x2ad;
              goto LAB_0331a7a4;
            }
            goto LAB_0331a7b0;
          }
          pbVar4 = local_608;
          uVar10 = FUN_032e35d8(local_608);
          if ((pbVar4 != (byte *)0x0) && ((uVar10 & 0x1f) == 0)) {
            FUN_03319240(local_80);
            lVar9 = *(long *)(*param_1 + 0x28);
            if ((lVar9 != 0) &&
               ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar9 + 0x50) ||
                (uVar10 = FUN_03327170(), (uVar10 & 1) != 0)))) {
              uVar10 = FUN_03327170();
              if ((uVar10 & 1) == 0) {
                FUN_03326994(&local_600,*(undefined8 *)(*param_1 + 0x28),
                             *(undefined1 *)(*param_1 + 0x30));
                lVar9 = FUN_03326338(&local_600,"Type \'{}\' has field \'{}\' with VOID type.",
                                     PTR_DAT_04389208,&local_78,&local_4b0);
                *(char **)(lVar9 + 0x38) =
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                ;
                *(undefined8 *)(lVar9 + 0x40) = 0x2b0;
                FUN_033269dc(&local_600);
              }
              else {
                FUN_03326a7c(&local_600,*(undefined8 *)(*param_1 + 0x28),
                             *(undefined1 *)(*param_1 + 0x30));
                lVar9 = FUN_03326338(&local_600,"Type \'{}\' has field \'{}\' with VOID type.",
                                     PTR_DAT_04389208,&local_78,&local_4b0);
                *(char **)(lVar9 + 0x38) =
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                ;
                *(undefined8 *)(lVar9 + 0x40) = 0x2b0;
                FUN_03326adc(&local_600);
              }
            }
            if (*(char *)*param_1 != '\0') goto LAB_0331a994;
          }
          uVar8 = FUN_032e2598(local_608);
          if ((uVar8 >> 1 & 1) != 0) {
            FUN_03319240(local_80);
            lVar9 = *(long *)(*param_1 + 0x28);
            if ((lVar9 != 0) &&
               ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar9 + 0x50) ||
                (uVar10 = FUN_03327170(), (uVar10 & 1) != 0)))) {
              uVar10 = FUN_03327170();
              if ((uVar10 & 1) != 0) {
                FUN_03326a7c(&local_600,*(undefined8 *)(*param_1 + 0x28),
                             *(undefined1 *)(*param_1 + 0x30));
                lVar9 = FUN_03326338(&local_600,
                                     "Type \'{}\' has field \'{}\' with abstract type ({}).",
                                     &DAT_0434fb78,&local_78,&local_4b0,&local_608);
                *(char **)(lVar9 + 0x38) =
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                ;
                uVar11 = 0x2b1;
                goto LAB_0331ab0c;
              }
              FUN_03326994(&local_600,*(undefined8 *)(*param_1 + 0x28),
                           *(undefined1 *)(*param_1 + 0x30));
              lVar9 = FUN_03326338(&local_600,
                                   "Type \'{}\' has field \'{}\' with abstract type ({}).",
                                   &DAT_0434fb78,&local_78,&local_4b0,&local_608);
              uVar11 = 0x2b1;
              *(char **)(lVar9 + 0x38) =
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
              ;
              goto LAB_0331a7a4;
            }
            goto LAB_0331a7b0;
          }
        }
        puVar12 = puVar12 + 1;
      } while (puVar12 != puVar14);
    }
    bVar1 = false;
    puVar19 = local_4a0;
joined_r0x0331a9a4:
    local_4a0 = puVar19;
    if ((int)local_498 != 0) {
      lVar9 = (long)(int)local_498 << 3;
      do {
        FUN_032c7b9c((long)puVar19 + lVar9 + -8);
        lVar9 = lVar9 + -8;
      } while (lVar9 != 0);
    }
    uVar10 = local_498;
    uVar8 = local_498._4_4_;
    local_498 = (ulong)local_498._4_4_ << 0x20;
    if ((-1 < (long)uVar10) && (local_4a0 != (ulong *)0x0)) {
      FUN_032cf244(puVar3,local_4a0,8,uVar8 & 0x3fffffff);
    }
    uVar10 = local_488;
    uVar8 = local_488._4_4_;
    local_488 = (ulong)local_488._4_4_ << 0x20;
    if ((-1 < (long)uVar10) && (local_490 != (undefined1 *)0x0)) {
      FUN_032cf244(puVar3,local_490,8,uVar8 & 0x3fffffff);
    }
    if (bVar1) {
      return local_70[0];
    }
  }
  puVar19 = local_78;
  uVar10 = FUN_032e35d8(local_78);
  if ((((puVar19 == (ulong *)0x0) || ((uVar10 & 0x1f) != 6)) ||
      (iVar7 = FUN_0331da08(param_1,puVar19), -1 < iVar7)) ||
     (FUN_03319240(local_80), *(char *)*param_1 == '\0')) {
    puVar19 = local_78;
    uVar10 = FUN_032e35d8(local_78);
    if (((((puVar19 == (ulong *)0x0) || ((uVar10 & 0x1f) != 8)) ||
         ((iVar7 = FUN_0331dd44(param_1,puVar19), -1 < iVar7 ||
          (FUN_03319240(local_80), *(char *)*param_1 == '\0')))) &&
        ((iVar7 = FUN_0331e340(param_1,local_78), -1 < iVar7 ||
         (FUN_03319240(local_80), *(char *)*param_1 == '\0')))) &&
       (iVar7 = FUN_0331e488(param_1,local_78), iVar7 < 0)) {
      FUN_03319240(local_80);
    }
  }
  return local_80[0];
}


