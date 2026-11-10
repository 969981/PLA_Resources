/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01460c20; name: FUN_01460c20
 */


void FUN_01460c20(long param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  if ((*(ulong *)(param_1 + 0x18) & 7) == 1) {
    lVar7 = nn::os::GetSystemTick();
    lVar2 = *(long *)(param_1 + 0x28) + (lVar7 - *(long *)(param_1 + 0x20));
    *(long *)(param_1 + 0x28) = lVar2;
    *(long *)(param_1 + 0x20) = lVar7;
    uVar11 = nn::os::ConvertToTimeSpan(lVar2);
    uVar8 = ((long)uVar11 >> 0x20) * 0xd7b634db + ((uVar11 & 0xffffffff) * 0xd7b634db >> 0x20);
    if (*(uint *)(param_1 + 0x30) <=
        (uint)((int)(((long)uVar11 >> 0x20) * 0x431bde82 + ((long)uVar8 >> 0x20) +
                     ((uVar11 & 0xffffffff) * 0x431bde82 + (uVar8 & 0xffffffff) >> 0x20) >> 0x12) -
              (int)((long)uVar11 >> 0x3f)) / 1000) {
      *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 4;
    }
  }
  if (*(char *)(param_1 + 0x40) == '\0') {
    return;
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x10) + 0x148);
  if (plVar10 != (long *)0x0) {
    plVar15 = plVar10 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *(int *)plVar15 = (int)*plVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar8 = nn::os::ConvertToTimeSpan(*(undefined8 *)(param_1 + 0x28));
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    uVar11 = 0;
    uVar13 = 0;
    uVar14 = 0;
  }
  else {
    uVar11 = ((long)uVar8 >> 0x20) * 0xd7b634db + ((uVar8 & 0xffffffff) * 0xd7b634db >> 0x20);
    uVar8 = (((long)uVar8 >> 0x20) * 0x431bde82 + ((long)uVar11 >> 0x20) +
             ((uVar8 & 0xffffffff) * 0x431bde82 + (uVar11 & 0xffffffff) >> 0x20) >> 0x12) -
            ((long)uVar8 >> 0x3f);
    uVar11 = uVar8 & 0xffffffff;
    uVar13 = uVar11 / 1000;
    if ((uint)(uVar11 / 1000) < *(uint *)(param_1 + 0x30)) {
      uVar14 = (uVar8 & 0xffffffff) / 60000;
      iVar12 = (int)(uVar11 / 1000);
      uVar11 = (ulong)((uint)uVar8 + iVar12 * -1000) / 10;
      if (0x752 < (uint)uVar8 >> 5) {
        uVar13 = (ulong)(uint)(iVar12 + (int)((uVar8 & 0xffffffff) / 60000) * -0x3c);
      }
    }
    else {
      uVar6 = *(uint *)(param_1 + 0x30) * 1000 - 1;
      uVar14 = (ulong)uVar6 / 60000;
      uVar11 = (ulong)(uVar6 % 1000) / 10;
      uVar3 = uVar6 / 1000;
      if (0x752 < uVar6 >> 5) {
        uVar3 = uVar6 / 1000 + (uVar6 / 60000) * -0x3c;
      }
      uVar13 = (ulong)uVar3;
    }
  }
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  local_60 = 0xab3903e1d72a453f;
  plVar15 = (long *)plVar10[0x38];
  if (plVar15 == (long *)0x0) {
    FUN_02c2e7d0(uVar9,&local_60,0);
    plVar15 = (long *)plVar10[0x37];
  }
  else {
    plVar1 = plVar15 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    FUN_02c2e7d0(uVar9,&local_60,plVar15);
    do {
      iVar12 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar12;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      plVar15 = (long *)plVar10[0x37];
    }
    else {
      plVar15 = (long *)plVar10[0x37];
    }
  }
  if (plVar15 == (long *)0x0) {
    FUN_02c395d0(0,0,uVar14,2,2,1);
    plVar15 = (long *)plVar10[0x37];
  }
  else {
    FUN_02a439f4(plVar15[0xb]);
    FUN_02c395d0(plVar15,0,uVar14,2,2,1);
    uVar8 = FUN_02a43a5c(plVar15[0xb]);
    if ((uVar8 & 1) == 0) {
      plVar15 = (long *)plVar10[0x37];
    }
    else {
      (**(code **)(*plVar15 + 0x20))(plVar15);
      plVar15 = (long *)plVar10[0x37];
    }
  }
  if (plVar15 == (long *)0x0) {
    FUN_02c395d0(0,1,uVar13,2,2,1);
    plVar15 = (long *)plVar10[0x37];
  }
  else {
    FUN_02a439f4(plVar15[0xb]);
    FUN_02c395d0(plVar15,1,uVar13,2,2,1);
    uVar8 = FUN_02a43a5c(plVar15[0xb]);
    if ((uVar8 & 1) == 0) {
      plVar15 = (long *)plVar10[0x37];
    }
    else {
      (**(code **)(*plVar15 + 0x20))(plVar15);
      plVar15 = (long *)plVar10[0x37];
    }
  }
  if (plVar15 == (long *)0x0) {
    FUN_02c395d0(0,2,uVar11,2,2,1);
  }
  else {
    FUN_02a439f4(plVar15[0xb]);
    FUN_02c395d0(plVar15,2,uVar11,2,2,1);
    uVar8 = FUN_02a43a5c(plVar15[0xb]);
    if ((uVar8 & 1) != 0) {
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
  }
  local_60 = 0x317bf1b6fcf733cd;
  pcStack_58 = "pane_L_ns_time_00_T_time_00";
  local_50 = 0x1b;
  local_48 = (long *)0x0;
  FUN_0283d080(plVar10,&local_60,10);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  plVar15 = plVar10 + 10;
  do {
    iVar12 = (int)*plVar15 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar5) {
      *(int *)plVar15 = iVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  return;
}


