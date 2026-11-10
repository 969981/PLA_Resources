/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0331ae40; name: FUN_0331ae40
 */


undefined4 FUN_0331ae40(long *param_1,long *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  ushort uVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8 [84];
  undefined8 local_78;
  undefined8 local_70 [2];
  
  lVar7 = FUN_032e21f4(*(undefined8 *)(*param_2 + (long)(int)param_2[1] * 8 + -8));
  puVar5 = PTR_PTR_0434a090;
  uVar4 = *(ushort *)(lVar7 + 8);
  if ((ulong)uVar4 != 0) {
    plVar13 = (long *)(lVar7 + 0x10);
    puVar2 = (uint *)((long)param_2 + 0xc);
    do {
      if (*(char *)plVar13[1] == 't') {
        lVar11 = *plVar13;
        lVar8 = FUN_032e21f4(lVar11);
        if (lVar8 != 0) {
          uVar12 = *(uint *)(param_2 + 1);
          if (0 < (int)uVar12) {
            uVar10 = 0;
            do {
              if (*(long *)(*param_2 + uVar10 * 8) == lVar11) {
                if (-1 < (int)uVar10) {
                  lVar7 = *(long *)(*param_1 + 0x28);
                  if ((lVar7 != 0) &&
                     ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar7 + 0x50) ||
                      (uVar10 = FUN_03327170(), (uVar10 & 1) != 0)))) {
                    uVar10 = FUN_03327170();
                    if ((uVar10 & 1) == 0) {
                      FUN_03326994(local_1c8,*(undefined8 *)(*param_1 + 0x28),
                                   *(undefined1 *)(*param_1 + 0x30));
                      local_70[0] = FUN_032e239c(*(undefined8 *)
                                                  (*param_2 + (long)(int)param_2[1] * 8 + -8));
                      local_78 = FUN_032e239c(lVar11);
                      lVar7 = FUN_03326338(local_1c8,
                                           "Found loop in type \'{}\' with type template parameter \'{}\'."
                                           ,PTR_DAT_04389358,local_70,&local_78);
                      *(undefined4 *)(lVar7 + 0x1c) = 0xa62e68e4;
                      *(char **)(lVar7 + 0x38) =
                           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                      ;
                      *(undefined8 *)(lVar7 + 0x40) = 0x3fa;
                      FUN_033269dc(local_1c8);
                    }
                    else {
                      FUN_03326a7c(local_1c8,*(undefined8 *)(*param_1 + 0x28),
                                   *(undefined1 *)(*param_1 + 0x30));
                      local_1d0 = FUN_032e239c(*(undefined8 *)
                                                (*param_2 + (long)(int)param_2[1] * 8 + -8));
                      local_1d8 = FUN_032e239c(lVar11);
                      lVar7 = FUN_03326338(local_1c8,
                                           "Found loop in type \'{}\' with type template parameter \'{}\'."
                                           ,PTR_DAT_04389358,&local_1d0,&local_1d8);
                      *(undefined4 *)(lVar7 + 0x1c) = 0xa62e68e4;
                      *(char **)(lVar7 + 0x38) =
                           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                      ;
                      *(undefined8 *)(lVar7 + 0x40) = 0x3fa;
                      FUN_03326adc(local_1c8);
                    }
                  }
                  local_1c8[0] = 0;
                  FUN_03319240(local_1c8);
                  goto LAB_0331af80;
                }
                break;
              }
              uVar10 = uVar10 + 1;
            } while (uVar12 != uVar10);
          }
          uVar9 = *puVar2;
          uVar1 = uVar12 + 1;
          if ((int)uVar12 < (int)(uVar9 & 0x3fffffff)) {
            lVar8 = *param_2;
          }
          else {
            lVar8 = *param_2;
            if (0x3ffffffe < (int)uVar12) {
              FUN_032bd0a8(uVar1);
              uVar9 = *puVar2;
            }
            uVar9 = (uVar9 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar9) {
              uVar9 = 0x3fffffff;
            }
            uVar3 = uVar1;
            if ((int)uVar1 <= (int)uVar9) {
              uVar3 = uVar9;
            }
            lVar8 = FUN_032bd1d4(puVar5,uVar3,8,lVar8,uVar12,puVar2);
            uVar12 = *(uint *)(param_2 + 1);
            *param_2 = lVar8;
          }
          *(long *)(lVar8 + (long)(int)uVar12 * 8) = lVar11;
          *(uint *)(param_2 + 1) = uVar1;
          iVar6 = FUN_0331ae40(param_1,param_2);
          if (iVar6 < 0) {
            local_1c8[0] = 0x80040200;
            if ((1 < *(byte *)(*(long *)(*param_1 + 0x28) + 0x50)) ||
               (uVar10 = FUN_03327170(), (uVar10 & 1) != 0)) {
              uVar10 = FUN_03327170();
              if ((uVar10 & 1) == 0) {
                FUN_03326994(local_1c8,*(undefined8 *)(*param_1 + 0x28),2);
                local_70[0] = FUN_032e239c(*(undefined8 *)
                                            (*param_2 + (long)(int)param_2[1] * 8 + -8));
                local_78 = FUN_032e239c(lVar11);
                lVar7 = FUN_03326338(local_1c8,"Type \'{}\' has argument \'{}\'",PTR_DAT_04389358,
                                     local_70,&local_78);
                *(char **)(lVar7 + 0x38) =
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                ;
                *(undefined8 *)(lVar7 + 0x40) = 0x3ff;
                FUN_033269dc(local_1c8);
              }
              else {
                FUN_03326a7c(local_1c8,*(undefined8 *)(*param_1 + 0x28),2);
                local_1d0 = FUN_032e239c(*(undefined8 *)(*param_2 + (long)(int)param_2[1] * 8 + -8))
                ;
                local_1d8 = FUN_032e239c(lVar11);
                lVar7 = FUN_03326338(local_1c8,"Type \'{}\' has argument \'{}\'",PTR_DAT_04389358,
                                     &local_1d0,&local_1d8);
                *(char **)(lVar7 + 0x38) =
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                ;
                *(undefined8 *)(lVar7 + 0x40) = 0x3ff;
                FUN_03326adc(local_1c8);
              }
            }
            goto LAB_0331af80;
          }
        }
      }
      plVar13 = plVar13 + 2;
    } while (plVar13 != (long *)(lVar7 + (ulong)uVar4 * 0x10 + 0x10));
  }
  local_1c8[0] = 0;
LAB_0331af80:
  *(int *)(param_2 + 1) = (int)param_2[1] + -1;
  return local_1c8[0];
}


