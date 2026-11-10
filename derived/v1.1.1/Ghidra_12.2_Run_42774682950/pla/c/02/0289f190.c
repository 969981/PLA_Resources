/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0289f190; name: FUN_0289f190
 */


void FUN_0289f190(long param_1,long *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *local_48;
  
  lVar5 = nn::os::GetCurrentThread();
  plVar11 = (long *)(param_1 + 0x210);
  do {
    if (*plVar11 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x204));
        while (*plVar11 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0289f1f8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_0289f1f8:
  lVar5 = nn::os::GetCurrentThread();
  plVar11 = (long *)(param_1 + 0x228);
  do {
    if (*plVar11 != 0) {
      bVar3 = false;
      ClearExclusiveLocal();
      goto LAB_0289f220;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  bVar3 = true;
LAB_0289f220:
  plVar11 = *(long **)(param_1 + 0x250);
  plVar12 = *(long **)(param_1 + 600);
  if (plVar11 == plVar12) {
LAB_0289f254:
    if (plVar11 == plVar12) goto LAB_0289f2c0;
    plVar11 = (long *)*plVar11;
  }
  else {
    do {
      if (*(long *)(*plVar11 + 0x158) == *param_2) goto LAB_0289f254;
      plVar11 = plVar11 + 1;
    } while (plVar12 != plVar11);
LAB_0289f2c0:
    plVar11 = (long *)0x0;
  }
  if (bVar3) {
    if (plVar11 != (long *)0x0) {
      plVar12 = plVar11 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *(int *)plVar12 = (int)*plVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      FUN_028aa4cc(*(undefined8 *)(param_1 + 0x248),plVar11 + 0x2b);
      plVar8 = *(long **)(param_1 + 0x250);
      plVar14 = *(long **)(param_1 + 600);
      if (plVar8 != plVar14) {
        lVar5 = *(long *)(*plVar8 + 0x158);
        while (lVar5 != plVar11[0x2b]) {
          plVar8 = plVar8 + 1;
          if (plVar14 == plVar8) goto LAB_0289f4e8;
          lVar5 = *(long *)(*plVar8 + 0x158);
        }
      }
      if ((plVar8 != plVar14) && (plVar6 = plVar8 + 1, plVar16 = plVar8, plVar6 != plVar14)) {
        do {
          plVar8 = plVar16;
          if (*(long *)(*plVar6 + 0x158) != plVar11[0x2b]) {
            plVar8 = (long *)*plVar16;
            *plVar16 = 0;
            if (plVar8 != (long *)0x0) {
              plVar17 = plVar8 + 10;
              do {
                iVar4 = (int)*plVar17 + -1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar3) {
                  *(int *)plVar17 = iVar4;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar4 == 0) {
                (**(code **)(*plVar8 + 0x10))();
              }
            }
            lVar5 = *plVar6;
            *plVar6 = 0;
            plVar8 = plVar16 + 1;
            *plVar16 = lVar5;
          }
          plVar6 = plVar6 + 1;
          plVar16 = plVar8;
        } while (plVar6 != plVar14);
        plVar14 = *(long **)(param_1 + 600);
      }
      if ((long)plVar14 - (long)plVar8 != 0) {
        plVar6 = (long *)((long)plVar8 + ((long)plVar14 - (long)plVar8));
        plVar16 = plVar8;
        if (plVar6 != plVar14) {
          do {
            plVar8 = (long *)*plVar16;
            *plVar16 = 0;
            if (plVar8 != (long *)0x0) {
              plVar17 = plVar8 + 10;
              do {
                iVar4 = (int)*plVar17 + -1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar3) {
                  *(int *)plVar17 = iVar4;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar4 == 0) {
                (**(code **)(*plVar8 + 0x10))();
              }
            }
            lVar5 = *plVar6;
            plVar17 = plVar6 + 1;
            *plVar6 = 0;
            plVar8 = plVar16 + 1;
            *plVar16 = lVar5;
            plVar16 = plVar8;
            plVar6 = plVar17;
          } while (plVar17 != plVar14);
          plVar14 = *(long **)(param_1 + 600);
        }
        while (plVar14 != plVar8) {
          plVar14 = plVar14 + -1;
          plVar6 = (long *)*plVar14;
          if (plVar6 != (long *)0x0) {
            plVar16 = plVar6 + 10;
            do {
              iVar4 = (int)*plVar16 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar3) {
                *(int *)plVar16 = iVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar4 == 0) {
              (**(code **)(*plVar6 + 0x10))();
            }
          }
        }
        *(long **)(param_1 + 600) = plVar8;
      }
LAB_0289f4e8:
      do {
        iVar4 = (int)*plVar12 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *(int *)plVar12 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    *(undefined8 *)(param_1 + 0x228) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x21c));
    goto LAB_0289f628;
  }
  *(undefined1 *)(param_1 + 0x306) = 1;
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar7 = *(ulong *)(param_1 + 0x2c8);
  puVar1 = (undefined8 *)(param_1 + 0x2d8);
  local_48 = plVar11;
  if (uVar7 < *(ulong *)(param_1 + 0x2d0)) {
    FUN_028a21b4(puVar1,uVar7,&local_48);
    *(long *)(param_1 + 0x2c8) = *(long *)(param_1 + 0x2c8) + 8;
  }
  else {
    uVar13 = *(ulong *)(param_1 + 0x2e0);
    lVar5 = (long)(uVar7 - *(long *)(param_1 + 0x2c0)) >> 3;
    uVar7 = lVar5 + 1;
    if (0x7ffffffffffffffe < uVar13) {
      uVar13 = 0x7fffffffffffffff;
    }
    if (uVar13 < uVar7) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar9 = *(ulong *)(param_1 + 0x2d0) - *(long *)(param_1 + 0x2c0);
    uVar10 = lVar9 >> 2;
    if (uVar7 <= uVar10) {
      uVar7 = uVar10;
    }
    if ((ulong)(lVar9 >> 3) < uVar13 >> 1) {
      uVar13 = uVar7;
    }
    if (uVar13 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar13 << 3,8);
      if (lVar9 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
    }
    lVar15 = lVar9 + lVar5 * 8;
    FUN_028a21b4(puVar1,lVar15,&local_48);
    plVar12 = *(long **)(param_1 + 0x2c0);
    lVar5 = lVar15 + 8;
    plVar11 = *(long **)(param_1 + 0x2c8);
    if (plVar11 == plVar12) {
      plVar11 = plVar12;
    }
    else {
      do {
        lVar15 = lVar15 + -8;
        plVar11 = plVar11 + -1;
        FUN_028a20cc(puVar1,lVar15,plVar11);
      } while (plVar12 != plVar11);
      plVar12 = *(long **)(param_1 + 0x2c0);
      plVar11 = *(long **)(param_1 + 0x2c8);
    }
    *(long *)(param_1 + 0x2c0) = lVar15;
    lVar15 = *(long *)(param_1 + 0x2d0);
    *(long *)(param_1 + 0x2c8) = lVar5;
    *(ulong *)(param_1 + 0x2d0) = lVar9 + uVar13 * 8;
    while (plVar11 != plVar12) {
      plVar11 = plVar11 + -1;
      plVar8 = (long *)*plVar11;
      if (plVar8 != (long *)0x0) {
        plVar14 = plVar8 + 10;
        do {
          iVar4 = (int)*plVar14 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *(int *)plVar14 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
      }
    }
    if (plVar12 != (long *)0x0) {
      plVar11 = (long *)*puVar1;
      lVar15 = lVar15 - (long)plVar12;
      uVar7 = (**(code **)(*plVar11 + 0xc0))(plVar11);
      if ((uVar7 & 1) != 0) {
        lVar5 = tpidr_el0;
        if (*(char *)(lVar5 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar5 + 0x38d488) = 1;
          *(undefined8 *)(lVar5 + 0x38d478) = 0;
          *(undefined8 *)(lVar5 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar5 + 0x38d480)) {
          FUN_02bcc824(plVar11,plVar12,lVar15,8);
          goto joined_r0x0289f60c;
        }
      }
      (**(code **)(*plVar11 + 0x18))(plVar11,plVar12,lVar15,8);
    }
  }
joined_r0x0289f60c:
  if (local_48 != (long *)0x0) {
    plVar11 = local_48 + 10;
    do {
      iVar4 = (int)*plVar11 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *(int *)plVar11 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
LAB_0289f628:
  *(undefined8 *)(param_1 + 0x210) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x204));
  return;
}


