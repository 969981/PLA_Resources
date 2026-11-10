/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bff3ec; name: FUN_01bff3ec
 */


void FUN_01bff3ec(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *local_60 [2];
  long *local_50;
  undefined8 local_48;
  
  FUN_01a5b3e8();
  FUN_01a55fe8(local_60,param_1);
  if (local_60[0] == (undefined8 *)0x0) {
    local_50 = (long *)0x0;
    plVar8 = local_50;
  }
  else {
    FUN_00bbaa24(&local_50);
    plVar8 = local_50;
    if (local_60[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_60[0] + 1);
      do {
        iVar4 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 + -1 == 0) {
        local_60[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar5 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar5;
        local_48 = *local_60[0];
        FUN_02a44274(lVar5 + 0xd8,&local_48);
        plVar8 = local_50;
      }
    }
  }
  if (plVar8 != (long *)0x0) {
    lVar10 = *(long *)(param_1 + 0x1008);
    local_50 = plVar8;
    lVar5 = nn::os::GetCurrentThread();
    plVar7 = plVar8 + 0x6c;
    do {
      if (*plVar7 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar8 + 0x354));
          while (*plVar7 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01bff478;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01bff478:
    lVar5 = plVar8[0x1d] - plVar8[0x1c];
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      plVar7 = (long *)(plVar8[0x1c] + 8);
      uVar6 = 0;
      do {
        if (*plVar7 == lVar10) {
          uVar9 = 1;
          goto LAB_01bff48c;
        }
        uVar6 = uVar6 + 1;
        plVar7 = plVar7 + 6;
      } while (uVar6 < (ulong)((lVar5 >> 4) * -0x5555555555555555));
    }
    uVar9 = 0;
LAB_01bff48c:
    plVar8[0x6c] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar8 + 0x354));
    plVar7 = local_50;
    *(ulong *)(param_1 + 0x1020) = uVar9 | uVar6 << 0x20;
    lVar10 = *(long *)(param_1 + 0x1048);
    lVar5 = nn::os::GetCurrentThread();
    plVar8 = plVar7 + 0x6c;
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar7 + 0x354));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01bff4f4;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01bff4f4:
    lVar5 = plVar7[0xf] - plVar7[0xe];
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      plVar8 = (long *)(plVar7[0xe] + 8);
      uVar6 = 0;
      do {
        if (*plVar8 == lVar10) {
          uVar9 = 1;
          goto LAB_01bff508;
        }
        uVar6 = uVar6 + 1;
        plVar8 = plVar8 + 6;
      } while (uVar6 < (ulong)((lVar5 >> 4) * -0x5555555555555555));
    }
    uVar9 = 0;
LAB_01bff508:
    plVar7[0x6c] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar7 + 0x354));
    plVar7 = local_50;
    *(ulong *)(param_1 + 0x1068) = uVar9 | uVar6 << 0x20;
    lVar10 = *(long *)(param_1 + 0x1030);
    lVar5 = nn::os::GetCurrentThread();
    plVar8 = plVar7 + 0x6c;
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar7 + 0x354));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01bff570;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01bff570:
    lVar5 = plVar7[0x24] - plVar7[0x23];
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      plVar8 = (long *)(plVar7[0x23] + 8);
      uVar6 = 0;
      do {
        if (*plVar8 == lVar10) {
          uVar9 = 1;
          goto LAB_01bff584;
        }
        uVar6 = uVar6 + 1;
        plVar8 = plVar8 + 6;
      } while (uVar6 < (ulong)((lVar5 >> 4) * -0x5555555555555555));
    }
    uVar9 = 0;
LAB_01bff584:
    plVar7[0x6c] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar7 + 0x354));
    plVar7 = local_50;
    *(ulong *)(param_1 + 0x1060) = uVar9 | uVar6 << 0x20;
    lVar10 = *(long *)(param_1 + 0x1088);
    lVar5 = nn::os::GetCurrentThread();
    plVar8 = plVar7 + 0x6c;
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar7 + 0x354));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01bff5ec;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01bff5ec:
    lVar5 = plVar7[0xf] - plVar7[0xe];
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      plVar8 = (long *)(plVar7[0xe] + 8);
      uVar6 = 0;
      do {
        if (*plVar8 == lVar10) {
          uVar9 = 1;
          goto LAB_01bff600;
        }
        uVar6 = uVar6 + 1;
        plVar8 = plVar8 + 6;
      } while (uVar6 < (ulong)((lVar5 >> 4) * -0x5555555555555555));
    }
    uVar9 = 0;
