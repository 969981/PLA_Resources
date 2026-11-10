/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03315d8c; name: FUN_03315d8c
 */


void FUN_03315d8c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  MutexType *pMVar1;
  int *piVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  byte bVar5;
  char cVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 **ppuVar14;
  long lVar15;
  undefined *puVar16;
  undefined1 auVar17 [8];
  int iVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  char *pcVar22;
  long *plVar23;
  undefined8 **ppuVar24;
  uint uVar25;
  uint uVar26;
  undefined4 uVar27;
  ulong uVar28;
  undefined8 *puVar29;
  byte *pbVar30;
  ulong *puVar31;
  undefined8 *puVar32;
  uint uVar33;
  byte *pbVar34;
  uint uVar35;
  undefined8 uVar36;
  long *plVar37;
  uint uVar38;
  long lVar39;
  bool bVar40;
  undefined1 local_10f0 [16];
  undefined8 *local_10e0;
  undefined8 uStack_10d8;
  undefined8 local_10d0;
  undefined8 uStack_10c8;
  undefined8 local_10c0;
  char *local_10b8;
  undefined8 local_10b0;
  undefined8 uStack_10a8;
  long local_fa0;
  undefined *local_f98;
  uint *local_f90;
  ulong local_f88;
  undefined8 local_f80;
  undefined8 uStack_f78;
  undefined8 local_f70;
  char *local_f68;
  undefined8 local_f60;
  undefined8 uStack_f58;
  undefined1 *local_f00;
  code *local_ef0;
  undefined1 *local_ee8;
  undefined1 *local_eb0;
  undefined1 *local_e70;
  code *local_e60;
  undefined1 *local_e58;
  undefined1 *local_e28;
  undefined1 *local_e18;
  undefined1 *local_e10;
  undefined8 *local_d18;
  undefined8 ***local_d10;
  undefined8 local_d08;
  undefined8 *local_d00;
  undefined1 local_cf8 [16];
  undefined8 *local_ce8;
  undefined8 **local_ce0;
  undefined8 local_cd8;
  undefined8 *local_cd0;
  undefined8 local_cc8;
  undefined8 local_cc0;
  undefined8 local_cb8;
  undefined8 local_cb0;
  char *local_ca8;
  undefined8 local_ca0;
  undefined8 local_c98;
  undefined1 local_d0 [8];
  byte *local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined1 local_b0 [8];
  byte *local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  ulong local_80;
  ulong local_78;
  uint local_6c [3];
  
  local_90 = *param_2;
  local_88 = param_2[1];
  local_80 = param_2[2];
  if ((local_80 & 1) != 0) {
    piVar2 = (int *)((local_80 & 0xfffffffffffffffe) + 8);
    do {
      cVar6 = '\x01';
      bVar40 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar40) {
        *piVar2 = *piVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  iVar18 = (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_3,&local_90);
  auVar11._8_8_ = local_c8;
  auVar11._0_8_ = local_d0;
  auVar10._8_8_ = local_10f0._8_8_;
  auVar10._0_8_ = local_10f0._0_8_;
  auVar9._8_8_ = local_cf8._8_8_;
  auVar9._0_8_ = local_cf8._0_8_;
  if (iVar18 < 0) {
    if (DAT_0444ad18 < 2) {
      if (DAT_04350668 != '\0') goto LAB_0331724c;
      cVar6 = *(char *)((long)param_1 + 0xc);
      local_cf8 = auVar9;
      local_10f0 = auVar10;
      _local_d0 = auVar11;
    }
    else if (DAT_04350668 == '\0') {
      local_ce0 = (undefined8 **)0x0;
      local_cc8 = 2;
      local_cd0 = &DAT_0444acc8;
      local_cc0 = FUN_032ba19c();
      local_cb8 = 0;
      local_ca8 = (char *)0x0;
      local_cb0 = 0;
      local_c98 = 0;
      local_ca0 = 0;
      local_10f0 = FUN_032e2464(param_2[1]);
      local_f90 = (uint *)0x0;
      local_f88 = 0;
      local_fa0 = 0;
      local_f98 = (undefined *)0x0;
      (**(code **)(*(long *)(local_80 & 0xfffffffffffffffe) + 0x50))
                ((long *)(local_80 & 0xfffffffffffffffe),local_90,local_88,&local_fa0);
      puVar16 = local_f98;
      if ((local_f88 & 1) == 0) {
LAB_033169c4:
        if (local_f98 == (undefined *)0x0) goto LAB_03317688;
LAB_033169c8:
        local_f90 = (uint *)0x0;
        local_f88 = 0;
        local_fa0 = 0;
        local_f98 = (undefined *)0x0;
        (**(code **)(*(long *)(local_80 & 0xfffffffffffffffe) + 0x50))
                  ((long *)(local_80 & 0xfffffffffffffffe),local_90,local_88,&local_fa0);
        puVar16 = local_f98;
        if ((local_f88 & 1) != 0) {
          plVar23 = (long *)(local_f88 & 0xfffffffffffffffe);
          plVar37 = plVar23 + 1;
          do {
            lVar21 = *plVar37;
            cVar6 = '\x01';
            bVar40 = (bool)ExclusiveMonitorPass(plVar37,0x10);
            if (bVar40) {
              *(int *)plVar37 = (int)lVar21 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if ((plVar23 != (long *)0x0) && ((int)lVar21 == 1)) {
            (**(code **)(*plVar23 + 8))();
          }
        }
        _local_b0 = FUN_032e2464(puVar16);
      }
      else {
        plVar23 = (long *)(local_f88 & 0xfffffffffffffffe);
        plVar37 = plVar23 + 1;
        do {
          lVar21 = *plVar37;
          cVar6 = '\x01';
          bVar40 = (bool)ExclusiveMonitorPass(plVar37,0x10);
          if (bVar40) {
            *(int *)plVar37 = (int)lVar21 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((plVar23 == (long *)0x0) || ((int)lVar21 != 1)) goto LAB_033169c4;
        (**(code **)(*plVar23 + 8))();
        if (puVar16 != (undefined *)0x0) goto LAB_033169c8;
LAB_03317688:
        _local_b0 = ZEXT816(0x38da8c3);
      }
      local_f90 = (uint *)0x0;
      local_f88 = 0;
      local_fa0 = 0;
      local_f98 = (undefined *)0x0;
      (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x50))
                ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_fa0);
      uVar27 = (uint)local_f90;
      if ((local_f88 & 1) != 0) {
        plVar23 = (long *)(local_f88 & 0xfffffffffffffffe);
        plVar37 = plVar23 + 1;
        do {
          lVar21 = *plVar37;
          cVar6 = '\x01';
          bVar40 = (bool)ExclusiveMonitorPass(plVar37,0x10);
          if (bVar40) {
            *(int *)plVar37 = (int)lVar21 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((plVar23 != (long *)0x0) && ((int)lVar21 == 1)) {
          (**(code **)(*plVar23 + 8))();
        }
      }
      local_78 = CONCAT44(local_78._4_4_,uVar27);
      FUN_03326338(&local_ce0,
                   "Cannot allocate array elements of type \'{}\', element type \'{}\', count={}",
                   &DAT_0434f718,local_10f0,local_b0,&local_78);
      local_ca8 = 
      "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
      local_ca0 = 0x195;
      FUN_033266e0(&local_ce0);
      FUN_032c7b9c(&local_cb8);
      cVar6 = *(char *)((long)param_1 + 0xc);
    }
    else {
LAB_0331724c:
      FUN_03326a7c(&local_ce0,&DAT_0444acc8,2);
      _local_d0 = FUN_032e2464(param_2[1]);
      local_f90 = (uint *)0x0;
      local_f88 = 0;
      local_fa0 = 0;
      local_f98 = (undefined *)0x0;
      (**(code **)(*(long *)(local_80 & 0xfffffffffffffffe) + 0x50))
                ((long *)(local_80 & 0xfffffffffffffffe),local_90,local_88,&local_fa0);
      puVar16 = local_f98;
      if ((local_f88 & 1) == 0) {
LAB_0331729c:
        if (local_f98 == (undefined *)0x0) goto LAB_0331779c;
LAB_033172a0:
        local_f90 = (uint *)0x0;
        local_f88 = 0;
        local_fa0 = 0;
        local_f98 = (undefined *)0x0;
        (**(code **)(*(long *)(local_80 & 0xfffffffffffffffe) + 0x50))
                  ((long *)(local_80 & 0xfffffffffffffffe),local_90,local_88,&local_fa0);
        puVar16 = local_f98;
        if ((local_f88 & 1) != 0) {
          plVar23 = (long *)(local_f88 & 0xfffffffffffffffe);
          plVar37 = plVar23 + 1;
          do {
            lVar21 = *plVar37;
            cVar6 = '\x01';
            bVar40 = (bool)ExclusiveMonitorPass(plVar37,0x10);
            if (bVar40) {
              *(int *)plVar37 = (int)lVar21 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if ((plVar23 != (long *)0x0) && ((int)lVar21 == 1)) {
            (**(code **)(*plVar23 + 8))();
          }
        }
        local_cf8 = FUN_032e2464(puVar16);
      }
      else {
        plVar23 = (long *)(local_f88 & 0xfffffffffffffffe);
        plVar37 = plVar23 + 1;
        do {
          lVar21 = *plVar37;
          cVar6 = '\x01';
          bVar40 = (bool)ExclusiveMonitorPass(plVar37,0x10);
          if (bVar40) {
            *(int *)plVar37 = (int)lVar21 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((plVar23 == (long *)0x0) || ((int)lVar21 != 1)) goto LAB_0331729c;
        (**(code **)(*plVar23 + 8))();
        if (puVar16 != (undefined *)0x0) goto LAB_033172a0;
LAB_0331779c:
        local_cf8 = ZEXT816(0x38da8c3);
      }
      local_f90 = (uint *)0x0;
      local_f88 = 0;
      local_fa0 = 0;
      local_f98 = (undefined *)0x0;
      (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x50))
                ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_fa0);
      local_6c[0] = (uint)local_f90;
      if ((local_f88 & 1) != 0) {
        plVar23 = (long *)(local_f88 & 0xfffffffffffffffe);
        plVar37 = plVar23 + 1;
        do {
          lVar21 = *plVar37;
          cVar6 = '\x01';
          bVar40 = (bool)ExclusiveMonitorPass(plVar37,0x10);
          if (bVar40) {
            *(int *)plVar37 = (int)lVar21 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((plVar23 != (long *)0x0) && ((int)lVar21 == 1)) {
          (**(code **)(*plVar23 + 8))();
        }
      }
      FUN_03326338(&local_ce0,
                   "Cannot allocate array elements of type \'{}\', element type \'{}\', count={}",
                   &DAT_0434f718,local_d0,local_cf8,local_6c);
      local_ca8 = 
      "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
      local_ca0 = 0x195;
      FUN_03326adc(&local_ce0);
      cVar6 = *(char *)((long)param_1 + 0xc);
    }
    if (cVar6 == '\0') {
      if (DAT_0444ad18 < 2) {
        if (DAT_04350668 != '\0') goto LAB_0331736c;
      }
      else if (DAT_04350668 == '\0') {
        local_ce0 = (undefined8 **)0x0;
        local_cc8 = 2;
        local_cd0 = &DAT_0444acc8;
        local_cc0 = FUN_032ba19c();
        local_cb8 = 0;
        local_ca8 = (char *)0x0;
        local_cb0 = 0;
        local_c98 = 0;
        local_ca0 = 0;
        FUN_03326338(&local_ce0,&DAT_03996322,PTR_DAT_04372528);
        local_ca8 = 
        "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
        local_ca0 = 0x196;
        FUN_033266e0(&local_ce0);
        FUN_032c7b9c(&local_cb8);
      }
      else {
LAB_0331736c:
        FUN_03326a7c(&local_ce0,&DAT_0444acc8,2);
        FUN_03326338(&local_ce0,&DAT_03996322,PTR_DAT_04372528);
        local_ca8 = 
        "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
        local_ca0 = 0x196;
        FUN_03326adc(&local_ce0);
      }
      *(undefined4 *)(param_1 + 1) = 0x80040200;
      auVar7 = _local_b0;
      goto joined_r0x03316dac;
    }
  }
  local_a0 = 0;
  local_98 = (undefined8 *)0x0;
  local_b0 = (undefined1  [8])0x0;
  local_a8 = (byte *)0x0;
  pbVar34 = (byte *)param_3[1];
  if (((pbVar34 < (byte *)0x2) || (uVar25 = (uint)*(undefined8 *)pbVar34, (uVar25 >> 0x11 & 1) == 0)
      ) || (uVar25 = (uVar25 & 0x1ffff) - (uVar25 >> 1 & 0x5555),
           uVar25 = (uVar25 >> 2 & 0x33333333) + (uVar25 & 0x33333333),
           (*(ulong *)(pbVar34 +
                      (ulong)((uVar25 + (uVar25 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) * 8 + 0x10)
           & 0x300000) == 0 ||
           (*(ulong *)(pbVar34 +
                      (ulong)((uVar25 + (uVar25 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) * 8 + 0x10)
           & 0x400000) == 0)) {
    uVar36 = *param_3;
    uVar20 = param_3[2];
    if ((uVar20 & 1) == 0) goto LAB_03315e68;
    piVar2 = (int *)((uVar20 & 0xfffffffffffffffe) + 8);
    do {
      cVar6 = '\x01';
      bVar40 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar40) {
        *piVar2 = *piVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_03316ec0:
    bVar40 = false;
  }
  else {
    pbVar34 = *(byte **)(pbVar34 + 8);
    if ((*pbVar34 & 1) == 0) {
      pbVar30 = *(byte **)(pbVar34 + 8);
      bVar5 = *pbVar30;
      while ((bVar5 & 1) == 0) {
        pbVar30 = *(byte **)(pbVar30 + 8);
        bVar5 = *pbVar30;
      }
    }
    else {
      pbVar30 = pbVar34;
    }
    uVar36 = *param_3;
    uVar20 = 0;
    if ((*(ulong *)(pbVar30 + 0x10) & 0x1f) != 8) {
      pbVar34 = (byte *)0x0;
    }
    if (pbVar34 != (byte *)0x0) {
      uVar20 = FUN_032e3508(pbVar34);
      if ((uVar20 & 1) != 0) {
        piVar2 = (int *)((uVar20 & 0xfffffffffffffffe) + 8);
        do {
          cVar6 = '\x01';
          bVar40 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar40) {
            *piVar2 = *piVar2 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        goto LAB_03316ec0;
      }
    }
LAB_03315e68:
    bVar40 = true;
  }
  plVar37 = (long *)(uVar20 & 0xfffffffffffffffe);
  iVar18 = (**(code **)(*plVar37 + 0x50))(plVar37,uVar36,pbVar34,local_b0);
  if (bVar40) {
LAB_03315e94:
    if (iVar18 < 0) goto LAB_03316efc;
LAB_03315e98:
    auVar12 = _local_d0;
    if ((int)local_a0 == 0) goto joined_r0x033160fc;
    local_c0 = 0;
    local_b8 = (undefined8 *)0x0;
    local_d0 = (undefined1  [8])0x0;
    local_c8 = (byte *)0x0;
    iVar18 = (**(code **)(*(long *)(local_80 & 0xfffffffffffffffe) + 0x50))
                       ((long *)(local_80 & 0xfffffffffffffffe),local_90,local_88,local_d0);
    if (iVar18 < 0) {
      if (DAT_0444ad18 < 2) {
        if (DAT_04350668 != '\0') goto LAB_033171ac;
      }
      else if (DAT_04350668 == '\0') {
        local_ce0 = (undefined8 **)0x0;
        local_cc8 = 2;
        local_cd0 = &DAT_0444acc8;
        local_cc0 = FUN_032ba19c();
        local_cb8 = 0;
        local_ca8 = (char *)0x0;
        local_cb0 = 0;
        local_c98 = 0;
        local_ca0 = 0;
        FUN_03326338(&local_ce0,"Cannot access array value",PTR_DAT_04372528);
        local_ca8 = 
        "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
        local_ca0 = 0x1a0;
        FUN_033266e0(&local_ce0);
        FUN_032c7b9c(&local_cb8);
      }
      else {
LAB_033171ac:
        FUN_03326a7c(&local_ce0,&DAT_0444acc8,2);
        FUN_03326338(&local_ce0,"Cannot access array value",PTR_DAT_04372528);
        local_ca8 = 
        "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
        local_ca0 = 0x1a0;
        FUN_03326adc(&local_ce0);
      }
      auVar12._8_8_ = local_c8;
      auVar12._0_8_ = local_d0;
      *(undefined4 *)(param_1 + 1) = 0x80040200;
    }
    else {
      local_cd8 = 0x8000004000000000;
      local_ce0 = &local_cd0;
      if (local_b0 == local_d0) {
        if (local_a8 == local_c8) {
LAB_03316248:
          if ((int)local_a0 != (int)local_c0) {
            if (DAT_0444ad18 < 2) {
              if (DAT_04350668 == '\0') goto LAB_033162dc;
            }
            else if (DAT_04350668 == '\0') {
              local_fa0 = 0;
              local_f90 = (uint *)&DAT_0444acc8;
              local_f88 = 2;
              local_f80 = FUN_032ba19c();
              uStack_f78 = 0;
              local_f70 = 0;
              local_f68 = (char *)0x0;
              local_f60 = 0;
              uStack_f58 = 0;
              FUN_03326338(&local_fa0,"Clone on self with different count is not supported",
                           PTR_DAT_04372528);
              local_f60 = 0x1a8;
              goto LAB_033162c8;
            }
            FUN_03326a7c(&local_fa0,&DAT_0444acc8,2);
            FUN_03326338(&local_fa0,"Clone on self with different count is not supported",
                         PTR_DAT_04372528);
            local_f60 = 0x1a8;
LAB_03316e20:
            local_f68 = 
            "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
            ;
            FUN_03326adc(&local_fa0);
            goto LAB_033162dc;
          }
LAB_033160dc:
          iVar18 = (int)local_cd8;
          ppuVar14 = local_ce0;
        }
        else {
          uVar20 = FUN_032e37ec();
          if ((uVar20 & 1) != 0) goto LAB_03316248;
          if (DAT_0444ad18 < 2) {
            if (DAT_04350668 != '\0') goto LAB_03316e34;
          }
          else {
            if (DAT_04350668 != '\0') {
LAB_03316e34:
              FUN_03326a7c(&local_fa0,&DAT_0444acc8,2);
              FUN_03326338(&local_fa0,"Clone on self with different subtype is not supported",
                           PTR_DAT_04372528);
              local_f60 = 0x1a6;
              goto LAB_03316e20;
            }
            local_fa0 = 0;
            local_f90 = (uint *)&DAT_0444acc8;
            local_f88 = 2;
            local_f80 = FUN_032ba19c();
            uStack_f78 = 0;
            local_f70 = 0;
            local_f68 = (char *)0x0;
            local_f60 = 0;
            uStack_f58 = 0;
            FUN_03326338(&local_fa0,"Clone on self with different subtype is not supported",
                         PTR_DAT_04372528);
            local_f60 = 0x1a6;
LAB_033162c8:
            local_f68 = 
            "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
            ;
            FUN_033266e0(&local_fa0);
            FUN_032c7b9c(&uStack_f78);
          }
LAB_033162dc:
          *(undefined4 *)(param_1 + 1) = 0x80040200;
          iVar18 = (int)local_cd8;
          ppuVar14 = local_ce0;
        }
      }
      else {
        if ((ulong)local_d0 < (ulong)((long)local_b0 + (long)local_a0._4_4_ * (long)(int)local_a0))
        {
          if ((ulong)((long)local_d0 + (long)local_c0._4_4_ * (long)(int)local_c0) <=
              (ulong)local_b0) goto LAB_03315f14;
          if (DAT_0444ad18 < 2) {
            if (DAT_04350668 != '\0') goto LAB_03316ab0;
          }
          else {
            if (DAT_04350668 != '\0') {
LAB_03316ab0:
              FUN_03326a7c(&local_fa0,&DAT_0444acc8,2);
              FUN_03326338(&local_fa0,"Cannot clone on a buffer overlapping with source array",
                           PTR_DAT_04372528);
              local_f60 = 0x1ae;
              goto LAB_03316cc0;
            }
            local_fa0 = 0;
            local_f90 = (uint *)&DAT_0444acc8;
            local_f88 = 2;
            local_f80 = FUN_032ba19c();
            uStack_f78 = 0;
            local_f70 = 0;
            local_f68 = (char *)0x0;
            puVar32 = &uStack_f78;
            local_f60 = 0;
            uStack_f58 = 0;
            FUN_03326338(&local_fa0,"Cannot clone on a buffer overlapping with source array",
                         PTR_DAT_04372528);
            plVar37 = &local_fa0;
            local_f68 = 
            "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
            ;
            local_f60 = 0x1ae;
LAB_03316868:
            FUN_033266e0(plVar37);
LAB_03316870:
            FUN_032c7b9c(puVar32);
          }
        }
        else {
LAB_03315f14:
          puVar31 = (ulong *)param_3[1];
          uVar20 = 0;
          do {
            uVar25 = (uint)uVar20;
            uVar33 = (uint)*puVar31;
            if ((uVar33 >> 0x15 & 1) != 0) {
              uVar25 = (uVar33 & 0x1fffff) - (uVar33 >> 1 & 0x55555);
              uVar25 = (uVar25 >> 2 & 0x33333333) + (uVar25 & 0x33333333);
              uVar20 = puVar31[(ulong)((uVar25 + (uVar25 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2
                              ] | uVar20;
              uVar25 = (uint)uVar20;
            }
            if ((*puVar31 & 1) != 0) break;
            uVar25 = (uint)uVar20;
            puVar31 = (ulong *)puVar31[1];
          } while (puVar31 != (ulong *)0x0);
          if ((uVar25 >> 3 & 1) != 0) {
LAB_03316388:
            puVar16 = PTR_PTR_0434a080;
            if (0 < (int)local_a0) {
              iVar18 = 0;
              do {
                ppuVar14 = local_ce0;
                local_10f0._0_8_ = (long)local_d0 + (long)local_c0._4_4_ * (long)iVar18;
                local_10f0._8_8_ = local_c8;
                local_10e0 = local_b8;
                if (((ulong)local_b8 & 1) != 0) {
                  piVar2 = (int *)(((ulong)local_b8 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar6 = '\x01';
                    bVar40 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar40) {
                      *piVar2 = *piVar2 + 1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                }
                local_cf8._0_8_ = (long)local_b0 + (long)local_a0._4_4_ * (long)iVar18;
                local_ce8 = local_98;
                local_cf8._8_8_ = local_a8;
                if (((ulong)local_98 & 1) != 0) {
                  piVar2 = (int *)(((ulong)local_98 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar6 = '\x01';
                    bVar40 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar40) {
                      *piVar2 = *piVar2 + 1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                }
                pbVar34 = local_a8;
                if ((*local_a8 & 1) == 0) {
                  pbVar34 = *(byte **)(local_a8 + 8);
                  bVar5 = *pbVar34;
                  while ((bVar5 & 1) == 0) {
                    pbVar34 = *(byte **)(pbVar34 + 8);
                    bVar5 = *pbVar34;
                  }
                }
                uVar25 = *(uint *)(pbVar34 + 0x10) & 0x1f;
                if (uVar25 == 8) {
LAB_03316428:
                  uVar38 = *(uint *)(param_1 + 8);
                  uVar35 = *(uint *)((long)param_1 + 0x44);
                  uVar33 = uVar35 & 0x3fffffff;
                  lVar39 = param_1[7];
                  uVar25 = uVar38 + 1;
                  lVar21 = lVar39;
                  if ((int)uVar33 <= (int)uVar38) {
                    if (0x3ffffffe < (int)uVar38) {
                      FUN_032bd0a8(uVar25);
                      uVar35 = *(uint *)((long)param_1 + 0x44);
                      uVar33 = uVar35 & 0x3fffffff;
                    }
                    uVar26 = (uVar35 & 0x3fffffff) << 1;
                    if (0x3ffffffe < uVar26) {
                      uVar26 = 0x3fffffff;
                    }
                    local_6c[0] = uVar25;
                    if ((int)uVar25 <= (int)uVar26) {
                      local_6c[0] = uVar26;
                    }
                    local_78 = (ulong)local_6c[0] * 0x30;
                    if (((int)local_6c[0] < (int)uVar33) || (0x3fffffff < (int)local_6c[0])) {
                      local_fa0 = 1;
                      local_f90 = local_6c;
                      local_f98 = &DAT_0411b3b8;
                      FUN_03320b50(0x65816502,
                                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                                   ,0x5a,"Invalid requestedCapacity {}",&local_fa0);
                      uVar35 = *(uint *)((long)param_1 + 0x44);
                      uVar33 = uVar35 & 0x3fffffff;
                    }
                    lVar21 = (**(code **)(*(long *)puVar16 + 0x10))(puVar16,local_78,&local_78);
                    if (0 < (int)uVar38) {
                      puVar32 = (undefined8 *)(lVar21 + 0x18);
                      puVar29 = (undefined8 *)(lVar39 + 0x18);
                      uVar20 = (ulong)uVar38;
                      do {
                        puVar32[-3] = puVar29[-3];
                        puVar32[-2] = puVar29[-2];
                        puVar32[-1] = puVar29[-1];
                        puVar29[-2] = 0;
                        puVar29[-1] = 0;
                        puVar29[-3] = 0;
                        *puVar32 = *puVar29;
                        puVar32[1] = puVar29[1];
                        uVar20 = uVar20 - 1;
                        puVar32[2] = puVar29[2];
                        puVar29[1] = 0;
                        puVar29[2] = 0;
                        *puVar29 = 0;
                        puVar32 = puVar32 + 6;
                        puVar29 = puVar29 + 6;
                      } while (uVar20 != 0);
                      uVar20 = 0;
                      do {
                        uVar28 = *(ulong *)(lVar39 + uVar20 * 0x30 + 0x28);
                        if ((uVar28 & 1) != 0) {
                          plVar23 = (long *)(uVar28 & 0xfffffffffffffffe);
                          plVar37 = plVar23 + 1;
                          do {
                            lVar15 = *plVar37;
                            cVar6 = '\x01';
                            bVar40 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                            if (bVar40) {
                              *(int *)plVar37 = (int)lVar15 + -1;
                              cVar6 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar6 != '\0');
                          if ((plVar23 != (long *)0x0) && ((int)lVar15 == 1)) {
                            (**(code **)(*plVar23 + 8))();
                          }
                        }
                        uVar28 = *(ulong *)(lVar39 + uVar20 * 0x30 + 0x10);
                        if ((uVar28 & 1) != 0) {
                          plVar23 = (long *)(uVar28 & 0xfffffffffffffffe);
                          plVar37 = plVar23 + 1;
                          do {
                            lVar15 = *plVar37;
                            cVar6 = '\x01';
                            bVar40 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                            if (bVar40) {
                              *(int *)plVar37 = (int)lVar15 + -1;
                              cVar6 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar6 != '\0');
                          if ((plVar23 != (long *)0x0) && ((int)lVar15 == 1)) {
                            (**(code **)(*plVar23 + 8))();
                          }
                        }
                        uVar20 = uVar20 + 1;
                      } while (uVar20 != uVar38);
                    }
                    if (-1 < (int)uVar35) {
                      (**(code **)(*(long *)puVar16 + 0x18))(puVar16,lVar39,(ulong)uVar33 * 0x30);
                    }
                    if (local_78 < 0xbffffffd0) {
                      uVar27 = (undefined4)(local_78 / 0x30);
                    }
                    else {
                      uVar27 = 0x3fffffff;
                    }
                    *(undefined4 *)((long)param_1 + 0x44) = uVar27;
                    uVar38 = *(uint *)(param_1 + 8);
                    param_1[7] = lVar21;
                  }
                  puVar32 = (undefined8 *)(lVar21 + (long)(int)uVar38 * 0x30);
                  *puVar32 = local_cf8._0_8_;
                  puVar32[1] = local_cf8._8_8_;
                  puVar32[2] = local_ce8;
                  if (((ulong)local_ce8 & 1) != 0) {
                    piVar2 = (int *)(((ulong)local_ce8 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar6 = '\x01';
                      bVar40 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                      if (bVar40) {
                        *piVar2 = *piVar2 + 1;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                  }
                  lVar21 = lVar21 + (long)(int)uVar38 * 0x30;
                  *(undefined8 *)(lVar21 + 0x18) = local_10f0._0_8_;
                  *(undefined8 *)(lVar21 + 0x20) = local_10f0._8_8_;
                  *(undefined8 **)(lVar21 + 0x28) = local_10e0;
                  if (((ulong)local_10e0 & 1) != 0) {
                    piVar2 = (int *)(((ulong)local_10e0 & 0xfffffffffffffffe) + 8);
                    do {
                      cVar6 = '\x01';
                      bVar40 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                      if (bVar40) {
                        *piVar2 = *piVar2 + 1;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                  }
                  *(uint *)(param_1 + 8) = uVar25;
                }
                else if (uVar25 == 6) {
                  uVar33 = local_cd8._4_4_ & 0x3fffffff;
                  iVar19 = (int)local_cd8;
                  uVar20 = local_cd8 & 0xffffffff;
                  uVar25 = (int)local_cd8 + 1;
                  if ((int)uVar33 <= (int)local_cd8) {
                    if (0x3ffffffe < (int)local_cd8) {
                      FUN_032bd0a8(uVar25);
                      uVar33 = local_cd8._4_4_ & 0x3fffffff;
                    }
                    uVar38 = (local_cd8._4_4_ & 0x3fffffff) << 1;
                    if (0x3ffffffe < uVar38) {
                      uVar38 = 0x3fffffff;
                    }
                    local_6c[0] = uVar25;
                    if ((int)uVar25 <= (int)uVar38) {
                      local_6c[0] = uVar38;
                    }
                    local_78 = (ulong)local_6c[0] * 0x30;
                    if (((int)local_6c[0] < (int)uVar33) ||
                       (uVar38 = local_cd8._4_4_, 0x3fffffff < (int)local_6c[0])) {
                      local_fa0 = 1;
                      local_f90 = local_6c;
                      local_f98 = &DAT_0411b3b8;
                      FUN_03320b50(0x65816502,
                                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                                   ,0x5a,"Invalid requestedCapacity {}",&local_fa0);
                      uVar33 = local_cd8._4_4_ & 0x3fffffff;
                      uVar38 = local_cd8._4_4_;
                    }
                    ppuVar24 = (undefined8 **)
                               (**(code **)(*(long *)puVar16 + 0x10))(puVar16,local_78,&local_78);
                    if (0 < iVar19) {
                      uVar28 = 0;
                      do {
                        ppuVar3 = ppuVar24 + uVar28 * 6;
                        ppuVar4 = ppuVar14 + uVar28 * 6;
                        puVar32 = ppuVar4[1];
                        *ppuVar3 = *ppuVar4;
                        ppuVar3[1] = puVar32;
                        puVar32 = ppuVar4[2];
                        ppuVar3[2] = puVar32;
                        if (((ulong)puVar32 & 1) != 0) {
                          piVar2 = (int *)(((ulong)puVar32 & 0xfffffffffffffffe) + 8);
                          do {
                            cVar6 = '\x01';
                            bVar40 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                            if (bVar40) {
                              *piVar2 = *piVar2 + 1;
                              cVar6 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar6 != '\0');
                        }
                        puVar32 = ppuVar4[4];
                        ppuVar3[3] = ppuVar4[3];
                        ppuVar3[4] = puVar32;
                        puVar32 = ppuVar4[5];
                        ppuVar3[5] = puVar32;
                        if (((ulong)puVar32 & 1) != 0) {
                          piVar2 = (int *)(((ulong)puVar32 & 0xfffffffffffffffe) + 8);
                          do {
                            cVar6 = '\x01';
                            bVar40 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                            if (bVar40) {
                              *piVar2 = *piVar2 + 1;
                              cVar6 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar6 != '\0');
                        }
                        uVar28 = uVar28 + 1;
                      } while (uVar28 != uVar20);
                      uVar28 = 0;
                      do {
                        if (((ulong)ppuVar14[uVar28 * 6 + 5] & 1) != 0) {
                          plVar23 = (long *)((ulong)ppuVar14[uVar28 * 6 + 5] & 0xfffffffffffffffe);
                          plVar37 = plVar23 + 1;
                          do {
                            lVar21 = *plVar37;
                            cVar6 = '\x01';
                            bVar40 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                            if (bVar40) {
                              *(int *)plVar37 = (int)lVar21 + -1;
                              cVar6 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar6 != '\0');
                          if ((plVar23 != (long *)0x0) && ((int)lVar21 == 1)) {
                            (**(code **)(*plVar23 + 8))();
                          }
                        }
                        if (((ulong)ppuVar14[uVar28 * 6 + 2] & 1) != 0) {
                          plVar23 = (long *)((ulong)ppuVar14[uVar28 * 6 + 2] & 0xfffffffffffffffe);
                          plVar37 = plVar23 + 1;
                          do {
                            lVar21 = *plVar37;
                            cVar6 = '\x01';
                            bVar40 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                            if (bVar40) {
                              *(int *)plVar37 = (int)lVar21 + -1;
                              cVar6 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar6 != '\0');
                          if ((plVar23 != (long *)0x0) && ((int)lVar21 == 1)) {
                            (**(code **)(*plVar23 + 8))();
                          }
                        }
                        uVar28 = uVar28 + 1;
                      } while (uVar28 != uVar20);
                    }
                    if (-1 < (int)uVar38) {
                      (**(code **)(*(long *)puVar16 + 0x18))(puVar16,ppuVar14,(ulong)uVar33 * 0x30);
                    }
                    if (local_78 < 0xbffffffd0) {
                      uVar27 = (undefined4)(local_78 / 0x30);
                    }
                    else {
                      uVar27 = 0x3fffffff;
                    }
                    local_cd8 = CONCAT44(uVar27,(int)local_cd8);
                    iVar19 = (int)local_cd8;
                    local_ce0 = ppuVar24;
                  }
                  ppuVar14 = local_ce0;
                  ppuVar24 = local_ce0 + (long)iVar19 * 6;
                  lVar21 = (long)iVar19;
                  *ppuVar24 = (undefined8 *)0x0;
                  ppuVar24[1] = (undefined8 *)0x0;
                  ppuVar24[2] = (undefined8 *)0x0;
                  if ((byte *)local_cf8._8_8_ != (byte *)0x0) {
                    bVar5 = *(byte *)local_cf8._8_8_;
                    pbVar34 = (byte *)local_cf8._8_8_;
                    while ((bVar5 & 1) == 0) {
                      pbVar34 = *(byte **)(pbVar34 + 8);
                      bVar5 = *pbVar34;
                    }
                    if ((*(ulong *)(pbVar34 + 0x10) & 0x1f) == 6) {
                      *ppuVar24 = (undefined8 *)local_cf8._0_8_;
                      ppuVar24[1] = (undefined8 *)local_cf8._8_8_;
                      ppuVar24 = local_ce0 + lVar21 * 6 + 2;
                      if (((ulong)local_ce8 & 1) != 0) {
                        piVar2 = (int *)(((ulong)local_ce8 & 0xfffffffffffffffe) + 8);
                        do {
                          cVar6 = '\x01';
                          bVar40 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                          if (bVar40) {
                            *piVar2 = *piVar2 + 1;
                            cVar6 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar6 != '\0');
                      }
                      puVar32 = *ppuVar24;
                      if (((ulong)puVar32 & 1) != 0) {
                        plVar23 = (long *)((ulong)puVar32 & 0xfffffffffffffffe);
                        plVar37 = plVar23 + 1;
                        do {
                          lVar39 = *plVar37;
                          cVar6 = '\x01';
                          bVar40 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                          if (bVar40) {
                            *(int *)plVar37 = (int)lVar39 + -1;
                            cVar6 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar6 != '\0');
                        if ((plVar23 != (long *)0x0) && ((int)lVar39 == 1)) {
                          (**(code **)(*plVar23 + 8))();
                        }
                      }
                      *ppuVar24 = local_ce8;
                    }
                  }
                  ppuVar14[lVar21 * 6 + 3] = (undefined8 *)0x0;
                  ppuVar14[lVar21 * 6 + 4] = (undefined8 *)0x0;
                  ppuVar14[lVar21 * 6 + 5] = (undefined8 *)0x0;
                  if ((byte *)local_10f0._8_8_ != (byte *)0x0) {
                    bVar5 = *(byte *)local_10f0._8_8_;
                    pbVar34 = (byte *)local_10f0._8_8_;
                    while ((bVar5 & 1) == 0) {
                      pbVar34 = *(byte **)(pbVar34 + 8);
                      bVar5 = *pbVar34;
                    }
                    if ((*(ulong *)(pbVar34 + 0x10) & 0x1f) == 6) {
                      ppuVar14[lVar21 * 6 + 3] = (undefined8 *)local_10f0._0_8_;
                      ppuVar14[lVar21 * 6 + 4] = (undefined8 *)local_10f0._8_8_;
                      if (((ulong)local_10e0 & 1) != 0) {
                        piVar2 = (int *)(((ulong)local_10e0 & 0xfffffffffffffffe) + 8);
                        do {
                          cVar6 = '\x01';
                          bVar40 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                          if (bVar40) {
                            *piVar2 = *piVar2 + 1;
                            cVar6 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar6 != '\0');
                      }
                      puVar32 = ppuVar14[lVar21 * 6 + 5];
                      if (((ulong)puVar32 & 1) != 0) {
                        plVar23 = (long *)((ulong)puVar32 & 0xfffffffffffffffe);
                        plVar37 = plVar23 + 1;
                        do {
                          lVar39 = *plVar37;
                          cVar6 = '\x01';
                          bVar40 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                          if (bVar40) {
                            *(int *)plVar37 = (int)lVar39 + -1;
                            cVar6 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar6 != '\0');
                        if ((plVar23 != (long *)0x0) && ((int)lVar39 == 1)) {
                          (**(code **)(*plVar23 + 8))();
                        }
                      }
                      ppuVar14[lVar21 * 6 + 5] = local_10e0;
                    }
                  }
                  local_cd8 = CONCAT44(local_cd8._4_4_,uVar25);
                }
                else {
                  if (uVar25 == 3) goto LAB_03316428;
                  FUN_0330d128(param_1,local_10f0,local_cf8);
                }
                if (((ulong)local_ce8 & 1) != 0) {
                  plVar23 = (long *)((ulong)local_ce8 & 0xfffffffffffffffe);
                  plVar37 = plVar23 + 1;
                  do {
                    lVar21 = *plVar37;
                    cVar6 = '\x01';
                    bVar40 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                    if (bVar40) {
                      *(int *)plVar37 = (int)lVar21 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if ((plVar23 != (long *)0x0) && ((int)lVar21 == 1)) {
                    (**(code **)(*plVar23 + 8))();
                  }
                }
                if (((ulong)local_10e0 & 1) != 0) {
                  plVar23 = (long *)((ulong)local_10e0 & 0xfffffffffffffffe);
                  plVar37 = plVar23 + 1;
                  do {
                    lVar21 = *plVar37;
                    cVar6 = '\x01';
                    bVar40 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                    if (bVar40) {
                      *(int *)plVar37 = (int)lVar21 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if ((plVar23 != (long *)0x0) && ((int)lVar21 == 1)) {
                    (**(code **)(*plVar23 + 8))();
                  }
                }
                iVar18 = iVar18 + 1;
              } while (iVar18 < (int)local_a0);
            }
LAB_033160cc:
            FUN_0330fd24(param_1,local_ce0,local_cd8 & 0xffffffff);
            goto LAB_033160dc;
          }
          if ((param_3[2] & 1) != 0) {
            uVar20 = (**(code **)(*(long *)(param_3[2] & 0xfffffffffffffffe) + 0x28))();
            if ((uVar20 & 1) != 0) {
              goto LAB_03316388;
            }
          }
          if (local_c8 == local_a8) {
            lVar21 = FUN_032f7d50(param_1 + 0xb);
          }
          else {
            lVar21 = FUN_032f800c();
          }
          if (lVar21 == 0) {
            if (DAT_0444ad18 < 2) {
              if (DAT_04350668 == '\0') goto LAB_03316874;
            }
            else if (DAT_04350668 == '\0') {
              local_fa0 = 0;
              local_f90 = (uint *)&DAT_0444acc8;
              local_f88 = 2;
              local_f80 = FUN_032ba19c();
              uStack_f78 = 0;
              local_f70 = 0;
              local_f68 = (char *)0x0;
              local_f60 = 0;
              uStack_f58 = 0;
              if (local_a8 == (byte *)0x0) {
                pcVar22 = "<No name>";
              }
              else {
                pcVar22 = (char *)FUN_032e239c();
              }
              local_10f0._0_8_ = pcVar22;
              FUN_03326338(&local_fa0,"Cannot compile array subtype {}",&DAT_0411bac8,local_10f0);
              local_f68 = 
              "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
              ;
              local_f60 = 0x1d0;
              FUN_033266e0(&local_fa0);
              puVar32 = &uStack_f78;
              goto LAB_03316870;
            }
            FUN_03326a7c(&local_fa0,&DAT_0444acc8,2);
            if (local_a8 == (byte *)0x0) {
              pcVar22 = "<No name>";
            }
            else {
              pcVar22 = (char *)FUN_032e239c();
            }
            local_cf8._0_8_ = pcVar22;
            FUN_03326338(&local_fa0,"Cannot compile array subtype {}",&DAT_0411bac8,local_cf8);
            local_f60 = 0x1d0;
LAB_03316cc0:
            local_f68 = 
            "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
            ;
            FUN_03326adc(&local_fa0);
          }
          else {
            memset(&local_fa0,0,0x288);
            local_e60 = FUN_0331f65c;
            local_ee8 = &LAB_0331f8e8;
            local_f00 = &LAB_0331f6d4;
            local_ef0 = FUN_0331f870;
            local_e58 = &LAB_0331f9d0;
            local_eb0 = &LAB_0331f79c;
            local_e70 = &LAB_0331f954;
            local_d10 = &local_ce0;
            local_e28 = &LAB_0331fb18;
            local_d18 = param_1 + 7;
            local_e10 = &LAB_0331f738;
            local_e18 = &LAB_0331fb8c;
            local_d08 = *param_1;
            local_d00 = param_1;
            iVar18 = FUN_03311a18(&local_fa0,lVar21,local_b0,local_d0,local_a0._4_4_,local_c0._4_4_,
                                  local_c0 & 0xffffffff);
            if (-1 < iVar18) {
              FUN_03306e04(param_1[6],param_3);
              pbVar34 = local_a8;
              lVar21 = DAT_0444a230;
              plVar37 = (long *)param_1[6];
              if ((int)plVar37[5] == 0) {
                pMVar1 = (MutexType *)(DAT_0444a230 + 0xc0);
                nn::os::LockMutex(pMVar1);
                iVar19 = FUN_032dec64(lVar21 + 0x38,pbVar34);
                iVar18 = *(int *)(*(long *)(lVar21 + 0x38) + (long)iVar19 * 0x18 + 0x10);
                nn::os::UnlockMutex(pMVar1);
                pbVar34 = local_a8;
                auVar17 = local_b0;
                if ((-1 < iVar19) && (iVar18 != 0)) {
                  uVar27 = (int)local_a0;
                  if (local_a8 == (byte *)0x0) {
                    uVar20 = 0;
                  }
                  else {
                    uVar20 = FUN_032e3508(local_a8);
                    if ((uVar20 & 1) != 0) {
                      piVar2 = (int *)((uVar20 & 0xfffffffffffffffe) + 8);
                      do {
                        cVar6 = '\x01';
                        bVar40 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                        if (bVar40) {
                          *piVar2 = *piVar2 + 1;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                    }
                  }
                  iVar19 = (int)plVar37[1];
                  iVar18 = iVar19 + 1;
                  lVar21 = *plVar37;
                  if ((int)(*(uint *)((long)plVar37 + 0xc) & 0x3fffffff) <= iVar19) {
                    lVar21 = FUN_03318194(PTR_PTR_0434a080,iVar18);
                    iVar19 = (int)plVar37[1];
                    *plVar37 = lVar21;
                  }
                  puVar31 = (ulong *)(lVar21 + (long)iVar19 * 0x20);
                  puVar31[2] = uVar20;
                  *puVar31 = (ulong)auVar17;
                  puVar31[1] = (ulong)pbVar34;
                  *(undefined4 *)(puVar31 + 3) = uVar27;
                  *(int *)(plVar37 + 1) = iVar18;
                }
              }
              goto LAB_033160cc;
            }
            if (DAT_0444ad18 < 2) {
              if (DAT_04350668 == '\0') goto LAB_03316874;
            }
            else if (DAT_04350668 == '\0') {
              local_10f0._0_8_ = 0;
              local_10e0 = &DAT_0444acc8;
              uStack_10d8 = 2;
              local_10d0 = FUN_032ba19c();
              uStack_10c8 = 0;
              local_10c0 = 0;
              local_10b8 = (char *)0x0;
              puVar32 = &uStack_10c8;
              local_10b0 = 0;
              uStack_10a8 = 0;
              FUN_03326338(local_10f0,"Cannot copy array",PTR_DAT_04372528);
              local_10b8 = 
              "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
              ;
              local_10b0 = 0x1dc;
              plVar37 = (long *)local_10f0;
              goto LAB_03316868;
            }
            FUN_03326a7c(local_10f0,&DAT_0444acc8,2);
            FUN_03326338(local_10f0,"Cannot copy array",PTR_DAT_04372528);
            local_10b8 = 
            "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
            ;
            local_10b0 = 0x1dc;
            FUN_03326adc(local_10f0);
          }
        }
LAB_03316874:
        *(undefined4 *)(param_1 + 1) = 0x80040200;
        iVar18 = (int)local_cd8;
        ppuVar14 = local_ce0;
      }
      local_ce0 = ppuVar14;
      if (iVar18 != 0) {
        if (((ulong)ppuVar14[(long)iVar18 * 6 + -1] & 1) != 0) {
          plVar23 = (long *)((ulong)ppuVar14[(long)iVar18 * 6 + -1] & 0xfffffffffffffffe);
          plVar37 = plVar23 + 1;
          do {
            lVar21 = *plVar37;
            cVar6 = '\x01';
            bVar40 = (bool)ExclusiveMonitorPass(plVar37,0x10);
            if (bVar40) {
              *(int *)plVar37 = (int)lVar21 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if ((plVar23 != (long *)0x0) && ((int)lVar21 == 1)) {
            (**(code **)(*plVar23 + 8))();
          }
        }
        ppuVar24 = ppuVar14 + (long)iVar18 * 6 + -6;
        if (((ulong)ppuVar14[(long)iVar18 * 6 + -4] & 1) != 0) {
          plVar23 = (long *)((ulong)ppuVar14[(long)iVar18 * 6 + -4] & 0xfffffffffffffffe);
          plVar37 = plVar23 + 1;
          do {
            lVar21 = *plVar37;
            cVar6 = '\x01';
            bVar40 = (bool)ExclusiveMonitorPass(plVar37,0x10);
            if (bVar40) {
              *(int *)plVar37 = (int)lVar21 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if ((plVar23 != (long *)0x0) && ((int)lVar21 == 1)) {
            (**(code **)(*plVar23 + 8))();
          }
        }
        while (ppuVar24 != ppuVar14) {
          if (((ulong)ppuVar24[-1] & 1) != 0) {
            plVar23 = (long *)((ulong)ppuVar24[-1] & 0xfffffffffffffffe);
            plVar37 = plVar23 + 1;
            do {
              lVar21 = *plVar37;
              cVar6 = '\x01';
              bVar40 = (bool)ExclusiveMonitorPass(plVar37,0x10);
              if (bVar40) {
                *(int *)plVar37 = (int)lVar21 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if ((plVar23 != (long *)0x0) && ((int)lVar21 == 1)) {
              (**(code **)(*plVar23 + 8))();
            }
          }
          ppuVar3 = ppuVar24 + -4;
          ppuVar24 = ppuVar24 + -6;
          if (((ulong)*ppuVar3 & 1) != 0) {
            plVar23 = (long *)((ulong)*ppuVar3 & 0xfffffffffffffffe);
            plVar37 = plVar23 + 1;
            do {
              lVar21 = *plVar37;
              cVar6 = '\x01';
              bVar40 = (bool)ExclusiveMonitorPass(plVar37,0x10);
              if (bVar40) {
                *(int *)plVar37 = (int)lVar21 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if ((plVar23 != (long *)0x0) && ((int)lVar21 == 1)) {
              (**(code **)(*plVar23 + 8))();
            }
          }
        }
      }
      uVar20 = local_cd8;
      uVar28 = (ulong)local_cd8._4_4_;
      local_cd8 = (ulong)local_cd8._4_4_ << 0x20;
      if ((-1 < (long)uVar20) && (local_ce0 != (undefined8 **)0x0)) {
        (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                  (PTR_PTR_0434a080,local_ce0,(uVar28 & 0x3fffffff) * 0x30);
      }
      auVar12._8_8_ = local_c8;
      auVar12._0_8_ = local_d0;
    }
    if (((ulong)local_b8 & 1) == 0) goto joined_r0x033160fc;
    auVar13._8_8_ = local_c8;
    auVar13._0_8_ = local_d0;
    auVar12._8_8_ = local_c8;
    auVar12._0_8_ = local_d0;
    plVar23 = (long *)((ulong)local_b8 & 0xfffffffffffffffe);
    plVar37 = plVar23 + 1;
    do {
      lVar21 = *plVar37;
      cVar6 = '\x01';
      bVar40 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar40) {
        *(int *)plVar37 = (int)lVar21 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((plVar23 == (long *)0x0) || (auVar12 = auVar13, (int)lVar21 != 1)) goto joined_r0x033160fc;
    (**(code **)(*plVar23 + 8))();
    auVar7._8_8_ = local_a8;
    auVar7._0_8_ = local_b0;
  }
  else {
    plVar23 = plVar37 + 1;
    do {
      lVar21 = *plVar23;
      cVar6 = '\x01';
      bVar40 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar40) {
        *(int *)plVar23 = (int)lVar21 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((plVar37 == (long *)0x0) || ((int)lVar21 != 1)) goto LAB_03315e94;
    (**(code **)(*plVar37 + 8))(plVar37);
    if (-1 < iVar18) goto LAB_03315e98;
LAB_03316efc:
    if (DAT_0444ad18 < 2) {
      if (DAT_04350668 != '\0') goto LAB_033171f8;
    }
    else if (DAT_04350668 == '\0') {
      local_ce0 = (undefined8 **)0x0;
      local_cc8 = 2;
      local_cd0 = &DAT_0444acc8;
      local_cc0 = FUN_032ba19c();
      local_cb8 = 0;
      local_ca8 = (char *)0x0;
      local_cb0 = 0;
      local_c98 = 0;
      local_ca0 = 0;
      FUN_03326338(&local_ce0,"Cannot access array value",PTR_DAT_04372528);
      local_ca8 = 
      "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
      local_ca0 = 0x19a;
      FUN_033266e0(&local_ce0);
      FUN_032c7b9c(&local_cb8);
    }
    else {
LAB_033171f8:
      FUN_03326a7c(&local_ce0,&DAT_0444acc8,2);
      FUN_03326338(&local_ce0,"Cannot access array value",PTR_DAT_04372528);
      local_ca8 = 
      "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
      local_ca0 = 0x19a;
      FUN_03326adc(&local_ce0);
    }
    *(undefined4 *)(param_1 + 1) = 0x80040200;
    auVar12 = _local_d0;
joined_r0x033160fc:
    auVar7._8_8_ = local_a8;
    auVar7._0_8_ = local_b0;
    _local_d0 = auVar12;
  }
  if (((ulong)local_98 & 1) != 0) {
    auVar8._8_8_ = local_a8;
    auVar8._0_8_ = local_b0;
    auVar7._8_8_ = local_a8;
    auVar7._0_8_ = local_b0;
    plVar23 = (long *)((ulong)local_98 & 0xfffffffffffffffe);
    plVar37 = plVar23 + 1;
    do {
      lVar21 = *plVar37;
      cVar6 = '\x01';
      bVar40 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar40) {
        *(int *)plVar37 = (int)lVar21 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((plVar23 != (long *)0x0) && (auVar7 = auVar8, (int)lVar21 == 1)) {
      (**(code **)(*plVar23 + 8))();
      auVar7._8_8_ = local_a8;
      auVar7._0_8_ = local_b0;
    }
  }
joined_r0x03316dac:
  _local_b0 = auVar7;
  if ((local_80 & 1) != 0) {
    plVar23 = (long *)(local_80 & 0xfffffffffffffffe);
    plVar37 = plVar23 + 1;
    do {
      lVar21 = *plVar37;
      cVar6 = '\x01';
      bVar40 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar40) {
        *(int *)plVar37 = (int)lVar21 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((plVar23 != (long *)0x0) && ((int)lVar21 == 1)) {
      (**(code **)(*plVar23 + 8))();
    }
  }
  return;
}


