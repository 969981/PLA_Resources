/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d2a2c8; name: FUN_00d2a2c8
 */


void FUN_00d2a2c8(long param_1)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *local_88;
  long *local_80;
  ulong local_78;
  undefined8 local_70;
  undefined1 auStack_68 [24];
  long *local_48;
  
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_00d2b7c4;
  plVar12 = *(long **)(param_1 + 0x10);
  local_48 = plVar12;
  uVar7 = FUN_00d306e0(param_1 + 0x118,1,param_1 + 0x20,0,plVar12,*(undefined8 *)(param_1 + 0x110));
  if (((uVar7 & 1) == 0) || (plVar18 = *(long **)(param_1 + 0x140), plVar18 == (long *)0x0)) {
LAB_00d2a318:
    lVar10 = *(long *)(param_1 + 0x98);
  }
  else {
    lVar10 = plVar18[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_00d2b7c4;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar10 = plVar18[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 != 0) goto LAB_00d2a318;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar18 + 0x20))(plVar18);
    lVar10 = *(long *)(param_1 + 0x98);
  }
  if (lVar10 == 0) {
LAB_00d2a320:
    if (*(long *)(param_1 + 200) == 0) goto LAB_00d2a328;
LAB_00d2aaec:
    *(undefined1 *)(param_1 + 0x2b8) = 1;
    uVar7 = FUN_00d325f8(param_1 + 0x280,param_1 + 0xb0,plVar12,*(undefined8 *)(param_1 + 0x110));
    if (((uVar7 & 1) == 0) || (plVar18 = *(long **)(param_1 + 0x2a8), plVar18 == (long *)0x0))
    goto LAB_00d2a328;
    lVar10 = plVar18[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_00d2b7c4;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar10 = plVar18[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 != 0) goto LAB_00d2a328;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar18 + 0x20))(plVar18);
    if (*(char *)(param_1 + 0x270) == '\0') goto LAB_00d2a330;
LAB_00d2a358:
    iVar6 = *(int *)(param_1 + 0xe4);
  }
  else {
    *(undefined1 *)(param_1 + 0x270) = 1;
    uVar7 = FUN_00d325f8(param_1 + 0x238,param_1 + 0x80,plVar12,*(undefined8 *)(param_1 + 0x110));
    if (((uVar7 & 1) == 0) || (plVar18 = *(long **)(param_1 + 0x260), plVar18 == (long *)0x0))
    goto LAB_00d2a320;
    lVar10 = plVar18[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_00d2b7c4;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar10 = plVar18[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 != 0) goto LAB_00d2a320;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar18 + 0x20))(plVar18);
    if (*(long *)(param_1 + 200) != 0) goto LAB_00d2aaec;
LAB_00d2a328:
    if (*(char *)(param_1 + 0x270) != '\0') goto LAB_00d2a358;
