/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01285d08; name: FUN_01285d08
 */


void FUN_01285d08(long param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined4 uVar7;
  long lVar8;
  long *local_100;
  code *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  long lStack_e0;
  undefined1 *local_d8;
  undefined8 uStack_d0;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  uint local_3e;
  long *local_38;
  undefined8 local_30;
  undefined2 local_28;
  undefined1 local_26;
  
  FUN_0128d1ec(&local_100,*(undefined8 *)(param_1 + 0x1a8));
  plVar2 = local_100;
  uVar7 = FUN_00d67370(*(undefined8 *)(param_1 + 0x1b0));
  FUN_02c395d0(plVar2,0,uVar7,7,0,1);
  if (local_100 != (long *)0x0) {
    lVar8 = local_100[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_100 + 0x20))();
    }
  }
  FUN_00d58ef0(*(undefined8 *)(param_1 + 0x1a8),0xb049417b5a8ea43d,0);
  local_30 = 0;
  local_26 = 0;
  local_28 = 0x101;
  FUN_00d591fc(&local_100,*(undefined8 *)(param_1 + 0x1a8));
  local_38 = local_100;
  if (local_100 != (long *)0x0) {
    plVar2 = local_100 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_100 + 0x10))();
    }
  }
  local_40 = 1;
  local_50 = 0;
  uStack_48 = 0;
  local_3e = 0xffff;
  local_60 = (long *)0x0;
  uStack_58 = 0;
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  local_80 = 0xb049407b5a8ea28a;
  FUN_00d593f0(&local_100,*(undefined8 *)(param_1 + 0x1a8),0,&local_80,0);
  local_78 = local_100;
  if (local_100 != (long *)0x0) {
    plVar2 = local_100 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_100 + 0x10))();
    }
  }
  local_80 = 0xb0493f7b5a8ea0d7;
  FUN_00d593f0(&local_100,*(undefined8 *)(param_1 + 0x1a8),1,&local_80,0);
  local_70 = local_100;
  if (local_100 != (long *)0x0) {
    plVar2 = local_100 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_100 + 0x10))();
    }
  }
  local_80 = 0xb0493e7b5a8e9f24;
  FUN_00d593f0(&local_100,*(undefined8 *)(param_1 + 0x1a8),2,&local_80,0);
  local_68 = local_100;
  if (local_100 != (long *)0x0) {
    plVar2 = local_100 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_100 + 0x10))();
    }
  }
  local_80 = 0xb049357b5a8e8fd9;
  FUN_00d593f0(&local_100,*(undefined8 *)(param_1 + 0x1a8),3,&local_80,0);
  local_60 = local_100;
  if (local_100 != (long *)0x0) {
    plVar2 = local_100 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_100 + 0x10))();
    }
  }
  local_3e = local_3e & 0xffff;
  local_100 = (long *)&LAB_01286768;
  local_d8 = &LAB_012861a0;
  uStack_d0 = 0;
  local_f8 = FUN_01286788;
  local_f0 = &LAB_0128678c;
  local_e8 = &LAB_012867a0;
  lStack_e0 = param_1;
  FUN_014e9b28(param_1 + 0x90,&local_38,&local_78,&local_100);
  lVar8 = FUN_01283b84(param_1);
  if (lVar8 != 0) {
    FUN_012827bc(lVar8,0);
  }
  pcVar6 = local_f8;
  *(undefined8 *)(param_1 + 0x1b8) = 1;
  if (local_f8 != (code *)0x0) {
    local_f0 = (undefined1 *)0x0;
    local_e8 = (undefined1 *)0x0;
    local_100 = (long *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar6)(&lStack_e0);
  }
  return;
}


