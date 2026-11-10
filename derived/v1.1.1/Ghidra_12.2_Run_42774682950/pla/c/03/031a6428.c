/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a6428; name: FUN_031a6428
 */


void FUN_031a6428(long *param_1)

{
  char *pcVar1;
  long *plVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  char cVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  undefined4 local_50;
  undefined2 local_4c;
  undefined4 local_48;
  
  lVar9 = param_1[0x30];
  *param_1 = (long)&PTR_LAB_04300620;
  if (lVar9 != 0) {
    local_48 = *(undefined4 *)((long)param_1 + 0x23c);
    local_50 = 0x8000010;
    local_4c = 0x2a;
    FUN_031aa380(lVar9 + 0x28,lVar9,&local_50);
  }
  if (param_1[0x42] == 0) {
    lVar9 = param_1[0x45];
    if (lVar9 == 0) goto LAB_031a6490;
LAB_031a68f4:
    pcVar1 = (char *)(lVar9 + 100);
    do {
      cVar10 = *pcVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar4) {
        *pcVar1 = '\x04';
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (cVar10 != '\x01') goto LAB_031a6490;
    *(undefined1 *)(*(long *)(lVar9 + 0x68) + 0x20) = 3;
    plVar8 = *(long **)(lVar9 + 0x68);
    *(undefined8 *)(lVar9 + 0x68) = 0;
    if ((plVar8 == (long *)0x0) || (plVar8[1] == 0)) goto LAB_031a6490;
    plVar2 = plVar8 + 2;
    do {
      lVar9 = *plVar2;
      cVar10 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar9 + -1 != 0) goto LAB_031a6490;
    (**(code **)(*plVar8 + 0x18))();
    lVar9 = param_1[0x30];
  }
  else {
    *(undefined1 *)(param_1[0x42] + 0x20) = 3;
    lVar9 = param_1[0x45];
    if (lVar9 != 0) goto LAB_031a68f4;
LAB_031a6490:
    lVar9 = param_1[0x30];
  }
  if (lVar9 != 0) {
    lVar11 = *(long *)(lVar9 + 0x438);
    *(undefined4 *)
     (*(long *)(*(long *)(lVar11 + 0x20) + (long)*(int *)(lVar11 + 0x28) * 8 + -8) + 0x23c) =
         *(undefined4 *)((long)param_1 + 0x23c);
    iVar3 = *(int *)((long)param_1 + 0x23c);
    lVar13 = (long)*(int *)(lVar11 + 0x28) + -1;
    iVar12 = (int)lVar13;
    *(int *)(lVar11 + 0x28) = iVar12;
    if (iVar12 != iVar3) {
      *(undefined8 *)(*(long *)(lVar11 + 0x20) + (long)iVar3 * 8) =
           *(undefined8 *)(*(long *)(lVar11 + 0x20) + lVar13 * 8);
    }
    FUN_03219418(lVar9 + 0x100,lVar9,param_1);
  }
  cVar10 = DAT_0444b3c8;
  if (DAT_0444b3c8 != '\0') {
    plVar8 = (long *)(param_1[0x51] & 0xfffffffffffffffc);
    if (plVar8 != (long *)0x0) {
      if ((param_1[0x51] & 3U) == 0) {
        param_1[0x51] = (ulong)plVar8 | 1;
        do {
          lVar9 = *plVar8;
          plVar8 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          (**(code **)(lVar9 + 8))();
        } while (plVar8 != (long *)0x0);
        param_1[0x51] = 0;
        cVar10 = DAT_0444b3c8;
      }
      else {
        do {
          plVar2 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          plVar8[1] = (ulong)plVar2 | 1;
          plVar8 = plVar2;
        } while (plVar2 != (long *)0x0);
      }
      if (cVar10 == '\0') goto LAB_031a6544;
    }
    plVar8 = (long *)(param_1[0x50] & 0xfffffffffffffffc);
    if (plVar8 != (long *)0x0) {
      if ((param_1[0x50] & 3U) == 0) {
        param_1[0x50] = (ulong)plVar8 | 1;
        do {
          lVar9 = *plVar8;
          plVar8 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          (**(code **)(lVar9 + 8))();
        } while (plVar8 != (long *)0x0);
        param_1[0x50] = 0;
        cVar10 = DAT_0444b3c8;
      }
      else {
        do {
          plVar2 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          plVar8[1] = (ulong)plVar2 | 1;
          plVar8 = plVar2;
        } while (plVar2 != (long *)0x0);
      }
      if (cVar10 == '\0') goto LAB_031a6544;
    }
    plVar8 = (long *)(param_1[0x4f] & 0xfffffffffffffffc);
    if (plVar8 != (long *)0x0) {
      if ((param_1[0x4f] & 3U) == 0) {
        param_1[0x4f] = (ulong)plVar8 | 1;
        do {
          lVar9 = *plVar8;
          plVar8 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          (**(code **)(lVar9 + 8))();
        } while (plVar8 != (long *)0x0);
        param_1[0x4f] = 0;
        cVar10 = DAT_0444b3c8;
      }
      else {
        do {
          plVar2 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          plVar8[1] = (ulong)plVar2 | 1;
          plVar8 = plVar2;
        } while (plVar2 != (long *)0x0);
      }
      if (cVar10 == '\0') goto LAB_031a6544;
    }
    plVar8 = (long *)(param_1[0x4e] & 0xfffffffffffffffc);
    if (plVar8 != (long *)0x0) {
      if ((param_1[0x4e] & 3U) == 0) {
        param_1[0x4e] = (ulong)plVar8 | 1;
        do {
          lVar9 = *plVar8;
          plVar8 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          (**(code **)(lVar9 + 8))();
        } while (plVar8 != (long *)0x0);
        param_1[0x4e] = 0;
        cVar10 = DAT_0444b3c8;
      }
      else {
        do {
          plVar2 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          plVar8[1] = (ulong)plVar2 | 1;
          plVar8 = plVar2;
        } while (plVar2 != (long *)0x0);
      }
      if (cVar10 == '\0') goto LAB_031a6544;
    }
    plVar8 = (long *)(param_1[0x4d] & 0xfffffffffffffffc);
    if (plVar8 != (long *)0x0) {
      if ((param_1[0x4d] & 3U) == 0) {
        param_1[0x4d] = (ulong)plVar8 | 1;
        do {
          lVar9 = *plVar8;
          plVar8 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          (**(code **)(lVar9 + 8))();
        } while (plVar8 != (long *)0x0);
        param_1[0x4d] = 0;
        cVar10 = DAT_0444b3c8;
      }
      else {
        do {
          plVar2 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          plVar8[1] = (ulong)plVar2 | 1;
          plVar8 = plVar2;
        } while (plVar2 != (long *)0x0);
      }
      if (cVar10 == '\0') goto LAB_031a6544;
    }
    plVar8 = (long *)(param_1[0x4c] & 0xfffffffffffffffc);
    if (plVar8 != (long *)0x0) {
      if ((param_1[0x4c] & 3U) == 0) {
        param_1[0x4c] = (ulong)plVar8 | 1;
        do {
          lVar9 = *plVar8;
          plVar8 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          (**(code **)(lVar9 + 8))();
        } while (plVar8 != (long *)0x0);
        param_1[0x4c] = 0;
        cVar10 = DAT_0444b3c8;
      }
      else {
        do {
          plVar2 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          plVar8[1] = (ulong)plVar2 | 1;
          plVar8 = plVar2;
        } while (plVar2 != (long *)0x0);
      }
      if (cVar10 == '\0') goto LAB_031a6544;
    }
    plVar8 = (long *)(param_1[0x4b] & 0xfffffffffffffffc);
    if (plVar8 != (long *)0x0) {
      if ((param_1[0x4b] & 3U) == 0) {
        param_1[0x4b] = (ulong)plVar8 | 1;
        do {
          lVar9 = *plVar8;
          plVar8 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          (**(code **)(lVar9 + 8))();
        } while (plVar8 != (long *)0x0);
        param_1[0x4b] = 0;
      }
      else {
        do {
          plVar2 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          plVar8[1] = (ulong)plVar2 | 1;
          plVar8 = plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
  }
LAB_031a6544:
  puVar6 = PTR_PTR_0434a080;
  if ((int)param_1[0x4a] != 0) {
    lVar11 = param_1[0x49];
    lVar9 = (long)(int)param_1[0x4a] * 0xa0;
    do {
      lVar13 = lVar11 + lVar9;
      *(undefined4 *)(lVar13 + -8) = 0;
      if ((-1 < *(int *)(lVar13 + -4)) && (*(long *)(lVar13 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar6 + 0x18))
                  (puVar6,*(long *)(lVar13 + -0x10),*(int *)(lVar13 + -4) << 2);
      }
      lVar9 = lVar9 + -0xa0;
      *(undefined8 *)(lVar13 + -0x10) = 0;
      *(undefined4 *)(lVar13 + -4) = 0x80000000;
    } while (lVar9 != 0);
  }
  *(undefined4 *)(param_1 + 0x4a) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x254)) && (param_1[0x49] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))
              (puVar6,param_1[0x49],((ulong)*(uint *)((long)param_1 + 0x254) & 0x3fffffff) * 0xa0);
  }
  plVar8 = (long *)param_1[0x45];
  param_1[0x49] = 0;
  *(undefined4 *)((long)param_1 + 0x254) = 0x80000000;
  if ((plVar8 == (long *)0x0) || (plVar8[1] == 0)) {
LAB_031a6574:
    plVar8 = (long *)param_1[0x44];
    if (plVar8 == (long *)0x0) goto LAB_031a659c;
LAB_031a657c:
    if (plVar8[1] == 0) goto LAB_031a659c;
    plVar2 = plVar8 + 2;
    do {
      lVar9 = *plVar2;
      cVar10 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar9 + -1 != 0) goto LAB_031a659c;
    (**(code **)(*plVar8 + 0x18))();
    plVar8 = (long *)param_1[0x42];
    if (plVar8 != (long *)0x0) goto LAB_031a66b0;
LAB_031a65a4:
    plVar8 = (long *)param_1[0x30];
  }
  else {
    plVar2 = plVar8 + 2;
    do {
      lVar9 = *plVar2;
      cVar10 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar9 + -1 != 0) goto LAB_031a6574;
    (**(code **)(*plVar8 + 0x18))();
    plVar8 = (long *)param_1[0x44];
    if (plVar8 != (long *)0x0) goto LAB_031a657c;
LAB_031a659c:
    plVar8 = (long *)param_1[0x42];
    if (plVar8 == (long *)0x0) goto LAB_031a65a4;
LAB_031a66b0:
    if (plVar8[1] == 0) goto LAB_031a65a4;
    plVar2 = plVar8 + 2;
    do {
      lVar9 = *plVar2;
      cVar10 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar9 + -1 != 0) goto LAB_031a65a4;
    (**(code **)(*plVar8 + 0x18))();
    plVar8 = (long *)param_1[0x30];
  }
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar2 = plVar8 + 2;
    do {
      lVar9 = *plVar2;
      cVar10 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  plVar8 = (long *)param_1[0x2a];
  param_1[0xe] = (long)&PTR_LAB_0430b3b0;
  if ((plVar8 == (long *)0x0) || (plVar8[1] == 0)) {
LAB_031a65e0:
    plVar8 = (long *)param_1[0x29];
  }
  else {
    plVar2 = plVar8 + 2;
    do {
      lVar9 = *plVar2;
      cVar10 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar9 + -1 != 0) goto LAB_031a65e0;
    (**(code **)(*plVar8 + 0x18))();
    plVar8 = (long *)param_1[0x29];
  }
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar2 = plVar8 + 2;
    do {
      lVar9 = *plVar2;
      cVar10 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
      plVar8 = (long *)param_1[0x28];
      goto joined_r0x031a6a88;
    }
  }
  plVar8 = (long *)param_1[0x28];
joined_r0x031a6a88:
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar2 = plVar8 + 2;
    do {
      lVar9 = *plVar2;
      cVar10 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  puVar7 = PTR_DAT_043723c0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[0xe] = (long)(puVar7 + 0x10);
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))
              (puVar6,param_1[4],((ulong)*(uint *)((long)param_1 + 0x2c) & 0x3fffffff) << 5);
  }
  param_1[4] = 0;
  *param_1 = (long)(puVar7 + 0x10);
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  return;
}


