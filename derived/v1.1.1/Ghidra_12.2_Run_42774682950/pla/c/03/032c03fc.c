/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c03fc; name: FUN_032c03fc
 */


void FUN_032c03fc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  *param_1 = &PTR_FUN_04348c38;
  plVar6 = param_1 + 1;
  *plVar6 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if (DAT_04444b48 == 0) {
    *plVar6 = (long)&DAT_04444b40;
  }
  else {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x4444b50,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        DAT_04444b50 = DAT_04444b50 + 1;
      }
    } while (cVar2 != '\0');
    plVar4 = (long *)*plVar6;
    *plVar6 = (long)&DAT_04444b40;
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
      plVar1 = plVar4 + 2;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
  }
  if (DAT_04444b48 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x4444b50,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        DAT_04444b50 = DAT_04444b50 + 1;
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)param_1[2];
  param_1[2] = &DAT_04444b40;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar1 = plVar4 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  if (DAT_04444b48 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x4444b50,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        DAT_04444b50 = DAT_04444b50 + 1;
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)param_1[3];
  param_1[3] = &DAT_04444b40;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar1 = plVar4 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  if (DAT_04444b48 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x4444b50,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        DAT_04444b50 = DAT_04444b50 + 1;
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)param_1[4];
  param_1[4] = &DAT_04444b40;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar1 = plVar4 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  if (DAT_04444b48 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x4444b50,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        DAT_04444b50 = DAT_04444b50 + 1;
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)param_1[5];
  param_1[5] = &DAT_04444b40;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar1 = plVar4 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  if (DAT_04444b48 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x4444b50,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        DAT_04444b50 = DAT_04444b50 + 1;
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)param_1[6];
  param_1[6] = &DAT_04444b40;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar1 = plVar4 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  if (DAT_04444b48 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x4444b50,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        DAT_04444b50 = DAT_04444b50 + 1;
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)param_1[7];
  param_1[7] = &DAT_04444b40;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar1 = plVar4 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  if (DAT_04444b48 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x4444b50,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        DAT_04444b50 = DAT_04444b50 + 1;
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)param_1[8];
  param_1[8] = &DAT_04444b40;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar1 = plVar4 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  if (DAT_04444b48 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x4444b50,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        DAT_04444b50 = DAT_04444b50 + 1;
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)param_1[9];
  param_1[9] = &DAT_04444b40;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar1 = plVar4 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  if (DAT_04444b60 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x4444b68,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        DAT_04444b68 = DAT_04444b68 + 1;
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)*plVar6;
  *plVar6 = (long)&DAT_04444b58;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar6 = plVar4 + 2;
    do {
      lVar5 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x032c0800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x18))();
      return;
    }
  }
  return;
}


