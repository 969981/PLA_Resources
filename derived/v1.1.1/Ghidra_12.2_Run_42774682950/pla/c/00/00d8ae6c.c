/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d8ae6c; name: FUN_00d8ae6c
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d8ae6c(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  long local_58;
  
  local_68 = param_2;
  lVar11 = FUN_009584a0(&local_88);
  *(ulong *)(lVar11 + 0x1e0) = *(ulong *)(lVar11 + 0x1e0) | 8;
  if (lVar11 != 0) {
    lVar19 = *(long *)(lVar11 + 0x58);
    if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_00d8c208;
    if (*(long *)(lVar19 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
      *(undefined8 *)(lVar19 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar13 = *(long **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (plVar13 != (long *)0x0) {
    lVar19 = plVar13[0xb];
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))();
    }
  }
  *(long *)(param_1 + 0x60) = lVar11;
  local_58 = param_1;
  FUN_00d8c88c(&local_88,param_2,&local_58);
  plVar13 = *(long **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (plVar13 != (long *)0x0) {
    lVar11 = plVar13[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))();
    }
  }
  *(undefined8 *)(param_1 + 0x50) = local_88;
  lVar11 = FUN_009584a0(&local_88,param_2);
  *(ulong *)(lVar11 + 0x1e0) = *(ulong *)(lVar11 + 0x1e0) | 8;
  if (lVar11 != 0) {
    lVar19 = *(long *)(lVar11 + 0x58);
    if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_00d8c208;
    if (*(long *)(lVar19 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
      *(undefined8 *)(lVar19 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar13 = *(long **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (plVar13 != (long *)0x0) {
    lVar19 = plVar13[0xb];
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))();
    }
  }
  *(long *)(param_1 + 0x58) = lVar11;
  lVar11 = FUN_00958ac0(&local_88,param_2);
  *(ulong *)(lVar11 + 0x1e0) = *(ulong *)(lVar11 + 0x1e0) | 8;
  if (lVar11 != 0) {
    lVar19 = *(long *)(lVar11 + 0x58);
    if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_00d8c208;
    if (*(long *)(lVar19 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
      *(undefined8 *)(lVar19 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar13 = *(long **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (plVar13 != (long *)0x0) {
    lVar19 = plVar13[0xb];
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))();
    }
  }
  *(long *)(param_1 + 0x68) = lVar11;
  lVar11 = FUN_009584a0(&local_88,param_2);
  *(ulong *)(lVar11 + 0x1e0) = *(ulong *)(lVar11 + 0x1e0) | 8;
  if (lVar11 != 0) {
    lVar19 = *(long *)(lVar11 + 0x58);
    if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_00d8c208;
    if (*(long *)(lVar19 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
      *(undefined8 *)(lVar19 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar13 = *(long **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (plVar13 != (long *)0x0) {
    lVar19 = plVar13[0xb];
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))();
    }
  }
  *(long *)(param_1 + 0x70) = lVar11;
  local_88 = 0;
  lVar11 = FUN_00957dc4(&local_58,param_2,&local_88);
  *(ulong *)(lVar11 + 0x1e0) = *(ulong *)(lVar11 + 0x1e0) | 8;
  if (lVar11 != 0) {
    lVar19 = *(long *)(lVar11 + 0x58);
    if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_00d8c208;
    if (*(long *)(lVar19 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
      *(undefined8 *)(lVar19 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar13 = *(long **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (plVar13 != (long *)0x0) {
    lVar19 = plVar13[0xb];
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))();
    }
  }
  *(long *)(param_1 + 0x78) = lVar11;
  local_88 = 0;
  lVar11 = FUN_00957dc4(&local_58,param_2,&local_88);
  *(ulong *)(lVar11 + 0x1e0) = *(ulong *)(lVar11 + 0x1e0) | 8;
  if (lVar11 != 0) {
    lVar19 = *(long *)(lVar11 + 0x58);
    if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_00d8c208;
    if (*(long *)(lVar19 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
      *(undefined8 *)(lVar19 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar13 = *(long **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (plVar13 != (long *)0x0) {
    lVar19 = plVar13[0xb];
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))();
    }
  }
  *(long *)(param_1 + 0x80) = lVar11;
  local_88 = 0;
  lVar11 = FUN_00957dc4(&local_58,param_2,&local_88);
  *(ulong *)(lVar11 + 0x1e0) = *(ulong *)(lVar11 + 0x1e0) | 8;
  if (lVar11 != 0) {
    lVar19 = *(long *)(lVar11 + 0x58);
    if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_00d8c208;
    if (*(long *)(lVar19 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
      *(undefined8 *)(lVar19 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar13 = *(long **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (plVar13 != (long *)0x0) {
    lVar19 = plVar13[0xb];
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))();
    }
  }
  *(long *)(param_1 + 0x88) = lVar11;
  lVar11 = FUN_00958ac0(&local_88,param_2);
  *(ulong *)(lVar11 + 0x1e0) = *(ulong *)(lVar11 + 0x1e0) | 8;
  if (lVar11 != 0) {
    lVar19 = *(long *)(lVar11 + 0x58);
    if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_00d8c208;
    if (*(long *)(lVar19 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
      *(undefined8 *)(lVar19 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar13 = *(long **)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (plVar13 != (long *)0x0) {
    lVar19 = plVar13[0xb];
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))();
    }
  }
  *(long *)(param_1 + 0x90) = lVar11;
  lVar19 = *(long *)(param_1 + 0x50);
  lVar11 = nn::os::GetCurrentThread();
  plVar13 = (long *)(lVar19 + 0x208);
  do {
    if (*plVar13 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x1fc));
        while (*plVar13 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar6) {
            *plVar13 = lVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00d8b358;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar6) {
      *plVar13 = lVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00d8b358:
  lVar16 = *(long *)(param_1 + 0x60);
  lVar11 = lVar16;
  if (*(long *)(lVar16 + 0x1d0) != 0) {
    lVar11 = *(long *)(lVar16 + 0x1d0);
  }
  if (*(long *)(lVar16 + 0x1d8) != 0) {
    lVar16 = *(long *)(lVar16 + 0x1d8);
  }
  if (lVar11 == lVar16) {
LAB_00d8c208:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_02a70230(lVar19);
  lVar16 = *(long *)(param_1 + 0x58);
  lVar11 = nn::os::GetCurrentThread();
  plVar13 = (long *)(lVar16 + 0x208);
  do {
    if (*plVar13 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar16 + 0x1fc));
        while (*plVar13 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar6) {
            *plVar13 = lVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00d8b3cc;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar6) {
      *plVar13 = lVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00d8b3cc:
  lVar17 = *(long *)(param_1 + 0x60);
  lVar11 = lVar17;
  if (*(long *)(lVar17 + 0x1d0) != 0) {
    lVar11 = *(long *)(lVar17 + 0x1d0);
  }
  if (*(long *)(lVar17 + 0x1d8) != 0) {
    lVar17 = *(long *)(lVar17 + 0x1d8);
  }
  if (lVar11 == lVar17) goto LAB_00d8c208;
  FUN_02a70230(lVar16);
  FUN_02a70468(lVar16,*(undefined8 *)(param_1 + 0x50),0);
  *(undefined8 *)(lVar16 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar16 + 0x1fc));
  *(undefined8 *)(lVar19 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0x1fc));
  lVar11 = *(long *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x60);
  *(long *)(param_1 + 0xa0) = lVar11;
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x90);
  lVar19 = nn::os::GetCurrentThread();
  plVar13 = (long *)(lVar11 + 0x208);
  do {
    if (*plVar13 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x1fc));
        while (*plVar13 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar6) {
            *plVar13 = lVar19;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00d8b484;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar6) {
      *plVar13 = lVar19;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00d8b484:
  FUN_02a70468(lVar11,*(undefined8 *)(param_1 + 0x60),0);
  FUN_02a70468(lVar11,0,*(undefined8 *)(param_1 + 0x70));
  lVar16 = *(long *)(param_1 + 0x80);
  lVar19 = nn::os::GetCurrentThread();
  plVar13 = (long *)(lVar16 + 0x208);
  do {
    if (*plVar13 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar16 + 0x1fc));
        while (*plVar13 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar6) {
            *plVar13 = lVar19;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00d8b4f0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar6) {
      *plVar13 = lVar19;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00d8b4f0:
  puVar7 = PTR_DAT_0437b4f8;
  if (((*PTR_DAT_0437b4f8 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_0437b4f8), iVar10 != 0)) {
    FUN_00100250(&LAB_00d8d3b0,PTR_DAT_0437b500,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b4f8);
  }
  puVar9 = PTR_DAT_0437b508;
  puVar8 = PTR_DAT_0437b500;
  lVar19 = *(long *)PTR_DAT_0437b500;
  *(long *)PTR_DAT_0437b508 = lVar19;
  uVar12 = *(undefined8 *)(lVar19 + 0x50);
  FUN_02a70468(lVar16,*(undefined8 *)(param_1 + 0x70),0);
  FUN_02a70468(lVar16,0,uVar12);
  *(undefined8 *)(lVar16 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar16 + 0x1fc));
  *(undefined8 *)(lVar11 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x1fc));
  lVar19 = *(long *)(param_1 + 0x88);
  lVar11 = nn::os::GetCurrentThread();
  plVar13 = (long *)(lVar19 + 0x208);
  do {
    if (*plVar13 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x1fc));
        while (*plVar13 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar6) {
            *plVar13 = lVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00d8b5a8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar6) {
      *plVar13 = lVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00d8b5a8:
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_0437b4f8), iVar10 != 0)) {
    FUN_00100250(&LAB_00d8d3b0,PTR_DAT_0437b500,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b4f8);
  }
  lVar11 = *(long *)puVar8;
  *(long *)puVar9 = lVar11;
  uVar12 = *(undefined8 *)(lVar11 + 0x50);
  FUN_02a70468(lVar19,*(undefined8 *)(param_1 + 0x70),0);
  FUN_02a70468(lVar19,0,uVar12);
  *(undefined8 *)(lVar19 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0x1fc));
  lVar19 = *(long *)(param_1 + 0x78);
  lVar11 = nn::os::GetCurrentThread();
  plVar13 = (long *)(lVar19 + 0x208);
  do {
    if (*plVar13 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x1fc));
        while (*plVar13 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar6) {
            *plVar13 = lVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00d8b638;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar6) {
      *plVar13 = lVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00d8b638:
  FUN_02a70468(lVar19,*(undefined8 *)(param_1 + 0x70),0);
  FUN_02a70468(lVar19,0,*(undefined8 *)(param_1 + 0x90));
  *(undefined8 *)(lVar19 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0x1fc));
  lVar11 = *(long *)(param_1 + 0x78);
  plVar13 = (long *)(*(code *)**(undefined8 **)(lVar11 + 0x50))((undefined8 *)(lVar11 + 0x50));
  puVar8 = PTR_DAT_0437b518;
  puVar7 = PTR_DAT_0437b510;
  if (((*PTR_DAT_0437b510 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_0437b510), iVar10 != 0)) {
    uVar12 = FUN_00d8faf4();
    *(undefined8 *)puVar8 = uVar12;
    __cxa_guard_release(PTR_DAT_0437b510);
  }
  for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
    if (plVar13 == (long *)puVar8) {
      pcVar18 = *(code **)(lVar11 + 0x3a8);
      if (pcVar18 != (code *)0x0) {
        *(undefined8 *)(lVar11 + 0x3b0) = 0;
        *(undefined8 *)(lVar11 + 0x3b8) = 0;
        *(undefined8 *)(lVar11 + 0x3a0) = 0;
        *(undefined8 *)(lVar11 + 0x3a8) = 0;
        (*pcVar18)(lVar11 + 0x3c0);
      }
      *(code **)(lVar11 + 0x3a0) = FUN_00d8fbd4;
      *(undefined1 **)(lVar11 + 0x3a8) = &LAB_00d8fc54;
      *(undefined1 **)(lVar11 + 0x3b0) = &LAB_00d8fc58;
      *(undefined1 **)(lVar11 + 0x3b8) = &LAB_00d8fc5c;
      break;
    }
  }
  lVar11 = *(long *)(param_1 + 0x80);
  plVar13 = (long *)(*(code *)**(undefined8 **)(lVar11 + 0x50))((undefined8 *)(lVar11 + 0x50));
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_0437b510), iVar10 != 0)) {
    uVar12 = FUN_00d8faf4();
    *(undefined8 *)puVar8 = uVar12;
    __cxa_guard_release(PTR_DAT_0437b510);
  }
  for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
    if (plVar13 == (long *)puVar8) {
      pcVar18 = *(code **)(lVar11 + 0x3a8);
      if (pcVar18 != (code *)0x0) {
        *(undefined8 *)(lVar11 + 0x3b0) = 0;
        *(undefined8 *)(lVar11 + 0x3b8) = 0;
        *(undefined8 *)(lVar11 + 0x3a0) = 0;
        *(undefined8 *)(lVar11 + 0x3a8) = 0;
        (*pcVar18)(lVar11 + 0x3c0);
      }
      *(undefined1 **)(lVar11 + 0x3a0) = &LAB_00d8fc60;
      *(undefined1 **)(lVar11 + 0x3a8) = &LAB_00d8fd00;
      *(undefined1 **)(lVar11 + 0x3b0) = &LAB_00d8fd04;
      *(undefined1 **)(lVar11 + 0x3b8) = &LAB_00d8fd08;
      break;
    }
  }
  lVar11 = *(long *)(param_1 + 0x88);
  plVar13 = (long *)(*(code *)**(undefined8 **)(lVar11 + 0x50))((undefined8 *)(lVar11 + 0x50));
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_0437b510), iVar10 != 0)) {
    uVar12 = FUN_00d8faf4();
    *(undefined8 *)puVar8 = uVar12;
    __cxa_guard_release(PTR_DAT_0437b510);
  }
  for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
    if (plVar13 == (long *)puVar8) {
      pcVar18 = *(code **)(lVar11 + 0x3a8);
      if (pcVar18 != (code *)0x0) {
        *(undefined8 *)(lVar11 + 0x3b0) = 0;
        *(undefined8 *)(lVar11 + 0x3b8) = 0;
        *(undefined8 *)(lVar11 + 0x3a0) = 0;
        *(undefined8 *)(lVar11 + 0x3a8) = 0;
        (*pcVar18)(lVar11 + 0x3c0);
      }
      *(undefined1 **)(lVar11 + 0x3a0) = &LAB_00d8fd0c;
      *(undefined1 **)(lVar11 + 0x3a8) = &LAB_00d8fd8c;
      *(undefined1 **)(lVar11 + 0x3b0) = &LAB_00d8fd90;
      *(undefined1 **)(lVar11 + 0x3b8) = &LAB_00d8fd94;
      break;
    }
  }
  FUN_00d8c250(&local_88,param_2);
  uVar12 = local_88;
  local_88 = 0;
  lVar11 = *(long *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = uVar12;
  if (lVar11 == 0) {
    *(undefined8 *)(param_1 + 0xe8) = uStack_78;
    *(undefined8 *)(param_1 + 0xf0) = local_70;
  }
  else {
    FUN_00d8d890(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xe8) = uStack_78;
    *(undefined8 *)(param_1 + 0xf0) = local_70;
    uVar12 = *(undefined8 *)(param_1 + 0xd8);
  }
  *(undefined8 *)(param_1 + 0xe0) = local_80;
  FUN_00db84c4(uVar12);
  local_58 = param_1;
  FUN_00d8c36c(&local_88,local_68,&local_58,&local_68);
  plVar13 = *(long **)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if (plVar13 != (long *)0x0) {
    lVar11 = plVar13[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))();
    }
  }
  *(undefined8 *)(param_1 + 0xc0) = local_88;
  local_58 = param_1;
  FUN_00d8c3e4(&local_88,local_68,&local_58);
  plVar13 = *(long **)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = 0;
  if (plVar13 != (long *)0x0) {
    lVar11 = plVar13[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))();
    }
  }
  *(undefined8 *)(param_1 + 200) = local_88;
  lVar11 = FUN_00d8dd20(local_68,&local_68);
  if (lVar11 != 0) {
    piVar1 = (int *)(lVar11 + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar13 = *(long **)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if (plVar13 != (long *)0x0) {
    plVar2 = plVar13 + 10;
    do {
      iVar10 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar13 + 0x10))();
    }
  }
  plVar13 = local_68;
  *(long *)(param_1 + 0xd0) = lVar11;
  FUN_00d84e24(lVar11,local_68);
  lVar11 = FUN_00d8de34(plVar13);
  if (lVar11 != 0) {
    piVar1 = (int *)(lVar11 + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar13 = *(long **)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (plVar13 != (long *)0x0) {
    plVar2 = plVar13 + 10;
    do {
      iVar10 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar13 + 0x10))();
    }
  }
  puVar7 = PTR_DAT_0437b160;
  *(long *)(param_1 + 0xf8) = lVar11;
  plVar13 = *(long **)(*(long *)puVar7 + 0x268);
  FUN_00d8c45c(plVar13);
  if (((*PTR_DAT_0437b520 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_0437b520), iVar10 != 0)) {
    FUN_00100250(&LAB_00d8e318,PTR_DAT_0437b528,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b520);
  }
  puVar7 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar8 = PTR_DAT_04379528, iVar10 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar8 = PTR_DAT_04379528;
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_00d8c224;
  *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar13;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
  puVar14 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0xa0,8);
  if (puVar14 == (undefined8 *)0x0) {
    (**(code **)(*plVar13 + 0xb8))(plVar13);
    FUN_0184d210(0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_0184d210();
  *puVar14 = &PTR_LAB_04228dc8;
  puVar14[9] = &PTR_LAB_04228df8;
  FUN_0184d344(puVar14 + 10);
  nn::os::InitializeLightEvent((long)puVar14 + 0x8c,0,1);
  puVar14[0x13] = 0;
  puVar14[1] = plVar13;
  puVar14[2] = puVar14;
  puVar14[3] = 0xa0;
  puVar14[4] = 8;
  puVar9 = PTR_DAT_0437b528;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
  puVar20 = *(undefined8 **)puVar9;
  *(undefined8 **)puVar9 = puVar14;
  if (puVar20 != (undefined8 *)0x0) {
    plVar13 = (long *)puVar20[1];
    uVar3 = puVar20[2];
    uVar12 = puVar20[3];
    uVar4 = puVar20[4];
    FUN_02bcbe58(&local_88,0);
    (**(code **)*puVar20)(puVar20);
    uVar15 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    lVar11 = tpidr_el0;
    if ((uVar15 & 1) == 0) {
LAB_00d8ba78:
      (**(code **)(*plVar13 + 0x18))(plVar13,uVar3,uVar12,uVar4);
    }
    else {
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_00d8ba78;
      FUN_02bcc824(plVar13,uVar3,uVar12,uVar4);
    }
    if (*(char *)(lVar11 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar11 + 0x38d488) = 1;
      *(undefined8 *)(lVar11 + 0x38d478) = 0;
      *(undefined8 *)(lVar11 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar10 = *(int *)(lVar11 + 0x38d480) + -1;
    *(int *)(lVar11 + 0x38d480) = iVar10;
    if (iVar10 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar11 + 0x38d484) = 0;
    }
    puVar14 = *(undefined8 **)puVar9;
  }
  lVar11 = (long)(int)DAT_043eeed0;
  if (0x3ff < DAT_043eeed0) {
                    /* WARNING: Subroutine does not return */
    FUN_02a47540();
  }
  DAT_043eeed0 = DAT_043eeed0 + 1;
  puVar20 = (undefined8 *)0x0;
  if (puVar14 != (undefined8 *)0x0) {
    puVar20 = puVar14 + 9;
  }
  *(undefined8 **)(&DAT_043eced0 + lVar11 * 8) = puVar20;
  lVar11 = FUN_00d8e580(local_68);
  if (lVar11 != 0) {
    piVar1 = (int *)(lVar11 + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar13 = *(long **)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = 0;
  if (plVar13 != (long *)0x0) {
    plVar2 = plVar13 + 10;
    do {
      iVar10 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar13 + 0x10))();
    }
  }
  plVar13 = local_68;
  *(long *)(param_1 + 0x100) = lVar11;
  FUN_00d8c530(&local_88,local_68);
  uVar12 = local_88;
  local_88 = 0;
  lVar11 = *(long *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = uVar12;
  if (lVar11 == 0) {
    *(undefined8 *)(param_1 + 0x120) = uStack_78;
    *(undefined8 *)(param_1 + 0x128) = local_70;
  }
  else {
    FUN_00d8e7f0(param_1 + 0x118);
    *(undefined8 *)(param_1 + 0x120) = uStack_78;
    *(undefined8 *)(param_1 + 0x128) = local_70;
    uVar12 = *(undefined8 *)(param_1 + 0x110);
  }
  *(undefined8 *)(param_1 + 0x118) = local_80;
  FUN_00dc386c(uVar12,1,0);
  lVar11 = FUN_00d8e6b8(plVar13);
  if (lVar11 != 0) {
    piVar1 = (int *)(lVar11 + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar13 = *(long **)(param_1 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  if (plVar13 != (long *)0x0) {
    plVar2 = plVar13 + 10;
    do {
      iVar10 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar13 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x1a8) = lVar11;
  FUN_00db8b08(lVar11);
  plVar13 = local_68;
  if (((*puVar7 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar10 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar8);
  if (*(ulong *)(lVar11 + 0x80) < 0x10) {
    *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar13;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    lVar19 = (**(code **)(*plVar13 + 0x10))(plVar13,0x78,8);
    if (lVar19 == 0) {
      (**(code **)(*plVar13 + 0xb8))(plVar13);
      FUN_0165f930(0);
      _DAT_00000008 = plVar13;
      _DAT_00000010 = 0;
      _DAT_00000018 = 0x78;
      _DAT_00000020 = 8;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    else {
      FUN_0165f930(lVar19);
      *(long **)(lVar19 + 8) = plVar13;
      *(long *)(lVar19 + 0x10) = lVar19;
      *(undefined8 *)(lVar19 + 0x18) = 0x78;
      *(undefined8 *)(lVar19 + 0x20) = 8;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
      piVar1 = (int *)(lVar19 + 0x50);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar13 = *(long **)(param_1 + 0x1b0);
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    if (plVar13 != (long *)0x0) {
      plVar2 = plVar13 + 10;
      do {
        iVar10 = (int)*plVar2 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(int *)plVar2 = iVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*plVar13 + 0x10))();
      }
    }
    *(long *)(param_1 + 0x1b0) = lVar19;
    FUN_0165fa1c(lVar19);
    return;
  }
LAB_00d8c224:
                    /* WARNING: Subroutine does not return */
  abort();
}


