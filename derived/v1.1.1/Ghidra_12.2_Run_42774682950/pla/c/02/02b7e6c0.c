/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b7e6c0; name: FUN_02b7e6c0
 */


void FUN_02b7e6c0(long param_1,char *param_2,char *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  char *pcVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  char *pcVar24;
  long lVar25;
  undefined1 auStack_78 [24];
  
  if ((*param_2 != '\0') && (*param_3 != '\0')) {
    lVar8 = *(long *)(*(long *)(param_1 + 0x6030) + (ulong)*(uint *)(param_3 + 4) * 0x20);
    lVar7 = **(long **)(param_1 + 0x60a0);
    if (*(ulong *)(param_2 + 8) < (ulong)((*(long **)(param_1 + 0x60a0))[1] - lVar7 >> 5)) {
      uVar6 = *(undefined8 *)(lVar7 + *(ulong *)(param_2 + 8) * 0x20);
    }
    else {
      uVar6 = 0;
    }
    (*DAT_043f0210)(uVar6,lVar8,*(undefined4 *)(lVar8 + 400));
    lVar7 = nn::os::GetCurrentThread();
    plVar1 = (long *)(param_1 + 0x62c0);
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x62b4));
          while (*plVar1 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar7;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_02b7e790;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_02b7e790:
    *(uint *)(param_1 + 0x6370) = (*(int *)(param_1 + 0x6370) + 1U) % 3;
    *(undefined8 *)(param_1 + 0x62c0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x62b4));
    lVar7 = param_1 + (ulong)((*(int *)(param_1 + 0x6370) + 1U) % 3) * 0x38;
    pcVar24 = *(char **)(lVar7 + 0x62c8);
    pcVar17 = *(char **)(lVar7 + 0x62d0);
    if (pcVar24 != pcVar17) {
      cVar2 = *pcVar24;
joined_r0x02b7e818:
      if (cVar2 != '\0') {
        lVar25 = *(long *)(param_1 + 0x6100);
        lVar8 = nn::os::GetCurrentThread();
        plVar1 = (long *)(lVar25 + 0x80);
        do {
          if (*plVar1 != 0 || *(long *)(lVar25 + 0x88) != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(lVar25 + 0x74));
              while (*plVar1 == 0 && *(long *)(lVar25 + 0x88) == 0) {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *plVar1 = lVar8;
                  *(undefined8 *)(lVar25 + 0x88) = 0;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 == '\0') goto LAB_02b7e89c;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8;
            *(undefined8 *)(lVar25 + 0x88) = 0;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
LAB_02b7e89c:
        uVar10 = *(ulong *)(lVar25 + 0x10);
        if (uVar10 != 0) {
          uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
          uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
          uVar9 = *(ulong *)(pcVar24 + 8);
          uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar11 < 2) {
            uVar14 = uVar10 - 1 & uVar9;
          }
          else {
            uVar14 = uVar9;
            if (uVar10 <= uVar9) {
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar9 / uVar10;
              }
              uVar14 = uVar9 - uVar14 * uVar10;
            }
          }
          lVar8 = *(long *)(lVar25 + 8);
          puVar12 = *(undefined8 **)(lVar8 + uVar14 * 8);
          if ((puVar12 != (undefined8 *)0x0) && (plVar18 = (long *)*puVar12, plVar18 != (long *)0x0)
             ) {
            uVar13 = uVar10 - 1;
            if (uVar11 < 2) {
              do {
                if (plVar18[1] == uVar9) {
                  if (plVar18[2] == uVar9) goto LAB_02b7e98c;
                }
                else if ((plVar18[1] & uVar13) != uVar14) break;
                plVar18 = (long *)*plVar18;
              } while (plVar18 != (long *)0x0);
            }
            else {
              do {
                uVar15 = plVar18[1];
                if (uVar15 == uVar9) {
                  if (plVar18[2] == uVar9) goto LAB_02b7e98c;
                }
                else {
                  if (uVar10 <= uVar15) {
                    uVar5 = 0;
                    if (uVar10 != 0) {
                      uVar5 = uVar15 / uVar10;
                    }
                    uVar15 = uVar15 - uVar5 * uVar10;
                  }
                  if (uVar15 != uVar14) break;
                }
                plVar18 = (long *)*plVar18;
              } while (plVar18 != (long *)0x0);
            }
          }
        }
        goto LAB_02b7eda0;
      }
      goto LAB_02b7e834;
    }
    *(undefined8 *)(lVar7 + 0x62d0) = pcVar24;
  }
  return;
