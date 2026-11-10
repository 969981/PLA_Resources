/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b31604; name: FUN_02b31604
 */


/* WARNING: Removing unreachable block (ram,0x02b31a1c) */
/* WARNING: Removing unreachable block (ram,0x02b31a20) */
/* WARNING: Removing unreachable block (ram,0x02b31a28) */
/* WARNING: Removing unreachable block (ram,0x02b31a30) */
/* WARNING: Removing unreachable block (ram,0x02b31a34) */

void FUN_02b31604(undefined1 *param_1,long *param_2,long param_3,undefined8 *param_4,long *param_5,
                 long *param_6,uint param_7,long *param_8)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  byte bVar7;
  ushort uVar8;
  char cVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  bool bVar14;
  undefined4 uVar15;
  int iVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  ulong uVar20;
  int *piVar21;
  long *plVar22;
  long lVar23;
  uint uVar24;
  ulong uVar25;
  long *plVar26;
  ulong uVar27;
  ulong uVar28;
  uint *puVar29;
  long *plVar30;
  byte *pbVar31;
  long *plVar32;
  undefined1 *puVar33;
  long *plVar34;
  byte *pbVar35;
  uint *puVar36;
  long lVar37;
  size_t sVar38;
  char *pcVar39;
  long *plVar40;
  ushort *puVar41;
  long lVar42;
  ulong *puVar43;
  long *plVar44;
  long lVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  long *local_120;
  byte *local_118;
  size_t local_110;
  long *local_108;
  long *local_100;
  char *pcStack_f8;
  size_t local_f0;
  long *local_e8;
  undefined4 local_e0;
  undefined1 *local_d8;
  byte *local_d0;
  size_t local_c8;
  long *local_c0;
  long *local_b8;
  byte *local_b0;
  size_t local_a8;
  long *local_a0;
  undefined1 local_98 [16];
  size_t local_88;
  long *local_80;
  long *local_78;
  long *local_70 [2];
  
  uVar19 = *param_4;
  uVar5 = param_4[1];
  uVar4 = param_4[2];
  plVar40 = (long *)param_4[3];
  if (plVar40 != (long *)0x0) {
    (**(code **)(*plVar40 + 0x18))(plVar40);
  }
  *(undefined8 *)(param_1 + 8) = uVar19;
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  *param_1 = 1;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(long **)(param_1 + 0x20) = plVar40;
  if (**(char **)(param_3 + 8) != '\0') {
    FUN_02b32f8c(local_98,param_3,&DAT_039b07fe,param_4);
    local_100 = (long *)local_98._0_8_;
    if ((long *)local_98._0_8_ == (long *)0x0) {
      pbVar35 = *(byte **)PTR_DAT_04379c88;
LAB_02b32ec8:
      sVar38 = *(size_t *)PTR_PTR_04379d00;
      if ((long *)local_98._0_8_ != (long *)0x0) goto LAB_02b316a0;
LAB_02b32ed8:
      plVar40 = (long *)0x0;
    }
    else {
      pbVar35 = *(byte **)(local_98._0_8_ + 0x58);
      if ((long *)local_98._0_8_ == (long *)0x0) goto LAB_02b32ec8;
      sVar38 = *(size_t *)(local_98._0_8_ + 0x60);
      if ((long *)local_98._0_8_ == (long *)0x0) goto LAB_02b32ed8;
LAB_02b316a0:
      plVar40 = *(long **)(local_98._0_8_ + 0x68);
      (**(code **)(*(long *)local_98._0_8_ + 0x18))(local_98._0_8_);
    }
    local_120 = (long *)CONCAT71(local_120._1_7_,1);
    local_118 = pbVar35;
    local_110 = sVar38;
    local_108 = plVar40;
    FUN_01f0baf4(param_1,&local_120);
    if ((char)local_120 != '\0') {
      if (local_100 != (long *)0x0) {
        (**(code **)(*local_100 + 0x20))();
      }
      local_120 = (long *)((ulong)local_120 & 0xffffffffffffff00);
    }
    if ((long *)local_98._0_8_ != (long *)0x0) {
      (**(code **)(*(long *)local_98._0_8_ + 0x20))();
    }
  }
  lVar17 = nn::os::GetCurrentThread();
  plVar40 = param_2 + 0x1e;
  do {
    if (*plVar40 != 0 || param_2[0x1f] != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)param_2 + 0xe4));
        while (*plVar40 == 0 && param_2[0x1f] == 0) {
          cVar9 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar40,0x10);
          if (bVar14) {
            *plVar40 = lVar17;
            param_2[0x1f] = 0;
            cVar9 = ExclusiveMonitorsStatus();
          }
          if (cVar9 == '\0') goto LAB_02b31764;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar9 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar40,0x10);
    if (bVar14) {
      *plVar40 = lVar17;
      param_2[0x1f] = 0;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
LAB_02b31764:
  puVar43 = (ulong *)(param_1 + 8);
  uVar20 = *puVar43;
  uVar25 = param_2[0xf];
  if (uVar25 != 0) {
    uVar27 = uVar25 - (uVar25 >> 1 & 0x5555555555555555);
    uVar27 = (uVar27 & 0x3333333333333333) + (uVar27 >> 2 & 0x3333333333333333);
    uVar27 = (uVar27 + (uVar27 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar27 < 2) {
      uVar28 = uVar25 - 1 & uVar20;
    }
    else {
      uVar28 = uVar20;
      if (uVar25 <= uVar20) {
        uVar28 = 0;
        if (uVar25 != 0) {
          uVar28 = uVar20 / uVar25;
        }
        uVar28 = uVar20 - uVar28 * uVar25;
      }
    }
    plVar32 = *(long **)(param_2[0xe] + uVar28 * 8);
    if ((plVar32 != (long *)0x0) && (plVar32 = (long *)*plVar32, plVar32 != (long *)0x0)) {
      if (uVar27 < 2) {
        do {
          if (plVar32[1] == uVar20) {
            if (plVar32[2] == uVar20) goto LAB_02b31864;
          }
          else if ((plVar32[1] & uVar25 - 1) != uVar28) break;
          plVar32 = (long *)*plVar32;
        } while (plVar32 != (long *)0x0);
      }
      else {
        do {
          uVar27 = plVar32[1];
          if (uVar27 == uVar20) {
            if (plVar32[2] == uVar20) goto LAB_02b31864;
          }
          else {
            if (uVar25 <= uVar27) {
              uVar10 = 0;
              if (uVar25 != 0) {
                uVar10 = uVar27 / uVar25;
              }
              uVar27 = uVar27 - uVar10 * uVar25;
            }
            if (uVar27 != uVar28) break;
          }
          plVar32 = (long *)*plVar32;
        } while (plVar32 != (long *)0x0);
      }
    }
  }
LAB_02b318a0:
  if (param_8 == (long *)0x0) {
    param_8 = (long *)param_2[1];
  }
  FUN_02b308c4(&local_120,param_2,puVar43,param_7 & 1,param_8);
  FUN_01f0baf4(param_1,&local_120);
  if ((char)local_120 != '\0') {
    if (local_100 != (long *)0x0) {
      (**(code **)(*local_100 + 0x20))();
    }
    local_120 = (long *)((ulong)local_120 & 0xffffffffffffff00);
  }
  local_78 = (long *)0x0;
  uVar20 = param_2[0xf];
  if (uVar20 != 0) {
    uVar25 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar25 = (uVar25 & 0x3333333333333333) + (uVar25 >> 2 & 0x3333333333333333);
    uVar27 = *puVar43;
    uVar25 = (uVar25 + (uVar25 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar25 < 2) {
      uVar28 = uVar20 - 1 & uVar27;
    }
    else {
      uVar28 = uVar27;
      if (uVar20 <= uVar27) {
        uVar28 = 0;
        if (uVar20 != 0) {
          uVar28 = uVar27 / uVar20;
        }
        uVar28 = uVar27 - uVar28 * uVar20;
      }
    }
    plVar32 = *(long **)(param_2[0xe] + uVar28 * 8);
    if ((plVar32 != (long *)0x0) && (plVar32 = (long *)*plVar32, plVar32 != (long *)0x0)) {
      if (uVar25 < 2) {
        do {
          if (plVar32[1] == uVar27) {
            if (plVar32[2] == uVar27) goto LAB_02b319f4;
          }
          else if ((plVar32[1] & uVar20 - 1) != uVar28) break;
          plVar32 = (long *)*plVar32;
        } while (plVar32 != (long *)0x0);
      }
      else {
        do {
          uVar25 = plVar32[1];
          if (uVar25 == uVar27) {
            if (plVar32[2] == uVar27) goto LAB_02b319f4;
          }
          else {
            if (uVar20 <= uVar25) {
              uVar10 = 0;
              if (uVar20 != 0) {
                uVar10 = uVar25 / uVar20;
              }
              uVar25 = uVar25 - uVar10 * uVar20;
            }
            if (uVar25 != uVar28) break;
          }
          plVar32 = (long *)*plVar32;
        } while (plVar32 != (long *)0x0);
      }
    }
  }
  goto LAB_02b31a5c;
LAB_02b31864:
  plVar44 = (long *)plVar32[7];
  *(int *)(plVar32 + 8) = (int)plVar32[8] + 1;
  if (plVar44 == (long *)0x0) goto LAB_02b318a0;
  plVar32 = plVar44 + 10;
  do {
    cVar9 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar32,0x10);
    if (bVar14) {
      *(int *)plVar32 = (int)*plVar32 + 1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  do {
    iVar16 = (int)*plVar32 + -1;
    cVar9 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar32,0x10);
    if (bVar14) {
      *(int *)plVar32 = iVar16;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  goto LAB_02b32c58;
LAB_02b32868:
  plVar44 = (long *)plVar30[6];
  if (plVar44 == (long *)0x0) {
LAB_02b328a0:
    local_d8 = *(undefined1 **)(lVar45 + 0x58);
    auVar47 = FUN_01b34908(local_98,*(undefined8 *)(local_d8 + 8),&local_d8);
    local_70[0] = auVar47._0_8_;
    if (local_70[0] == (long *)0x0) {
      plVar44 = (long *)0x0;
    }
    else {
      plVar44 = local_70[0] + 10;
      do {
        cVar9 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar44,0x10);
        if (bVar14) {
          *(int *)plVar44 = (int)*plVar44 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      plVar44 = local_70[0];
    }
    lVar23 = *(long *)(plVar44[0x13] + 0x58);
    lVar6 = *(long *)(lVar37 + 0x88);
    if (*(long *)(lVar37 + 0x80) == 0) {
      if (lVar6 != 0) {
        local_b8 = *(long **)(lVar6 + 8);
        goto LAB_02b32900;
      }
      uVar25 = 0;
      uVar20 = 0;
    }
    else {
      local_b8 = *(long **)(*(long *)(lVar37 + 0x80) + 8);
      if (lVar6 == 0) {
        uVar19 = 0;
      }
      else {
LAB_02b32900:
        uVar19 = *(undefined8 *)(lVar6 + 0x10);
      }
      local_98._0_8_ = *(undefined8 *)(lVar23 + 8);
      local_98._8_8_ = *(undefined8 *)(lVar23 + 0x6098);
      local_88 = lVar23 + 0x10;
      auVar46 = FUN_02b94dac(*(undefined8 *)(lVar23 + 0x6140),local_98,&local_b8,1,uVar19);
      auVar47._8_8_ = auVar46._8_8_;
      auVar47._0_8_ = local_70[0];
      uVar20 = auVar46._0_8_ & 0xffffffffffffff00;
      uVar25 = auVar46._0_8_ & 0xff;
    }
    local_98._8_8_ = auVar47._8_8_;
    local_70[0] = auVar47._0_8_;
    local_98._0_8_ = uVar20 | uVar25;
    local_88 = local_88 & 0xffffffffffffff00;
    FUN_02bc082c(plVar44 + 0xb,local_98);
    *(undefined4 *)(plVar44 + 0x14) = 1;
    FUN_02b2fd78(lVar45,&local_120,local_70);
    auVar46._8_8_ = local_98._8_8_;
    auVar46._0_8_ = local_98._0_8_;
    if (plVar44 == (long *)0x0) goto joined_r0x02b329cc;
    plVar22 = plVar44 + 10;
    do {
      iVar16 = (int)*plVar22 + -1;
      cVar9 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar14) {
        *(int *)plVar22 = iVar16;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    auVar46 = local_98;
    if (iVar16 != 0) goto joined_r0x02b329cc;
    lVar37 = *plVar44;
  }
  else {
    plVar22 = plVar44 + 10;
    do {
      cVar9 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar14) {
        *(int *)plVar22 = (int)*plVar22 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    do {
      iVar16 = (int)*plVar22 + -1;
      cVar9 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar14) {
        *(int *)plVar22 = iVar16;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    auVar46 = local_98;
    if (iVar16 != 0) goto joined_r0x02b329cc;
    lVar37 = *plVar44;
  }
  (**(code **)(lVar37 + 0x10))(plVar44);
  auVar46 = local_98;
joined_r0x02b329cc:
  local_98 = auVar46;
  if (local_108 != (long *)0x0) {
    (**(code **)(*local_108 + 0x20))();
  }
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x20))(plVar32);
  }
  uVar24 = uVar24 + 1;
  lVar37 = *(long *)(*(long *)(*(long *)(lVar17 + 8) + 600) + 0x80);
  if (*(uint *)(*(long *)(lVar37 + 0x38) + 4) <= uVar24) goto LAB_02b3269c;
  goto LAB_02b326ec;
LAB_02b32cc8:
  do {
    lVar37 = *plVar40;
    if (lVar37 == lVar17 && param_2[0x1f] == lVar42) {
      cVar9 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar40,0x10);
      if (bVar14) {
        *plVar40 = 0;
        *(long *)((long)param_2 + 0xf4) = lVar42;
        cVar9 = ExclusiveMonitorsStatus();
      }
      if (cVar9 != '\0') goto LAB_02b32cc8;
      bVar14 = true;
    }
    else {
      bVar14 = false;
      ClearExclusiveLocal();
    }
    lVar17 = lVar37;
    lVar42 = param_2[0x1f];
  } while (!bVar14);
  goto LAB_02b32c94;
LAB_02b319f4:
  local_78 = (long *)plVar32[6];
  if (local_78 != (long *)0x0) {
    plVar32 = local_78 + 10;
    do {
      cVar9 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar32,0x10);
      if (bVar14) {
        *(int *)plVar32 = (int)*plVar32 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
LAB_02b31a5c:
  piVar21 = (int *)param_4[0x12];
  puVar1 = (uint *)((long)piVar21 + (ulong)*(ushort *)((long)piVar21 + (6 - (long)*piVar21)));
  puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
  puVar29 = puVar1 + 1;
  uVar20 = (ulong)*puVar1;
  if (uVar20 != 0) {
    puVar1 = puVar29 + uVar20;
    do {
      piVar21 = (int *)((long)puVar29 + (ulong)*puVar29);
      if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 5) ||
         (uVar20 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[2], uVar20 == 0)) {
        lVar17 = 0;
      }
      else {
        puVar36 = (uint *)((long)piVar21 + uVar20);
        lVar17 = (long)puVar36 + (ulong)*puVar36;
      }
      pbVar35 = (byte *)(lVar17 + 4);
      local_88 = strlen((char *)pbVar35);
      bVar7 = *(byte *)(lVar17 + 4);
      local_98._0_8_ = &DAT_cbf29ce484222645;
      if (bVar7 != 0) {
        local_98._0_8_ = &DAT_cbf29ce484222645;
        pbVar31 = (byte *)(lVar17 + 5);
        do {
          local_98._0_8_ = (local_98._0_8_ ^ (ulong)bVar7) * 0x100000001b3;
          bVar7 = *pbVar31;
          pbVar31 = pbVar31 + 1;
        } while (bVar7 != 0);
      }
      local_80 = (long *)0x0;
      local_98._8_8_ = pbVar35;
      if (param_2[0x1b] == 0) {
        puVar18 = (undefined8 *)PTR_DAT_0437a0d8;
        if ((*PTR_DAT_0437a0d0 & 1) == 0) {
          iVar16 = __cxa_guard_acquire(PTR_DAT_0437a0d0);
          puVar18 = (undefined8 *)PTR_DAT_0437a0d8;
          if (iVar16 != 0) {
            FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_0437a0d0);
          }
        }
      }
      else {
        puVar18 = (undefined8 *)FUN_02b74fb0(param_2[0x1b],local_98);
      }
      local_b8 = (long *)*puVar18;
      local_b0 = (byte *)puVar18[1];
      local_a8 = puVar18[2];
      local_a0 = (long *)puVar18[3];
      if (local_a0 == (long *)0x0) {
        bVar7 = *local_b0;
      }
      else {
        (**(code **)(*local_a0 + 0x18))();
        bVar7 = *local_b0;
      }
      if (bVar7 == 0) {
        pbVar35 = (byte *)(**(code **)(*DAT_043ef740 + 0x28))(DAT_043ef740,0);
        if (pbVar35 == (byte *)0x0) {
          if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar16 != 0)) {
            FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_0437a0d0);
          }
          plVar32 = *(long **)PTR_DAT_0437a0d8;
          pbVar35 = *(byte **)(PTR_DAT_0437a0d8 + 8);
          sVar38 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
          plVar44 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
          if (plVar44 != (long *)0x0) {
            (**(code **)(*plVar44 + 0x18))(plVar44);
          }
        }
        else {
          sVar38 = strlen((char *)pbVar35);
          bVar7 = *pbVar35;
          if (bVar7 == 0) {
            plVar44 = (long *)0x0;
            plVar32 = (long *)&DAT_cbf29ce484222645;
          }
          else {
            plVar32 = (long *)&DAT_cbf29ce484222645;
            pbVar31 = pbVar35;
            do {
              pbVar31 = pbVar31 + 1;
              plVar32 = (long *)(((ulong)plVar32 ^ (ulong)bVar7) * 0x100000001b3);
              bVar7 = *pbVar31;
            } while (bVar7 != 0);
            plVar44 = (long *)0x0;
          }
        }
        plVar22 = local_a0;
        local_a0 = (long *)0x0;
        local_b8 = plVar32;
        local_b0 = pbVar35;
        local_a8 = sVar38;
        if (plVar22 != (long *)0x0) {
          (**(code **)(*plVar22 + 0x20))();
        }
        local_a0 = plVar44;
      }
      if (param_2[0x1b] == 0) {
        puVar18 = (undefined8 *)PTR_DAT_0437a0d8;
        if ((*PTR_DAT_0437a0d0 & 1) == 0) {
          iVar16 = __cxa_guard_acquire(PTR_DAT_0437a0d0);
          puVar18 = (undefined8 *)PTR_DAT_0437a0d8;
          if (iVar16 != 0) {
            FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_0437a0d0);
          }
        }
      }
      else {
        puVar18 = (undefined8 *)FUN_02b74e44(param_2[0x1b],local_98);
      }
      local_d8 = (undefined1 *)*puVar18;
      local_d0 = (byte *)puVar18[1];
      local_c8 = puVar18[2];
      local_c0 = (long *)puVar18[3];
      if (local_c0 == (long *)0x0) {
        bVar7 = *local_d0;
      }
      else {
        (**(code **)(*local_c0 + 0x18))();
        bVar7 = *local_d0;
      }
      if (bVar7 == 0) {
        pbVar35 = (byte *)(**(code **)(*DAT_043ef740 + 0x20))(DAT_043ef740,0);
        if (pbVar35 == (byte *)0x0) {
          if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar16 != 0)) {
            FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_0437a0d0);
          }
          puVar33 = *(undefined1 **)PTR_DAT_0437a0d8;
          pbVar35 = *(byte **)(PTR_DAT_0437a0d8 + 8);
          sVar38 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
          plVar32 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
          if (plVar32 != (long *)0x0) {
            (**(code **)(*plVar32 + 0x18))(plVar32);
          }
        }
        else {
          sVar38 = strlen((char *)pbVar35);
          bVar7 = *pbVar35;
          if (bVar7 == 0) {
            plVar32 = (long *)0x0;
            puVar33 = &DAT_cbf29ce484222645;
          }
          else {
            puVar33 = &DAT_cbf29ce484222645;
            pbVar31 = pbVar35;
            do {
              pbVar31 = pbVar31 + 1;
              puVar33 = (undefined1 *)(((ulong)puVar33 ^ (ulong)bVar7) * 0x100000001b3);
              bVar7 = *pbVar31;
            } while (bVar7 != 0);
            plVar32 = (long *)0x0;
          }
        }
        plVar44 = local_c0;
        local_c0 = (long *)0x0;
        local_d8 = puVar33;
        local_d0 = pbVar35;
        local_c8 = sVar38;
        if (plVar44 != (long *)0x0) {
          (**(code **)(*plVar44 + 0x20))();
        }
        local_c0 = plVar32;
      }
      uVar15 = FUN_02b27d18(local_78,local_98,&local_b8);
      FUN_02b28418(local_78,uVar15,0x1f,&local_d8);
      puVar2 = (uint *)((long)piVar21 + (ulong)*(ushort *)((long)piVar21 + (6 - (long)*piVar21)));
      puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
      puVar36 = puVar2 + 1;
      uVar20 = (ulong)*puVar2;
      if (uVar20 != 0) {
        puVar2 = puVar36 + uVar20;
        do {
          piVar21 = (int *)((long)puVar36 + (ulong)*puVar36);
          puVar41 = (ushort *)((long)piVar21 - (long)*piVar21);
          uVar8 = *puVar41;
          if ((uVar8 < 5) || ((ulong)puVar41[2] == 0)) {
            lVar17 = 0;
          }
          else {
            puVar3 = (uint *)((long)piVar21 + (ulong)puVar41[2]);
            lVar17 = (long)puVar3 + (ulong)*puVar3;
          }
          sVar38 = strlen((char *)(lVar17 + 4));
          bVar7 = *(byte *)(lVar17 + 4);
          plVar32 = (long *)&DAT_cbf29ce484222645;
          if (bVar7 != 0) {
            plVar32 = (long *)&DAT_cbf29ce484222645;
            pbVar35 = (byte *)(lVar17 + 5);
            do {
              plVar32 = (long *)(((ulong)plVar32 ^ (ulong)bVar7) * 0x100000001b3);
              bVar7 = *pbVar35;
              pbVar35 = pbVar35 + 1;
            } while (bVar7 != 0);
          }
          if ((uVar8 < 7) || ((ulong)puVar41[3] == 0)) {
            lVar42 = 0;
          }
          else {
            puVar3 = (uint *)((long)piVar21 + (ulong)puVar41[3]);
            lVar42 = (long)puVar3 + (ulong)*puVar3;
          }
          local_f0 = strlen((char *)(lVar42 + 4));
          bVar7 = *(byte *)(lVar42 + 4);
          local_100 = (long *)&DAT_cbf29ce484222645;
          if (bVar7 != 0) {
            local_100 = (long *)&DAT_cbf29ce484222645;
            pbVar35 = (byte *)(lVar42 + 5);
            do {
              local_100 = (long *)(((ulong)local_100 ^ (ulong)bVar7) * 0x100000001b3);
              bVar7 = *pbVar35;
              pbVar35 = pbVar35 + 1;
            } while (bVar7 != 0);
          }
          local_e8 = (long *)0x0;
          local_e0 = 0;
          local_108 = (long *)0x0;
          local_120 = plVar32;
          local_118 = (byte *)(lVar17 + 4);
          local_110 = sVar38;
          pcStack_f8 = (char *)(lVar42 + 4);
          FUN_02b2880c(local_78,uVar15,&local_120);
          if (local_e8 != (long *)0x0) {
            (**(code **)(*local_e8 + 0x20))();
          }
          if (local_108 != (long *)0x0) {
            (**(code **)(*local_108 + 0x20))();
          }
          puVar36 = puVar36 + 1;
        } while (puVar36 != puVar2);
      }
      if (local_c0 != (long *)0x0) {
        (**(code **)(*local_c0 + 0x20))();
      }
      if (local_a0 != (long *)0x0) {
        (**(code **)(*local_a0 + 0x20))();
      }
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      puVar29 = puVar29 + 1;
    } while (puVar29 != puVar1);
  }
  if ((int)((ulong)(local_78[0x17] - local_78[0x16]) >> 4) * -0x3b13b13b == 0) {
    pbVar35 = (byte *)(**(code **)(*DAT_043ef740 + 0x20))(DAT_043ef740,0);
    if (pbVar35 == (byte *)0x0) {
      if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
         (iVar16 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar16 != 0)) {
        FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437a0d0);
      }
      local_120 = *(long **)PTR_DAT_0437a0d8;
      local_118 = *(byte **)(PTR_DAT_0437a0d8 + 8);
      local_110 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
      local_108 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
      if (local_108 != (long *)0x0) {
        (**(code **)(*local_108 + 0x18))();
      }
    }
    else {
      local_110 = strlen((char *)pbVar35);
      bVar7 = *pbVar35;
      local_120 = (long *)&DAT_cbf29ce484222645;
      if (bVar7 != 0) {
        local_120 = (long *)&DAT_cbf29ce484222645;
        pbVar31 = pbVar35;
        do {
          pbVar31 = pbVar31 + 1;
          local_120 = (long *)(((ulong)local_120 ^ (ulong)bVar7) * 0x100000001b3);
          bVar7 = *pbVar31;
        } while (bVar7 != 0);
      }
      local_108 = (long *)0x0;
      local_118 = pbVar35;
    }
    pbVar35 = (byte *)(**(code **)(*DAT_043ef740 + 0x28))(DAT_043ef740,0);
    if (pbVar35 == (byte *)0x0) {
      if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
         (iVar16 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar16 != 0)) {
        FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437a0d0);
      }
      local_98._0_8_ = *(undefined8 *)PTR_DAT_0437a0d8;
      local_98._8_8_ = *(undefined8 *)(PTR_DAT_0437a0d8 + 8);
      local_88 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
      local_80 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x18))();
      }
    }
    else {
      local_88 = strlen((char *)pbVar35);
      bVar7 = *pbVar35;
      local_98._0_8_ = &DAT_cbf29ce484222645;
      if (bVar7 != 0) {
        local_98._0_8_ = &DAT_cbf29ce484222645;
        pbVar31 = pbVar35;
        do {
          pbVar31 = pbVar31 + 1;
          local_98._0_8_ = (local_98._0_8_ ^ (ulong)bVar7) * 0x100000001b3;
          bVar7 = *pbVar31;
        } while (bVar7 != 0);
      }
      local_80 = (long *)0x0;
      local_98._8_8_ = pbVar35;
    }
    local_b8 = (long *)&DAT_5272eeea2c32d946;
    local_b0 = (byte *)0x394bd81;
    local_a8 = 8;
    local_a0 = (long *)0x0;
    uVar15 = FUN_02b27d18(local_78,&local_b8,local_98);
    if (local_a0 != (long *)0x0) {
      (**(code **)(*local_a0 + 0x20))();
    }
    FUN_02b28418(local_78,uVar15,0x1f,&local_120);
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    if (local_108 != (long *)0x0) {
      (**(code **)(*local_108 + 0x20))();
    }
  }
  puVar33 = &DAT_cbf29ce484222645;
  piVar21 = (int *)param_4[0x12];
  if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 0x23) ||
     (uVar20 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[0x11], uVar20 == 0)) {
    lVar17 = 0;
    bVar7 = DAT_00000004;
    if (DAT_00000004 != 0) goto LAB_02b32240;
    uVar24 = 0;
  }
  else {
    puVar29 = (uint *)((long)piVar21 + uVar20);
    lVar17 = (long)puVar29 + (ulong)*puVar29;
    bVar7 = *(byte *)(lVar17 + 4);
    uVar24 = (uint)bVar7;
    if (bVar7 != 0) {
LAB_02b32240:
      pbVar35 = (byte *)(lVar17 + 5);
      do {
        puVar33 = (undefined1 *)(((ulong)puVar33 ^ (ulong)bVar7) * 0x100000001b3);
        bVar7 = *pbVar35;
        pbVar35 = pbVar35 + 1;
      } while (bVar7 != 0);
      uVar24 = 0;
      if ((long)puVar33 < -0x2453dad96946fedf) {
        if (puVar33 == (undefined1 *)0xaee74fd70d5cfe1e) {
          uVar24 = 2;
        }
        else if (puVar33 == (undefined1 *)0xb76a832681bace94) {
          uVar24 = 4;
        }
      }
      else if (puVar33 == (undefined1 *)0xdbac252696b90121) {
        uVar24 = 6;
      }
      else if (puVar33 == (undefined1 *)0xfbf72656dad0abb8) {
        uVar24 = 1;
      }
      else if (puVar33 == (undefined1 *)0x52d15d26d99b5e35) {
        uVar24 = 8;
      }
    }
  }
  *(uint *)(local_78[0x16] + 0xb8) = uVar24;
  *(undefined4 *)(local_78[0x16] + 0xbc) = 0;
  piVar21 = (int *)param_4[0x12];
  if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 0x21) ||
     (uVar20 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[0x10], uVar20 == 0)) {
    piVar21 = (int *)0x0;
  }
  else {
    puVar29 = (uint *)((long)piVar21 + uVar20);
    piVar21 = (int *)((long)puVar29 + (ulong)*puVar29);
  }
  if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 7) ||
     (uVar20 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[3], uVar20 == 0)) {
    iVar16 = 2;
  }
  else {
    iVar16 = *(int *)((long)piVar21 + uVar20);
    if (2 < iVar16 - 1U) {
      iVar16 = 0;
    }
  }
  *(int *)(local_78[0x16] + 200) = iVar16;
  piVar21 = (int *)param_4[0x12];
  if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 0x1f) ||
     (uVar20 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[0xf], uVar20 == 0)) {
    piVar21 = (int *)0x0;
  }
  else {
    puVar29 = (uint *)((long)piVar21 + uVar20);
    piVar21 = (int *)((long)puVar29 + (ulong)*puVar29);
  }
  if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 5) ||
     (uVar20 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[2], uVar20 == 0)) {
    bVar14 = true;
  }
  else {
    bVar14 = *(char *)((long)piVar21 + uVar20) != '\0';
  }
  *(bool *)(local_78[0x16] + 0xc1) = bVar14;
  if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 7) ||
     (uVar20 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[3], uVar20 == 0)) {
    bVar14 = true;
  }
  else {
    bVar14 = *(char *)((long)piVar21 + uVar20) != '\0';
  }
  *(bool *)(local_78[0x16] + 0xc0) = bVar14;
  puVar13 = PTR_DAT_04379ce0;
  puVar12 = PTR_DAT_04379cd8;
  puVar11 = PTR_DAT_04379cd0;
  lVar17 = param_4[4];
  if ((int)((ulong)(param_4[5] - lVar17) >> 3) * -0x33333333 != 0) {
    uVar20 = 0;
    lVar42 = 8;
    lVar37 = 0x20;
    do {
      uVar25 = (**(code **)(*DAT_043ef740 + 0x18))(DAT_043ef740,lVar17 + lVar37 + -0x20);
      if ((uVar25 & 0xff) != 0) {
        lVar17 = *(long *)(*(long *)(param_2[0xc] + 0x58) + 0x58);
        local_120 = *(long **)(lVar17 + 8);
        local_118 = *(byte **)(lVar17 + 0x6098);
        local_110 = lVar17 + 0x10;
        auVar46 = FUN_02b98cbc(*(undefined8 *)(lVar17 + 0x6160),&local_120,
                               param_4[0xb] + (long)*(int *)(param_4[4] + lVar37) * 0x48);
        plVar32 = local_78;
        pcVar39 = (char *)(*(long *)(**(long **)(*(long *)(*(long *)(*(long *)(*param_5 + lVar42) +
                                                                    600) + 0x80) + 0x28) + 0x60) + 2
                          );
        local_98 = auVar46;
        if (*pcVar39 == '\0') {
          plVar44 = (long *)FUN_00938550();
          if (plVar44 == (long *)0x0) goto LAB_02b32578;
          (**(code **)(*plVar44 + 0x18))(plVar44);
          if (plVar44 != (long *)0x0) goto LAB_02b3257c;
LAB_02b32618:
          local_120 = (long *)PTR_DAT_04379c88;
        }
        else {
          if ((*puVar11 & 1) == 0) {
            iVar16 = __cxa_guard_acquire(puVar11);
            if (iVar16 != 0) {
              FUN_00100250(PTR_LAB_04379d08,puVar12,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar11);
            }
          }
          uVar19 = *(undefined8 *)puVar12;
          *(undefined8 *)puVar13 = uVar19;
          FUN_02a47cd8(&local_b8,uVar19,pcVar39);
          plVar44 = local_b8;
LAB_02b32578:
          if (plVar44 == (long *)0x0) goto LAB_02b32618;
LAB_02b3257c:
          local_120 = plVar44 + 0xb;
        }
        local_120 = (long *)*local_120;
        if (plVar44 == (long *)0x0) {
          local_118 = *(byte **)PTR_PTR_04379d00;
LAB_02b32664:
          local_110 = 0;
          local_108 = (long *)0x0;
        }
        else {
          local_118 = (byte *)plVar44[0xc];
          if (plVar44 == (long *)0x0) goto LAB_02b32664;
          local_110 = plVar44[0xd];
          (**(code **)(*plVar44 + 0x18))(plVar44);
          local_108 = plVar44;
        }
        FUN_02b28c68(plVar32,uVar25 >> 0x20,&local_120,local_98);
        if (local_108 != (long *)0x0) {
          (**(code **)(*local_108 + 0x20))();
        }
        if (plVar44 != (long *)0x0) {
          (**(code **)(*plVar44 + 0x20))(plVar44);
        }
      }
      lVar17 = param_4[4];
      uVar20 = uVar20 + 1;
      lVar42 = lVar42 + 0x30;
      lVar37 = lVar37 + 0x28;
    } while (uVar20 < (uint)((int)((ulong)(param_4[5] - lVar17) >> 3) * -0x33333333));
  }
  lVar17 = *param_5;
  lVar42 = param_5[1];
  if (lVar17 != lVar42) {
    do {
      lVar37 = *(long *)(*(long *)(*(long *)(lVar17 + 8) + 600) + 0x80);
      if (*(int *)(*(long *)(lVar37 + 0x38) + 4) != 0) {
        uVar24 = 0;
LAB_02b326ec:
        lVar45 = *param_6;
        pcVar39 = (char *)(*(long *)(*(long *)(*(long *)(lVar37 + 0x28) + (long)(int)uVar24 * 8) +
                                    0x60) + 2);
        if (*pcVar39 == '\0') {
          plVar32 = (long *)FUN_00938550();
          if (plVar32 == (long *)0x0) goto LAB_02b32728;
          (**(code **)(*plVar32 + 0x18))(plVar32);
          if (plVar32 != (long *)0x0) goto LAB_02b3272c;
LAB_02b329f4:
          plVar44 = *(long **)PTR_DAT_04379c88;
          if (plVar32 != (long *)0x0) goto LAB_02b32738;
LAB_02b32a04:
          local_118 = *(byte **)PTR_PTR_04379d00;
          if (plVar32 != (long *)0x0) goto LAB_02b32744;
LAB_02b32a14:
          local_110 = 0;
          local_108 = (long *)0x0;
          local_120 = plVar44;
        }
        else {
          if ((*puVar11 & 1) == 0) {
            iVar16 = __cxa_guard_acquire(puVar11);
            if (iVar16 != 0) {
              FUN_00100250(PTR_LAB_04379d08,puVar12,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar11);
            }
          }
          uVar19 = *(undefined8 *)puVar12;
          *(undefined8 *)puVar13 = uVar19;
          FUN_02a47cd8(local_98,uVar19,pcVar39);
          plVar32 = (long *)local_98._0_8_;
LAB_02b32728:
          if (plVar32 == (long *)0x0) goto LAB_02b329f4;
LAB_02b3272c:
          plVar44 = (long *)plVar32[0xb];
          if (plVar32 == (long *)0x0) goto LAB_02b32a04;
LAB_02b32738:
          local_118 = (byte *)plVar32[0xc];
          if (plVar32 == (long *)0x0) goto LAB_02b32a14;
LAB_02b32744:
          local_110 = plVar32[0xd];
          local_120 = plVar44;
          (**(code **)(*plVar32 + 0x18))(plVar32);
          local_108 = plVar32;
        }
        lVar37 = FUN_02b75c1c(*(undefined8 *)(*(long *)(lVar17 + 8) + 600),pcVar39);
        plVar22 = *(long **)(lVar45 + 0x138);
        if (plVar22 != (long *)0x0) {
          uVar20 = (long)plVar22 - ((ulong)plVar22 >> 1 & 0x5555555555555555);
          uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
          uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar20 < 2) {
            plVar26 = (long *)((ulong)((long)plVar22 + -1) & (ulong)plVar44);
          }
          else {
            plVar26 = plVar44;
            if (plVar22 <= plVar44) {
              uVar25 = 0;
              if (plVar22 != (long *)0x0) {
                uVar25 = (ulong)plVar44 / (ulong)plVar22;
              }
              plVar26 = (long *)((long)plVar44 - uVar25 * (long)plVar22);
            }
          }
          plVar30 = *(long **)(*(long *)(lVar45 + 0x130) + (long)plVar26 * 8);
          if ((plVar30 != (long *)0x0) && (plVar30 = (long *)*plVar30, plVar30 != (long *)0x0)) {
            if (uVar20 < 2) {
              do {
                if ((long *)plVar30[1] == plVar44) {
                  if ((long *)plVar30[2] == plVar44) goto LAB_02b32868;
                }
                else if ((long *)((ulong)plVar30[1] & (ulong)((long)plVar22 + -1)) != plVar26)
                break;
                plVar30 = (long *)*plVar30;
              } while (plVar30 != (long *)0x0);
            }
            else {
              do {
                plVar34 = (long *)plVar30[1];
                if (plVar34 == plVar44) {
                  if ((long *)plVar30[2] == plVar44) goto LAB_02b32868;
                }
                else {
                  if (plVar22 <= plVar34) {
                    uVar20 = 0;
                    if (plVar22 != (long *)0x0) {
                      uVar20 = (ulong)plVar34 / (ulong)plVar22;
                    }
                    plVar34 = (long *)((long)plVar34 - uVar20 * (long)plVar22);
                  }
                  if (plVar34 != plVar26) break;
                }
                plVar30 = (long *)*plVar30;
              } while (plVar30 != (long *)0x0);
            }
          }
        }
        goto LAB_02b328a0;
      }
LAB_02b3269c:
      lVar17 = lVar17 + 0x30;
    } while (lVar17 != lVar42);
  }
  FUN_02b29034(local_78,param_6);
  puVar11 = PTR_DAT_04379520;
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar16 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar12 = PTR_DAT_04379528;
    if (iVar16 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar12,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  puVar12 = PTR_DAT_04379528;
  lVar17 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar17 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = param_8;
  *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
  plVar32 = (long *)(**(code **)(*param_8 + 0x10))(param_8,0x68,8);
  if (plVar32 == (long *)0x0) {
    (**(code **)(*param_8 + 0xb8))(param_8);
  }
  puVar13 = PTR_DAT_043796d0;
  plVar32[7] = 0;
  *(undefined4 *)(plVar32 + 8) = 0;
  *(undefined4 *)(plVar32 + 6) = 0;
  plVar32[2] = 0;
  plVar32[3] = 0;
  *plVar32 = (long)(puVar13 + 0x10);
  plVar32[4] = 0;
  plVar32[5] = 0;
  if ((*puVar11 & 1) == 0) {
    iVar16 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar11 = PTR_DAT_04379528;
    if (iVar16 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar11,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  nn::os::GetTlsValue(*(undefined4 *)puVar12);
  plVar44 = plVar32 + 10;
  *(int *)plVar44 = 0;
  plVar32[9] = (long)&PTR_LAB_04284638;
  plVar32[0xb] = (long)&PTR_LAB_04284668;
  *plVar32 = (long)&PTR_LAB_04284560;
  plVar32[1] = (long)param_8;
  plVar32[2] = (long)plVar32;
  plVar32[3] = 0x68;
  plVar32[4] = 8;
  plVar32[0xc] = (long)param_4;
  *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
  do {
    cVar9 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar44,0x10);
    if (bVar14) {
      *(int *)plVar44 = (int)*plVar44 + 1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  do {
    cVar9 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar44,0x10);
    if (bVar14) {
      *(int *)plVar44 = (int)*plVar44 + 1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  do {
    cVar9 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar44,0x10);
    if (bVar14) {
      *(int *)plVar44 = (int)*plVar44 + 1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  plVar22 = (long *)local_78[0x24];
  local_78[0x24] = (long)plVar32;
  if (plVar22 != (long *)0x0) {
    plVar26 = plVar22 + 10;
    do {
      iVar16 = (int)*plVar26 + -1;
      cVar9 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar14) {
        *(int *)plVar26 = iVar16;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (iVar16 == 0) {
      (**(code **)(*plVar22 + 0x10))();
    }
  }
  do {
    iVar16 = (int)*plVar44 + -1;
    cVar9 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar44,0x10);
    if (bVar14) {
      *(int *)plVar44 = iVar16;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if (iVar16 == 0) {
    (**(code **)(*plVar32 + 0x10))(plVar32);
  }
  plVar22 = DAT_043ef740;
  if (param_2 != (long *)0x0) {
    plVar26 = param_2 + 10;
    do {
      cVar9 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar14) {
        *(int *)plVar26 = (int)*plVar26 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  local_120 = param_2;
  (**(code **)(*plVar22 + 0x90))(plVar22,&local_120,&local_78);
  if (local_120 != (long *)0x0) {
    plVar22 = local_120 + 10;
    do {
      iVar16 = (int)*plVar22 + -1;
      cVar9 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar14) {
        *(int *)plVar22 = iVar16;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (iVar16 == 0) {
      (**(code **)(*local_120 + 0x10))();
    }
  }
  do {
    iVar16 = (int)*plVar44 + -1;
    cVar9 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar44,0x10);
    if (bVar14) {
      *(int *)plVar44 = iVar16;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  plVar44 = local_78;
  if (iVar16 == 0) {
    (**(code **)(*plVar32 + 0x10))(plVar32);
    plVar44 = local_78;
  }
  local_78 = plVar44;
  if (plVar44 != (long *)0x0) {
    plVar32 = plVar44 + 10;
    do {
      iVar16 = (int)*plVar32 + -1;
      cVar9 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar32,0x10);
      if (bVar14) {
        *(int *)plVar32 = iVar16;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
LAB_02b32c58:
    if (iVar16 == 0) {
      (**(code **)(*plVar44 + 0x10))();
    }
  }
  do {
    lVar17 = *plVar40;
    lVar42 = param_2[0x1f];
    cVar9 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar40,0x10);
    if (bVar14) {
      *plVar40 = lVar17;
      param_2[0x1f] = lVar42;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  do {
    if (*plVar40 != lVar17 || param_2[0x1f] != lVar42) {
      ClearExclusiveLocal();
      lVar17 = *plVar40;
      lVar42 = param_2[0x1f];
      goto LAB_02b32cc8;
    }
    cVar9 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar40,0x10);
    if (bVar14) {
      *plVar40 = 0;
      *(long *)((long)param_2 + 0xf4) = lVar42;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
LAB_02b32c94:
  nn::os::SignalLightEvent((LightEventType *)((long)param_2 + 0xe4));
  return;
}


