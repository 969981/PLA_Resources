/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a6a2a4; name: FUN_02a6a2a4
 */


long * FUN_02a6a2a4(long *param_1)

{
  MultiWaitType *pMVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ThreadType *pTVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  undefined8 uVar20;
  long *plVar21;
  long *plVar22;
  long *local_88 [3];
  long local_70;
  int local_64;
  
  plVar18 = (long *)*param_1;
  plVar11 = (long *)(**(code **)(*plVar18 + 0x10))(plVar18,0x210,0x10);
  puVar5 = PTR_DAT_04379520;
  if (plVar11 == (long *)0x0) {
    plVar18 = (long *)0x0;
    uVar20 = 0;
    uVar16 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar10 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    puVar6 = PTR_DAT_04379528;
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_02a6ab3c;
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar18;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    *plVar11 = *param_1;
    plVar22 = plVar11 + 1;
    *plVar22 = 0;
    plVar11[2] = 0;
    plVar11[3] = 0;
    plVar11[4] = 0;
    plVar11[5] = 0;
    nn::os::InitializeMutex((MutexType *)(plVar11 + 6),false,0);
    nn::os::InitializeLightEvent((long)plVar11 + 0x54,0,1);
    plVar11[0xc] = 0;
    pMVar1 = (MultiWaitType *)(plVar11 + 0xd);
    FUN_02a6bbbc(plVar11 + 0x13);
    FUN_02a6bcb0(plVar11 + 0x13,3);
    nn::os::InitializeMultiWait(pMVar1);
    FUN_02a6953c(plVar11 + 0x1a);
    FUN_02a6953c(plVar11 + 0x21);
    FUN_02a6953c(plVar11 + 0x28);
    plVar11[0x2f] = param_1[1];
    plVar11[0x30] = 0;
    plVar11[0x31] = 0;
    plVar11[0x32] = 0;
    plVar11[0x33] = 0;
    lVar13 = *plVar11;
    *(undefined1 *)((long)plVar11 + 0x20c) = 0;
    plVar11[0x40] = 0x300000003;
    *(undefined4 *)(plVar11 + 0x41) = 0;
    lVar15 = param_1[2];
    *(char *)((long)plVar11 + 0x20d) = (char)lVar15;
    if (lVar13 == 0) {
      if (((*puVar5 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar10 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
      lVar13 = 0;
      if (lVar15 != 0) {
        if (*(long *)(lVar15 + 0x80) == 0) {
          lVar13 = 0;
        }
        else {
          lVar13 = *(long *)(lVar15 + *(long *)(lVar15 + 0x80) * 8 + -8);
        }
      }
      *plVar11 = lVar13;
      if (*(char *)((long)plVar11 + 0x20d) != '\0') goto LAB_02a6a3dc;
LAB_02a6a610:
      local_64 = 0;
      while( true ) {
        iVar10 = local_64;
        local_88[0] = plVar11;
        local_70 = lVar13;
        lVar13 = FUN_02a6b8ac(lVar13,&local_64,local_88,plVar11 + 0x2f,&local_70);
        if (lVar13 != 0) {
          lVar15 = *(long *)(lVar13 + 0x58);
          if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_02a6ab24;
          if (*(long *)(lVar15 + 0x10) == 0) {
            uVar16 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
            *(undefined8 *)(lVar15 + 0x10) = uVar16;
          }
          piVar2 = (int *)(lVar15 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = *piVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          iVar10 = local_64;
        }
        plVar21 = plVar11 + (long)iVar10 + 3;
        plVar19 = (long *)*plVar21;
        *plVar21 = 0;
        if (plVar19 != (long *)0x0) {
          lVar15 = plVar19[0xb];
          piVar2 = (int *)(lVar15 + 0xc);
          do {
            iVar10 = *piVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*plVar19 + 0x20))();
          }
        }
        iVar10 = local_64;
        *plVar21 = lVar13;
        lVar13 = (long)local_64;
        FUN_02a49678(plVar11[lVar13 + 3],(&PTR_s_JobThread0_0427e888)[lVar13],local_64,0x10);
        FUN_02a6c220(pMVar1,*(undefined8 *)(plVar11[lVar13 + 3] + 0x5c0));
        local_64 = iVar10 + 1;
        if (2 < local_64) break;
        lVar13 = *plVar11;
      }
    }
    else {
      if ((char)lVar15 == '\0') goto LAB_02a6a610;
LAB_02a6a3dc:
      pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
      nn::os::SetThreadCoreMask(pTVar14,0,1);
      plVar19 = (long *)*plVar11;
      if (((*puVar5 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar10 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
      if (0xf < *(ulong *)(lVar13 + 0x80)) {
LAB_02a6ab3c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar19;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
      lVar15 = (**(code **)(*plVar19 + 0x10))(plVar19,0x5f0,0x10);
      if (lVar15 == 0) {
        (**(code **)(*plVar19 + 0xb8))(plVar19);
      }
      FUN_02a6cac0(lVar15,plVar11,plVar19);
      *(long **)(lVar15 + 8) = plVar19;
      *(long *)(lVar15 + 0x10) = lVar15;
      *(undefined8 *)(lVar15 + 0x18) = 0x5f0;
      *(undefined8 *)(lVar15 + 0x20) = 0x10;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
      if (lVar15 != 0) {
        lVar13 = *(long *)(lVar15 + 0x58);
        if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_02a6ab24;
        if (*(long *)(lVar13 + 0x10) == 0) {
          uVar16 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
          *(undefined8 *)(lVar13 + 0x10) = uVar16;
        }
        piVar2 = (int *)(lVar13 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = *piVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar19 = (long *)plVar11[3];
      plVar11[3] = 0;
      if (plVar19 != (long *)0x0) {
        lVar13 = plVar19[0xb];
        piVar2 = (int *)(lVar13 + 0xc);
        do {
          iVar10 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*plVar19 + 0x20))();
        }
      }
      plVar11[3] = lVar15;
      local_64 = 1;
      do {
        iVar10 = local_64;
        local_70 = *plVar11;
        local_88[0] = plVar11;
        lVar13 = FUN_02a6b8ac(local_70,&local_64,local_88,plVar11 + 0x2f,&local_70);
        if (lVar13 != 0) {
          lVar15 = *(long *)(lVar13 + 0x58);
          if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_02a6ab24;
          if (*(long *)(lVar15 + 0x10) == 0) {
            uVar16 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
            *(undefined8 *)(lVar15 + 0x10) = uVar16;
          }
          piVar2 = (int *)(lVar15 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = *piVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          iVar10 = local_64;
        }
        plVar21 = plVar11 + (long)iVar10 + 3;
        plVar19 = (long *)*plVar21;
        *plVar21 = 0;
        if (plVar19 != (long *)0x0) {
          lVar15 = plVar19[0xb];
          piVar2 = (int *)(lVar15 + 0xc);
          do {
            iVar10 = *piVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*plVar19 + 0x20))();
          }
        }
        iVar10 = local_64;
        *plVar21 = lVar13;
        lVar13 = (long)local_64;
        FUN_02a49678(plVar11[lVar13 + 3],(&PTR_s_JobThread0_0427e888)[lVar13],local_64,0x10);
        FUN_02a6c220(pMVar1,*(undefined8 *)(plVar11[lVar13 + 3] + 0x5c0));
        local_64 = iVar10 + 1;
      } while (local_64 < 3);
    }
    local_88[0] = plVar11;
    lVar13 = FUN_02a60804(&local_70,*plVar11,local_88);
    *(ulong *)(lVar13 + 0x1e0) = *(ulong *)(lVar13 + 0x1e0) | 8;
    if (lVar13 != 0) {
      lVar15 = *(long *)(lVar13 + 0x58);
      if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
LAB_02a6ab24:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar16 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar16;
      }
      piVar2 = (int *)(lVar15 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar19 = (long *)*plVar22;
    *plVar22 = 0;
    if (plVar19 != (long *)0x0) {
      lVar15 = plVar19[0xb];
      piVar2 = (int *)(lVar15 + 0xc);
      do {
        iVar10 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*plVar19 + 0x20))();
      }
    }
    plVar11[1] = lVar13;
    *(ulong *)(lVar13 + 0x1e0) = *(ulong *)(lVar13 + 0x1e0) | 0x20;
    uVar16 = 0x10;
    uVar20 = 0x210;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
  }
  lVar12 = (long)DAT_043eef30;
  if (DAT_043eef30 == (long *)0x0) {
    DAT_043eef30 = plVar11;
    DAT_043eef38 = plVar18;
    DAT_043eef40 = uVar20;
    DAT_043eef48 = uVar16;
    return plVar11;
  }
  DAT_043eef30 = plVar11;
  FUN_02bcbe58(local_88,0);
  FUN_02a6962c(lVar12);
  uVar9 = DAT_043eef48;
  uVar8 = DAT_043eef40;
  plVar11 = DAT_043eef38;
  uVar17 = (**(code **)(*DAT_043eef38 + 0xc0))(DAT_043eef38);
  lVar13 = tpidr_el0;
  if ((uVar17 & 1) != 0) {
    if (*(char *)(lVar13 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar13 + 0x38d488) = 1;
      *(undefined8 *)(lVar13 + 0x38d478) = 0;
      *(undefined8 *)(lVar13 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar13 + 0x38d480)) {
      FUN_02bcc824(plVar11,lVar12,uVar8,uVar9);
      goto LAB_02a6a860;
    }
  }
  (**(code **)(*plVar11 + 0x18))(plVar11,lVar12,uVar8,uVar9);
LAB_02a6a860:
  if (*(char *)(lVar13 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar13 + 0x38d488) = 1;
    *(undefined8 *)(lVar13 + 0x38d478) = 0;
    *(undefined8 *)(lVar13 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar10 = *(int *)(lVar13 + 0x38d480) + -1;
  *(int *)(lVar13 + 0x38d480) = iVar10;
  if (iVar10 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar13 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar13 + 0x38d488) = 1;
      *(undefined8 *)(lVar13 + 0x38d478) = 0;
      *(undefined8 *)(lVar13 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar13 + 0x38d484) = 0;
  }
  DAT_043eef38 = plVar18;
  DAT_043eef40 = uVar20;
  DAT_043eef48 = uVar16;
  return DAT_043eef30;
}