LAB_02b7e98c:
  if (uVar11 < 2) {
    uVar9 = uVar13 & uVar9;
  }
  else if (uVar10 <= uVar9) {
    uVar14 = 0;
    if (uVar10 != 0) {
      uVar14 = uVar9 / uVar10;
    }
    uVar9 = uVar9 - uVar14 * uVar10;
  }
  plVar20 = *(long **)(lVar8 + uVar9 * 8);
  do {
    plVar16 = plVar20;
    plVar20 = (long *)*plVar16;
  } while ((long *)*plVar16 != plVar18);
  if (plVar16 == (long *)(lVar25 + 0x38)) {
LAB_02b7ea00:
    if (*plVar18 != 0) {
      uVar14 = *(ulong *)(*plVar18 + 8);
      if (uVar11 < 2) {
        uVar14 = uVar14 & uVar13;
      }
      else if (uVar10 <= uVar14) {
        uVar15 = 0;
        if (uVar10 != 0) {
          uVar15 = uVar14 / uVar10;
        }
        uVar14 = uVar14 - uVar15 * uVar10;
      }
      if (uVar14 == uVar9) goto LAB_02b7ea40;
    }
    *(undefined8 *)(lVar8 + uVar9 * 8) = 0;
  }
  else {
    uVar14 = plVar16[1];
    if (uVar11 < 2) {
      uVar14 = uVar14 & uVar13;
    }
    else if (uVar10 <= uVar14) {
      uVar15 = 0;
      if (uVar10 != 0) {
        uVar15 = uVar14 / uVar10;
      }
      uVar14 = uVar14 - uVar15 * uVar10;
    }
    if (uVar14 != uVar9) goto LAB_02b7ea00;
  }
LAB_02b7ea40:
  lVar8 = *plVar18;
  if (lVar8 != 0) {
    uVar14 = *(ulong *)(lVar8 + 8);
    if (uVar11 < 2) {
      uVar14 = uVar14 & uVar13;
    }
    else if (uVar10 <= uVar14) {
      uVar11 = 0;
      if (uVar10 != 0) {
        uVar11 = uVar14 / uVar10;
      }
      uVar14 = uVar14 - uVar11 * uVar10;
    }
    if (uVar14 != uVar9) {
      *(long **)(*(long *)(lVar25 + 8) + uVar14 * 8) = plVar16;
      lVar8 = *plVar18;
    }
  }
  *plVar16 = lVar8;
  *plVar18 = 0;
  *(long *)(lVar25 + 0x60) = *(long *)(lVar25 + 0x60) + -1;
  lVar19 = plVar18[3];
  plVar18[3] = 0;
  lVar8 = tpidr_el0;
  if (lVar19 != 0) {
    FUN_02bcbe58(auStack_78,0);
    if (*(char *)(lVar19 + 0x150) != '\0') {
      (*DAT_043f0b38)(lVar19);
    }
    FUN_02b8b0e8(lVar19 + 0xe0);
    lVar22 = *(long *)(lVar19 + 0xa8);
    if (lVar22 != 0) {
      lVar23 = *(long *)(lVar19 + 0xb0);
      if (*(long *)(lVar19 + 0xb0) == lVar22) {
        lVar23 = lVar22;
      }
      else {
        do {
          lVar21 = lVar23 + -0x20;
          plVar20 = *(long **)(lVar23 + -0x18);
          if (plVar20 != (long *)0x0) {
            (**(code **)(*plVar20 + 0x30))(plVar20,lVar21);
            plVar20 = *(long **)(lVar23 + -0x18);
            *(undefined8 *)(lVar23 + -0x20) = 0;
            *(undefined8 *)(lVar23 + -0x18) = 0;
            if (plVar20 != (long *)0x0) {
              plVar16 = plVar20 + 10;
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
                (**(code **)(*plVar20 + 0x10))();
              }
            }
            plVar20 = *(long **)(lVar23 + -0x18);
            *(undefined8 *)(lVar23 + -0x10) = 0xffffffffffffffff;
            *(undefined8 *)(lVar23 + -8) = 0;
            if (plVar20 != (long *)0x0) {
              plVar16 = plVar20 + 10;
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
                (**(code **)(*plVar20 + 0x10))();
              }
            }
          }
          lVar23 = lVar21;
        } while (lVar21 != lVar22);
        lVar23 = *(long *)(lVar19 + 0xa8);
      }
      plVar20 = *(long **)(lVar19 + 0xc0);
      *(long *)(lVar19 + 0xb0) = lVar22;
      lVar22 = *(long *)(lVar19 + 0xb8) - lVar23;
      uVar10 = (**(code **)(*plVar20 + 0xc0))(plVar20);
      if ((uVar10 & 1) != 0) {
        if (*(char *)(lVar8 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar8 + 0x38d488) = 1;
          *(undefined8 *)(lVar8 + 0x38d478) = 0;
          *(undefined8 *)(lVar8 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar8 + 0x38d480)) {
          FUN_02bcc824(plVar20,lVar23,lVar22,8);
          goto LAB_02b7ec18;
        }
      }
      (**(code **)(*plVar20 + 0x18))(plVar20,lVar23,lVar22,8);
    }
