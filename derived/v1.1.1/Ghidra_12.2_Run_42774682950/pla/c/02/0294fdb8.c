/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0294fdb8; name: FUN_0294fdb8
 */


void FUN_0294fdb8(long param_1)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  byte bVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  
  plVar10 = *(long **)(param_1 + 0x60);
  if (plVar10 != (long *)0x0) {
    plVar9 = plVar10 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_02c60fb0(plVar10,0,*(undefined4 *)(param_1 + 0x2f4));
  bVar2 = *(byte *)(param_1 + 0x2fa);
  lVar11 = plVar10[0x13];
  lVar6 = nn::os::GetCurrentThread();
  plVar9 = (long *)(lVar11 + 0x30);
  do {
    if (*plVar9 != 0) {
      bVar4 = false;
      ClearExclusiveLocal();
      goto joined_r0x0294fe4c;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar4 = true;
joined_r0x0294fe4c:
  if (bVar2 < 4) {
    if (!bVar4) {
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x24));
        while (*plVar9 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0294fe54;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
  else if (!bVar4) {
    do {
      nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x24));
      while (*plVar9 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_0294fe54;
      }
      ClearExclusiveLocal();
    } while( true );
  }
LAB_0294fe54:
  *(undefined8 *)(lVar11 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x24));
  bVar2 = *(byte *)(param_1 + 0x2f8);
  uVar7 = FUN_02c6b1c0(plVar10[0x13],0);
  lVar6 = (&DAT_0428af30)[(uVar7 & 0xffffffff) * 6];
  if (lVar6 == 0) {
    plVar9 = &DAT_0428af30;
  }
  else {
    plVar9 = &DAT_0428af30;
    if (*(char *)(lVar6 + 0x1e1) != '\0') {
      plVar9 = &DAT_0428af30 + (uVar7 & 0xffffffff) * 6;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar9 + 0x250) + (ulong)**(uint **)(*plVar9 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x13) ||
     (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[9], uVar7 == 0)) {
    bVar8 = 0;
  }
  else {
    bVar8 = *(byte *)((long)piVar1 + uVar7);
  }
  if (bVar2 <= bVar8) {
    bVar8 = bVar2;
  }
  FUN_02c7cd1c(plVar10[0x13],0,bVar8);
  FUN_02c60fb0(plVar10,1,*(undefined4 *)(param_1 + 0x310));
  bVar2 = *(byte *)(param_1 + 0x316);
  lVar11 = plVar10[0x13];
  lVar6 = nn::os::GetCurrentThread();
  plVar9 = (long *)(lVar11 + 0x30);
  do {
    if (*plVar9 != 0) {
      bVar4 = false;
      ClearExclusiveLocal();
      goto joined_r0x0294ff44;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar4 = true;
joined_r0x0294ff44:
  if (bVar2 < 4) {
    if (!bVar4) {
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x24));
        while (*plVar9 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0294ff4c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
  else if (!bVar4) {
    do {
      nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x24));
      while (*plVar9 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_0294ff4c;
      }
      ClearExclusiveLocal();
    } while( true );
  }
LAB_0294ff4c:
  *(undefined8 *)(lVar11 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x24));
  bVar2 = *(byte *)(param_1 + 0x314);
  uVar7 = FUN_02c6b1c0(plVar10[0x13],1);
  lVar6 = (&DAT_0428af30)[(uVar7 & 0xffffffff) * 6];
  if (lVar6 == 0) {
    plVar9 = &DAT_0428af30;
  }
  else {
    plVar9 = &DAT_0428af30;
    if (*(char *)(lVar6 + 0x1e1) != '\0') {
      plVar9 = &DAT_0428af30 + (uVar7 & 0xffffffff) * 6;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar9 + 0x250) + (ulong)**(uint **)(*plVar9 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x13) ||
     (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[9], uVar7 == 0)) {
    bVar8 = 0;
  }
  else {
    bVar8 = *(byte *)((long)piVar1 + uVar7);
  }
  if (bVar2 <= bVar8) {
    bVar8 = bVar2;
  }
  FUN_02c7cd1c(plVar10[0x13],1,bVar8);
  FUN_02c60fb0(plVar10,2,*(undefined4 *)(param_1 + 0x32c));
  bVar2 = *(byte *)(param_1 + 0x332);
  lVar11 = plVar10[0x13];
  lVar6 = nn::os::GetCurrentThread();
  plVar9 = (long *)(lVar11 + 0x30);
  do {
    if (*plVar9 != 0) {
      bVar4 = false;
      ClearExclusiveLocal();
      goto joined_r0x0295002c;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar4 = true;
joined_r0x0295002c:
  if (bVar2 < 4) {
    if (!bVar4) {
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x24));
        while (*plVar9 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_02950034;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
  else if (!bVar4) {
    do {
      nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x24));
      while (*plVar9 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_02950034;
      }
      ClearExclusiveLocal();
    } while( true );
  }
LAB_02950034:
  *(undefined8 *)(lVar11 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x24));
  bVar2 = *(byte *)(param_1 + 0x330);
  uVar7 = FUN_02c6b1c0(plVar10[0x13],2);
  lVar6 = (&DAT_0428af30)[(uVar7 & 0xffffffff) * 6];
  if (lVar6 == 0) {
    plVar9 = &DAT_0428af30;
  }
  else {
    plVar9 = &DAT_0428af30;
    if (*(char *)(lVar6 + 0x1e1) != '\0') {
      plVar9 = &DAT_0428af30 + (uVar7 & 0xffffffff) * 6;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar9 + 0x250) + (ulong)**(uint **)(*plVar9 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x13) ||
     (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[9], uVar7 == 0)) {
    bVar8 = 0;
  }
  else {
    bVar8 = *(byte *)((long)piVar1 + uVar7);
  }
  if (bVar2 <= bVar8) {
    bVar8 = bVar2;
  }
  FUN_02c7cd1c(plVar10[0x13],2,bVar8);
  FUN_02c60fb0(plVar10,3,*(undefined4 *)(param_1 + 0x348));
  bVar2 = *(byte *)(param_1 + 0x34e);
  lVar11 = plVar10[0x13];
  lVar6 = nn::os::GetCurrentThread();
  plVar9 = (long *)(lVar11 + 0x30);
  do {
    if (*plVar9 != 0) {
      bVar4 = false;
      ClearExclusiveLocal();
      goto joined_r0x02950114;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar4 = true;
joined_r0x02950114:
  if (bVar2 < 4) {
    if (!bVar4) {
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x24));
        while (*plVar9 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0295011c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
  else if (!bVar4) {
    do {
      nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x24));
      while (*plVar9 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_0295011c;
      }
      ClearExclusiveLocal();
    } while( true );
  }
LAB_0295011c:
  *(undefined8 *)(lVar11 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x24));
  bVar2 = *(byte *)(param_1 + 0x34c);
  uVar7 = FUN_02c6b1c0(plVar10[0x13],3);
  lVar6 = (&DAT_0428af30)[(uVar7 & 0xffffffff) * 6];
  if (lVar6 == 0) {
    plVar9 = &DAT_0428af30;
  }
  else {
    plVar9 = &DAT_0428af30;
    if (*(char *)(lVar6 + 0x1e1) != '\0') {
      plVar9 = &DAT_0428af30 + (uVar7 & 0xffffffff) * 6;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar9 + 0x250) + (ulong)**(uint **)(*plVar9 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x13) ||
     (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[9], uVar7 == 0)) {
    bVar8 = 0;
  }
  else {
    bVar8 = *(byte *)((long)piVar1 + uVar7);
  }
  if (bVar2 <= bVar8) {
    bVar8 = bVar2;
  }
  FUN_02c7cd1c(plVar10[0x13],3,bVar8);
  plVar9 = plVar10 + 10;
  do {
    iVar5 = (int)*plVar9 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *(int *)plVar9 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x029501f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar10 + 0x10))(plVar10);
    return;
  }
  return;
}


