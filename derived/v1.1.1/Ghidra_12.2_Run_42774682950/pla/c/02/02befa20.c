/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02befa20; name: FUN_02befa20
 */


void FUN_02befa20(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5,undefined4 param_6,long *param_7,undefined4 param_8)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  long *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  long *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined1 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined4 local_10c;
  long local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined2 local_ec;
  undefined1 local_ea;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined4 local_98;
  undefined2 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined2 local_7c;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  long *local_48;
  
  *param_2 = param_3;
  plVar8 = (long *)param_2[2];
  plVar10 = (long *)*param_7;
  if (plVar8 != plVar10) {
    if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
      plVar10 = plVar10 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar8 = (long *)param_2[2];
      plVar10 = (long *)*param_7;
    }
    param_2[2] = plVar10;
    if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
      plVar10 = plVar8 + 2;
      do {
        lVar13 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar13 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))();
      }
    }
  }
  *(undefined4 *)(param_2 + 3) = param_8;
  local_160 = 0x1000;
  local_150 = 0x200;
  local_b0 = 0;
  uStack_a8 = 0x3ba3d70a3d4ccccd;
  local_140 = 0x10;
  local_10c = 0x10;
  local_a0 = 0x3ca3d70a;
  local_12c = 0x40;
  local_ec = 0x101;
  local_98 = 0x3f333333;
  local_7c = 0x101;
  local_110 = 1;
  local_ea = 1;
  local_94 = 0x100;
  local_80 = 1;
  local_78 = 0x3f800000;
  local_168 = 0;
  local_158 = 0;
  local_148 = 0;
  local_138 = 0;
  local_130 = 0;
  local_118 = 0;
  local_f0 = 0;
  local_9c = 0;
  local_70 = 0;
  local_68 = 0;
  local_180 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_c0 = 0;
  local_b8 = (long *)0x0;
  local_90 = 0x3f19999a00004000;
  uStack_88 = 0x43f800000;
  local_64 = 0x13d088889;
  local_5c = 8;
  uStack_d8 = 0xdf7ffff0df7ffff0;
  local_e0 = 0xdf7ffff0df7ffff0;
  uStack_c8 = 0x5f7ffff05f7ffff0;
  uStack_d0 = 0x5f7ffff05f7ffff0;
  local_100 = param_1 << 0x20;
  uStack_f8 = 0;
  local_178 = *param_4;
  lVar13 = tpidr_el0;
  lVar11 = *(long *)(lVar13 + 0x38d490);
  local_170 = param_6;
  if (lVar11 == 0) {
    lVar11 = FUN_0333d16c(0,1);
    *(long *)(lVar13 + 0x38d490) = lVar11;
  }
  plVar10 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
  plVar10 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x230,0);
  plVar10[1] = 0xffffffff;
  plVar10[2] = 1;
  *(undefined4 *)(plVar10 + 4) = 0;
  memset(plVar10 + 5,0xff,0x200);
  *plVar10 = (long)&PTR_LAB_04287208;
  *(undefined1 *)(plVar10 + 3) = 2;
  plVar8 = (long *)param_2[0x22];
  param_2[0x22] = plVar10;
  if (plVar8 != (long *)0x0) {
    if (plVar8[1] != 0) {
      plVar10 = plVar8 + 2;
      do {
        lVar11 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))();
      }
    }
    plVar10 = (long *)param_2[0x22];
  }
  local_48 = plVar10;
  if (plVar10 == (long *)0x0) {
    FUN_02bf0954(&local_48,param_5);
  }
  else {
    if (plVar10[1] != 0) {
      plVar8 = plVar10 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = *plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_02bf0954(&local_48,param_5);
    if (plVar10[1] != 0) {
      plVar8 = plVar10 + 2;
      do {
        lVar11 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
  }
  lVar11 = *(long *)(lVar13 + 0x38d490);
  if (lVar11 == 0) {
    lVar11 = FUN_0333d16c(0,1);
    *(long *)(lVar13 + 0x38d490) = lVar11;
  }
  plVar10 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
  plVar10 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x230,0);
  plVar10[1] = 0xffffffff;
  plVar10[2] = 1;
  *(undefined4 *)(plVar10 + 4) = 0;
  memset(plVar10 + 5,0xff,0x200);
  *plVar10 = (long)&PTR_LAB_04287208;
  *(undefined1 *)(plVar10 + 3) = 2;
  plVar8 = (long *)param_2[0x23];
  param_2[0x23] = plVar10;
  if (plVar8 != (long *)0x0) {
    if (plVar8[1] != 0) {
      plVar10 = plVar8 + 2;
      do {
        lVar11 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))();
      }
    }
    plVar10 = (long *)param_2[0x23];
  }
  local_188 = plVar10;
  if (plVar10 == (long *)0x0) {
    FUN_02bf0954(&local_188,param_5);
  }
  else {
    if (plVar10[1] != 0) {
      plVar8 = plVar10 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = *plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_02bf0954(&local_188,param_5);
    if (plVar10[1] != 0) {
      plVar8 = plVar10 + 2;
      do {
        lVar11 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
  }
  plVar10 = (long *)param_2[0x22];
  plVar8 = local_b8;
  if (local_b8 != plVar10) {
    if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
      plVar10 = plVar10 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar10 = (long *)param_2[0x22];
    }
    plVar8 = plVar10;
    if ((local_b8 != (long *)0x0) && (local_b8[1] != 0)) {
      plVar1 = local_b8 + 2;
      do {
        lVar11 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 + -1 == 0) {
        lVar11 = *local_b8;
        local_b8 = plVar10;
        (**(code **)(lVar11 + 0x18))();
        plVar8 = local_b8;
      }
    }
  }
  local_b8 = plVar8;
  lVar11 = *(long *)(lVar13 + 0x38d490);
  if (lVar11 == 0) {
    lVar11 = FUN_0333d16c(0,1);
    *(long *)(lVar13 + 0x38d490) = lVar11;
  }
  plVar10 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
  lVar11 = (**(code **)(*plVar10 + 0x10))(plVar10,0x990,0);
  FUN_03028830(lVar11,&local_180);
  plVar10 = (long *)param_2[1];
  param_2[1] = lVar11;
  if (plVar10 != (long *)0x0) {
    if (plVar10[1] != 0) {
      plVar8 = plVar10 + 2;
      do {
        lVar11 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))();
      }
    }
    lVar11 = param_2[1];
  }
  lVar11 = *(long *)(lVar11 + 0x898);
  uVar2 = *(undefined4 *)(lVar11 + 0x50);
  iVar7 = FUN_03013d54(lVar11 + 0x48,0,0x100,0x10);
  if (-1 < iVar7) {
    FUN_03014054(lVar11 + 0x18,lVar11,uVar2);
  }
  lVar11 = *(long *)(param_2[1] + 0x8a0);
  uVar2 = *(undefined4 *)(lVar11 + 0x48);
  iVar7 = FUN_03016d6c(lVar11 + 0x40,0,0x80,0x10);
  if (-1 < iVar7) {
    FUN_0301707c(lVar11 + 0x18,lVar11,uVar2);
  }
  FUN_030043e4(*(long *)(param_2[1] + 0x488) + 0x38,0,0x10,0x10);
  nn::os::LockMutex((MutexType *)(param_2 + 0x25));
  lVar14 = *(long *)(param_2[1] + 0x898);
  lVar11 = *(long *)(lVar13 + 0x38d490);
  if (lVar11 == 0) {
    lVar11 = FUN_0333d16c(0,1);
    *(long *)(lVar13 + 0x38d490) = lVar11;
  }
  plVar10 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
  puVar9 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x58,0);
  *(undefined4 *)(puVar9 + 3) = 0;
  puVar9[1] = 0xffffffff;
  puVar9[2] = 1;
  *(undefined1 *)((long)puVar9 + 0x1c) = 1;
  *puVar9 = &PTR_LAB_042b0c68;
  puVar9[6] = lVar14;
  puVar9[4] = 0;
  puVar9[5] = 0x8000000000000000;
  if ((lVar14 != 0) && (*(long *)(lVar14 + 8) != 0)) {
    plVar10 = (long *)(lVar14 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar9[7] = 0;
  puVar9[8] = 0xffffffff00000000;
  *puVar9 = &PTR_LAB_04287de0;
  puVar9[9] = 0;
  puVar9[10] = 0xffffffff00000000;
  *(undefined1 *)((long)puVar9 + 0x1c) = 2;
  plVar10 = (long *)param_2[4];
  param_2[4] = puVar9;
  if (plVar10 != (long *)0x0) {
    if (plVar10[1] != 0) {
      plVar8 = plVar10 + 2;
      do {
        lVar13 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar13 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))();
      }
    }
    puVar9 = (undefined8 *)param_2[4];
  }
  (**(code **)(*(long *)param_2[1] + 0x60))((long *)param_2[1],puVar9);
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x25));
  local_1a0 = (long *)*param_2;
  puVar9 = (undefined8 *)(**(code **)(*local_1a0 + 0x10))(local_1a0,0x38,8);
  puVar5 = PTR_DAT_04379528;
  pbVar15 = PTR_DAT_04379520;
  if (puVar9 == (undefined8 *)0x0) {
    local_198 = 0;
    local_190 = 0;
    local_1a0 = (long *)0x0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      pbVar15 = PTR_DAT_04379520;
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_02bf0950;
    *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = local_1a0;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
    uVar12 = *param_2;
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    puVar9[3] = uVar12;
    puVar9[4] = 0x1fffffffffffffff;
    puVar9[5] = 0;
    *(undefined4 *)(puVar9 + 6) = 0;
    local_198 = 0x38;
    local_190 = 8;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
  }
  lVar13 = param_2[5];
  param_2[5] = puVar9;
  if (lVar13 != 0) {
    FUN_02bf9870(param_2 + 6);
  }
  param_2[7] = local_198;
  param_2[8] = local_190;
  param_2[6] = local_1a0;
  local_1a0 = (long *)*param_2;
  puVar9 = (undefined8 *)(**(code **)(*local_1a0 + 0x10))(local_1a0,0x38,8);
  if (puVar9 == (undefined8 *)0x0) {
    local_198 = 0;
    local_190 = 0;
    local_1a0 = (long *)0x0;
  }
  else {
    if (((*pbVar15 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_02bf0950;
    *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = local_1a0;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
    uVar12 = *param_2;
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    puVar9[3] = uVar12;
    puVar9[4] = 0x1fffffffffffffff;
    puVar9[5] = 0;
    *(undefined4 *)(puVar9 + 6) = 0;
    local_198 = 0x38;
    local_190 = 8;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
  }
  lVar13 = param_2[9];
  param_2[9] = puVar9;
  if (lVar13 != 0) {
    FUN_02bf9c0c(param_2 + 10);
  }
  param_2[0xb] = local_198;
  param_2[0xc] = local_190;
  param_2[10] = local_1a0;
  local_1a0 = (long *)*param_2;
  puVar9 = (undefined8 *)(**(code **)(*local_1a0 + 0x10))(local_1a0,0x38,8);
  if (puVar9 == (undefined8 *)0x0) {
    local_198 = 0;
    local_190 = 0;
    local_1a0 = (long *)0x0;
  }
  else {
    if (((*pbVar15 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_02bf0950;
    *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = local_1a0;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
    uVar12 = *param_2;
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    puVar9[3] = uVar12;
    puVar9[4] = 0x1fffffffffffffff;
    puVar9[5] = 0;
    *(undefined4 *)(puVar9 + 6) = 0;
    local_198 = 0x38;
    local_190 = 8;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
  }
  lVar13 = param_2[0xd];
  param_2[0xd] = puVar9;
  if (lVar13 != 0) {
    FUN_02bf9fa8(param_2 + 0xe);
  }
  param_2[0xf] = local_198;
  param_2[0x10] = local_190;
  param_2[0xe] = local_1a0;
  local_1a0 = (long *)*param_2;
  puVar9 = (undefined8 *)(**(code **)(*local_1a0 + 0x10))(local_1a0,0x38,8);
  if (puVar9 == (undefined8 *)0x0) {
    local_198 = 0;
    local_190 = 0;
    local_1a0 = (long *)0x0;
  }
  else {
    if (((*pbVar15 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_02bf0950;
    *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = local_1a0;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
    uVar12 = *param_2;
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    puVar9[3] = uVar12;
    puVar9[4] = 0x7fffffffffffffff;
    puVar9[5] = 0;
    *(undefined4 *)(puVar9 + 6) = 0;
    local_198 = 0x38;
    local_190 = 8;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
  }
  lVar13 = param_2[0x11];
  param_2[0x11] = puVar9;
  if (lVar13 != 0) {
    FUN_02bfa344(param_2 + 0x12);
  }
  param_2[0x13] = local_198;
  param_2[0x14] = local_190;
  param_2[0x12] = local_1a0;
  local_1a0 = (long *)*param_2;
  puVar9 = (undefined8 *)(**(code **)(*local_1a0 + 0x10))(local_1a0,0x38,8);
  if (puVar9 == (undefined8 *)0x0) {
    local_198 = 0;
    local_190 = 0;
    local_1a0 = (long *)0x0;
  }
  else {
    if (((*pbVar15 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_02bf0950;
    *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = local_1a0;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
    uVar12 = *param_2;
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    puVar9[3] = uVar12;
    puVar9[4] = 0x1fffffffffffffff;
    puVar9[5] = 0;
    *(undefined4 *)(puVar9 + 6) = 0;
    local_198 = 0x38;
    local_190 = 8;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
  }
  lVar13 = param_2[0x15];
  param_2[0x15] = puVar9;
  if (lVar13 != 0) {
    FUN_02bfa688(param_2 + 0x16);
  }
  param_2[0x17] = local_198;
  param_2[0x18] = local_190;
  param_2[0x16] = local_1a0;
  local_1a0 = (long *)*param_2;
  puVar9 = (undefined8 *)(**(code **)(*local_1a0 + 0x10))(local_1a0,0x38,8);
  if (puVar9 == (undefined8 *)0x0) {
    local_198 = 0;
    local_190 = 0;
    local_1a0 = (long *)0x0;
  }
  else {
    if (((*pbVar15 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_02bf0950;
    *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = local_1a0;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
    uVar12 = *param_2;
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    puVar9[3] = uVar12;
    puVar9[4] = 0x7fffffffffffffff;
    puVar9[5] = 0;
    *(undefined4 *)(puVar9 + 6) = 0;
    local_198 = 0x38;
    local_190 = 8;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
  }
  lVar13 = param_2[0x19];
  param_2[0x19] = puVar9;
  if (lVar13 != 0) {
    FUN_02bfa9cc(param_2 + 0x1a);
  }
  param_2[0x1b] = local_198;
  param_2[0x1c] = local_190;
  param_2[0x1a] = local_1a0;
  local_1a0 = (long *)*param_2;
  puVar9 = (undefined8 *)(**(code **)(*local_1a0 + 0x10))(local_1a0,0x38,8);
  if (puVar9 == (undefined8 *)0x0) {
    local_198 = 0;
    local_190 = 0;
    local_1a0 = (long *)0x0;
  }
  else {
    if (((*pbVar15 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar13 + 0x80)) {
LAB_02bf0950:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = local_1a0;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
    uVar12 = *param_2;
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    puVar9[3] = uVar12;
    puVar9[4] = 0x1fffffffffffffff;
    puVar9[5] = 0;
    *(undefined4 *)(puVar9 + 6) = 0;
    local_198 = 0x38;
    local_190 = 8;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
  }
  lVar13 = param_2[0x1d];
  param_2[0x1d] = puVar9;
  if (lVar13 != 0) {
    FUN_02bfad10(param_2 + 0x1e);
  }
  param_2[0x1f] = local_198;
  param_2[0x20] = local_190;
  param_2[0x1e] = local_1a0;
  FUN_02bf0bf4(&local_180);
  return;
}