LAB_02b7ec18:
    plVar20 = (long *)plVar18[4];
    lVar22 = plVar18[5];
    lVar23 = plVar18[6];
    uVar10 = (**(code **)(*plVar20 + 0xc0))(plVar20);
    if ((uVar10 & 1) == 0) {
LAB_02b7ec78:
      (**(code **)(*plVar20 + 0x18))(plVar20,lVar19,lVar22,lVar23);
    }
    else {
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_02b7ec78;
      FUN_02bcc824(plVar20,lVar19,lVar22,lVar23);
    }
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar4 = *(int *)(lVar8 + 0x38d480) + -1;
    *(int *)(lVar8 + 0x38d480) = iVar4;
    if (iVar4 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar8 + 0x38d484) = 0;
    }
  }
  plVar20 = *(long **)(lVar25 + 0x40);
  uVar10 = (**(code **)(*plVar20 + 0xc0))(plVar20);
  if ((uVar10 & 1) == 0) {
LAB_02b7ed84:
    (**(code **)(*plVar20 + 0x18))(plVar20,plVar18,0x38,8);
  }
  else {
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_02b7ed84;
    FUN_02bcc824(plVar20,plVar18,0x38,8);
  }
LAB_02b7eda0:
  do {
    lVar8 = *plVar1;
    lVar19 = *(long *)(lVar25 + 0x88);
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar8;
      *(long *)(lVar25 + 0x88) = lVar19;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    if (*plVar1 != lVar8 || *(long *)(lVar25 + 0x88) != lVar19) {
      ClearExclusiveLocal();
      lVar8 = *plVar1;
      lVar19 = *(long *)(lVar25 + 0x88);
      goto LAB_02b7edd0;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      *(long *)(lVar25 + 0x84) = lVar19;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02b7e82c:
  nn::os::SignalLightEvent((LightEventType *)(lVar25 + 0x74));
LAB_02b7e834:
  pcVar24 = pcVar24 + 0x10;
  if (pcVar24 == pcVar17) {
    *(undefined8 *)(lVar7 + 0x62d0) = *(undefined8 *)(lVar7 + 0x62c8);
    return;
  }
  cVar2 = *pcVar24;
  goto joined_r0x02b7e818;
LAB_02b7edd0:
  do {
    lVar22 = *plVar1;
    if (lVar22 == lVar8 && *(long *)(lVar25 + 0x88) == lVar19) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 0;
        *(long *)(lVar25 + 0x84) = lVar19;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 != '\0') goto LAB_02b7edd0;
      bVar3 = true;
    }
    else {
      bVar3 = false;
      ClearExclusiveLocal();
    }
    lVar8 = lVar22;
    lVar19 = *(long *)(lVar25 + 0x88);
  } while (!bVar3);
  goto LAB_02b7e82c;
}


