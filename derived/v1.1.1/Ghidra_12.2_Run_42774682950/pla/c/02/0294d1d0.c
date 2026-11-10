/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0294d1d0; name: FUN_0294d1d0
 */


void FUN_0294d1d0(undefined8 *param_1,ulong param_2,byte param_3,undefined4 param_4,
                 undefined8 *param_5,undefined4 *param_6)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  byte bVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 local_90;
  long *plStack_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_68;
  byte local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  
  plVar1 = param_1 + (ulong)param_3 + 0x24;
  if (param_1[(ulong)param_3 + 0x24] == 0) {
    lVar10 = param_1[(ulong)param_3 + 0x42];
    if (lVar10 == 0) {
      *plVar1 = 0;
    }
    else {
      piVar2 = (int *)(lVar10 + 0x50);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = *piVar2 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar9 = (long *)*plVar1;
      *plVar1 = lVar10;
      if (plVar9 != (long *)0x0) {
        plVar3 = plVar9 + 10;
        do {
          iVar8 = (int)*plVar3 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar7) {
            *(int *)plVar3 = iVar8;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
      }
    }
    plVar9 = (long *)param_1[(ulong)param_3 + 0x42];
    param_1[(ulong)param_3 + 0x42] = 0;
    if (plVar9 != (long *)0x0) {
      plVar3 = plVar9 + 10;
      do {
        iVar8 = (int)*plVar3 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar7) {
          *(int *)plVar3 = iVar8;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
  }
  lVar10 = *plVar1;
  plVar9 = (long *)*param_5;
  if (plVar9 != (long *)0x0) {
    plVar3 = plVar9 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_90 = *param_1;
  local_5f = *(undefined1 *)(param_6 + 8);
  local_5e = *(undefined1 *)((long)param_6 + 0x21);
  local_5d = *(undefined1 *)((long)param_6 + 0x22);
  local_5c = param_6[9];
  local_58 = param_6[10];
  local_80 = *param_6;
  local_7c = *(undefined1 *)(param_6 + 1);
  local_7b = *(undefined1 *)((long)param_6 + 5);
  local_7a = *(undefined1 *)((long)param_6 + 6);
  local_79 = *(undefined1 *)((long)param_6 + 7);
  local_78 = *(undefined1 *)(param_6 + 2);
  local_68 = *(undefined8 *)(param_6 + 6);
  local_70 = *(undefined8 *)(param_6 + 4);
  plStack_88 = plVar9;
  local_60 = param_3;
  uStack_54 = param_4;
  FUN_0294f0dc(lVar10,&local_90);
  if (plVar9 != (long *)0x0) {
    plVar3 = plVar9 + 10;
    do {
      iVar8 = (int)*plVar3 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(int *)plVar3 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  param_2 = param_2 & 0xff;
  bVar4 = *(byte *)(param_1 + param_2 * 7 + 7);
  uVar11 = (ulong)bVar4;
  if (uVar11 == 0) {
    uVar11 = 0;
  }
  else {
    uVar12 = 0;
    do {
      if (*(byte *)(param_1[param_2 * 7 + uVar12 + 1] + 0x7d) == param_3) {
        if (-1 < (int)uVar12) goto LAB_0294d3c4;
        break;
      }
      uVar12 = uVar12 + 1;
    } while (uVar11 != uVar12);
  }
  lVar10 = *plVar1;
  *(byte *)(param_1 + param_2 * 7 + 7) = bVar4 + 1;
  param_1[param_2 * 7 + uVar11 + 1] = lVar10;
LAB_0294d3c4:
  if ((*(byte *)(param_6 + 0xc) & 7) != 0) {
    uVar5 = *(undefined1 *)(param_6 + 0x1c);
    FUN_02951ca0(*plVar1,0);
    *(undefined1 *)(*plVar1 + 0x238) = uVar5;
  }
  if ((*(byte *)(param_6 + 0xe) & 7) != 0) {
    uVar5 = *(undefined1 *)((long)param_6 + 0x71);
    FUN_02951ca0(*plVar1,1);
    *(undefined1 *)(*plVar1 + 0x239) = uVar5;
  }
  if ((*(byte *)(param_6 + 0x10) & 7) != 0) {
    uVar5 = *(undefined1 *)((long)param_6 + 0x72);
    FUN_02951ca0(*plVar1,2);
    *(undefined1 *)(*plVar1 + 0x23a) = uVar5;
  }
  if ((*(byte *)(param_6 + 0x12) & 7) != 0) {
    uVar5 = *(undefined1 *)((long)param_6 + 0x73);
    FUN_02951ca0(*plVar1,3);
    *(undefined1 *)(*plVar1 + 0x23b) = uVar5;
  }
  if ((*(byte *)(param_6 + 0x14) & 7) != 0) {
    uVar5 = *(undefined1 *)(param_6 + 0x1d);
    FUN_02951ca0(*plVar1,4);
    *(undefined1 *)(*plVar1 + 0x23c) = uVar5;
  }
  if ((*(byte *)(param_6 + 0x16) & 7) != 0) {
    uVar5 = *(undefined1 *)((long)param_6 + 0x75);
    FUN_02951ca0(*plVar1,5);
    *(undefined1 *)(*plVar1 + 0x23d) = uVar5;
  }
  if ((*(byte *)(param_6 + 0x18) & 7) != 0) {
    uVar5 = *(undefined1 *)((long)param_6 + 0x76);
    FUN_02951ca0(*plVar1,6);
    *(undefined1 *)(*plVar1 + 0x23e) = uVar5;
  }
  if ((*(byte *)(param_6 + 0x1a) & 7) != 0) {
    uVar5 = *(undefined1 *)((long)param_6 + 0x77);
    FUN_02951ca0(*plVar1,7);
    *(undefined1 *)(*plVar1 + 0x23f) = uVar5;
  }
  return;
}


