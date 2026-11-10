/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006e1ca8; name: FUN_006e1ca8
 */


void FUN_006e1ca8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[2] = param_2[2];
  lVar4 = param_2[3];
  param_1[3] = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (param_1 != param_2) {
    puVar5 = (undefined8 *)param_2[8];
    if (puVar5 == (undefined8 *)0x0) {
      param_1[8] = 0;
      puVar5 = (undefined8 *)param_2[0xe];
    }
    else if (puVar5 == param_2 + 4) {
      param_1[8] = param_1 + 4;
      (**(code **)(*(long *)param_2[8] + 0x28))((long *)param_2[8],param_1 + 4);
      puVar5 = (undefined8 *)param_2[0xe];
    }
    else {
      param_1[8] = puVar5;
      param_2[8] = 0;
      puVar5 = (undefined8 *)param_2[0xe];
    }
    if (puVar5 == (undefined8 *)0x0) {
      param_1[0xe] = 0;
    }
    else if (puVar5 == param_2 + 10) {
      param_1[0xe] = param_1 + 10;
      (**(code **)(*(long *)param_2[0xe] + 0x28))((long *)param_2[0xe],param_1 + 10);
    }
    else {
      param_1[0xe] = puVar5;
      param_2[0xe] = 0;
    }
  }
  param_1[0x10] = param_2[0x10];
  lVar4 = param_2[0x11];
  param_1[0x11] = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0x12] = param_2[0x12];
  lVar4 = param_2[0x13];
  param_1[0x13] = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0x14] = param_2[0x14];
  lVar4 = param_2[0x15];
  param_1[0x15] = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  param_1[0x17] = param_2[0x17];
  lVar4 = param_2[0x18];
  param_1[0x18] = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar7 = param_2[0x1a];
  uVar6 = param_2[0x19];
  uVar8 = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1b] = uVar8;
  param_1[0x1a] = uVar7;
  param_1[0x19] = uVar6;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
                    /* try { // try from 006e1e68 to 006e1e6b has its CatchHandler @ 006e1e7c */
  FUN_00294ef4(param_1 + 0x1d,param_2 + 0x1d);
  return;
}


