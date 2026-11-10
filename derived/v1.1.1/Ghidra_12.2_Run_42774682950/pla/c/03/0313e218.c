/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0313e218; name: FUN_0313e218
 */


void FUN_0313e218(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  size_t sVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  char *__s;
  
  puVar4 = PTR_PTR_0434a080;
  __s = (char *)(*param_2 & 0xfffffffffffffffe);
  uVar13 = *param_1;
  if ((char *)(uVar13 & 0xfffffffffffffffe) != __s) {
    if (__s == (char *)0x0) {
      *param_1 = 0;
    }
    else {
      sVar6 = strlen(__s);
      uVar1 = (int)sVar6 + 1;
      puVar7 = (undefined8 *)
               (**(code **)(*(long *)puVar4 + 0x10))
                         (puVar4,(long)((sVar6 << 0x20) + 0x1100000000) >> 0x20,0);
      *puVar7 = puVar4;
      *(uint *)(puVar7 + 1) = uVar1;
      memcpy(puVar7 + 2,__s,(ulong)uVar1);
      *param_1 = (ulong)(puVar7 + 2) | 1;
    }
    if ((uVar13 & 1) != 0) {
      lVar10 = tpidr_el0;
      lVar9 = *(long *)(lVar10 + 0x38d490);
      if (lVar9 == 0) {
        lVar9 = FUN_0333d16c(0,1);
        *(long *)(lVar10 + 0x38d490) = lVar9;
      }
      plVar8 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
      *(undefined8 *)(uVar13 - 0x11) = 0;
      (**(code **)(*plVar8 + 0x18))
                (plVar8,(undefined8 *)(uVar13 - 0x11),(long)*(int *)(uVar13 - 9) + 0x10);
    }
  }
  uVar13 = param_2[2];
  plVar5 = (long *)param_1[0xb];
  param_1[1] = param_2[1];
  param_1[2] = uVar13;
  uVar13 = param_2[3];
  uVar11 = param_2[4];
  uVar12 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar12;
  param_1[3] = uVar13;
  param_1[4] = uVar11;
  uVar13 = param_2[7];
  uVar11 = param_2[8];
  uVar12 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar12;
  param_1[7] = uVar13;
  param_1[8] = uVar11;
  plVar8 = (long *)param_2[0xb];
  if (plVar5 != plVar8) {
    if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
      plVar8 = plVar8 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = *plVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar5 = (long *)param_1[0xb];
      plVar8 = (long *)param_2[0xb];
    }
    param_1[0xb] = (ulong)plVar8;
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar8 = plVar5 + 2;
      do {
        lVar10 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))();
      }
    }
  }
  plVar5 = (long *)param_1[0xc];
  plVar8 = (long *)param_2[0xc];
  if (plVar5 != plVar8) {
    if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
      plVar8 = plVar8 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = *plVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar5 = (long *)param_1[0xc];
      plVar8 = (long *)param_2[0xc];
    }
    param_1[0xc] = (ulong)plVar8;
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar8 = plVar5 + 2;
      do {
        lVar10 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))();
      }
    }
  }
  plVar5 = (long *)param_1[0xd];
  plVar8 = (long *)param_2[0xd];
  if (plVar5 != plVar8) {
    if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
      plVar8 = plVar8 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = *plVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar5 = (long *)param_1[0xd];
      plVar8 = (long *)param_2[0xd];
    }
    param_1[0xd] = (ulong)plVar8;
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar8 = plVar5 + 2;
      do {
        lVar10 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))();
      }
    }
  }
  param_1[0xe] = param_2[0xe];
  uVar13 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar13;
  uVar13 = param_2[0x12];
  *(undefined4 *)((long)param_1 + 0x93) = *(undefined4 *)((long)param_2 + 0x93);
  *(int *)(param_1 + 0x12) = (int)uVar13;
  uVar13 = param_2[0x14];
  plVar5 = (long *)param_1[0x18];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar13;
  uVar13 = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = uVar13;
  plVar8 = (long *)param_2[0x18];
  if (plVar5 != plVar8) {
    if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
      plVar8 = plVar8 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = *plVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar5 = (long *)param_1[0x18];
      plVar8 = (long *)param_2[0x18];
    }
    param_1[0x18] = (ulong)plVar8;
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar8 = plVar5 + 2;
      do {
        lVar10 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))();
      }
    }
  }
  plVar5 = (long *)param_1[0x19];
  plVar8 = (long *)param_2[0x19];
  if (plVar5 != plVar8) {
    if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
      plVar8 = plVar8 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = *plVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar5 = (long *)param_1[0x19];
      plVar8 = (long *)param_2[0x19];
    }
    param_1[0x19] = (ulong)plVar8;
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar8 = plVar5 + 2;
      do {
        lVar10 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))();
      }
    }
  }
  plVar5 = (long *)param_1[0x1a];
  plVar8 = (long *)param_2[0x1a];
  if (plVar5 != plVar8) {
    if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
      plVar8 = plVar8 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = *plVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar5 = (long *)param_1[0x1a];
      plVar8 = (long *)param_2[0x1a];
    }
    param_1[0x1a] = (ulong)plVar8;
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar8 = plVar5 + 2;
      do {
        lVar10 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))();
      }
    }
  }
  uVar13 = param_2[0x1b];
  uVar11 = param_2[0x1d];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = uVar11;
  param_1[0x1b] = uVar13;
  uVar13 = param_2[0x1e];
  uVar11 = param_2[0x1f];
  uVar12 = param_2[0x20];
  *(int *)(param_1 + 0x21) = (int)param_2[0x21];
  param_1[0x1e] = uVar13;
  param_1[0x1f] = uVar11;
  param_1[0x20] = uVar12;
  plVar5 = (long *)param_1[0x22];
  plVar8 = (long *)param_2[0x22];
  if (plVar5 != plVar8) {
    if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
      plVar8 = plVar8 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = *plVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar5 = (long *)param_1[0x22];
      plVar8 = (long *)param_2[0x22];
    }
    param_1[0x22] = (ulong)plVar8;
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar8 = plVar5 + 2;
      do {
        lVar10 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))();
      }
    }
  }
  uVar13 = param_2[0x24];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = uVar13;
  return;
}