LAB_01bff600:
    plVar7[0x6c] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar7 + 0x354));
    plVar7 = local_50;
    *(ulong *)(param_1 + 0x10c0) = uVar9 | uVar6 << 0x20;
    lVar10 = *(long *)(param_1 + 0x1070);
    lVar5 = nn::os::GetCurrentThread();
    plVar8 = plVar7 + 0x6c;
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar7 + 0x354));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01bff668;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01bff668:
    lVar5 = plVar7[0x1d] - plVar7[0x1c];
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      plVar8 = (long *)(plVar7[0x1c] + 8);
      uVar6 = 0;
      do {
        if (*plVar8 == lVar10) {
          uVar9 = 1;
          goto LAB_01bff67c;
        }
        uVar6 = uVar6 + 1;
        plVar8 = plVar8 + 6;
      } while (uVar6 < (ulong)((lVar5 >> 4) * -0x5555555555555555));
    }
    uVar9 = 0;
LAB_01bff67c:
    plVar7[0x6c] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar7 + 0x354));
    plVar7 = local_50;
    *(ulong *)(param_1 + 0x10b8) = uVar9 | uVar6 << 0x20;
    lVar10 = *(long *)(param_1 + 0x10a0);
    lVar5 = nn::os::GetCurrentThread();
    plVar8 = plVar7 + 0x6c;
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar7 + 0x354));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01bff6e4;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01bff6e4:
    lVar5 = plVar7[0x1d] - plVar7[0x1c];
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      plVar8 = (long *)(plVar7[0x1c] + 8);
      uVar6 = 0;
      do {
        if (*plVar8 == lVar10) {
          uVar9 = 1;
          goto LAB_01bff6f8;
        }
        uVar6 = uVar6 + 1;
        plVar8 = plVar8 + 6;
      } while (uVar6 < (ulong)((lVar5 >> 4) * -0x5555555555555555));
    }
    uVar9 = 0;
LAB_01bff6f8:
    plVar7[0x6c] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar7 + 0x354));
    plVar7 = local_50;
    *(ulong *)(param_1 + 0x10c8) = uVar9 | uVar6 << 0x20;
    lVar10 = *(long *)(param_1 + 0x10d8);
    lVar5 = nn::os::GetCurrentThread();
    plVar8 = plVar7 + 0x6c;
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar7 + 0x354));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01bff760;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01bff760:
    lVar5 = plVar7[0x24] - plVar7[0x23];
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      plVar8 = (long *)(plVar7[0x23] + 8);
      uVar6 = 0;
      do {
        if (*plVar8 == lVar10) {
          uVar9 = 1;
          goto LAB_01bff774;
        }
        uVar6 = uVar6 + 1;
        plVar8 = plVar8 + 6;
      } while (uVar6 < (ulong)((lVar5 >> 4) * -0x5555555555555555));
    }
    uVar9 = 0;
LAB_01bff774:
    plVar7[0x6c] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar7 + 0x354));
    plVar7 = local_50;
    *(ulong *)(param_1 + 0x1138) = uVar9 | uVar6 << 0x20;
    lVar10 = *(long *)(param_1 + 0x10f0);
    lVar5 = nn::os::GetCurrentThread();
    plVar8 = plVar7 + 0x6c;
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar7 + 0x354));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01bff7dc;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01bff7dc:
    lVar5 = plVar7[0x1d] - plVar7[0x1c];
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      plVar8 = (long *)(plVar7[0x1c] + 8);
      uVar6 = 0;
      do {
        if (*plVar8 == lVar10) {
          uVar9 = 1;
          goto LAB_01bff7f0;
        }
        uVar6 = uVar6 + 1;
        plVar8 = plVar8 + 6;
      } while (uVar6 < (ulong)((lVar5 >> 4) * -0x5555555555555555));
    }
    uVar9 = 0;