LAB_00d2a330:
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_00d2a358;
    *(undefined1 *)(param_1 + 0x270) = 1;
    uVar7 = FUN_00d325f8(param_1 + 0x238,param_1 + 0x50,plVar12,*(undefined8 *)(param_1 + 0x110));
    if (((uVar7 & 1) == 0) || (plVar18 = *(long **)(param_1 + 0x260), plVar18 == (long *)0x0))
    goto LAB_00d2a358;
    lVar10 = plVar18[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_00d2b7c4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar10 = plVar18[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 != 0) goto LAB_00d2a358;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar18 + 0x20))(plVar18);
    iVar6 = *(int *)(param_1 + 0xe4);
  }
  if (iVar6 != 0) {
    FUN_00d2b8e0(&local_88,plVar12);
    FUN_00d2ba64(param_1 + 0x2c8,&local_88);
    puVar14 = local_88;
    local_88 = (undefined8 *)0x0;
    if (puVar14 == (undefined8 *)0x0) {
LAB_00d2ae50:
      iVar6 = *(int *)(param_1 + 0xe4);
    }
    else {
      FUN_02bcbe58(auStack_68,0);
      uVar7 = local_78;
      if (0xcf < local_78) {
        uVar13 = 0;
        uVar15 = local_78 / 0xd0;
        puVar17 = puVar14;
        do {
          (**(code **)*puVar17)(puVar17);
          uVar13 = uVar13 + 1;
          puVar17 = puVar17 + 0x1a;
        } while (uVar13 < uVar15);
      }
      uVar11 = local_70;
      plVar12 = local_80;
      uVar13 = (**(code **)(*local_80 + 0xc0))(local_80);
      lVar10 = tpidr_el0;
      if ((uVar13 & 1) == 0) {
LAB_00d2af38:
        (**(code **)(*plVar12 + 0x18))(plVar12,puVar14,uVar7,uVar11);
      }
      else {
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_00d2af38;
        FUN_02bcc824(plVar12,puVar14,uVar7,uVar11);
      }
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar6 = *(int *)(lVar10 + 0x38d480) + -1;
      *(int *)(lVar10 + 0x38d480) = iVar6;
      if (iVar6 != 0) goto LAB_00d2ae50;
      FUN_02bcc320();
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar10 + 0x38d484) = 0;
      iVar6 = *(int *)(param_1 + 0xe4);
    }
    if (iVar6 != 0) {
      uVar7 = 0;
      lVar10 = 0xc0;
      do {
        *(undefined4 *)(*(long *)(param_1 + 0x2c8) + lVar10) = 0;
        uVar7 = uVar7 + 1;
        lVar10 = lVar10 + 0xd0;
      } while (uVar7 < *(uint *)(param_1 + 0xe4));
    }
  }
  if (*(int *)(param_1 + 0xe8) != 0) {
    FUN_00d2b8e0(&local_88,local_48);
    FUN_00d2ba64(param_1 + 0x2e8,&local_88);
    puVar14 = local_88;
    local_88 = (undefined8 *)0x0;
    if (puVar14 == (undefined8 *)0x0) {
LAB_00d2a964:
      iVar6 = *(int *)(param_1 + 0xe8);
    }
    else {
      FUN_02bcbe58(auStack_68,0);
      uVar7 = local_78;
      if (0xcf < local_78) {
        uVar13 = 0;
        uVar15 = local_78 / 0xd0;
        puVar17 = puVar14;
        do {
          (**(code **)*puVar17)(puVar17);
          uVar13 = uVar13 + 1;
          puVar17 = puVar17 + 0x1a;
        } while (uVar13 < uVar15);
      }
      uVar11 = local_70;
      plVar12 = local_80;
      uVar13 = (**(code **)(*local_80 + 0xc0))(local_80);
      if ((uVar13 & 1) == 0) {
LAB_00d2b0e8:
        (**(code **)(*plVar12 + 0x18))(plVar12,puVar14,uVar7,uVar11);
      }
      else {
        lVar10 = tpidr_el0;
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_00d2b0e8;
        FUN_02bcc824(plVar12,puVar14,uVar7,uVar11);
      }
      lVar10 = tpidr_el0;
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar6 = *(int *)(lVar10 + 0x38d480) + -1;
      *(int *)(lVar10 + 0x38d480) = iVar6;
      if (iVar6 != 0) goto LAB_00d2a964;
      FUN_02bcc320();
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar10 + 0x38d484) = 0;
      iVar6 = *(int *)(param_1 + 0xe8);
    }
    if ((iVar6 != 0) &&
       (*(undefined4 *)(*(long *)(param_1 + 0x2e8) + 0xc0) = 1, 1 < *(uint *)(param_1 + 0xe8))) {
      lVar10 = 400;
      uVar7 = 1;
      do {
        *(undefined4 *)(*(long *)(param_1 + 0x2e8) + lVar10) = 1;
        uVar7 = uVar7 + 1;
        lVar10 = lVar10 + 0xd0;
      } while (uVar7 < *(uint *)(param_1 + 0xe8));
    }
  }
  if (*(int *)(param_1 + 0xec) != 0) {
    FUN_00d2b8e0(&local_88,local_48);
    FUN_00d2ba64(param_1 + 0x308,&local_88);
    puVar14 = local_88;
    local_88 = (undefined8 *)0x0;
    if (puVar14 == (undefined8 *)0x0) {
LAB_00d2abac:
      iVar6 = *(int *)(param_1 + 0xec);
    }
    else {
      FUN_02bcbe58(auStack_68,0);
      uVar7 = local_78;
      if (0xcf < local_78) {
        uVar13 = 0;
        uVar15 = local_78 / 0xd0;
        puVar17 = puVar14;
        do {
          (**(code **)*puVar17)(puVar17);
          uVar13 = uVar13 + 1;
          puVar17 = puVar17 + 0x1a;
        } while (uVar13 < uVar15);
      }
      uVar11 = local_70;
      plVar12 = local_80;
      uVar13 = (**(code **)(*local_80 + 0xc0))(local_80);
      if ((uVar13 & 1) == 0) {
LAB_00d2b27c:
        (**(code **)(*plVar12 + 0x18))(plVar12,puVar14,uVar7,uVar11);
      }
      else {
        lVar10 = tpidr_el0;
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_00d2b27c;
        FUN_02bcc824(plVar12,puVar14,uVar7,uVar11);
      }
      lVar10 = tpidr_el0;
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar6 = *(int *)(lVar10 + 0x38d480) + -1;
      *(int *)(lVar10 + 0x38d480) = iVar6;
      if (iVar6 != 0) goto LAB_00d2abac;
      FUN_02bcc320();
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar10 + 0x38d484) = 0;
      iVar6 = *(int *)(param_1 + 0xec);
    }
    if (iVar6 != 0) {
      uVar7 = 0;
      lVar10 = 0xc0;
      do {
        *(undefined4 *)(*(long *)(param_1 + 0x308) + lVar10) = 2;
        uVar7 = uVar7 + 1;
        lVar10 = lVar10 + 0xd0;
      } while (uVar7 < *(uint *)(param_1 + 0xec));
    }
  }
  plVar12 = local_48;
  uVar7 = (ulong)*(uint *)(param_1 + 0xfc);
  if (*(uint *)(param_1 + 0xfc) == 0) {
    uVar2 = *(uint *)(param_1 + 0x100);
    if (uVar2 != 0) goto LAB_00d2a4d0;
LAB_00d2a380:
    if (*(int *)(param_1 + 0x104) != 0) goto LAB_00d2a5f4;
LAB_00d2a388:
    cVar3 = *(char *)(param_1 + 0xf4);
joined_r0x00d2a634:
    if (cVar3 != '\0') goto LAB_00d2a638;
LAB_00d2a390:
    if (*(char *)(param_1 + 0xf5) != '\0') goto LAB_00d2a704;
LAB_00d2a398:
    if (*(char *)(param_1 + 0xf6) != '\0') goto LAB_00d2a7e4;
LAB_00d2a3a0:
    cVar3 = *(char *)(param_1 + 0xf7);
    plVar12 = local_48;
  }
  else {
    lVar9 = uVar7 * 0xc0;
    lVar10 = (**(code **)(*local_48 + 0x10))(local_48,lVar9,0x10);
    if (lVar10 == 0) {
      plVar12 = (long *)0x0;
      lVar9 = 0;
      uVar11 = 0;
    }
    else {
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar6 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_00d2b828;
      *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar12;
      puVar14 = (undefined8 *)(lVar10 + 0x20);
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      do {
        puVar14[0x12] = 0;
        puVar14[0x13] = 0;
        uVar7 = uVar7 - 1;
        puVar14[0x10] = 0;
        puVar14[0x11] = 0;
        puVar14[0xe] = 0;
        puVar14[0xf] = 0;
        puVar14[0xc] = 0;
        puVar14[0xd] = 0;
        puVar14[10] = 0;
        puVar14[0xb] = 0;
        puVar14[8] = 0;
        puVar14[9] = 0;
        puVar14[6] = 0;
        puVar14[7] = 0;
        puVar14[4] = 0;
        puVar14[5] = 0;
        puVar14[2] = 0;
        puVar14[3] = 0;
        *(undefined4 *)((long)puVar14 + 0x14) = 2;
        *puVar14 = 0;
        puVar14[1] = 0;
        puVar14[-2] = 0;
        puVar14[-1] = 0;
        puVar14[-4] = 0;
        puVar14[-3] = 0;
        puVar14[-4] = &PTR_LAB_04270620;
        puVar14[4] = 0;
        puVar14[5] = 0;
        puVar14[6] = 0;
        puVar14[7] = 0;
        puVar14[-2] = 0;
        puVar14[-1] = 0x3f800000;
        *puVar14 = 0x3f80000000000000;
        puVar14[1] = 0x3f8000003f800000;
        puVar14 = puVar14 + 0x18;
      } while (uVar7 != 0);
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      uVar11 = 0x10;
    }
    puVar14 = *(undefined8 **)(param_1 + 0x328);
    *(long *)(param_1 + 0x328) = lVar10;
    if (puVar14 == (undefined8 *)0x0) {
      *(long **)(param_1 + 0x330) = plVar12;
    }
    else {
      FUN_02bcbe58(&local_88,0);
      uVar7 = *(ulong *)(param_1 + 0x338);
      if (0xbf < uVar7) {
        uVar13 = 0;
        puVar17 = puVar14;
        do {
          (**(code **)*puVar17)(puVar17);
          uVar13 = uVar13 + 1;
          puVar17 = puVar17 + 0x18;
        } while (uVar13 < uVar7 / 0xc0);
        uVar7 = *(ulong *)(param_1 + 0x338);
      }
      plVar18 = *(long **)(param_1 + 0x330);
      uVar16 = *(undefined8 *)(param_1 + 0x340);
      uVar13 = (**(code **)(*plVar18 + 0xc0))(plVar18);
      if ((uVar13 & 1) == 0) {
LAB_00d2acbc:
        (**(code **)(*plVar18 + 0x18))(plVar18,puVar14,uVar7,uVar16);
      }
      else {
        lVar10 = tpidr_el0;
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_00d2acbc;
        FUN_02bcc824(plVar18,puVar14,uVar7,uVar16);
      }
      lVar10 = tpidr_el0;
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar6 = *(int *)(lVar10 + 0x38d480) + -1;
      *(int *)(lVar10 + 0x38d480) = iVar6;
      if (iVar6 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar10 + 0x38d484) = 0;
      }
      *(long **)(param_1 + 0x330) = plVar12;
    }
    *(long *)(param_1 + 0x338) = lVar9;
    *(undefined8 *)(param_1 + 0x340) = uVar11;
    uVar2 = *(uint *)(param_1 + 0x100);
    if (uVar2 == 0) goto LAB_00d2a380;
