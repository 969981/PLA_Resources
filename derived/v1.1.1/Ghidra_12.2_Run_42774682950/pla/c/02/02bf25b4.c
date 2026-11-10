/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bf25b4; name: FUN_02bf25b4
 */


void FUN_02bf25b4(float param_1,undefined8 *param_2)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  uint uVar12;
  int iVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  byte *pbVar21;
  float fVar22;
  undefined **local_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined1 *local_560;
  undefined8 local_558;
  undefined1 auStack_550 [768];
  undefined1 *local_250;
  undefined8 local_248;
  undefined1 auStack_240 [128];
  long *local_1c0;
  undefined8 local_1b8;
  long alStack_1b0 [32];
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x25));
  puVar11 = PTR_DAT_0437a658;
  puVar10 = PTR_DAT_0437a650;
  fVar22 = 0.033333335;
  if (*(char *)((long)param_2 + 0x121) != '\0') {
    fVar22 = param_1;
  }
  lVar15 = ((long *)param_2[9])[1] - *(long *)param_2[9];
  pbVar21 = PTR_DAT_0437a648;
  if (lVar15 != 0) {
    plVar17 = (long *)*param_2;
    uVar20 = lVar15 >> 3;
    local_80 = 0;
    local_b0 = (undefined8 *)0x0;
    local_a8 = (undefined8 *)0x0;
    local_90 = 0x555555555555555;
    uStack_88 = 0;
    local_a0 = (undefined8 *)0x0;
    local_98 = plVar17;
    if (0x555555555555555 < uVar20) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar14 = (undefined8 *)(**(code **)(*plVar17 + 0x10))(plVar17,uVar20 * 0x30,8);
    if (puVar14 == (undefined8 *)0x0) {
      (**(code **)(*plVar17 + 0xb8))(plVar17);
    }
    puVar9 = PTR_DAT_04379528;
    puVar8 = PTR_DAT_04379520;
    local_a0 = puVar14 + uVar20 * 6;
    bVar2 = *PTR_DAT_04379520;
    local_b0 = puVar14;
    while( true ) {
      uVar20 = uVar20 - 1;
      local_a8 = puVar14;
      if (((bVar2 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
        FUN_008a62a4(puVar9);
        FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar8);
      }
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)puVar9);
      if (lVar15 == 0) {
        puVar14[4] = 0;
        puVar14[5] = 0;
        puVar14[2] = 0;
        puVar14[3] = 0;
        *puVar14 = 0;
        puVar14[1] = 0;
      }
      else {
        if (0xf < *(ulong *)(lVar15 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar17;
        *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
        puVar14[4] = 0;
        puVar14[5] = 0;
        puVar14[2] = 0;
        puVar14[3] = 0;
        *puVar14 = 0;
        puVar14[1] = 0;
        *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
      }
      pbVar21 = PTR_DAT_0437a648;
      local_a8 = local_a8 + 6;
      if (uVar20 == 0) break;
      bVar2 = *puVar8;
      plVar17 = local_98;
      puVar14 = local_a8;
    }
    plVar17 = *(long **)param_2[9];
    plVar18 = (long *)((long *)param_2[9])[1];
    if (plVar17 == plVar18) {
      iVar13 = 0;
    }
    else {
      iVar13 = 0;
      do {
        lVar15 = *plVar17;
        if ((((*(int *)(lVar15 + 0x7c) == 2) && (*(char *)(lVar15 + 0x78) != '\0')) &&
            (*(long *)(lVar15 + 0x3d0) != 0)) &&
           (1.1920929e-07 < *(float *)(*(long *)(lVar15 + 0x3d0) + 0x88))) {
          puVar14 = local_b0 + (long)iVar13 * 6;
          uVar3 = *(undefined8 *)(lVar15 + 0x3c8);
          iVar13 = iVar13 + 1;
          *puVar14 = *(undefined8 *)(lVar15 + 0x3c0);
          puVar14[1] = uVar3;
          uVar3 = *(undefined8 *)(lVar15 + 0x3d0);
          uVar4 = *(undefined8 *)(lVar15 + 0x3d8);
          uVar5 = *(undefined8 *)(lVar15 + 1000);
          puVar14[4] = *(undefined8 *)(lVar15 + 0x3e0);
          puVar14[5] = uVar5;
          puVar14[2] = uVar3;
          puVar14[3] = uVar4;
        }
        plVar17 = plVar17 + 1;
      } while (plVar18 != plVar17);
    }
    local_570 = 0xffffffff;
    uStack_568 = 1;
    local_560 = auStack_550;
    local_578 = &PTR_LAB_04350ee8;
    local_558 = -0x7fffffe000000000;
    local_250 = auStack_240;
    local_1c0 = alStack_1b0;
    local_248 = -0x7fffffe000000000;
    local_1b8 = -0x7fffffe000000000;
    FUN_030f3b44(local_b0,iVar13,*(undefined4 *)(param_2 + 3),&local_578,4);
    if (((*pbVar21 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar13 != 0)) {
      FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a648);
    }
    lVar19 = *(long *)puVar10;
    *(long *)puVar11 = lVar19;
    lVar15 = nn::os::GetCurrentThread();
    plVar17 = (long *)(lVar19 + 0x208);
    do {
      if (*plVar17 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x1fc));
          while (*plVar17 == 0) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar7) {
              *plVar17 = lVar15;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_02bf28c4;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *plVar17 = lVar15;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_02bf28c4:
    (**(code **)(*(long *)(param_2[2] + 0x18) + 0xb0))((long *)(param_2[2] + 0x18),&local_578,0);
    *(undefined8 *)(lVar19 + 0x208) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0x1fc));
    plVar17 = local_1c0;
    puVar8 = PTR_PTR_0434a080;
    local_578 = &PTR_LAB_04350ee8;
    if ((int)local_1b8 != 0) {
      plVar18 = local_1c0 + (int)local_1b8;
      do {
        while( true ) {
          plVar18 = plVar18 + -1;
          plVar16 = (long *)*plVar18;
          if ((plVar16 != (long *)0x0) && (plVar16[1] != 0)) break;
LAB_02bf2930:
          if (plVar18 == plVar17) goto LAB_02bf2950;
        }
        plVar1 = plVar16 + 2;
        do {
          lVar15 = *plVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar15 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar15 + -1 != 0) goto LAB_02bf2930;
        (**(code **)(*plVar16 + 0x18))();
      } while (plVar18 != plVar17);
    }