LAB_01bff7f0:
    plVar7[0x6c] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar7 + 0x354));
    plVar7 = local_50;
    *(ulong *)(param_1 + 0x1140) = uVar9 | uVar6 << 0x20;
    lVar10 = *(long *)(param_1 + 0x1108);
    lVar5 = nn::os::GetCurrentThread();
    plVar8 = plVar7 + 0x6c;
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar7 + 0x354));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01bff858;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01bff858:
    lVar5 = plVar7[0xf] - plVar7[0xe];
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      plVar8 = (long *)(plVar7[0xe] + 8);
      uVar6 = 0;
      do {
        if (*plVar8 == lVar10) {
          uVar9 = 1;
          goto LAB_01bff86c;
        }
        uVar6 = uVar6 + 1;
        plVar8 = plVar8 + 6;
      } while (uVar6 < (ulong)((lVar5 >> 4) * -0x5555555555555555));
    }
    uVar9 = 0;
LAB_01bff86c:
    plVar7[0x6c] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar7 + 0x354));
    plVar7 = local_50;
    *(ulong *)(param_1 + 0x1148) = uVar9 | uVar6 << 0x20;
    lVar10 = *(long *)(param_1 + 0x1120);
    lVar5 = nn::os::GetCurrentThread();
    plVar8 = plVar7 + 0x6c;
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar7 + 0x354));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01bff8d4;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01bff8d4:
    lVar5 = plVar7[0xf] - plVar7[0xe];
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      plVar8 = (long *)(plVar7[0xe] + 8);
      uVar6 = 0;
      do {
        if (*plVar8 == lVar10) {
          uVar9 = 1;
          goto LAB_01bff8e8;
        }
        uVar6 = uVar6 + 1;
        plVar8 = plVar8 + 6;
      } while (uVar6 < (ulong)((lVar5 >> 4) * -0x5555555555555555));
    }
    uVar9 = 0;
LAB_01bff8e8:
    plVar7[0x6c] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar7 + 0x354));
    plVar7 = local_50;
    *(ulong *)(param_1 + 0x1150) = uVar9 | uVar6 << 0x20;
    lVar10 = *(long *)(param_1 + 0x1160);
    lVar5 = nn::os::GetCurrentThread();
    plVar8 = plVar7 + 0x6c;
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar7 + 0x354));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01bff950;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01bff950:
    lVar5 = plVar7[0x1d] - plVar7[0x1c];
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      plVar8 = (long *)(plVar7[0x1c] + 8);
      uVar6 = 0;
      do {
        if (*plVar8 == lVar10) {
          uVar9 = 1;
          goto LAB_01bff964;
        }
        uVar6 = uVar6 + 1;
        plVar8 = plVar8 + 6;
      } while (uVar6 < (ulong)((lVar5 >> 4) * -0x5555555555555555));
    }
    uVar9 = 0;
LAB_01bff964:
    plVar7[0x6c] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar7 + 0x354));
    plVar7 = local_50;
    *(ulong *)(param_1 + 0x1190) = uVar9 | uVar6 << 0x20;
    lVar10 = *(long *)(param_1 + 0x1178);
    lVar5 = nn::os::GetCurrentThread();
    plVar8 = plVar7 + 0x6c;
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar7 + 0x354));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01bff9cc;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01bff9cc:
    lVar5 = plVar7[0xf] - plVar7[0xe];
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      plVar8 = (long *)(plVar7[0xe] + 8);
      uVar6 = 0;
      do {
        if (*plVar8 == lVar10) {
          uVar9 = 1;
          goto LAB_01bff9e0;
        }
        uVar6 = uVar6 + 1;
        plVar8 = plVar8 + 6;
      } while (uVar6 < (ulong)((lVar5 >> 4) * -0x5555555555555555));
    }
    uVar9 = 0;
