/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015577dc; name: FUN_015577dc
 */


void FUN_015577dc(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  
  FUN_02a6f650();
  *param_1 = &PTR_LAB_0421cf20;
  param_1[0x71] = param_2;
  param_1[0x72] = 0;
  param_1[9] = &PTR_LAB_0421cfa0;
  param_1[10] = &PTR_FUN_0421cfe8;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  FUN_01569584(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x85) = 0;
  param_1[0x86] = 0;
  *(undefined1 *)(param_1 + 0x87) = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x88] = PTR_DAT_0437a888 + 0x10;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0;
  FUN_015580f4(&local_88,param_1[0x71],param_1 + 0x71);
  plVar5 = (long *)param_1[0x76];
  param_1[0x76] = 0;
  if (plVar5 != (long *)0x0) {
    lVar8 = plVar5[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  param_1[0x76] = local_88;
  plVar5 = (long *)FUN_00958ac0(&local_88,param_1[0x71]);
  FUN_02a6fcd8();
  if (plVar5 != (long *)0x0) {
    lVar8 = plVar5[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_015580d8;
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_68 = plVar5;
  FUN_02a700c0(param_1,&local_68);
  if (local_68 != (long *)0x0) {
    lVar8 = local_68[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  local_90 = param_1;
  FUN_01558170(&local_88,*(undefined8 *)(param_1[0x76] + 0xb0),&local_90);
  uVar6 = local_88;
  local_88 = 0;
  lVar8 = param_1[0x72];
  param_1[0x72] = uVar6;
  if (lVar8 != 0) {
    FUN_01569c8c(param_1 + 0x73);
  }
  param_1[0x74] = uStack_78;
  param_1[0x75] = local_70;
  param_1[0x73] = local_80;
  FUN_01558280(&local_88,param_1[1]);
  lVar8 = param_1[0x76];
  plVar5 = *(long **)(lVar8 + 0x68);
  *(undefined8 *)(lVar8 + 0x68) = 0;
  if (plVar5 != (long *)0x0) {
    lVar9 = plVar5[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  *(undefined8 *)(lVar8 + 0x68) = local_88;
  lVar8 = *(long *)(param_1[0x76] + 0x68);
  pcVar10 = *(code **)(lVar8 + 0x3a8);
  if (pcVar10 != (code *)0x0) {
    *(undefined8 *)(lVar8 + 0x3b0) = 0;
    *(undefined8 *)(lVar8 + 0x3b8) = 0;
    *(undefined8 *)(lVar8 + 0x3a0) = 0;
    *(undefined8 *)(lVar8 + 0x3a8) = 0;
    (*pcVar10)(lVar8 + 0x3c0);
  }
  *(undefined8 **)(lVar8 + 0x3c0) = param_1;
  *(undefined1 **)(lVar8 + 0x3c8) = &LAB_01558300;
  *(undefined8 *)(lVar8 + 0x3d0) = 0;
  *(undefined1 **)(lVar8 + 0x3a0) = &LAB_0156a5a4;
  *(undefined1 **)(lVar8 + 0x3a8) = &LAB_0156a5c0;
  *(undefined1 **)(lVar8 + 0x3b0) = &LAB_0156a5c4;
  *(undefined1 **)(lVar8 + 0x3b8) = &LAB_0156a5d8;
  FUN_01558280(&local_88,param_1[1]);
  lVar8 = param_1[0x76];
  plVar5 = *(long **)(lVar8 + 0x70);
  *(undefined8 *)(lVar8 + 0x70) = 0;
  if (plVar5 != (long *)0x0) {
    lVar9 = plVar5[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  *(undefined8 *)(lVar8 + 0x70) = local_88;
  lVar8 = *(long *)(param_1[0x76] + 0x70);
  pcVar10 = *(code **)(lVar8 + 0x3a8);
  if (pcVar10 != (code *)0x0) {
    *(undefined8 *)(lVar8 + 0x3b0) = 0;
    *(undefined8 *)(lVar8 + 0x3b8) = 0;
    *(undefined8 *)(lVar8 + 0x3a0) = 0;
    *(undefined8 *)(lVar8 + 0x3a8) = 0;
    (*pcVar10)(lVar8 + 0x3c0);
  }
  *(undefined8 **)(lVar8 + 0x3c0) = param_1;
  *(undefined1 **)(lVar8 + 0x3c8) = &LAB_01559454;
  *(undefined8 *)(lVar8 + 0x3d0) = 0;
  *(undefined1 **)(lVar8 + 0x3a0) = &LAB_0156a5a4;
  *(undefined1 **)(lVar8 + 0x3a8) = &LAB_0156a5c0;
  *(undefined1 **)(lVar8 + 0x3b0) = &LAB_0156a5c4;
  *(undefined1 **)(lVar8 + 0x3b8) = &LAB_0156a5d8;
  FUN_01558280(&local_88,param_1[1]);
  lVar8 = param_1[0x76];
  plVar5 = *(long **)(lVar8 + 0x88);
  *(undefined8 *)(lVar8 + 0x88) = 0;
  if (plVar5 != (long *)0x0) {
    lVar9 = plVar5[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  *(undefined8 *)(lVar8 + 0x88) = local_88;
  FUN_01558280(&local_88,param_1[1]);
  lVar8 = param_1[0x76];
  plVar5 = *(long **)(lVar8 + 0x90);
  *(undefined8 *)(lVar8 + 0x90) = 0;
  if (plVar5 != (long *)0x0) {
    lVar9 = plVar5[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  *(undefined8 *)(lVar8 + 0x90) = local_88;
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379678), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar8 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar8;
  plVar5 = *(long **)(lVar8 + 0xc0);
  if (plVar5 != (long *)0x0) {
    lVar8 = plVar5[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_015580d8;
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar8 = plVar5[0x27];
  lVar9 = plVar5[0x28];
  lVar11 = plVar5[0x2a];
  lVar13 = plVar5[0x2d];
  lVar14 = *(long *)(param_1[0x76] + 0x68);
  lVar7 = nn::os::GetCurrentThread();
  plVar12 = (long *)(lVar14 + 0x208);
  do {
    if (*plVar12 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x1fc));
        while (*plVar12 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = lVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01557c08;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = lVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01557c08:
  FUN_02a70468(lVar14,lVar8,0);
  lVar7 = *(long *)(param_1[0x76] + 0x88);
  lVar8 = nn::os::GetCurrentThread();
  plVar12 = (long *)(lVar7 + 0x208);
  do {
    if (*plVar12 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x1fc));
        while (*plVar12 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = lVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01557c68;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01557c68:
  FUN_02a70468(lVar7,*(undefined8 *)(param_1[0x76] + 0x68),0);
  FUN_02a70468(lVar7,0,lVar9);
  *(undefined8 *)(lVar7 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x1fc));
  *(undefined8 *)(lVar14 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0x1fc));
  lVar9 = *(long *)(param_1[0x76] + 0x70);
  lVar8 = nn::os::GetCurrentThread();
  plVar12 = (long *)(lVar9 + 0x208);
  do {
    if (*plVar12 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x1fc));
        while (*plVar12 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = lVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01557cfc;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01557cfc:
  FUN_02a70468(lVar9,lVar13,0);
  FUN_02a70468(lVar9,0,*(undefined8 *)(param_1[0x76] + 0x90));
  lVar7 = *(long *)(param_1[0x76] + 0x90);
  lVar8 = nn::os::GetCurrentThread();
  plVar12 = (long *)(lVar7 + 0x208);
  do {
    if (*plVar12 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x1fc));
        while (*plVar12 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = lVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01557d70;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01557d70:
  FUN_02a70468(lVar7,0,lVar11);
  *(undefined8 *)(lVar7 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x1fc));
  *(undefined8 *)(lVar9 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x1fc));
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379678), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar8 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar8;
  plVar12 = *(long **)(lVar8 + 0xc0);
  if (plVar12 != (long *)0x0) {
    lVar8 = plVar12[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_015580d8;
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar8 = plVar12[0x2f];
  lVar9 = param_1[0x76];
  *(long *)(lVar9 + 0x98) = plVar12[0x2e];
  *(long *)(lVar9 + 0xa0) = lVar8;
  if (plVar12 != (long *)0x0) {
    lVar8 = plVar12[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  lVar9 = *(long *)(*(long *)(param_1[0x76] + 0xa8) + 0x68);
  lVar8 = nn::os::GetCurrentThread();
  plVar12 = (long *)(lVar9 + 0x208);
  do {
    if (*plVar12 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x1fc));
        while (*plVar12 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = lVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01557e88;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01557e88:
  lVar7 = *(long *)(param_1[0x76] + 0x98);
  lVar8 = lVar7;
  if (*(long *)(lVar7 + 0x1d0) != 0) {
    lVar8 = *(long *)(lVar7 + 0x1d0);
  }
  if (*(long *)(lVar7 + 0x1d8) != 0) {
    lVar7 = *(long *)(lVar7 + 0x1d8);
  }
  if (lVar8 != lVar7) {
    FUN_02a70230(lVar9);
    *(undefined8 *)(lVar9 + 0x208) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x1fc));
    lVar9 = *(long *)(*(long *)(param_1[0x76] + 0xa8) + 0x70);
    lVar8 = nn::os::GetCurrentThread();
    plVar12 = (long *)(lVar9 + 0x208);
    do {
      if (*plVar12 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x1fc));
          while (*plVar12 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *plVar12 = lVar8;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01557f18;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01557f18:
    lVar7 = *(long *)(param_1[0x76] + 0xa0);
    lVar8 = lVar7;
    if (*(long *)(lVar7 + 0x1d0) != 0) {
      lVar8 = *(long *)(lVar7 + 0x1d0);
    }
    if (*(long *)(lVar7 + 0x1d8) != 0) {
      lVar7 = *(long *)(lVar7 + 0x1d8);
    }
    if (lVar8 != lVar7) {
      FUN_02a70230(lVar9);
      *(undefined8 *)(lVar9 + 0x208) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x1fc));
      FUN_01559460(param_1 + 0x78);
      if (plVar5 != (long *)0x0) {
        lVar8 = plVar5[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
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
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*plVar5 + 0x20))(plVar5);
        }
      }
      return;
    }
  }
LAB_015580d8:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