LAB_02bf2950:
    lVar15 = local_1b8;
    uVar20 = (ulong)local_1b8._4_4_;
    local_1b8 = (ulong)local_1b8._4_4_ << 0x20;
    if ((-1 < lVar15) && (local_1c0 != (long *)0x0)) {
      (**(code **)(*(long *)puVar8 + 0x18))(puVar8,local_1c0,(uVar20 & 0x3fffffff) << 3);
    }
    lVar15 = local_248;
    uVar12 = local_248._4_4_;
    local_1c0 = (long *)0x0;
    local_1b8 = CONCAT44(0x80000000,(int)local_1b8);
    local_248 = (ulong)local_248._4_4_ << 0x20;
    if ((-1 < lVar15) && (local_250 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)puVar8 + 0x18))(puVar8,local_250,uVar12 << 2);
    }
    lVar15 = local_558;
    uVar20 = (ulong)local_558._4_4_;
    local_250 = (undefined1 *)0x0;
    local_248 = CONCAT44(0x80000000,(undefined4)local_248);
    local_558 = (ulong)local_558._4_4_ << 0x20;
    puVar14 = local_b0;
    plVar17 = local_98;
    if ((-1 < lVar15) && (local_560 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)puVar8 + 0x18))(puVar8,local_560,(uVar20 & 0x3fffffff) * 0x18);
      puVar14 = local_b0;
      plVar17 = local_98;
    }
    local_b0 = puVar14;
    local_98 = plVar17;
    if (puVar14 != (undefined8 *)0x0) {
      lVar15 = (long)local_a0 - (long)puVar14;
      local_a8 = puVar14;
      uVar20 = (**(code **)(*plVar17 + 0xc0))(plVar17);
      if ((uVar20 & 1) != 0) {
        lVar19 = tpidr_el0;
        if (*(char *)(lVar19 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar19 + 0x38d488) = 1;
          *(undefined8 *)(lVar19 + 0x38d478) = 0;
          *(undefined8 *)(lVar19 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar19 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar19 + 0x38d480)) {
          FUN_02bcc824(plVar17,puVar14,lVar15,8);
          goto LAB_02bf2a10;
        }
      }
      (**(code **)(*plVar17 + 0x18))(plVar17,puVar14,lVar15,8);
    }
  }
LAB_02bf2a10:
  fVar22 = fVar22 * *(float *)((long)param_2 + 0x124);
  if (fVar22 <= 1.1920929e-07) {
    (**(code **)(*(long *)param_2[1] + 0x460))();
  }
  else {
    local_570 = CONCAT44(local_570._4_4_,*(undefined4 *)(param_2 + 3));
    local_578 = (undefined **)(ulong)(uint)fVar22;
    if (((*pbVar21 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar13 != 0)) {
      FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a648);
    }
    lVar19 = *(long *)puVar10;
    *(long *)puVar11 = lVar19;
    lVar15 = nn::os::GetCurrentThread();
    plVar17 = (long *)(lVar19 + 0x208);
    do {
      if (*plVar17 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x1fc));
          while (*plVar17 == 0) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar7) {
              *plVar17 = lVar15;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_02bf2aa0;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *plVar17 = lVar15;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_02bf2aa0:
    lVar15 = 0;
    if (param_2[2] != 0) {
      lVar15 = param_2[2] + 0x18;
    }
    FUN_03039630(param_2[1],&local_578,lVar15);
    lVar15 = 0;
    if (param_2[2] != 0) {
      lVar15 = param_2[2] + 0x18;
    }
    FUN_0303b120(param_2[1],lVar15);
    *(undefined8 *)(lVar19 + 0x208) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0x1fc));
  }
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x25));
  return;
}


