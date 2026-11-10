/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c1aba4; name: FUN_02c1aba4
 */


void FUN_02c1aba4(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long local_90 [2];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined1 auStack_68 [8];
  
  param_1[7] = 0;
  puVar3 = PTR_DAT_043796d0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  puVar3 = PTR_DAT_04379520;
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar7 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar4 = PTR_DAT_04379528;
    if (iVar7 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  puVar4 = PTR_DAT_04379528;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar8 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    if (*(long *)(lVar8 + 0x80) != 0) {
      lVar10 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_FUN_04288c28;
  param_1[1] = lVar10;
  param_1[9] = (long)&PTR_FUN_04288c60;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if ((*puVar3 & 1) == 0) {
    iVar7 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar5 = PTR_DAT_04379528;
    if (iVar7 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
  plVar17 = DAT_043f1798;
  lVar8 = tpidr_el0;
  if ((((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
      (plVar11 = *(long **)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), plVar11 == (long *)0x0)) &&
     (plVar11 = *(long **)(lVar8 + 0x20), *(long **)(lVar8 + 0x20) == (long *)0x0)) {
    *(long **)(lVar8 + 0x20) = DAT_043f1798;
    plVar11 = plVar17;
  }
  param_1[0xe] = (long)plVar11;
  param_1[0xf] = 0x1fffffffffffffff;
  lVar10 = param_1[0xb];
  plVar17 = (long *)param_1[0xc];
  uVar13 = (long)plVar17 - lVar10 >> 3;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x17] = 0;
  if (8 < uVar13) {
    plVar11 = plVar17;
    if ((long)plVar17 - lVar10 != 0x48) {
      plVar11 = (long *)(lVar10 + 0x48);
      while (plVar11 != plVar17) {
        plVar17 = plVar17 + -1;
        plVar16 = (long *)*plVar17;
        if (plVar16 != (long *)0x0) {
          plVar15 = plVar16 + 10;
          do {
            iVar7 = (int)*plVar15 + -1;
            cVar2 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar6) {
              *(int *)plVar15 = iVar7;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 == 0) {
            (**(code **)(*plVar16 + 0x10))();
          }
        }
      }
      param_1[0xc] = (long)plVar11;
    }
    goto LAB_02c1af44;
  }
  plVar16 = param_1 + 0xe;
  if ((ulong)(param_1[0xd] - (long)plVar17 >> 3) < 9 - uVar13) {
    lVar10 = param_1[0xd] - lVar10;
    if ((ulong)(lVar10 >> 3) < 0xfffffffffffffff) {
      uVar12 = lVar10 >> 2;
      if (uVar12 < 10) {
        uVar12 = 9;
      }
    }
    else {
      uVar12 = 0x1fffffffffffffff;
    }
    lVar10 = (**(code **)(*plVar11 + 0x10))(plVar11,uVar12 << 3,8);
    if (lVar10 == 0) {
      (**(code **)(*(long *)*plVar16 + 0xb8))();
    }
    plVar11 = (long *)(lVar10 + uVar13 * 8);
    lVar14 = uVar13 - 9;
    plVar17 = plVar11;
    do {
      FUN_02c1c2b8(plVar16,plVar17);
      plVar17 = plVar17 + 1;
      bVar6 = lVar14 != -1;
      lVar14 = lVar14 + 1;
    } while (bVar6);
    plVar15 = (long *)param_1[0xb];
    plVar18 = (long *)param_1[0xc];
    if (plVar18 == plVar15) {
      plVar18 = plVar15;
    }
    else {
      do {
        lVar14 = *plVar16;
        if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar3), iVar7 != 0)) {
          FUN_008a62a4(puVar4);
          FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar3);
        }
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
        if (lVar9 != 0) {
          if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar14;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
        }
        plVar18 = plVar18 + -1;
        lVar14 = *plVar18;
        plVar11 = plVar11 + -1;
        *plVar11 = lVar14;
        if (lVar14 != 0) {
          piVar1 = (int *)(lVar14 + 0x50);
          do {
            cVar2 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (lVar9 != 0) {
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
        }
      } while (plVar18 != plVar15);
      plVar15 = (long *)param_1[0xc];
      plVar18 = (long *)param_1[0xb];
    }
    param_1[0xb] = (long)plVar11;
    param_1[0xc] = (long)plVar17;
    lVar14 = param_1[0xd];
    param_1[0xd] = lVar10 + uVar12 * 8;
    while (plVar15 != plVar18) {
      plVar15 = plVar15 + -1;
      plVar17 = (long *)*plVar15;
      if (plVar17 != (long *)0x0) {
        plVar11 = plVar17 + 10;
        do {
          iVar7 = (int)*plVar11 + -1;
          cVar2 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *(int *)plVar11 = iVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar17 + 0x10))();
        }
      }
    }
    if (plVar18 != (long *)0x0) {
      plVar16 = (long *)*plVar16;
      uVar13 = (**(code **)(*plVar16 + 0xc0))(plVar16);
      if ((uVar13 & 1) != 0) {
        if (*(char *)(lVar8 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar8 + 0x38d488) = 1;
          *(undefined8 *)(lVar8 + 0x38d478) = 0;
          *(undefined8 *)(lVar8 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar8 + 0x38d480)) {
          FUN_02bcc824(plVar16,plVar18,lVar14 - (long)plVar18,8);
          goto LAB_02c1af40;
        }
      }
      (**(code **)(*plVar16 + 0x18))(plVar16,plVar18,lVar14 - (long)plVar18,8);
    }
  }
  else {
    lVar8 = uVar13 - 9;
    do {
      FUN_02c1c2b8(plVar16,plVar17);
      plVar17 = (long *)(param_1[0xc] + 8);
      bVar6 = lVar8 != -1;
      lVar8 = lVar8 + 1;
      param_1[0xc] = (long)plVar17;
    } while (bVar6);
  }
LAB_02c1af40:
  plVar11 = (long *)param_1[0xc];
LAB_02c1af44:
  for (plVar17 = (long *)param_1[0xb]; plVar17 != plVar11; plVar17 = plVar17 + 1) {
    local_90[0] = *param_2;
    local_90[1] = 0;
    local_6c = 2;
    local_78 = 0x1000;
    local_80 = 0;
    uStack_7c = 0x100;
    lVar8 = FUN_02c1c384(auStack_68,*(undefined8 *)(local_90[0] + 8),local_90,&local_6c,&local_78,
                         &uStack_7c,&local_80,local_90 + 1);
    if (lVar8 != 0) {
      piVar1 = (int *)(lVar8 + 0x50);
      do {
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar16 = (long *)*plVar17;
    *plVar17 = 0;
    if (plVar16 != (long *)0x0) {
      plVar15 = plVar16 + 10;
      do {
        iVar7 = (int)*plVar15 + -1;
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *(int *)plVar15 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar16 + 0x10))();
      }
    }
    *plVar17 = lVar8;
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return;
}


