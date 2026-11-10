/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a9b4b0; name: FUN_02a9b4b0
 */


void FUN_02a9b4b0(long *param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  LightEventType *pLVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  code *pcVar16;
  long lVar17;
  bool bVar18;
  long *plVar19;
  long *local_80;
  long *local_78;
  long **local_70;
  long *local_68;
  
  *param_1 = (long)&PTR_FUN_042805e8;
  param_1[9] = (long)&PTR_LAB_042806f8;
  param_1[10] = (long)&PTR_LAB_042807d8;
  FUN_00956dac(&local_78,param_1 + 0x35);
  plVar13 = local_78;
  if (local_78 != (long *)0x0) {
    local_70 = &local_68;
    plVar14 = local_78 + 0x21;
    lVar17 = *plVar14;
    local_80 = param_1;
    local_68 = (long *)&local_80;
    lVar9 = nn::os::GetCurrentThread();
    puVar3 = PTR_DAT_0437a140;
    puVar2 = PTR_DAT_0437a138;
    if (lVar9 == lVar17) {
      plVar14 = (long *)plVar13[0x2d];
      plVar19 = (long *)plVar13[0x2e];
      if (plVar14 != plVar19) {
        lVar9 = *plVar14;
        do {
          if (lVar9 != 0) {
            plVar10 = (long *)(*(code *)**(undefined8 **)(lVar9 + 8))((undefined8 *)(lVar9 + 8));
            if (((*puVar2 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar2), iVar8 != 0)) {
              uVar11 = FUN_009b19b4();
              *(undefined8 *)puVar3 = uVar11;
              __cxa_guard_release(puVar2);
            }
            for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
              if (plVar10 == (long *)puVar3) {
                if (*(long *)(lVar9 + 0x1a8) == *(long *)(*local_68 + 0x1f0)) {
                  (**(code **)(*(long *)*plVar14 + 0x70))();
                  *(undefined1 *)((long)plVar13 + 0x213) = 1;
                }
                break;
              }
            }
          }
          plVar14 = plVar14 + 1;
          if (plVar14 == plVar19) break;
          lVar9 = *plVar14;
        } while( true );
      }
      puVar3 = PTR_DAT_0437a140;
      puVar2 = PTR_DAT_0437a138;
      plVar14 = (long *)plVar13[0x34];
      plVar19 = (long *)plVar13[0x35];
      if (plVar14 != plVar19) {
        lVar9 = *plVar14;
        do {
          if (lVar9 != 0) {
            plVar10 = (long *)(*(code *)**(undefined8 **)(lVar9 + 8))((undefined8 *)(lVar9 + 8));
            if (((*puVar2 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar2), iVar8 != 0)) {
              uVar11 = FUN_009b19b4();
              *(undefined8 *)puVar3 = uVar11;
              __cxa_guard_release(puVar2);
            }
            for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
              if (plVar10 == (long *)puVar3) {
                if (*(long *)(lVar9 + 0x1a8) == *(long *)(*local_68 + 0x1f0)) {
                  (**(code **)(*(long *)*plVar14 + 0x70))();
                  *(undefined1 *)((long)plVar13 + 0x213) = 1;
                }
                break;
              }
            }
          }
          plVar14 = plVar14 + 1;
          if (plVar14 == plVar19) break;
          lVar9 = *plVar14;
        } while( true );
      }
      bVar6 = false;
    }
    else {
      lVar9 = nn::os::GetCurrentThread();
      do {
        if (*plVar14 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)((long)plVar13 + 0xfc));
            while (*plVar14 == 0) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar6) {
                *plVar14 = lVar9;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_02a9b704;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *plVar14 = lVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_02a9b704:
      lVar9 = nn::os::GetCurrentThread();
      plVar14 = plVar13 + 0x24;
      do {
        if (*plVar14 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)((long)plVar13 + 0x114));
            while (*plVar14 == 0) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar6) {
                *plVar14 = lVar9;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_02a9b74c;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *plVar14 = lVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_02a9b74c:
      FUN_02aa1bf8(&local_70,plVar13 + 0x2d);
      FUN_02aa1bf8(&local_70,plVar13 + 0x34);
      plVar13[0x24] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar13 + 0x114));
      bVar6 = true;
    }
    plVar14 = plVar13 + 0x28;
    do {
      lVar9 = *plVar14;
      cVar5 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar18) {
        *plVar14 = lVar9;
        plVar13[0x29] = plVar13[0x29];
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar17 = nn::os::GetCurrentThread();
    puVar3 = PTR_DAT_0437a140;
    puVar2 = PTR_DAT_0437a138;
    if (lVar17 != lVar9) {
      lVar9 = nn::os::GetCurrentThread();
      do {
        if (*plVar14 != 0 || plVar13[0x29] != 0) {
          bVar18 = false;
          ClearExclusiveLocal();
          goto LAB_02a9b884;
        }
        cVar5 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar18) {
          *plVar14 = lVar9;
          plVar13[0x29] = 0;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar18 = true;
LAB_02a9b884:
      lVar9 = nn::os::GetCurrentThread();
      plVar19 = plVar13 + 0x2c;
      do {
        if (*plVar19 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)((long)plVar13 + 0x154));
            while (*plVar19 == 0) {
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar7) {
                *plVar19 = lVar9;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_02a9b8cc;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar7) {
          *plVar19 = lVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_02a9b8cc:
      puVar3 = PTR_DAT_0437a140;
      puVar2 = PTR_DAT_0437a138;
      if (bVar18) {
        FUN_02aa1bf8(&local_70,plVar13 + 0x3b);
        plVar13[0x2c] = 0;
        nn::os::SignalLightEvent((LightEventType *)((long)plVar13 + 0x154));
        do {
          lVar9 = *plVar14;
          lVar17 = plVar13[0x29];
          cVar5 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar18) {
            *plVar14 = lVar9;
            plVar13[0x29] = lVar17;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        do {
          if (*plVar14 != lVar9 || plVar13[0x29] != lVar17) {
            ClearExclusiveLocal();
            lVar9 = *plVar14;
            lVar17 = plVar13[0x29];
            goto LAB_02a9cb70;
          }
          cVar5 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar18) {
            *plVar14 = 0;
            *(long *)((long)plVar13 + 0x144) = lVar17;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        goto LAB_02a9b924;
      }
      plVar14 = (long *)plVar13[0x3b];
      plVar19 = (long *)plVar13[0x3c];
      if (plVar14 != plVar19) {
        lVar9 = *plVar14;
        do {
          if (lVar9 != 0) {
            plVar10 = (long *)(*(code *)**(undefined8 **)(lVar9 + 8))((undefined8 *)(lVar9 + 8));
            if (((*puVar2 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar2), iVar8 != 0)) {
              uVar11 = FUN_009b19b4();
              *(undefined8 *)puVar3 = uVar11;
              __cxa_guard_release(puVar2);
            }
            for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
              if (plVar10 == (long *)puVar3) {
                if (*(long *)(lVar9 + 0x1a8) == *(long *)(*local_68 + 0x1f0)) {
                  (**(code **)(*(long *)*plVar14 + 0x70))();
                  *(undefined1 *)((long)plVar13 + 0x213) = 1;
                }
                break;
              }
            }
          }
          plVar14 = plVar14 + 1;
          if (plVar14 == plVar19) break;
          lVar9 = *plVar14;
        } while( true );
      }
      plVar13[0x2c] = 0;
      pLVar12 = (LightEventType *)((long)plVar13 + 0x154);
      goto LAB_02a9ba00;
    }
    plVar14 = (long *)plVar13[0x3b];
    plVar19 = (long *)plVar13[0x3c];
    if (plVar14 != plVar19) {
      lVar9 = *plVar14;
      do {
        if (lVar9 != 0) {
          plVar10 = (long *)(*(code *)**(undefined8 **)(lVar9 + 8))((undefined8 *)(lVar9 + 8));
          if (((*puVar2 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar2), iVar8 != 0)) {
            uVar11 = FUN_009b19b4();
            *(undefined8 *)puVar3 = uVar11;
            __cxa_guard_release(puVar2);
          }
          for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
            if (plVar10 == (long *)puVar3) {
              if (*(long *)(lVar9 + 0x1a8) == *(long *)(*local_68 + 0x1f0)) {
                (**(code **)(*(long *)*plVar14 + 0x70))();
                *(undefined1 *)((long)plVar13 + 0x213) = 1;
              }
              break;
            }
          }
        }
        plVar14 = plVar14 + 1;
        if (plVar14 == plVar19) break;
        lVar9 = *plVar14;
      } while( true );
    }
    goto LAB_02a9ba04;
  }
  goto LAB_02a9c990;
LAB_02a9cb70:
  do {
    lVar4 = *plVar14;
    if (lVar4 == lVar9 && plVar13[0x29] == lVar17) {
      cVar5 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar18) {
        *plVar14 = 0;
        *(long *)((long)plVar13 + 0x144) = lVar17;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_02a9cb70;
      bVar18 = true;
    }
    else {
      bVar18 = false;
      ClearExclusiveLocal();
    }
    lVar9 = lVar4;
    lVar17 = plVar13[0x29];
  } while (!bVar18);
LAB_02a9b924:
  pLVar12 = (LightEventType *)((long)plVar13 + 0x134);
LAB_02a9ba00:
  nn::os::SignalLightEvent(pLVar12);
LAB_02a9ba04:
  if (bVar6) {
    plVar13[0x21] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar13 + 0xfc));
  }
  plVar14 = local_78;
  local_70 = &local_68;
  plVar13 = local_78 + 0x21;
  lVar17 = *plVar13;
  local_80 = param_1;
  local_68 = (long *)&local_80;
  lVar9 = nn::os::GetCurrentThread();
  puVar3 = PTR_DAT_0437a6b8;
  puVar2 = PTR_DAT_0437a6b0;
  if (lVar9 == lVar17) {
    plVar13 = (long *)plVar14[0x2d];
    plVar19 = (long *)plVar14[0x2e];
    if (plVar13 != plVar19) {
      lVar9 = *plVar13;
      do {
        if (lVar9 != 0) {
          plVar10 = (long *)(*(code *)**(undefined8 **)(lVar9 + 8))((undefined8 *)(lVar9 + 8));
          if (((*puVar2 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar2), iVar8 != 0)) {
            uVar11 = FUN_009b19b4();
            *(undefined8 *)puVar3 = uVar11;
            __cxa_guard_release(puVar2);
          }
          for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
            if (plVar10 == (long *)puVar3) {
              if (*(long *)(lVar9 + 0x1a8) == *(long *)(*local_68 + 0x1f0)) {
                (**(code **)(*(long *)*plVar13 + 0x70))();
                *(undefined1 *)((long)plVar14 + 0x213) = 1;
              }
              break;
            }
          }
        }
        plVar13 = plVar13 + 1;
        if (plVar13 == plVar19) break;
        lVar9 = *plVar13;
      } while( true );
    }
    puVar3 = PTR_DAT_0437a6b8;
    puVar2 = PTR_DAT_0437a6b0;
    plVar13 = (long *)plVar14[0x34];
    plVar19 = (long *)plVar14[0x35];
    if (plVar13 != plVar19) {
      lVar9 = *plVar13;
      do {
        if (lVar9 != 0) {
          plVar10 = (long *)(*(code *)**(undefined8 **)(lVar9 + 8))((undefined8 *)(lVar9 + 8));
          if (((*puVar2 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar2), iVar8 != 0)) {
            uVar11 = FUN_009b19b4();
            *(undefined8 *)puVar3 = uVar11;
            __cxa_guard_release(puVar2);
          }
          for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
            if (plVar10 == (long *)puVar3) {
              if (*(long *)(lVar9 + 0x1a8) == *(long *)(*local_68 + 0x1f0)) {
                (**(code **)(*(long *)*plVar13 + 0x70))();
                *(undefined1 *)((long)plVar14 + 0x213) = 1;
              }
              break;
            }
          }
        }
        plVar13 = plVar13 + 1;
        if (plVar13 == plVar19) break;
        lVar9 = *plVar13;
      } while( true );
    }
    bVar6 = false;
  }
  else {
    lVar9 = nn::os::GetCurrentThread();
    do {
      if (*plVar13 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar14 + 0xfc));
          while (*plVar13 == 0) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar6) {
              *plVar13 = lVar9;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_02a9bc20;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = lVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_02a9bc20:
    lVar9 = nn::os::GetCurrentThread();
    plVar13 = plVar14 + 0x24;
    do {
      if (*plVar13 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar14 + 0x114));
          while (*plVar13 == 0) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar6) {
              *plVar13 = lVar9;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_02a9bc68;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = lVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_02a9bc68:
    FUN_02aa1e60(&local_70,plVar14 + 0x2d);
    FUN_02aa1e60(&local_70,plVar14 + 0x34);
    plVar14[0x24] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar14 + 0x114));
    bVar6 = true;
  }
  plVar13 = plVar14 + 0x28;
  do {
    lVar9 = *plVar13;
    cVar5 = '\x01';
    bVar18 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar18) {
      *plVar13 = lVar9;
      plVar14[0x29] = plVar14[0x29];
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  lVar17 = nn::os::GetCurrentThread();
  puVar3 = PTR_DAT_0437a6b8;
  puVar2 = PTR_DAT_0437a6b0;
  if (lVar17 != lVar9) {
    lVar9 = nn::os::GetCurrentThread();
    do {
      if (*plVar13 != 0 || plVar14[0x29] != 0) {
        bVar18 = false;
        ClearExclusiveLocal();
        goto LAB_02a9bda0;
      }
      cVar5 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar18) {
        *plVar13 = lVar9;
        plVar14[0x29] = 0;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar18 = true;
LAB_02a9bda0:
    lVar9 = nn::os::GetCurrentThread();
    plVar19 = plVar14 + 0x2c;
    do {
      if (*plVar19 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar14 + 0x154));
          while (*plVar19 == 0) {
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar7) {
              *plVar19 = lVar9;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_02a9bde8;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar7) {
        *plVar19 = lVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_02a9bde8:
    puVar3 = PTR_DAT_0437a6b8;
    puVar2 = PTR_DAT_0437a6b0;
    if (bVar18) {
      FUN_02aa1e60(&local_70,plVar14 + 0x3b);
      plVar14[0x2c] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar14 + 0x154));
      do {
        lVar9 = *plVar13;
        lVar17 = plVar14[0x29];
        cVar5 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar18) {
          *plVar13 = lVar9;
          plVar14[0x29] = lVar17;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        if (*plVar13 != lVar9 || plVar14[0x29] != lVar17) {
          ClearExclusiveLocal();
          lVar9 = *plVar13;
          lVar17 = plVar14[0x29];
          goto LAB_02a9cbb4;
        }
        cVar5 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar18) {
          *plVar13 = 0;
          *(long *)((long)plVar14 + 0x144) = lVar17;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      goto LAB_02a9be40;
    }
    plVar13 = (long *)plVar14[0x3b];
    plVar19 = (long *)plVar14[0x3c];
    if (plVar13 != plVar19) {
      lVar9 = *plVar13;
      do {
        if (lVar9 != 0) {
          plVar10 = (long *)(*(code *)**(undefined8 **)(lVar9 + 8))((undefined8 *)(lVar9 + 8));
          if (((*puVar2 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar2), iVar8 != 0)) {
            uVar11 = FUN_009b19b4();
            *(undefined8 *)puVar3 = uVar11;
            __cxa_guard_release(puVar2);
          }
          for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
            if (plVar10 == (long *)puVar3) {
              if (*(long *)(lVar9 + 0x1a8) == *(long *)(*local_68 + 0x1f0)) {
                (**(code **)(*(long *)*plVar13 + 0x70))();
                *(undefined1 *)((long)plVar14 + 0x213) = 1;
              }
              break;
            }
          }
        }
        plVar13 = plVar13 + 1;
        if (plVar13 == plVar19) break;
        lVar9 = *plVar13;
      } while( true );
    }
    plVar14[0x2c] = 0;
    pLVar12 = (LightEventType *)((long)plVar14 + 0x154);
    goto LAB_02a9bf1c;
  }
  plVar13 = (long *)plVar14[0x3b];
  plVar19 = (long *)plVar14[0x3c];
  if (plVar13 != plVar19) {
    lVar9 = *plVar13;
    do {
      if (lVar9 != 0) {
        plVar10 = (long *)(*(code *)**(undefined8 **)(lVar9 + 8))((undefined8 *)(lVar9 + 8));
        if (((*puVar2 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar2), iVar8 != 0)) {
          uVar11 = FUN_009b19b4();
          *(undefined8 *)puVar3 = uVar11;
          __cxa_guard_release(puVar2);
        }
        for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
          if (plVar10 == (long *)puVar3) {
            if (*(long *)(lVar9 + 0x1a8) == *(long *)(*local_68 + 0x1f0)) {
              (**(code **)(*(long *)*plVar13 + 0x70))();
              *(undefined1 *)((long)plVar14 + 0x213) = 1;
            }
            break;
          }
        }
      }
      plVar13 = plVar13 + 1;
      if (plVar13 == plVar19) break;
      lVar9 = *plVar13;
    } while( true );
  }
  goto LAB_02a9bf20;
