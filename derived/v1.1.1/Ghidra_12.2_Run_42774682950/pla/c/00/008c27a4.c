/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008c27a4; name: FUN_008c27a4
 */


undefined8 FUN_008c27a4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  
  plVar7 = *(long **)(param_1 + 0x90);
  if (plVar7 == (long *)0x0) {
LAB_008c286c:
    plVar7 = *(long **)(param_1 + 0xf0);
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      iVar5 = FUN_02c6849c(plVar7[0x13]);
      bVar3 = true;
      if (((6 < iVar5 - 0x1e5U || (1 << (ulong)(iVar5 - 0x1e5U & 0x1f) & 0x4bU) == 0) &&
          ((4 < iVar5 - 0x281U || ((1 << (ulong)(iVar5 - 0x281U & 0x1f) & 0x13U) == 0)))) &&
         (iVar5 != 0x389)) {
        bVar3 = false;
      }
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      if (bVar3) goto LAB_008c2834;
    }
    plVar7 = *(long **)(param_1 + 0x150);
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      iVar5 = FUN_02c6849c(plVar7[0x13]);
      bVar3 = true;
      if (((6 < iVar5 - 0x1e5U || (1 << (ulong)(iVar5 - 0x1e5U & 0x1f) & 0x4bU) == 0) &&
          ((4 < iVar5 - 0x281U || ((1 << (ulong)(iVar5 - 0x281U & 0x1f) & 0x13U) == 0)))) &&
         (iVar5 != 0x389)) {
        bVar3 = false;
      }
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      if (bVar3) goto LAB_008c2834;
    }
    plVar7 = *(long **)(param_1 + 0x1b0);
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      iVar5 = FUN_02c6849c(plVar7[0x13]);
      bVar3 = true;
      if ((6 < iVar5 - 0x1e5U || (1 << (ulong)(iVar5 - 0x1e5U & 0x1f) & 0x4bU) == 0) &&
         (((4 < iVar5 - 0x281U || ((1 << (ulong)(iVar5 - 0x281U & 0x1f) & 0x13U) == 0)) &&
          (iVar5 != 0x389)))) {
        bVar3 = false;
      }
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      if (bVar3) goto LAB_008c2834;
    }
    plVar7 = *(long **)(param_1 + 0x210);
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      iVar5 = FUN_02c6849c(plVar7[0x13]);
      bVar3 = true;
      if (((6 < iVar5 - 0x1e5U || (1 << (ulong)(iVar5 - 0x1e5U & 0x1f) & 0x4bU) == 0) &&
          ((4 < iVar5 - 0x281U || ((1 << (ulong)(iVar5 - 0x281U & 0x1f) & 0x13U) == 0)))) &&
         (iVar5 != 0x389)) {
        bVar3 = false;
      }
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      if (bVar3) goto LAB_008c2834;
    }
    plVar7 = *(long **)(param_1 + 0x270);
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      iVar5 = FUN_02c6849c(plVar7[0x13]);
      bVar3 = true;
      if (((6 < iVar5 - 0x1e5U || (1 << (ulong)(iVar5 - 0x1e5U & 0x1f) & 0x4bU) == 0) &&
          ((4 < iVar5 - 0x281U || ((1 << (ulong)(iVar5 - 0x281U & 0x1f) & 0x13U) == 0)))) &&
         (iVar5 != 0x389)) {
        bVar3 = false;
      }
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      if (bVar3) goto LAB_008c2834;
    }
    uVar6 = 0;
  }
  else {
    plVar1 = plVar7 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    iVar5 = FUN_02c6849c(plVar7[0x13]);
    bVar3 = true;
    if ((6 < iVar5 - 0x1e5U || (1 << (ulong)(iVar5 - 0x1e5U & 0x1f) & 0x4bU) == 0) &&
       (((4 < iVar5 - 0x281U || ((1 << (ulong)(iVar5 - 0x281U & 0x1f) & 0x13U) == 0)) &&
        (iVar5 != 0x389)))) {
      bVar3 = false;
    }
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    if (!bVar3) goto LAB_008c286c;
LAB_008c2834:
    uVar6 = 1;
  }
  return uVar6;
}


