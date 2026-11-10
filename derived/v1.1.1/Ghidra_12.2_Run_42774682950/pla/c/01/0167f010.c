/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0167f010; name: FUN_0167f010
 */


void FUN_0167f010(char *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (*param_1 == '\0') {
    *(undefined8 *)(param_1 + 0x10) = *param_2;
    *(undefined8 *)(param_1 + 0x18) = param_2[1];
    *(undefined8 *)(param_1 + 0x20) = param_2[2];
    *(undefined8 *)(param_1 + 0x28) = param_2[3];
    plVar5 = (long *)param_2[4];
    *(long **)(param_1 + 0x30) = plVar5;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    uVar2 = *(undefined4 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x48) = param_2[7];
    uVar7 = param_2[6];
    *(undefined4 *)(param_1 + 0x50) = uVar2;
    *(undefined8 *)(param_1 + 0x40) = uVar7;
    lVar6 = param_2[9];
    *(long *)(param_1 + 0x58) = lVar6;
    if (lVar6 != 0) {
      piVar1 = (int *)(lVar6 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uVar7 = param_2[10];
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0xb);
    *(undefined8 *)(param_1 + 0x60) = uVar7;
    lVar6 = param_2[0xc];
    *(long *)(param_1 + 0x70) = lVar6;
    if (lVar6 != 0) {
      piVar1 = (int *)(lVar6 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uVar7 = param_2[0xd];
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0xe);
    *(undefined8 *)(param_1 + 0x78) = uVar7;
    lVar6 = param_2[0xf];
    *(long *)(param_1 + 0x88) = lVar6;
    if (lVar6 != 0) {
      piVar1 = (int *)(lVar6 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uVar7 = param_2[0x10];
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x11);
    *(undefined8 *)(param_1 + 0x90) = uVar7;
    uVar7 = param_2[0x13];
    cVar3 = *(char *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0xa0) = param_2[0x12];
    *(undefined8 *)(param_1 + 0xa8) = uVar7;
    param_1[0xb0] = cVar3;
    *param_1 = '\x01';
  }
  else {
    FUN_0167f144(param_1 + 0x10,param_2);
  }
  return;
}


