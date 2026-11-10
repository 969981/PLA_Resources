/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d87708; name: FUN_01d87708
 */


/* WARNING: Removing unreachable block (ram,0x01d87b04) */

void FUN_01d87708(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  
  plVar19 = (long *)*param_2;
  *param_2 = 0;
  lVar22 = *param_1;
  puVar12 = (undefined8 *)(**(code **)plVar19[10])(plVar19 + 10);
  puVar7 = PTR_DAT_043794b8;
  if ((*PTR_DAT_043794b0 & 1) == 0) {
    iVar11 = __cxa_guard_acquire(PTR_DAT_043794b0);
    puVar8 = PTR_DAT_043794c8;
    if (iVar11 != 0) {
      if ((*PTR_DAT_043794c0 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(PTR_DAT_043794c0);
        puVar9 = PTR_DAT_043794d8;
        if (iVar11 != 0) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar11 != 0)) {
            uVar15 = FUN_0087f8f0();
            *(undefined8 *)puVar9 = uVar15;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar8 = puVar9;
          __cxa_guard_release(PTR_DAT_043794c0);
        }
      }
      *(undefined **)puVar7 = puVar8;
      __cxa_guard_release(PTR_DAT_043794b0);
    }
  }
  if (puVar12 != (undefined8 *)0x0) {
LAB_01d87764:
    if (puVar12 != (undefined8 *)puVar7) goto LAB_01d87998;
    plVar16 = plVar19 + 0x21;
    lVar20 = *plVar16;
    lVar13 = nn::os::GetCurrentThread();
    if (lVar13 == lVar20) {
      bVar6 = false;
    }
    else {
      lVar13 = nn::os::GetCurrentThread();
      do {
        if (*plVar16 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)((long)plVar19 + 0xfc));
            while (*plVar16 == 0) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar6) {
                *plVar16 = lVar13;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_01d877c8;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar6) {
          *plVar16 = lVar13;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_01d877c8:
      bVar6 = true;
    }
    lVar13 = nn::os::GetCurrentThread();
    plVar1 = plVar19 + 0x24;
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar19 + 0x114));
          while (*plVar1 == 0) {
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar10) {
              *plVar1 = lVar13;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_01d87814;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = lVar13;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_01d87814:
    plVar21 = (long *)plVar19[0x34];
    plVar3 = (long *)plVar19[0x35];
    if (plVar21 == plVar3) {
LAB_01d87820:
      plVar21 = (long *)plVar19[0x2d];
      plVar3 = (long *)plVar19[0x2e];
      if (plVar21 == plVar3) {
LAB_01d8782c:
        lVar13 = 0;
      }
      else {
        do {
          uVar14 = FUN_01d87c6c(plVar21);
          if ((uVar14 & 1) != 0) goto LAB_01d87a54;
          plVar21 = plVar21 + 1;
        } while (plVar3 != plVar21);
        plVar21 = plVar3;
LAB_01d87a54:
        if (plVar21 == (long *)plVar19[0x2e]) goto LAB_01d8782c;
        lVar13 = 0;
        if (*plVar21 != 0) {
          lVar13 = *plVar21 + -0x48;
        }
      }
      bVar10 = lVar13 == 0;
    }
    else {
      do {
        uVar14 = FUN_01d87c6c(plVar21);
        if ((uVar14 & 1) != 0) goto LAB_01d87a14;
        plVar21 = plVar21 + 1;
      } while (plVar3 != plVar21);
      plVar21 = plVar3;
LAB_01d87a14:
      if ((plVar21 == (long *)plVar19[0x35]) || (*plVar21 == 0)) goto LAB_01d87820;
      bVar10 = false;
      lVar13 = *plVar21 + -0x48;
    }
    *plVar1 = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar19 + 0x114));
    if (bVar6) {
      *plVar16 = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar19 + 0xfc));
    }
    if (bVar10) {
      lVar13 = nn::os::GetCurrentThread();
      plVar16 = plVar19 + 0x28;
      do {
        lVar20 = *plVar16;
        lVar4 = plVar19[0x29];
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar6) {
          *plVar16 = lVar20;
          plVar19[0x29] = lVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        while ((lVar20 != 0 && (lVar13 != lVar20))) {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar19 + 0x134));
          do {
            lVar20 = *plVar16;
            lVar4 = plVar19[0x29];
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar6) {
              *plVar16 = lVar20;
              plVar19[0x29] = lVar4;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        while( true ) {
          if (*plVar16 != lVar20 || plVar19[0x29] != lVar4) break;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar6) {
            *plVar16 = lVar20;
            *(long *)((long)plVar19 + 0x144) = lVar4 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            plVar1 = plVar19 + 0x2c;
            lVar20 = *plVar1;
            lVar13 = nn::os::GetCurrentThread();
            if (lVar13 == lVar20) {
              bVar6 = false;
              goto LAB_01d87930;
            }
            lVar13 = nn::os::GetCurrentThread();
            goto LAB_01d878f0;
          }
        }
        ClearExclusiveLocal();
        lVar20 = *plVar16;
        lVar4 = plVar19[0x29];
      } while( true );
    }
    goto LAB_01d87b4c;
  }
