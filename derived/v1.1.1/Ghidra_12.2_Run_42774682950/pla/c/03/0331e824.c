/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0331e824; name: FUN_0331e824
 */


undefined4 FUN_0331e824(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  byte *pbVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  uint uVar13;
  byte *pbVar14;
  long lVar15;
  uint *puVar16;
  long lVar17;
  long *plVar18;
  undefined1 auVar19 [16];
  undefined8 local_1e0;
  undefined8 local_1d8;
  long local_1d0;
  undefined4 local_1c8 [84];
  long local_78;
  byte *local_70 [2];
  
  pbVar14 = *(byte **)(*param_2 + (long)(int)param_2[1] * 8 + -8);
  local_70[0] = pbVar14;
  lVar5 = FUN_03318f34(param_3,local_70);
  if ((lVar5 == 0) ||
     ((int)(*(uint *)(lVar5 + 4) | ((int)lVar5 - (int)*(undefined8 *)(param_3 + 0x10)) * 0x20000000)
      < 0)) {
    uVar6 = FUN_032e35d8(pbVar14);
    if (pbVar14 != (byte *)0x0 && (uVar6 & 0x1f) == 8) {
      uVar6 = FUN_032e35d8(pbVar14);
      pbVar9 = pbVar14;
      if ((uVar6 & 0x1f) != 8) {
        pbVar9 = (byte *)0x0;
      }
      puVar7 = (undefined8 *)FUN_032e20b0(pbVar9,1);
      if ((puVar7 != (undefined8 *)0x0) && (0 < (int)((ulong)*puVar7 >> 8))) {
        uVar6 = FUN_032e35d8(pbVar14);
        pbVar9 = pbVar14;
        if ((uVar6 & 0x1f) != 8) {
          pbVar9 = (byte *)0x0;
        }
        do {
          if ((*pbVar9 >> 1 & 1) != 0) {
            lVar5 = *(long *)(pbVar9 + 0x18);
            local_78 = lVar5;
            if (lVar5 == 0) goto LAB_0331e8ec;
            lVar17 = FUN_03318f34(param_3,&local_78);
            puVar3 = PTR_PTR_0434a090;
            if ((lVar17 != 0) &&
               (-1 < (int)(*(uint *)(lVar17 + 4) |
                          ((int)lVar17 - (int)*(undefined8 *)(param_3 + 0x10)) * 0x20000000)))
            goto LAB_0331e8ec;
            uVar13 = *(uint *)(param_2 + 1);
            if ((int)uVar13 < 1) goto LAB_0331e9d8;
            uVar6 = 0;
            goto LAB_0331e9c0;
          }
          pbVar9 = *(byte **)(pbVar9 + 8);
        } while (pbVar9 != (byte *)0x0);
      }
    }
    local_78 = 0;
    goto LAB_0331e8ec;
  }
  goto LAB_0331e88c;
  while (uVar6 = uVar6 + 1, uVar13 != uVar6) {
LAB_0331e9c0:
    if (*(long *)(*param_2 + uVar6 * 8) == lVar5) {
      if (-1 < (int)uVar6) {
        lVar5 = *(long *)(*param_1 + 0x28);
        if ((lVar5 == 0) ||
           ((*(byte *)(lVar5 + 0x50) < *(byte *)(*param_1 + 0x30) &&
            (uVar6 = FUN_03327170(), (uVar6 & 1) == 0)))) goto LAB_0331ec24;
        uVar6 = FUN_03327170();
        if ((uVar6 & 1) == 0) {
          FUN_03326994(local_1c8,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
          lVar5 = FUN_03326338(local_1c8,"Found loop in subtype \'{}\' of array type \'{}\'",
                               PTR_DAT_04389350,&local_78,local_70);
          *(undefined4 *)(lVar5 + 0x1c) = 0xa62e68e0;
          *(char **)(lVar5 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          *(undefined8 *)(lVar5 + 0x40) = 0x39d;
          goto LAB_0331ec1c;
        }
        FUN_03326a7c(local_1c8,*(undefined8 *)(*param_1 + 0x28),*(undefined1 *)(*param_1 + 0x30));
        lVar5 = FUN_03326338(local_1c8,"Found loop in subtype \'{}\' of array type \'{}\'",
                             PTR_DAT_04389350,&local_78,local_70);
        *(undefined4 *)(lVar5 + 0x1c) = 0xa62e68e0;
        *(char **)(lVar5 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        *(undefined8 *)(lVar5 + 0x40) = 0x39d;
        goto LAB_0331ef90;
      }
      break;
    }
  }
LAB_0331e9d8:
  puVar16 = (uint *)((long)param_2 + 0xc);
  uVar10 = *puVar16;
  uVar1 = uVar13 + 1;
  if ((int)uVar13 < (int)(uVar10 & 0x3fffffff)) {
    lVar17 = *param_2;
  }
  else {
    lVar17 = *param_2;
    if (0x3ffffffe < (int)uVar13) {
      FUN_032bd0a8(uVar1);
      uVar10 = *puVar16;
    }
    uVar10 = (uVar10 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar10) {
      uVar10 = 0x3fffffff;
    }
    uVar2 = uVar1;
    if ((int)uVar1 <= (int)uVar10) {
      uVar2 = uVar10;
    }
    lVar17 = FUN_032bd1d4(puVar3,uVar2,8,lVar17,(ulong)uVar13,puVar16);
    uVar13 = *(uint *)(param_2 + 1);
    *param_2 = lVar17;
  }
  *(long *)(lVar17 + (long)(int)uVar13 * 8) = lVar5;
  *(uint *)(param_2 + 1) = uVar1;
  iVar4 = FUN_0331e824(param_1,param_2,param_3);
  if (iVar4 < 0) {
    uVar12 = 0x80040200;
    if ((*(byte *)(*(long *)(*param_1 + 0x28) + 0x50) < 2) &&
       (uVar6 = FUN_03327170(), (uVar6 & 1) == 0)) goto LAB_0331e890;
    uVar6 = FUN_03327170();
    if ((uVar6 & 1) != 0) {
      FUN_03326a7c(local_1c8,*(undefined8 *)(*param_1 + 0x28),2);
      lVar5 = FUN_03326338(local_1c8,"Array type \'{}\' has subtype \'{}\'",PTR_DAT_04389350,
                           local_70,&local_78);
      uVar11 = 0x3a2;
LAB_0331ef24:
      *(char **)(lVar5 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
      ;
      *(undefined8 *)(lVar5 + 0x40) = uVar11;
      FUN_03326adc(local_1c8);
      uVar12 = 0x80040200;
      goto LAB_0331e890;
    }
    FUN_03326994(local_1c8,*(undefined8 *)(*param_1 + 0x28),2);
    lVar5 = FUN_03326338(local_1c8,"Array type \'{}\' has subtype \'{}\'",PTR_DAT_04389350,local_70,
                         &local_78);
    uVar11 = 0x3a2;
LAB_0331ee08:
    *(char **)(lVar5 + 0x38) =
         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
    ;
    *(undefined8 *)(lVar5 + 0x40) = uVar11;
    FUN_033269dc(local_1c8);
    uVar12 = 0x80040200;
    goto LAB_0331e890;
  }
  pbVar14 = local_70[0];
LAB_0331e8ec:
  auVar19 = FUN_032e31d4(pbVar14);
  puVar3 = PTR_PTR_0434a090;
  plVar8 = auVar19._0_8_;
  if (plVar8 != auVar19._8_8_) {
    puVar16 = (uint *)((long)param_2 + 0xc);
    do {
      local_78 = *plVar8;
      lVar17 = *(long *)(local_78 + 8);
      local_1d0 = lVar17;
      lVar5 = FUN_03318f34(param_3,&local_1d0);
      if ((lVar5 == 0) ||
         ((int)(*(uint *)(lVar5 + 4) |
               ((int)lVar5 - (int)*(undefined8 *)(param_3 + 0x10)) * 0x20000000) < 0)) {
        uVar13 = *(uint *)(param_2 + 1);
        if (0 < (int)uVar13) {
          uVar6 = 0;
          do {
            if (*(long *)(*param_2 + uVar6 * 8) == lVar17) {
              if (-1 < (int)uVar6) {
                lVar5 = *(long *)(*param_1 + 0x28);
                if ((lVar5 == 0) ||
                   ((*(byte *)(lVar5 + 0x50) < *(byte *)(*param_1 + 0x30) &&
                    (uVar6 = FUN_03327170(), (uVar6 & 1) == 0)))) goto LAB_0331ec24;
                uVar6 = FUN_03327170();
                if ((uVar6 & 1) == 0) {
                  FUN_03326994(local_1c8,*(undefined8 *)(*param_1 + 0x28),
                               *(undefined1 *)(*param_1 + 0x30));
                  local_1d8 = FUN_032e2c18(&local_78);
                  lVar5 = FUN_03326338(local_1c8,
                                       "Found loop in type \'{}\' with field \'{}\' of type \'{}\'."
                                       ,&DAT_0434fb78,local_70,&local_1d8,&local_1d0);
                  *(char **)(lVar5 + 0x38) =
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                  ;
                  *(undefined8 *)(lVar5 + 0x40) = 0x3b3;
                  *(undefined4 *)(lVar5 + 0x1c) = 0xa62e68e1;
                  goto LAB_0331ec1c;
                }
                FUN_03326a7c(local_1c8,*(undefined8 *)(*param_1 + 0x28),
                             *(undefined1 *)(*param_1 + 0x30));
                local_1e0 = FUN_032e2c18(&local_78);
                lVar5 = FUN_03326338(local_1c8,
                                     "Found loop in type \'{}\' with field \'{}\' of type \'{}\'.",
                                     &DAT_0434fb78,local_70,&local_1e0,&local_1d0);
                *(char **)(lVar5 + 0x38) =
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                ;
                *(undefined8 *)(lVar5 + 0x40) = 0x3b3;
                uVar12 = 0xa62e68e1;
                goto LAB_0331ef8c;
              }
              break;
            }
            uVar6 = uVar6 + 1;
          } while (uVar13 != uVar6);
        }
        uVar10 = *puVar16;
        uVar1 = uVar13 + 1;
        if ((int)uVar13 < (int)(uVar10 & 0x3fffffff)) {
          lVar5 = *param_2;
        }
        else {
          lVar5 = *param_2;
          if (0x3ffffffe < (int)uVar13) {
            FUN_032bd0a8(uVar1);
            uVar10 = *puVar16;
          }
          uVar10 = (uVar10 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar10) {
            uVar10 = 0x3fffffff;
          }
          uVar2 = uVar1;
          if ((int)uVar1 <= (int)uVar10) {
            uVar2 = uVar10;
          }
          lVar5 = FUN_032bd1d4(puVar3,uVar2,8,lVar5,uVar13,puVar16);
          uVar13 = *(uint *)(param_2 + 1);
          *param_2 = lVar5;
        }
        *(long *)(lVar5 + (long)(int)uVar13 * 8) = lVar17;
        *(uint *)(param_2 + 1) = uVar1;
        iVar4 = FUN_0331e824(param_1,param_2,param_3);
        if (iVar4 < 0) {
          uVar12 = 0x80040200;
          if ((*(byte *)(*(long *)(*param_1 + 0x28) + 0x50) < 2) &&
             (uVar6 = FUN_03327170(), (uVar6 & 1) == 0)) goto LAB_0331e890;
          uVar6 = FUN_03327170();
          if ((uVar6 & 1) == 0) {
            FUN_03326994(local_1c8,*(undefined8 *)(*param_1 + 0x28),2);
            local_1d8 = FUN_032e2c18(&local_78);
            lVar5 = FUN_03326338(local_1c8,"Type \'{}\' has field \'{}\' of type \'{}\'",
                                 &DAT_0434fb78,local_70,&local_1d8,&local_1d0);
            uVar11 = 0x3b8;
            goto LAB_0331ee08;
          }
          FUN_03326a7c(local_1c8,*(undefined8 *)(*param_1 + 0x28),2);
          local_1e0 = FUN_032e2c18(&local_78);
          lVar5 = FUN_03326338(local_1c8,"Type \'{}\' has field \'{}\' of type \'{}\'",&DAT_0434fb78
                               ,local_70,&local_1e0,&local_1d0);
          uVar11 = 0x3b8;
          goto LAB_0331ef24;
        }
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != auVar19._8_8_);
    pbVar14 = local_70[0];
  }
  if ((pbVar14[1] >> 6 & 1) != 0) {
    plVar8 = (long *)FUN_032e2008(pbVar14,0x4000);
    puVar3 = PTR_PTR_0434a090;
    if (plVar8 != (long *)0x0) {
      plVar8 = (long *)*plVar8;
      if (plVar8 != (long *)0x0) {
        lVar5 = *plVar8;
        if (lVar5 != 0) {
          plVar18 = plVar8 + 1;
          puVar16 = (uint *)((long)param_2 + 0xc);
          do {
            lVar15 = *plVar18;
            local_78 = lVar15;
            lVar17 = FUN_03318f34(param_3,&local_78);
            if ((lVar17 == 0) ||
               ((int)(*(uint *)(lVar17 + 4) |
                     ((int)lVar17 - (int)*(undefined8 *)(param_3 + 0x10)) * 0x20000000) < 0)) {
              uVar13 = *(uint *)(param_2 + 1);
              if (0 < (int)uVar13) {
                uVar6 = 0;
                do {
                  if (*(long *)(*param_2 + uVar6 * 8) == lVar15) {
                    if (-1 < (int)uVar6) {
                      lVar5 = *(long *)(*param_1 + 0x28);
                      if ((lVar5 == 0) ||
                         ((*(byte *)(lVar5 + 0x50) < *(byte *)(*param_1 + 0x30) &&
                          (uVar6 = FUN_03327170(), (uVar6 & 1) == 0)))) goto LAB_0331ec24;
                      uVar6 = FUN_03327170();
                      if ((uVar6 & 1) == 0) {
                        FUN_03326994(local_1c8,*(undefined8 *)(*param_1 + 0x28),
                                     *(undefined1 *)(*param_1 + 0x30));
                        lVar5 = FUN_03326338(local_1c8,
                                             "Found loop in type \'{}\' with interface type \'{}\'."
                                             ,PTR_DAT_04389350,local_70,&local_78);
                        *(char **)(lVar5 + 0x38) =
                             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                        ;
                        *(undefined8 *)(lVar5 + 0x40) = 0x3c9;
                        *(undefined4 *)(lVar5 + 0x1c) = 0xa62e68e2;
                        goto LAB_0331ec1c;
                      }
                      FUN_03326a7c(local_1c8,*(undefined8 *)(*param_1 + 0x28),
                                   *(undefined1 *)(*param_1 + 0x30));
                      lVar5 = FUN_03326338(local_1c8,
                                           "Found loop in type \'{}\' with interface type \'{}\'.",
                                           PTR_DAT_04389350,local_70,&local_78);
                      *(char **)(lVar5 + 0x38) =
                           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                      ;
                      *(undefined8 *)(lVar5 + 0x40) = 0x3c9;
                      uVar12 = 0xa62e68e2;
                      goto LAB_0331ef8c;
                    }
                    break;
                  }
                  uVar6 = uVar6 + 1;
                } while (uVar13 != uVar6);
              }
              uVar10 = *puVar16;
              uVar1 = uVar13 + 1;
              if ((int)uVar13 < (int)(uVar10 & 0x3fffffff)) {
                lVar17 = *param_2;
              }
              else {
                lVar17 = *param_2;
                if (0x3ffffffe < (int)uVar13) {
                  FUN_032bd0a8(uVar1);
                  uVar10 = *puVar16;
                }
                uVar10 = (uVar10 & 0x3fffffff) << 1;
                if (0x3ffffffe < uVar10) {
                  uVar10 = 0x3fffffff;
                }
                uVar2 = uVar1;
                if ((int)uVar1 <= (int)uVar10) {
                  uVar2 = uVar10;
                }
                lVar17 = FUN_032bd1d4(puVar3,uVar2,8,lVar17,uVar13,puVar16);
                uVar13 = *(uint *)(param_2 + 1);
                *param_2 = lVar17;
              }
              *(long *)(lVar17 + (long)(int)uVar13 * 8) = lVar15;
              *(uint *)(param_2 + 1) = uVar1;
              iVar4 = FUN_0331e824(param_1,param_2,param_3);
              if (iVar4 < 0) {
                uVar12 = 0x80040200;
                if ((*(byte *)(*(long *)(*param_1 + 0x28) + 0x50) < 2) &&
                   (uVar6 = FUN_03327170(), (uVar6 & 1) == 0)) goto LAB_0331e890;
                uVar6 = FUN_03327170();
                if ((uVar6 & 1) == 0) {
                  FUN_03326994(local_1c8,*(undefined8 *)(*param_1 + 0x28),2);
                  lVar5 = FUN_03326338(local_1c8,"Type \'{}\' has interface \'{}\'",PTR_DAT_04389350
                                       ,local_70,&local_78);
                  uVar11 = 0x3ce;
                  goto LAB_0331ee08;
                }
                FUN_03326a7c(local_1c8,*(undefined8 *)(*param_1 + 0x28),2);
                lVar5 = FUN_03326338(local_1c8,"Type \'{}\' has interface \'{}\'",PTR_DAT_04389350,
                                     local_70,&local_78);
                uVar11 = 0x3ce;
                goto LAB_0331ef24;
              }
            }
            plVar18 = plVar18 + 2;
          } while (plVar18 != plVar8 + lVar5 * 2 + 1);
          pbVar14 = local_70[0];
        }
      }
    }
  }
  lVar5 = *(long *)(pbVar14 + 8);
  local_78 = lVar5;
  if (lVar5 != 0) {
    lVar17 = FUN_03318f34(param_3,&local_78);
    puVar3 = PTR_PTR_0434a090;
    if ((lVar17 == 0) ||
       ((int)(*(uint *)(lVar17 + 4) |
             ((int)lVar17 - (int)*(undefined8 *)(param_3 + 0x10)) * 0x20000000) < 0)) {
      uVar13 = *(uint *)(param_2 + 1);
      if (0 < (int)uVar13) {
        uVar6 = 0;
        do {
          if (*(long *)(*param_2 + uVar6 * 8) == lVar5) {
            if (-1 < (int)uVar6) {
              lVar5 = *(long *)(*param_1 + 0x28);
              if ((lVar5 != 0) &&
                 ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar5 + 0x50) ||
                  (uVar6 = FUN_03327170(), (uVar6 & 1) != 0)))) {
                uVar6 = FUN_03327170();
                if ((uVar6 & 1) == 0) {
                  FUN_03326994(local_1c8,*(undefined8 *)(*param_1 + 0x28),
                               *(undefined1 *)(*param_1 + 0x30));
                  lVar5 = FUN_03326338(local_1c8,
                                       "Found loop in type \'{}\' with parent type \'{}\'.",
                                       PTR_DAT_04389350,local_70,&local_78);
                  *(char **)(lVar5 + 0x38) =
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                  ;
                  *(undefined8 *)(lVar5 + 0x40) = 0x3db;
                  *(undefined4 *)(lVar5 + 0x1c) = 0xa62e68e3;
LAB_0331ec1c:
                  FUN_033269dc(local_1c8);
                }
                else {
                  FUN_03326a7c(local_1c8,*(undefined8 *)(*param_1 + 0x28),
                               *(undefined1 *)(*param_1 + 0x30));
                  lVar5 = FUN_03326338(local_1c8,
                                       "Found loop in type \'{}\' with parent type \'{}\'.",
                                       PTR_DAT_04389350,local_70,&local_78);
                  *(char **)(lVar5 + 0x38) =
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                  ;
                  *(undefined8 *)(lVar5 + 0x40) = 0x3db;
                  uVar12 = 0xa62e68e3;
LAB_0331ef8c:
                  *(undefined4 *)(lVar5 + 0x1c) = uVar12;
LAB_0331ef90:
                  FUN_03326adc(local_1c8);
                }
              }
LAB_0331ec24:
              local_1c8[0] = 0;
              FUN_03319240(local_1c8);
              uVar12 = local_1c8[0];
              goto LAB_0331e890;
            }
            break;
          }
          uVar6 = uVar6 + 1;
        } while (uVar13 != uVar6);
      }
      puVar16 = (uint *)((long)param_2 + 0xc);
      uVar10 = *puVar16;
      uVar1 = uVar13 + 1;
      if ((int)uVar13 < (int)(uVar10 & 0x3fffffff)) {
        lVar17 = *param_2;
      }
      else {
        lVar17 = *param_2;
        if (0x3ffffffe < (int)uVar13) {
          FUN_032bd0a8(uVar1);
          uVar10 = *puVar16;
        }
        uVar10 = (uVar10 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar10) {
          uVar10 = 0x3fffffff;
        }
        uVar2 = uVar1;
        if ((int)uVar1 <= (int)uVar10) {
          uVar2 = uVar10;
        }
        lVar17 = FUN_032bd1d4(puVar3,uVar2,8,lVar17,(ulong)uVar13,puVar16);
        uVar13 = *(uint *)(param_2 + 1);
        *param_2 = lVar17;
      }
      *(long *)(lVar17 + (long)(int)uVar13 * 8) = lVar5;
      *(uint *)(param_2 + 1) = uVar1;
      iVar4 = FUN_0331e824(param_1,param_2,param_3);
      if (iVar4 < 0) {
        if (*(byte *)(*(long *)(*param_1 + 0x28) + 0x50) < 2) {
          uVar6 = FUN_03327170();
          uVar12 = 0x80040200;
          if ((uVar6 & 1) == 0) goto LAB_0331e890;
        }
        uVar6 = FUN_03327170();
        if ((uVar6 & 1) != 0) {
          FUN_03326a7c(local_1c8,*(undefined8 *)(*param_1 + 0x28),2);
          lVar5 = FUN_03326338(local_1c8,"Type \'{}\' has parent \'{}\'",PTR_DAT_04389350,local_70,
                               &local_78);
          uVar11 = 0x3e0;
          goto LAB_0331ef24;
        }
        FUN_03326994(local_1c8,*(undefined8 *)(*param_1 + 0x28),2);
        lVar5 = FUN_03326338(local_1c8,"Type \'{}\' has parent \'{}\'",PTR_DAT_04389350,local_70,
                             &local_78);
        uVar11 = 0x3e0;
        goto LAB_0331ee08;
      }
    }
  }
  FUN_032f6afc(param_3,local_70);
LAB_0331e88c:
  uVar12 = 0;
LAB_0331e890:
  *(int *)(param_2 + 1) = (int)param_2[1] + -1;
  return uVar12;
}


