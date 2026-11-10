/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0198afa4; name: FUN_0198afa4
 */


void FUN_0198afa4(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = (long *)param_1[0xd];
  if (plVar5 == (long *)0x0) {
LAB_0198afd8:
    plVar5 = (long *)param_1[0xc];
    if (plVar5 == (long *)0x0) goto LAB_0198affc;
LAB_0198afe0:
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 != 0) goto LAB_0198affc;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*plVar5 + 0x20))();
    plVar5 = (long *)param_1[0xb];
    if (plVar5 != (long *)0x0) goto LAB_0198b004;
LAB_0198b020:
    plVar5 = (long *)param_1[10];
    if (plVar5 == (long *)0x0) goto LAB_0198b044;
LAB_0198b028:
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 != 0) goto LAB_0198b044;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*plVar5 + 0x20))();
    plVar5 = (long *)param_1[9];
    if (plVar5 != (long *)0x0) goto LAB_0198b04c;
LAB_0198b068:
    plVar5 = (long *)param_1[8];
    if (plVar5 == (long *)0x0) goto LAB_0198b08c;
LAB_0198b070:
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 != 0) goto LAB_0198b08c;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*plVar5 + 0x20))();
    plVar5 = (long *)param_1[7];
    if (plVar5 != (long *)0x0) goto LAB_0198b094;
LAB_0198b0b0:
    plVar5 = (long *)param_1[6];
    if (plVar5 == (long *)0x0) goto LAB_0198b0d4;
LAB_0198b0b8:
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 != 0) goto LAB_0198b0d4;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*plVar5 + 0x20))();
    plVar5 = (long *)param_1[5];
    if (plVar5 != (long *)0x0) goto LAB_0198b0dc;
LAB_0198b0f8:
    plVar5 = (long *)param_1[4];
    if (plVar5 == (long *)0x0) goto LAB_0198b11c;
LAB_0198b100:
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 != 0) goto LAB_0198b11c;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*plVar5 + 0x20))();
    plVar5 = (long *)param_1[3];
    if (plVar5 != (long *)0x0) goto LAB_0198b124;
LAB_0198b140:
    plVar5 = (long *)param_1[2];
    if (plVar5 == (long *)0x0) goto LAB_0198b164;
LAB_0198b148:
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 != 0) goto LAB_0198b164;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*plVar5 + 0x20))();
    plVar5 = (long *)param_1[1];
  }
  else {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 != 0) goto LAB_0198afd8;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*plVar5 + 0x20))();
    plVar5 = (long *)param_1[0xc];
    if (plVar5 != (long *)0x0) goto LAB_0198afe0;
LAB_0198affc:
    plVar5 = (long *)param_1[0xb];
    if (plVar5 == (long *)0x0) goto LAB_0198b020;
LAB_0198b004:
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 != 0) goto LAB_0198b020;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*plVar5 + 0x20))();
    plVar5 = (long *)param_1[10];
    if (plVar5 != (long *)0x0) goto LAB_0198b028;
LAB_0198b044:
    plVar5 = (long *)param_1[9];
    if (plVar5 == (long *)0x0) goto LAB_0198b068;
LAB_0198b04c:
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 != 0) goto LAB_0198b068;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*plVar5 + 0x20))();
    plVar5 = (long *)param_1[8];
    if (plVar5 != (long *)0x0) goto LAB_0198b070;
LAB_0198b08c:
    plVar5 = (long *)param_1[7];
    if (plVar5 == (long *)0x0) goto LAB_0198b0b0;
LAB_0198b094:
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 != 0) goto LAB_0198b0b0;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*plVar5 + 0x20))();
    plVar5 = (long *)param_1[6];
    if (plVar5 != (long *)0x0) goto LAB_0198b0b8;
LAB_0198b0d4:
    plVar5 = (long *)param_1[5];
    if (plVar5 == (long *)0x0) goto LAB_0198b0f8;
LAB_0198b0dc:
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 != 0) goto LAB_0198b0f8;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*plVar5 + 0x20))();
    plVar5 = (long *)param_1[4];
    if (plVar5 != (long *)0x0) goto LAB_0198b100;
LAB_0198b11c:
    plVar5 = (long *)param_1[3];
    if (plVar5 == (long *)0x0) goto LAB_0198b140;
LAB_0198b124:
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 != 0) goto LAB_0198b140;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*plVar5 + 0x20))();
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) goto LAB_0198b148;
LAB_0198b164:
    plVar5 = (long *)param_1[1];
  }
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
      param_1 = (long *)*param_1;
      goto joined_r0x0198b18c;
    }
  }
  param_1 = (long *)*param_1;
joined_r0x0198b18c:
  if (param_1 != (long *)0x0) {
    lVar6 = param_1[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x0198b338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x20))();
      return;
    }
  }
  return;
}


