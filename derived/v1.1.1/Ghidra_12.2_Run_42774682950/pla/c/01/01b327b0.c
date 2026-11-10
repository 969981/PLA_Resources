/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b327b0; name: FUN_01b327b0
 */


void FUN_01b327b0(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 local_28;
  
  *param_1 = &PTR_FUN_0423e940;
  param_1[9] = &PTR_LAB_0423ea40;
  param_1[10] = &PTR_LAB_0423eb20;
  plVar5 = (long *)param_1[0x4ff];
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
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
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  FUN_01b35180(param_1 + 0x4f8);
  lVar6 = 0;
  do {
    plVar5 = *(long **)((long)param_1 + lVar6 + 0x27b0);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))();
    }
    plVar5 = *(long **)((long)param_1 + lVar6 + 0x2788);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))();
    }
    plVar5 = *(long **)((long)param_1 + lVar6 + 0x2760);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))();
    }
    plVar5 = *(long **)((long)param_1 + lVar6 + 0x2738);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))();
    }
    plVar5 = *(long **)((long)param_1 + lVar6 + 10000);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))();
    }
    bVar3 = lVar6 != -0x708;
    lVar6 = lVar6 + -200;
  } while (bVar3);
  plVar5 = (long *)param_1[0x3fb];
  if (plVar5 == (long *)0x0) {
LAB_01b328b0:
    plVar5 = (long *)param_1[0x3fa];
  }
  else {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 != 0) goto LAB_01b328b0;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*plVar5 + 0x20))();
    plVar5 = (long *)param_1[0x3fa];
  }
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
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
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  FUN_01b2b168(param_1 + 0x3b1);
  if ((long *)param_1[0x3ae] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x3ae] + 0x20))();
  }
  if ((long *)param_1[0x3ad] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x3ad] + 0x20))();
  }
  if ((long *)param_1[0x3ac] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x3ac] + 0x20))();
  }
  if ((long *)param_1[0x3ab] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x3ab] + 0x20))();
  }
  if ((long *)param_1[0x3aa] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x3aa] + 0x20))();
  }
  plVar5 = (long *)param_1[0x3a5];
  if (plVar5 == (long *)0x0) {
LAB_01b32968:
    plVar5 = (long *)param_1[0x3a4];
  }
  else {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 != 0) goto LAB_01b32968;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*plVar5 + 0x20))();
    plVar5 = (long *)param_1[0x3a4];
  }
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
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
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  FUN_01b2b168(param_1 + 0x35b);
  if ((long *)param_1[0x358] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x358] + 0x20))();
  }
  if ((long *)param_1[0x357] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x357] + 0x20))();
  }
  if ((long *)param_1[0x356] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x356] + 0x20))();
  }
  if ((long *)param_1[0x355] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x355] + 0x20))();
  }
  if ((long *)param_1[0x354] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x354] + 0x20))();
  }
  plVar5 = (long *)param_1[0x34f];
  if (plVar5 == (long *)0x0) {
LAB_01b32a20:
    plVar5 = (long *)param_1[0x34e];
  }
  else {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 != 0) goto LAB_01b32a20;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*plVar5 + 0x20))();
    plVar5 = (long *)param_1[0x34e];
  }
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
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
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  FUN_01b2b168(param_1 + 0x305);
  if ((long *)param_1[0x302] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x302] + 0x20))();
  }
  if ((long *)param_1[0x301] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x301] + 0x20))();
  }
  if ((long *)param_1[0x300] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x300] + 0x20))();
  }
  if ((long *)param_1[0x2ff] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2ff] + 0x20))();
  }
  if ((long *)param_1[0x2fe] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2fe] + 0x20))();
  }
  plVar5 = (long *)param_1[0x2f9];
  if (plVar5 == (long *)0x0) {
LAB_01b32ad8:
    plVar5 = (long *)param_1[0x2f8];
  }
  else {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 != 0) goto LAB_01b32ad8;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*plVar5 + 0x20))();
    plVar5 = (long *)param_1[0x2f8];
  }
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
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
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  FUN_01b2b168(param_1 + 0x2af);
  if ((long *)param_1[0x2ac] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2ac] + 0x20))();
  }
  if ((long *)param_1[0x2ab] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2ab] + 0x20))();
  }
  if ((long *)param_1[0x2aa] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2aa] + 0x20))();
  }
  if ((long *)param_1[0x2a9] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2a9] + 0x20))();
  }
  if ((long *)param_1[0x2a8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2a8] + 0x20))();
  }
  plVar5 = (long *)param_1[0x2a3];
  if (plVar5 == (long *)0x0) {
LAB_01b32b90:
    plVar5 = (long *)param_1[0x2a2];
  }
  else {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 != 0) goto LAB_01b32b90;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*plVar5 + 0x20))();
    plVar5 = (long *)param_1[0x2a2];
  }
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
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
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  FUN_01b2b168(param_1 + 0x259);
  if ((long *)param_1[0x256] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x256] + 0x20))();
  }
  if ((long *)param_1[0x255] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x255] + 0x20))();
  }
  if ((long *)param_1[0x254] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x254] + 0x20))();
  }
  if ((long *)param_1[0x253] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x253] + 0x20))();
  }
  if ((long *)param_1[0x252] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x252] + 0x20))();
  }
  plVar5 = (long *)param_1[0x24d];
  if (plVar5 == (long *)0x0) {
LAB_01b32c48:
    plVar5 = (long *)param_1[0x24c];
  }
  else {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 != 0) goto LAB_01b32c48;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*plVar5 + 0x20))();
    plVar5 = (long *)param_1[0x24c];
  }
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
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
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  FUN_01b2b168(param_1 + 0x203);
  if ((long *)param_1[0x200] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x200] + 0x20))();
  }
  if ((long *)param_1[0x1ff] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1ff] + 0x20))();
  }
  if ((long *)param_1[0x1fe] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1fe] + 0x20))();
  }
  if ((long *)param_1[0x1fd] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1fd] + 0x20))();
  }
  if ((long *)param_1[0x1fc] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1fc] + 0x20))();
  }
  plVar5 = (long *)param_1[0x1f7];
  if (plVar5 == (long *)0x0) {
LAB_01b32d00:
    plVar5 = (long *)param_1[0x1f6];
  }
  else {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 != 0) goto LAB_01b32d00;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*plVar5 + 0x20))();
    plVar5 = (long *)param_1[0x1f6];
  }
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
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
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  FUN_01b2b168(param_1 + 0x1ad);
  if ((long *)param_1[0x1aa] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1aa] + 0x20))();
  }
  if ((long *)param_1[0x1a9] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1a9] + 0x20))();
  }
  if ((long *)param_1[0x1a8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1a8] + 0x20))();
  }
  if ((long *)param_1[0x1a7] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1a7] + 0x20))();
  }
  if ((long *)param_1[0x1a6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1a6] + 0x20))();
  }
  plVar5 = (long *)param_1[0x1a1];
  if (plVar5 == (long *)0x0) {
LAB_01b32db4:
    plVar5 = (long *)param_1[0x1a0];
  }
  else {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 != 0) goto LAB_01b32db4;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*plVar5 + 0x20))();
    plVar5 = (long *)param_1[0x1a0];
  }
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
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
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  FUN_01b2b168(param_1 + 0x157);
  if ((long *)param_1[0x154] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x154] + 0x20))();
  }
  if ((long *)param_1[0x153] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x153] + 0x20))();
  }
  if ((long *)param_1[0x152] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x152] + 0x20))();
  }
  if ((long *)param_1[0x151] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x151] + 0x20))();
  }
  if ((long *)param_1[0x150] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x150] + 0x20))();
  }
  plVar5 = (long *)param_1[0x14b];
  if (plVar5 == (long *)0x0) {
LAB_01b32e68:
    plVar5 = (long *)param_1[0x14a];
  }
  else {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 != 0) goto LAB_01b32e68;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*plVar5 + 0x20))();
    plVar5 = (long *)param_1[0x14a];
  }
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
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
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  FUN_01b2b168(param_1 + 0x101);
  if ((long *)param_1[0xfe] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xfe] + 0x20))();
  }
  if ((long *)param_1[0xfd] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xfd] + 0x20))();
  }
  if ((long *)param_1[0xfc] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xfc] + 0x20))();
  }
  if ((long *)param_1[0xfb] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xfb] + 0x20))();
  }
  if ((long *)param_1[0xfa] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xfa] + 0x20))();
  }
  plVar5 = (long *)param_1[0xf5];
  if (plVar5 == (long *)0x0) {
LAB_01b32f1c:
    plVar5 = (long *)param_1[0xf4];
  }
  else {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 != 0) goto LAB_01b32f1c;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*plVar5 + 0x20))();
    plVar5 = (long *)param_1[0xf4];
  }
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
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
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  FUN_01b2b168(param_1 + 0xab);
  if ((long *)param_1[0xa8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xa8] + 0x20))();
  }
  if ((long *)param_1[0xa7] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xa7] + 0x20))();
  }
  if ((long *)param_1[0xa6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xa6] + 0x20))();
  }
  if ((long *)param_1[0xa5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xa5] + 0x20))();
  }
  if ((long *)param_1[0xa4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xa4] + 0x20))();
  }
  plVar5 = (long *)param_1[0x9f];
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
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
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
      plVar5 = (long *)param_1[0x9e];
      goto joined_r0x01b32fd4;
    }
  }
  plVar5 = (long *)param_1[0x9e];
