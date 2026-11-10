/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0330d128; name: FUN_0330d128
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0330d128(long param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  bool bVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte **ppbVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 local_218;
  undefined8 local_210;
  byte *local_208;
  undefined *puStack_200;
  undefined8 *local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  char *local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  byte *local_b8 [2];
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  byte *local_68;
  long local_60;
  ulong local_58;
  undefined8 local_48;
  
  pbVar10 = (byte *)param_2[1];
  bVar3 = *pbVar10;
  while ((bVar3 & 1) == 0) {
    pbVar10 = *(byte **)(pbVar10 + 8);
    bVar3 = *pbVar10;
  }
  switch(*(uint *)(pbVar10 + 0x10) & 0x1f) {
  case 1:
    FUN_0330e4cc(param_1,param_2);
    return;
  case 2:
    FUN_0330e75c(param_1,param_2);
    return;
  case 3:
    break;
  case 4:
    FUN_0330ea04(param_1,param_2);
    return;
  case 5:
    FUN_0330ecac(param_1,param_2);
    return;
  case 6:
    FUN_0330ef54(param_1,param_2);
    return;
  case 7:
    local_60 = 0;
    local_58 = 0;
    local_68 = (byte *)0x0;
    pbVar10 = (byte *)param_3[1];
    if (pbVar10 == (byte *)0x0) {
LAB_0330d3ac:
      if (DAT_0444ad18 < 2) {
        if (DAT_04350668 != '\0') goto LAB_0330db1c;
      }
      else {
        if (DAT_04350668 == '\0') {
          local_b8[0] = (byte *)0x0;
          local_a8 = &DAT_0444acc8;
          uStack_a0 = 2;
          local_98 = FUN_032ba19c();
          uStack_90 = 0;
          local_88 = 0;
          local_80 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_208 = (byte *)param_2[1];
          local_48 = (byte *)param_3[1];
          bVar3 = *local_208;
          pbVar10 = local_208;
          while ((bVar3 & 1) == 0) {
            pbVar10 = *(byte **)(pbVar10 + 8);
            bVar3 = *pbVar10;
          }
          local_210 = CONCAT44(local_210._4_4_,*(undefined4 *)(pbVar10 + 0x10)) & 0xffffffff0000001f
          ;
          bVar3 = *local_48;
          pbVar10 = local_48;
          while ((bVar3 & 1) == 0) {
            pbVar10 = *(byte **)(pbVar10 + 8);
            bVar3 = *pbVar10;
          }
          local_218 = (byte *)(CONCAT44(local_218._4_4_,*(undefined4 *)(pbVar10 + 0x10)) &
                              0xffffffff0000001f);
          ppbVar12 = local_b8;
          FUN_03326338(local_b8,
                       "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                       ,&DAT_0434f488,&local_208,&local_48,&local_210,&local_218);
          bVar8 = false;
          bVar5 = true;
        }
        else {
LAB_0330db1c:
          FUN_03326a7c(&local_208,&DAT_0444acc8,2);
          local_b8[0] = (byte *)param_2[1];
          local_48 = (byte *)param_3[1];
          bVar3 = *local_b8[0];
          pbVar10 = local_b8[0];
          while ((bVar3 & 1) == 0) {
            pbVar10 = *(byte **)(pbVar10 + 8);
            bVar3 = *pbVar10;
          }
          local_210 = CONCAT44(local_210._4_4_,*(undefined4 *)(pbVar10 + 0x10)) & 0xffffffff0000001f
          ;
          bVar3 = *local_48;
          pbVar10 = local_48;
          while ((bVar3 & 1) == 0) {
            pbVar10 = *(byte **)(pbVar10 + 8);
            bVar3 = *pbVar10;
          }
          local_218 = (byte *)(CONCAT44(local_218._4_4_,*(undefined4 *)(pbVar10 + 0x10)) &
                              0xffffffff0000001f);
          ppbVar12 = &local_208;
          FUN_03326338(&local_208,
                       "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                       ,&DAT_0434f488,local_b8,&local_48,&local_210,&local_218);
          bVar5 = false;
          bVar8 = true;
        }
        ppbVar12[7] = (byte *)
                      "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
        ;
        ppbVar12[8] = (byte *)0x14c;
        if (bVar8) {
          FUN_03326adc(&local_208);
        }
        if (bVar5) {
          FUN_033266e0(local_b8);
          FUN_032c7b9c(&uStack_90);
        }
      }
      *(undefined4 *)(param_1 + 8) = 0x80040200;
    }
    else {
      for (; (*pbVar10 & 1) == 0; pbVar10 = *(byte **)(pbVar10 + 8)) {
      }
      if ((*(ulong *)(pbVar10 + 0x10) & 0x1f) != 7) goto LAB_0330d3ac;
      local_68 = (byte *)*param_3;
      local_60 = param_3[1];
      local_58 = param_3[2];
      if ((local_58 & 1) != 0) {
        piVar2 = (int *)((local_58 & 0xfffffffffffffffe) + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = *piVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        local_58 = param_3[2];
      }
      if (local_68 == (byte *)0x0) goto LAB_0330d3ac;
      FUN_03310b48(param_1,param_2,&local_68);
    }
    if ((local_58 & 1) == 0) {
      return;
    }
    plVar7 = (long *)(local_58 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      iVar6 = (int)*plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_0330da28;
  case 8:
    local_60 = 0;
    local_58 = 0;
    local_68 = (byte *)0x0;
    pbVar10 = (byte *)param_3[1];
    if (pbVar10 == (byte *)0x0) {
LAB_0330d7b4:
      if (DAT_0444ad18 < 2) {
        if (DAT_04350668 != '\0') goto LAB_0330dc64;
      }
      else {
        if (DAT_04350668 == '\0') {
          local_b8[0] = (byte *)0x0;
          local_a8 = &DAT_0444acc8;
          uStack_a0 = 2;
          local_98 = FUN_032ba19c();
          uStack_90 = 0;
          local_88 = 0;
          local_80 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_208 = (byte *)param_2[1];
          local_48 = (byte *)param_3[1];
          bVar3 = *local_208;
          pbVar10 = local_208;
          while ((bVar3 & 1) == 0) {
            pbVar10 = *(byte **)(pbVar10 + 8);
            bVar3 = *pbVar10;
          }
          local_210 = CONCAT44(local_210._4_4_,*(undefined4 *)(pbVar10 + 0x10)) & 0xffffffff0000001f
          ;
          bVar3 = *local_48;
          pbVar10 = local_48;
          while ((bVar3 & 1) == 0) {
            pbVar10 = *(byte **)(pbVar10 + 8);
            bVar3 = *pbVar10;
          }
          local_218 = (byte *)(CONCAT44(local_218._4_4_,*(undefined4 *)(pbVar10 + 0x10)) &
                              0xffffffff0000001f);
          ppbVar12 = local_b8;
          FUN_03326338(local_b8,
                       "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                       ,&DAT_0434f620,&local_208,&local_48,&local_210,&local_218);
          bVar8 = false;
          bVar5 = true;
        }
        else {
LAB_0330dc64:
          FUN_03326a7c(&local_208,&DAT_0444acc8,2);
          local_b8[0] = (byte *)param_2[1];
          local_48 = (byte *)param_3[1];
          bVar3 = *local_b8[0];
          pbVar10 = local_b8[0];
          while ((bVar3 & 1) == 0) {
            pbVar10 = *(byte **)(pbVar10 + 8);
            bVar3 = *pbVar10;
          }
          local_210 = CONCAT44(local_210._4_4_,*(undefined4 *)(pbVar10 + 0x10)) & 0xffffffff0000001f
          ;
          bVar3 = *local_48;
          pbVar10 = local_48;
          while ((bVar3 & 1) == 0) {
            pbVar10 = *(byte **)(pbVar10 + 8);
            bVar3 = *pbVar10;
          }
          local_218 = (byte *)(CONCAT44(local_218._4_4_,*(undefined4 *)(pbVar10 + 0x10)) &
                              0xffffffff0000001f);
          ppbVar12 = &local_208;
          FUN_03326338(&local_208,
                       "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                       ,&DAT_0434f620,local_b8,&local_48,&local_210,&local_218);
          bVar5 = false;
          bVar8 = true;
        }
        ppbVar12[7] = (byte *)
                      "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
        ;
        ppbVar12[8] = (byte *)0x14c;
        if (bVar8) {
          FUN_03326adc(&local_208);
        }
        if (bVar5) {
          FUN_033266e0(local_b8);
          FUN_032c7b9c(&uStack_90);
        }
      }
      *(undefined4 *)(param_1 + 8) = 0x80040200;
    }
    else {
      bVar3 = *pbVar10;
      while ((bVar3 & 1) == 0) {
        pbVar10 = *(byte **)(pbVar10 + 8);
        bVar3 = *pbVar10;
      }
      if ((*(ulong *)(pbVar10 + 0x10) & 0x1f) != 8) goto LAB_0330d7b4;
      local_68 = (byte *)*param_3;
      local_60 = param_3[1];
      local_58 = param_3[2];
      if ((local_58 & 1) != 0) {
        piVar2 = (int *)((local_58 & 0xfffffffffffffffe) + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = *piVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        local_58 = param_3[2];
      }
      if (local_68 == (byte *)0x0) goto LAB_0330d7b4;
      FUN_03315d8c(param_1,param_2,&local_68);
    }
    if ((local_58 & 1) == 0) {
      return;
    }
    plVar7 = (long *)(local_58 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      iVar6 = (int)*plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_0330da28;
  default:
    local_208 = (byte *)0x0;
    puStack_200 = PTR_DAT_04372528;
    local_1f8 = (undefined8 *)0x0;
    FUN_03320b50(0x261011c5,"../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",
                 0x3b,"Bad var visitor switch",&local_208);
  case 0:
    FUN_0330e23c(param_1,param_2,param_3);
    return;
  }
  pbVar10 = (byte *)param_3[1];
  if (pbVar10 == (byte *)0x0) {
LAB_0330d4ac:
    uVar15 = 0;
LAB_0330d4b4:
    if (DAT_0444ad18 < 2) {
      if (DAT_04350668 != '\0') goto LAB_0330dbc0;
    }
    else {
      if (DAT_04350668 == '\0') {
        local_b8[0] = (byte *)0x0;
        local_a8 = &DAT_0444acc8;
        uStack_a0 = 2;
        local_98 = FUN_032ba19c();
        uStack_90 = 0;
        local_88 = 0;
        local_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_208 = (byte *)param_2[1];
        local_68 = (byte *)param_3[1];
        bVar3 = *local_208;
        pbVar10 = local_208;
        while ((bVar3 & 1) == 0) {
          pbVar10 = *(byte **)(pbVar10 + 8);
          bVar3 = *pbVar10;
        }
        local_48 = (byte *)(CONCAT44(local_48._4_4_,*(undefined4 *)(pbVar10 + 0x10)) &
                           0xffffffff0000001f);
        bVar3 = *local_68;
        pbVar10 = local_68;
        while ((bVar3 & 1) == 0) {
          pbVar10 = *(byte **)(pbVar10 + 8);
          bVar3 = *pbVar10;
        }
        local_210 = CONCAT44(local_210._4_4_,*(undefined4 *)(pbVar10 + 0x10)) & 0xffffffff0000001f;
        ppbVar12 = local_b8;
        FUN_03326338(local_b8,
                     "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                     ,&DAT_0434ed38,&local_208,&local_68,&local_48,&local_210);
        bVar8 = false;
        bVar5 = true;
      }
      else {
LAB_0330dbc0:
        FUN_03326a7c(&local_208,&DAT_0444acc8,2);
        local_b8[0] = (byte *)param_2[1];
        local_68 = (byte *)param_3[1];
        bVar3 = *local_b8[0];
        pbVar10 = local_b8[0];
        while ((bVar3 & 1) == 0) {
          pbVar10 = *(byte **)(pbVar10 + 8);
          bVar3 = *pbVar10;
        }
        local_48 = (byte *)(CONCAT44(local_48._4_4_,*(undefined4 *)(pbVar10 + 0x10)) &
                           0xffffffff0000001f);
        bVar3 = *local_68;
        pbVar10 = local_68;
        while ((bVar3 & 1) == 0) {
          pbVar10 = *(byte **)(pbVar10 + 8);
          bVar3 = *pbVar10;
        }
        local_210 = CONCAT44(local_210._4_4_,*(undefined4 *)(pbVar10 + 0x10)) & 0xffffffff0000001f;
        ppbVar12 = &local_208;
        FUN_03326338(&local_208,
                     "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                     ,&DAT_0434ed38,local_b8,&local_68,&local_48,&local_210);
        bVar5 = false;
        bVar8 = true;
      }
      ppbVar12[7] = (byte *)
                    "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
      ;
      ppbVar12[8] = (byte *)0x14c;
      if (bVar8) {
        FUN_03326adc(&local_208);
      }
      if (bVar5) {
        FUN_033266e0(local_b8);
        FUN_032c7b9c(&uStack_90);
      }
    }
    *(undefined4 *)(param_1 + 8) = 0x80040200;
  }
  else {
    pbVar11 = pbVar10;
    if ((*pbVar10 & 1) == 0) {
      pbVar11 = *(byte **)(pbVar10 + 8);
      bVar3 = *pbVar11;
      while ((bVar3 & 1) == 0) {
        pbVar11 = *(byte **)(pbVar11 + 8);
        bVar3 = *pbVar11;
      }
    }
    if ((*(ulong *)(pbVar11 + 0x10) & 0x1f) != 3) goto LAB_0330d4ac;
    lVar14 = *param_3;
    uVar15 = param_3[2];
    if ((uVar15 & 1) == 0) {
      if (lVar14 != 0) goto LAB_0330d25c;
      goto LAB_0330d4b4;
    }
    piVar2 = (int *)((uVar15 & 0xfffffffffffffffe) + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar15 = param_3[2];
    if (lVar14 == 0) goto LAB_0330d4b4;
LAB_0330d25c:
    if (((pbVar10 < (byte *)0x2) || (uVar9 = (uint)*(undefined8 *)pbVar10, (uVar9 >> 0x11 & 1) == 0)
        ) || (uVar9 = (uVar9 & 0x1ffff) - (uVar9 >> 1 & 0x5555),
             uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333),
             (*(ulong *)(pbVar10 +
                        (ulong)((uVar9 + (uVar9 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) * 8 + 0x10)
             & 0x300000) == 0 ||
             (*(ulong *)(pbVar10 +
                        (ulong)((uVar9 + (uVar9 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) * 8 + 0x10)
             & 0x400000) == 0)) {
      uVar13 = uVar15;
      if ((uVar15 & 1) != 0) {
        piVar2 = (int *)((uVar15 & 0xfffffffffffffffe) + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = *piVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
    else {
      pbVar10 = *(byte **)(pbVar10 + 8);
      if ((*pbVar10 & 1) == 0) {
        pbVar11 = *(byte **)(pbVar10 + 8);
        bVar3 = *pbVar11;
        while ((bVar3 & 1) == 0) {
          pbVar11 = *(byte **)(pbVar11 + 8);
          bVar3 = *pbVar11;
        }
      }
      else {
        pbVar11 = pbVar10;
      }
      if ((*(ulong *)(pbVar11 + 0x10) & 0x1f) != 3) {
        pbVar10 = (byte *)0x0;
      }
      if (pbVar10 == (byte *)0x0) {
        uVar13 = 0;
      }
      else {
        uVar13 = FUN_032e3508(pbVar10);
        if ((uVar13 & 1) != 0) {
          piVar2 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = *piVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
      }
    }
    local_b8[0] = (byte *)0x0;
    iVar6 = (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
                      ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],local_b8);
    if (iVar6 < 0) {
      if (DAT_0444ad18 < 2) {
        if (DAT_04350668 != '\0') goto LAB_0330d950;
      }
      else {
        if (DAT_04350668 != '\0') {
LAB_0330d950:
          FUN_03326a7c(&local_208,&DAT_0444acc8,2);
          FUN_03326338(&local_208,"Failed to get value from Var \'{}\'",&DAT_0434eed0,param_2);
          local_1c8 = 0x1ed;
          goto LAB_0330d9e8;
        }
        local_208 = (byte *)0x0;
        local_1f8 = &DAT_0444acc8;
        uStack_1f0 = 2;
        local_1e8 = FUN_032ba19c();
        uStack_1e0 = 0;
        local_1d8 = 0;
        local_1d0 = (char *)0x0;
        local_1c8 = 0;
        uStack_1c0 = 0;
        FUN_03326338(&local_208,"Failed to get value from Var \'{}\'",&DAT_0434eed0,param_2);
        local_1d0 = 
        "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
        local_1c8 = 0x1ed;
        FUN_033266e0(&local_208);
LAB_0330d768:
        FUN_032c7b9c(&uStack_1e0);
      }
LAB_0330d76c:
      *(undefined4 *)(param_1 + 8) = 0x80040200;
    }
    else {
      iVar6 = (**(code **)(*(long *)(uVar13 & 0xfffffffffffffffe) + 0x30))
                        ((long *)(uVar13 & 0xfffffffffffffffe),lVar14,pbVar10,local_b8[0]);
      if (iVar6 < 0) {
        if (DAT_0444ad18 < 2) {
          if (DAT_04350668 == '\0') goto LAB_0330d76c;
        }
        else if (DAT_04350668 == '\0') {
          local_208 = (byte *)0x0;
          local_1f8 = &DAT_0444acc8;
          uStack_1f0 = 2;
          local_1e8 = FUN_032ba19c();
          uStack_1e0 = 0;
          local_1d8 = 0;
          local_1d0 = (char *)0x0;
          local_1c8 = 0;
          uStack_1c0 = 0;
          local_68 = (byte *)param_2[1];
          local_48 = pbVar10;
          FUN_03326338(&local_208,"Failed to set value \'{:*}\' (\'{}\') on Var of type \'{}\'",
                       &DAT_0434eee0,param_2,&local_68,&local_48);
          local_1d0 = 
          "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
          local_1c8 = 0x1f2;
          FUN_033266e0(&local_208);
          goto LAB_0330d768;
        }
        FUN_03326a7c(&local_208,&DAT_0444acc8,2);
        local_210 = param_2[1];
        local_218 = pbVar10;
        FUN_03326338(&local_208,"Failed to set value \'{:*}\' (\'{}\') on Var of type \'{}\'",
                     &DAT_0434eee0,param_2,&local_210,&local_218);
        local_1c8 = 0x1f2;
LAB_0330d9e8:
        local_1d0 = 
        "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
        FUN_03326adc(&local_208);
        goto LAB_0330d76c;
      }
    }
    if ((uVar13 & 1) != 0) {
      plVar7 = (long *)(uVar13 & 0xfffffffffffffffe);
      plVar1 = plVar7 + 1;
      do {
        lVar14 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = (int)lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((plVar7 != (long *)0x0) && ((int)lVar14 == 1)) {
        (**(code **)(*plVar7 + 8))();
      }
    }
  }
  if ((uVar15 & 1) == 0) {
    return;
  }
  plVar7 = (long *)(uVar15 & 0xfffffffffffffffe);
  plVar1 = plVar7 + 1;
  do {
    iVar6 = (int)*plVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar6 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_0330da28:
  if ((plVar7 != (long *)0x0) && (iVar6 == 1)) {
    (**(code **)(*plVar7 + 8))();
  }
  return;
}


