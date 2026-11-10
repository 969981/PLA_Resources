/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0330fd24; name: FUN_0330fd24
 */


void FUN_0330fd24(undefined8 *param_1,long param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  uint uVar15;
  long *plVar16;
  ulong *puVar17;
  uint *puVar18;
  ulong uVar19;
  ulong *puVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  ulong *puVar23;
  long lVar24;
  ulong *puVar25;
  ulong local_230;
  undefined8 *local_220;
  ulong *local_218;
  ulong *local_210;
  undefined8 *local_208;
  ulong *local_200;
  ulong *local_1f8;
  long local_1f0;
  long local_1e8;
  ulong local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  char *local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  int local_84;
  ulong *local_80;
  ulong *local_78;
  ulong local_70;
  
  if (0 < (int)param_3) {
    uVar19 = 0;
    do {
      local_84 = 0;
      puVar21 = (undefined8 *)(param_2 + uVar19 * 0x30);
      puVar14 = puVar21 + 3;
      iVar8 = (**(code **)(*(long *)*param_1 + 0x20))((long *)*param_1,puVar21,puVar14,&local_84);
      if (iVar8 < 0) {
        if (DAT_0444ad18 < 2) {
          if (DAT_04350668 == '\0') goto LAB_033104b8;
        }
        else if (DAT_04350668 == '\0') {
          local_1c0 = 2;
          local_1d8 = 0;
          local_1c8 = &DAT_0444acc8;
          local_1b8 = FUN_032ba19c();
          uStack_1b0 = 0;
          local_1a8 = 0;
          local_1a0 = (char *)0x0;
          local_198 = 0;
          uStack_190 = 0;
          local_80 = *(ulong **)(param_2 + (uVar19 & 0xffffffff) * 0x30 + 8);
          FUN_03326338(&local_1d8,"Cloner callback failed on {}",PTR_DAT_04389348,&local_80);
          local_198 = 0x21f;
          local_1a0 = 
          "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
          FUN_033266e0(&local_1d8);
          FUN_032c7b9c(&uStack_1b0);
          goto LAB_033104b8;
        }
        FUN_03326a7c(&local_1d8,&DAT_0444acc8,2);
        local_1f0 = *(long *)(param_2 + (uVar19 & 0xffffffff) * 0x30 + 8);
        FUN_03326338(&local_1d8,"Cloner callback failed on {}",PTR_DAT_04389348,&local_1f0);
        local_198 = 0x21f;
        local_1a0 = 
        "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
        FUN_03326adc(&local_1d8);
LAB_033104b8:
        *(undefined4 *)(param_1 + 1) = 0x80040200;
        return;
      }
      if (local_84 == 1) {
        puVar23 = (ulong *)(param_2 + uVar19 * 0x30 + 8);
        puVar20 = (ulong *)*puVar23;
        if (((puVar20 < (ulong *)0x2) || (uVar12 = (uint)*puVar20, (uVar12 >> 0x11 & 1) == 0)) ||
           (uVar12 = (uVar12 & 0x1ffff) - (uVar12 >> 1 & 0x5555),
           uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333),
           (puVar20[(ulong)((uVar12 + (uVar12 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] &
           0x300000) == 0 ||
           (puVar20[(ulong)((uVar12 + (uVar12 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] &
           0x400000) == 0)) {
          uVar22 = *puVar21;
          local_230 = *(ulong *)(param_2 + uVar19 * 0x30 + 0x10);
          if ((local_230 & 1) != 0) {
            piVar2 = (int *)((local_230 & 0xfffffffffffffffe) + 8);
            do {
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar7) {
                *piVar2 = *piVar2 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
        }
        else {
          puVar20 = (ulong *)puVar20[1];
          if ((*puVar20 & 1) == 0) {
            puVar17 = (ulong *)puVar20[1];
            bVar4 = (byte)*puVar17;
            while ((bVar4 & 1) == 0) {
              puVar17 = (ulong *)puVar17[1];
              bVar4 = (byte)*puVar17;
            }
          }
          else {
            puVar17 = puVar20;
          }
          uVar22 = *puVar21;
          if ((puVar17[2] & 0x1f) != 6) {
            puVar20 = (ulong *)0x0;
          }
          local_230 = 0;
          if ((puVar20 != (ulong *)0x0) && (local_230 = FUN_032e3508(puVar20), (local_230 & 1) != 0)
             ) {
            piVar2 = (int *)((local_230 & 0xfffffffffffffffe) + 8);
            do {
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar7) {
                *piVar2 = *piVar2 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
        }
        lVar24 = param_2 + uVar19 * 0x30;
        local_1f0 = 0;
        local_1e8 = 0;
        local_1e0 = 0;
        puVar25 = (ulong *)(lVar24 + 0x20);
        puVar17 = (ulong *)(lVar24 + 0x28);
        iVar8 = (**(code **)(*(long *)(*puVar17 & 0xfffffffffffffffe) + 0x50))
                          ((long *)(*puVar17 & 0xfffffffffffffffe),*puVar14,*puVar25,&local_1f0);
        if (iVar8 < 0) {
          if (DAT_0444ad18 < 2) {
            if (DAT_04350668 != '\0') goto LAB_033104d4;
          }
          else {
            if (DAT_04350668 != '\0') {
LAB_033104d4:
              FUN_03326a7c(&local_1d8,&DAT_0444acc8,2);
              local_208 = (undefined8 *)*puVar25;
              local_80 = (ulong *)0x0;
              local_78 = (ulong *)0x0;
              local_70 = 0;
              (**(code **)(*(long *)(*puVar17 & 0xfffffffffffffffe) + 0x50))
                        ((long *)(*puVar17 & 0xfffffffffffffffe),*puVar14,local_208,&local_80);
              puVar20 = local_78;
              if ((local_70 & 1) != 0) {
                plVar9 = (long *)(local_70 & 0xfffffffffffffffe);
                plVar16 = plVar9 + 1;
                do {
                  lVar24 = *plVar16;
                  cVar5 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar7) {
                    *(int *)plVar16 = (int)lVar24 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if ((plVar9 != (long *)0x0) && ((int)lVar24 == 1)) {
                  (**(code **)(*plVar9 + 8))();
                }
              }
              local_210 = puVar20;
              FUN_03326338(&local_1d8,"Can\'t get var from {} pointing to {}",&DAT_0434f438,
                           &local_208,&local_210);
              local_198 = 0x224;
              goto LAB_033108ac;
            }
            local_1c0 = 2;
            local_1d8 = 0;
            local_1c8 = &DAT_0444acc8;
            local_1b8 = FUN_032ba19c();
            uStack_1b0 = 0;
            local_1a8 = 0;
            local_1a0 = (char *)0x0;
            local_198 = 0;
            uStack_190 = 0;
            local_1f8 = (ulong *)*puVar25;
            local_80 = (ulong *)0x0;
            local_78 = (ulong *)0x0;
            local_70 = 0;
            (**(code **)(*(long *)(*puVar17 & 0xfffffffffffffffe) + 0x50))
                      ((long *)(*puVar17 & 0xfffffffffffffffe),*puVar14,local_1f8,&local_80);
            puVar20 = local_78;
            if ((local_70 & 1) != 0) {
              plVar9 = (long *)(local_70 & 0xfffffffffffffffe);
              plVar16 = plVar9 + 1;
              do {
                lVar24 = *plVar16;
                cVar5 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                if (bVar7) {
                  *(int *)plVar16 = (int)lVar24 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if ((plVar9 != (long *)0x0) && ((int)lVar24 == 1)) {
                (**(code **)(*plVar9 + 8))();
              }
            }
            local_200 = puVar20;
            FUN_03326338(&local_1d8,"Can\'t get var from {} pointing to {}",&DAT_0434f438,&local_1f8
                         ,&local_200);
            local_198 = 0x224;
LAB_033107d0:
            local_1a0 = 
            "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
            ;
            FUN_033266e0(&local_1d8);
            FUN_032c7b9c(&uStack_1b0);
          }
LAB_033107f0:
          *(undefined4 *)(param_1 + 1) = 0x80040200;
LAB_03310078:
          bVar7 = true;
        }
        else {
          if (local_1f0 == 0) {
            local_1d0 = 0;
            local_1c8 = (undefined8 *)0x0;
            local_1d8 = 0;
            iVar8 = (**(code **)(*(long *)(local_230 & 0xfffffffffffffffe) + 0x48))
                              ((long *)(local_230 & 0xfffffffffffffffe),uVar22,puVar20,&local_1d8);
            if (((ulong)local_1c8 & 1) != 0) {
              plVar9 = (long *)((ulong)local_1c8 & 0xfffffffffffffffe);
              plVar16 = plVar9 + 1;
              do {
                lVar24 = *plVar16;
                cVar5 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                if (bVar7) {
                  *(int *)plVar16 = (int)lVar24 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if ((plVar9 != (long *)0x0) && ((int)lVar24 == 1)) {
                (**(code **)(*plVar9 + 8))();
              }
            }
            if (iVar8 < 0) {
              if (DAT_0444ad18 < 2) {
                if (DAT_04350668 == '\0') goto LAB_033107f0;
              }
              else if (DAT_04350668 == '\0') {
                local_1c0 = 2;
                local_1d8 = 0;
                local_1c8 = &DAT_0444acc8;
                local_1b8 = FUN_032ba19c();
                uStack_1b0 = 0;
                local_1a8 = 0;
                local_1a0 = (char *)0x0;
                local_198 = 0;
                uStack_190 = 0;
                puVar23 = (ulong *)*puVar23;
                if ((puVar23 < (ulong *)0x2) || (uVar12 = (uint)*puVar23, (uVar12 >> 0x11 & 1) == 0)
                   ) {
                  local_1f8 = (ulong *)0x0;
                }
                else {
                  uVar12 = (uVar12 & 0x1ffff) - (uVar12 >> 1 & 0x5555);
                  uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
                  local_1f8 = (ulong *)0x0;
                  if ((puVar23[(ulong)((uVar12 + (uVar12 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2
                              ] & 0x300000) != 0) {
                    local_1f8 = puVar23;
                  }
                }
                local_80 = puVar20;
                FUN_03326338(&local_1d8,"Cannot assign null to pointer of type \'{}\' at {}",
                             &DAT_0434f470,&local_80,&local_1f8);
                local_198 = 0x25b;
                goto LAB_033107d0;
              }
              FUN_03326a7c(&local_1d8,&DAT_0444acc8,2);
              puVar14 = (undefined8 *)*puVar23;
              if ((puVar14 < (undefined8 *)0x2) ||
                 (uVar12 = (uint)*puVar14, (uVar12 >> 0x11 & 1) == 0)) {
                local_208 = (undefined8 *)0x0;
              }
              else {
                uVar12 = (uVar12 & 0x1ffff) - (uVar12 >> 1 & 0x5555);
                uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
                local_208 = (undefined8 *)0x0;
                if ((puVar14[(ulong)((uVar12 + (uVar12 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2]
                    & 0x300000) != 0) {
                  local_208 = puVar14;
                }
              }
              local_200 = puVar20;
              FUN_03326338(&local_1d8,"Cannot assign null to pointer of type \'{}\' at {}",
                           &DAT_0434f470,&local_200,&local_208);
              local_198 = 0x25b;
LAB_033108ac:
              local_1a0 = 
              "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
              ;
              FUN_03326adc(&local_1d8);
              goto LAB_033107f0;
            }
          }
          else {
            local_80 = (ulong *)0x0;
            local_78 = (ulong *)0x0;
            local_70 = 0;
            iVar8 = FUN_0330dd2c(param_1 + 2,&local_1f0);
            lVar24 = (long)iVar8;
            if (*(int *)(param_1 + 3) == iVar8) {
              lVar10 = param_1[2];
              iVar1 = iVar8 + 1;
              if ((int)(*(uint *)((long)param_1 + 0x1c) & 0x3fffffff) <= iVar8) {
                lVar10 = FUN_0330de98(PTR_PTR_0434a080,iVar1);
                iVar8 = *(int *)(param_1 + 3);
                param_1[2] = lVar10;
              }
              plVar16 = (long *)(lVar10 + (long)iVar8 * 0x30);
              *plVar16 = local_1f0;
              plVar16[1] = local_1e8;
              plVar16[2] = local_1e0;
              if ((local_1e0 & 1) != 0) {
                piVar2 = (int *)((local_1e0 & 0xfffffffffffffffe) + 8);
                do {
                  cVar5 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar7) {
                    *piVar2 = *piVar2 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              lVar10 = lVar10 + (long)iVar8 * 0x30;
              *(undefined8 *)(lVar10 + 0x20) = 0;
              *(undefined8 *)(lVar10 + 0x28) = 0;
              *(undefined8 *)(lVar10 + 0x18) = 0;
              *(int *)(param_1 + 3) = iVar1;
              puVar17 = (ulong *)*puVar23;
              lVar10 = param_1[2];
              if (puVar17 != (ulong *)*puVar25) {
LAB_0330ff34:
                bVar7 = true;
                goto LAB_0330ff38;
              }
              uVar13 = 0;
              do {
                uVar12 = (uint)uVar13;
                uVar15 = (uint)*puVar17;
                if ((uVar15 >> 0x15 & 1) != 0) {
                  uVar12 = (uVar15 & 0x1fffff) - (uVar15 >> 1 & 0x55555);
                  uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
                  uVar13 = puVar17[(ulong)((uVar12 + (uVar12 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18)
                                   + 2] | uVar13;
                  uVar12 = (uint)uVar13;
                }
                if ((*puVar17 & 1) != 0) break;
                uVar12 = (uint)uVar13;
                puVar17 = (ulong *)puVar17[1];
              } while (puVar17 != (ulong *)0x0);
              if ((uVar12 >> 2 & 1) == 0) goto LAB_0330ff34;
              lVar10 = lVar10 + lVar24 * 0x30;
              *(long *)(lVar10 + 0x18) = local_1f0;
              *(long *)(lVar10 + 0x20) = local_1e8;
              puVar17 = (ulong *)(lVar10 + 0x28);
              if ((local_1e0 & 1) != 0) {
                piVar2 = (int *)((local_1e0 & 0xfffffffffffffffe) + 8);
                do {
                  cVar5 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar7) {
                    *piVar2 = *piVar2 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              if ((*puVar17 & 1) != 0) {
                plVar9 = (long *)(*puVar17 & 0xfffffffffffffffe);
                plVar16 = plVar9 + 1;
                do {
                  lVar24 = *plVar16;
                  cVar5 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar7) {
                    *(int *)plVar16 = (int)lVar24 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if ((plVar9 != (long *)0x0) && ((int)lVar24 == 1)) {
                  (**(code **)(*plVar9 + 8))();
                }
              }
              *puVar17 = local_1e0;
              local_80 = *(ulong **)(lVar10 + 0x18);
              local_78 = *(ulong **)(lVar10 + 0x20);
              if ((local_1e0 & 1) != 0) {
                piVar2 = (int *)((local_1e0 & 0xfffffffffffffffe) + 8);
                do {
                  cVar5 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar7) {
                    *piVar2 = *piVar2 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              if ((local_70 & 1) != 0) {
                plVar9 = (long *)(local_70 & 0xfffffffffffffffe);
                plVar16 = plVar9 + 1;
                do {
                  lVar24 = *plVar16;
                  cVar5 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar7) {
                    *(int *)plVar16 = (int)lVar24 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if ((plVar9 != (long *)0x0) && ((int)lVar24 == 1)) {
                  (**(code **)(*plVar9 + 8))();
                }
              }
              local_70 = *puVar17;
LAB_03310040:
              iVar8 = (**(code **)(*(long *)(local_230 & 0xfffffffffffffffe) + 0x48))
                                ((long *)(local_230 & 0xfffffffffffffffe),uVar22,puVar20,&local_80);
              if (iVar8 < 0) {
                if (DAT_0444ad18 < 2) {
                  if (DAT_04350668 != '\0') goto LAB_0331093c;
                }
                else if (DAT_04350668 == '\0') {
                  local_1c0 = 2;
                  local_1d8 = 0;
                  local_1c8 = &DAT_0444acc8;
                  local_1b8 = FUN_032ba19c();
                  uStack_1b0 = 0;
                  local_198 = 0;
                  uStack_190 = 0;
                  local_1a8 = 0;
                  local_1a0 = (char *)0x0;
                  local_1f8 = local_78;
                  puVar14 = (undefined8 *)*puVar23;
                  if ((puVar14 < (undefined8 *)0x2) ||
                     (uVar12 = (uint)*puVar14, (uVar12 >> 0x11 & 1) == 0)) {
                    local_208 = (undefined8 *)0x0;
                  }
                  else {
                    uVar12 = (uVar12 & 0x1ffff) - (uVar12 >> 1 & 0x5555);
                    uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
                    local_208 = (undefined8 *)0x0;
                    if ((puVar14[(ulong)((uVar12 + (uVar12 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
                                 2] & 0x300000) != 0) {
                      local_208 = puVar14;
                    }
                  }
                  local_200 = puVar20;
                  FUN_03326338(&local_1d8,
                               "Cannot assign instance of type \'{}\' to pointer of type \'{}\' at {}"
                               ,&DAT_0434f450,&local_1f8,&local_200,&local_208);
                  local_198 = 0x255;
                  local_1a0 = 
                  "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
                  ;
                  FUN_033266e0(&local_1d8);
                  FUN_032c7b9c(&uStack_1b0);
                }
                else {
LAB_0331093c:
                  FUN_03326a7c(&local_1d8,&DAT_0444acc8,2);
                  local_210 = local_78;
                  puVar14 = (undefined8 *)*puVar23;
                  if ((puVar14 < (undefined8 *)0x2) ||
                     (uVar12 = (uint)*puVar14, (uVar12 >> 0x11 & 1) == 0)) {
                    local_220 = (undefined8 *)0x0;
                  }
                  else {
                    uVar12 = (uVar12 & 0x1ffff) - (uVar12 >> 1 & 0x5555);
                    uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
                    local_220 = (undefined8 *)0x0;
                    if ((puVar14[(ulong)((uVar12 + (uVar12 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
                                 2] & 0x300000) != 0) {
                      local_220 = puVar14;
                    }
                  }
                  local_218 = puVar20;
                  FUN_03326338(&local_1d8,
                               "Cannot assign instance of type \'{}\' to pointer of type \'{}\' at {}"
                               ,&DAT_0434f450,&local_210,&local_218,&local_220);
                  local_198 = 0x255;
                  local_1a0 = 
                  "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
                  ;
                  FUN_03326adc(&local_1d8);
                }
                *(undefined4 *)(param_1 + 1) = 0x80040200;
                bVar7 = true;
              }
              else {
                bVar7 = false;
              }
            }
            else {
              bVar7 = false;
              lVar10 = param_1[2];
LAB_0330ff38:
              lVar10 = lVar10 + lVar24 * 0x30;
              local_80 = *(ulong **)(lVar10 + 0x18);
              local_78 = *(ulong **)(lVar10 + 0x20);
              uVar13 = *(ulong *)(lVar10 + 0x28);
              if ((uVar13 & 1) != 0) {
                piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar6) {
                    *piVar2 = *piVar2 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              if ((local_70 & 1) != 0) {
                plVar9 = (long *)(local_70 & 0xfffffffffffffffe);
                plVar16 = plVar9 + 1;
                do {
                  lVar24 = *plVar16;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar6) {
                    *(int *)plVar16 = (int)lVar24 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if ((plVar9 != (long *)0x0) && ((int)lVar24 == 1)) {
                  (**(code **)(*plVar9 + 8))();
                }
              }
              local_70 = *(ulong *)(lVar10 + 0x28);
              if (!bVar7) goto LAB_03310040;
              bVar7 = true;
              FUN_0330c35c(param_1,&local_80,&local_1f0,1);
              puVar25 = local_78;
              puVar17 = local_80;
              if (-1 < *(int *)(param_1 + 1)) {
                if ((local_78 != (ulong *)0x0) &&
                   (uVar13 = FUN_032e225c(local_78,&DAT_043568f0), (uVar13 & 1) != 0)) {
                  uVar13 = 0;
                  do {
                    uVar12 = (uint)uVar13;
                    uVar15 = (uint)*puVar25;
                    if ((uVar15 >> 0x15 & 1) != 0) {
                      uVar12 = (uVar15 & 0x1fffff) - (uVar15 >> 1 & 0x55555);
                      uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
                      uVar13 = puVar25[(ulong)((uVar12 + (uVar12 >> 4) & 0xf0f0f0f) * 0x1010101 >>
                                              0x18) + 2] | uVar13;
                      uVar12 = (uint)uVar13;
                    }
                    if ((*puVar25 & 1) != 0) break;
                    uVar12 = (uint)uVar13;
                    puVar25 = (ulong *)puVar25[1];
                  } while (puVar25 != (ulong *)0x0);
                  if (((uVar12 >> 3 & 1) == 0) && (puVar17 != (ulong *)0x0)) {
                    puVar18 = (uint *)((long)param_1 + 0x54);
                    uVar15 = *puVar18;
                    iVar8 = *(int *)(param_1 + 10);
                    uVar12 = iVar8 + 1;
                    if (iVar8 < (int)(uVar15 & 0x3fffffff)) {
                      lVar24 = param_1[9];
                    }
                    else {
                      uVar11 = param_1[9];
                      if (0x3ffffffe < iVar8) {
                        FUN_032bd0a8(uVar12);
                        uVar15 = *puVar18;
                      }
                      uVar15 = (uVar15 & 0x3fffffff) << 1;
                      if (0x3ffffffe < uVar15) {
                        uVar15 = 0x3fffffff;
                      }
                      uVar3 = uVar12;
                      if ((int)uVar12 <= (int)uVar15) {
                        uVar3 = uVar15;
                      }
                      lVar24 = FUN_032bd1d4(PTR_PTR_0434a080,uVar3,8,uVar11,iVar8,puVar18);
                      iVar8 = *(int *)(param_1 + 10);
                      param_1[9] = lVar24;
                    }
                    *(ulong **)(lVar24 + (long)iVar8 * 8) = puVar17;
                    *(uint *)(param_1 + 10) = uVar12;
                  }
                }
                goto LAB_03310040;
              }
            }
            if ((local_70 & 1) != 0) {
              plVar9 = (long *)(local_70 & 0xfffffffffffffffe);
              plVar16 = plVar9 + 1;
              do {
                lVar24 = *plVar16;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                if (bVar6) {
                  *(int *)plVar16 = (int)lVar24 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if ((plVar9 != (long *)0x0) && ((int)lVar24 == 1)) {
                (**(code **)(*plVar9 + 8))();
              }
            }
            if (bVar7) goto LAB_03310078;
          }
          bVar7 = false;
        }
        if ((local_1e0 & 1) != 0) {
          plVar9 = (long *)(local_1e0 & 0xfffffffffffffffe);
          plVar16 = plVar9 + 1;
          do {
            lVar24 = *plVar16;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar6) {
              *(int *)plVar16 = (int)lVar24 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((plVar9 != (long *)0x0) && ((int)lVar24 == 1)) {
            (**(code **)(*plVar9 + 8))();
          }
        }
        if ((local_230 & 1) != 0) {
          plVar9 = (long *)(local_230 & 0xfffffffffffffffe);
          plVar16 = plVar9 + 1;
          do {
            lVar24 = *plVar16;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar6) {
              *(int *)plVar16 = (int)lVar24 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((plVar9 != (long *)0x0) && ((int)lVar24 == 1)) {
            (**(code **)(*plVar9 + 8))();
            if (bVar7) {
              return;
            }
            goto LAB_033100d8;
          }
        }
        if (bVar7) {
          return;
        }
      }
LAB_033100d8:
      uVar19 = uVar19 + 1;
    } while (uVar19 != param_3);
  }
  return;
}