LAB_00d2a4d0:
    plVar12 = local_48;
    uVar7 = (ulong)uVar2;
    uVar13 = uVar7 * 0xc0;
    lVar10 = (**(code **)(*local_48 + 0x10))(local_48,uVar13,0x10);
    if (lVar10 == 0) {
      local_78 = 0;
      local_70 = 0;
      local_80 = (long *)0x0;
    }
    else {
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar6 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_00d2b828;
      *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar12;
      puVar14 = (undefined8 *)(lVar10 + 0x20);
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      do {
        puVar14[0x12] = 0;
        puVar14[0x13] = 0;
        uVar7 = uVar7 - 1;
        puVar14[0x10] = 0;
        puVar14[0x11] = 0;
        puVar14[0xe] = 0;
        puVar14[0xf] = 0;
        puVar14[0xc] = 0;
        puVar14[0xd] = 0;
        puVar14[10] = 0;
        puVar14[0xb] = 0;
        puVar14[8] = 0;
        puVar14[9] = 0;
        puVar14[6] = 0;
        puVar14[7] = 0;
        puVar14[4] = 0;
        puVar14[5] = 0;
        puVar14[2] = 0;
        puVar14[3] = 0;
        *(undefined4 *)((long)puVar14 + 0x14) = 2;
        *puVar14 = 0;
        puVar14[1] = 0;
        puVar14[-2] = 0;
        puVar14[-1] = 0;
        puVar14[-4] = 0;
        puVar14[-3] = 0;
        puVar14[-4] = &PTR_LAB_042705e8;
        puVar14[4] = 0;
        puVar14[5] = 0;
        puVar14[6] = 0;
        puVar14[7] = 0;
        puVar14[-2] = 0;
        puVar14[-1] = 0x3f800000;
        *puVar14 = 0x3f80000000000000;
        puVar14[1] = 0x3f8000003f800000;
        puVar14 = puVar14 + 0x18;
      } while (uVar7 != 0);
      local_80 = plVar12;
      local_70 = 0x10;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      local_78 = uVar13;
    }
    local_88 = (undefined8 *)0x0;
    lVar9 = *(long *)(param_1 + 0x348);
    *(long *)(param_1 + 0x348) = lVar10;
    if (lVar9 != 0) {
      FUN_00d344bc(param_1 + 0x350);
    }
    *(ulong *)(param_1 + 0x358) = local_78;
    *(undefined8 *)(param_1 + 0x360) = local_70;
    *(long **)(param_1 + 0x350) = local_80;
    if (*(int *)(param_1 + 0x104) == 0) goto LAB_00d2a388;