LAB_01bff9e0:
    plVar7[0x6c] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar7 + 0x354));
    plVar7 = local_50;
    *(ulong *)(param_1 + 0x1198) = uVar9 | uVar6 << 0x20;
    lVar10 = *(long *)(param_1 + 0x11d8);
    lVar5 = nn::os::GetCurrentThread();
    plVar8 = plVar7 + 0x6c;
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar7 + 0x354));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01bffa48;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01bffa48:
    lVar5 = plVar7[0x1d] - plVar7[0x1c];
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      plVar8 = (long *)(plVar7[0x1c] + 8);
      uVar6 = 0;
      do {
        if (*plVar8 == lVar10) {
          uVar9 = 1;
          goto LAB_01bffa5c;
        }
        uVar6 = uVar6 + 1;
        plVar8 = plVar8 + 6;
      } while (uVar6 < (ulong)((lVar5 >> 4) * -0x5555555555555555));
    }
    uVar9 = 0;
LAB_01bffa5c:
    plVar7[0x6c] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar7 + 0x354));
    plVar7 = local_50;
    *(ulong *)(param_1 + 0x1208) = uVar9 | uVar6 << 0x20;
    lVar10 = *(long *)(param_1 + 0x11f0);
    lVar5 = nn::os::GetCurrentThread();
    plVar8 = plVar7 + 0x6c;
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar7 + 0x354));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01bffac4;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01bffac4:
    lVar5 = plVar7[0xf] - plVar7[0xe];
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      plVar8 = (long *)(plVar7[0xe] + 8);
      uVar6 = 0;
      do {
        if (*plVar8 == lVar10) {
          uVar9 = 1;
          goto LAB_01bffad8;
        }
        uVar6 = uVar6 + 1;
        plVar8 = plVar8 + 6;
      } while (uVar6 < (ulong)((lVar5 >> 4) * -0x5555555555555555));
    }
    uVar9 = 0;
LAB_01bffad8:
    plVar7[0x6c] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar7 + 0x354));
    plVar7 = local_50;
    *(ulong *)(param_1 + 0x1210) = uVar9 | uVar6 << 0x20;
    lVar10 = *(long *)(param_1 + 0x1218);
    lVar5 = nn::os::GetCurrentThread();
    plVar8 = plVar7 + 0x6c;
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar7 + 0x354));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01bffb40;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01bffb40:
    lVar5 = plVar7[0x24] - plVar7[0x23];
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      plVar8 = (long *)(plVar7[0x23] + 8);
      uVar6 = 0;
      do {
        if (*plVar8 == lVar10) {
          uVar9 = 1;
          goto LAB_01bffb54;
        }
        uVar6 = uVar6 + 1;
        plVar8 = plVar8 + 6;
      } while (uVar6 < (ulong)((lVar5 >> 4) * -0x5555555555555555));
    }
    uVar9 = 0;
LAB_01bffb54:
    plVar7[0x6c] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar7 + 0x354));
    plVar7 = local_50;
    *(ulong *)(param_1 + 0x1260) = uVar9 | uVar6 << 0x20;
    lVar10 = *(long *)(param_1 + 0x1230);
    lVar5 = nn::os::GetCurrentThread();
    plVar8 = plVar7 + 0x6c;
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar7 + 0x354));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01bffbbc;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01bffbbc:
    lVar5 = plVar7[0x24] - plVar7[0x23];
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      plVar8 = (long *)(plVar7[0x23] + 8);
      uVar6 = 0;
      do {
        if (*plVar8 == lVar10) {
          uVar9 = 1;
          goto LAB_01bffbd0;
        }
        uVar6 = uVar6 + 1;
        plVar8 = plVar8 + 6;
      } while (uVar6 < (ulong)((lVar5 >> 4) * -0x5555555555555555));
    }
    uVar9 = 0;
LAB_01bffbd0:
    plVar7[0x6c] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar7 + 0x354));
    plVar7 = local_50;
    *(ulong *)(param_1 + 0x1268) = uVar9 | uVar6 << 0x20;
    lVar10 = *(long *)(param_1 + 0x1248);
    lVar5 = nn::os::GetCurrentThread();
    plVar8 = plVar7 + 0x6c;
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar7 + 0x354));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01bffc38;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01bffc38:
    lVar5 = plVar7[0xf] - plVar7[0xe];
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      plVar8 = (long *)(plVar7[0xe] + 8);
      uVar6 = 0;
      do {
        if (*plVar8 == lVar10) {
          uVar9 = 1;
          goto LAB_01bffc4c;
        }
        uVar6 = uVar6 + 1;
        plVar8 = plVar8 + 6;
      } while (uVar6 < (ulong)((lVar5 >> 4) * -0x5555555555555555));
    }
    uVar9 = 0;
