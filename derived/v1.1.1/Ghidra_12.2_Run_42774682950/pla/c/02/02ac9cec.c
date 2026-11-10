/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ac9cec; name: FUN_02ac9cec
 */


void FUN_02ac9cec(long *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  byte *pbVar17;
  long *plVar18;
  long *local_88;
  long *local_80;
  undefined8 local_78;
  long local_70;
  int local_64;
  
  param_1[7] = 0;
  puVar5 = PTR_DAT_043796d0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  pbVar17 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar5 = PTR_DAT_04379528;
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if ((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) {
    plVar16 = (long *)0x0;
  }
  else {
    plVar16 = *(long **)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[9] = (long)&PTR_LAB_04281dd8;
  *param_1 = (long)&PTR_LAB_04281cf0;
  param_1[1] = (long)plVar16;
  param_1[0xb] = (long)&PTR_LAB_04281e08;
  plVar11 = param_1 + 0xc;
  *plVar11 = 0;
  param_1[0x27] = (long)plVar16;
  param_1[0x28] = 0x555555555555555;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0x3f800000;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0x3f800000;
  param_1[0x2d] = 0x555555555555555;
  param_1[0x2e] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = (long)plVar16;
  param_1[0x1b] = 0x666666666666666;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = (long)plVar16;
  param_1[0x20] = 0x666666666666666;
  param_1[0x21] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = (long)plVar16;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = (long)plVar16;
  param_1[0x35] = 0x2aaaaaaaaaaaaaa;
  param_1[0x38] = 0;
  param_1[0x39] = (long)plVar16;
  param_1[0x3a] = 0x2aaaaaaaaaaaaaa;
  param_1[0x3b] = 0;
  plVar15 = *(long **)(*(long *)(*param_2 + 0x60) + 0x58);
  if (plVar15 != (long *)0x0) {
    plVar8 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar8 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x70,8);
  if (plVar8 == (long *)0x0) {
    local_78 = 0;
    local_70 = 0;
    local_80 = (long *)0x0;
  }
  else {
    if (((*pbVar17 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar13 = PTR_DAT_04379528, iVar6 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar13,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_02aca83c;
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar16;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    *plVar8 = 0;
    plVar8[1] = 0;
    *(undefined4 *)(plVar8 + 6) = 0;
    plVar8[2] = 0;
    plVar8[3] = (long)plVar16;
    *(undefined4 *)(plVar8 + 0xb) = 0;
    plVar8[0xc] = 0;
    *(undefined4 *)(plVar8 + 0xd) = 0x3f800000;
    plVar8[4] = 0x666666666666666;
    plVar8[5] = 0;
    plVar8[7] = 0;
    plVar8[8] = (long)plVar16;
    plVar8[9] = 0x666666666666666;
    plVar8[10] = 0;
    plVar18 = (long *)plVar15[1];
    if (((*pbVar17 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar13 = PTR_DAT_04379528, iVar6 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar13,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_02aca83c;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar18;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    puVar10 = (undefined8 *)(**(code **)(*plVar18 + 0x10))(plVar18,0x2c0,8);
    if (puVar10 == (undefined8 *)0x0) {
      (**(code **)(*plVar18 + 0xb8))(plVar18);
    }
    FUN_02bbfbb4(puVar10,plVar15);
    *puVar10 = &PTR_LAB_04282810;
    puVar10[1] = plVar18;
    puVar10[2] = puVar10;
    puVar10[3] = 0x2c0;
    puVar10[9] = &PTR_LAB_04282850;
    puVar10[4] = 8;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    if (puVar10 == (undefined8 *)0x0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      piVar1 = (int *)(puVar10 + 10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      puVar12 = puVar10;
    }
    local_78 = (ulong)local_78._4_4_ << 0x20;
    local_88 = (long *)&DAT_00000218;
    local_80 = (long *)0x100;
    FUN_02bbfe84(puVar12,&local_88,2,0,0);
    plVar18 = (long *)*plVar8;
    *plVar8 = 0;
    if (plVar18 != (long *)0x0) {
      plVar2 = plVar18 + 10;
      do {
        iVar6 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar18 + 0x10))();
      }
    }
    *plVar8 = (long)puVar10;
    local_64 = 0;
    lVar9 = 0;
    puVar13 = PTR_s_ColorUVScaleU_04281358;
    while( true ) {
      if (puVar13 != (undefined *)0x0) {
        FUN_00947cf8(&local_88);
        FUN_02acd930(plVar8 + 1,&local_88,&local_64);
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
        local_64 = local_64 + 1;
      }
      if (lVar9 + 0x10 == 0x870) break;
      puVar13 = *(undefined **)((long)&PTR_s_ColorUVScaleV_04281368 + lVar9);
      lVar9 = lVar9 + 0x10;
    }
    local_78 = 0x70;
    local_70 = 8;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    pbVar17 = PTR_DAT_04379520;
    local_80 = plVar16;
  }
  local_88 = (long *)0x0;
  lVar7 = *plVar11;
  *plVar11 = (long)plVar8;
  if (lVar7 != 0) {
    FUN_02ad298c(param_1 + 0xd);
  }
  param_1[0xe] = local_78;
  param_1[0xf] = local_70;
  param_1[0xd] = (long)local_80;
  plVar11 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x70,8);
  if (plVar11 == (long *)0x0) {
    local_78 = 0;
    local_70 = 0;
    local_80 = (long *)0x0;
  }
  else {
    if (((*pbVar17 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar13 = PTR_DAT_04379528, iVar6 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar13,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_02aca83c;
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar16;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    *plVar11 = 0;
    plVar11[1] = 0;
    *(undefined4 *)(plVar11 + 6) = 0;
    plVar11[2] = 0;
    plVar11[3] = (long)plVar16;
    *(undefined4 *)(plVar11 + 0xb) = 0;
    plVar11[0xc] = 0;
    *(undefined4 *)(plVar11 + 0xd) = 0x3f800000;
    plVar11[4] = 0x666666666666666;
    plVar11[5] = 0;
    plVar11[7] = 0;
    plVar11[8] = (long)plVar16;
    plVar11[9] = 0x666666666666666;
    plVar11[10] = 0;
    plVar8 = (long *)plVar15[1];
    if (((*pbVar17 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar13 = PTR_DAT_04379528, iVar6 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar13,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_02aca83c;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar8;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    puVar10 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x388,8);
    if (puVar10 == (undefined8 *)0x0) {
      (**(code **)(*plVar8 + 0xb8))(plVar8);
    }
    FUN_02bbfbb4(puVar10,plVar15);
    *puVar10 = &PTR_LAB_04282880;
    puVar10[1] = plVar8;
    puVar10[2] = puVar10;
    puVar10[3] = 0x388;
    puVar10[9] = &PTR_LAB_042828c0;
    puVar10[4] = 8;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    if (puVar10 == (undefined8 *)0x0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      piVar1 = (int *)(puVar10 + 10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      puVar12 = puVar10;
    }
    local_78 = local_78 & 0xffffffff00000000;
    local_88 = (long *)&DAT_000002e0;
    local_80 = (long *)0x100;
    FUN_02bbfe84(puVar12,&local_88,2,0,0);
    plVar8 = (long *)*plVar11;
    *plVar11 = 0;
    if (plVar8 != (long *)0x0) {
      plVar18 = plVar8 + 10;
      do {
        iVar6 = (int)*plVar18 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar4) {
          *(int *)plVar18 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    *plVar11 = (long)puVar10;
    local_64 = 0;
    lVar9 = 0;
    lVar14 = DAT_043ef050;
    while( true ) {
      if (lVar14 != 0) {
        FUN_00947cf8(&local_88);
        FUN_02acd930(plVar11 + 1,&local_88,&local_64);
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
        local_64 = local_64 + 1;
      }
      if (lVar9 + 0x18 == 0x468) break;
      lVar14 = *(long *)((long)&DAT_043ef068 + lVar9);
      lVar9 = lVar9 + 0x18;
    }
    local_78 = 0x70;
    local_70 = 8;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    local_80 = plVar16;
  }
  local_88 = (long *)0x0;
  lVar7 = param_1[0x10];
  param_1[0x10] = (long)plVar11;
  if (lVar7 != 0) {
    FUN_02ad2c18(param_1 + 0x11);
  }
  param_1[0x12] = local_78;
  param_1[0x13] = local_70;
  param_1[0x11] = (long)local_80;
  plVar11 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x70,8);
  if (plVar11 == (long *)0x0) {
    local_78 = 0;
    local_70 = 0;
    local_80 = (long *)0x0;
LAB_02aca580:
    local_88 = (long *)0x0;
    lVar7 = param_1[0x14];
    param_1[0x14] = (long)plVar11;
    if (lVar7 != 0) {
      FUN_02ad2ea4(param_1 + 0x15);
    }
    param_1[0x16] = local_78;
    param_1[0x17] = local_70;
    param_1[0x15] = (long)local_80;
    if (plVar15 != (long *)0x0) {
      plVar16 = plVar15 + 10;
      do {
        iVar6 = (int)*plVar16 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *(int *)plVar16 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
    return;
  }
  if (((*pbVar17 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar13 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar13,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
  if (*(ulong *)(lVar7 + 0x80) < 0x10) {
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar16;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    *plVar11 = 0;
    plVar11[1] = 0;
    *(undefined4 *)(plVar11 + 6) = 0;
    plVar11[2] = 0;
    plVar11[3] = (long)plVar16;
    *(undefined4 *)(plVar11 + 0xb) = 0;
    plVar11[0xc] = 0;
    *(undefined4 *)(plVar11 + 0xd) = 0x3f800000;
    plVar11[4] = 0x666666666666666;
    plVar11[5] = 0;
    plVar11[7] = 0;
    plVar11[8] = (long)plVar16;
    plVar11[9] = 0x666666666666666;
    plVar11[10] = 0;
    plVar8 = (long *)plVar15[1];
    if (((*pbVar17 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar13 = PTR_DAT_04379528, iVar6 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar13,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (*(ulong *)(lVar9 + 0x80) < 0x10) {
      *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar8;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      puVar10 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0xe8,8);
      if (puVar10 == (undefined8 *)0x0) {
        (**(code **)(*plVar8 + 0xb8))(plVar8);
      }
      FUN_02bbfbb4(puVar10,plVar15);
      *puVar10 = &PTR_LAB_042828f0;
      puVar10[1] = plVar8;
      puVar10[2] = puVar10;
      puVar10[3] = 0xe8;
      puVar10[9] = &PTR_LAB_04282930;
      puVar10[4] = 8;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      if (puVar10 == (undefined8 *)0x0) {
        puVar12 = (undefined8 *)0x0;
      }
      else {
        piVar1 = (int *)(puVar10 + 10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        puVar12 = puVar10;
      }
      local_78 = local_78 & 0xffffffff00000000;
      local_88 = (long *)&DAT_00000040;
      local_80 = (long *)0x100;
      FUN_02bbfe84(puVar12,&local_88,2,0,0);
      plVar8 = (long *)*plVar11;
      *plVar11 = 0;
      if (plVar8 != (long *)0x0) {
        plVar18 = plVar8 + 10;
        do {
          iVar6 = (int)*plVar18 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar4) {
            *(int *)plVar18 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
      }
      *plVar11 = (long)puVar10;
      local_64 = 0;
      if (DAT_043ef4b8 != 0) {
        FUN_00947cf8(&local_88);
        FUN_02acd930(plVar11 + 1,&local_88,&local_64);
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
        local_64 = local_64 + 1;
      }
      if (DAT_043ef500 != 0) {
        FUN_00947cf8(&local_88);
        FUN_02acd930(plVar11 + 1,&local_88,&local_64);
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
        local_64 = local_64 + 1;
      }
      local_78 = 0x70;
      local_70 = 8;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      local_80 = plVar16;
      goto LAB_02aca580;
    }
  }
LAB_02aca83c:
                    /* WARNING: Subroutine does not return */
  abort();
}


