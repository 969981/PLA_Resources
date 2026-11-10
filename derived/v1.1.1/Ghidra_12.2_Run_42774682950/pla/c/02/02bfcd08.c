/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bfcd08; name: FUN_02bfcd08
 */


void FUN_02bfcd08(undefined8 param_1,long *param_2,long param_3,long *param_4,undefined8 param_5,
                 undefined4 param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  code *pcVar19;
  long lVar20;
  byte *pbVar21;
  long lVar22;
  undefined4 *puVar23;
  long lVar24;
  long *local_e0;
  long *local_d8;
  undefined8 local_d0;
  long local_c8;
  undefined8 local_c0;
  ulong local_b8;
  undefined4 local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  long *local_88 [3];
  long *local_68;
  
  puVar5 = PTR_DAT_043796d0;
  param_2[7] = 0;
  *param_2 = (long)(puVar5 + 0x10);
  *(undefined4 *)(param_2 + 8) = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 6) = 0;
  pbVar21 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar23 = (undefined4 *)PTR_DAT_04379528;
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar9 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = 0;
    if (*(long *)(lVar9 + 0x80) != 0) {
      lVar18 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8);
    }
    pbVar21 = PTR_DAT_04379520;
    puVar23 = (undefined4 *)PTR_DAT_04379528;
  }
  *param_2 = (long)&DAT_04287f30;
  param_2[1] = lVar18;
  param_2[9] = (long)&PTR_LAB_04287f60;
  if (((*PTR_DAT_0437a648 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a648);
  }
  PTR_DAT_0437a650[8] = 1;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  *param_2 = (long)&PTR_LAB_04287ec0;
  param_2[9] = (long)&PTR_LAB_04287ef0;
  param_2[10] = param_3;
  param_2[0x1b] = 0;
  param_2[0xb] = (long)&PTR_FUN_04349f60;
  param_2[0xc] = 0;
  param_2[0x2a] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = (long)&PTR_FUN_04349f60;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = (long)&PTR_FUN_04349f60;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  if (((*pbVar21 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar10 = nn::os::GetTlsValue(*puVar23);
  lVar18 = DAT_043f1798;
  lVar9 = tpidr_el0;
  if ((((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
      (lVar10 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), lVar10 == 0)) &&
     (lVar10 = *(long *)(lVar9 + 0x20), *(long *)(lVar9 + 0x20) == 0)) {
    *(long *)(lVar9 + 0x20) = DAT_043f1798;
    lVar10 = lVar18;
  }
  param_2[0x3d] = 0;
  *(undefined4 *)(param_2 + 0x3e) = 0;
  param_2[0x3b] = lVar10;
  param_2[0x3c] = 0xfffffffffffffff;
  nn::os::InitializeLightEvent((long)param_2 + 0x1fc,0,1);
  param_2[0x42] = (long)&PTR_FUN_04287e38;
  param_2[0x41] = 0;
  param_2[0x43] = (long)param_4;
  *(undefined4 *)(param_2 + 0x44) = 0x10;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  param_2[0x4c] = 0;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0;
  param_2[0x4f] = 0;
  param_2[0x50] = 0;
  param_2[0x51] = 0;
  local_d0 = 0x800000000000;
  uVar11 = FUN_032cff30(param_2 + 0x42,0,&local_d0,0,5);
  FUN_03329500(uVar11,&LAB_02bfe850,0);
  FUN_032bceac(&DAT_04450940);
  FUN_032bceac(&DAT_04450ac0);
  FUN_032bceac(&DAT_0442d250);
  lVar18 = *(long *)(lVar9 + 0x38d490);
  if (lVar18 == 0) {
    lVar18 = FUN_0333d16c(0,1);
    *(long *)(lVar9 + 0x38d490) = lVar18;
  }
  plVar12 = *(long **)(*(long *)(lVar18 + 8) + 0x58);
  lVar18 = (**(code **)(*plVar12 + 0x10))(plVar12,0x60,0);
  FUN_032bd56c(lVar18,0x100000,0);
  plVar12 = (long *)param_2[0x45];
  param_2[0x45] = lVar18;
  if ((plVar12 != (long *)0x0) && (plVar12[1] != 0)) {
    plVar13 = plVar12 + 2;
    do {
      lVar18 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar18 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar18 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))();
    }
  }
  local_a0 = 0;
  local_90 = 0;
  local_98 = 0x40;
  lVar18 = *(long *)(lVar9 + 0x38d490);
  if (lVar18 == 0) {
    lVar18 = FUN_0333d16c(0,1);
    *(long *)(lVar9 + 0x38d490) = lVar18;
  }
  plVar12 = *(long **)(*(long *)(lVar18 + 8) + 0x58);
  lVar18 = (**(code **)(*plVar12 + 0x10))(plVar12,0x390,0);
  FUN_0332ea84(lVar18,&local_a0);
  plVar12 = (long *)param_2[0x50];
  param_2[0x50] = lVar18;
  if ((plVar12 != (long *)0x0) && (plVar12[1] != 0)) {
    plVar13 = plVar12 + 2;
    do {
      lVar18 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar18 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar18 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))();
    }
  }
  local_c8 = 0;
  local_c0 = 0x8000000000000000;
  local_b8 = 0;
  local_a8 = "Havok Worker";
  local_d0 = CONCAT44(3,(undefined4)local_d0);
  local_b0 = 3;
  local_d0 = CONCAT71(local_d0._1_7_,2);
  local_c8 = FUN_032bd1d4(PTR_PTR_0434a080,3,4,0,0,(long)&local_c0 + 4);
  lVar18 = (long)(int)local_c0;
  if ((int)local_c0 < 3) {
    uVar4 = 2 - (int)local_c0;
    local_c0 = CONCAT44(local_c0._4_4_,3);
    memset((void *)(local_c8 + lVar18 * 4),0xff,(ulong)uVar4 * 4 + 4);
  }
  else if ((int)local_c0 != 3) {
    local_c0 = CONCAT44(local_c0._4_4_,3);
  }
  local_b8 = local_b8 & 0xffffffff;
  lVar18 = *(long *)(lVar9 + 0x38d490);
  if (lVar18 == 0) {
    lVar18 = FUN_0333d16c(0,1);
    *(long *)(lVar9 + 0x38d490) = lVar18;
  }
  plVar12 = *(long **)(*(long *)(lVar18 + 8) + 0x58);
  plVar12 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x188,0);
  FUN_0332daac(plVar12,&local_d0,0);
  plVar13 = (long *)param_2[0x51];
  param_2[0x51] = (long)plVar12;
  if (plVar13 != (long *)0x0) {
    if (plVar13[1] != 0) {
      plVar12 = plVar13 + 2;
      do {
        lVar18 = *plVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = lVar18 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar18 + -1 == 0) {
        (**(code **)(*plVar13 + 0x18))();
      }
    }
    plVar12 = (long *)param_2[0x51];
  }
  (**(code **)(*plVar12 + 0x28))(plVar12,param_2[0x50]);
  plVar12 = (long *)param_2[1];
  puVar14 = (undefined8 *)(**(code **)(*plVar12 + 0x10))(plVar12,0x230,0x10);
  if (puVar14 == (undefined8 *)0x0) {
    lVar18 = 0;
    lVar10 = 0;
    plVar12 = (long *)0x0;
  }
  else {
    if (((*pbVar21 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar8 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar18 = nn::os::GetTlsValue(*puVar23);
    if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_02bfe80c;
    *(long **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = plVar12;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
    *(undefined4 *)(puVar14 + 3) = 0;
    *puVar14 = 0;
    puVar14[1] = 0;
    puVar14[2] = 0;
    puVar14[0x20] = 0;
    *(undefined1 *)(puVar14 + 0x21) = 0;
    *(undefined2 *)(puVar14 + 0x24) = 0;
    *(undefined4 *)((long)puVar14 + 0x124) = 0x3f800000;
    puVar14[4] = 0;
    puVar14[5] = 0;
    puVar14[6] = 0;
    puVar14[7] = 0;
    puVar14[8] = 0;
    puVar14[9] = 0;
    puVar14[10] = 0;
    puVar14[0xb] = 0;
    puVar14[0xc] = 0;
    puVar14[0xd] = 0;
    puVar14[0xe] = 0;
    puVar14[0xf] = 0;
    puVar14[0x10] = 0;
    puVar14[0x11] = 0;
    puVar14[0x12] = 0;
    puVar14[0x13] = 0;
    puVar14[0x14] = 0;
    puVar14[0x15] = 0;
    puVar14[0x16] = 0;
    puVar14[0x17] = 0;
    puVar14[0x18] = 0;
    puVar14[0x19] = 0;
    puVar14[0x1a] = 0;
    puVar14[0x1b] = 0;
    puVar14[0x1c] = 0;
    puVar14[0x1d] = 0;
    puVar14[0x1e] = 0;
    puVar14[0x1f] = 0;
    puVar14[0x22] = 0;
    puVar14[0x23] = 0;
    nn::os::InitializeMutex((MutexType *)(puVar14 + 0x25),true,0);
    puVar14[0x2c] = 0;
    puVar14[0x2d] = 0;
    puVar14[0x2a] = 0;
    puVar14[0x2b] = 0;
    FUN_02bef3d0(puVar14 + 0x3a);
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
    lVar10 = 0x230;
    lVar18 = 0x10;
  }
  lVar22 = param_2[0x46];
  param_2[0x46] = (long)puVar14;
  if (lVar22 != 0) {
    FUN_02bcbe58(local_88,0);
    FUN_02bef584(lVar22);
    plVar13 = (long *)param_2[0x47];
    lVar20 = param_2[0x48];
    lVar24 = param_2[0x49];
    uVar15 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar15 & 1) == 0) {
LAB_02bfd278:
      (**(code **)(*plVar13 + 0x18))(plVar13,lVar22,lVar20,lVar24);
    }
    else {
      if (*(char *)(lVar9 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar9 + 0x38d488) = 1;
        *(undefined8 *)(lVar9 + 0x38d478) = 0;
        *(undefined8 *)(lVar9 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar9 + 0x38d480) < 1) goto LAB_02bfd278;
      FUN_02bcc824(plVar13,lVar22,lVar20,lVar24);
    }
    if (*(char *)(lVar9 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar9 + 0x38d488) = 1;
      *(undefined8 *)(lVar9 + 0x38d478) = 0;
      *(undefined8 *)(lVar9 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar8 = *(int *)(lVar9 + 0x38d480) + -1;
    *(int *)(lVar9 + 0x38d480) = iVar8;
    if (iVar8 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar9 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar9 + 0x38d488) = 1;
        *(undefined8 *)(lVar9 + 0x38d478) = 0;
        *(undefined8 *)(lVar9 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar9 + 0x38d484) = 0;
    }
    puVar14 = (undefined8 *)param_2[0x46];
  }
  param_2[0x49] = lVar18;
  local_d8 = (long *)param_2[0x45];
  param_2[0x47] = (long)plVar12;
  param_2[0x48] = lVar10;
  if ((local_d8 != (long *)0x0) && (local_d8[1] != 0)) {
    plVar12 = local_d8 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = *plVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_e0 = (long *)param_2[0x50];
  if ((local_e0 != (long *)0x0) && (local_e0[1] != 0)) {
    plVar12 = local_e0 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = *plVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  iVar8 = (**(code **)(*(long *)param_2[0x51] + 0x50))();
  FUN_02befa20(param_1,puVar14,param_4,&local_d8,param_5,param_6,&local_e0,iVar8 + 1);
  if ((local_e0 != (long *)0x0) && (local_e0[1] != 0)) {
    plVar12 = local_e0 + 2;
    do {
      lVar9 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*local_e0 + 0x18))();
    }
  }
  if ((local_d8 != (long *)0x0) && (local_d8[1] != 0)) {
    plVar12 = local_d8 + 2;
    do {
      lVar9 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*local_d8 + 0x18))();
    }
  }
  local_88[0] = (long *)0x0;
  plVar12 = (long *)FUN_00957dc4(&local_68,param_4,local_88);
  plVar12[0x3c] = plVar12[0x3c] | 8;
  if (plVar12 != (long *)0x0) {
    lVar9 = plVar12[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_02bfe7f4;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pcVar19 = (code *)plVar12[0x75];
  if (pcVar19 != (code *)0x0) {
    plVar12[0x76] = 0;
    plVar12[0x77] = 0;
    plVar12[0x74] = 0;
    plVar12[0x75] = 0;
    (*pcVar19)(plVar12 + 0x78);
  }
  plVar12[0x78] = (long)param_2;
  plVar12[0x79] = (long)&LAB_02bfe864;
  plVar12[0x7a] = 0;
  plVar12[0x74] = (long)&LAB_02c00b24;
  plVar12[0x75] = (long)FUN_02c00b40;
  plVar12[0x76] = (long)&LAB_02c00b44;
  plVar12[0x77] = (long)&LAB_02c00b58;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (*(ulong *)(lVar9 + 0x80) < 0x10) {
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = param_4;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    puVar14 = (undefined8 *)(**(code **)(*param_4 + 0x10))(param_4,0x3a8,8);
    if (puVar14 == (undefined8 *)0x0) {
      (**(code **)(*param_4 + 0xb8))(param_4);
    }
    FUN_02a6f65c(puVar14,DAT_043eef30);
    *(undefined4 *)(puVar14 + 0x73) = 1;
    *(undefined4 *)(puVar14 + 0x70) = 1;
    puVar14[0x72] = 0;
    puVar14[2] = puVar14;
    puVar14[3] = 0x3a8;
    puVar14[0x71] = 0;
    *(undefined1 *)((long)puVar14 + 0x39c) = 0;
    puVar14[0x74] = param_2;
    puVar14[4] = 8;
    puVar14[9] = &PTR_LAB_04288008;
    puVar14[10] = &PTR_LAB_04288050;
    *puVar14 = &DAT_04287f80;
    puVar14[1] = param_4;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    puVar14[0x3c] = puVar14[0x3c] | 8;
    if (puVar14 != (undefined8 *)0x0) {
      lVar9 = puVar14[0xb];
      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_02bfe7f4;
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar11;
      }
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar13 = (long *)param_2[0x4a];
    param_2[0x4a] = 0;
    if (plVar13 != (long *)0x0) {
      lVar9 = plVar13[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))();
      }
    }
    param_2[0x4a] = (long)puVar14;
    local_88[0] = (long *)0x0;
    plVar13 = (long *)FUN_00957dc4(&local_68,param_4,local_88);
    plVar13[0x3c] = plVar13[0x3c] | 8;
    if (plVar13 != (long *)0x0) {
      lVar9 = plVar13[0xb];
      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_02bfe7f4;
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar11;
      }
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pcVar19 = (code *)plVar13[0x75];
    if (pcVar19 != (code *)0x0) {
      plVar13[0x76] = 0;
      plVar13[0x77] = 0;
      plVar13[0x74] = 0;
      plVar13[0x75] = 0;
      (*pcVar19)(plVar13 + 0x78);
    }
    plVar13[0x78] = (long)param_2;
    plVar13[0x79] = (long)&LAB_02bfecb0;
    plVar13[0x7a] = 0;
    plVar13[0x74] = (long)&LAB_02c00b24;
    plVar13[0x75] = (long)FUN_02c00b40;
    plVar13[0x76] = (long)&LAB_02c00b44;
    plVar13[0x77] = (long)&LAB_02c00b58;
    puVar5 = PTR_DAT_04379520;
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar8 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    puVar6 = PTR_DAT_04379528;
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (*(ulong *)(lVar9 + 0x80) < 0x10) {
      *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = param_4;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      puVar14 = (undefined8 *)(**(code **)(*param_4 + 0x10))(param_4,0x388,8);
      if (puVar14 == (undefined8 *)0x0) {
        (**(code **)(*param_4 + 0xb8))(param_4);
      }
      lVar18 = plVar12[0xb];
      if (*(undefined8 **)(lVar18 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar18 + 0x10) == 0) {
          uVar11 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
          *(undefined8 *)(lVar18 + 0x10) = uVar11;
        }
        piVar1 = (int *)(lVar18 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        lVar18 = plVar13[0xb];
        if (*(undefined8 **)(lVar18 + 0x18) != (undefined8 *)0x0) {
          if (*(long *)(lVar18 + 0x10) == 0) {
            uVar11 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
            *(undefined8 *)(lVar18 + 0x10) = uVar11;
          }
          piVar1 = (int *)(lVar18 + 0xc);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          FUN_02a6f65c(puVar14,DAT_043eef30);
          *puVar14 = &PTR_FUN_04288078;
          puVar14[9] = &PTR_LAB_042880f8;
          puVar14[10] = &PTR_LAB_04288140;
          lVar18 = plVar12[0xb];
          local_88[0] = plVar12;
          if (*(undefined8 **)(lVar18 + 0x18) != (undefined8 *)0x0) {
            if (*(long *)(lVar18 + 0x10) == 0) {
              uVar11 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
              *(undefined8 *)(lVar18 + 0x10) = uVar11;
            }
            piVar1 = (int *)(lVar18 + 0xc);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = *piVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            FUN_02a6ff4c(puVar14,local_88);
            if (local_88[0] != (long *)0x0) {
              lVar18 = local_88[0][0xb];
              piVar1 = (int *)(lVar18 + 0xc);
              do {
                iVar8 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar8 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar8 + -1 == 0) {
                *(undefined8 *)(lVar18 + 0x18) = 0;
                (**(code **)(*local_88[0] + 0x20))();
              }
            }
            lVar18 = plVar13[0xb];
            local_68 = plVar13;
            if (*(undefined8 **)(lVar18 + 0x18) != (undefined8 *)0x0) {
              if (*(long *)(lVar18 + 0x10) == 0) {
                uVar11 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
                *(undefined8 *)(lVar18 + 0x10) = uVar11;
              }
              piVar1 = (int *)(lVar18 + 0xc);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = *piVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              FUN_02a700c0(puVar14,&local_68);
              if (local_68 != (long *)0x0) {
                lVar18 = local_68[0xb];
                piVar1 = (int *)(lVar18 + 0xc);
                do {
                  iVar8 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar8 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar8 + -1 == 0) {
                  *(undefined8 *)(lVar18 + 0x18) = 0;
                  (**(code **)(*local_68 + 0x20))();
                }
              }
              lVar18 = plVar13[0xb];
              piVar1 = (int *)(lVar18 + 0xc);
              do {
                iVar8 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar8 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar8 + -1 == 0) {
                *(undefined8 *)(lVar18 + 0x18) = 0;
                (**(code **)(*plVar13 + 0x20))(plVar13);
              }
              lVar18 = plVar12[0xb];
              piVar1 = (int *)(lVar18 + 0xc);
              do {
                iVar8 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar8 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar8 + -1 == 0) {
                *(undefined8 *)(lVar18 + 0x18) = 0;
                (**(code **)(*plVar12 + 0x20))(plVar12);
              }
              puVar14[1] = param_4;
              puVar14[2] = puVar14;
              puVar14[3] = 0x388;
              puVar14[4] = 8;
              *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
              lVar9 = puVar14[0xb];
              puVar14[0x3c] = puVar14[0x3c] | 8;
              if (*(undefined8 **)(lVar9 + 0x18) != (undefined8 *)0x0) {
                if (*(long *)(lVar9 + 0x10) == 0) {
                  uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
                  *(undefined8 *)(lVar9 + 0x10) = uVar11;
                }
                piVar1 = (int *)(lVar9 + 0xc);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = *piVar1 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                plVar16 = (long *)param_2[0x4f];
                param_2[0x4f] = 0;
                if (plVar16 != (long *)0x0) {
                  lVar9 = plVar16[0xb];
                  piVar1 = (int *)(lVar9 + 0xc);
                  do {
                    iVar8 = *piVar1;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                      *piVar1 = iVar8 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (iVar8 + -1 == 0) {
                    *(undefined8 *)(lVar9 + 0x18) = 0;
                    (**(code **)(*plVar16 + 0x20))();
                  }
                }
                param_2[0x4f] = (long)puVar14;
                FUN_02899b18(puVar14);
                local_88[0] = (long *)0xc;
                if (((*puVar5 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528,
                   iVar8 != 0)) {
                  FUN_008a62a4(PTR_DAT_04379528);
                  FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379520);
                }
                lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
                if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_02bfe80c;
                *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = param_4;
                *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
                plVar16 = (long *)(**(code **)(*param_4 + 0x10))(param_4,0x490,0x10);
                if (plVar16 == (long *)0x0) {
                  (**(code **)(*param_4 + 0xb8))(param_4);
                }
                FUN_02c01278(plVar16,0x30);
                plVar16[1] = (long)param_4;
                plVar16[2] = (long)plVar16;
                plVar16[3] = 0x490;
                plVar16[4] = 0x10;
                *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
                plVar16[0x3c] = plVar16[0x3c] | 8;
                if (plVar16 != (long *)0x0) {
                  lVar9 = plVar16[0xb];
                  if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_02bfe7f4;
                  if (*(long *)(lVar9 + 0x10) == 0) {
                    uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
                    *(undefined8 *)(lVar9 + 0x10) = uVar11;
                  }
                  piVar1 = (int *)(lVar9 + 0xc);
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                      *piVar1 = *piVar1 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                }
                plVar17 = plVar16;
                if ((long *)plVar16[0x3b] != (long *)0x0) {
                  plVar17 = (long *)plVar16[0x3b];
                }
                *(undefined4 *)(plVar16 + 0x70) = 0;
                *(undefined4 *)(plVar17 + 0x70) = 0;
                pcVar19 = (code *)plVar16[0x75];
                if (pcVar19 != (code *)0x0) {
                  plVar16[0x76] = 0;
                  plVar16[0x77] = 0;
                  plVar16[0x74] = 0;
                  plVar16[0x75] = 0;
                  (*pcVar19)(plVar16 + 0x78);
                }
                plVar16[0x74] = (long)&LAB_02c03604;
                lVar9 = plVar16[0xb];
                plVar16[0x75] = (long)&LAB_02c03618;
                plVar16[0x76] = (long)&LAB_02c0361c;
                plVar16[0x77] = (long)&LAB_02c03620;
                if (*(undefined8 **)(lVar9 + 0x18) != (undefined8 *)0x0) {
                  if (*(long *)(lVar9 + 0x10) == 0) {
                    uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
                    *(undefined8 *)(lVar9 + 0x10) = uVar11;
                  }
                  piVar1 = (int *)(lVar9 + 0xc);
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                      *piVar1 = *piVar1 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  plVar17 = (long *)param_2[0x4b];
                  param_2[0x4b] = (long)plVar16;
                  if (plVar17 != (long *)0x0) {
                    lVar9 = plVar17[0xb];
                    piVar1 = (int *)(lVar9 + 0xc);
                    do {
                      iVar8 = *piVar1;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar3) {
                        *piVar1 = iVar8 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (iVar8 + -1 == 0) {
                      *(undefined8 *)(lVar9 + 0x18) = 0;
                      (**(code **)(*plVar17 + 0x20))();
                    }
                  }
                  lVar9 = nn::os::GetCurrentThread();
                  plVar17 = plVar16 + 0x41;
                  do {
                    if (*plVar17 != 0) {
                      ClearExclusiveLocal();
                      do {
                        nn::os::WaitLightEvent((LightEventType *)((long)plVar16 + 0x1fc));
                        while (*plVar17 == 0) {
                          cVar2 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                          if (bVar3) {
                            *plVar17 = lVar9;
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                          if (cVar2 == '\0') goto LAB_02bfdb10;
                        }
                        ClearExclusiveLocal();
                      } while( true );
                    }
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                    if (bVar3) {
                      *plVar17 = lVar9;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
LAB_02bfdb10:
                  FUN_02a70468(plVar16,plVar12,0);
                  plVar16[0x41] = 0;
                  nn::os::SignalLightEvent((LightEventType *)((long)plVar16 + 0x1fc));
                  if (plVar16 != (long *)0x0) {
                    lVar9 = plVar16[0xb];
                    piVar1 = (int *)(lVar9 + 0xc);
                    do {
                      iVar8 = *piVar1;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar3) {
                        *piVar1 = iVar8 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (iVar8 + -1 == 0) {
                      *(undefined8 *)(lVar9 + 0x18) = 0;
                      (**(code **)(*plVar16 + 0x20))(plVar16);
                    }
                  }
                  FUN_02bfecb4(&local_68,param_4,local_88);
                  plVar17 = local_68;
                  *(undefined4 *)(local_68 + 0x70) = 0;
                  plVar16 = local_68;
                  if ((long *)local_68[0x3b] != (long *)0x0) {
                    plVar16 = (long *)local_68[0x3b];
                  }
                  *(undefined4 *)(plVar16 + 0x70) = 0;
                  pcVar19 = (code *)local_68[0x75];
                  if (pcVar19 != (code *)0x0) {
                    local_68[0x76] = 0;
                    local_68[0x77] = 0;
                    local_68[0x74] = 0;
                    local_68[0x75] = 0;
                    (*pcVar19)(local_68 + 0x78);
                  }
                  plVar17[0x74] = (long)&LAB_02c053b8;
                  plVar17[0x75] = (long)FUN_02c053cc;
                  plVar17[0x76] = (long)&LAB_02c053d0;
                  plVar17[0x77] = (long)&LAB_02c053d4;
                  if (plVar17 != (long *)0x0) {
                    lVar9 = plVar17[0xb];
                    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_02bfe7f4;
                    if (*(long *)(lVar9 + 0x10) == 0) {
                      uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
                      *(undefined8 *)(lVar9 + 0x10) = uVar11;
                    }
                    piVar1 = (int *)(lVar9 + 0xc);
                    do {
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar3) {
                        *piVar1 = *piVar1 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                  }
                  plVar16 = (long *)param_2[0x4c];
                  param_2[0x4c] = (long)plVar17;
                  if (plVar16 != (long *)0x0) {
                    lVar9 = plVar16[0xb];
                    piVar1 = (int *)(lVar9 + 0xc);
                    do {
                      iVar8 = *piVar1;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar3) {
                        *piVar1 = iVar8 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (iVar8 + -1 == 0) {
                      *(undefined8 *)(lVar9 + 0x18) = 0;
                      (**(code **)(*plVar16 + 0x20))();
                    }
                  }
                  lVar9 = nn::os::GetCurrentThread();
                  plVar16 = plVar17 + 0x41;
                  do {
                    if (*plVar16 != 0) {
                      ClearExclusiveLocal();
                      do {
                        nn::os::WaitLightEvent((LightEventType *)((long)plVar17 + 0x1fc));
                        while (*plVar16 == 0) {
                          cVar2 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                          if (bVar3) {
                            *plVar16 = lVar9;
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                          if (cVar2 == '\0') goto LAB_02bfdc70;
                        }
                        ClearExclusiveLocal();
                      } while( true );
                    }
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                    if (bVar3) {
                      *plVar16 = lVar9;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
LAB_02bfdc70:
                  FUN_02a70468(plVar17,param_2[0x4b],0);
                  plVar17[0x41] = 0;
                  nn::os::SignalLightEvent((LightEventType *)((long)plVar17 + 0x1fc));
                  if (local_68 != (long *)0x0) {
                    lVar9 = local_68[0xb];
                    piVar1 = (int *)(lVar9 + 0xc);
                    do {
                      iVar8 = *piVar1;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar3) {
                        *piVar1 = iVar8 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (iVar8 + -1 == 0) {
                      *(undefined8 *)(lVar9 + 0x18) = 0;
                      (**(code **)(*local_68 + 0x20))();
                    }
                  }
                  lVar18 = param_2[0x4a];
                  lVar9 = nn::os::GetCurrentThread();
                  plVar16 = (long *)(lVar18 + 0x208);
                  do {
                    if (*plVar16 != 0) {
                      ClearExclusiveLocal();
                      do {
                        nn::os::WaitLightEvent((LightEventType *)(lVar18 + 0x1fc));
                        while (*plVar16 == 0) {
                          cVar2 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                          if (bVar3) {
                            *plVar16 = lVar9;
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                          if (cVar2 == '\0') goto LAB_02bfdd00;
                        }
                        ClearExclusiveLocal();
                      } while( true );
                    }
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                    if (bVar3) {
                      *plVar16 = lVar9;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
LAB_02bfdd00:
                  FUN_02a70468(lVar18,param_2[0x4c],0);
                  *(undefined8 *)(lVar18 + 0x208) = 0;
                  nn::os::SignalLightEvent((LightEventType *)(lVar18 + 0x1fc));
                  if (((*puVar5 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528,
                     iVar8 != 0)) {
                    FUN_008a62a4(PTR_DAT_04379528);
                    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379520);
                  }
                  lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
                  if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_02bfe80c;
                  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = param_4;
                  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
                  plVar16 = (long *)(**(code **)(*param_4 + 0x10))(param_4,0x490,0x10);
                  if (plVar16 == (long *)0x0) {
                    (**(code **)(*param_4 + 0xb8))(param_4);
                  }
                  FUN_02c01278(plVar16,local_88[0]);
                  plVar16[1] = (long)param_4;
                  plVar16[2] = (long)plVar16;
                  plVar16[3] = 0x490;
                  plVar16[4] = 0x10;
                  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
                  plVar16[0x3c] = plVar16[0x3c] | 8;
                  if (plVar16 != (long *)0x0) {
                    lVar9 = plVar16[0xb];
                    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_02bfe7f4;
                    if (*(long *)(lVar9 + 0x10) == 0) {
                      uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
                      *(undefined8 *)(lVar9 + 0x10) = uVar11;
                    }
                    piVar1 = (int *)(lVar9 + 0xc);
                    do {
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar3) {
                        *piVar1 = *piVar1 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                  }
                  plVar17 = plVar16;
                  if ((long *)plVar16[0x3b] != (long *)0x0) {
                    plVar17 = (long *)plVar16[0x3b];
                  }
                  *(undefined4 *)(plVar16 + 0x70) = 0;
                  *(undefined4 *)(plVar17 + 0x70) = 0;
                  pcVar19 = (code *)plVar16[0x75];
                  if (pcVar19 != (code *)0x0) {
                    plVar16[0x76] = 0;
                    plVar16[0x77] = 0;
                    plVar16[0x74] = 0;
                    plVar16[0x75] = 0;
                    (*pcVar19)(plVar16 + 0x78);
                  }
                  plVar16[0x74] = (long)&LAB_02c053d8;
                  lVar9 = plVar16[0xb];
                  plVar16[0x75] = (long)&LAB_02c053ec;
                  plVar16[0x76] = (long)&LAB_02c053f0;
                  plVar16[0x77] = (long)&LAB_02c053f4;
                  if (*(undefined8 **)(lVar9 + 0x18) != (undefined8 *)0x0) {
                    if (*(long *)(lVar9 + 0x10) == 0) {
                      uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
                      *(undefined8 *)(lVar9 + 0x10) = uVar11;
                    }
                    piVar1 = (int *)(lVar9 + 0xc);
                    do {
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar3) {
                        *piVar1 = *piVar1 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    plVar17 = (long *)param_2[0x4d];
                    param_2[0x4d] = (long)plVar16;
                    if (plVar17 != (long *)0x0) {
                      lVar9 = plVar17[0xb];
                      piVar1 = (int *)(lVar9 + 0xc);
                      do {
                        iVar8 = *piVar1;
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar3) {
                          *piVar1 = iVar8 + -1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                      if (iVar8 + -1 == 0) {
                        *(undefined8 *)(lVar9 + 0x18) = 0;
                        (**(code **)(*plVar17 + 0x20))();
                      }
                    }
                    lVar9 = nn::os::GetCurrentThread();
                    plVar17 = plVar16 + 0x41;
                    do {
                      if (*plVar17 != 0) {
                        ClearExclusiveLocal();
                        do {
                          nn::os::WaitLightEvent((LightEventType *)((long)plVar16 + 0x1fc));
                          while (*plVar17 == 0) {
                            cVar2 = '\x01';
                            bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                            if (bVar3) {
                              *plVar17 = lVar9;
                              cVar2 = ExclusiveMonitorsStatus();
                            }
                            if (cVar2 == '\0') goto LAB_02bfdef8;
                          }
                          ClearExclusiveLocal();
                        } while( true );
                      }
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                      if (bVar3) {
                        *plVar17 = lVar9;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
LAB_02bfdef8:
                    FUN_02a70468(plVar16,param_2[0x4a],0);
                    plVar16[0x41] = 0;
                    nn::os::SignalLightEvent((LightEventType *)((long)plVar16 + 0x1fc));
                    if (plVar16 != (long *)0x0) {
                      lVar9 = plVar16[0xb];
                      piVar1 = (int *)(lVar9 + 0xc);
                      do {
                        iVar8 = *piVar1;
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar3) {
                          *piVar1 = iVar8 + -1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                      if (iVar8 + -1 == 0) {
                        *(undefined8 *)(lVar9 + 0x18) = 0;
                        (**(code **)(*plVar16 + 0x20))(plVar16);
                      }
                    }
                    FUN_02bfecb4(&local_68,param_4,local_88);
                    plVar17 = local_68;
                    *(undefined4 *)(local_68 + 0x70) = 0;
                    plVar16 = local_68;
                    if ((long *)local_68[0x3b] != (long *)0x0) {
                      plVar16 = (long *)local_68[0x3b];
                    }
                    *(undefined4 *)(plVar16 + 0x70) = 0;
                    pcVar19 = (code *)local_68[0x75];
                    if (pcVar19 != (code *)0x0) {
                      local_68[0x76] = 0;
                      local_68[0x77] = 0;
                      local_68[0x74] = 0;
                      local_68[0x75] = 0;
                      (*pcVar19)(local_68 + 0x78);
                    }
                    plVar17[0x74] = (long)&LAB_02c053f8;
                    plVar17[0x75] = (long)&LAB_02c0540c;
                    plVar17[0x76] = (long)&LAB_02c05410;
                    plVar17[0x77] = (long)&LAB_02c05414;
                    if (plVar17 != (long *)0x0) {
                      lVar9 = plVar17[0xb];
                      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_02bfe7f4;
                      if (*(long *)(lVar9 + 0x10) == 0) {
                        uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
                        *(undefined8 *)(lVar9 + 0x10) = uVar11;
                      }
                      piVar1 = (int *)(lVar9 + 0xc);
                      do {
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar3) {
                          *piVar1 = *piVar1 + 1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                    }
                    plVar16 = (long *)param_2[0x4e];
                    param_2[0x4e] = (long)plVar17;
                    if (plVar16 != (long *)0x0) {
                      lVar9 = plVar16[0xb];
                      piVar1 = (int *)(lVar9 + 0xc);
                      do {
                        iVar8 = *piVar1;
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar3) {
                          *piVar1 = iVar8 + -1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                      if (iVar8 + -1 == 0) {
                        *(undefined8 *)(lVar9 + 0x18) = 0;
                        (**(code **)(*plVar16 + 0x20))();
                      }
                    }
                    lVar9 = nn::os::GetCurrentThread();
                    plVar16 = plVar17 + 0x41;
                    do {
                      if (*plVar16 != 0) {
                        ClearExclusiveLocal();
                        do {
                          nn::os::WaitLightEvent((LightEventType *)((long)plVar17 + 0x1fc));
                          while (*plVar16 == 0) {
                            cVar2 = '\x01';
                            bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                            if (bVar3) {
                              *plVar16 = lVar9;
                              cVar2 = ExclusiveMonitorsStatus();
                            }
                            if (cVar2 == '\0') goto LAB_02bfe058;
                          }
                          ClearExclusiveLocal();
                        } while( true );
                      }
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                      if (bVar3) {
                        *plVar16 = lVar9;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
LAB_02bfe058:
                    FUN_02a70468(plVar17,param_2[0x4d],0);
                    FUN_02a70468(plVar17,0,plVar13);
                    plVar17[0x41] = 0;
                    nn::os::SignalLightEvent((LightEventType *)((long)plVar17 + 0x1fc));
                    if (local_68 != (long *)0x0) {
                      lVar9 = local_68[0xb];
                      piVar1 = (int *)(lVar9 + 0xc);
                      do {
                        iVar8 = *piVar1;
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar3) {
                          *piVar1 = iVar8 + -1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                      if (iVar8 + -1 == 0) {
                        *(undefined8 *)(lVar9 + 0x18) = 0;
                        (**(code **)(*local_68 + 0x20))();
                      }
                    }
                    lVar10 = param_2[10];
                    lVar9 = (ulong)*(byte *)(lVar10 + 0x20d) * 8;
                    lVar18 = *(long *)(lVar10 + lVar9 + 0x18);
                    piVar1 = (int *)(lVar18 + 0x304);
                    iVar8 = *piVar1;
                    do {
                      if (iVar8 != 1) {
                        pcVar19 = *(code **)(lVar18 + 0x318);
                        if (pcVar19 != (code *)0x0) {
                          *(undefined8 *)(lVar18 + 800) = 0;
                          *(undefined8 *)(lVar18 + 0x328) = 0;
                          *(undefined8 *)(lVar18 + 0x310) = 0;
                          *(undefined8 *)(lVar18 + 0x318) = 0;
                          (*pcVar19)(lVar18 + 0x330);
                        }
                        *(long **)(lVar18 + 0x330) = param_2;
                        *(undefined1 **)(lVar18 + 0x310) = &LAB_02c05418;
                        *(code **)(lVar18 + 0x318) = FUN_02c058d4;
                        *(undefined1 **)(lVar18 + 800) = &LAB_02c059b4;
                        *(undefined1 **)(lVar18 + 0x328) = &LAB_02c059c0;
                        *piVar1 = 1;
                      }
                      lVar18 = *(long *)(lVar10 + 0x20 + lVar9);
                      lVar9 = lVar9 + 8;
                      piVar1 = (int *)(lVar18 + 0x304);
                      iVar8 = *piVar1;
                    } while (lVar9 != 0x10);
                    if (iVar8 != 1) {
                      pcVar19 = *(code **)(lVar18 + 0x318);
                      if (pcVar19 != (code *)0x0) {
                        *(undefined8 *)(lVar18 + 800) = 0;
                        *(undefined8 *)(lVar18 + 0x328) = 0;
                        *(undefined8 *)(lVar18 + 0x310) = 0;
                        *(undefined8 *)(lVar18 + 0x318) = 0;
                        (*pcVar19)(lVar18 + 0x330);
                      }
                      *(long **)(lVar18 + 0x330) = param_2;
                      *(undefined1 **)(lVar18 + 0x310) = &LAB_02c05418;
                      *(code **)(lVar18 + 0x318) = FUN_02c058d4;
                      *(undefined1 **)(lVar18 + 800) = &LAB_02c059b4;
                      *(undefined1 **)(lVar18 + 0x328) = &LAB_02c059c0;
                      *(undefined4 *)(lVar18 + 0x304) = 1;
                    }
                    if (plVar13 != (long *)0x0) {
                      lVar9 = plVar13[0xb];
                      piVar1 = (int *)(lVar9 + 0xc);
                      do {
                        iVar8 = *piVar1;
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar3) {
                          *piVar1 = iVar8 + -1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                      if (iVar8 + -1 == 0) {
                        *(undefined8 *)(lVar9 + 0x18) = 0;
                        (**(code **)(*plVar13 + 0x20))(plVar13);
                      }
                    }
                    if (plVar12 != (long *)0x0) {
                      lVar9 = plVar12[0xb];
                      piVar1 = (int *)(lVar9 + 0xc);
                      do {
                        iVar8 = *piVar1;
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar3) {
                          *piVar1 = iVar8 + -1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                      if (iVar8 + -1 == 0) {
                        *(undefined8 *)(lVar9 + 0x18) = 0;
                        (**(code **)(*plVar12 + 0x20))(plVar12);
                      }
                    }
                    FUN_0332da5c(&local_d0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LAB_02bfe7f4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
LAB_02bfe80c:
                    /* WARNING: Subroutine does not return */
  abort();
}