LAB_01bffc4c:
    plVar7[0x6c] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar7 + 0x354));
    plVar7 = local_50;
    *(ulong *)(param_1 + 0x1270) = uVar9 | uVar6 << 0x20;
    lVar10 = *(long *)(param_1 + 0x1278);
    lVar5 = nn::os::GetCurrentThread();
    plVar8 = plVar7 + 0x6c;
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar7 + 0x354));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01bffcb4;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01bffcb4:
    lVar5 = plVar7[0x1d] - plVar7[0x1c];
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      plVar8 = (long *)(plVar7[0x1c] + 8);
      uVar6 = 0;
      do {
        if (*plVar8 == lVar10) {
          uVar9 = 1;
          goto LAB_01bffcc8;
        }
        uVar6 = uVar6 + 1;
        plVar8 = plVar8 + 6;
      } while (uVar6 < (ulong)((lVar5 >> 4) * -0x5555555555555555));
    }
    uVar9 = 0;
LAB_01bffcc8:
    plVar7[0x6c] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar7 + 0x354));
    plVar7 = local_50;
    *(ulong *)(param_1 + 0x1290) = uVar9 | uVar6 << 0x20;
    lVar10 = *(long *)(param_1 + 0x1298);
    lVar5 = nn::os::GetCurrentThread();
    plVar8 = plVar7 + 0x6c;
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar7 + 0x354));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01bffd30;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01bffd30:
    lVar5 = plVar7[0x1d] - plVar7[0x1c];
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      plVar8 = (long *)(plVar7[0x1c] + 8);
      uVar6 = 0;
      do {
        if (*plVar8 == lVar10) {
          uVar9 = 1;
          goto LAB_01bffd44;
        }
        uVar6 = uVar6 + 1;
        plVar8 = plVar8 + 6;
      } while (uVar6 < (ulong)((lVar5 >> 4) * -0x5555555555555555));
    }
    uVar9 = 0;
LAB_01bffd44:
    plVar7[0x6c] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar7 + 0x354));
    plVar7 = local_50;
    *(ulong *)(param_1 + 0x12b0) = uVar9 | uVar6 << 0x20;
    lVar10 = *(long *)(param_1 + 0x12b8);
    lVar5 = nn::os::GetCurrentThread();
    plVar8 = plVar7 + 0x6c;
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar7 + 0x354));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01bffdac;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01bffdac:
    lVar5 = plVar7[0x1d] - plVar7[0x1c];
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      plVar8 = (long *)(plVar7[0x1c] + 8);
      uVar6 = 0;
      do {
        if (*plVar8 == lVar10) {
          uVar9 = 1;
          goto LAB_01bffdc0;
        }
        uVar6 = uVar6 + 1;
        plVar8 = plVar8 + 6;
      } while (uVar6 < (ulong)((lVar5 >> 4) * -0x5555555555555555));
    }
    uVar9 = 0;
LAB_01bffdc0:
    plVar7[0x6c] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar7 + 0x354));
    plVar7 = local_50;
    *(ulong *)(param_1 + 0x12d0) = uVar9 | uVar6 << 0x20;
    lVar10 = *(long *)(param_1 + 0x12d8);
    lVar5 = nn::os::GetCurrentThread();
    plVar8 = plVar7 + 0x6c;
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar7 + 0x354));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01bffe28;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01bffe28:
    lVar5 = plVar7[0x1d] - plVar7[0x1c];
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      plVar8 = (long *)(plVar7[0x1c] + 8);
      uVar6 = 0;
      do {
        if (*plVar8 == lVar10) {
          uVar9 = 1;
          goto LAB_01bffe3c;
        }
        uVar6 = uVar6 + 1;
        plVar8 = plVar8 + 6;
      } while (uVar6 < (ulong)((lVar5 >> 4) * -0x5555555555555555));
    }
    uVar9 = 0;
