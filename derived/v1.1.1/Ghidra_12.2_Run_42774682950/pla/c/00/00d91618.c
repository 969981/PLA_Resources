/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d91618; name: FUN_00d91618
 */


void FUN_00d91618(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  code *pcVar13;
  long *plVar14;
  long lVar15;
  long local_80;
  undefined8 local_78;
  undefined8 *local_58;
  
  FUN_00db74f4();
  *param_1 = &PTR_LAB_041ecd48;
  param_1[0x1b] = param_2;
  param_1[9] = &PTR_LAB_041ecdb8;
  param_1[10] = &PTR_LAB_041ece00;
  plVar14 = param_1 + 0x1c;
  *plVar14 = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x2f] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  local_58 = param_1;
  FUN_00d923c8(&local_80,param_3,&local_58);
  plVar10 = (long *)*plVar14;
  *plVar14 = 0;
  if (plVar10 != (long *)0x0) {
    lVar12 = plVar10[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))();
    }
  }
  *plVar14 = local_80;
  lVar12 = FUN_009584a0(&local_80,param_3);
  *(ulong *)(lVar12 + 0x1e0) = *(ulong *)(lVar12 + 0x1e0) | 8;
  if (lVar12 != 0) {
    lVar15 = *(long *)(lVar12 + 0x58);
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_00d923b0;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar10 = (long *)param_1[0x1d];
  param_1[0x1d] = 0;
  if (plVar10 != (long *)0x0) {
    lVar15 = plVar10[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))();
    }
  }
  param_1[0x1d] = lVar12;
  local_58 = param_1;
  FUN_00d923c8(&local_80,param_3,&local_58);
  plVar10 = (long *)param_1[0x1e];
  param_1[0x1e] = 0;
  if (plVar10 != (long *)0x0) {
    lVar12 = plVar10[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))();
    }
  }
  param_1[0x1e] = local_80;
  lVar12 = FUN_009584a0(&local_80,param_3);
  *(ulong *)(lVar12 + 0x1e0) = *(ulong *)(lVar12 + 0x1e0) | 8;
  if (lVar12 != 0) {
    lVar15 = *(long *)(lVar12 + 0x58);
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_00d923b0;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar10 = (long *)param_1[0x1f];
  param_1[0x1f] = 0;
  if (plVar10 != (long *)0x0) {
    lVar15 = plVar10[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))();
    }
  }
  param_1[0x1f] = lVar12;
  lVar12 = FUN_00958ac0(&local_80,param_3);
  *(ulong *)(lVar12 + 0x1e0) = *(ulong *)(lVar12 + 0x1e0) | 8;
  if (lVar12 != 0) {
    lVar15 = *(long *)(lVar12 + 0x58);
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_00d923b0;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar10 = (long *)param_1[0x20];
  param_1[0x20] = 0;
  if (plVar10 != (long *)0x0) {
    lVar15 = plVar10[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))();
    }
  }
  param_1[0x20] = lVar12;
  lVar12 = FUN_00958ac0(&local_80,param_3);
  *(ulong *)(lVar12 + 0x1e0) = *(ulong *)(lVar12 + 0x1e0) | 8;
  if (lVar12 != 0) {
    lVar15 = *(long *)(lVar12 + 0x58);
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_00d923b0;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar10 = (long *)param_1[0x21];
  param_1[0x21] = 0;
  if (plVar10 != (long *)0x0) {
    lVar15 = plVar10[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))();
    }
  }
  param_1[0x21] = lVar12;
  lVar12 = FUN_00958ac0(&local_80,param_3);
  *(ulong *)(lVar12 + 0x1e0) = *(ulong *)(lVar12 + 0x1e0) | 8;
  if (lVar12 != 0) {
    lVar15 = *(long *)(lVar12 + 0x58);
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_00d923b0;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar10 = (long *)param_1[0x22];
  param_1[0x22] = 0;
  if (plVar10 != (long *)0x0) {
    lVar15 = plVar10[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))();
    }
  }
  param_1[0x22] = lVar12;
  lVar12 = FUN_00958ac0(&local_80,param_3);
  *(ulong *)(lVar12 + 0x1e0) = *(ulong *)(lVar12 + 0x1e0) | 8;
  if (lVar12 != 0) {
    lVar15 = *(long *)(lVar12 + 0x58);
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_00d923b0;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar10 = (long *)param_1[0x23];
  param_1[0x23] = 0;
  if (plVar10 != (long *)0x0) {
    lVar15 = plVar10[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))();
    }
  }
  param_1[0x23] = lVar12;
  lVar12 = FUN_00958ac0(&local_80,param_3);
  *(ulong *)(lVar12 + 0x1e0) = *(ulong *)(lVar12 + 0x1e0) | 8;
  if (lVar12 != 0) {
    lVar15 = *(long *)(lVar12 + 0x58);
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_00d923b0;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar10 = (long *)param_1[0x24];
  param_1[0x24] = 0;
  if (plVar10 != (long *)0x0) {
    lVar15 = plVar10[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))();
    }
  }
  param_1[0x24] = lVar12;
  lVar12 = FUN_00958ac0(&local_80,param_3);
  *(ulong *)(lVar12 + 0x1e0) = *(ulong *)(lVar12 + 0x1e0) | 8;
  if (lVar12 != 0) {
    lVar15 = *(long *)(lVar12 + 0x58);
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_00d923b0;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar10 = (long *)param_1[0x25];
  param_1[0x25] = 0;
  if (plVar10 != (long *)0x0) {
    lVar15 = plVar10[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))();
    }
  }
  param_1[0x25] = lVar12;
  lVar12 = FUN_00958ac0(&local_80,param_3);
  *(ulong *)(lVar12 + 0x1e0) = *(ulong *)(lVar12 + 0x1e0) | 8;
  if (lVar12 != 0) {
    lVar15 = *(long *)(lVar12 + 0x58);
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
LAB_00d923b0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar10 = (long *)param_1[0x26];
  param_1[0x26] = 0;
  if (plVar10 != (long *)0x0) {
    lVar15 = plVar10[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))();
    }
  }
  param_1[0x26] = lVar12;
  param_1[0x27] = param_1[0x1c];
  param_1[0x28] = param_1[0x1d];
  param_1[0x29] = param_1[0x1e];
  param_1[0x2c] = param_1[0x21];
  param_1[0x2d] = lVar12;
  param_1[0x2a] = param_1[0x1f];
  param_1[0x2b] = param_1[0x20];
  param_1[0x2e] = param_1[0x1d];
  param_1[0x2f] = param_1[0x1f];
  FUN_00d8c934(&local_80,param_2);
  lVar15 = param_1[0x1c];
  lVar12 = nn::os::GetCurrentThread();
  plVar10 = (long *)(lVar15 + 0x208);
  do {
    if (*plVar10 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x1fc));
        while (*plVar10 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar12;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00d91c30;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *plVar10 = lVar12;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00d91c30:
  FUN_02a70468(lVar15,local_80,0);
  FUN_02a70468(lVar15,0,param_1[0x1d]);
  lVar12 = FUN_02a579b0();
  FUN_02a70468(lVar15,0,*(undefined8 *)(lVar12 + 0x68));
  *(undefined8 *)(lVar15 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x1fc));
  lVar15 = param_1[0x1e];
  lVar12 = nn::os::GetCurrentThread();
  plVar10 = (long *)(lVar15 + 0x208);
  do {
    if (*plVar10 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x1fc));
        while (*plVar10 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar12;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00d91cc0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *plVar10 = lVar12;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00d91cc0:
  FUN_02a70468(lVar15,param_1[0x1d],0);
  FUN_02a70468(lVar15,0,param_1[0x1f]);
  lVar12 = FUN_02a579b0();
  FUN_02a70468(lVar15,*(undefined8 *)(lVar12 + 0x68),0);
  lVar12 = FUN_02a579b0();
  FUN_02a70468(lVar15,0,*(undefined8 *)(lVar12 + 0x70));
  *(undefined8 *)(lVar15 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x1fc));
  lVar15 = param_1[0x20];
  lVar12 = nn::os::GetCurrentThread();
  plVar10 = (long *)(lVar15 + 0x208);
  do {
    if (*plVar10 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x1fc));
        while (*plVar10 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar12;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00d91d64;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *plVar10 = lVar12;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00d91d64:
  FUN_02a70468(lVar15,param_1[0x1f],0);
  FUN_02a70468(lVar15,0,local_78);
  lVar12 = FUN_02a579b0();
  FUN_02a70468(lVar15,*(undefined8 *)(lVar12 + 0x70),0);
  puVar4 = PTR_DAT_0437b4f8;
  if (((*PTR_DAT_0437b4f8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437b4f8), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_0437b590,PTR_DAT_0437b500,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b4f8);
  }
  puVar6 = PTR_DAT_0437b508;
  puVar5 = PTR_DAT_0437b500;
  lVar12 = *(long *)PTR_DAT_0437b500;
  *(long *)PTR_DAT_0437b508 = lVar12;
  FUN_02a70468(lVar15,0,*(undefined8 *)(lVar12 + 0x50));
  *(undefined8 *)(lVar15 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x1fc));
  lVar15 = param_1[0x21];
  lVar12 = nn::os::GetCurrentThread();
  plVar10 = (long *)(lVar15 + 0x208);
  do {
    if (*plVar10 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x1fc));
        while (*plVar10 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar12;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00d91e2c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *plVar10 = lVar12;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00d91e2c:
  FUN_02a70468(lVar15,param_1[0x1d],0);
  FUN_02a70468(lVar15,0,param_1[0x24]);
  FUN_02a70468(lVar15,0,param_1[0x22]);
  *(undefined8 *)(lVar15 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x1fc));
  lVar15 = param_1[0x25];
  lVar12 = nn::os::GetCurrentThread();
  plVar10 = (long *)(lVar15 + 0x208);
  do {
    if (*plVar10 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x1fc));
        while (*plVar10 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar12;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00d91eb8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *plVar10 = lVar12;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00d91eb8:
  FUN_02a70468(lVar15,param_1[0x24],0);
  FUN_02a70468(lVar15,0,param_1[0x26]);
  *(undefined8 *)(lVar15 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x1fc));
  lVar15 = param_1[0x23];
  lVar12 = nn::os::GetCurrentThread();
  plVar10 = (long *)(lVar15 + 0x208);
  do {
    if (*plVar10 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x1fc));
        while (*plVar10 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar12;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00d91f34;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *plVar10 = lVar12;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00d91f34:
  FUN_02a70468(lVar15,param_1[0x22],0);
  FUN_02a70468(lVar15,0,param_1[0x26]);
  *(undefined8 *)(lVar15 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x1fc));
  lVar15 = param_1[0x26];
  lVar12 = nn::os::GetCurrentThread();
  plVar10 = (long *)(lVar15 + 0x208);
  do {
    if (*plVar10 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x1fc));
        while (*plVar10 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar12;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00d91fb0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *plVar10 = lVar12;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00d91fb0:
  FUN_02a70468(lVar15,0,param_1[0x1f]);
  *(undefined8 *)(lVar15 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x1fc));
  if (((*PTR_DAT_0437b578 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437b578), iVar9 != 0))
  {
    FUN_00100250(&LAB_00d929e0,PTR_DAT_0437b580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b578);
  }
  uVar11 = *(undefined8 *)PTR_DAT_0437b580;
  *(undefined8 *)PTR_DAT_0437b588 = uVar11;
  FUN_02899ef4(uVar11,param_1[0x22],param_1[0x23]);
  if (((*PTR_DAT_0437a648 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a648);
  }
  uVar11 = *(undefined8 *)PTR_DAT_0437a650;
  *(undefined8 *)PTR_DAT_0437a658 = uVar11;
  FUN_02c0009c(uVar11,param_1[0x24],param_1[0x25]);
  lVar12 = param_1[0x1c];
  plVar10 = (long *)(*(code *)**(undefined8 **)(lVar12 + 0x50))((undefined8 *)(lVar12 + 0x50));
  puVar8 = PTR_DAT_0437b518;
  puVar7 = PTR_DAT_0437b510;
  if (((*PTR_DAT_0437b510 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437b510), iVar9 != 0))
  {
    uVar11 = FUN_00d8faf4();
    *(undefined8 *)puVar8 = uVar11;
    __cxa_guard_release(PTR_DAT_0437b510);
  }
  for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
    if (plVar10 == (long *)puVar8) {
      pcVar13 = *(code **)(lVar12 + 0x3a8);
      if (pcVar13 != (code *)0x0) {
        *(undefined8 *)(lVar12 + 0x3b0) = 0;
        *(undefined8 *)(lVar12 + 0x3b8) = 0;
        *(undefined8 *)(lVar12 + 0x3a0) = 0;
        *(undefined8 *)(lVar12 + 0x3a8) = 0;
        (*pcVar13)(lVar12 + 0x3c0);
      }
      *(undefined1 **)(lVar12 + 0x3a0) = &LAB_00d92c50;
      *(undefined8 **)(lVar12 + 0x3c0) = param_1;
      *(undefined1 **)(lVar12 + 0x3a8) = &LAB_00d93084;
      *(undefined1 **)(lVar12 + 0x3b0) = &LAB_00d93088;
      *(undefined1 **)(lVar12 + 0x3b8) = &LAB_00d93094;
      break;
    }
  }
  lVar12 = param_1[0x1e];
  plVar10 = (long *)(*(code *)**(undefined8 **)(lVar12 + 0x50))((undefined8 *)(lVar12 + 0x50));
  if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437b510), iVar9 != 0)) {
    uVar11 = FUN_00d8faf4();
    *(undefined8 *)puVar8 = uVar11;
    __cxa_guard_release(PTR_DAT_0437b510);
  }
  do {
    if (plVar10 == (long *)0x0) {
LAB_00d92110:
      if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437b4f8), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_0437b590,PTR_DAT_0437b500,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437b4f8);
      }
      lVar12 = *(long *)puVar5;
      *(long *)puVar6 = lVar12;
      FUN_00d9244c(*(undefined8 *)(lVar12 + 0x58));
      return;
    }
    if (plVar10 == (long *)puVar8) {
      pcVar13 = *(code **)(lVar12 + 0x3a8);
      if (pcVar13 != (code *)0x0) {
        *(undefined8 *)(lVar12 + 0x3b0) = 0;
        *(undefined8 *)(lVar12 + 0x3b8) = 0;
        *(undefined8 *)(lVar12 + 0x3a0) = 0;
        *(undefined8 *)(lVar12 + 0x3a8) = 0;
        (*pcVar13)(lVar12 + 0x3c0);
      }
      *(undefined1 **)(lVar12 + 0x3a0) = &LAB_00d930a0;
      *(undefined8 **)(lVar12 + 0x3c0) = param_1;
      *(undefined1 **)(lVar12 + 0x3a8) = &LAB_00d931e4;
      *(undefined1 **)(lVar12 + 0x3b0) = &LAB_00d931e8;
      *(undefined1 **)(lVar12 + 0x3b8) = &LAB_00d931f4;
      goto LAB_00d92110;
    }
    plVar10 = (long *)*plVar10;
  } while( true );
}


