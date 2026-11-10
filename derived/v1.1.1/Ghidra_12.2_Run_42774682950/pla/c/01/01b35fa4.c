/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b35fa4; name: FUN_01b35fa4
 */


void FUN_01b35fa4(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  plVar6 = (long *)param_1[4];
  param_1[4] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  uVar7 = param_2[4];
  param_2[4] = 0;
  param_1[4] = uVar7;
  FUN_01b2aa30(param_1 + 5,param_2 + 5);
  param_1[0x4e] = param_2[0x4e];
  param_1[0x4f] = param_2[0x4f];
  uVar7 = param_2[0x50];
  plVar6 = (long *)param_1[0x51];
  param_1[0x51] = 0;
  param_1[0x50] = uVar7;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  uVar7 = param_2[0x51];
  param_2[0x51] = 0;
  param_1[0x51] = uVar7;
  plVar6 = (long *)param_1[0x52];
  param_1[0x52] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  uVar7 = param_2[0x52];
  param_2[0x52] = 0;
  param_1[0x52] = uVar7;
  param_1[0x53] = param_2[0x53];
  param_1[0x54] = param_2[0x54];
  uVar7 = param_2[0x55];
  plVar6 = (long *)param_1[0x56];
  param_1[0x56] = 0;
  param_1[0x55] = uVar7;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  uVar7 = param_2[0x56];
  param_2[0x56] = 0;
  param_1[0x56] = uVar7;
  uVar3 = *(undefined4 *)(param_2 + 0x57);
  plVar6 = (long *)param_1[0x58];
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x57) = uVar3;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  uVar7 = param_2[0x58];
  param_2[0x58] = 0;
  param_1[0x58] = uVar7;
  param_1[0x59] = param_2[0x59];
  param_1[0x5a] = param_2[0x5a];
  uVar7 = param_2[0x5b];
  plVar6 = (long *)param_1[0x5c];
  param_1[0x5c] = 0;
  param_1[0x5b] = uVar7;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  uVar7 = param_2[0x5c];
  param_2[0x5c] = 0;
  param_1[0x5c] = uVar7;
  uVar3 = *(undefined4 *)(param_2 + 0x5d);
  plVar6 = (long *)param_1[0x5e];
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5d) = uVar3;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  uVar7 = param_2[0x5e];
  param_2[0x5e] = 0;
  param_1[0x5e] = uVar7;
  param_1[0x5f] = param_2[0x5f];
  param_1[0x60] = param_2[0x60];
  uVar7 = param_2[0x61];
  plVar6 = (long *)param_1[0x62];
  param_1[0x62] = 0;
  param_1[0x61] = uVar7;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  uVar7 = param_2[0x62];
  param_2[0x62] = 0;
  param_1[0x62] = uVar7;
  *(undefined4 *)(param_1 + 99) = *(undefined4 *)(param_2 + 99);
  param_1[100] = param_2[100];
  param_1[0x65] = param_2[0x65];
  uVar7 = param_2[0x66];
  plVar6 = (long *)param_1[0x67];
  param_1[0x67] = 0;
  param_1[0x66] = uVar7;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  uVar7 = param_2[0x67];
  param_2[0x67] = 0;
  param_1[0x67] = uVar7;
  param_1[0x68] = param_2[0x68];
  param_1[0x69] = param_2[0x69];
  uVar7 = param_2[0x6a];
  plVar6 = (long *)param_1[0x6b];
  param_1[0x6b] = 0;
  param_1[0x6a] = uVar7;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  uVar7 = param_2[0x6b];
  param_2[0x6b] = 0;
  param_1[0x6b] = uVar7;
  plVar6 = (long *)param_1[0x6c];
  param_1[0x6c] = 0;
  if (plVar6 != (long *)0x0) {
    lVar8 = plVar6[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))();
    }
  }
  uVar7 = param_2[0x6c];
  param_2[0x6c] = 0;
  param_1[0x6c] = uVar7;
  plVar6 = (long *)param_1[0x6d];
  param_1[0x6d] = 0;
  if (plVar6 != (long *)0x0) {
    lVar8 = plVar6[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))();
    }
  }
  uVar7 = param_2[0x6d];
  param_2[0x6d] = 0;
  param_1[0x6d] = uVar7;
  *(undefined4 *)(param_1 + 0x6e) = *(undefined4 *)(param_2 + 0x6e);
  return;
}


