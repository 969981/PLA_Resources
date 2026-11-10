/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c1f158; name: FUN_02c1f158
 */


void FUN_02c1f158(long *param_1)

{
  int *piVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *local_70;
  long *local_68;
  
  puVar3 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar3 = PTR_DAT_04379528;
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar7 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    if (*(long *)(lVar7 + 0x80) != 0) {
      lVar10 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_LAB_04288e30;
  param_1[1] = lVar10;
  param_1[9] = (long)&PTR_LAB_04288e68;
  plVar19 = param_1 + 0xb;
  *plVar19 = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  lVar10 = DAT_043f1798;
  lVar7 = tpidr_el0;
  if ((((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) ||
      (lVar8 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), lVar8 == 0)) &&
     (lVar8 = *(long *)(lVar7 + 0x20), *(long *)(lVar7 + 0x20) == 0)) {
    *(long *)(lVar7 + 0x20) = DAT_043f1798;
    lVar8 = lVar10;
  }
  param_1[0xf] = lVar8;
  param_1[0x10] = 0x1fffffffffffffff;
  plVar15 = (long *)param_1[1];
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_02c1f8b8:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar15;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
  lVar8 = (**(code **)(*plVar15 + 0x10))(plVar15,0xe0,0x10);
  if (lVar8 == 0) {
    (**(code **)(*plVar15 + 0xb8))(plVar15);
  }
  FUN_02c1aba4(lVar8,&DAT_043ef568);
  *(long **)(lVar8 + 8) = plVar15;
  *(long *)(lVar8 + 0x10) = lVar8;
  *(undefined8 *)(lVar8 + 0x18) = 0xe0;
  *(undefined8 *)(lVar8 + 0x20) = 0x10;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x50);
    do {
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar15 = (long *)*plVar19;
  *plVar19 = 0;
  if (plVar15 != (long *)0x0) {
    plVar16 = plVar15 + 10;
    do {
      iVar6 = (int)*plVar16 + -1;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *(int *)plVar16 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar15 + 0x10))();
    }
  }
  param_1[0xb] = lVar8;
  lVar10 = param_1[0xc];
  plVar15 = (long *)param_1[0xd];
  uVar13 = (long)plVar15 - lVar10 >> 3;
  if (uVar13 < 9) {
    plVar16 = param_1 + 0xf;
    if ((ulong)(param_1[0xe] - (long)plVar15 >> 3) < 9 - uVar13) {
      uVar12 = param_1[0x10];
      if (0x7ffffffffffffffe < uVar12) {
        uVar12 = 0x7fffffffffffffff;
      }
      if (uVar12 < 9) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar10 = param_1[0xe] - lVar10;
      uVar11 = lVar10 >> 2;
      if (uVar11 < 10) {
        uVar11 = 9;
      }
      if ((ulong)(lVar10 >> 3) < uVar12 >> 1) {
        uVar12 = uVar11;
      }
      lVar10 = (**(code **)(*(long *)*plVar16 + 0x10))((long *)*plVar16,uVar12 << 3,8);
      if (lVar10 == 0) {
        (**(code **)(*(long *)*plVar16 + 0xb8))();
      }
      plVar18 = (long *)(lVar10 + uVar13 * 8);
      lVar8 = uVar13 - 9;
      plVar15 = plVar18;
      do {
        FUN_02c20008(plVar16,plVar15);
        plVar15 = plVar15 + 1;
        bVar5 = lVar8 != -1;
        lVar8 = lVar8 + 1;
      } while (bVar5);
      plVar14 = (long *)param_1[0xc];
      plVar17 = (long *)param_1[0xd];
      if (plVar17 == plVar14) {
        plVar17 = plVar14;
      }
      else {
        do {
          lVar8 = *plVar16;
          if (((*PTR_DAT_04379520 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), iVar6 != 0)) {
            FUN_008a62a4(puVar3);
            FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
          lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
          if (lVar9 != 0) {
            if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_02c1f8b8;
            *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar8;
            *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
          }
          plVar17 = plVar17 + -1;
          lVar8 = *plVar17;
          plVar18 = plVar18 + -1;
          *plVar18 = lVar8;
          if (lVar8 != 0) {
            piVar1 = (int *)(lVar8 + 0x50);
            do {
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = *piVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (lVar9 != 0) {
            *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
          }
        } while (plVar17 != plVar14);
        plVar14 = (long *)param_1[0xd];
        plVar17 = (long *)param_1[0xc];
      }
      lVar8 = param_1[0xe];
      param_1[0xc] = (long)plVar18;
      param_1[0xd] = (long)plVar15;
      param_1[0xe] = lVar10 + uVar12 * 8;
LAB_02c1f564:
      if (plVar14 != plVar17) {
        while( true ) {
          plVar14 = plVar14 + -1;
          plVar15 = (long *)*plVar14;
          if (plVar15 == (long *)0x0) break;
          plVar18 = plVar15 + 10;
          do {
            iVar6 = (int)*plVar18 + -1;
            cVar2 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar5) {
              *(int *)plVar18 = iVar6;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar6 != 0) break;
          (**(code **)(*plVar15 + 0x10))();
          if (plVar14 == plVar17) goto LAB_02c1f5a0;
        }
        goto LAB_02c1f564;
      }
LAB_02c1f5a0:
      if (plVar17 != (long *)0x0) {
        plVar16 = (long *)*plVar16;
        uVar13 = (**(code **)(*plVar16 + 0xc0))(plVar16);
        if ((uVar13 & 1) != 0) {
          if (*(char *)(lVar7 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar7 + 0x38d488) = 1;
            *(undefined8 *)(lVar7 + 0x38d478) = 0;
            *(undefined8 *)(lVar7 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar7 + 0x38d480)) {
            FUN_02bcc824(plVar16,plVar17,lVar8 - (long)plVar17,8);
            goto LAB_02c1f620;
          }
        }
        (**(code **)(*plVar16 + 0x18))(plVar16,plVar17,lVar8 - (long)plVar17,8);
      }
    }
    else {
      lVar7 = uVar13 - 9;
      do {
        FUN_02c20008(plVar16,plVar15);
        plVar15 = (long *)(param_1[0xd] + 8);
        bVar5 = lVar7 != -1;
        lVar7 = lVar7 + 1;
        param_1[0xd] = (long)plVar15;
      } while (bVar5);
    }
  }
  else if ((long)plVar15 - lVar10 != 0x48) {
    while ((long *)(lVar10 + 0x48) != plVar15) {
      plVar15 = plVar15 + -1;
      plVar16 = (long *)*plVar15;
      if (plVar16 != (long *)0x0) {
        plVar18 = plVar16 + 10;
        do {
          iVar6 = (int)*plVar18 + -1;
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *(int *)plVar18 = iVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar16 + 0x10))();
        }
      }
    }
    param_1[0xd] = lVar10 + 0x48;
  }
LAB_02c1f620:
  lVar7 = 0;
  do {
    local_70 = *(long **)(*(long *)(*plVar19 + 0x58) + lVar7 * 8);
    if (local_70 != (long *)0x0) {
      plVar15 = local_70 + 10;
      do {
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *(int *)plVar15 = (int)*plVar15 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    (**(code **)(*(long *)(DAT_043ef590 + 0x58) + 0x40))
              (&local_68,(long *)(DAT_043ef590 + 0x58),&local_70);
    if (local_70 != (long *)0x0) {
      plVar15 = local_70 + 10;
      do {
        iVar6 = (int)*plVar15 + -1;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *(int *)plVar15 = iVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*local_70 + 0x10))();
      }
    }
    lVar10 = FUN_02b4d030(&local_70,param_1[1],&local_68);
    if (lVar10 != 0) {
      piVar1 = (int *)(lVar10 + 0x50);
      do {
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar8 = param_1[0xc];
    plVar15 = *(long **)(lVar8 + lVar7 * 8);
    *(undefined8 *)(lVar8 + lVar7 * 8) = 0;
    if (plVar15 != (long *)0x0) {
      plVar16 = plVar15 + 10;
      do {
        iVar6 = (int)*plVar16 + -1;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *(int *)plVar16 = iVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar15 + 0x10))();
      }
    }
    *(long *)(lVar8 + lVar7 * 8) = lVar10;
    if (local_68 != (long *)0x0) {
      plVar15 = local_68 + 10;
      do {
        iVar6 = (int)*plVar15 + -1;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *(int *)plVar15 = iVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*local_68 + 0x10))();
      }
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 9);
  return;
}


