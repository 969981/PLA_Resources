/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0331cd70; name: FUN_0331cd70
 */


undefined4 FUN_0331cd70(long *param_1,ulong *param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ulong *puVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  uint local_1e4;
  uint local_1e0;
  int local_1dc;
  undefined1 auStack_1d8 [340];
  uint local_84;
  ulong *local_80;
  uint local_74;
  undefined4 local_70 [4];
  
  local_70[0] = 0;
  uVar5 = FUN_032e35d8(param_2);
  if ((uVar5 & 0x1f) == 7) {
    uVar3 = FUN_032e2598(param_2);
    if ((uVar3 >> 9 & 1) == 0) {
      uVar5 = FUN_032e2598(param_2);
      bVar2 = (uVar5 & 3) == 0;
    }
    else {
      bVar2 = false;
    }
    puVar7 = param_2;
    do {
      uVar3 = (uint)*puVar7;
      if ((uVar3 >> 0x14 & 1) != 0) {
        uVar3 = (uVar3 & 0xfffff) - (uVar3 >> 1 & 0x55555);
        uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
        local_74 = (uint)(ushort)puVar7[(ulong)((uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >>
                                               0x18) + 2];
        goto LAB_0331ce44;
      }
      if ((*puVar7 & 1) != 0) {
        local_74 = 0;
        goto LAB_0331ce44;
      }
      puVar7 = (ulong *)puVar7[1];
    } while (puVar7 != (ulong *)0x0);
    local_74 = 0;
LAB_0331ce44:
    auVar11 = FUN_032e35f4(param_2);
    plVar9 = auVar11._0_8_;
    if (plVar9 != auVar11._8_8_) {
      uVar3 = 0;
      uVar10 = 0xffffffff;
      do {
        local_80 = (ulong *)*plVar9;
        local_84 = FUN_032e3f38(&local_80);
        if ((int)local_84 < 0) {
          FUN_03319240(local_70);
          lVar8 = *(long *)(*param_1 + 0x28);
          if ((lVar8 != 0) &&
             ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar8 + 0x50) ||
              (uVar5 = FUN_03327170(), (uVar5 & 1) != 0)))) {
            uVar5 = FUN_03327170();
            if ((uVar5 & 1) == 0) {
              FUN_03326994(auStack_1d8,*(undefined8 *)(*param_1 + 0x28),
                           *(undefined1 *)(*param_1 + 0x30));
              lVar8 = FUN_03326338(auStack_1d8,
                                   "Record type \'{}\' has field \'{}\' with negative offset.",
                                   &DAT_0434fa88,param_2,&local_80);
              *(char **)(lVar8 + 0x38) =
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
              ;
              *(undefined8 *)(lVar8 + 0x40) = 0x22e;
              FUN_033269dc(auStack_1d8);
            }
            else {
              FUN_03326a7c(auStack_1d8,*(undefined8 *)(*param_1 + 0x28),
                           *(undefined1 *)(*param_1 + 0x30));
              lVar8 = FUN_03326338(auStack_1d8,
                                   "Record type \'{}\' has field \'{}\' with negative offset.",
                                   &DAT_0434fa88,param_2,&local_80);
              *(char **)(lVar8 + 0x38) =
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
              ;
              *(undefined8 *)(lVar8 + 0x40) = 0x22e;
              FUN_03326adc(auStack_1d8);
            }
          }
          if (*(char *)*param_1 != '\0') break;
        }
        puVar7 = local_80;
        do {
          uVar4 = (uint)*puVar7;
          if ((uVar4 >> 0x14 & 1) != 0) {
            uVar6 = 0;
            if (puVar7 != (ulong *)0x0) {
              uVar4 = (uVar4 & 0xfffff) - (uVar4 >> 1 & 0x55555);
              uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
              uVar6 = (uint)(ushort)puVar7[(ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >>
                                                  0x18) + 2];
            }
            goto LAB_0331cee0;
          }
          if ((*puVar7 & 1) != 0) {
            uVar6 = 0;
            goto LAB_0331cee0;
          }
          puVar7 = (ulong *)puVar7[1];
        } while (puVar7 != (ulong *)0x0);
        uVar6 = 0;
LAB_0331cee0:
        local_1dc = uVar6 + local_84;
        if ((int)local_74 < local_1dc) {
          FUN_03319240(local_70);
          lVar8 = *(long *)(*param_1 + 0x28);
          if ((lVar8 != 0) &&
             ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar8 + 0x50) ||
              (uVar5 = FUN_03327170(), (uVar5 & 1) != 0)))) {
            uVar5 = FUN_03327170();
            if ((uVar5 & 1) == 0) {
              FUN_03326994(auStack_1d8,*(undefined8 *)(*param_1 + 0x28),
                           *(undefined1 *)(*param_1 + 0x30));
              puVar7 = local_80;
              do {
                uVar4 = (uint)*puVar7;
                if ((uVar4 >> 0x14 & 1) != 0) {
                  local_1e0 = 0;
                  if (puVar7 != (ulong *)0x0) {
                    uVar4 = (uVar4 & 0xfffff) - (uVar4 >> 1 & 0x55555);
                    uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
                    local_1e0 = (uint)(ushort)puVar7[(ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) *
                                                             0x1010101 >> 0x18) + 2];
                  }
                  goto LAB_0331d030;
                }
                if ((*puVar7 & 1) != 0) {
                  local_1e0 = 0;
                  goto LAB_0331d030;
                }
                puVar7 = (ulong *)puVar7[1];
              } while (puVar7 != (ulong *)0x0);
              local_1e0 = 0;
LAB_0331d030:
              lVar8 = FUN_03326338(auStack_1d8,
                                   "Record type \'{}\' has field \'{}\' with offset + size {} ({} + {}) greater than total type size {}."
                                   ,&DAT_0434faa0,param_2,&local_80,&local_1dc,&local_84,&local_1e0,
                                   &local_74);
              *(char **)(lVar8 + 0x38) =
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
              ;
              *(undefined8 *)(lVar8 + 0x40) = 0x230;
              FUN_033269dc(auStack_1d8);
            }
            else {
              FUN_03326a7c(auStack_1d8,*(undefined8 *)(*param_1 + 0x28),
                           *(undefined1 *)(*param_1 + 0x30));
              puVar7 = local_80;
              do {
                uVar4 = (uint)*puVar7;
                if ((uVar4 >> 0x14 & 1) != 0) {
                  local_1e4 = 0;
                  if (puVar7 != (ulong *)0x0) {
                    uVar4 = (uVar4 & 0xfffff) - (uVar4 >> 1 & 0x55555);
                    uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
                    local_1e4 = (uint)(ushort)puVar7[(ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) *
                                                             0x1010101 >> 0x18) + 2];
                  }
                  goto LAB_0331d338;
                }
                if ((*puVar7 & 1) != 0) {
                  local_1e4 = 0;
                  goto LAB_0331d338;
                }
                puVar7 = (ulong *)puVar7[1];
              } while (puVar7 != (ulong *)0x0);
              local_1e4 = 0;
