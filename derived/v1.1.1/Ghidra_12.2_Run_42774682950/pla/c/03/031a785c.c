/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a785c; name: FUN_031a785c
 */


void FUN_031a785c(long param_1)

{
  char *pcVar1;
  long *plVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  undefined4 local_30;
  undefined2 local_2c;
  undefined4 local_28;
  
  local_28 = *(undefined4 *)(param_1 + 0x23c);
  local_30 = 0x8000010;
  local_2c = 0x4b;
  FUN_031aa380(*(long *)(param_1 + 0x180) + 0x28,*(long *)(param_1 + 0x180),&local_30);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(long *)(param_1 + 0x210) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x210) + 0x20) = 3;
    plVar6 = *(long **)(param_1 + 0x210);
    *(undefined8 *)(param_1 + 0x210) = 0;
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar2 = plVar6 + 2;
      do {
        lVar7 = *plVar2;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))();
        lVar7 = *(long *)(param_1 + 0x228);
        goto joined_r0x031a79a8;
      }
    }
  }
  lVar7 = *(long *)(param_1 + 0x228);
joined_r0x031a79a8:
  if (lVar7 != 0) {
    pcVar1 = (char *)(lVar7 + 100);
    do {
      cVar3 = *pcVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar5) {
        *pcVar1 = '\x04';
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (cVar3 == '\x01') {
      *(undefined1 *)(*(long *)(lVar7 + 0x68) + 0x20) = 3;
      plVar6 = *(long **)(lVar7 + 0x68);
      *(undefined8 *)(lVar7 + 0x68) = 0;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar2 = plVar6 + 2;
        do {
          lVar7 = *plVar2;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
    }
    plVar6 = *(long **)(param_1 + 0x228);
    *(undefined8 *)(param_1 + 0x228) = 0;
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar2 = plVar6 + 2;
      do {
        lVar7 = *plVar2;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))();
      }
    }
  }
  plVar6 = *(long **)(param_1 + 0x220);
  *(undefined8 *)(param_1 + 0x220) = 0;
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar2 = plVar6 + 2;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  *(undefined4 *)(param_1 + 400) = 1;
  *(undefined1 *)(param_1 + 0x198) = 0;
  return;
}


