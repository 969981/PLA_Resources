/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00acb2b8; name: FUN_00acb2b8
 */


void FUN_00acb2b8(undefined8 param_1,byte param_2)

{
  uint uVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  bool bVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  LightEventType *pLVar16;
  undefined8 uVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  long *local_68;
  
  FUN_009c69bc(&local_68);
  plVar10 = local_68;
  plVar22 = local_68 + 0x21;
  lVar21 = *plVar22;
  lVar13 = nn::os::GetCurrentThread();
  if (lVar13 == lVar21) {
    bVar7 = false;
  }
  else {
    lVar13 = nn::os::GetCurrentThread();
    do {
      if (*plVar22 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar10 + 0xfc));
          while (*plVar22 == 0) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar7) {
              *plVar22 = lVar13;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_00acb340;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar7) {
        *plVar22 = lVar13;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_00acb340:
    bVar7 = true;
  }
  lVar13 = nn::os::GetCurrentThread();
  plVar22 = plVar10 + 0x24;
  do {
    if (*plVar22 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)plVar10 + 0x114));
        while (*plVar22 == 0) {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar11) {
            *plVar22 = lVar13;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_00acb38c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar11) {
      *plVar22 = lVar13;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00acb38c:
  puVar9 = PTR_DAT_0437a6b8;
  puVar8 = PTR_DAT_0437a6b0;
  plVar22 = (long *)plVar10[0x34];
  plVar3 = (long *)plVar10[0x35];
  if (plVar22 != plVar3) {
    do {
      lVar13 = *plVar22;
      if (lVar13 != 0) {
        plVar14 = (long *)(*(code *)**(undefined8 **)(lVar13 + 8))((undefined8 *)(lVar13 + 8));
        if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
          uVar17 = FUN_009b19b4();
          *(undefined8 *)puVar9 = uVar17;
          __cxa_guard_release(puVar8);
        }
        for (; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
          if (plVar14 == (long *)puVar9) {
            lVar13 = *(long *)(lVar13 + 0x1b8);
            if (lVar13 != 0) {
              plVar14 = *(long **)(lVar13 + 0x90);
              plVar15 = *(long **)(lVar13 + 0x98);
              if (plVar14 != plVar15) {
                uVar20 = (long)plVar15 + (-8 - (long)plVar14);
                uVar1 = ((uint)(uVar20 >> 3) & 0x1fffffff) + 1;
                bVar5 = param_2 & 1;
                if ((uVar1 & 7) != 0) {
                  lVar13 = -((ulong)uVar1 & 7);
                  plVar18 = plVar14;
                  do {
                    plVar14 = plVar18 + 1;
                    bVar11 = lVar13 != -1;
                    lVar13 = lVar13 + 1;
                    *(byte *)(*plVar18 + 0x228) = bVar5;
                    plVar18 = plVar14;
                  } while (bVar11);
                }
                if (0x37 < uVar20) {
                  do {
                    *(byte *)(*plVar14 + 0x228) = bVar5;
                    *(byte *)(plVar14[1] + 0x228) = bVar5;
                    *(byte *)(plVar14[2] + 0x228) = bVar5;
                    *(byte *)(plVar14[3] + 0x228) = bVar5;
                    *(byte *)(plVar14[4] + 0x228) = bVar5;
                    *(byte *)(plVar14[5] + 0x228) = bVar5;
                    *(byte *)(plVar14[6] + 0x228) = bVar5;
                    plVar18 = plVar14 + 7;
                    plVar14 = plVar14 + 8;
                    *(byte *)(*plVar18 + 0x228) = bVar5;
                  } while (plVar14 != plVar15);
                }
              }
            }
            break;
          }
        }
      }
      plVar22 = plVar22 + 1;
    } while (plVar22 != plVar3);
    if ((plVar3 != (long *)plVar10[0x35]) && (*plVar3 != 0)) {
      plVar10[0x24] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar10 + 0x114));
      if (bVar7) {
        pLVar16 = (LightEventType *)((long)plVar10 + 0xfc);
        plVar10[0x21] = 0;
LAB_00acb81c:
        nn::os::SignalLightEvent(pLVar16);
      }
      goto LAB_00acb820;
    }
  }
  plVar22 = (long *)plVar10[0x2d];
  plVar3 = (long *)plVar10[0x2e];
  if (plVar22 == plVar3) {
LAB_00acb594:
    bVar11 = true;
  }
  else {
    do {
      lVar13 = *plVar22;
      if (lVar13 != 0) {
        plVar14 = (long *)(*(code *)**(undefined8 **)(lVar13 + 8))((undefined8 *)(lVar13 + 8));
        if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
          uVar17 = FUN_009b19b4();
          *(undefined8 *)puVar9 = uVar17;
          __cxa_guard_release(puVar8);
        }
        for (; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
          if (plVar14 == (long *)puVar9) {
            lVar13 = *(long *)(lVar13 + 0x1b8);
            if (lVar13 != 0) {
              plVar14 = *(long **)(lVar13 + 0x90);
              plVar15 = *(long **)(lVar13 + 0x98);
              if (plVar14 != plVar15) {
                uVar20 = (long)plVar15 + (-8 - (long)plVar14);
                uVar1 = ((uint)(uVar20 >> 3) & 0x1fffffff) + 1;
                bVar5 = param_2 & 1;
                if ((uVar1 & 7) != 0) {
                  lVar13 = -((ulong)uVar1 & 7);
                  plVar18 = plVar14;
                  do {
                    plVar14 = plVar18 + 1;
                    bVar11 = lVar13 != -1;
                    lVar13 = lVar13 + 1;
                    *(byte *)(*plVar18 + 0x228) = bVar5;
                    plVar18 = plVar14;
                  } while (bVar11);
                }
                if (0x37 < uVar20) {
                  do {
                    *(byte *)(*plVar14 + 0x228) = bVar5;
                    *(byte *)(plVar14[1] + 0x228) = bVar5;
                    *(byte *)(plVar14[2] + 0x228) = bVar5;
                    *(byte *)(plVar14[3] + 0x228) = bVar5;
                    *(byte *)(plVar14[4] + 0x228) = bVar5;
                    *(byte *)(plVar14[5] + 0x228) = bVar5;
                    *(byte *)(plVar14[6] + 0x228) = bVar5;
                    plVar18 = plVar14 + 7;
                    plVar14 = plVar14 + 8;
                    *(byte *)(*plVar18 + 0x228) = bVar5;
                  } while (plVar14 != plVar15);
                }
              }
            }
            break;
          }
        }
      }
      plVar22 = plVar22 + 1;
    } while (plVar22 != plVar3);
    if (plVar3 == (long *)plVar10[0x2e]) goto LAB_00acb594;
    bVar11 = *plVar3 == 0;
  }
  plVar10[0x24] = 0;
  nn::os::SignalLightEvent((LightEventType *)((long)plVar10 + 0x114));
  if (bVar7) {
    plVar10[0x21] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar10 + 0xfc));
  }
  if (bVar11) {
    lVar13 = nn::os::GetCurrentThread();
    plVar22 = plVar10 + 0x28;
    do {
      lVar21 = *plVar22;
      lVar4 = plVar10[0x29];
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar7) {
        *plVar22 = lVar21;
        plVar10[0x29] = lVar4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    pLVar16 = (LightEventType *)((long)plVar10 + 0x134);
    do {
      while ((lVar21 != 0 && (lVar13 != lVar21))) {
        nn::os::WaitLightEvent(pLVar16);
        do {
          lVar21 = *plVar22;
          lVar4 = plVar10[0x29];
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar7) {
            *plVar22 = lVar21;
            plVar10[0x29] = lVar4;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      while( true ) {
        if (*plVar22 != lVar21 || plVar10[0x29] != lVar4) break;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar7) {
          *plVar22 = lVar21;
          *(long *)((long)plVar10 + 0x144) = lVar4 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') {
          plVar3 = plVar10 + 0x2c;
          lVar21 = *plVar3;
          lVar13 = nn::os::GetCurrentThread();
          if (lVar13 == lVar21) {
            bVar7 = false;
            goto LAB_00acb698;
          }
          lVar13 = nn::os::GetCurrentThread();
          goto LAB_00acb658;
        }
      }
      ClearExclusiveLocal();
      lVar21 = *plVar22;
      lVar4 = plVar10[0x29];
    } while( true );
  }
LAB_00acb820:
  if (local_68 != (long *)0x0) {
    lVar13 = local_68[0xb];
    piVar2 = (int *)(lVar13 + 0xc);
    do {
      iVar12 = *piVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = iVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  return;
  while( true ) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar7) {
      *plVar3 = lVar13;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') break;
LAB_00acb658:
    if (*plVar3 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)plVar10 + 0x154));
        while (*plVar3 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar7) {
            *plVar3 = lVar13;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_00acb694;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_00acb694:
  bVar7 = true;
LAB_00acb698:
  plVar14 = (long *)plVar10[0x3c];
  for (plVar3 = (long *)plVar10[0x3b]; plVar3 != plVar14; plVar3 = plVar3 + 1) {
    lVar13 = *plVar3;
    if (lVar13 != 0) {
      plVar15 = (long *)(*(code *)**(undefined8 **)(lVar13 + 8))((undefined8 *)(lVar13 + 8));
      if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
        uVar17 = FUN_009b19b4();
        *(undefined8 *)puVar9 = uVar17;
        __cxa_guard_release(puVar8);
      }
      for (; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
        if (plVar15 == (long *)puVar9) {
          lVar13 = *(long *)(lVar13 + 0x1b8);
          if (lVar13 != 0) {
            plVar15 = *(long **)(lVar13 + 0x90);
            plVar18 = *(long **)(lVar13 + 0x98);
            if (plVar15 != plVar18) {
              uVar20 = (long)plVar18 + (-8 - (long)plVar15);
              uVar1 = ((uint)(uVar20 >> 3) & 0x1fffffff) + 1;
              bVar5 = param_2 & 1;
              if ((uVar1 & 7) != 0) {
                lVar13 = -((ulong)uVar1 & 7);
                plVar19 = plVar15;
                do {
                  plVar15 = plVar19 + 1;
                  bVar11 = lVar13 != -1;
                  lVar13 = lVar13 + 1;
                  *(byte *)(*plVar19 + 0x228) = bVar5;
                  plVar19 = plVar15;
                } while (bVar11);
              }
              if (0x37 < uVar20) {
                do {
                  *(byte *)(*plVar15 + 0x228) = bVar5;
                  *(byte *)(plVar15[1] + 0x228) = bVar5;
                  *(byte *)(plVar15[2] + 0x228) = bVar5;
                  *(byte *)(plVar15[3] + 0x228) = bVar5;
                  *(byte *)(plVar15[4] + 0x228) = bVar5;
                  *(byte *)(plVar15[5] + 0x228) = bVar5;
                  *(byte *)(plVar15[6] + 0x228) = bVar5;
                  plVar19 = plVar15 + 7;
                  plVar15 = plVar15 + 8;
                  *(byte *)(*plVar19 + 0x228) = bVar5;
                } while (plVar15 != plVar18);
              }
            }
          }
          break;
        }
      }
    }
  }
  if (bVar7) {
    plVar10[0x2c] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar10 + 0x154));
  }
  do {
    lVar13 = *plVar22;
    lVar21 = plVar10[0x29];
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar7) {
      *plVar22 = lVar13;
      plVar10[0x29] = lVar21;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00acb7a8:
  if (*plVar22 == lVar13 && plVar10[0x29] == lVar21) goto code_r0x00acb7bc;
  ClearExclusiveLocal();
  lVar13 = *plVar22;
  lVar21 = plVar10[0x29];
  do {
    do {
      lVar4 = *plVar22;
      if (lVar4 != lVar13 || plVar10[0x29] != lVar21) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto LAB_00acb7fc;
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar7) {
        *plVar22 = lVar13;
        *(long *)((long)plVar10 + 0x144) = lVar21 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar7 = true;
LAB_00acb7fc:
    lVar13 = lVar4;
    lVar21 = plVar10[0x29];
  } while (!bVar7);
  goto LAB_00acb81c;
code_r0x00acb7bc:
  cVar6 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
  if (bVar7) {
    *plVar22 = lVar13;
    *(long *)((long)plVar10 + 0x144) = lVar21 + -1;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_00acb81c;
  goto LAB_00acb7a8;
}