LAB_01d87bc0:
  if (plVar19 != (long *)0x0) {
    lVar22 = plVar19[0xb];
    piVar2 = (int *)(lVar22 + 0xc);
    do {
      iVar11 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01d87c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar19 + 0x20))(plVar19);
      return;
    }
  }
  return;
LAB_01d87998:
  puVar12 = (undefined8 *)*puVar12;
  if (puVar12 == (undefined8 *)0x0) goto LAB_01d87bc0;
  goto LAB_01d87764;
  while( true ) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar13;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') break;
LAB_01d878f0:
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)plVar19 + 0x154));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_01d8792c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_01d8792c:
  bVar6 = true;
LAB_01d87930:
  plVar21 = (long *)plVar19[0x3b];
  plVar3 = (long *)plVar19[0x3c];
  if (plVar21 != plVar3) {
    do {
      uVar14 = FUN_01d87c6c(plVar21);
      if ((uVar14 & 1) != 0) goto LAB_01d87a94;
      plVar21 = plVar21 + 1;
    } while (plVar3 != plVar21);
    plVar21 = plVar3;
LAB_01d87a94:
    if (plVar21 != (long *)plVar19[0x3c]) {
      lVar13 = 0;
      if (*plVar21 != 0) {
        lVar13 = *plVar21 + -0x48;
      }
      goto joined_r0x01d87ab0;
    }
  }
  lVar13 = 0;
joined_r0x01d87ab0:
  if (bVar6) {
    *plVar1 = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar19 + 0x154));
  }
  do {
    lVar20 = *plVar16;
    lVar4 = plVar19[0x29];
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar6) {
      *plVar16 = lVar20;
      plVar19[0x29] = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  while( true ) {
    lVar17 = *plVar16;
    lVar18 = plVar19[0x29];
    if (lVar17 != lVar20 || lVar18 != lVar4) break;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar6) {
      *plVar16 = lVar20;
      *(long *)((long)plVar19 + 0x144) = lVar4 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_01d87b44;
  }
  ClearExclusiveLocal();
  do {
    do {
      lVar20 = *plVar16;
      if (lVar20 != lVar17 || plVar19[0x29] != lVar18) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto LAB_01d87b10;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *plVar16 = lVar17;
        *(long *)((long)plVar19 + 0x144) = lVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar6 = true;
LAB_01d87b10:
    lVar17 = lVar20;
    lVar18 = plVar19[0x29];
  } while (!bVar6);
LAB_01d87b44:
  nn::os::SignalLightEvent((LightEventType *)((long)plVar19 + 0x134));
LAB_01d87b4c:
  if (lVar13 != 0) {
    lVar20 = *(long *)(lVar13 + 0x58);
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar15;
    }
    piVar2 = (int *)(lVar20 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar16 = *(long **)(lVar22 + 0x800);
  *(long *)(lVar22 + 0x800) = lVar13;
  if (plVar16 != (long *)0x0) {
    lVar13 = plVar16[0xb];
    piVar2 = (int *)(lVar13 + 0xc);
    do {
      iVar11 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))();
    }
    lVar13 = *(long *)(lVar22 + 0x800);
  }
  if (lVar13 != 0) {
    *(undefined1 *)(lVar22 + 0x8d5) = 1;
  }
  goto LAB_01d87bc0;
}


