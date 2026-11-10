/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b8b6bc; name: FUN_02b8b6bc
 */


void FUN_02b8b6bc(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  *param_1 = &PTR_FUN_04285de8;
  param_1[1] = param_2;
  FUN_0087eee0(param_1 + 0x602);
  param_1[0xc0a] = 0x7ffffffffffffff;
  param_1[0xc08] = 0;
  param_1[0xc07] = 0;
  param_1[0xc06] = 0;
  param_1[0xc09] = param_2;
  param_1[0xc0b] = 0;
  *(undefined4 *)(param_1 + 0xc0c) = 0;
  param_1[0xc0d] = &PTR___cxa_pure_virtual_04285e30;
  if (((DAT_043effb0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043effb0), iVar8 != 0)) {
    nn::os::InitializeLightEvent(&DAT_043eff9c,0,1);
    DAT_043effa8 = 0;
    FUN_00100250(PTR_LAB_04381908,&DAT_043eff98,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043effb0);
  }
  lVar9 = nn::os::GetCurrentThread();
  do {
    if (DAT_043effa8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)&DAT_043eff9c);
        while (DAT_043effa8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(0x43effa8,0x10);
          if (bVar4) {
            cVar3 = ExclusiveMonitorsStatus();
            DAT_043effa8 = lVar9;
          }
          if (cVar3 == '\0') goto LAB_02b8b794;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0x43effa8,0x10);
    if (bVar4) {
      cVar3 = ExclusiveMonitorsStatus();
      DAT_043effa8 = lVar9;
    }
  } while (cVar3 != '\0');
