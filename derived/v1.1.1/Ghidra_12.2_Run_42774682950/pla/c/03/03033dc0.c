/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03033dc0; name: FUN_03033dc0
 */


long * FUN_03033dc0(long *param_1,long *param_2)

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
  char *__s;
  
  plVar5 = (long *)*param_1;
  plVar8 = (long *)*param_2;
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
      plVar5 = (long *)*param_1;
      plVar8 = (long *)*param_2;
    }
    *param_1 = (long)plVar8;
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
  lVar10 = param_2[1];
  *(int *)(param_1 + 2) = (int)param_2[2];
  param_1[1] = lVar10;
  *(undefined2 *)((long)param_1 + 0x14) = *(undefined2 *)((long)param_2 + 0x14);
  *(undefined1 *)((long)param_1 + 0x16) = *(undefined1 *)((long)param_2 + 0x16);
  puVar4 = PTR_PTR_0434a080;
  uVar11 = param_1[3];
  __s = (char *)(param_2[3] & 0xfffffffffffffffe);
  if ((char *)(uVar11 & 0xfffffffffffffffe) != __s) {
    if (__s == (char *)0x0) {
      param_1[3] = 0;
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
      param_1[3] = (ulong)(puVar7 + 2) | 1;
    }
    if ((uVar11 & 1) != 0) {
      lVar10 = tpidr_el0;
      lVar9 = *(long *)(lVar10 + 0x38d490);
      if (lVar9 == 0) {
        lVar9 = FUN_0333d16c(0,1);
        *(long *)(lVar10 + 0x38d490) = lVar9;
      }
      plVar8 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
      *(undefined8 *)(uVar11 - 0x11) = 0;
      (**(code **)(*plVar8 + 0x18))
                (plVar8,(undefined8 *)(uVar11 - 0x11),(long)*(int *)(uVar11 - 9) + 0x10);
    }
  }
  lVar10 = param_2[4];
  *(char *)(param_1 + 5) = (char)param_2[5];
  param_1[4] = lVar10;
  lVar10 = param_2[6];
  plVar5 = (long *)param_1[0xf];
  param_1[7] = param_2[7];
  param_1[6] = lVar10;
  lVar10 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = lVar10;
  lVar10 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = lVar10;
  lVar10 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = lVar10;
  *(int *)(param_1 + 0xe) = (int)param_2[0xe];
  plVar8 = (long *)param_2[0xf];
  if (plVar5 != plVar8) {
    if ((plVar8 == (long *)0x0) || (plVar8[1] == 0)) {
      param_1[0xf] = (long)plVar8;
    }
    else {
      plVar8 = plVar8 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = *plVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar5 = (long *)param_1[0xf];
      param_1[0xf] = param_2[0xf];
    }
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
  plVar5 = (long *)param_1[0x10];
  plVar8 = (long *)param_2[0x10];
  if (plVar5 != plVar8) {
    if ((plVar8 == (long *)0x0) || (plVar8[1] == 0)) {
      param_1[0x10] = (long)plVar8;
    }
    else {
      plVar8 = plVar8 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = *plVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar5 = (long *)param_1[0x10];
      param_1[0x10] = param_2[0x10];
    }
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
  *(short *)(param_1 + 0x11) = (short)param_2[0x11];
  *(undefined4 *)((long)param_1 + 0x8c) = *(undefined4 *)((long)param_2 + 0x8c);
  *(int *)(param_1 + 0x12) = (int)param_2[0x12];
  *(undefined4 *)((long)param_1 + 0x94) = *(undefined4 *)((long)param_2 + 0x94);
  plVar5 = (long *)param_1[0x13];
  plVar8 = (long *)param_2[0x13];
  if (plVar5 != plVar8) {
    if ((plVar8 == (long *)0x0) || (plVar8[1] == 0)) {
      param_1[0x13] = (long)plVar8;
    }
    else {
      plVar8 = plVar8 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = *plVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar5 = (long *)param_1[0x13];
      param_1[0x13] = param_2[0x13];
    }
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
  *(char *)(param_1 + 0x14) = (char)param_2[0x14];
  return param_1;
}


