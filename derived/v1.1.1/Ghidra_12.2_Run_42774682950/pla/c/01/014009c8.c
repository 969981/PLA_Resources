/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014009c8; name: FUN_014009c8
 */


void FUN_014009c8(long param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  byte bVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long **local_60;
  undefined8 local_58;
  char *pcStack_50;
  undefined8 local_48;
  long *local_40;
  long *local_38;
  
  iVar3 = *(int *)(param_1 + 0xcd8);
  plVar9 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_014013cc;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_60 = &local_38;
  local_58 = 0x8c37fcc594e76247;
  pcStack_50 = "ShortcutInputZL";
  local_40 = (long *)0x0;
  local_38 = (long *)0x0;
  local_48 = 0xf;
  FUN_00d6190c(plVar9,&local_60,0);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  plVar6 = local_38;
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  if (plVar6 != (long *)0x0) {
    bVar7 = FUN_013ed910(*(undefined8 *)(param_1 + 0x730));
    if (*(byte *)((long)plVar6 + 0xa2) != (bVar7 & 1)) {
      *(byte *)((long)plVar6 + 0xa2) = bVar7 & 1;
      (**(code **)(*plVar6 + 0x98))(plVar6);
    }
  }
  plVar9 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_014013cc;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_60 = &local_38;
  local_58 = 0x8c37e2c594e73619;
  pcStack_50 = "ShortcutInputZR";
  local_40 = (long *)0x0;
  local_38 = (long *)0x0;
  local_48 = 0xf;
  FUN_00d6190c(plVar9,&local_60,0);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  plVar6 = local_38;
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  if (plVar6 != (long *)0x0) {
    bVar7 = FUN_013ed910(*(undefined8 *)(param_1 + 0x730));
    if (*(byte *)((long)plVar6 + 0xa2) != (bVar7 & 1)) {
      *(byte *)((long)plVar6 + 0xa2) = bVar7 & 1;
      (**(code **)(*plVar6 + 0x98))(plVar6);
    }
  }
  plVar9 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_014013cc;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_60 = &local_38;
  local_58 = 0x8c9f484130998638;
  pcStack_50 = "ShortcutInputY";
  local_40 = (long *)0x0;
  local_38 = (long *)0x0;
  local_48 = 0xe;
  FUN_00d6190c(plVar9,&local_60,0);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  plVar6 = local_38;
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  if ((plVar6 != (long *)0x0) &&
     ((bool)*(char *)((long)plVar6 + 0xa2) != (*(int *)(param_1 + 0xcc8) != 0))) {
    *(bool *)((long)plVar6 + 0xa2) = *(int *)(param_1 + 0xcc8) != 0;
    (**(code **)(*plVar6 + 0x98))(plVar6);
  }
  plVar9 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_014013cc;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_60 = &local_38;
  local_58 = 0x8c9f5d413099a9e7;
  pcStack_50 = "ShortcutInputL";
  local_40 = (long *)0x0;
  local_38 = (long *)0x0;
  local_48 = 0xe;
  FUN_00d6190c(plVar9,&local_60,0);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  plVar6 = local_38;
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  if ((plVar6 != (long *)0x0) &&
     (bVar5 = iVar3 == 0 && 1 < *(uint *)(param_1 + 0xcd0),
     (bool)*(char *)((long)plVar6 + 0xa2) != bVar5)) {
    *(bool *)((long)plVar6 + 0xa2) = bVar5;
    (**(code **)(*plVar6 + 0x98))(plVar6);
  }
  plVar9 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_014013cc;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_60 = &local_38;
  local_58 = 0x8c9f434130997db9;
  pcStack_50 = "ShortcutInputR";
  local_40 = (long *)0x0;
  local_38 = (long *)0x0;
  local_48 = 0xe;
  FUN_00d6190c(plVar9,&local_60,0);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  plVar6 = local_38;
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  if ((plVar6 != (long *)0x0) &&
     (bVar5 = iVar3 == 0 && 1 < *(uint *)(param_1 + 0xcd0),
     (bool)*(char *)((long)plVar6 + 0xa2) != bVar5)) {
    *(bool *)((long)plVar6 + 0xa2) = bVar5;
    (**(code **)(*plVar6 + 0x98))(plVar6);
  }
  plVar9 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_014013cc;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_60 = &local_38;
  local_58 = 0x42731f2a09dc9961;
  pcStack_50 = "ShortcutInputPlus";
  local_40 = (long *)0x0;
  local_38 = (long *)0x0;
  local_48 = 0x11;
  FUN_00d6190c(plVar9,&local_60,0);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  plVar6 = local_38;
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  if ((plVar6 != (long *)0x0) &&
     (bVar5 = iVar3 == 0 && *(char *)(param_1 + 0xccd) != '\0',
     (bool)*(char *)((long)plVar6 + 0xa2) != bVar5)) {
    *(bool *)((long)plVar6 + 0xa2) = bVar5;
    (**(code **)(*plVar6 + 0x98))(plVar6);
  }
  plVar9 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_014013cc;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_60 = &local_38;
  local_58 = 0xed6e84e657de12cb;
  pcStack_50 = "ShortcutInputMinus";
  local_40 = (long *)0x0;
  local_38 = (long *)0x0;
  local_48 = 0x12;
  FUN_00d6190c(plVar9,&local_60,0);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  plVar6 = local_38;
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  if ((plVar6 != (long *)0x0) &&
     (bVar5 = iVar3 == 0 && *(char *)(param_1 + 0xccc) != '\0',
     (bool)*(char *)((long)plVar6 + 0xa2) != bVar5)) {
    *(bool *)((long)plVar6 + 0xa2) = bVar5;
    (**(code **)(*plVar6 + 0x98))(plVar6);
  }
  plVar9 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_014013cc;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_60 = &local_38;
  local_58 = 0x8c9f5041309993d0;
  pcStack_50 = "ShortcutInputA";
  local_40 = (long *)0x0;
  local_38 = (long *)0x0;
  local_48 = 0xe;
  FUN_00d6190c(plVar9,&local_60,0);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  plVar6 = local_38;
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  if ((plVar6 != (long *)0x0) &&
     ((bool)*(char *)((long)plVar6 + 0xa2) != (*(int *)(param_1 + 0xcc8) != 0))) {
    *(bool *)((long)plVar6 + 0xa2) = *(int *)(param_1 + 0xcc8) != 0;
    (**(code **)(*plVar6 + 0x98))(plVar6);
  }
  plVar9 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_014013cc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_60 = &local_38;
  local_58 = 0x8c9f4941309987eb;
  pcStack_50 = "ShortcutInputX";
  local_40 = (long *)0x0;
  local_38 = (long *)0x0;
  local_48 = 0xe;
  FUN_00d6190c(plVar9,&local_60,0);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  plVar6 = local_38;
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  if ((plVar6 != (long *)0x0) &&
     (cVar4 = *(char *)(param_1 + 0xcd4), *(char *)((long)plVar6 + 0xa2) != cVar4)) {
    *(char *)((long)plVar6 + 0xa2) = cVar4;
    (**(code **)(*plVar6 + 0x98))(plVar6,cVar4 != '\0');
  }
  FUN_013d9438(*(undefined8 *)(*(long *)(param_1 + 0x730) + 0xef0),*(undefined4 *)(param_1 + 0xcc8),
               *(undefined1 *)(param_1 + 0xccc),*(undefined1 *)(param_1 + 0xccd),
               *(undefined4 *)(param_1 + 0xcd0),*(undefined1 *)(param_1 + 0xcd4),
               *(undefined4 *)(param_1 + 0xcd8));
  return;
}


