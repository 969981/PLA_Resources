/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03092e2c; name: FUN_03092e2c
 */


void FUN_03092e2c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  
  *param_1 = &PTR_FUN_042b3ac8;
  plVar4 = (long *)param_1[0xda];
  if ((plVar4 == (long *)0x0) || (plVar4[1] == 0)) {
LAB_03092e50:
    plVar4 = (long *)param_1[0xd9];
  }
  else {
    plVar8 = plVar4 + 2;
    do {
      lVar7 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 != 0) goto LAB_03092e50;
    (**(code **)(*plVar4 + 0x18))();
    plVar4 = (long *)param_1[0xd9];
  }
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar8 = plVar4 + 2;
    do {
      lVar7 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  plVar4 = (long *)param_1[0xd8];
  if ((plVar4 == (long *)0x0) || (plVar4[1] == 0)) {
LAB_03092e8c:
    plVar4 = (long *)param_1[0xd7];
    if (plVar4 == (long *)0x0) goto LAB_03092e94;
LAB_030931bc:
    if (plVar4[1] == 0) goto LAB_03092e94;
    plVar8 = plVar4 + 2;
    do {
      lVar7 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 != 0) goto LAB_03092e94;
    (**(code **)(*plVar4 + 0x18))();
    plVar4 = (long *)param_1[0xd6];
  }
  else {
    plVar8 = plVar4 + 2;
    do {
      lVar7 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 != 0) goto LAB_03092e8c;
    (**(code **)(*plVar4 + 0x18))();
    plVar4 = (long *)param_1[0xd7];
    if (plVar4 != (long *)0x0) goto LAB_030931bc;
LAB_03092e94:
    plVar4 = (long *)param_1[0xd6];
  }
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar8 = plVar4 + 2;
    do {
      lVar7 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  plVar4 = (long *)param_1[0xd5];
  if ((plVar4 == (long *)0x0) || (plVar4[1] == 0)) {
LAB_03092ed0:
    plVar4 = (long *)param_1[0xd4];
  }
  else {
    plVar8 = plVar4 + 2;
    do {
      lVar7 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 != 0) goto LAB_03092ed0;
    (**(code **)(*plVar4 + 0x18))();
    plVar4 = (long *)param_1[0xd4];
  }
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar8 = plVar4 + 2;
    do {
      lVar7 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  plVar4 = (long *)param_1[0xd3];
  if ((plVar4 == (long *)0x0) || (plVar4[1] == 0)) {
LAB_03092f0c:
    plVar4 = (long *)param_1[0xd2];
  }
  else {
    plVar8 = plVar4 + 2;
    do {
      lVar7 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 != 0) goto LAB_03092f0c;
    (**(code **)(*plVar4 + 0x18))();
    plVar4 = (long *)param_1[0xd2];
  }
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar8 = plVar4 + 2;
    do {
      lVar7 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  plVar4 = (long *)param_1[0xd1];
  if ((plVar4 == (long *)0x0) || (plVar4[1] == 0)) {
LAB_03092f68:
    plVar4 = (long *)param_1[0xd0];
    if (plVar4 == (long *)0x0) goto LAB_03092fbc;
LAB_03092f70:
    if (plVar4[1] == 0) goto LAB_03092fbc;
    plVar8 = plVar4 + 2;
    do {
      lVar7 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 != 0) goto LAB_03092fbc;
    (**(code **)(*plVar4 + 0x18))();
    plVar4 = (long *)param_1[0xcf];
    if (plVar4 != (long *)0x0) goto LAB_03092fc4;
LAB_03092fe4:
    plVar4 = (long *)param_1[0xce];
  }
  else {
    plVar8 = plVar4 + 2;
    do {
      lVar7 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 != 0) goto LAB_03092f68;
    (**(code **)(*plVar4 + 0x18))();
    plVar4 = (long *)param_1[0xd0];
    if (plVar4 != (long *)0x0) goto LAB_03092f70;
LAB_03092fbc:
    plVar4 = (long *)param_1[0xcf];
    if (plVar4 == (long *)0x0) goto LAB_03092fe4;
LAB_03092fc4:
    if (plVar4[1] == 0) goto LAB_03092fe4;
    plVar8 = plVar4 + 2;
    do {
      lVar7 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 != 0) goto LAB_03092fe4;
    (**(code **)(*plVar4 + 0x18))();
    plVar4 = (long *)param_1[0xce];
  }
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar8 = plVar4 + 2;
    do {
      lVar7 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
      plVar4 = (long *)param_1[0xcd];
      goto joined_r0x0309301c;
    }
  }
  plVar4 = (long *)param_1[0xcd];
joined_r0x0309301c:
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar8 = plVar4 + 2;
    do {
      lVar7 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  FUN_0333af6c(param_1 + 0x30);
  plVar4 = (long *)param_1[0x2f];
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar8 = plVar4 + 2;
    do {
      lVar7 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  puVar3 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x174)) && (param_1[0x2d] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,param_1[0x2d],((ulong)*(uint *)((long)param_1 + 0x174) & 0x3fffffff) * 0xc);
  }
  param_1[0x2d] = 0;
  *(undefined4 *)((long)param_1 + 0x174) = 0x80000000;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x164)) && (param_1[0x2b] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,param_1[0x2b],((ulong)*(uint *)((long)param_1 + 0x164) & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((long)param_1 + 0x164) = 0x80000000;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x14c)) && (param_1[0x28] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,param_1[0x28],((ulong)*(uint *)((long)param_1 + 0x14c) & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((long)param_1 + 0x14c) = 0x80000000;
  param_1[0x28] = 0;
  if (param_1[8] != 0) {
    uVar5 = *(uint *)(param_1 + 0xb);
    if (*(char *)((long)param_1 + 0x4c) != '\0') {
      plVar4 = (long *)param_1[10];
      if ((int)uVar5 < 1) {
        plVar8 = plVar4;
      }
      else {
        plVar8 = plVar4;
        if (uVar5 != 1) {
          iVar9 = (uVar5 & 1) - uVar5;
          do {
            if (*plVar8 == 0) {
              lVar7 = plVar8[1];
              plVar6 = plVar4;
            }
            else {
              *plVar4 = *plVar8;
              lVar7 = plVar8[1];
              plVar6 = plVar4 + 1;
            }
            plVar4 = plVar6;
            if (lVar7 != 0) {
              plVar4 = plVar6 + 1;
              *plVar6 = lVar7;
            }
            plVar8 = plVar8 + 2;
            iVar9 = iVar9 + 2;
          } while (iVar9 != 0);
        }
        plVar6 = plVar4;
        if (((uVar5 & 1) != 0) && (*plVar8 != 0)) {
          plVar6 = plVar4 + 1;
          *plVar4 = *plVar8;
        }
        plVar4 = plVar6;
        plVar8 = (long *)param_1[10];
      }
      *(undefined1 *)((long)param_1 + 0x4c) = 0;
      uVar5 = (uint)((ulong)((long)plVar4 - (long)plVar8) >> 3);
    }
    if (uVar5 != 0) {
      (**(code **)(*(long *)param_1[8] + 0x28))((long *)param_1[8],param_1[10]);
    }
    *(undefined4 *)(param_1 + 0xb) = 0;
    *(undefined4 *)(param_1 + 9) = 0;
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x5c)) && (param_1[10] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,param_1[10],((ulong)*(uint *)((long)param_1 + 0x5c) & 0x3fffffff) << 3);
  }
  param_1[10] = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0x80000000;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 4));
  return;
}


