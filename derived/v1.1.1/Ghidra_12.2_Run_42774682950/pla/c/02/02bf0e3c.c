/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bf0e3c; name: FUN_02bf0e3c
 */


void FUN_02bf0e3c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined8 *local_a0;
  undefined8 uStack_98;
  long *local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  long *local_68;
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x25));
  plVar14 = (long *)*param_2;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar14;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  plVar8 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x440,0x10);
  if (plVar8 == (long *)0x0) {
    (**(code **)(*plVar14 + 0xb8))(plVar14);
  }
  local_68 = (long *)param_2[1];
  if ((local_68 != (long *)0x0) && (local_68[1] != 0)) {
    plVar16 = local_68 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *plVar16 = *plVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  FUN_008c4b3c(&local_78,param_3);
  FUN_02bd148c(plVar8,&local_68,&local_78);
  puVar5 = local_78;
  if (local_78 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_78 + 1);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      local_78[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_88 = (undefined8 *)*puVar5;
      FUN_02a44274(lVar11 + 0xd8,&local_88);
    }
  }
  if ((local_68 != (long *)0x0) && (local_68[1] != 0)) {
    plVar16 = local_68 + 2;
    do {
      lVar11 = *plVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *plVar16 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 + -1 == 0) {
      (**(code **)(*local_68 + 0x18))();
    }
  }
  plVar8[1] = (long)plVar14;
  plVar8[2] = (long)plVar8;
  plVar8[3] = 0x440;
  plVar8[4] = 0x10;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  local_90 = plVar8;
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar8 = (long *)param_2[5];
  plVar14 = plVar8 + 3;
  lVar7 = plVar8[1];
  if (lVar7 == plVar8[2]) {
    uVar13 = plVar8[4];
    lVar7 = lVar7 - *plVar8 >> 3;
    uVar9 = lVar7 + 1;
    if (0x7ffffffffffffffe < uVar13) {
      uVar13 = 0x7fffffffffffffff;
    }
    if (uVar13 < uVar9) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar11 = plVar8[2] - *plVar8;
    uVar12 = lVar11 >> 2;
    if (uVar9 <= uVar12) {
      uVar9 = uVar12;
    }
    if ((ulong)(lVar11 >> 3) < uVar13 >> 1) {
      uVar13 = uVar9;
    }
    if (uVar13 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = (**(code **)(*(long *)*plVar14 + 0x10))((long *)*plVar14,uVar13 << 3,8);
      if (lVar11 == 0) {
        (**(code **)(*(long *)*plVar14 + 0xb8))();
      }
    }
    lVar17 = lVar11 + lVar7 * 8;
    FUN_02bfb054(plVar14,lVar17,&local_90);
    plVar16 = (long *)*plVar8;
    plVar15 = (long *)plVar8[1];
    lVar7 = lVar17 + 8;
    if (plVar15 == plVar16) {
      plVar15 = plVar16;
    }
    else {
      do {
        lVar17 = lVar17 + -8;
        plVar15 = plVar15 + -1;
        FUN_02bfb054(plVar14,lVar17,plVar15);
      } while (plVar16 != plVar15);
      plVar16 = (long *)*plVar8;
      plVar15 = (long *)plVar8[1];
    }
    *plVar8 = lVar17;
    plVar8[1] = lVar7;
    lVar7 = plVar8[2];
    plVar8[2] = lVar11 + uVar13 * 8;
    while (plVar15 != plVar16) {
      plVar15 = plVar15 + -1;
      plVar8 = (long *)*plVar15;
      if (plVar8 != (long *)0x0) {
        lVar11 = plVar8[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar8 + 0x20))();
        }
      }
    }
    if (plVar16 != (long *)0x0) {
      plVar14 = (long *)*plVar14;
      uVar9 = (**(code **)(*plVar14 + 0xc0))(plVar14);
      if ((uVar9 & 1) != 0) {
        lVar11 = tpidr_el0;
        if (*(char *)(lVar11 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar11 + 0x38d488) = 1;
          *(undefined8 *)(lVar11 + 0x38d478) = 0;
          *(undefined8 *)(lVar11 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar11 + 0x38d480)) {
          FUN_02bcc824(plVar14,plVar16,lVar7 - (long)plVar16,8);
          goto LAB_02bf1154;
        }
      }
      (**(code **)(*plVar14 + 0x18))(plVar14,plVar16,lVar7 - (long)plVar16,8);
    }
  }
  else {
    FUN_02bfb054(plVar14,lVar7,&local_90);
    plVar8[1] = plVar8[1] + 8;
  }
LAB_02bf1154:
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  FUN_008802f0(&local_78,local_90 + 0xb);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_018fea88(param_1,&local_78);
  puVar5 = local_78;
  if (local_78 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_78 + 1);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      local_78[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_88 = (undefined8 *)*puVar5;
      FUN_02a44274(lVar7 + 0xd8,&local_88);
    }
  }
  local_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  FUN_02beda7c(&local_a0,param_1);
  if (param_2[0x2a] != 0) {
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    FUN_00bd0e30(&local_88,&local_a0);
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_00bd0e30(&local_78,&local_88);
    (*(code *)param_2[0x2a])(param_2 + 0x2e,&local_78);
    puVar5 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_78 + 1);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        local_78[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_68 = (long *)*puVar5;
        FUN_02a44274(lVar7 + 0xd8,&local_68);
      }
    }
    puVar5 = local_88;
    if (local_88 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_88 + 1);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        local_88[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_78 = (undefined8 *)*puVar5;
        FUN_02a44274(lVar7 + 0xd8,&local_78);
      }
    }
  }
  puVar5 = local_a0;
  if (local_a0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_a0 + 1);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      local_a0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_78 = (undefined8 *)*puVar5;
      FUN_02a44274(lVar7 + 0xd8,&local_78);
    }
  }
  if (local_90 != (long *)0x0) {
    lVar7 = local_90[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_90 + 0x20))();
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x25));
  return;
}