LAB_01bffe3c:
    plVar7[0x6c] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar7 + 0x354));
    plVar7 = local_50;
    *(ulong *)(param_1 + 0x12f0) = uVar9 | uVar6 << 0x20;
    lVar10 = *(long *)(param_1 + 0x12f8);
    lVar5 = nn::os::GetCurrentThread();
    plVar8 = plVar7 + 0x6c;
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar7 + 0x354));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01bffea4;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01bffea4:
    lVar5 = plVar7[0x1d] - plVar7[0x1c];
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      plVar8 = (long *)(plVar7[0x1c] + 8);
      uVar6 = 0;
      do {
        if (*plVar8 == lVar10) {
          uVar9 = 1;
          goto LAB_01bffeb8;
        }
        uVar6 = uVar6 + 1;
        plVar8 = plVar8 + 6;
      } while (uVar6 < (ulong)((lVar5 >> 4) * -0x5555555555555555));
    }
    uVar9 = 0;
LAB_01bffeb8:
    plVar7[0x6c] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar7 + 0x354));
    plVar7 = local_50;
    *(ulong *)(param_1 + 0x1310) = uVar9 | uVar6 << 0x20;
    lVar10 = *(long *)(param_1 + 0x1318);
    lVar5 = nn::os::GetCurrentThread();
    plVar8 = plVar7 + 0x6c;
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar7 + 0x354));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01bfff20;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01bfff20:
    lVar5 = plVar7[0xf] - plVar7[0xe];
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      plVar8 = (long *)(plVar7[0xe] + 8);
      uVar6 = 0;
      do {
        if (*plVar8 == lVar10) {
          uVar9 = 1;
          goto LAB_01bfff34;
        }
        uVar6 = uVar6 + 1;
        plVar8 = plVar8 + 6;
      } while (uVar6 < (ulong)((lVar5 >> 4) * -0x5555555555555555));
    }
    uVar9 = 0;
LAB_01bfff34:
    plVar7[0x6c] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar7 + 0x354));
    plVar7 = local_50;
    *(ulong *)(param_1 + 0x1330) = uVar9 | uVar6 << 0x20;
    lVar10 = *(long *)(param_1 + 0x1338);
    lVar5 = nn::os::GetCurrentThread();
    plVar8 = plVar7 + 0x6c;
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar7 + 0x354));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01bfff9c;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01bfff9c:
    lVar5 = plVar7[0x1d] - plVar7[0x1c];
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      plVar8 = (long *)(plVar7[0x1c] + 8);
      uVar6 = 0;
      do {
        if (*plVar8 == lVar10) {
          uVar9 = 1;
          goto LAB_01bfffb0;
        }
        uVar6 = uVar6 + 1;
        plVar8 = plVar8 + 6;
      } while (uVar6 < (ulong)((lVar5 >> 4) * -0x5555555555555555));
    }
    uVar9 = 0;
LAB_01bfffb0:
    plVar7[0x6c] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar7 + 0x354));
    plVar7 = local_50;
    *(ulong *)(param_1 + 0x1368) = uVar9 | uVar6 << 0x20;
    lVar10 = *(long *)(param_1 + 0x1350);
    lVar5 = nn::os::GetCurrentThread();
    plVar8 = plVar7 + 0x6c;
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar7 + 0x354));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01c00018;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01c00018:
    lVar5 = plVar7[0xf] - plVar7[0xe];
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      plVar8 = (long *)(plVar7[0xe] + 8);
      uVar6 = 0;
      do {
        if (*plVar8 == lVar10) {
          uVar9 = 1;
          goto LAB_01c0002c;
        }
        uVar6 = uVar6 + 1;
        plVar8 = plVar8 + 6;
      } while (uVar6 < (ulong)((lVar5 >> 4) * -0x5555555555555555));
    }
    uVar9 = 0;
