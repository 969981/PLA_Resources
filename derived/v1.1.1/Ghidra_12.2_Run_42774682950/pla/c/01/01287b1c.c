/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01287b1c; name: FUN_01287b1c
 */


void FUN_01287b1c(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 local_90;
  long *local_88;
  long *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined4 local_4e;
  long *local_48;
  undefined8 local_40;
  undefined2 local_38;
  undefined1 local_36;
  long *local_28;
  
  FUN_00d58ef0(*(undefined8 *)(param_1 + 0x1a8),0xb0493d7b5a8e9d71,0);
  local_40 = 0;
  local_36 = 0;
  local_38 = 0x101;
  FUN_00d591fc(&local_88,*(undefined8 *)(param_1 + 0x1a8));
  local_48 = local_88;
  if (local_88 != (long *)0x0) {
    plVar1 = local_88 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_88 + 0x10))();
    }
  }
  local_50 = 1;
  local_60 = 0;
  uStack_58 = 0;
  local_4e = 0xffff;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = (long *)0x0;
  uStack_78 = 0;
  local_90 = 0x61fd2846542c652c;
  FUN_00d593f0(&local_28,*(undefined8 *)(param_1 + 0x1a8),0,&local_90,0xffffffff);
  local_88 = local_28;
  if (local_28 != (long *)0x0) {
    plVar1 = local_28 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
  }
  local_90 = 0x61fd2b46542c6a45;
  FUN_00d593f0(&local_28,*(undefined8 *)(param_1 + 0x1a8),1,&local_90,0xffffffff);
  local_80 = local_28;
  if (local_28 != (long *)0x0) {
    plVar1 = local_28 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
  }
  local_4e = CONCAT22(1,(undefined2)local_4e);
  thunk_FUN_014e9b28(param_1 + 0x90,&local_48,&local_88,param_2);
  lVar5 = FUN_01283b84(param_1);
  if (lVar5 != 0) {
    *(undefined1 *)(lVar5 + 0x70) = 0;
  }
  *(undefined8 *)(param_1 + 0x1b8) = 1;
  return;
}