joined_r0x01b32fd4:
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
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
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  FUN_01b2b168(param_1 + 0x55);
  if ((long *)param_1[0x52] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x52] + 0x20))();
  }
  if ((long *)param_1[0x51] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x51] + 0x20))();
  }
  if ((long *)param_1[0x50] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x50] + 0x20))();
  }
  if ((long *)param_1[0x4f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x4f] + 0x20))();
  }
  if ((long *)param_1[0x4e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x4e] + 0x20))();
  }
  puVar7 = (undefined8 *)param_1[0x46];
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
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
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar6 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar6;
      local_28 = *puVar7;
      FUN_02a44274(lVar6 + 0xd8,&local_28);
    }
  }
  puVar7 = (undefined8 *)param_1[0x44];
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
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
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar6 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar6;
      local_28 = *puVar7;
      FUN_02a44274(lVar6 + 0xd8,&local_28);
    }
  }
  puVar7 = (undefined8 *)param_1[0x42];
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
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
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar6 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar6;
      local_28 = *puVar7;
      FUN_02a44274(lVar6 + 0xd8,&local_28);
    }
  }
  puVar7 = (undefined8 *)param_1[0x40];
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
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
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar6 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar6;
      local_28 = *puVar7;
      FUN_02a44274(lVar6 + 0xd8,&local_28);
    }
  }
  puVar7 = (undefined8 *)param_1[0x3e];
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
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
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar6 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar6;
      local_28 = *puVar7;
      FUN_02a44274(lVar6 + 0xd8,&local_28);
    }
  }
  FUN_02a4c4ec(param_1);
  return;
}


