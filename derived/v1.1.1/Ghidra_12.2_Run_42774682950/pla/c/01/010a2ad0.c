/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010a2ad0; name: FUN_010a2ad0
 */


uint FUN_010a2ad0(uint param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  long *plVar7;
  
  if (param_1 < 0x7531) {
    if (param_1 == 0) {
      return 2;
    }
    plVar7 = *(long **)(DAT_043ba448 + 0x68);
    if (plVar7 == (long *)0x0) {
      uVar6 = FUN_02c2e7c4(0);
      bVar5 = param_1 < uVar6;
    }
    else {
      plVar1 = plVar7 + 10;
      do {
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar6 = FUN_02c2e7c4(plVar7);
      bVar5 = param_1 < uVar6;
      do {
        iVar4 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    if (!bVar5) {
      param_1 = 4;
    }
    return param_1;
  }
  if (param_1 < 0x9c41) {
    param_1 = param_1 - 0x7531;
    plVar7 = *(long **)(DAT_043ba450 + 0x68);
    if (plVar7 == (long *)0x0) {
LAB_010a2ce4:
      uVar6 = FUN_02c2e7c4(0);
      bVar5 = param_1 < uVar6;
      goto LAB_010a2c18;
    }
    plVar1 = plVar7 + 10;
    do {
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar6 = FUN_02c2e7c4(plVar7);
    bVar5 = uVar6 <= param_1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if (60000 < param_1) {
      if (param_1 >> 0x10 != 0) {
        return 4;
      }
      param_1 = param_1 - 0xea61;
      plVar7 = *(long **)(DAT_043ba460 + 0x68);
      if (plVar7 == (long *)0x0) {
        uVar6 = FUN_02c2e7c4(0);
        bVar5 = param_1 < uVar6;
      }
      else {
        plVar1 = plVar7 + 10;
        do {
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar6 = FUN_02c2e7c4(plVar7);
        bVar5 = param_1 < uVar6;
        do {
          iVar4 = (int)*plVar1 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      if (!bVar5) {
        param_1 = 0;
      }
      return param_1;
    }
    param_1 = param_1 - 0x9c41;
    plVar7 = *(long **)(DAT_043ba458 + 0x68);
    if (plVar7 == (long *)0x0) goto LAB_010a2ce4;
    plVar1 = plVar7 + 10;
    do {
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar6 = FUN_02c2e7c4(plVar7);
    bVar5 = uVar6 <= param_1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  bVar5 = !bVar5;
  if (iVar4 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
LAB_010a2c18:
  if (!bVar5) {
    param_1 = 4;
  }
  return param_1;
}


