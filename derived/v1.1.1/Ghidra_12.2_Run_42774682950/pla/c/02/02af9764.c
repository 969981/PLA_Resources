/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02af9764; name: FUN_02af9764
 */


void FUN_02af9764(long param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  size_t __n;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *__dest;
  long *plVar9;
  
  lVar5 = DAT_043ef5b0;
  lVar6 = nn::os::GetCurrentThread();
  plVar7 = (long *)(lVar5 + 0xf0);
  do {
    if (*plVar7 != 0 || *(long *)(lVar5 + 0xf8) != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0xe4));
        while (*plVar7 == 0 && *(long *)(lVar5 + 0xf8) == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar6;
            *(undefined8 *)(lVar5 + 0xf8) = 0;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02af97d8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar6;
      *(undefined8 *)(lVar5 + 0xf8) = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02af97d8:
  plVar9 = *(long **)(lVar5 + 0x100);
  do {
    __dest = plVar9;
    if (*(long **)(lVar5 + 0x108) == __dest) goto LAB_02af9814;
    plVar9 = __dest + 1;
  } while (*__dest != param_1 + 0x5c0);
  __n = (long)*(long **)(lVar5 + 0x108) - (long)plVar9;
  if (__n != 0) {
    memmove(__dest,plVar9,__n);
  }
  *(long **)(lVar5 + 0x108) = plVar9 + ((long)__n >> 3) + -1;
LAB_02af9814:
  do {
    lVar6 = *plVar7;
    lVar8 = *(long *)(lVar5 + 0xf8);
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar6;
      *(long *)(lVar5 + 0xf8) = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    if (*plVar7 != lVar6 || *(long *)(lVar5 + 0xf8) != lVar8) {
      ClearExclusiveLocal();
      lVar6 = *plVar7;
      lVar8 = *(long *)(lVar5 + 0xf8);
      goto LAB_02afa518;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = 0;
      *(long *)(lVar5 + 0xf4) = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  goto LAB_02af9858;
LAB_02afa518:
  do {
    lVar1 = *plVar7;
    if (lVar1 == lVar6 && *(long *)(lVar5 + 0xf8) == lVar8) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = 0;
        *(long *)(lVar5 + 0xf4) = lVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 != '\0') goto LAB_02afa518;
      bVar3 = true;
    }
    else {
      bVar3 = false;
      ClearExclusiveLocal();
    }
    lVar6 = lVar1;
    lVar8 = *(long *)(lVar5 + 0xf8);
  } while (!bVar3);
LAB_02af9858:
  nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0xe4));
  plVar7 = *(long **)(param_1 + 0x3c0);
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x3b0);
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x3b8);
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x3c8);
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x3e0);
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x3d8);
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x3d0);
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 1000);
  *(undefined8 *)(param_1 + 1000) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x3f0);
  *(undefined8 *)(param_1 + 0x3f0) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x3f8);
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x400);
  *(undefined8 *)(param_1 + 0x400) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x410);
  *(undefined8 *)(param_1 + 0x410) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x418);
  *(undefined8 *)(param_1 + 0x418) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x408);
  *(undefined8 *)(param_1 + 0x408) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x420);
  *(undefined8 *)(param_1 + 0x420) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x428);
  *(undefined8 *)(param_1 + 0x428) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x430);
  *(undefined8 *)(param_1 + 0x430) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x438);
  *(undefined8 *)(param_1 + 0x438) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x440);
  *(undefined8 *)(param_1 + 0x440) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x448);
  *(undefined8 *)(param_1 + 0x448) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x450);
  *(undefined8 *)(param_1 + 0x450) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x458);
  *(undefined8 *)(param_1 + 0x458) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x3a8);
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x470);
  *(undefined8 *)(param_1 + 0x470) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x478);
  *(undefined8 *)(param_1 + 0x478) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x480);
  *(undefined8 *)(param_1 + 0x480) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x488);
  *(undefined8 *)(param_1 + 0x488) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x490);
  *(undefined8 *)(param_1 + 0x490) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x498);
  *(undefined8 *)(param_1 + 0x498) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x4b0);
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x4a0);
  *(undefined8 *)(param_1 + 0x4a0) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x4a8);
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x4b8);
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x4c0);
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x4c8);
  *(undefined8 *)(param_1 + 0x4c8) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x4d0);
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x4d8);
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x4e0);
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x4e8);
  *(undefined8 *)(param_1 + 0x4e8) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x4f0);
  *(undefined8 *)(param_1 + 0x4f0) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x4f8);
  *(undefined8 *)(param_1 + 0x4f8) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x508);
  *(undefined8 *)(param_1 + 0x508) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x510);
  *(undefined8 *)(param_1 + 0x510) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x518);
  *(undefined8 *)(param_1 + 0x518) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x520);
  *(undefined8 *)(param_1 + 0x520) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x528);
  *(undefined8 *)(param_1 + 0x528) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x530);
  *(undefined8 *)(param_1 + 0x530) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x538);
  *(undefined8 *)(param_1 + 0x538) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x540);
  *(undefined8 *)(param_1 + 0x540) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x548);
  *(undefined8 *)(param_1 + 0x548) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x560);
  *(undefined8 *)(param_1 + 0x560) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x568);
  *(undefined8 *)(param_1 + 0x568) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x550);
  *(undefined8 *)(param_1 + 0x550) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x558);
  *(undefined8 *)(param_1 + 0x558) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x460);
  *(undefined8 *)(param_1 + 0x460) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x468);
  *(undefined8 *)(param_1 + 0x468) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x598);
  *(undefined8 *)(param_1 + 0x598) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x570);
  *(undefined8 *)(param_1 + 0x570) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x578);
  *(undefined8 *)(param_1 + 0x578) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x580);
  *(undefined8 *)(param_1 + 0x580) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x588);
  *(undefined8 *)(param_1 + 0x588) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x590);
  *(undefined8 *)(param_1 + 0x590) = 0;
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02afa514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x10))();
      return;
    }
  }
  return;
}