LAB_02b8b794:
  if (0xff < DAT_043eff90) {
LAB_02b8c0ac:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  (&DAT_043ef790)[DAT_043eff90] = param_1 + 0xc0d;
  DAT_043eff90 = DAT_043eff90 + 1;
  DAT_043effa8 = 0;
  nn::os::SignalLightEvent((LightEventType *)&DAT_043eff9c);
  param_1[0xc0d] = &PTR_LAB_04285e08;
  param_1[0xc0e] = param_2;
  param_1[0xc0f] = 0;
  param_1[0xc10] = 0;
  param_1[0xc11] = 0;
  param_1[0xc12] = 0;
  *(undefined8 **)PTR_DAT_04388100 = param_1 + 0xc0d;
  param_1[0xc13] = 0;
  lVar9 = (**(code **)(*param_2 + 0x10))(param_2,0x1e0,8);
  if (lVar9 == 0) {
    local_88 = 0;
    local_80 = 0;
    local_98 = 0;
    local_90 = (long *)0x0;
  }
  else {
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar5 = PTR_DAT_04379528;
      if (iVar8 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_02b8c0ac;
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = param_2;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    *(undefined8 *)(lVar9 + 0x198) = 0;
    *(undefined8 *)(lVar9 + 0x1a0) = 0;
    *(undefined4 *)(lVar9 + 400) = 0;
    *(undefined8 *)(lVar9 + 0x180) = 0;
    *(undefined8 *)(lVar9 + 0x188) = 0;
    *(undefined4 *)(lVar9 + 0x1c8) = 0;
    *(undefined8 *)(lVar9 + 0x1d8) = 0;
    *(undefined8 *)(lVar9 + 0x1a8) = 0;
    *(long **)(lVar9 + 0x1b0) = param_2;
    *(undefined8 *)(lVar9 + 0x1b8) = 0xfffffffffffffff;
    *(undefined8 *)(lVar9 + 0x1c0) = 0;
    if (DAT_043f1098 == 0) {
      nn::vi::Initialize();
    }
    DAT_043f1098 = DAT_043f1098 + 1;
    local_88 = 0x1e0;
    local_80 = 8;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    local_98 = lVar9;
    local_90 = param_2;
  }
  uVar11 = param_1[0xc07];
  puVar1 = param_1 + 0xc09;
  if (uVar11 < (ulong)param_1[0xc08]) {
    FUN_02b8ceb8(puVar1,uVar11,&local_98);
    param_1[0xc07] = param_1[0xc07] + 0x20;
  }
  else {
    uVar14 = param_1[0xc0a];
    lVar9 = (long)(uVar11 - param_1[0xc06]) >> 5;
    uVar11 = lVar9 + 1;
    if (0x7ffffffffffffffe < uVar14) {
      uVar14 = 0x7fffffffffffffff;
    }
    if (uVar14 < uVar11) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar10 = param_1[0xc08] - param_1[0xc06];
    if ((ulong)(lVar10 >> 5) < uVar14 >> 1) {
      uVar12 = lVar10 >> 4;
      uVar14 = uVar11;
      if (uVar11 <= uVar12) {
        uVar14 = uVar12;
      }
    }
    if (uVar14 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar14 << 5,8);
      if (lVar10 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
    }
    lVar16 = lVar10 + lVar9 * 0x20;
    FUN_02b8ceb8(puVar1,lVar16,&local_98);
    plVar17 = (long *)param_1[0xc06];
    lVar9 = lVar16 + 0x20;
    plVar15 = (long *)param_1[0xc07];
    if (plVar15 == plVar17) {
      plVar15 = plVar17;
    }
    else {
      do {
        lVar16 = lVar16 + -0x20;
        plVar15 = plVar15 + -4;
        FUN_02b8ceb8(puVar1,lVar16,plVar15);
      } while (plVar17 != plVar15);
      plVar17 = (long *)param_1[0xc06];
      plVar15 = (long *)param_1[0xc07];
    }
    lVar13 = param_1[0xc08];
    param_1[0xc06] = lVar16;
    param_1[0xc07] = lVar9;
    param_1[0xc08] = lVar10 + uVar14 * 0x20;
    if (plVar15 != plVar17) {
      lVar9 = tpidr_el0;
      do {
        plVar19 = plVar15 + -4;
        lVar10 = *plVar19;
        *plVar19 = 0;
        if (lVar10 != 0) {
          FUN_02bcbe58(auStack_78,0);
          FUN_02b912a8(lVar10);
          plVar2 = (long *)plVar15[-3];
          lVar16 = plVar15[-2];
          lVar18 = plVar15[-1];
          uVar11 = (**(code **)(*plVar2 + 0xc0))(plVar2);
          if ((uVar11 & 1) == 0) {
LAB_02b8baa4:
            (**(code **)(*plVar2 + 0x18))(plVar2,lVar10,lVar16,lVar18);
          }
          else {
            if (*(char *)(lVar9 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar9 + 0x38d488) = 1;
              *(undefined8 *)(lVar9 + 0x38d478) = 0;
              *(undefined8 *)(lVar9 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar9 + 0x38d480) < 1) goto LAB_02b8baa4;
            FUN_02bcc824(plVar2,lVar10,lVar16,lVar18);
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
        }
        plVar15 = plVar19;
      } while (plVar17 != plVar19);
    }
    if (plVar17 != (long *)0x0) {
      plVar15 = (long *)*puVar1;
      uVar11 = (**(code **)(*plVar15 + 0xc0))(plVar15);
      if ((uVar11 & 1) != 0) {
        lVar9 = tpidr_el0;
        if (*(char *)(lVar9 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar9 + 0x38d488) = 1;
          *(undefined8 *)(lVar9 + 0x38d478) = 0;
          *(undefined8 *)(lVar9 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar9 + 0x38d480)) {
          FUN_02bcc824(plVar15,plVar17,lVar13 - (long)plVar17,8);
          goto LAB_02b8bcb0;
        }
      }
      (**(code **)(*plVar15 + 0x18))(plVar15,plVar17,lVar13 - (long)plVar17,8);
    }
  }
LAB_02b8bcb0:
  lVar9 = local_98;
  local_98 = 0;
  if (lVar9 == 0) goto LAB_02b8bdd0;
  FUN_02bcbe58(auStack_78,0);
  FUN_02b912a8(lVar9);
  uVar7 = local_80;
  uVar6 = local_88;
  plVar15 = local_90;
  uVar11 = (**(code **)(*local_90 + 0xc0))(local_90);
  if ((uVar11 & 1) == 0) {
LAB_02b8bd30:
    (**(code **)(*plVar15 + 0x18))(plVar15,lVar9,uVar6,uVar7);
  }
  else {
    lVar10 = tpidr_el0;
    if (*(char *)(lVar10 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar10 + 0x38d488) = 1;
      *(undefined8 *)(lVar10 + 0x38d478) = 0;
      *(undefined8 *)(lVar10 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_02b8bd30;
    FUN_02bcc824(plVar15,lVar9,uVar6,uVar7);
  }
  lVar9 = tpidr_el0;
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
LAB_02b8bdd0:
  if (((DAT_043f0008 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043f0008), iVar8 != 0)) {
    if (DAT_043f1088 == 0) {
      DAT_043f1090 = nvnBootstrapLoader("nvnDeviceInitialize");
      DAT_043f1088 = nvnBootstrapLoader("nvnDeviceGetProcAddress");
      FUN_02b8e180(0,DAT_043f1088);
      FUN_00878570(0,DAT_043f1088);
    }
    FUN_00100250(&LAB_02b912a4,&DAT_043f0000,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043f0008);
  }
  param_1[0xc05] = &DAT_043f0000;
  return;
}


