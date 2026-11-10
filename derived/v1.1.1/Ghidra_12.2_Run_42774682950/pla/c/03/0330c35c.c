/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0330c35c; name: FUN_0330c35c
 */


void FUN_0330c35c(undefined8 *param_1,ulong *param_2,ulong *param_3,int param_4)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long lVar8;
  int iVar9;
  char *pcVar10;
  long *plVar11;
  ulong *puVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  ulong *puVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 local_1d8 [16];
  undefined8 local_1c8 [2];
  undefined8 *local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  char *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_78 [16];
  ulong local_68;
  ulong *local_60;
  ulong local_58;
  
  uVar19 = *param_2;
  uVar20 = param_2[2];
  if ((uVar20 & 1) != 0) {
    piVar3 = (int *)((uVar20 & 0xfffffffffffffffe) + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = *piVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_68 = *param_3;
  local_60 = (ulong *)param_3[1];
  local_58 = param_3[2];
  if ((local_58 & 1) != 0) {
    piVar3 = (int *)((local_58 & 0xfffffffffffffffe) + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = *piVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  iVar9 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,param_2,&local_68);
  if (iVar9 < 0) {
    if ((local_68 == 0) || (local_60 == (ulong *)0x0)) {
LAB_0330c650:
      auVar7._8_8_ = local_1d8._8_8_;
      auVar7._0_8_ = local_1d8._0_8_;
      auVar6._8_8_ = local_78._8_8_;
      auVar6._0_8_ = local_78._0_8_;
      uVar15 = 0;
      puVar16 = local_60;
      do {
        uVar17 = (uint)uVar15;
        uVar14 = (uint)*puVar16;
        if ((uVar14 >> 0x15 & 1) != 0) {
          uVar17 = (uVar14 & 0x1fffff) - (uVar14 >> 1 & 0x55555);
          uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
          uVar15 = puVar16[(ulong)((uVar17 + (uVar17 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] |
                   uVar15;
          uVar17 = (uint)uVar15;
        }
        if ((*puVar16 & 1) != 0) break;
        uVar17 = (uint)uVar15;
        puVar16 = (ulong *)puVar16[1];
      } while (puVar16 != (ulong *)0x0);
      if ((uVar17 >> 0xb & 1) == 0) {
        if (*(char *)((long)param_1 + 0xc) == '\0') {
          if (DAT_0444ad18 < 2) {
            local_78 = auVar6;
            local_1d8 = auVar7;
            if (DAT_04350668 != '\0') goto LAB_0330cc94;
          }
          else {
            if (DAT_04350668 != '\0') {
LAB_0330cc94:
              FUN_03326a7c(local_1c8,&DAT_0444acc8,2);
              local_1d8 = FUN_032e2464(local_60);
              FUN_03326338(local_1c8,
                           "Cannot allocate/construct instance of type \'{}\' (unregistered type?)",
                           PTR_DAT_04389248,local_1d8);
              local_188 = 0x27c;
              goto LAB_0330cd2c;
            }
            local_1c8[0] = 0;
            local_1b8 = &DAT_0444acc8;
            uStack_1b0 = 2;
            local_1a8 = FUN_032ba19c();
            uStack_1a0 = 0;
            local_198 = 0;
            local_190 = (char *)0x0;
            local_188 = 0;
            uStack_180 = 0;
            local_78 = FUN_032e2464(local_60);
            FUN_03326338(local_1c8,
                         "Cannot allocate/construct instance of type \'{}\' (unregistered type?)",
                         PTR_DAT_04389248,local_78);
            local_188 = 0x27c;
LAB_0330cbcc:
            local_190 = 
            "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
            ;
            FUN_033266e0(local_1c8);
            FUN_032c7b9c(&uStack_1a0);
          }
          goto LAB_0330cbe0;
        }
      }
      else if (*(char *)((long)param_1 + 0xc) == '\0') {
        if (DAT_0444ad18 < 2) {
          if (DAT_04350668 == '\0') goto LAB_0330cbe0;
        }
        else if (DAT_04350668 == '\0') {
          local_1c8[0] = 0;
          local_1b8 = &DAT_0444acc8;
          uStack_1b0 = 2;
          local_1a8 = FUN_032ba19c();
          uStack_1a0 = 0;
          local_198 = 0;
          local_190 = (char *)0x0;
          local_188 = 0;
          uStack_180 = 0;
          local_78 = FUN_032e2464(local_60);
          FUN_03326338(local_1c8,
                       "Cannot allocate/construct instance of foreign type \'{}\'. This is likely due to the type being defined in a missing (not loaded) DLL or WinMD file. Check that DLLs and WinMD files are present on disk and correctly loaded."
                       ,PTR_DAT_04389248,local_78);
          local_188 = 0x278;
          goto LAB_0330cbcc;
        }
        FUN_03326a7c(local_1c8,&DAT_0444acc8,2);
        local_1d8 = FUN_032e2464(local_60);
        FUN_03326338(local_1c8,
                     "Cannot allocate/construct instance of foreign type \'{}\'. This is likely due to the type being defined in a missing (not loaded) DLL or WinMD file. Check that DLLs and WinMD files are present on disk and correctly loaded."
                     ,PTR_DAT_04389248,local_1d8);
        local_188 = 0x278;
        goto LAB_0330cd2c;
      }
      if (DAT_0444ad18 < 4) {
        if (DAT_04350668 != '\0') goto LAB_0330ce84;
      }
      else {
        if (DAT_04350668 != '\0') {
LAB_0330ce84:
          FUN_03326a7c(local_1c8,&DAT_0444acc8,4);
          local_1d8 = FUN_032e2464(local_60);
          FUN_03326338(local_1c8,"Skipping instance of {} (callback returned failure)",
                       PTR_DAT_04389248,local_1d8);
          local_188 = 0x27f;
          goto LAB_0330cecc;
        }
        local_1c8[0] = 0;
        local_1b8 = &DAT_0444acc8;
        uStack_1b0 = 4;
        local_1a8 = FUN_032ba19c();
        uStack_1a0 = 0;
        local_198 = 0;
        local_190 = (char *)0x0;
        local_188 = 0;
        uStack_180 = 0;
        local_78 = FUN_032e2464(local_60);
        FUN_03326338(local_1c8,"Skipping instance of {} (callback returned failure)",
                     PTR_DAT_04389248,local_78);
        local_190 = 
        "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
        local_188 = 0x27f;
        FUN_033266e0(local_1c8);
LAB_0330c960:
        FUN_032c7b9c(&uStack_1a0);
      }
    }
    else {
      uVar18 = FUN_032dda60(local_60,&DAT_0435a6e8);
      uVar15 = local_68;
      if (((uVar18 & 1) == 0) || (local_68 == 0)) goto LAB_0330c650;
      if (*(char *)((long)param_1 + 0xc) == '\0') {
        if (DAT_0444ad18 < 2) {
          if (DAT_04350668 != '\0') goto LAB_0330d054;
          goto LAB_0330cbe0;
        }
        if (DAT_04350668 == '\0') {
          local_1c8[0] = 0;
          local_1b8 = &DAT_0444acc8;
          uStack_1b0 = 2;
          local_1a8 = FUN_032ba19c();
          uStack_1a0 = 0;
          local_198 = 0;
          local_190 = (char *)0x0;
          local_188 = 0;
          uStack_180 = 0;
          local_78 = FUN_032e2464(uVar15);
          FUN_03326338(local_1c8,"Cannot find native type for {} (unregistered type?)",
                       PTR_DAT_04389248,local_78);
          local_188 = 0x26d;
          goto LAB_0330cbcc;
        }
LAB_0330d054:
        FUN_03326a7c(local_1c8,&DAT_0444acc8,2);
        local_1d8 = FUN_032e2464(uVar15);
        FUN_03326338(local_1c8,"Cannot find native type for {} (unregistered type?)",
                     PTR_DAT_04389248,local_1d8);
        local_188 = 0x26d;
LAB_0330cd2c:
        local_190 = 
        "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
        FUN_03326adc(local_1c8);
LAB_0330cbe0:
        *(undefined4 *)(param_1 + 1) = 0x80040200;
        goto joined_r0x0330c864;
      }
      if (DAT_0444ad18 < 4) {
        if (DAT_04350668 != '\0') goto LAB_0330d004;
        goto LAB_0330c9c4;
      }
      if (DAT_04350668 == '\0') {
        local_1c8[0] = 0;
        local_1b8 = &DAT_0444acc8;
        uStack_1b0 = 4;
        local_1a8 = FUN_032ba19c();
        uStack_1a0 = 0;
        local_198 = 0;
        local_190 = (char *)0x0;
        local_188 = 0;
        uStack_180 = 0;
        local_78 = FUN_032e2464(uVar15);
        FUN_03326338(local_1c8,"Skipping type {} (callback returned failure)",PTR_DAT_04389248,
                     local_78);
        local_190 = 
        "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
        local_188 = 0x26f;
        FUN_033266e0(local_1c8);
        goto LAB_0330c960;
      }
LAB_0330d004:
      FUN_03326a7c(local_1c8,&DAT_0444acc8,4);
      local_1d8 = FUN_032e2464(uVar15);
      FUN_03326338(local_1c8,"Skipping type {} (callback returned failure)",PTR_DAT_04389248,
                   local_1d8);
      local_188 = 0x26f;
LAB_0330cecc:
      local_190 = 
      "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
      FUN_03326adc(local_1c8);
    }
LAB_0330c9c4:
    *param_2 = 0;
    param_2[1] = 0;
    uVar15 = param_2[2];
    param_2[2] = 0;
    if ((uVar15 & 1) != 0) {
      plVar11 = (long *)(uVar15 & 0xfffffffffffffffe);
      plVar2 = plVar11 + 1;
      do {
        lVar13 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = (int)lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((plVar11 != (long *)0x0) && ((int)lVar13 == 1)) {
        (**(code **)(*plVar11 + 8))();
      }
    }
  }
  if (uVar19 == 0) {
    if (local_68 != 0) {
      iVar9 = FUN_0330dd2c(param_1 + 2,&local_68);
      if (*(int *)(param_1 + 3) == iVar9) {
        lVar13 = param_1[2];
        iVar1 = iVar9 + 1;
        if ((int)(*(uint *)((long)param_1 + 0x1c) & 0x3fffffff) <= iVar9) {
          lVar13 = FUN_0330de98(PTR_PTR_0434a080,iVar1);
          iVar9 = *(int *)(param_1 + 3);
          param_1[2] = lVar13;
        }
        puVar16 = (ulong *)(lVar13 + (long)iVar9 * 0x30);
        *puVar16 = local_68;
        puVar16[1] = (ulong)local_60;
        puVar16[2] = local_58;
        if ((local_58 & 1) != 0) {
          piVar3 = (int *)((local_58 & 0xfffffffffffffffe) + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar5) {
              *piVar3 = *piVar3 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        lVar13 = lVar13 + (long)iVar9 * 0x30;
        uVar19 = param_2[1];
        *(ulong *)(lVar13 + 0x18) = *param_2;
        *(ulong *)(lVar13 + 0x20) = uVar19;
        uVar19 = param_2[2];
        *(ulong *)(lVar13 + 0x28) = uVar19;
        if ((uVar19 & 1) != 0) {
          piVar3 = (int *)((uVar19 & 0xfffffffffffffffe) + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar5) {
              *piVar3 = *piVar3 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        *(int *)(param_1 + 3) = iVar1;
      }
      else {
        lVar13 = param_1[2] + (long)iVar9 * 0x30;
        uVar19 = param_2[1];
        *(ulong *)(lVar13 + 0x18) = *param_2;
        *(ulong *)(lVar13 + 0x20) = uVar19;
        if ((param_2[2] & 1) != 0) {
          piVar3 = (int *)((param_2[2] & 0xfffffffffffffffe) + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar5) {
              *piVar3 = *piVar3 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uVar19 = *(ulong *)(lVar13 + 0x28);
        if ((uVar19 & 1) != 0) {
          plVar11 = (long *)(uVar19 & 0xfffffffffffffffe);
          plVar2 = plVar11 + 1;
          do {
            lVar8 = *plVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = (int)lVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((plVar11 != (long *)0x0) && ((int)lVar8 == 1)) {
            (**(code **)(*plVar11 + 8))();
          }
        }
        *(ulong *)(lVar13 + 0x28) = param_2[2];
      }
    }
    if (local_68 != *param_3) {
      iVar9 = FUN_0330dd2c(param_1 + 2,param_3);
      if (*(int *)(param_1 + 3) == iVar9) {
        lVar13 = param_1[2];
        iVar1 = iVar9 + 1;
        if ((int)(*(uint *)((long)param_1 + 0x1c) & 0x3fffffff) <= iVar9) {
          lVar13 = FUN_0330de98(PTR_PTR_0434a080,iVar1);
          iVar9 = *(int *)(param_1 + 3);
          param_1[2] = lVar13;
        }
        puVar16 = (ulong *)(lVar13 + (long)iVar9 * 0x30);
        uVar19 = param_3[1];
        *puVar16 = *param_3;
        puVar16[1] = uVar19;
        uVar19 = param_3[2];
        puVar16[2] = uVar19;
        if ((uVar19 & 1) != 0) {
          piVar3 = (int *)((uVar19 & 0xfffffffffffffffe) + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar5) {
              *piVar3 = *piVar3 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        lVar13 = lVar13 + (long)iVar9 * 0x30;
        uVar19 = param_2[1];
        *(ulong *)(lVar13 + 0x18) = *param_2;
        *(ulong *)(lVar13 + 0x20) = uVar19;
        uVar19 = param_2[2];
        *(ulong *)(lVar13 + 0x28) = uVar19;
        if ((uVar19 & 1) != 0) {
          piVar3 = (int *)((uVar19 & 0xfffffffffffffffe) + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar5) {
              *piVar3 = *piVar3 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        *(int *)(param_1 + 3) = iVar1;
      }
      else {
        lVar13 = param_1[2] + (long)iVar9 * 0x30;
        uVar19 = param_2[1];
        *(ulong *)(lVar13 + 0x18) = *param_2;
        *(ulong *)(lVar13 + 0x20) = uVar19;
        if ((param_2[2] & 1) != 0) {
          piVar3 = (int *)((param_2[2] & 0xfffffffffffffffe) + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar5) {
              *piVar3 = *piVar3 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uVar19 = *(ulong *)(lVar13 + 0x28);
        if ((uVar19 & 1) != 0) {
          plVar11 = (long *)(uVar19 & 0xfffffffffffffffe);
          plVar2 = plVar11 + 1;
          do {
            lVar8 = *plVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = (int)lVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((plVar11 != (long *)0x0) && ((int)lVar8 == 1)) {
            (**(code **)(*plVar11 + 8))();
          }
        }
        *(ulong *)(lVar13 + 0x28) = param_2[2];
      }
    }
  }
  if ((local_68 == 0) || (*param_2 == 0)) goto joined_r0x0330c864;
  if (local_60 != (ulong *)0x0) {
    uVar19 = FUN_032dda60(local_60,&DAT_0435a6e8);
    if (((uVar19 & 1) != 0) && (local_68 != 0)) goto joined_r0x0330c864;
  }
  uVar19 = *param_2;
  if (uVar19 == local_68) {
    if ((ulong *)param_2[1] == local_60) goto joined_r0x0330c864;
    uVar19 = FUN_032e37ec();
    if ((uVar19 & 1) != 0) goto joined_r0x0330c864;
    if (DAT_0444ad18 < 2) {
      if (DAT_04350668 == '\0') goto LAB_0330c854;
    }
    else if (DAT_04350668 == '\0') {
      local_1c8[0] = 0;
      local_1b8 = &DAT_0444acc8;
      uStack_1b0 = 2;
      local_1a8 = FUN_032ba19c();
      uStack_1a0 = 0;
      local_198 = 0;
      local_190 = (char *)0x0;
      local_188 = 0;
      uStack_180 = 0;
      FUN_03326338(local_1c8,"Cannot clone on self with a different type",PTR_DAT_04372528);
      local_188 = 0x29c;
      goto LAB_0330c840;
    }
    FUN_03326a7c(local_1c8,&DAT_0444acc8,2);
    FUN_03326338(local_1c8,"Cannot clone on self with a different type",PTR_DAT_04372528);
    local_188 = 0x29c;
LAB_0330c9a4:
    local_190 = 
    "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
    FUN_03326adc(local_1c8);
  }
  else {
    puVar16 = local_60;
    do {
      uVar17 = (uint)*puVar16;
      if ((uVar17 >> 0x14 & 1) != 0) {
        uVar15 = 0;
        if (puVar16 != (ulong *)0x0) {
          uVar17 = (uVar17 & 0xfffff) - (uVar17 >> 1 & 0x55555);
          uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
          uVar15 = (ulong)(ushort)puVar16[(ulong)((uVar17 + (uVar17 >> 4) & 0xf0f0f0f) * 0x1010101
                                                 >> 0x18) + 2];
        }
        goto LAB_0330c464;
      }
      if ((*puVar16 & 1) != 0) {
        uVar15 = 0;
        goto LAB_0330c464;
      }
      puVar16 = (ulong *)puVar16[1];
    } while (puVar16 != (ulong *)0x0);
    uVar15 = 0;
LAB_0330c464:
    puVar12 = (ulong *)param_2[1];
    puVar16 = puVar12;
    do {
      uVar17 = (uint)*puVar16;
      if ((uVar17 >> 0x14 & 1) != 0) {
        uVar18 = 0;
        if (puVar16 != (ulong *)0x0) {
          uVar17 = (uVar17 & 0xfffff) - (uVar17 >> 1 & 0x55555);
          uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
          uVar18 = (ulong)(ushort)puVar16[(ulong)((uVar17 + (uVar17 >> 4) & 0xf0f0f0f) * 0x1010101
                                                 >> 0x18) + 2];
        }
        goto joined_r0x0330c620;
      }
      if ((*puVar16 & 1) != 0) {
        uVar18 = 0;
        goto joined_r0x0330c620;
      }
      puVar16 = (ulong *)puVar16[1];
    } while (puVar16 != (ulong *)0x0);
    uVar18 = 0;
joined_r0x0330c620:
    if ((uVar15 + local_68 <= uVar19) || (uVar18 + uVar19 <= local_68)) {
      if (param_4 == 1) {
        uVar15 = 0;
        puVar16 = puVar12;
        do {
          uVar17 = (uint)uVar15;
          uVar14 = (uint)*puVar16;
          if ((uVar14 >> 0x15 & 1) != 0) {
            uVar17 = (uVar14 & 0x1fffff) - (uVar14 >> 1 & 0x55555);
            uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
            uVar15 = puVar16[(ulong)((uVar17 + (uVar17 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2]
                     | uVar15;
            uVar17 = (uint)uVar15;
          }
          if ((*puVar16 & 1) != 0) break;
          uVar17 = (uint)uVar15;
          puVar16 = (ulong *)puVar16[1];
        } while (puVar16 != (ulong *)0x0);
        if ((uVar17 >> 3 & 1) == 0) {
          iVar9 = FUN_032db7e4(uVar19,puVar12,1);
          if (iVar9 < 0) {
            if (DAT_0444ad18 < 2) {
              if (DAT_04350668 == '\0') goto LAB_0330c854;
            }
            else if (DAT_04350668 == '\0') {
              local_1c8[0] = 0;
              local_1b8 = &DAT_0444acc8;
              uStack_1b0 = 2;
              local_1a8 = FUN_032ba19c();
              uStack_1a0 = 0;
              local_198 = 0;
              local_190 = (char *)0x0;
              local_188 = 0;
              uStack_180 = 0;
              if (param_2[1] == 0) {
                pcVar10 = "<No name>";
              }
              else {
                pcVar10 = (char *)FUN_032e239c();
              }
              local_78._0_8_ = pcVar10;
              FUN_03326338(local_1c8,"Cannot construct type {}",&DAT_0411bac8,local_78);
              local_190 = 
              "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
              ;
              local_188 = 0x2a9;
              FUN_033266e0(local_1c8);
              goto LAB_0330c850;
            }
            FUN_03326a7c(local_1c8,&DAT_0444acc8,2);
            if (param_2[1] == 0) {
              pcVar10 = "<No name>";
            }
            else {
              pcVar10 = (char *)FUN_032e239c();
            }
            local_1d8._0_8_ = pcVar10;
            FUN_03326338(local_1c8,"Cannot construct type {}",&DAT_0411bac8,local_1d8);
            local_188 = 0x2a9;
            goto LAB_0330c9a4;
          }
        }
      }
      FUN_0330d128(param_1,&local_68,param_2);
      goto joined_r0x0330c864;
    }
    if (DAT_0444ad18 < 2) {
      if (DAT_04350668 != '\0') goto LAB_0330c96c;
    }
    else {
      if (DAT_04350668 != '\0') {
LAB_0330c96c:
        FUN_03326a7c(local_1c8,&DAT_0444acc8,2);
        FUN_03326338(local_1c8,"Cannot clone on a buffer overlapping with source object",
                     PTR_DAT_04372528);
        local_188 = 0x2a4;
        goto LAB_0330c9a4;
      }
      local_1c8[0] = 0;
      local_1b8 = &DAT_0444acc8;
      uStack_1b0 = 2;
      local_1a8 = FUN_032ba19c();
      uStack_1a0 = 0;
      local_198 = 0;
      local_190 = (char *)0x0;
      local_188 = 0;
      uStack_180 = 0;
      FUN_03326338(local_1c8,"Cannot clone on a buffer overlapping with source object",
                   PTR_DAT_04372528);
      local_188 = 0x2a4;
LAB_0330c840:
      local_190 = 
      "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
      FUN_033266e0(local_1c8);
LAB_0330c850:
      FUN_032c7b9c(&uStack_1a0);
    }
  }
LAB_0330c854:
  *(undefined4 *)(param_1 + 1) = 0x80040200;
joined_r0x0330c864:
  if ((local_58 & 1) != 0) {
    plVar11 = (long *)(local_58 & 0xfffffffffffffffe);
    plVar2 = plVar11 + 1;
    do {
      lVar13 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar11 != (long *)0x0) && ((int)lVar13 == 1)) {
      (**(code **)(*plVar11 + 8))();
    }
  }
  if ((uVar20 & 1) != 0) {
    plVar11 = (long *)(uVar20 & 0xfffffffffffffffe);
    plVar2 = plVar11 + 1;
    do {
      lVar13 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar11 != (long *)0x0) && ((int)lVar13 == 1)) {
      (**(code **)(*plVar11 + 8))();
    }
  }
  return;
}