LAB_01c0002c:
    plVar7[0x6c] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar7 + 0x354));
    plVar7 = local_50;
    *(ulong *)(param_1 + 0x1370) = uVar9 | uVar6 << 0x20;
    lVar10 = *(long *)(param_1 + 0x11b8);
    lVar5 = nn::os::GetCurrentThread();
    plVar8 = plVar7 + 0x6c;
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar7 + 0x354));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01c00094;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01c00094:
    lVar5 = plVar7[0x1d] - plVar7[0x1c];
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      plVar8 = (long *)(plVar7[0x1c] + 8);
      uVar6 = 0;
      do {
        if (*plVar8 == lVar10) {
          uVar9 = 1;
          goto LAB_01c000a8;
        }
        uVar6 = uVar6 + 1;
        plVar8 = plVar8 + 6;
      } while (uVar6 < (ulong)((lVar5 >> 4) * -0x5555555555555555));
    }
    uVar9 = 0;
LAB_01c000a8:
    plVar7[0x6c] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar7 + 0x354));
    plVar7 = local_50;
    *(ulong *)(param_1 + 0x11d0) = uVar9 | uVar6 << 0x20;
    lVar10 = *(long *)(param_1 + 0x1678);
    lVar5 = nn::os::GetCurrentThread();
    plVar8 = plVar7 + 0x6c;
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar7 + 0x354));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01c00110;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01c00110:
    lVar5 = plVar7[0x24] - plVar7[0x23];
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      plVar8 = (long *)(plVar7[0x23] + 8);
      uVar6 = 0;
      do {
        if (*plVar8 == lVar10) {
          uVar9 = 1;
          goto LAB_01c00124;
        }
        uVar6 = uVar6 + 1;
        plVar8 = plVar8 + 6;
      } while (uVar6 < (ulong)((lVar5 >> 4) * -0x5555555555555555));
    }
    uVar9 = 0;
LAB_01c00124:
    plVar7[0x6c] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar7 + 0x354));
    plVar7 = local_50;
    *(ulong *)(param_1 + 0x16c0) = uVar9 | uVar6 << 0x20;
    lVar10 = *(long *)(param_1 + 0x1690);
    lVar5 = nn::os::GetCurrentThread();
    plVar8 = plVar7 + 0x6c;
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar7 + 0x354));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01c0018c;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01c0018c:
    lVar5 = plVar7[0x24] - plVar7[0x23];
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      plVar8 = (long *)(plVar7[0x23] + 8);
      uVar6 = 0;
      do {
        if (*plVar8 == lVar10) {
          uVar9 = 1;
          goto LAB_01c001a0;
        }
        uVar6 = uVar6 + 1;
        plVar8 = plVar8 + 6;
      } while (uVar6 < (ulong)((lVar5 >> 4) * -0x5555555555555555));
    }
    uVar9 = 0;
LAB_01c001a0:
    plVar7[0x6c] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar7 + 0x354));
    plVar7 = local_50;
    *(ulong *)(param_1 + 0x16c8) = uVar9 | uVar6 << 0x20;
    lVar10 = *(long *)(param_1 + 0x16a8);
    lVar5 = nn::os::GetCurrentThread();
    plVar8 = plVar7 + 0x6c;
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar7 + 0x354));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01c00208;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01c00208:
    lVar5 = plVar7[0x24] - plVar7[0x23];
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      plVar8 = (long *)(plVar7[0x23] + 8);
      uVar6 = 0;
      do {
        if (*plVar8 == lVar10) {
          uVar9 = 1;
          goto LAB_01c0021c;
        }
        uVar6 = uVar6 + 1;
        plVar8 = plVar8 + 6;
      } while (uVar6 < (ulong)((lVar5 >> 4) * -0x5555555555555555));
    }
    uVar9 = 0;
LAB_01c0021c:
    plVar7[0x6c] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar7 + 0x354));
    *(ulong *)(param_1 + 0x16d0) = uVar9 | uVar6 << 0x20;
    if (local_50 != (long *)0x0) {
      lVar5 = local_50[0xb];
      piVar1 = (int *)(lVar5 + 0xc);
      do {
        iVar4 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 + -1 == 0) {
        *(undefined8 *)(lVar5 + 0x18) = 0;
        (**(code **)(*local_50 + 0x20))();
      }
    }
  }
  return;
}