LAB_0331d338:
              lVar8 = FUN_03326338(auStack_1d8,
                                   "Record type \'{}\' has field \'{}\' with offset + size {} ({} + {}) greater than total type size {}."
                                   ,&DAT_0434faa0,param_2,&local_80,&local_1dc,&local_84,&local_1e4,
                                   &local_74);
              *(char **)(lVar8 + 0x38) =
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
              ;
              *(undefined8 *)(lVar8 + 0x40) = 0x230;
              FUN_03326adc(auStack_1d8);
            }
          }
          if (*(char *)*param_1 == '\0') goto LAB_0331d0a0;
          bVar1 = true;
        }
        else {
LAB_0331d0a0:
          uVar4 = uVar3 + uVar10;
          if ((int)local_84 < (int)uVar4) {
            FUN_03319240(local_70);
            lVar8 = *(long *)(*param_1 + 0x28);
            if ((lVar8 != 0) &&
               ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar8 + 0x50) ||
                (uVar5 = FUN_03327170(), (uVar5 & 1) != 0)))) {
              uVar5 = FUN_03327170();
              if ((uVar5 & 1) == 0) {
                FUN_03326994(auStack_1d8,*(undefined8 *)(*param_1 + 0x28),
                             *(undefined1 *)(*param_1 + 0x30));
                local_1e0 = uVar4;
                lVar8 = FUN_03326338(auStack_1d8,
                                     "Record type \'{}\' has field \'{}\' with offset {} less than the previous one + size {}. This means that fields either overlap or are not sorted."
                                     ,&DAT_0434fad8,param_2,&local_80,&local_84,&local_1e0);
                *(char **)(lVar8 + 0x38) =
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                ;
                *(undefined8 *)(lVar8 + 0x40) = 0x233;
                FUN_033269dc(auStack_1d8);
              }
              else {
                FUN_03326a7c(auStack_1d8,*(undefined8 *)(*param_1 + 0x28),
                             *(undefined1 *)(*param_1 + 0x30));
                local_1e4 = uVar4;
                lVar8 = FUN_03326338(auStack_1d8,
                                     "Record type \'{}\' has field \'{}\' with offset {} less than the previous one + size {}. This means that fields either overlap or are not sorted."
                                     ,&DAT_0434fad8,param_2,&local_80,&local_84,&local_1e4);
                *(char **)(lVar8 + 0x38) =
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                ;
                *(undefined8 *)(lVar8 + 0x40) = 0x233;
                FUN_03326adc(auStack_1d8);
              }
            }
            if (*(char *)*param_1 != '\0') {
              bVar1 = true;
              goto LAB_0331d274;
            }
          }
          uVar10 = local_84;
          puVar7 = local_80;
          while( true ) {
            uVar3 = (uint)*puVar7;
            if ((uVar3 >> 0x14 & 1) != 0) break;
            if (((*puVar7 & 1) != 0) || (puVar7 = (ulong *)puVar7[1], puVar7 == (ulong *)0x0))
            goto LAB_0331d17c;
          }
          if (puVar7 != (ulong *)0x0) {
            uVar3 = (uVar3 & 0xfffff) - (uVar3 >> 1 & 0x55555);
            uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
            uVar3 = (uint)(ushort)puVar7[(ulong)((uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >>
                                                0x18) + 2];
            goto joined_r0x0331d26c;
          }
LAB_0331d17c:
          uVar3 = 0;
joined_r0x0331d26c:
          if ((bVar2) && (uVar4 = FUN_032e2598(), (uVar4 >> 9 & 1) != 0)) {
            FUN_03319240(local_70);
            lVar8 = *(long *)(*param_1 + 0x28);
            if ((lVar8 != 0) &&
               ((*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar8 + 0x50) ||
                (uVar5 = FUN_03327170(), (uVar5 & 1) != 0)))) {
              uVar5 = FUN_03327170();
              if ((uVar5 & 1) == 0) {
                FUN_03326994(auStack_1d8,*(undefined8 *)(*param_1 + 0x28),
                             *(undefined1 *)(*param_1 + 0x30));
                lVar8 = FUN_03326338(auStack_1d8,
                                     "Record type \'{}\' is retargetable, but it has field \'{}\' which is not retargetable. The record should be non-retargetable"
                                     ,&DAT_0434fa88,param_2,&local_80);
                *(char **)(lVar8 + 0x38) =
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                ;
                *(undefined8 *)(lVar8 + 0x40) = 0x239;
                FUN_033269dc(auStack_1d8);
              }
              else {
                FUN_03326a7c(auStack_1d8,*(undefined8 *)(*param_1 + 0x28),
                             *(undefined1 *)(*param_1 + 0x30));
                lVar8 = FUN_03326338(auStack_1d8,
                                     "Record type \'{}\' is retargetable, but it has field \'{}\' which is not retargetable. The record should be non-retargetable"
                                     ,&DAT_0434fa88,param_2,&local_80);
                *(char **)(lVar8 + 0x38) =
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                ;
                *(undefined8 *)(lVar8 + 0x40) = 0x239;
                FUN_03326adc(auStack_1d8);
              }
            }
            if (*(char *)*param_1 != '\0') {
              bVar1 = true;
              goto LAB_0331d274;
            }
          }
          bVar1 = false;
        }
LAB_0331d274:
        plVar9 = plVar9 + 1;
        if ((plVar9 == auVar11._8_8_) || (bVar1)) break;
      } while( true );
    }
  }
  else {
    local_70[0] = 0;
  }
  return local_70[0];
}


