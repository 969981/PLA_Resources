/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03307360; name: FUN_03307360
 */


void FUN_03307360(undefined8 *param_1,long *param_2,long *param_3,long *param_4)

{
  MutexType *pMVar1;
  int *piVar2;
  long *plVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong extraout_x1;
  ulong extraout_x1_00;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong *puVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  uint uVar27;
  uint uVar28;
  long lVar29;
  uint uVar30;
  long lVar31;
  undefined8 uVar32;
  ulong local_2e8;
  long *local_2e0;
  uint local_2cc;
  ulong local_2c8;
  ulong uStack_2c0;
  ulong local_2b8;
  long local_2b0;
  ulong *local_2a8;
  ulong local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  long local_278;
  undefined8 local_270;
  long *local_268;
  long *local_260;
  int local_258;
  undefined8 local_254;
  undefined8 *local_248;
  char **ppcStack_240;
  undefined *local_238;
  undefined8 **local_230;
  char *local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  char *local_208;
  long local_200;
  long lStack_1f8;
  ulong local_1f0;
  long local_1e8;
  long lStack_1e0;
  ulong local_1d8;
  long local_1d0;
  uint local_1c4;
  ulong local_1c0;
  ulong local_1b8;
  undefined *local_1b0;
  ulong *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  char *local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  
  lVar19 = tpidr_el0;
  if (*(long *)(lVar19 + 0x38d490) == 0) {
    lVar25 = FUN_0333d16c(0,1);
    *(long *)(lVar19 + 0x38d490) = lVar25;
    lVar25 = *(long *)(lVar25 + 0x10);
  }
  else {
    lVar25 = *(long *)(*(long *)(lVar19 + 0x38d490) + 0x10);
  }
  if (lVar25 != 0) {
    puVar20 = *(undefined8 **)(lVar25 + 8);
    uVar15 = (long)puVar20 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar15 <= *(ulong *)(lVar25 + 0x10)) &&
       (*(ulong *)(lVar25 + 8) = uVar15, puVar20 != (undefined8 *)0x0)) {
      *puVar20 = "LtReflect.Clone";
      puVar20[2] = "StStart";
      uVar32 = nn::os::GetSystemTick();
      puVar20[1] = uVar32;
    }
  }
  local_208 = "clone dst={} src={}";
  local_200 = *param_2;
  lStack_1f8 = param_2[1];
  local_1f0 = param_2[2];
  if ((local_1f0 & 1) != 0) {
    piVar2 = (int *)((local_1f0 & 0xfffffffffffffffe) + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_1e8 = *param_3;
  lStack_1e0 = param_3[1];
  local_1d8 = param_3[2];
  if ((local_1d8 & 1) != 0) {
    piVar2 = (int *)((local_1d8 & 0xfffffffffffffffe) + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  ppcStack_240 = &local_208;
  local_248 = &DAT_0444acc8;
  local_228 = 
  "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
  local_220 = 0xc3;
  local_238 = &DAT_0434e5a0;
  local_218 = 0;
  uStack_210 = 0x8000000000000000;
  local_1d0 = lVar25;
  if (DAT_04350668 == '\0') {
    lVar26 = (long)DAT_0444b3b8;
    lVar16 = *(long *)(lVar19 + 0x38d490);
    iVar23 = DAT_0444b3b8;
    if (lVar16 == 0) {
      lVar16 = FUN_0333d16c(0,1);
      iVar23 = DAT_0444b3b8;
      *(long *)(lVar19 + 0x38d490) = lVar16;
    }
    local_230 = *(undefined8 ***)(lVar16 + lVar26 * 8 + 0x18);
    if (lVar16 == 0) {
      lVar16 = FUN_0333d16c(0,1);
      *(long *)(lVar19 + 0x38d490) = lVar16;
    }
    *(undefined8 ***)(lVar16 + (long)iVar23 * 8 + 0x18) = &local_248;
  }
  else {
    local_230 = &local_248;
  }
  local_278 = 0;
  local_270 = 0x8000000000000000;
  local_258 = 0;
  local_254 = 0x80000000;
  local_268 = (long *)0x0;
  local_260 = (long *)0x0;
  lVar16 = param_1[6];
  if (lVar16 == 0) {
    param_1[6] = &local_278;
  }
  (**(code **)(*param_4 + 0x30))(param_4,param_1 + 2);
  *param_1 = param_4;
  lVar26 = *(long *)(lVar19 + 0x38d490);
  if (lVar26 == 0) {
    lVar26 = FUN_0333d16c(0,1);
    *(long *)(lVar19 + 0x38d490) = lVar26;
  }
  lVar26 = *(long *)(lVar26 + 0x10);
  if (lVar26 != 0) {
    puVar20 = *(undefined8 **)(lVar26 + 8);
    uVar15 = (long)puVar20 + 0x17U & 0xfffffffffffffff8;
    if ((uVar15 <= *(ulong *)(lVar26 + 0x10)) &&
       (*(ulong *)(lVar26 + 8) = uVar15, puVar20 != (undefined8 *)0x0)) {
      *puVar20 = "StClone";
      uVar32 = nn::os::GetSystemTick();
      puVar20[1] = uVar32;
    }
  }
  puVar7 = PTR_PTR_0434a080;
  local_288 = 0;
  uStack_280 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_1b8 = 0x30;
  plVar8 = (long *)(**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))(PTR_PTR_0434a080,0x30,&local_1b8)
  ;
  if (local_1b8 < 0xbffffffd0) {
    local_2e8 = local_1b8 / 0x30;
  }
  else {
    local_2e8 = 0x3fffffff;
  }
  lVar26 = param_2[1];
  *plVar8 = *param_2;
  plVar8[1] = lVar26;
  uVar15 = param_2[2];
  plVar8[2] = uVar15;
  if ((uVar15 & 1) != 0) {
    piVar2 = (int *)((uVar15 & 0xfffffffffffffffe) + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar26 = param_3[1];
  plVar8[3] = *param_3;
  plVar8[4] = lVar26;
  uVar15 = param_3[2];
  plVar8[5] = uVar15;
  if ((uVar15 & 1) != 0) {
    piVar2 = (int *)((uVar15 & 0xfffffffffffffffe) + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  uVar22 = *(uint *)(param_1 + 8);
  uVar27 = *(uint *)((long)param_1 + 0x44);
  lVar31 = param_1[7];
  uVar28 = uVar27 & 0x3fffffff;
  uVar30 = uVar22 + 1;
  lVar26 = lVar31;
  if ((int)uVar28 <= (int)uVar22) {
    if (0x3ffffffe < (int)uVar22) {
      FUN_032bd0a8(uVar30);
      uVar27 = *(uint *)((long)param_1 + 0x44);
      uVar28 = uVar27 & 0x3fffffff;
    }
    uVar24 = (uVar27 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar24) {
      uVar24 = 0x3fffffff;
    }
    uVar13 = uVar30;
    if ((int)uVar30 <= (int)uVar24) {
      uVar13 = uVar24;
    }
    local_2c8 = (ulong)uVar13 * 0x30;
    local_1c0 = CONCAT44(local_1c0._4_4_,uVar13);
    if (((int)uVar13 < (int)uVar28) || (0x3fffffff < (int)uVar13)) {
      local_1b8 = 1;
      local_1a8 = &local_1c0;
      local_1b0 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_1b8);
      uVar27 = *(uint *)((long)param_1 + 0x44);
      uVar28 = uVar27 & 0x3fffffff;
    }
    lVar26 = (**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_2c8,&local_2c8);
    if (0 < (int)uVar22) {
      puVar20 = (undefined8 *)(lVar26 + 0x18);
      puVar17 = (undefined8 *)(lVar31 + 0x18);
      uVar15 = (ulong)uVar22;
      do {
        puVar20[-3] = puVar17[-3];
        puVar20[-2] = puVar17[-2];
        puVar20[-1] = puVar17[-1];
        puVar17[-2] = 0;
        puVar17[-1] = 0;
        puVar17[-3] = 0;
        *puVar20 = *puVar17;
        puVar20[1] = puVar17[1];
        uVar15 = uVar15 - 1;
        puVar20[2] = puVar17[2];
        puVar17[1] = 0;
        puVar17[2] = 0;
        *puVar17 = 0;
        puVar20 = puVar20 + 6;
        puVar17 = puVar17 + 6;
      } while (uVar15 != 0);
      uVar15 = 0;
      do {
        uVar18 = *(ulong *)(lVar31 + uVar15 * 0x30 + 0x28);
        if ((uVar18 & 1) != 0) {
          plVar9 = (long *)(uVar18 & 0xfffffffffffffffe);
          plVar10 = plVar9 + 1;
          do {
            lVar29 = *plVar10;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar6) {
              *(int *)plVar10 = (int)lVar29 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((plVar9 != (long *)0x0) && ((int)lVar29 == 1)) {
            (**(code **)(*plVar9 + 8))();
          }
        }
        uVar18 = *(ulong *)(lVar31 + uVar15 * 0x30 + 0x10);
        if ((uVar18 & 1) != 0) {
          plVar9 = (long *)(uVar18 & 0xfffffffffffffffe);
          plVar10 = plVar9 + 1;
          do {
            lVar29 = *plVar10;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar6) {
              *(int *)plVar10 = (int)lVar29 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((plVar9 != (long *)0x0) && ((int)lVar29 == 1)) {
            (**(code **)(*plVar9 + 8))();
          }
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar22);
    }
    if (-1 < (int)uVar27) {
      (**(code **)(*(long *)puVar7 + 0x18))(puVar7,lVar31,(ulong)uVar28 * 0x30);
    }
    if (local_2c8 < 0xbffffffd0) {
      uVar14 = (undefined4)(local_2c8 / 0x30);
    }
    else {
      uVar14 = 0x3fffffff;
    }
    uVar22 = *(uint *)(param_1 + 8);
    param_1[7] = lVar26;
    *(undefined4 *)((long)param_1 + 0x44) = uVar14;
  }
  puVar20 = (undefined8 *)(lVar26 + (long)(int)uVar22 * 0x30);
  *puVar20 = local_288;
  puVar20[1] = uStack_280;
  puVar20[2] = 0;
  puVar20[3] = local_298;
  puVar20[4] = uStack_290;
  puVar20[5] = 0;
  *(uint *)(param_1 + 8) = uVar30;
  uVar30 = 1;
  FUN_0330c35c(param_1,param_2,param_3,1);
  iVar23 = *(int *)(param_1 + 8);
  local_2e0 = plVar8;
  if (iVar23 == 0) {
    local_2cc = 1;
  }
  else {
    uVar30 = 1;
    local_2cc = 1;
    do {
      if (*(int *)(param_1 + 1) < 0) {
        lVar26 = param_1[7];
        lVar31 = lVar26 + (long)iVar23 * 0x30;
        if ((*(ulong *)(lVar31 + -8) & 1) != 0) {
          plVar9 = (long *)(*(ulong *)(lVar31 + -8) & 0xfffffffffffffffe);
          plVar10 = plVar9 + 1;
          do {
            lVar29 = *plVar10;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar6) {
              *(int *)plVar10 = (int)lVar29 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((plVar9 != (long *)0x0) && ((int)lVar29 == 1)) {
            (**(code **)(*plVar9 + 8))();
          }
        }
        lVar29 = lVar31 + -0x30;
        if ((*(ulong *)(lVar31 + -0x20) & 1) != 0) {
          plVar9 = (long *)(*(ulong *)(lVar31 + -0x20) & 0xfffffffffffffffe);
          plVar10 = plVar9 + 1;
          do {
            lVar31 = *plVar10;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar6) {
              *(int *)plVar10 = (int)lVar31 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((plVar9 != (long *)0x0) && ((int)lVar31 == 1)) {
            (**(code **)(*plVar9 + 8))();
          }
        }
        while (lVar29 != lVar26) {
          if ((*(ulong *)(lVar29 + -8) & 1) != 0) {
            plVar9 = (long *)(*(ulong *)(lVar29 + -8) & 0xfffffffffffffffe);
            plVar10 = plVar9 + 1;
            do {
              lVar31 = *plVar10;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar6) {
                *(int *)plVar10 = (int)lVar31 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((plVar9 != (long *)0x0) && ((int)lVar31 == 1)) {
              (**(code **)(*plVar9 + 8))();
            }
          }
          puVar21 = (ulong *)(lVar29 + -0x20);
          lVar29 = lVar29 + -0x30;
          if ((*puVar21 & 1) != 0) {
            plVar9 = (long *)(*puVar21 & 0xfffffffffffffffe);
            plVar10 = plVar9 + 1;
            do {
              lVar31 = *plVar10;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar6) {
                *(int *)plVar10 = (int)lVar31 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((plVar9 != (long *)0x0) && ((int)lVar31 == 1)) {
              (**(code **)(*plVar9 + 8))();
            }
          }
        }
        break;
      }
      lVar26 = param_1[7];
      puVar21 = (ulong *)(lVar26 + ((long)iVar23 + -1) * 0x30);
      local_2c8 = *puVar21;
      uStack_2c0 = puVar21[1];
      local_2b8 = puVar21[2];
      if ((local_2b8 & 1) != 0) {
        piVar2 = (int *)((local_2b8 & 0xfffffffffffffffe) + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = *piVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      lVar26 = lVar26 + ((long)iVar23 + -1) * 0x30;
      local_2b0 = *(long *)(lVar26 + 0x18);
      local_2a8 = *(ulong **)(lVar26 + 0x20);
      local_2a0 = *(ulong *)(lVar26 + 0x28);
      if ((local_2a0 & 1) != 0) {
        piVar2 = (int *)((local_2a0 & 0xfffffffffffffffe) + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = *piVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      lVar26 = param_1[7] + (long)*(int *)(param_1 + 8) * 0x30;
      if ((*(ulong *)(lVar26 + -8) & 1) == 0) {
LAB_03307664:
        uVar15 = *(ulong *)(lVar26 + -0x20);
      }
      else {
        plVar9 = (long *)(*(ulong *)(lVar26 + -8) & 0xfffffffffffffffe);
        plVar10 = plVar9 + 1;
        do {
          lVar31 = *plVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *(int *)plVar10 = (int)lVar31 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((plVar9 == (long *)0x0) || ((int)lVar31 != 1)) goto LAB_03307664;
        (**(code **)(*plVar9 + 8))();
        uVar15 = *(ulong *)(lVar26 + -0x20);
      }
      if ((uVar15 & 1) != 0) {
        plVar9 = (long *)(uVar15 & 0xfffffffffffffffe);
        plVar10 = plVar9 + 1;
        do {
          lVar26 = *plVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *(int *)plVar10 = (int)lVar26 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((plVar9 != (long *)0x0) && ((int)lVar26 == 1)) {
          (**(code **)(*plVar9 + 8))();
        }
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      if (local_2b0 == 0) {
        if ((plVar8[(long)(int)uVar30 * 6 + -1] & 1U) == 0) {
LAB_0330768c:
          uVar15 = plVar8[(long)(int)uVar30 * 6 + -4];
        }
        else {
          plVar9 = (long *)(plVar8[(long)(int)uVar30 * 6 + -1] & 0xfffffffffffffffe);
          plVar10 = plVar9 + 1;
          do {
            lVar26 = *plVar10;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar6) {
              *(int *)plVar10 = (int)lVar26 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((plVar9 == (long *)0x0) || ((int)lVar26 != 1)) goto LAB_0330768c;
          (**(code **)(*plVar9 + 8))();
          uVar15 = plVar8[(long)(int)uVar30 * 6 + -4];
        }
        if ((uVar15 & 1) != 0) {
          plVar9 = (long *)(uVar15 & 0xfffffffffffffffe);
          plVar10 = plVar9 + 1;
          do {
            lVar26 = *plVar10;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar6) {
              *(int *)plVar10 = (int)lVar26 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((plVar9 != (long *)0x0) && ((int)lVar26 == 1)) {
            (**(code **)(*plVar9 + 8))();
          }
        }
        uVar30 = uVar30 - 1;
      }
      else {
        puVar21 = local_2a8;
        if ((*local_2a8 & 1) == 0) {
          puVar21 = (ulong *)local_2a8[1];
          bVar4 = (byte)*puVar21;
          while ((bVar4 & 1) == 0) {
            puVar21 = (ulong *)puVar21[1];
            bVar4 = (byte)*puVar21;
          }
        }
        if ((local_2a8 != (ulong *)0x0) && ((puVar21[2] & 0x1f) == 8)) {
          puVar21 = local_2a8;
          if ((*local_2a8 & 1) == 0) {
            do {
              puVar21 = (ulong *)puVar21[1];
              if (puVar21 == (ulong *)0x0) {
                if (uVar30 == 0) goto LAB_0330770c;
                goto LAB_03308680;
              }
            } while ((*puVar21 & 1) == 0);
          }
          if ((int)(puVar21[2] >> 8) == 0 && uVar30 != 0) {
LAB_03308680:
            lVar26 = (long)(int)uVar30 * 0x30;
            do {
              if ((local_2b0 == *(long *)((long)plVar8 + lVar26 + -0x18)) &&
                 (local_2a8 == *(ulong **)((long)plVar8 + lVar26 + -0x10))) {
                if (DAT_0444ad18 == 0) {
                  if (DAT_04350668 != '\0') goto LAB_033094f4;
                }
                else if (DAT_04350668 == '\0') {
                  local_1a0 = 1;
                  local_1b8 = 0;
                  local_1a8 = &DAT_0444acc8;
                  local_198 = FUN_032ba19c();
                  uStack_190 = 0;
                  local_188 = 0;
                  local_180 = (char *)0x0;
                  local_178 = 0;
                  uStack_170 = 0;
                  FUN_03326338(&local_1b8,"Found loop through array {}",PTR_DAT_04389298,&local_2b0)
                  ;
                  local_178 = 0xf0;
                  local_180 = 
                  "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
                  ;
                  FUN_033266e0(&local_1b8);
                  FUN_032c7b9c(&uStack_190);
                }
                else {
LAB_033094f4:
                  FUN_03326a7c(&local_1b8,&DAT_0444acc8,1);
                  FUN_03326338(&local_1b8,"Found loop through array {}",PTR_DAT_04389298,&local_2b0)
                  ;
                  local_178 = 0xf0;
                  local_180 = 
                  "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
                  ;
                  FUN_03326adc(&local_1b8);
                }
                *(undefined4 *)(param_1 + 1) = 0x80040200;
                break;
              }
              lVar26 = lVar26 + -0x30;
            } while (lVar26 != 0);
          }
        }
LAB_0330770c:
        uVar22 = (uint)local_2e8 & 0x3fffffff;
        uVar28 = uVar30 + 1;
        if ((int)uVar30 < (int)uVar22) {
          plVar10 = plVar8;
        }
        else {
          if (0x3ffffffe < (int)uVar30) {
            FUN_032bd0a8();
          }
          uVar27 = ((uint)local_2e8 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar27) {
            uVar27 = 0x3fffffff;
          }
          local_1c4 = uVar28;
          if ((int)uVar28 <= (int)uVar27) {
            local_1c4 = uVar27;
          }
          local_1c0 = (ulong)local_1c4 * 0x30;
          if (((int)local_1c4 < (int)uVar22) || (0x3fffffff < (int)local_1c4)) {
            local_1b8 = 1;
            local_1a8 = (ulong *)&local_1c4;
            local_1b0 = &DAT_0411b3b8;
            FUN_03320b50(0x65816502,
                         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                         ,0x5a,"Invalid requestedCapacity {}",&local_1b8);
          }
          plVar10 = (long *)(**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_1c0,&local_1c0);
          if (0 < (int)uVar30) {
            plVar9 = plVar10 + 3;
            plVar11 = plVar8 + 3;
            uVar15 = (ulong)uVar30;
            do {
              plVar9[-3] = plVar11[-3];
              plVar9[-2] = plVar11[-2];
              plVar9[-1] = plVar11[-1];
              plVar11[-2] = 0;
              plVar11[-1] = 0;
              plVar11[-3] = 0;
              *plVar9 = *plVar11;
              plVar9[1] = plVar11[1];
              uVar15 = uVar15 - 1;
              plVar9[2] = plVar11[2];
              plVar11[1] = 0;
              plVar11[2] = 0;
              *plVar11 = 0;
              plVar9 = plVar9 + 6;
              plVar11 = plVar11 + 6;
            } while (uVar15 != 0);
            uVar15 = 0;
            do {
              if ((plVar8[uVar15 * 6 + 5] & 1U) != 0) {
                plVar11 = (long *)(plVar8[uVar15 * 6 + 5] & 0xfffffffffffffffe);
                plVar9 = plVar11 + 1;
                do {
                  lVar26 = *plVar9;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                  if (bVar6) {
                    *(int *)plVar9 = (int)lVar26 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if ((plVar11 != (long *)0x0) && ((int)lVar26 == 1)) {
                  (**(code **)(*plVar11 + 8))();
                }
              }
              if ((plVar8[uVar15 * 6 + 2] & 1U) != 0) {
                plVar11 = (long *)(plVar8[uVar15 * 6 + 2] & 0xfffffffffffffffe);
                plVar9 = plVar11 + 1;
                do {
                  lVar26 = *plVar9;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                  if (bVar6) {
                    *(int *)plVar9 = (int)lVar26 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if ((plVar11 != (long *)0x0) && ((int)lVar26 == 1)) {
                  (**(code **)(*plVar11 + 8))();
                }
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 != uVar30);
          }
          if (-1 < (int)(uint)local_2e8) {
            (**(code **)(*(long *)puVar7 + 0x18))(puVar7,local_2e0,(ulong)uVar22 * 0x30);
          }
          if (local_1c0 < 0xbffffffd0) {
            local_2e8 = local_1c0 / 0x30;
          }
          else {
            local_2e8 = 0x3fffffff;
          }
          local_2e0 = plVar10;
        }
        puVar21 = (ulong *)(plVar10 + (long)(int)uVar30 * 6);
        *puVar21 = local_2c8;
        puVar21[1] = uStack_2c0;
        puVar21[2] = local_2b8;
        if ((local_2b8 & 1) != 0) {
          piVar2 = (int *)((local_2b8 & 0xfffffffffffffffe) + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = *piVar2 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plVar10[(long)(int)uVar30 * 6 + 3] = local_2b0;
        plVar10[(long)(int)uVar30 * 6 + 4] = (long)local_2a8;
        plVar10[(long)(int)uVar30 * 6 + 5] = local_2a0;
        if ((local_2a0 & 1) != 0) {
          piVar2 = (int *)((local_2a0 & 0xfffffffffffffffe) + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = *piVar2 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        local_2cc = local_2cc + 1;
        uVar27 = *(uint *)(param_1 + 8);
        uVar24 = *(uint *)((long)param_1 + 0x44);
        lVar26 = param_1[7];
        uVar22 = uVar24 & 0x3fffffff;
        uVar30 = uVar27 + 1;
        if ((int)uVar27 < (int)uVar22) {
          lVar31 = lVar26;
        }
        else {
          if (0x3ffffffe < (int)uVar27) {
            FUN_032bd0a8(uVar30);
            uVar24 = *(uint *)((long)param_1 + 0x44);
            uVar22 = uVar24 & 0x3fffffff;
          }
          uVar13 = (uVar24 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar13) {
            uVar13 = 0x3fffffff;
          }
          local_1c4 = uVar30;
          if ((int)uVar30 <= (int)uVar13) {
            local_1c4 = uVar13;
          }
          local_1c0 = (ulong)local_1c4 * 0x30;
          if (((int)local_1c4 < (int)uVar22) || (0x3fffffff < (int)local_1c4)) {
            local_1b8 = 1;
            local_1a8 = (ulong *)&local_1c4;
            local_1b0 = &DAT_0411b3b8;
            FUN_03320b50(0x65816502,
                         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                         ,0x5a,"Invalid requestedCapacity {}",&local_1b8);
            uVar24 = *(uint *)((long)param_1 + 0x44);
            uVar22 = uVar24 & 0x3fffffff;
          }
          lVar31 = (**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_1c0,&local_1c0);
          if (0 < (int)uVar27) {
            puVar20 = (undefined8 *)(lVar31 + 0x18);
            puVar17 = (undefined8 *)(lVar26 + 0x18);
            uVar15 = (ulong)uVar27;
            do {
              puVar20[-3] = puVar17[-3];
              puVar20[-2] = puVar17[-2];
              puVar20[-1] = puVar17[-1];
              puVar17[-2] = 0;
              puVar17[-1] = 0;
              puVar17[-3] = 0;
              *puVar20 = *puVar17;
              puVar20[1] = puVar17[1];
              uVar15 = uVar15 - 1;
              puVar20[2] = puVar17[2];
              puVar17[1] = 0;
              puVar17[2] = 0;
              *puVar17 = 0;
              puVar20 = puVar20 + 6;
              puVar17 = puVar17 + 6;
            } while (uVar15 != 0);
            uVar15 = 0;
            do {
              uVar18 = *(ulong *)(lVar26 + uVar15 * 0x30 + 0x28);
              if ((uVar18 & 1) != 0) {
                plVar9 = (long *)(uVar18 & 0xfffffffffffffffe);
                plVar8 = plVar9 + 1;
                do {
                  lVar29 = *plVar8;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                  if (bVar6) {
                    *(int *)plVar8 = (int)lVar29 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if ((plVar9 != (long *)0x0) && ((int)lVar29 == 1)) {
                  (**(code **)(*plVar9 + 8))();
                }
              }
              uVar18 = *(ulong *)(lVar26 + uVar15 * 0x30 + 0x10);
              if ((uVar18 & 1) != 0) {
                plVar9 = (long *)(uVar18 & 0xfffffffffffffffe);
                plVar8 = plVar9 + 1;
                do {
                  lVar29 = *plVar8;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                  if (bVar6) {
                    *(int *)plVar8 = (int)lVar29 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if ((plVar9 != (long *)0x0) && ((int)lVar29 == 1)) {
                  (**(code **)(*plVar9 + 8))();
                }
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 != uVar27);
          }
          if (-1 < (int)uVar24) {
            (**(code **)(*(long *)puVar7 + 0x18))(puVar7,lVar26,(ulong)uVar22 * 0x30);
          }
          if (local_1c0 < 0xbffffffd0) {
            uVar14 = (undefined4)(local_1c0 / 0x30);
          }
          else {
            uVar14 = 0x3fffffff;
          }
          uVar27 = *(uint *)(param_1 + 8);
          *(undefined4 *)((long)param_1 + 0x44) = uVar14;
          param_1[7] = lVar31;
        }
        puVar20 = (undefined8 *)(lVar31 + (long)(int)uVar27 * 0x30);
        puVar20[1] = uStack_280;
        puVar20[2] = 0;
        *puVar20 = local_288;
        puVar20[3] = local_298;
        puVar20[4] = uStack_290;
        puVar20[5] = 0;
        *(uint *)(param_1 + 8) = uVar30;
        FUN_0330c35c(param_1,&local_2c8,&local_2b0,0);
        uVar30 = uVar28;
        plVar8 = plVar10;
      }
      if ((local_2a0 & 1) != 0) {
        plVar9 = (long *)(local_2a0 & 0xfffffffffffffffe);
        plVar10 = plVar9 + 1;
        do {
          lVar26 = *plVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *(int *)plVar10 = (int)lVar26 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((plVar9 != (long *)0x0) && ((int)lVar26 == 1)) {
          (**(code **)(*plVar9 + 8))();
        }
      }
      if ((local_2b8 & 1) != 0) {
        plVar9 = (long *)(local_2b8 & 0xfffffffffffffffe);
        plVar10 = plVar9 + 1;
        do {
          lVar26 = *plVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *(int *)plVar10 = (int)lVar26 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((plVar9 != (long *)0x0) && ((int)lVar26 == 1)) {
          (**(code **)(*plVar9 + 8))();
        }
      }
      iVar23 = *(int *)(param_1 + 8);
    } while (iVar23 != 0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  lVar26 = *(long *)(lVar19 + 0x38d490);
  if (lVar26 == 0) {
    lVar26 = FUN_0333d16c(0,1);
    *(long *)(lVar19 + 0x38d490) = lVar26;
  }
  lVar31 = *(long *)(lVar26 + 0x10);
  if (lVar31 == 0) {
LAB_03307b94:
    if (lVar26 != 0) goto LAB_03307b98;
LAB_03307d48:
    lVar26 = FUN_0333d16c(0,1);
    *(long *)(lVar19 + 0x38d490) = lVar26;
    lVar26 = *(long *)(lVar26 + 0x10);
  }
  else {
    puVar20 = *(undefined8 **)(lVar31 + 8);
    uVar15 = (long)puVar20 + 0x17U & 0xfffffffffffffff8;
    if ((*(ulong *)(lVar31 + 0x10) < uVar15) ||
       (*(ulong *)(lVar31 + 8) = uVar15, puVar20 == (undefined8 *)0x0)) goto LAB_03307b94;
    *puVar20 = "MiNumClones";
    *(float *)(puVar20 + 1) = (float)local_2cc;
    lVar26 = *(long *)(lVar19 + 0x38d490);
    if (lVar26 == 0) goto LAB_03307d48;
LAB_03307b98:
    lVar26 = *(long *)(lVar26 + 0x10);
  }
  if (lVar26 != 0) {
    puVar20 = *(undefined8 **)(lVar26 + 8);
    uVar15 = (long)puVar20 + 0x17U & 0xfffffffffffffff8;
    if ((uVar15 <= *(ulong *)(lVar26 + 0x10)) &&
       (*(ulong *)(lVar26 + 8) = uVar15, puVar20 != (undefined8 *)0x0)) {
      *puVar20 = "StEnd";
      uVar32 = nn::os::GetSystemTick();
      puVar20[1] = uVar32;
    }
  }
  (**(code **)(*param_4 + 0x38))(param_4,param_1 + 1);
  if (*(int *)(param_1 + 1) < 0) {
    if (DAT_0444ad18 < 2) {
      if (DAT_04350668 != '\0') goto LAB_03308b14;
    }
    else if (DAT_04350668 == '\0') {
      local_1a0 = 2;
      local_1b8 = 0;
      local_1a8 = &DAT_0444acc8;
      local_198 = FUN_032ba19c();
      uStack_190 = 0;
      local_188 = 0;
      local_180 = (char *)0x0;
      local_178 = 0;
      uStack_170 = 0;
      FUN_03326338(&local_1b8,"Unable to clone object {} or one of its dependencies",
                   PTR_DAT_04389298,param_3);
      local_178 = 0x134;
      local_180 = 
      "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
      FUN_033266e0(&local_1b8);
      FUN_032c7b9c(&uStack_190);
    }
    else {
LAB_03308b14:
      FUN_03326a7c(&local_1b8,&DAT_0444acc8,2);
      FUN_03326338(&local_1b8,"Unable to clone object {} or one of its dependencies",
                   PTR_DAT_04389298,param_3);
      local_178 = 0x134;
      local_180 = 
      "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
      FUN_03326adc(&local_1b8);
    }
    uVar15 = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    if ((uVar15 & 1) != 0) {
      plVar9 = (long *)(uVar15 & 0xfffffffffffffffe);
      plVar10 = plVar9 + 1;
      do {
        lVar19 = *plVar10;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *(int *)plVar10 = (int)lVar19 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((plVar9 != (long *)0x0) && ((int)lVar19 == 1)) {
        (**(code **)(*plVar9 + 8))();
      }
    }
LAB_033084bc:
    if (lVar16 == 0) {
LAB_03308d0c:
      param_1[6] = 0;
    }
  }
  else {
    if (*(int *)(param_1[6] + 0x28) != 0) goto LAB_033084bc;
    if (*(long *)(lVar19 + 0x38d490) == 0) {
      lVar26 = FUN_0333d16c(0,1);
      *(long *)(lVar19 + 0x38d490) = lVar26;
      lVar26 = *(long *)(lVar26 + 0x10);
      if (lVar26 != 0) goto LAB_03307bfc;
LAB_03307c10:
      puVar21 = (ulong *)param_2[1];
      if (puVar21 == (ulong *)0x0) goto LAB_03307ca4;
LAB_03307c18:
      lVar26 = *param_2;
      uVar15 = FUN_032e225c(puVar21,&DAT_043568f0);
      if ((uVar15 & 1) == 0) goto LAB_03307ca4;
      uVar15 = 0;
      do {
        uVar28 = (uint)uVar15;
        uVar22 = (uint)*puVar21;
        if ((uVar22 >> 0x15 & 1) != 0) {
          uVar28 = (uVar22 & 0x1fffff) - (uVar22 >> 1 & 0x55555);
          uVar28 = (uVar28 >> 2 & 0x33333333) + (uVar28 & 0x33333333);
          uVar15 = puVar21[(ulong)((uVar28 + (uVar28 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] |
                   uVar15;
          uVar28 = (uint)uVar15;
        }
        if ((*puVar21 & 1) != 0) break;
        uVar28 = (uint)uVar15;
        puVar21 = (ulong *)puVar21[1];
      } while (puVar21 != (ulong *)0x0);
      if ((lVar26 == 0) || ((uVar28 >> 3 & 1) != 0)) goto LAB_03307ca4;
      lVar31 = param_1[6];
      FUN_032d645c(lVar26);
      plVar10 = *(long **)(lVar31 + 0x10);
      *(long *)(lVar31 + 0x10) = lVar26;
      if ((plVar10 == (long *)0x0) || (plVar10[1] == 0)) goto LAB_03307ca4;
      plVar9 = plVar10 + 2;
      do {
        lVar26 = *plVar9;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = lVar26 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar26 + -1 != 0) goto LAB_03307ca4;
      (**(code **)(*plVar10 + 0x18))();
      iVar23 = *(int *)(param_1 + 10);
    }
    else {
      lVar26 = *(long *)(*(long *)(lVar19 + 0x38d490) + 0x10);
      if (lVar26 == 0) goto LAB_03307c10;
LAB_03307bfc:
      puVar20 = *(undefined8 **)(lVar26 + 8);
      uVar15 = (long)puVar20 + 0x17U & 0xfffffffffffffff8;
      if ((*(ulong *)(lVar26 + 0x10) < uVar15) ||
         (*(ulong *)(lVar26 + 8) = uVar15, puVar20 == (undefined8 *)0x0)) goto LAB_03307c10;
      *puVar20 = "StAfterReflectNew";
      uVar32 = nn::os::GetSystemTick();
      puVar20[1] = uVar32;
      puVar21 = (ulong *)param_2[1];
      if (puVar21 != (ulong *)0x0) goto LAB_03307c18;
LAB_03307ca4:
      iVar23 = *(int *)(param_1 + 10);
    }
    if (iVar23 != 0) {
      puVar20 = (undefined8 *)param_1[9];
      lVar26 = (long)iVar23 << 3;
      do {
        lVar29 = param_1[6];
        iVar12 = *(int *)(lVar29 + 0x20);
        uVar32 = *puVar20;
        lVar31 = *(long *)(lVar29 + 0x18);
        iVar23 = iVar12 + 1;
        if ((int)(*(uint *)(lVar29 + 0x24) & 0x3fffffff) <= iVar12) {
          lVar31 = FUN_03317834(puVar7,iVar23);
          iVar12 = *(int *)(lVar29 + 0x20);
          *(long *)(lVar29 + 0x18) = lVar31;
        }
        puVar20 = puVar20 + 1;
        lVar26 = lVar26 + -8;
        *(undefined8 *)(lVar31 + (long)iVar12 * 8) = uVar32;
        *(int *)(lVar29 + 0x20) = iVar23;
      } while (lVar26 != 0);
    }
    if (lVar16 == 0) {
      if (*(long *)(lVar19 + 0x38d490) == 0) {
        lVar16 = FUN_0333d16c(0,1);
        *(long *)(lVar19 + 0x38d490) = lVar16;
        uVar15 = *(ulong *)(lVar16 + 0x10);
      }
      else {
        uVar15 = *(ulong *)(*(long *)(lVar19 + 0x38d490) + 0x10);
      }
      if (uVar15 != 0) {
        puVar20 = *(undefined8 **)(uVar15 + 8);
        uVar18 = (long)puVar20 + 0x17U & 0xfffffffffffffff8;
        if ((uVar18 <= *(ulong *)(uVar15 + 0x10)) &&
           (*(ulong *)(uVar15 + 8) = uVar18, puVar20 != (undefined8 *)0x0)) {
          *puVar20 = "TtReflect.CallAfterReflectNew";
          uVar32 = nn::os::GetSystemTick();
          puVar20[1] = uVar32;
        }
      }
      local_2c8 = uVar15;
      if (local_254._4_4_ == 0) {
        if (*(long *)(lVar19 + 0x38d490) == 0) {
          lVar16 = FUN_0333d16c(0,1);
          *(long *)(lVar19 + 0x38d490) = lVar16;
          lVar19 = *(long *)(lVar16 + 0x10);
          if (lVar19 != 0) goto LAB_03308198;
LAB_033081ac:
        }
        else {
          lVar19 = *(long *)(*(long *)(lVar19 + 0x38d490) + 0x10);
          if (lVar19 == 0) goto LAB_033081ac;
LAB_03308198:
          puVar20 = *(undefined8 **)(lVar19 + 8);
          uVar18 = (long)puVar20 + 0x17U & 0xfffffffffffffff8;
          if (*(ulong *)(lVar19 + 0x10) < uVar18) goto LAB_033081ac;
          *(ulong *)(lVar19 + 8) = uVar18;
          if (puVar20 == (undefined8 *)0x0) goto LAB_033081ac;
          *puVar20 = "MiNumVars";
          *(float *)(puVar20 + 1) = (float)(int)local_270;
        }
        if ((int)local_270 != 0) {
          pMVar1 = (MutexType *)(DAT_0444ad30 + 0x18);
          nn::os::LockMutex(pMVar1);
          lVar19 = (long)(int)local_270;
          if (0 < (int)local_270) {
            puVar20 = (undefined8 *)(local_278 + (lVar19 + -1) * 0x20);
            iVar23 = *(int *)(puVar20 + 3);
            if (iVar23 < 0) {
              iVar23 = -iVar23;
            }
            FUN_032dc220(*puVar20,puVar20[1],iVar23);
            if (0 < lVar19 + -1) {
              puVar20 = (undefined8 *)(local_278 + (lVar19 + -2) * 0x20);
              iVar23 = *(int *)(puVar20 + 3);
              if (iVar23 < 0) {
                iVar23 = -iVar23;
              }
              FUN_032dc220(*puVar20,puVar20[1],iVar23);
              if (0 < lVar19 + -2) {
                puVar20 = (undefined8 *)(local_278 + (lVar19 + -3) * 0x20);
                iVar23 = *(int *)(puVar20 + 3);
                if (iVar23 < 0) {
                  iVar23 = -iVar23;
                }
                FUN_032dc220(*puVar20,puVar20[1],iVar23);
                if (0 < lVar19 + -3) {
                  lVar16 = lVar19 + -4;
                  puVar20 = (undefined8 *)(local_278 + lVar16 * 0x20);
                  iVar23 = *(int *)(puVar20 + 3);
                  if (iVar23 < 0) {
                    iVar23 = -iVar23;
                  }
                  FUN_032dc220(*puVar20,puVar20[1],iVar23);
                  if (0 < lVar16) {
                    lVar19 = lVar19 << 5;
                    do {
                      lVar26 = local_278 + lVar19;
                      lVar16 = lVar16 + -1;
                      uVar22 = *(uint *)(lVar26 + -0x88);
                      uVar28 = -uVar22;
                      if ((uVar22 & 0x80000000) == 0) {
                        uVar28 = uVar22;
                      }
                      FUN_032dc220(*(undefined8 *)(lVar26 + -0xa0),*(undefined8 *)(lVar26 + -0x98),
                                   uVar28);
                      lVar19 = lVar19 + -0x20;
                    } while (0 < lVar16);
                  }
                }
              }
            }
          }
          nn::os::UnlockMutex(pMVar1);
        }
        if (local_258 != 0) {
          lVar19 = (long)local_258 << 3;
          plVar10 = local_260;
          do {
            if (*(ulong *)(*plVar10 + 0x10) < 2) {
              plVar9 = (long *)*plVar10;
              if (plVar9 == (long *)0x0) {
                local_1c0 = 0;
              }
              else if ((undefined8 *)*plVar9 == (undefined8 *)0x0) {
                FUN_032e0ab0(plVar9,&DAT_043568f0);
                local_1c0 = extraout_x1_00;
              }
              else {
                (**(code **)*plVar9)();
                local_1c0 = extraout_x1;
              }
              local_1b8 = 1;
              local_1a8 = &local_1c0;
              local_1b0 = PTR_DAT_043891f8;
              FUN_03320b50(0x5c9ebbbc,
                           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
                           ,0x2f4,
                           "A cloned object of type \'{}\' has stopped being referenced before/while calling afterReflectNew"
                           ,&local_1b8);
            }
            plVar10 = plVar10 + 1;
            lVar19 = lVar19 + -8;
          } while (lVar19 != 0);
        }
        lVar19 = local_278;
        if ((int)local_270 != 0) {
          lVar16 = local_278 + (long)(int)local_270 * 0x20;
          if ((*(ulong *)(lVar16 + -0x10) & 1) != 0) {
            plVar9 = (long *)(*(ulong *)(lVar16 + -0x10) & 0xfffffffffffffffe);
            plVar10 = plVar9 + 1;
            do {
              lVar26 = *plVar10;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar6) {
                *(int *)plVar10 = (int)lVar26 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((plVar9 != (long *)0x0) && ((int)lVar26 == 1)) {
              (**(code **)(*plVar9 + 8))();
            }
          }
          if (lVar16 + -0x20 != lVar19) {
            lVar26 = lVar16 + -0x40;
            if ((*(ulong *)(lVar16 + -0x30) & 1) != 0) {
              plVar9 = (long *)(*(ulong *)(lVar16 + -0x30) & 0xfffffffffffffffe);
              plVar10 = plVar9 + 1;
              do {
                iVar23 = (int)*plVar10;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar6) {
                  *(int *)plVar10 = iVar23 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') goto LAB_03308bc4;
              } while( true );
            }
LAB_033082d8:
            if (lVar26 != lVar19) {
              while( true ) {
                puVar21 = (ulong *)(lVar26 + -0x10);
                lVar26 = lVar26 + -0x20;
                if ((*puVar21 & 1) == 0) break;
                plVar9 = (long *)(*puVar21 & 0xfffffffffffffffe);
                plVar10 = plVar9 + 1;
                do {
                  iVar23 = (int)*plVar10;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                  if (bVar6) {
                    *(int *)plVar10 = iVar23 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
LAB_03308bc4:
                if ((plVar9 == (long *)0x0) || (iVar23 != 1)) break;
                (**(code **)(*plVar9 + 8))();
                if (lVar26 == lVar19) goto LAB_03308bf0;
              }
              goto LAB_033082d8;
            }
          }
        }
LAB_03308bf0:
        iVar23 = local_258;
        plVar10 = local_260;
        local_270 = local_270 & 0xffffffff00000000;
        if (local_258 != 0) {
          plVar11 = local_260 + (long)local_258 + -1;
          plVar9 = (long *)*plVar11;
          if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
            plVar3 = plVar9 + 2;
            do {
              lVar19 = *plVar3;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar6) {
                *plVar3 = lVar19 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar19 + -1 == 0) {
              (**(code **)(*plVar9 + 0x18))();
            }
          }
          if (plVar11 != plVar10) {
            plVar9 = (long *)plVar10[(long)iVar23 + -2];
            if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
              plVar11 = plVar9 + 2;
              do {
                lVar19 = *plVar11;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                if (bVar6) {
                  *plVar11 = lVar19 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar19 + -1 == 0) {
                (**(code **)(*plVar9 + 0x18))();
              }
            }
            if (plVar10 + (long)iVar23 + -2 != plVar10) {
              plVar9 = (long *)plVar10[(long)iVar23 + -3];
              if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
                plVar11 = plVar9 + 2;
                do {
                  lVar19 = *plVar11;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                  if (bVar6) {
                    *plVar11 = lVar19 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar19 + -1 == 0) {
                  (**(code **)(*plVar9 + 0x18))();
                }
              }
              if (plVar10 + (long)iVar23 + -3 != plVar10) {
                plVar9 = (long *)plVar10[(long)iVar23 + -4];
                if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
                  plVar11 = plVar9 + 2;
                  do {
                    lVar19 = *plVar11;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar6) {
                      *plVar11 = lVar19 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (lVar19 + -1 == 0) {
                    (**(code **)(*plVar9 + 0x18))();
                  }
                }
                if (plVar10 + (long)iVar23 + -4 != plVar10) {
                  plVar9 = plVar10 + (long)iVar23 + -5;
                  plVar11 = (long *)*plVar9;
                  if (plVar11 == (long *)0x0) goto LAB_03309554;
                  if (plVar11[1] == 0) goto LAB_03309554;
                  plVar3 = plVar11 + 2;
                  do {
                    lVar19 = *plVar3 + -1;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                    if (bVar6) {
                      *plVar3 = lVar19;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  do {
                    if (lVar19 == 0) {
                      (**(code **)(*plVar11 + 0x18))();
                    }
LAB_03309554:
                    do {
                      if (plVar9 == plVar10) goto LAB_03308cc4;
                      plVar9 = plVar9 + -1;
                      plVar11 = (long *)*plVar9;
                    } while ((plVar11 == (long *)0x0) || (plVar11[1] == 0));
                    plVar3 = plVar11 + 2;
                    do {
                      lVar19 = *plVar3 + -1;
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                      if (bVar6) {
                        *plVar3 = lVar19;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                  } while( true );
                }
              }
            }
          }
        }
LAB_03308cc4:
        plVar10 = local_268;
        local_258 = 0;
        local_268 = (long *)0x0;
        if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
          plVar9 = plVar10 + 2;
          do {
            lVar19 = *plVar9;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar6) {
              *plVar9 = lVar19 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar19 + -1 == 0) {
            (**(code **)(*plVar10 + 0x18))();
          }
        }
      }
      else if (DAT_0444ad18 == 0) {
        if (DAT_04350668 != '\0') goto LAB_033084d8;
      }
      else if (DAT_04350668 == '\0') {
        local_1a0 = 1;
        local_1b8 = 0;
        local_1a8 = &DAT_0444acc8;
        local_198 = FUN_032ba19c();
        uStack_190 = 0;
        local_188 = 0;
        local_180 = (char *)0x0;
        local_178 = 0;
        uStack_170 = 0;
        FUN_03326338(&local_1b8,"AfterReflectNew should never be called from this handler",
                     PTR_DAT_04372528);
        local_178 = 0x2e0;
        local_180 = 
        "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
        FUN_033266e0(&local_1b8);
        FUN_032c7b9c(&uStack_190);
      }
      else {
LAB_033084d8:
        FUN_03326a7c(&local_1b8,&DAT_0444acc8,1);
        FUN_03326338(&local_1b8,"AfterReflectNew should never be called from this handler",
                     PTR_DAT_04372528);
        local_178 = 0x2e0;
        local_180 = 
        "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
        FUN_03326adc(&local_1b8);
      }
      if (uVar15 != 0) {
        puVar20 = *(undefined8 **)(uVar15 + 8);
        uVar18 = (long)puVar20 + 0x17U & 0xfffffffffffffff8;
        if ((uVar18 <= *(ulong *)(uVar15 + 0x10)) &&
           (*(ulong *)(uVar15 + 8) = uVar18, puVar20 != (undefined8 *)0x0)) {
          *puVar20 = &DAT_0390f40e;
          uVar32 = nn::os::GetSystemTick();
          puVar20[1] = uVar32;
        }
      }
      goto LAB_03308d0c;
    }
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  if (uVar30 != 0) {
    if ((plVar8[(long)(int)uVar30 * 6 + -1] & 1U) != 0) {
      plVar9 = (long *)(plVar8[(long)(int)uVar30 * 6 + -1] & 0xfffffffffffffffe);
      plVar10 = plVar9 + 1;
      do {
        lVar19 = *plVar10;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *(int *)plVar10 = (int)lVar19 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((plVar9 != (long *)0x0) && ((int)lVar19 == 1)) {
        (**(code **)(*plVar9 + 8))();
      }
    }
    plVar10 = plVar8 + (long)(int)uVar30 * 6 + -6;
    if ((plVar8[(long)(int)uVar30 * 6 + -4] & 1U) != 0) {
      plVar11 = (long *)(plVar8[(long)(int)uVar30 * 6 + -4] & 0xfffffffffffffffe);
      plVar9 = plVar11 + 1;
      do {
        lVar19 = *plVar9;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *(int *)plVar9 = (int)lVar19 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((plVar11 != (long *)0x0) && ((int)lVar19 == 1)) {
        (**(code **)(*plVar11 + 8))();
      }
    }
    while (plVar10 != plVar8) {
      if ((plVar10[-1] & 1U) != 0) {
        plVar11 = (long *)(plVar10[-1] & 0xfffffffffffffffe);
        plVar9 = plVar11 + 1;
        do {
          lVar19 = *plVar9;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *(int *)plVar9 = (int)lVar19 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((plVar11 != (long *)0x0) && ((int)lVar19 == 1)) {
          (**(code **)(*plVar11 + 8))();
        }
      }
      puVar21 = (ulong *)(plVar10 + -4);
      plVar10 = plVar10 + -6;
      if ((*puVar21 & 1) != 0) {
        plVar11 = (long *)(*puVar21 & 0xfffffffffffffffe);
        plVar9 = plVar11 + 1;
        do {
          lVar19 = *plVar9;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *(int *)plVar9 = (int)lVar19 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((plVar11 != (long *)0x0) && ((int)lVar19 == 1)) {
          (**(code **)(*plVar11 + 8))();
        }
      }
    }
  }
  if ((plVar8 != (long *)0x0) && (-1 < (int)(uint)local_2e8)) {
    (**(code **)(*(long *)puVar7 + 0x18))
              (puVar7,local_2e0,(ulong)((uint)local_2e8 & 0x3fffffff) * 0x30);
  }
  iVar23 = local_258;
  plVar8 = local_260;
  if (local_258 != 0) {
    plVar9 = local_260 + (long)local_258 + -1;
    plVar10 = (long *)*plVar9;
    if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
      plVar11 = plVar10 + 2;
      do {
        lVar19 = *plVar11;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar19 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar19 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))();
      }
    }
    if (plVar9 != plVar8) {
      plVar10 = (long *)plVar8[(long)iVar23 + -2];
      if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
        plVar9 = plVar10 + 2;
        do {
          lVar19 = *plVar9;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *plVar9 = lVar19 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar19 + -1 == 0) {
          (**(code **)(*plVar10 + 0x18))();
        }
      }
      if (plVar8 + (long)iVar23 + -2 != plVar8) {
        plVar10 = (long *)plVar8[(long)iVar23 + -3];
        if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
          plVar9 = plVar10 + 2;
          do {
            lVar19 = *plVar9;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar6) {
              *plVar9 = lVar19 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar19 + -1 == 0) {
            (**(code **)(*plVar10 + 0x18))();
          }
        }
        if (plVar8 + (long)iVar23 + -3 != plVar8) {
          plVar10 = (long *)plVar8[(long)iVar23 + -4];
          if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
            plVar9 = plVar10 + 2;
            do {
              lVar19 = *plVar9;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar6) {
                *plVar9 = lVar19 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar19 + -1 == 0) {
              (**(code **)(*plVar10 + 0x18))();
            }
          }
          if (plVar8 + (long)iVar23 + -4 != plVar8) {
            plVar10 = plVar8 + (long)iVar23 + -5;
            plVar9 = (long *)*plVar10;
            if (plVar9 == (long *)0x0) goto LAB_03309594;
            if (plVar9[1] == 0) goto LAB_03309594;
            plVar11 = plVar9 + 2;
            do {
              lVar19 = *plVar11 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar6) {
                *plVar11 = lVar19;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            do {
              if (lVar19 == 0) {
                (**(code **)(*plVar9 + 0x18))();
              }
LAB_03309594:
              do {
                if (plVar10 == plVar8) goto LAB_03308e18;
                plVar10 = plVar10 + -1;
                plVar9 = (long *)*plVar10;
              } while ((plVar9 == (long *)0x0) || (plVar9[1] == 0));
              plVar11 = plVar9 + 2;
              do {
                lVar19 = *plVar11 + -1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                if (bVar6) {
                  *plVar11 = lVar19;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            } while( true );
          }
        }
      }
    }
  }
LAB_03308e18:
  local_258 = 0;
  if ((-1 < (int)local_254) && (local_260 != (long *)0x0)) {
    (**(code **)(*(long *)puVar7 + 0x18))(puVar7,local_260,(local_254 & 0x3fffffff) << 3);
  }
  local_260 = (long *)0x0;
  local_254 = CONCAT44(local_254._4_4_,0x80000000);
  if ((local_268 != (long *)0x0) && (local_268[1] != 0)) {
    plVar8 = local_268 + 2;
    do {
      lVar19 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar19 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar19 + -1 == 0) {
      (**(code **)(*local_268 + 0x18))();
      lVar19 = local_278;
      goto joined_r0x03308e7c;
    }
  }
  lVar19 = local_278;
joined_r0x03308e7c:
  local_278 = lVar19;
  if ((int)local_270 != 0) {
    lVar16 = lVar19 + (long)(int)local_270 * 0x20;
    if ((*(ulong *)(lVar16 + -0x10) & 1) != 0) {
      plVar10 = (long *)(*(ulong *)(lVar16 + -0x10) & 0xfffffffffffffffe);
      plVar8 = plVar10 + 1;
      do {
        lVar26 = *plVar8;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *(int *)plVar8 = (int)lVar26 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((plVar10 != (long *)0x0) && ((int)lVar26 == 1)) {
        (**(code **)(*plVar10 + 8))();
      }
    }
    if (lVar16 + -0x20 != lVar19) {
      lVar26 = lVar16 + -0x40;
      if ((*(ulong *)(lVar16 + -0x30) & 1) != 0) {
        plVar10 = (long *)(*(ulong *)(lVar16 + -0x30) & 0xfffffffffffffffe);
        plVar8 = plVar10 + 1;
        do {
          iVar23 = (int)*plVar8;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar6) {
            *(int *)plVar8 = iVar23 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_033090ec;
        } while( true );
      }
LAB_03308ea8:
      if (lVar26 != lVar19) {
        while( true ) {
          puVar21 = (ulong *)(lVar26 + -0x10);
          lVar26 = lVar26 + -0x20;
          if ((*puVar21 & 1) == 0) break;
          plVar10 = (long *)(*puVar21 & 0xfffffffffffffffe);
          plVar8 = plVar10 + 1;
          do {
            iVar23 = (int)*plVar8;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar6) {
              *(int *)plVar8 = iVar23 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_033090ec:
          if ((plVar10 == (long *)0x0) || (iVar23 != 1)) break;
          (**(code **)(*plVar10 + 8))();
          if (lVar26 == lVar19) goto LAB_03309110;
        }
        goto LAB_03308ea8;
      }
    }
  }
LAB_03309110:
  uVar15 = local_270;
  uVar18 = (ulong)local_270._4_4_;
  local_270 = (ulong)local_270._4_4_ << 0x20;
  if ((-1 < (long)uVar15) && (local_278 != 0)) {
    (**(code **)(*(long *)puVar7 + 0x18))(puVar7,local_278,(uVar18 & 0x3fffffff) << 5);
  }
  FUN_03326bd8(&local_248);
  if ((local_1d8 & 1) != 0) {
    plVar10 = (long *)(local_1d8 & 0xfffffffffffffffe);
    plVar8 = plVar10 + 1;
    do {
      lVar19 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *(int *)plVar8 = (int)lVar19 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((plVar10 != (long *)0x0) && ((int)lVar19 == 1)) {
      (**(code **)(*plVar10 + 8))();
    }
  }
  if ((local_1f0 & 1) != 0) {
    plVar10 = (long *)(local_1f0 & 0xfffffffffffffffe);
    plVar8 = plVar10 + 1;
    do {
      lVar19 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *(int *)plVar8 = (int)lVar19 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((plVar10 != (long *)0x0) && ((int)lVar19 == 1)) {
      (**(code **)(*plVar10 + 8))();
    }
  }
  if (lVar25 != 0) {
    puVar20 = *(undefined8 **)(lVar25 + 8);
    uVar15 = (long)puVar20 + 0x17U & 0xfffffffffffffff8;
    if ((uVar15 <= *(ulong *)(lVar25 + 0x10)) &&
       (*(ulong *)(lVar25 + 8) = uVar15, puVar20 != (undefined8 *)0x0)) {
      *puVar20 = &DAT_03922da5;
      uVar32 = nn::os::GetSystemTick();
      puVar20[1] = uVar32;
    }
  }
  return;
}