LAB_02a9cbf8:
  do {
    lVar4 = *plVar13;
    if (lVar4 == lVar9 && plVar14[0x29] == lVar17) {
      cVar5 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar18) {
        *plVar13 = 0;
        *(long *)((long)plVar14 + 0x144) = lVar17;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_02a9cbf8;
      bVar18 = true;
    }
    else {
      bVar18 = false;
      ClearExclusiveLocal();
    }
    lVar9 = lVar4;
    lVar17 = plVar14[0x29];
  } while (!bVar18);
  goto LAB_02a9c35c;
LAB_02a9cc3c:
  do {
    lVar4 = *plVar13;
    if (lVar4 == lVar9 && plVar14[0x29] == lVar17) {
      cVar5 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar18) {
        *plVar13 = 0;
        *(long *)((long)plVar14 + 0x144) = lVar17;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_02a9cc3c;
      bVar18 = true;
    }
    else {
      bVar18 = false;
      ClearExclusiveLocal();
    }
    lVar9 = lVar4;
    lVar17 = plVar14[0x29];
  } while (!bVar18);
  goto LAB_02a9c878;
LAB_02a9cbb4:
  do {
    lVar4 = *plVar13;
    if (lVar4 == lVar9 && plVar14[0x29] == lVar17) {
      cVar5 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar18) {
        *plVar13 = 0;
        *(long *)((long)plVar14 + 0x144) = lVar17;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_02a9cbb4;
      bVar18 = true;
    }
    else {
      bVar18 = false;
      ClearExclusiveLocal();
    }
    lVar9 = lVar4;
    lVar17 = plVar14[0x29];
  } while (!bVar18);
