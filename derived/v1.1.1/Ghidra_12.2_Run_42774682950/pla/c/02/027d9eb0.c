/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027d9eb0; name: FUN_027d9eb0
 */


void FUN_027d9eb0(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  long *local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined1 auStack_38 [8];
  
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  FUN_014e5258(&local_60);
  plVar8 = *(long **)(param_2 + 0xa8);
  if (plVar8 != (long *)0x0) {
    plVar4 = plVar8 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *(int *)plVar4 = (int)*plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (local_70 != (long *)0x0) {
    plVar4 = local_70 + 10;
    do {
      iVar3 = (int)*plVar4 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *(int *)plVar4 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      lVar9 = *local_70;
      local_70 = plVar8;
      (**(code **)(lVar9 + 0x10))();
      plVar4 = *(long **)(param_2 + 0xb0);
      plVar8 = local_68;
      goto joined_r0x027da16c;
    }
  }
  plVar4 = *(long **)(param_2 + 0xb0);
  local_70 = plVar8;
  plVar8 = local_68;
joined_r0x027da16c:
  local_68 = plVar4;
  if (local_68 != (long *)0x0) {
    plVar4 = local_68 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *(int *)plVar4 = (int)*plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (plVar8 != (long *)0x0) {
    plVar4 = plVar8 + 10;
    do {
      iVar3 = (int)*plVar4 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *(int *)plVar4 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  FUN_014e5258(&local_98);
  local_98._0_5_ = CONCAT14(0x2f,(undefined4)local_98);
  uVar6 = FUN_01123f68(*(undefined8 *)(param_2 + 0x70));
  local_98 = CONCAT44(local_98._4_4_,uVar6);
  uVar5 = FUN_01123cf0(*(undefined8 *)(param_2 + 0x70));
  local_98._0_6_ = CONCAT15(uVar5,(undefined5)local_98);
  uVar5 = FUN_01123ce8(*(undefined8 *)(param_2 + 0x70));
  local_98._0_7_ = CONCAT16(uVar5,(undefined6)local_98);
  FUN_01123bb4(*(undefined8 *)(param_2 + 0x70),&uStack_90);
  local_60 = local_98;
  uStack_58 = uStack_90;
  local_40 = CONCAT22(local_40._2_2_,(undefined2)local_78);
  local_50 = local_88;
  uStack_48 = uStack_80;
  local_a0 = 0;
  uVar7 = FUN_02c62bb4(local_68,local_70,(long)&local_a0 + 4,&local_a0);
  if ((uVar7 & 1) == 0) {
    if (local_70 != (long *)0x0) {
      plVar8 = local_70 + 10;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (local_68 != (long *)0x0) {
      plVar8 = local_68 + 10;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    *param_1 = local_70;
    param_1[1] = local_68;
    *(undefined1 *)(param_1 + 7) = 0;
    param_1[2] = local_60;
    param_1[3] = uStack_58;
    *(undefined4 *)(param_1 + 6) = local_40;
    param_1[4] = local_50;
    param_1[5] = uStack_48;
  }
  else {
    local_98 = *(undefined8 *)(param_2 + 8);
    plVar8 = (long *)FUN_0161a7bc(auStack_38,local_98,&local_98,local_68);
    if (plVar8 != (long *)0x0) {
      plVar4 = plVar8 + 10;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *(int *)plVar4 = (int)*plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (local_70 != (long *)0x0) {
      plVar4 = local_70 + 10;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *(int *)plVar4 = (int)*plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (local_68 != (long *)0x0) {
      plVar4 = local_68 + 10;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *(int *)plVar4 = (int)*plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    local_98 = local_60;
    uStack_90 = uStack_58;
    local_78 = local_40;
    local_88 = local_50;
    uStack_80 = uStack_48;
    if (plVar8 != (long *)0x0) {
      plVar4 = plVar8 + 10;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *(int *)plVar4 = (int)*plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    *param_1 = local_70;
    param_1[1] = local_68;
    *(undefined4 *)(param_1 + 9) = local_a0._4_4_;
    *(undefined4 *)((long)param_1 + 0x4c) = (undefined4)local_a0;
    param_1[8] = plVar8;
    *(undefined1 *)(param_1 + 10) = 1;
    *(undefined1 *)(param_1 + 7) = 1;
    param_1[2] = local_60;
    param_1[3] = uStack_58;
    *(undefined4 *)(param_1 + 6) = local_40;
    param_1[4] = local_50;
    param_1[5] = uStack_48;
    if (plVar8 != (long *)0x0) {
      plVar4 = plVar8 + 10;
      do {
        iVar3 = (int)*plVar4 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *(int *)plVar4 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
  }
  if (local_68 != (long *)0x0) {
    plVar8 = local_68 + 10;
    do {
      iVar3 = (int)*plVar8 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  if (local_70 != (long *)0x0) {
    plVar8 = local_70 + 10;
    do {
      iVar3 = (int)*plVar8 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  return;
}


