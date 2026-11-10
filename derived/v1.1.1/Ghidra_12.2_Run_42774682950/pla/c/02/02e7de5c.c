/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7de5c; name: FUN_02e7de5c
 */


undefined4 * FUN_02e7de5c(undefined8 *param_1,undefined2 param_2,int param_3)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined4 *puVar9;
  ulong uVar10;
  undefined1 auStack_64 [4];
  
  piVar1 = (int *)((long)param_1 + 0x9c);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = *piVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar3 = param_3 + 3U & 0xfffffffc;
  uVar6 = (ulong)uVar3;
  plVar2 = param_1 + 1;
  uVar8 = (ulong)(uVar3 + 4);
  do {
    puVar9 = (undefined4 *)param_1[1];
    puVar7 = (undefined4 *)*param_1;
    if (puVar9 < puVar7) {
      if ((ulong)((long)puVar7 - (long)puVar9) <= uVar8) {
        puVar9 = (undefined4 *)0x0;
        goto LAB_02e7df4c;
      }
      while ((undefined4 *)*plVar2 == puVar9) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = (long)puVar9 + uVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') goto joined_r0x02e7df9c;
      }
    }
    else if (uVar8 < (ulong)(param_1[3] - (long)puVar9)) {
      while ((undefined4 *)*plVar2 == puVar9) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = (long)puVar9 + uVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') goto joined_r0x02e7df9c;
      }
    }
    else {
      if ((ulong)((long)puVar7 - param_1[2]) <= uVar8) {
        puVar9 = (undefined4 *)0x0;
        goto LAB_02e7df4c;
      }
      while ((undefined4 *)*plVar2 == puVar9) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = param_1[2] + uVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          if (puVar9 + 1 <= (undefined4 *)param_1[3]) {
            *puVar9 = 0x3a0004;
          }
          puVar9 = (undefined4 *)param_1[2];
          goto joined_r0x02e7df9c;
        }
      }
    }
    ClearExclusiveLocal();
  } while( true );
joined_r0x02e7e1d8:
  if (puVar9 == (undefined4 *)0x0) {
LAB_02e7e160:
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (puVar9 == (undefined4 *)0x0) {
    if (0 < *piVar1) {
      uVar10 = 0;
      do {
        nn::os::SleepThread((uVar10 >> 7) * 1000000);
        uVar10 = (ulong)((int)uVar10 + 1);
      } while (0 < *piVar1);
    }
    DataMemoryBarrier(2,3);
    FUN_02e7ead4(param_1,1,auStack_64);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      puVar9 = (undefined4 *)param_1[1];
      puVar7 = (undefined4 *)*param_1;
      if (puVar9 < puVar7) {
        if ((ulong)((long)puVar7 - (long)puVar9) <= uVar8) {
          puVar9 = (undefined4 *)0x0;
          goto LAB_02e7e18c;
        }
        while ((undefined4 *)*plVar2 == puVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = (long)puVar9 + uVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto joined_r0x02e7e214;
        }
      }
      else if (uVar8 < (ulong)(param_1[3] - (long)puVar9)) {
        while ((undefined4 *)*plVar2 == puVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = (long)puVar9 + uVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto joined_r0x02e7e214;
        }
      }
      else {
        if ((ulong)((long)puVar7 - param_1[2]) <= uVar8) {
          puVar9 = (undefined4 *)0x0;
          goto LAB_02e7e18c;
        }
        while ((undefined4 *)*plVar2 == puVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = param_1[2] + uVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            if (puVar9 + 1 <= (undefined4 *)param_1[3]) {
              *puVar9 = 0x3a0004;
            }
            puVar9 = (undefined4 *)param_1[2];
            goto joined_r0x02e7e214;
          }
        }
      }
      ClearExclusiveLocal();
    } while( true );
  }
  nn::os::UnlockMutex((MutexType *)&DAT_0440a210);
  goto LAB_02e7dee8;
joined_r0x02e7e214:
  if (puVar9 == (undefined4 *)0x0) {
LAB_02e7e18c:
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  nn::os::UnlockMutex((MutexType *)&DAT_0440a210);
  goto joined_r0x02e7dee4;
joined_r0x02e7df9c:
  if (puVar9 == (undefined4 *)0x0) {
LAB_02e7df4c:
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
joined_r0x02e7dee4:
  if (puVar9 == (undefined4 *)0x0) {
    if (*(uint *)(param_1 + 4) < uVar3) {
      return (undefined4 *)0x0;
    }
    nn::os::LockMutex((MutexType *)&DAT_0440a210);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      puVar9 = (undefined4 *)param_1[1];
      puVar7 = (undefined4 *)*param_1;
      if (puVar9 < puVar7) {
        if ((ulong)((long)puVar7 - (long)puVar9) <= uVar8) {
          puVar9 = (undefined4 *)0x0;
          goto LAB_02e7e160;
        }
        while ((undefined4 *)*plVar2 == puVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = (long)puVar9 + uVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto joined_r0x02e7e1d8;
        }
      }
      else if (uVar8 < (ulong)(param_1[3] - (long)puVar9)) {
        while ((undefined4 *)*plVar2 == puVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = (long)puVar9 + uVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto joined_r0x02e7e1d8;
        }
      }
      else {
        if ((ulong)((long)puVar7 - param_1[2]) <= uVar8) {
          puVar9 = (undefined4 *)0x0;
          goto LAB_02e7e160;
        }
        while ((undefined4 *)*plVar2 == puVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = param_1[2] + uVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            if (puVar9 + 1 <= (undefined4 *)param_1[3]) {
              *puVar9 = 0x3a0004;
            }
            puVar9 = (undefined4 *)param_1[2];
            goto joined_r0x02e7e1d8;
          }
        }
      }
      ClearExclusiveLocal();
    } while( true );
  }
LAB_02e7dee8:
  *(undefined2 *)((long)puVar9 + 2) = param_2;
  *(short *)puVar9 = (short)uVar3;
  return puVar9;
}