LAB_02a9be40:
  pLVar12 = (LightEventType *)((long)plVar14 + 0x134);
LAB_02a9bf1c:
  nn::os::SignalLightEvent(pLVar12);
LAB_02a9bf20:
  if (bVar6) {
    plVar14[0x21] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar14 + 0xfc));
  }
  plVar14 = local_78;
  local_70 = &local_68;
  plVar13 = local_78 + 0x21;
  lVar17 = *plVar13;
  local_80 = param_1;
  local_68 = (long *)&local_80;
  lVar9 = nn::os::GetCurrentThread();
  puVar3 = PTR_DAT_04388088;
  puVar2 = PTR_DAT_04388080;
  if (lVar9 == lVar17) {
    plVar13 = (long *)plVar14[0x2d];
    plVar19 = (long *)plVar14[0x2e];
    if (plVar13 != plVar19) {
      lVar9 = *plVar13;
      do {
        if (lVar9 != 0) {
          plVar10 = (long *)(*(code *)**(undefined8 **)(lVar9 + 8))((undefined8 *)(lVar9 + 8));
          if (((*puVar2 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar2), iVar8 != 0)) {
            uVar11 = FUN_009b19b4();
            *(undefined8 *)puVar3 = uVar11;
            __cxa_guard_release(puVar2);
          }
          for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
            if (plVar10 == (long *)puVar3) {
              if (*(long *)(lVar9 + 0x1a8) == *(long *)(*local_68 + 0x1f0)) {
                (**(code **)(*(long *)*plVar13 + 0x70))();
                *(undefined1 *)((long)plVar14 + 0x213) = 1;
              }
              break;
            }
          }
        }
        plVar13 = plVar13 + 1;
        if (plVar13 == plVar19) break;
        lVar9 = *plVar13;
      } while( true );
    }
    puVar3 = PTR_DAT_04388088;
    puVar2 = PTR_DAT_04388080;
    plVar13 = (long *)plVar14[0x34];
    plVar19 = (long *)plVar14[0x35];
    if (plVar13 != plVar19) {
      lVar9 = *plVar13;
      do {
        if (lVar9 != 0) {
          plVar10 = (long *)(*(code *)**(undefined8 **)(lVar9 + 8))((undefined8 *)(lVar9 + 8));
          if (((*puVar2 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar2), iVar8 != 0)) {
            uVar11 = FUN_009b19b4();
            *(undefined8 *)puVar3 = uVar11;
            __cxa_guard_release(puVar2);
          }
          for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
            if (plVar10 == (long *)puVar3) {
              if (*(long *)(lVar9 + 0x1a8) == *(long *)(*local_68 + 0x1f0)) {
                (**(code **)(*(long *)*plVar13 + 0x70))();
                *(undefined1 *)((long)plVar14 + 0x213) = 1;
              }
              break;
            }
          }
        }
        plVar13 = plVar13 + 1;
        if (plVar13 == plVar19) break;
        lVar9 = *plVar13;
      } while( true );
    }
    bVar6 = false;
  }
  else {
    lVar9 = nn::os::GetCurrentThread();
    do {
      if (*plVar13 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar14 + 0xfc));
          while (*plVar13 == 0) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar6) {
              *plVar13 = lVar9;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_02a9c13c;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = lVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_02a9c13c:
    lVar9 = nn::os::GetCurrentThread();
    plVar13 = plVar14 + 0x24;
    do {
      if (*plVar13 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar14 + 0x114));
          while (*plVar13 == 0) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar6) {
              *plVar13 = lVar9;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_02a9c184;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = lVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_02a9c184:
    FUN_02aa20c0(&local_70,plVar14 + 0x2d);
    FUN_02aa20c0(&local_70,plVar14 + 0x34);
    plVar14[0x24] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar14 + 0x114));
    bVar6 = true;
  }
  plVar13 = plVar14 + 0x28;
  do {
    lVar9 = *plVar13;
    cVar5 = '\x01';
    bVar18 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar18) {
      *plVar13 = lVar9;
      plVar14[0x29] = plVar14[0x29];
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  lVar17 = nn::os::GetCurrentThread();
  puVar3 = PTR_DAT_04388088;
  puVar2 = PTR_DAT_04388080;
  if (lVar17 == lVar9) {
    plVar13 = (long *)plVar14[0x3b];
    plVar19 = (long *)plVar14[0x3c];
    if (plVar13 != plVar19) {
      lVar9 = *plVar13;
      do {
        if (lVar9 != 0) {
          plVar10 = (long *)(*(code *)**(undefined8 **)(lVar9 + 8))((undefined8 *)(lVar9 + 8));
          if (((*puVar2 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar2), iVar8 != 0)) {
            uVar11 = FUN_009b19b4();
            *(undefined8 *)puVar3 = uVar11;
            __cxa_guard_release(puVar2);
          }
          for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
            if (plVar10 == (long *)puVar3) {
              if (*(long *)(lVar9 + 0x1a8) == *(long *)(*local_68 + 0x1f0)) {
                (**(code **)(*(long *)*plVar13 + 0x70))();
                *(undefined1 *)((long)plVar14 + 0x213) = 1;
              }
              break;
            }
          }
        }
        plVar13 = plVar13 + 1;
        if (plVar13 == plVar19) break;
        lVar9 = *plVar13;
      } while( true );
    }
  }
  else {
    lVar9 = nn::os::GetCurrentThread();
    do {
      if (*plVar13 != 0 || plVar14[0x29] != 0) {
        bVar18 = false;
        ClearExclusiveLocal();
        goto LAB_02a9c2bc;
      }
      cVar5 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar18) {
        *plVar13 = lVar9;
        plVar14[0x29] = 0;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar18 = true;
LAB_02a9c2bc:
    lVar9 = nn::os::GetCurrentThread();
    plVar19 = plVar14 + 0x2c;
    do {
      if (*plVar19 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar14 + 0x154));
          while (*plVar19 == 0) {
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar7) {
              *plVar19 = lVar9;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_02a9c304;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar7) {
        *plVar19 = lVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_02a9c304:
    puVar3 = PTR_DAT_04388088;
    puVar2 = PTR_DAT_04388080;
    if (bVar18) {
      FUN_02aa20c0(&local_70,plVar14 + 0x3b);
      plVar14[0x2c] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar14 + 0x154));
      do {
        lVar9 = *plVar13;
        lVar17 = plVar14[0x29];
        cVar5 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar18) {
          *plVar13 = lVar9;
          plVar14[0x29] = lVar17;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        if (*plVar13 != lVar9 || plVar14[0x29] != lVar17) {
          ClearExclusiveLocal();
          lVar9 = *plVar13;
          lVar17 = plVar14[0x29];
          goto LAB_02a9cbf8;
        }
        cVar5 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar18) {
          *plVar13 = 0;
          *(long *)((long)plVar14 + 0x144) = lVar17;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_02a9c35c:
      pLVar12 = (LightEventType *)((long)plVar14 + 0x134);
    }
    else {
      plVar13 = (long *)plVar14[0x3b];
      plVar19 = (long *)plVar14[0x3c];
      if (plVar13 != plVar19) {
        lVar9 = *plVar13;
        do {
          if (lVar9 != 0) {
            plVar10 = (long *)(*(code *)**(undefined8 **)(lVar9 + 8))((undefined8 *)(lVar9 + 8));
            if (((*puVar2 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar2), iVar8 != 0)) {
              uVar11 = FUN_009b19b4();
              *(undefined8 *)puVar3 = uVar11;
              __cxa_guard_release(puVar2);
            }
            for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
              if (plVar10 == (long *)puVar3) {
                if (*(long *)(lVar9 + 0x1a8) == *(long *)(*local_68 + 0x1f0)) {
                  (**(code **)(*(long *)*plVar13 + 0x70))();
                  *(undefined1 *)((long)plVar14 + 0x213) = 1;
                }
                break;
              }
            }
          }
          plVar13 = plVar13 + 1;
          if (plVar13 == plVar19) break;
          lVar9 = *plVar13;
        } while( true );
      }
      plVar14[0x2c] = 0;
      pLVar12 = (LightEventType *)((long)plVar14 + 0x154);
    }
    nn::os::SignalLightEvent(pLVar12);
  }
  if (bVar6) {
    plVar14[0x21] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar14 + 0xfc));
  }
  plVar14 = local_78;
  local_70 = &local_68;
  plVar13 = local_78 + 0x21;
  lVar17 = *plVar13;
  local_80 = param_1;
  local_68 = (long *)&local_80;
  lVar9 = nn::os::GetCurrentThread();
  puVar3 = PTR_DAT_04388098;
  puVar2 = PTR_DAT_04388090;
  if (lVar9 == lVar17) {
    plVar13 = (long *)plVar14[0x2d];
    plVar19 = (long *)plVar14[0x2e];
    if (plVar13 != plVar19) {
      lVar9 = *plVar13;
      do {
        if (lVar9 != 0) {
          plVar10 = (long *)(*(code *)**(undefined8 **)(lVar9 + 8))((undefined8 *)(lVar9 + 8));
          if (((*puVar2 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar2), iVar8 != 0)) {
            uVar11 = FUN_009b19b4();
            *(undefined8 *)puVar3 = uVar11;
            __cxa_guard_release(puVar2);
          }
          for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
            if (plVar10 == (long *)puVar3) {
              if (*(long *)(lVar9 + 0x1a8) == *(long *)(*local_68 + 0x1f0)) {
                (**(code **)(*(long *)*plVar13 + 0x70))();
                *(undefined1 *)((long)plVar14 + 0x213) = 1;
              }
              break;
            }
          }
        }
        plVar13 = plVar13 + 1;
        if (plVar13 == plVar19) break;
        lVar9 = *plVar13;
      } while( true );
    }
    puVar3 = PTR_DAT_04388098;
    puVar2 = PTR_DAT_04388090;
    plVar13 = (long *)plVar14[0x34];
    plVar19 = (long *)plVar14[0x35];
    if (plVar13 != plVar19) {
      lVar9 = *plVar13;
      do {
        if (lVar9 != 0) {
          plVar10 = (long *)(*(code *)**(undefined8 **)(lVar9 + 8))((undefined8 *)(lVar9 + 8));
          if (((*puVar2 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar2), iVar8 != 0)) {
            uVar11 = FUN_009b19b4();
            *(undefined8 *)puVar3 = uVar11;
            __cxa_guard_release(puVar2);
          }
          for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
            if (plVar10 == (long *)puVar3) {
              if (*(long *)(lVar9 + 0x1a8) == *(long *)(*local_68 + 0x1f0)) {
                (**(code **)(*(long *)*plVar13 + 0x70))();
                *(undefined1 *)((long)plVar14 + 0x213) = 1;
              }
              break;
            }
          }
        }
        plVar13 = plVar13 + 1;
        if (plVar13 == plVar19) break;
        lVar9 = *plVar13;
      } while( true );
    }
    bVar6 = false;
  }
  else {
    lVar9 = nn::os::GetCurrentThread();
    do {
      if (*plVar13 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar14 + 0xfc));
          while (*plVar13 == 0) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar6) {
              *plVar13 = lVar9;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_02a9c658;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = lVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_02a9c658:
    lVar9 = nn::os::GetCurrentThread();
    plVar13 = plVar14 + 0x24;
    do {
      if (*plVar13 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar14 + 0x114));
          while (*plVar13 == 0) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar6) {
              *plVar13 = lVar9;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_02a9c6a0;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = lVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_02a9c6a0:
    FUN_02aa2320(&local_70,plVar14 + 0x2d);
    FUN_02aa2320(&local_70,plVar14 + 0x34);
    plVar14[0x24] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar14 + 0x114));
    bVar6 = true;
  }
  plVar13 = plVar14 + 0x28;
  do {
    lVar9 = *plVar13;
    cVar5 = '\x01';
    bVar18 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar18) {
      *plVar13 = lVar9;
      plVar14[0x29] = plVar14[0x29];
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  lVar17 = nn::os::GetCurrentThread();
  puVar3 = PTR_DAT_04388098;
  puVar2 = PTR_DAT_04388090;
  if (lVar17 == lVar9) {
    plVar13 = (long *)plVar14[0x3b];
    plVar19 = (long *)plVar14[0x3c];
    if (plVar13 != plVar19) {
      lVar9 = *plVar13;
      do {
        if (lVar9 != 0) {
          plVar10 = (long *)(*(code *)**(undefined8 **)(lVar9 + 8))((undefined8 *)(lVar9 + 8));
          if (((*puVar2 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar2), iVar8 != 0)) {
            uVar11 = FUN_009b19b4();
            *(undefined8 *)puVar3 = uVar11;
            __cxa_guard_release(puVar2);
          }
          for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
            if (plVar10 == (long *)puVar3) {
              if (*(long *)(lVar9 + 0x1a8) == *(long *)(*local_68 + 0x1f0)) {
                (**(code **)(*(long *)*plVar13 + 0x70))();
                *(undefined1 *)((long)plVar14 + 0x213) = 1;
              }
              break;
            }
          }
        }
        plVar13 = plVar13 + 1;
        if (plVar13 == plVar19) break;
        lVar9 = *plVar13;
      } while( true );
    }
  }
  else {
    lVar9 = nn::os::GetCurrentThread();
    do {
      if (*plVar13 != 0 || plVar14[0x29] != 0) {
        bVar18 = false;
        ClearExclusiveLocal();
        goto LAB_02a9c7d8;
      }
      cVar5 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar18) {
        *plVar13 = lVar9;
        plVar14[0x29] = 0;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar18 = true;
LAB_02a9c7d8:
    lVar9 = nn::os::GetCurrentThread();
    plVar19 = plVar14 + 0x2c;
    do {
      if (*plVar19 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar14 + 0x154));
          while (*plVar19 == 0) {
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar7) {
              *plVar19 = lVar9;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_02a9c820;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar7) {
        *plVar19 = lVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_02a9c820:
    puVar3 = PTR_DAT_04388098;
    puVar2 = PTR_DAT_04388090;
    if (bVar18) {
      FUN_02aa2320(&local_70,plVar14 + 0x3b);
      plVar14[0x2c] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar14 + 0x154));
      do {
        lVar9 = *plVar13;
        lVar17 = plVar14[0x29];
        cVar5 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar18) {
          *plVar13 = lVar9;
          plVar14[0x29] = lVar17;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        if (*plVar13 != lVar9 || plVar14[0x29] != lVar17) {
          ClearExclusiveLocal();
          lVar9 = *plVar13;
          lVar17 = plVar14[0x29];
          goto LAB_02a9cc3c;
        }
        cVar5 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar18) {
          *plVar13 = 0;
          *(long *)((long)plVar14 + 0x144) = lVar17;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_02a9c878:
      pLVar12 = (LightEventType *)((long)plVar14 + 0x134);
    }
    else {
      plVar13 = (long *)plVar14[0x3b];
      plVar19 = (long *)plVar14[0x3c];
      if (plVar13 != plVar19) {
        lVar9 = *plVar13;
        do {
          if (lVar9 != 0) {
            plVar10 = (long *)(*(code *)**(undefined8 **)(lVar9 + 8))((undefined8 *)(lVar9 + 8));
            if (((*puVar2 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar2), iVar8 != 0)) {
              uVar11 = FUN_009b19b4();
              *(undefined8 *)puVar3 = uVar11;
              __cxa_guard_release(puVar2);
            }
            for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
              if (plVar10 == (long *)puVar3) {
                if (*(long *)(lVar9 + 0x1a8) == *(long *)(*local_68 + 0x1f0)) {
                  (**(code **)(*(long *)*plVar13 + 0x70))();
                  *(undefined1 *)((long)plVar14 + 0x213) = 1;
                }
                break;
              }
            }
          }
          plVar13 = plVar13 + 1;
          if (plVar13 == plVar19) break;
          lVar9 = *plVar13;
        } while( true );
      }
      plVar14[0x2c] = 0;
      pLVar12 = (LightEventType *)((long)plVar14 + 0x154);
    }
    nn::os::SignalLightEvent(pLVar12);
  }
  if (bVar6) {
    plVar14[0x21] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar14 + 0xfc));
  }
  if (local_78 == (long *)0x0) {
LAB_02a9c990:
    plVar13 = (long *)param_1[0x6a];
  }
  else {
    lVar9 = local_78[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 != 0) goto LAB_02a9c990;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*local_78 + 0x20))();
    plVar13 = (long *)param_1[0x6a];
  }
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))();
  }
  pcVar16 = (code *)param_1[0x57];
  if (pcVar16 == (code *)0x0) {
    plVar13 = (long *)param_1[0x51];
    if (plVar13 == (long *)0x0) goto LAB_02a9c9f0;
LAB_02a9c9d8:
    plVar14 = plVar13 + 10;
    do {
      iVar8 = (int)*plVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 != 0) goto LAB_02a9c9f0;
    (**(code **)(*plVar13 + 0x10))();
    plVar13 = (long *)param_1[0x50];
    if (plVar13 != (long *)0x0) goto LAB_02a9c9f8;
LAB_02a9ca10:
    plVar13 = (long *)param_1[0x49];
  }
  else {
    param_1[0x59] = 0;
    param_1[0x58] = 0;
    param_1[0x57] = 0;
    param_1[0x56] = 0;
    (*pcVar16)(param_1 + 0x5a);
    plVar13 = (long *)param_1[0x51];
    if (plVar13 != (long *)0x0) goto LAB_02a9c9d8;
LAB_02a9c9f0:
    plVar13 = (long *)param_1[0x50];
    if (plVar13 == (long *)0x0) goto LAB_02a9ca10;
LAB_02a9c9f8:
    plVar14 = plVar13 + 10;
    do {
      iVar8 = (int)*plVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 != 0) goto LAB_02a9ca10;
    (**(code **)(*plVar13 + 0x10))();
    plVar13 = (long *)param_1[0x49];
  }
  if (plVar13 != (long *)0x0) {
    lVar9 = tpidr_el0;
LAB_02a9ca68:
    do {
      plVar19 = (long *)*plVar13;
      plVar14 = (long *)plVar13[6];
      if (plVar14 == (long *)0x0) {
LAB_02a9ca8c:
        plVar14 = (long *)plVar13[5];
      }
      else {
        plVar10 = plVar14 + 10;
        do {
          iVar8 = (int)*plVar10 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *(int *)plVar10 = iVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != 0) goto LAB_02a9ca8c;
        (**(code **)(*plVar14 + 0x10))();
        plVar14 = (long *)plVar13[5];
      }
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x20))();
      }
      plVar14 = (long *)param_1[0x4a];
      uVar15 = (**(code **)(*plVar14 + 0xc0))(plVar14);
      if ((uVar15 & 1) != 0) {
        if (*(char *)(lVar9 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar9 + 0x38d488) = 1;
          *(undefined8 *)(lVar9 + 0x38d478) = 0;
          *(undefined8 *)(lVar9 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar9 + 0x38d480)) {
          FUN_02bcc824(plVar14,plVar13,0x38,8);
          plVar13 = plVar19;
          if (plVar19 == (long *)0x0) break;
          goto LAB_02a9ca68;
        }
      }
      (**(code **)(*plVar14 + 0x18))(plVar14,plVar13,0x38,8);
      plVar13 = plVar19;
    } while (plVar19 != (long *)0x0);
  }
  lVar9 = param_1[0x43];
  param_1[0x43] = 0;
  if (lVar9 != 0) {
    lVar17 = param_1[0x44];
    plVar13 = (long *)param_1[0x45];
    uVar15 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar15 & 1) != 0) {
      lVar4 = tpidr_el0;
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar13,lVar9,lVar17 << 3,8);
        goto LAB_02a9cd30;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,lVar9,lVar17 << 3,8);
  }
LAB_02a9cd30:
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x204));
  plVar13 = (long *)param_1[0x3e];
  puVar2 = PTR_DAT_043880a0 + 0x120;
  puVar3 = PTR_DAT_043880a0 + 0x200;
  *param_1 = (long)(PTR_DAT_043880a0 + 0x10);
  param_1[9] = (long)puVar2;
  param_1[10] = (long)puVar3;
  if (plVar13 != (long *)0x0) {
    plVar14 = plVar13 + 10;
    do {
      iVar8 = (int)*plVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar13 + 0x10))();
    }
  }
  FUN_02a4c4ec(param_1);
  return;
}


