/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cd286c; name: FUN_01cd286c
 */


void FUN_01cd286c(long *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  bool bVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *local_70;
  long *local_68;
  
  plVar6 = (long *)FUN_00b13c20(*param_2 + 0xf0,&local_68);
  if (plVar6 == (long *)0x0) {
    return;
  }
  lVar16 = plVar6[0xb];
  local_68 = plVar6;
  if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) {
LAB_01cd2de8:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar16 + 0x10) == 0) {
    uVar7 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
    *(undefined8 *)(lVar16 + 0x10) = uVar7;
  }
  piVar1 = (int *)(lVar16 + 0xc);
  do {
    cVar3 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar11) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar10 = param_1[1];
  plVar17 = param_1 + 3;
  if (uVar10 < (ulong)param_1[2]) {
    FUN_01cd83fc(plVar17,uVar10,&local_68);
    param_1[1] = param_1[1] + 8;
  }
  else {
    uVar14 = param_1[4];
    lVar16 = (long)(uVar10 - *param_1) >> 3;
    uVar10 = lVar16 + 1;
    if (0x7ffffffffffffffe < uVar14) {
      uVar14 = 0x7fffffffffffffff;
    }
    if (uVar14 < uVar10) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar12 = param_1[2] - *param_1;
    if ((ulong)(lVar12 >> 3) < uVar14 >> 1) {
      uVar13 = lVar12 >> 2;
      uVar14 = uVar10;
      if (uVar10 <= uVar13) {
        uVar14 = uVar13;
      }
    }
    if (uVar14 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = (**(code **)(*(long *)*plVar17 + 0x10))((long *)*plVar17,uVar14 << 3,8);
      if (lVar12 == 0) {
        (**(code **)(*(long *)*plVar17 + 0xb8))();
      }
    }
    plVar8 = (long *)(lVar12 + lVar16 * 8);
    FUN_01cd83fc(plVar17,plVar8,&local_68);
    plVar18 = (long *)*param_1;
    plVar20 = (long *)param_1[1];
    plVar19 = plVar8;
    if (plVar20 == plVar18) {
      plVar20 = plVar18;
    }
    else {
      do {
        lVar16 = *plVar17;
        if ((*PTR_DAT_04379520 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(PTR_DAT_04379520);
          puVar4 = PTR_DAT_04379528;
          if (iVar5 != 0) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
        }
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar9 != 0) {
          if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar16;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
        }
        plVar20 = plVar20 + -1;
        lVar16 = *plVar20;
        plVar19 = plVar19 + -1;
        *plVar19 = lVar16;
        if (lVar16 != 0) {
          lVar16 = *(long *)(lVar16 + 0x58);
          if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_01cd2de8;
          if (*(long *)(lVar16 + 0x10) == 0) {
            uVar7 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
            *(undefined8 *)(lVar16 + 0x10) = uVar7;
          }
          piVar1 = (int *)(lVar16 + 0xc);
          do {
            cVar3 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar11) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (lVar9 != 0) {
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
        }
      } while (plVar20 != plVar18);
      plVar20 = (long *)*param_1;
      plVar18 = (long *)param_1[1];
    }
    lVar16 = param_1[2];
    *param_1 = (long)plVar19;
    param_1[1] = (long)(plVar8 + 1);
    param_1[2] = lVar12 + uVar14 * 8;
    if (plVar18 != plVar20) {
      plVar18 = plVar18 + -1;
      plVar8 = (long *)*plVar18;
      if (plVar8 != (long *)0x0) {
        lVar12 = plVar8[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar5 = *piVar1;
          cVar3 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = iVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 + -1 == 0) goto LAB_01cd29f0;
      }
LAB_01cd29c4:
      if (plVar18 != plVar20) {
        while( true ) {
          plVar18 = plVar18 + -1;
          plVar8 = (long *)*plVar18;
          if (plVar8 == (long *)0x0) break;
          lVar12 = plVar8[0xb];
          piVar1 = (int *)(lVar12 + 0xc);
          do {
            iVar5 = *piVar1;
            cVar3 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar11) {
              *piVar1 = iVar5 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 + -1 != 0) break;
LAB_01cd29f0:
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*plVar8 + 0x20))();
          if (plVar18 == plVar20) goto LAB_01cd2a08;
        }
        goto LAB_01cd29c4;
      }
    }
LAB_01cd2a08:
    if (plVar20 != (long *)0x0) {
      plVar17 = (long *)*plVar17;
      uVar10 = (**(code **)(*plVar17 + 0xc0))(plVar17);
      if ((uVar10 & 1) != 0) {
        lVar12 = tpidr_el0;
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar12 + 0x38d480)) {
          FUN_02bcc824(plVar17,plVar20,lVar16 - (long)plVar20,8);
          goto joined_r0x01cd2cdc;
        }
      }
      (**(code **)(*plVar17 + 0x18))(plVar17,plVar20,lVar16 - (long)plVar20,8);
    }
  }
joined_r0x01cd2cdc:
  if (local_68 != (long *)0x0) {
    lVar16 = local_68[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar11) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  plVar17 = plVar6 + 0x44;
  lVar12 = *plVar17;
  lVar16 = nn::os::GetCurrentThread();
  if (lVar16 == lVar12) {
    plVar8 = (long *)0x0;
    bVar11 = true;
  }
  else {
    plVar8 = plVar6 + 0x42;
    lVar16 = nn::os::GetCurrentThread();
    do {
      if (*plVar17 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar6 + 0x214));
          while (*plVar17 == 0) {
            cVar3 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar11) {
              *plVar17 = lVar16;
              cVar3 = ExclusiveMonitorsStatus();
            }
            bVar11 = false;
            if (cVar3 == '\0') goto LAB_01cd2a8c;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar11) {
        *plVar17 = lVar16;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar11 = false;
  }
LAB_01cd2a8c:
  lVar16 = plVar6[0x46];
  lVar12 = plVar6[0x45];
  if (!bVar11) {
    plVar8[2] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar8 + 4));
  }
  iVar5 = (int)((ulong)(lVar16 - lVar12) >> 4);
  if (iVar5 != 0) {
    iVar15 = 0;
    do {
      FUN_00d81884(&local_68,plVar6,iVar15);
      plVar17 = local_68;
      FUN_009c69bc(&local_70,local_68);
      FUN_01cd286c(param_1,&local_70);
      if (local_70 != (long *)0x0) {
        lVar16 = local_70[0xb];
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*local_70 + 0x20))();
        }
        plVar17 = local_68;
      }
      if (plVar17 != (long *)0x0) {
        lVar16 = plVar17[0xb];
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*plVar17 + 0x20))(plVar17);
        }
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 != iVar5);
  }
  return;
}


