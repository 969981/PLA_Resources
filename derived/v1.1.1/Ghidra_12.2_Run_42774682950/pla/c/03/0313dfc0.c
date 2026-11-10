/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0313dfc0; name: FUN_0313dfc0
 */


void FUN_0313dfc0(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  long *plVar2;
  char *__s;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  size_t sVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  *param_1 = 0;
  puVar5 = PTR_PTR_0434a080;
  __s = (char *)(*param_2 & 0xfffffffffffffffe);
  if (__s != (char *)0x0) {
    sVar6 = strlen(__s);
    uVar1 = (int)sVar6 + 1;
    puVar7 = (undefined8 *)
             (**(code **)(*(long *)puVar5 + 0x10))
                       (puVar5,(long)((sVar6 << 0x20) + 0x1100000000) >> 0x20,0);
    *puVar7 = puVar5;
    *(uint *)(puVar7 + 1) = uVar1;
    memcpy(puVar7 + 2,__s,(ulong)uVar1);
    *param_1 = (ulong)(puVar7 + 2) | 1;
  }
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar8;
  uVar8 = param_2[3];
  uVar9 = param_2[4];
  uVar10 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar10;
  param_1[3] = uVar8;
  param_1[4] = uVar9;
  uVar8 = param_2[7];
  uVar9 = param_2[8];
  uVar10 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar10;
  param_1[7] = uVar8;
  param_1[8] = uVar9;
  uVar8 = param_2[0xb];
  param_1[0xb] = uVar8;
  if ((uVar8 != 0) && (*(long *)(uVar8 + 8) != 0)) {
    plVar2 = (long *)(uVar8 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar8 = param_2[0xc];
  param_1[0xc] = uVar8;
  if ((uVar8 != 0) && (*(long *)(uVar8 + 8) != 0)) {
    plVar2 = (long *)(uVar8 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar8 = param_2[0xd];
  param_1[0xd] = uVar8;
  if ((uVar8 != 0) && (*(long *)(uVar8 + 8) != 0)) {
    plVar2 = (long *)(uVar8 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar8 = param_2[0x17];
  param_1[0x15] = param_2[0x15];
  param_1[0x17] = uVar8;
  uVar8 = param_2[0x13];
  param_1[0x11] = param_2[0x11];
  param_1[0x13] = uVar8;
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  uVar8 = param_2[0x10];
  param_1[0x12] = param_2[0x12];
  param_1[0x10] = uVar8;
  uVar8 = param_2[0x14];
  param_1[0x16] = param_2[0x16];
  param_1[0x14] = uVar8;
  uVar8 = param_2[0x18];
  param_1[0x18] = uVar8;
  if ((uVar8 != 0) && (*(long *)(uVar8 + 8) != 0)) {
    plVar2 = (long *)(uVar8 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar8 = param_2[0x19];
  param_1[0x19] = uVar8;
  if ((uVar8 != 0) && (*(long *)(uVar8 + 8) != 0)) {
    plVar2 = (long *)(uVar8 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar8 = param_2[0x1a];
  param_1[0x1a] = uVar8;
  if ((uVar8 != 0) && (*(long *)(uVar8 + 8) != 0)) {
    plVar2 = (long *)(uVar8 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar8 = param_2[0x1b];
  uVar9 = param_2[0x1d];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = uVar9;
  param_1[0x1b] = uVar8;
  uVar8 = param_2[0x1e];
  uVar9 = param_2[0x1f];
  uVar10 = param_2[0x20];
  *(int *)(param_1 + 0x21) = (int)param_2[0x21];
  param_1[0x1e] = uVar8;
  param_1[0x1f] = uVar9;
  param_1[0x20] = uVar10;
  uVar8 = param_2[0x22];
  param_1[0x22] = uVar8;
  if ((uVar8 != 0) && (*(long *)(uVar8 + 8) != 0)) {
    plVar2 = (long *)(uVar8 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar8 = param_2[0x24];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = uVar8;
  return;
}


