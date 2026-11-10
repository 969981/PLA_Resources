/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e8cc8c; name: FUN_01e8cc8c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01e8cc8c(long *param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  char *pcVar13;
  char cVar14;
  bool bVar15;
  undefined1 uVar16;
  int iVar17;
  int iVar18;
  long *plVar19;
  undefined8 uVar20;
  long *plVar21;
  long lVar22;
  float fVar23;
  float fVar24;
  float local_210;
  undefined8 *local_200;
  undefined8 uStack_1f8;
  long *local_1f0;
  long *local_1e8;
  undefined8 uStack_1e0;
  undefined8 *local_1d8;
  char *local_1d0;
  undefined8 local_1c8;
  long *local_1c0;
  undefined8 local_1b8;
  long *local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  long *local_198;
  undefined8 uStack_190;
  undefined1 local_188;
  long *local_180;
  long *local_178;
  undefined8 local_170;
  char *pcStack_168;
  undefined *local_160;
  long *local_158;
  undefined **local_150;
  long local_140;
  long local_138;
  float local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110;
  char local_100;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined2 local_d0;
  undefined8 local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  long *local_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  undefined8 uStack_80;
  long local_68;
  
  FUN_01e9e530(&local_90);
  if (local_90 == (long *)0x0) {
    return;
  }
  FUN_01e98c2c(&local_98,param_1);
  if (local_98 == (long *)0x0) goto joined_r0x01e8d8a4;
  plVar19 = (long *)FUN_00ab4c74(local_98 + 0x1e,&local_170);
  local_c0 = 0x1317397d33b37ba7;
  pcStack_b8 = "ObstructionWaza::ChargeAttackObject";
  local_b0 = 0x23;
  local_a8 = (long *)0x0;
  FUN_01845684(&local_a0,local_90,param_1[1],&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_a0 != (long *)0x0) {
    uVar16 = (**(code **)(*plVar19 + 0xf0))(plVar19);
    puVar9 = PTR_DAT_04379660;
    local_160 = (undefined *)0x16;
    local_158 = (long *)0x0;
    local_170 = 0xd65830cac3e925da;
    pcStack_168 = "field_obstruction_waza";
    local_1d8 = (undefined8 *)0xbc3aef037616e5c0;
    local_1d0 = "chargeatttack_default_collision_size_m";
    local_1c8 = 0x26;
    local_1c0 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar17 = __cxa_guard_acquire(PTR_DAT_04379660), iVar17 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    puVar11 = PTR_DAT_04379670;
    puVar10 = PTR_DAT_04379668;
    uVar20 = *(undefined8 *)PTR_DAT_04379668;
    *(undefined8 *)PTR_DAT_04379670 = uVar20;
    FUN_00d7d9e4(&local_88,uVar20,&local_170);
    if (local_88 == (long *)0x0) {
      fVar23 = 0.0;
    }
    else {
      fVar23 = (float)FUN_00d7905c(local_88,&local_1d8);
      if (local_88 != (long *)0x0) {
        plVar19 = local_88 + 10;
        do {
          iVar17 = (int)*plVar19 + -1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar5) {
            *(int *)plVar19 = iVar17;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar17 == 0) {
          (**(code **)(*local_88 + 0x10))();
        }
      }
    }
    if (local_1c0 != (long *)0x0) {
      (**(code **)(*local_1c0 + 0x20))();
    }
    if (local_158 != (long *)0x0) {
      (**(code **)(*local_158 + 0x20))();
    }
    switch(uVar16) {
    case 0:
      local_160 = (undefined *)0x16;
      local_158 = (long *)0x0;
      local_1d8 = (undefined8 *)0xbc3b0d03761718ba;
      local_1d0 = "chargeatttack_default_collision_size_s";
      local_170 = 0xd65830cac3e925da;
      pcStack_168 = "field_obstruction_waza";
      local_1c8 = 0x26;
      local_1c0 = (long *)0x0;
      if (((*puVar9 & 1) == 0) && (iVar17 = __cxa_guard_acquire(PTR_DAT_04379660), iVar17 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      uVar20 = *(undefined8 *)puVar10;
      *(undefined8 *)puVar11 = uVar20;
      FUN_00d7d9e4(&local_88,uVar20,&local_170);
      if (local_88 == (long *)0x0) {
LAB_01e8da7c:
        local_210 = 0.0;
      }
      else {
        local_210 = (float)FUN_00d7905c(local_88,&local_1d8);
        if (local_88 != (long *)0x0) {
          plVar19 = local_88 + 10;
          do {
            iVar17 = (int)*plVar19 + -1;
            bVar15 = iVar17 == 0;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar5) {
              *(int *)plVar19 = iVar17;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
LAB_01e8cf64:
          if (bVar15) {
            (**(code **)(*local_88 + 0x10))();
          }
        }
      }
      break;
    case 1:
      local_210 = fVar23;
      if (*(char *)((long)param_1 + 0x6cc) == '\0') {
        fVar23 = *(float *)((long)param_1 + 0x4e4);
      }
      else {
        fVar23 = fVar23 / fVar23;
      }
      goto LAB_01e8cfa0;
    case 2:
      local_160 = (undefined *)0x16;
      local_158 = (long *)0x0;
      local_1d8 = (undefined8 *)0xbc3af0037616e773;
      local_1d0 = "chargeatttack_default_collision_size_l";
      local_170 = 0xd65830cac3e925da;
      pcStack_168 = "field_obstruction_waza";
      local_1c8 = 0x26;
      local_1c0 = (long *)0x0;
      if (((*puVar9 & 1) == 0) && (iVar17 = __cxa_guard_acquire(PTR_DAT_04379660), iVar17 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      uVar20 = *(undefined8 *)puVar10;
      *(undefined8 *)puVar11 = uVar20;
      FUN_00d7d9e4(&local_88,uVar20,&local_170);
      if (local_88 == (long *)0x0) goto LAB_01e8da7c;
      local_210 = (float)FUN_00d7905c(local_88,&local_1d8);
      if (local_88 != (long *)0x0) {
        plVar19 = local_88 + 10;
        do {
          iVar17 = (int)*plVar19 + -1;
          bVar15 = iVar17 == 0;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar5) {
            *(int *)plVar19 = iVar17;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        goto LAB_01e8cf64;
      }
      break;
    case 3:
      local_160 = (undefined *)0x16;
      local_158 = (long *)0x0;
      local_1d8 = (undefined8 *)0xef0cf4e1a8eab9ad;
      local_1d0 = "chargeatttack_default_collision_size_ll";
      local_170 = 0xd65830cac3e925da;
      pcStack_168 = "field_obstruction_waza";
      local_1c8 = 0x27;
      local_1c0 = (long *)0x0;
      if (((*puVar9 & 1) == 0) && (iVar17 = __cxa_guard_acquire(PTR_DAT_04379660), iVar17 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      uVar20 = *(undefined8 *)puVar10;
      *(undefined8 *)puVar11 = uVar20;
      FUN_00d7d9e4(&local_88,uVar20,&local_170);
      if (local_88 == (long *)0x0) goto LAB_01e8da7c;
      local_210 = (float)FUN_00d7905c(local_88,&local_1d8);
      if (local_88 != (long *)0x0) {
        plVar19 = local_88 + 10;
        do {
          iVar17 = (int)*plVar19 + -1;
          bVar15 = iVar17 == 0;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar5) {
            *(int *)plVar19 = iVar17;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        goto LAB_01e8cf64;
      }
      break;
    default:
      local_210 = 1.0;
      goto LAB_01e8cfa4;
    }
    if (local_1c0 != (long *)0x0) {
      (**(code **)(*local_1c0 + 0x20))();
    }
    if (local_158 != (long *)0x0) {
      (**(code **)(*local_158 + 0x20))();
    }
    if (*(char *)((long)param_1 + 0x6cc) == '\0') {
      fVar23 = *(float *)((long)param_1 + 0x4e4);
    }
    else {
      fVar23 = local_210 / fVar23;
    }
LAB_01e8cfa0:
    *(float *)((long)param_1 + 0x4e4) = fVar23;
LAB_01e8cfa4:
    local_170 = 0;
    local_140 = 0;
    local_138 = 0;
    local_160 = PTR_DAT_04382858 + 0x10;
    local_120 = 0;
    uStack_118 = 0;
    local_150 = &PTR_FUN_04287c08;
    local_158 = (long *)CONCAT44(local_158._4_4_,1);
    local_100 = '\0';
    local_110 = 0;
    local_dc = 0x3f000000bf800000;
    local_d4 = 0x3f000000;
    local_e0 = 1;
    local_d0 = 0;
    if (((*PTR_DAT_0437a648 & 1) == 0) &&
       (iVar17 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar17 != 0)) {
      FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a648);
    }
    local_130 = local_210;
    fVar23 = (float)DAT_0388a140;
    uVar7 = (ulong)DAT_0388a140 >> 0x20;
    fVar24 = (float)DAT_0388a148;
    uVar8 = (ulong)DAT_0388a148 >> 0x20;
    lVar22 = *(long *)PTR_DAT_0437a650;
    *(long *)PTR_DAT_0437a658 = lVar22;
    local_170 = *(undefined8 *)(lVar22 + 0x230);
    param_1[0xd1] = CONCAT44((float)uVar8 * local_210,fVar24 * local_210);
    param_1[0xd0] = CONCAT44((float)uVar7 * local_210,fVar23 * local_210);
    local_138 = param_1[0xd1];
    local_140 = param_1[0xd0];
    local_120 = CONCAT44(local_120._4_4_,10);
    local_d0 = CONCAT11(local_d0._1_1_,1);
    local_180 = local_a0;
    if (local_a0 != (long *)0x0) {
      lVar22 = local_a0[0xb];
      if (*(undefined8 **)(lVar22 + 0x18) == (undefined8 *)0x0) goto LAB_01e8df78;
      if (*(long *)(lVar22 + 0x10) == 0) {
        uVar20 = (**(code **)**(undefined8 **)(lVar22 + 0x18))();
        *(undefined8 *)(lVar22 + 0x10) = uVar20;
      }
      piVar1 = (int *)(lVar22 + 0xc);
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_019f7fac(&local_178,&local_170,&local_180,param_1 + 0x60);
    if (local_180 != (long *)0x0) {
      lVar22 = local_180[0xb];
      piVar1 = (int *)(lVar22 + 0xc);
      do {
        iVar17 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar17 + -1 == 0) {
        *(undefined8 *)(lVar22 + 0x18) = 0;
        (**(code **)(*local_180 + 0x20))();
      }
    }
    local_188 = 0;
    local_198 = (long *)0x0;
    uStack_190 = 0;
    local_1d0 = (char *)0x0;
    local_1d8 = (undefined8 *)CONCAT44(local_1d8._4_4_,0x11);
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_1b8 = 0;
    local_1b0 = (long *)0x0;
    local_1c8 = 0;
    local_1c0 = (long *)0x0;
    (**(code **)(*param_1 + 0x18))(&local_88,param_1);
    local_1e8 = (long *)0x0;
    uStack_1e0 = 0;
    FUN_01e8f368(&local_1e8,&local_88);
    plVar19 = local_88;
    if (local_88 != (long *)0x0) {
      plVar21 = local_88 + 1;
      do {
        iVar17 = (int)*plVar21 + -1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar5) {
          *(int *)plVar21 = iVar17;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar17 == 0) {
        local_88[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar17 = __cxa_guard_acquire(PTR_DAT_04379498), iVar17 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar22 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar22;
        local_68 = *plVar19;
        FUN_02a44274(lVar22 + 0xd8,&local_68);
      }
    }
    FUN_01e8f668(&local_1c0,&local_1e8);
    plVar19 = local_1e8;
    if (local_1e8 != (long *)0x0) {
      plVar21 = local_1e8 + 1;
      do {
        iVar17 = (int)*plVar21 + -1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar5) {
          *(int *)plVar21 = iVar17;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar17 == 0) {
        local_1e8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar17 = __cxa_guard_acquire(PTR_DAT_04379498), iVar17 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar22 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar22;
        local_88 = (long *)*plVar19;
        FUN_02a44274(lVar22 + 0xd8,&local_88);
      }
    }
    local_1f0 = local_178;
    if (local_178 != (long *)0x0) {
      lVar22 = local_178[0xb];
      if (*(undefined8 **)(lVar22 + 0x18) == (undefined8 *)0x0) goto LAB_01e8df78;
      if (*(long *)(lVar22 + 0x10) == 0) {
        uVar20 = (**(code **)**(undefined8 **)(lVar22 + 0x18))();
        *(undefined8 *)(lVar22 + 0x10) = uVar20;
      }
      piVar1 = (int *)(lVar22 + 0xc);
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_01e4b6a0(&local_1f0,&local_1d8);
    plVar19 = local_198;
    if (local_1f0 != (long *)0x0) {
      lVar22 = local_1f0[0xb];
      piVar1 = (int *)(lVar22 + 0xc);
      do {
        iVar17 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar17 + -1 == 0) {
        *(undefined8 *)(lVar22 + 0x18) = 0;
        (**(code **)(*local_1f0 + 0x20))();
        plVar19 = local_198;
      }
    }
    local_198 = plVar19;
    if (plVar19 != (long *)0x0) {
      plVar21 = plVar19 + 1;
      do {
        iVar17 = (int)*plVar21 + -1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar5) {
          *(int *)plVar21 = iVar17;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar17 == 0) {
        plVar19[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar17 = __cxa_guard_acquire(PTR_DAT_04379498), iVar17 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar22 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar22;
        local_88 = (long *)*plVar19;
        FUN_02a44274(lVar22 + 0xd8,&local_88);
      }
    }
    plVar19 = local_1b0;
    if (local_1b0 != (long *)0x0) {
      plVar21 = local_1b0 + 1;
      do {
        iVar17 = (int)*plVar21 + -1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar5) {
          *(int *)plVar21 = iVar17;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar17 == 0) {
        local_1b0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar17 = __cxa_guard_acquire(PTR_DAT_04379498), iVar17 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar22 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar22;
        local_88 = (long *)*plVar19;
        FUN_02a44274(lVar22 + 0xd8,&local_88);
      }
    }
    plVar19 = local_1c0;
    if (local_1c0 != (long *)0x0) {
      plVar21 = local_1c0 + 1;
      do {
        iVar17 = (int)*plVar21 + -1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar5) {
          *(int *)plVar21 = iVar17;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar17 == 0) {
        local_1c0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar17 = __cxa_guard_acquire(PTR_DAT_04379498), iVar17 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar22 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar22;
        local_88 = (long *)*plVar19;
        FUN_02a44274(lVar22 + 0xd8,&local_88);
      }
    }
    pcVar13 = local_1d0;
    if (local_1d0 != (char *)0x0) {
      piVar1 = (int *)(local_1d0 + 8);
      do {
        iVar17 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar17 + -1 == 0) {
        local_1d0[0x10] = '\0';
        local_1d0[0x11] = '\0';
        local_1d0[0x12] = '\0';
        local_1d0[0x13] = '\0';
        local_1d0[0x14] = '\0';
        local_1d0[0x15] = '\0';
        local_1d0[0x16] = '\0';
        local_1d0[0x17] = '\0';
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar17 = __cxa_guard_acquire(PTR_DAT_04379498), iVar17 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar22 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar22;
        local_88 = *(long **)pcVar13;
        FUN_02a44274(lVar22 + 0xd8,&local_88);
      }
    }
    plVar19 = local_a0;
    if (local_a0 != (long *)0x0) {
      lVar22 = local_a0[0xb];
      if (*(undefined8 **)(lVar22 + 0x18) == (undefined8 *)0x0) {
LAB_01e8df78:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar22 + 0x10) == 0) {
        uVar20 = (**(code **)**(undefined8 **)(lVar22 + 0x18))();
        *(undefined8 *)(lVar22 + 0x10) = uVar20;
      }
      piVar1 = (int *)(lVar22 + 0xc);
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar21 = (long *)param_1[0xd8];
    param_1[0xd8] = (long)plVar19;
    if (plVar21 != (long *)0x0) {
      lVar22 = plVar21[0xb];
      piVar1 = (int *)(lVar22 + 0xc);
      do {
        iVar17 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar17 + -1 == 0) {
        *(undefined8 *)(lVar22 + 0x18) = 0;
        (**(code **)(*plVar21 + 0x20))();
      }
    }
    (**(code **)(*local_178 + 0x10))(&local_1d8);
    local_88 = (long *)0x0;
    uStack_80 = 0;
    FUN_018fed88(&local_88,&local_1d8);
    puVar6 = local_1d8;
    if (local_1d8 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_1d8 + 1);
      do {
        iVar17 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar17 + -1 == 0) {
        local_1d8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar17 = __cxa_guard_acquire(PTR_DAT_04379498), iVar17 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar22 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar22;
        local_1e8 = (long *)*puVar6;
        FUN_02a44274(lVar22 + 0xd8,&local_1e8);
      }
    }
    FUN_019fa21c(param_1 + 0x4c,&local_88);
    plVar19 = local_88;
    if (local_88 != (long *)0x0) {
      plVar21 = local_88 + 1;
      do {
        iVar17 = (int)*plVar21 + -1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar5) {
          *(int *)plVar21 = iVar17;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar17 == 0) {
        local_88[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar17 = __cxa_guard_acquire(PTR_DAT_04379498), iVar17 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar22 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar22;
        local_1d8 = (undefined8 *)*plVar19;
        FUN_02a44274(lVar22 + 0xd8,&local_1d8);
      }
    }
    local_1d8 = (undefined8 *)local_90[0x12];
    local_1d0 = (char *)local_90[0x13];
    plVar19 = (long *)FUN_00bd8988(local_a0,local_a0[1],&local_1d8);
    (**(code **)(*plVar19 + 0x10))(&local_1d8);
    local_88 = (long *)0x0;
    uStack_80 = 0;
    FUN_00bd84b0(&local_88,&local_1d8);
    puVar6 = local_1d8;
    if (local_1d8 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_1d8 + 1);
      do {
        iVar17 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar17 + -1 == 0) {
        local_1d8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar17 = __cxa_guard_acquire(PTR_DAT_04379498), iVar17 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar22 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar22;
        local_1e8 = (long *)*puVar6;
        FUN_02a44274(lVar22 + 0xd8,&local_1e8);
      }
    }
    FUN_01e8e15c(param_1 + 0x56,&local_88);
    plVar21 = local_88;
    if (local_88 != (long *)0x0) {
      plVar2 = local_88 + 1;
      do {
        iVar17 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar17;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar17 == 0) {
        local_88[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar17 = __cxa_guard_acquire(PTR_DAT_04379498), iVar17 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar22 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar22;
        local_1d8 = (undefined8 *)*plVar21;
        FUN_02a44274(lVar22 + 0xd8,&local_1d8);
      }
    }
    (**(code **)(*local_98 + 0x18))(&local_1d8);
    local_200 = (undefined8 *)0x0;
    uStack_1f8 = 0;
    FUN_0087f944(&local_200,&local_1d8);
    puVar6 = local_1d8;
    if (local_1d8 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_1d8 + 1);
      do {
        iVar17 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar17 + -1 == 0) {
        local_1d8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar17 = __cxa_guard_acquire(PTR_DAT_04379498), iVar17 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar22 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar22;
        local_88 = (long *)*puVar6;
        FUN_02a44274(lVar22 + 0xd8,&local_88);
      }
    }
    FUN_00d804f8(plVar19,&local_200,0);
    puVar6 = local_200;
    if (local_200 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_200 + 1);
      do {
        iVar17 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar17 + -1 == 0) {
        local_200[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar17 = __cxa_guard_acquire(PTR_DAT_04379498), iVar17 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar22 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar22;
        local_1d8 = (undefined8 *)*puVar6;
        FUN_02a44274(lVar22 + 0xd8,&local_1d8);
      }
    }
    FUN_02be88ac(&local_1d8,local_178,0);
    puVar6 = local_1d8;
    puVar12 = PTR_DAT_0437a678;
    puVar11 = PTR_DAT_0437a670;
    puVar10 = PTR_DAT_0437a588;
    puVar9 = PTR_DAT_043794d0;
    if (local_1d8 == (undefined8 *)0x0) {
LAB_01e8d72c:
      cVar3 = *(char *)((long)param_1 + 0x6cc);
    }
    else {
      if (*(int *)((long)local_1d8 + 0xc) != 0) {
        piVar1 = (int *)((long)local_1d8 + 0xc);
        iVar17 = *(int *)((long)local_1d8 + 0xc);
        do {
          plVar21 = (long *)puVar6[2];
          if (((*puVar11 & 1) == 0) && (iVar18 = __cxa_guard_acquire(puVar11), iVar18 != 0)) {
            if (((*PTR_DAT_0437a598 & 1) == 0) &&
               (iVar18 = __cxa_guard_acquire(PTR_DAT_0437a598), iVar18 != 0)) {
              if (((*puVar9 & 1) == 0) && (iVar18 = __cxa_guard_acquire(puVar9), iVar18 != 0)) {
                uVar20 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar20;
                __cxa_guard_release(puVar9);
              }
              *(undefined **)puVar10 = PTR_DAT_043794d8;
              __cxa_guard_release(PTR_DAT_0437a598);
            }
            *(undefined **)puVar12 = puVar10;
            __cxa_guard_release(puVar11);
          }
          while( true ) {
            if (plVar21 == (long *)0x0) goto LAB_01e8e0f4;
            if (plVar21 == (long *)puVar12) break;
            plVar21 = (long *)*plVar21;
          }
          iVar18 = *piVar1;
          if (iVar18 == iVar17) {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar17 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar22 = puVar6[3];
              plVar21 = (long *)0x0;
              puVar6 = local_1d8;
              if (lVar22 != 0) {
                plVar21 = (long *)(lVar22 + -0x50);
              }
              goto joined_r0x01e8dfe0;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar17 = iVar18;
        } while (iVar18 != 0);
      }
LAB_01e8e0f4:
      plVar21 = (long *)0x0;
      puVar6 = local_1d8;
joined_r0x01e8dfe0:
      local_1d8 = puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar6 + 1);
        do {
          iVar17 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar17 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar17 + -1 == 0) {
          puVar6[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar17 = __cxa_guard_acquire(PTR_DAT_04379498), iVar17 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar22 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar22;
          local_88 = (long *)*puVar6;
          FUN_02a44274(lVar22 + 0xd8,&local_88);
        }
      }
      if (plVar21 == (long *)0x0) goto LAB_01e8d72c;
      lVar22 = plVar21[0xb];
      piVar1 = (int *)(lVar22 + 0xc);
      *(undefined1 *)((long)plVar21 + 0x79) = 0;
      do {
        iVar17 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar17 + -1 != 0) goto LAB_01e8d72c;
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))(plVar21);
      cVar3 = *(char *)((long)param_1 + 0x6cc);
    }
    if (cVar3 != '\0') {
      *(float *)(param_1 + 0xd9) = local_210;
    }
    (**(code **)(*plVar19 + 0x18))(&local_1d8,plVar19);
    local_88 = (long *)0x0;
    uStack_80 = 0;
    FUN_00bd84b0(&local_88,&local_1d8);
    puVar6 = local_1d8;
    if (local_1d8 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_1d8 + 1);
      do {
        iVar17 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar17 + -1 == 0) {
        local_1d8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar17 = __cxa_guard_acquire(PTR_DAT_04379498), iVar17 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar22 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar22;
        local_1e8 = (long *)*puVar6;
        FUN_02a44274(lVar22 + 0xd8,&local_1e8);
      }
    }
    FUN_00bd8d00(param_1 + 0xce,&local_88);
    plVar19 = local_88;
    if (local_88 != (long *)0x0) {
      plVar21 = local_88 + 1;
      do {
        iVar17 = (int)*plVar21 + -1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar5) {
          *(int *)plVar21 = iVar17;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar17 == 0) {
        local_88[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar17 = __cxa_guard_acquire(PTR_DAT_04379498), iVar17 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar22 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar22;
        local_1d8 = (undefined8 *)*plVar19;
        FUN_02a44274(lVar22 + 0xd8,&local_1d8);
      }
    }
    cVar14 = local_100;
    cVar3 = local_100;
    if (local_178 != (long *)0x0) {
      lVar22 = local_178[0xb];
      piVar1 = (int *)(lVar22 + 0xc);
      do {
        iVar17 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar17 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar17 + -1 == 0) {
        *(undefined8 *)(lVar22 + 0x18) = 0;
        (**(code **)(*local_178 + 0x20))();
        cVar14 = '\0';
        cVar3 = local_100;
      }
    }
    local_100 = cVar14;
    if (cVar3 != '\0') {
      local_100 = '\0';
    }
    if (local_a0 != (long *)0x0) {
      lVar22 = *(long *)((long)local_a0 + 0x58);
      piVar1 = (int *)(lVar22 + 0xc);
      do {
        iVar17 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar17 + -1 == 0) {
        *(undefined8 *)(lVar22 + 0x18) = 0;
        (**(code **)(*local_a0 + 0x20))();
      }
    }
  }
  if (local_98 != (long *)0x0) {
    lVar22 = local_98[0xb];
    piVar1 = (int *)(lVar22 + 0xc);
    do {
      iVar17 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar17 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar17 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*local_98 + 0x20))();
    }
  }
joined_r0x01e8d8a4:
  if (local_90 != (long *)0x0) {
    lVar22 = local_90[0xb];
    piVar1 = (int *)(lVar22 + 0xc);
    do {
      iVar17 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar17 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar17 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*local_90 + 0x20))();
    }
  }
  return;
}