LAB_00d2a5f4:
    FUN_00d2bd40(&local_88,local_48);
    puVar14 = local_88;
    local_88 = (undefined8 *)0x0;
    lVar10 = *(long *)(param_1 + 0x368);
    *(undefined8 **)(param_1 + 0x368) = puVar14;
    if (lVar10 == 0) {
      *(undefined8 *)(param_1 + 0x380) = local_70;
      *(ulong *)(param_1 + 0x378) = local_78;
      *(long **)(param_1 + 0x370) = local_80;
      local_88 = (undefined8 *)0x0;
      cVar3 = *(char *)(param_1 + 0xf4);
      goto joined_r0x00d2a634;
    }
    FUN_00d347f0(param_1 + 0x370);
    puVar14 = local_88;
    *(undefined8 *)(param_1 + 0x380) = local_70;
    *(ulong *)(param_1 + 0x378) = local_78;
    *(long **)(param_1 + 0x370) = local_80;
    local_88 = (undefined8 *)0x0;
    if (puVar14 == (undefined8 *)0x0) goto LAB_00d2a388;
    FUN_00d347f0(&local_80);
    if (*(char *)(param_1 + 0xf4) == '\0') goto LAB_00d2a390;
LAB_00d2a638:
    plVar12 = local_48;
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar6 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00d2b828;
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar12;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    lVar9 = (**(code **)(*plVar12 + 0x10))(plVar12,0x98,8);
    if (lVar9 == 0) {
      (**(code **)(*plVar12 + 0xb8))(plVar12);
    }
    FUN_0284f83c(lVar9,local_48);
    *(long **)(lVar9 + 8) = plVar12;
    *(long *)(lVar9 + 0x10) = lVar9;
    *(undefined8 *)(lVar9 + 0x18) = 0x98;
    *(undefined8 *)(lVar9 + 0x20) = 8;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    if (lVar9 != 0) {
      piVar1 = (int *)(lVar9 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar12 = *(long **)(param_1 + 0x390);
    *(undefined8 *)(param_1 + 0x390) = 0;
    if (plVar12 != (long *)0x0) {
      plVar18 = plVar12 + 10;
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
        (**(code **)(*plVar12 + 0x10))();
      }
    }
    *(long *)(param_1 + 0x390) = lVar9;
    FUN_0284f9b8(lVar9,0);
    if (*(char *)(param_1 + 0xf5) == '\0') goto LAB_00d2a398;
LAB_00d2a704:
    plVar12 = local_48;
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar6 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00d2b828;
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar12;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    lVar9 = (**(code **)(*plVar12 + 0x10))(plVar12,0x98,8);
    if (lVar9 == 0) {
      (**(code **)(*plVar12 + 0xb8))(plVar12);
    }
    FUN_0284be74(lVar9,local_48);
    *(long **)(lVar9 + 8) = plVar12;
    *(long *)(lVar9 + 0x10) = lVar9;
    *(undefined8 *)(lVar9 + 0x18) = 0x98;
    *(undefined8 *)(lVar9 + 0x20) = 8;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    if (lVar9 != 0) {
      piVar1 = (int *)(lVar9 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar12 = *(long **)(param_1 + 0x388);
    *(undefined8 *)(param_1 + 0x388) = 0;
    if (plVar12 != (long *)0x0) {
      plVar18 = plVar12 + 10;
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
        (**(code **)(*plVar12 + 0x10))();
      }
    }
    *(long *)(param_1 + 0x388) = lVar9;
    FUN_0284bf78(lVar9,0);
    if (*(char *)(param_1 + 0xf6) == '\0') goto LAB_00d2a3a0;
LAB_00d2a7e4:
    lVar10 = FUN_00d34b0c(local_48,&local_48);
    if (lVar10 != 0) {
      piVar1 = (int *)(lVar10 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar12 = *(long **)(param_1 + 0x398);
    *(undefined8 *)(param_1 + 0x398) = 0;
    if (plVar12 != (long *)0x0) {
      plVar18 = plVar12 + 10;
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
        (**(code **)(*plVar12 + 0x10))();
      }
    }
    *(long *)(param_1 + 0x398) = lVar10;
    FUN_02838cf8(lVar10,0);
    cVar3 = *(char *)(param_1 + 0xf7);
    plVar12 = local_48;
  }
  if (cVar3 != '\0') {
    local_48 = plVar12;
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar6 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_00d2b828:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar12;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    lVar9 = (**(code **)(*plVar12 + 0x10))(plVar12,0x98,8);
    if (lVar9 == 0) {
      (**(code **)(*plVar12 + 0xb8))(plVar12);
    }
    FUN_0284f3a8(lVar9,local_48);
    *(long **)(lVar9 + 8) = plVar12;
    *(long *)(lVar9 + 0x10) = lVar9;
    *(undefined8 *)(lVar9 + 0x18) = 0x98;
    *(undefined8 *)(lVar9 + 0x20) = 8;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    if (lVar9 != 0) {
      piVar1 = (int *)(lVar9 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar12 = *(long **)(param_1 + 0x3a0);
    *(undefined8 *)(param_1 + 0x3a0) = 0;
    if (plVar12 != (long *)0x0) {
      plVar18 = plVar12 + 10;
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
        (**(code **)(*plVar12 + 0x10))();
      }
    }
    *(long *)(param_1 + 0x3a0) = lVar9;
    FUN_0284f4ac(lVar9,0);
  }
  return;
}


