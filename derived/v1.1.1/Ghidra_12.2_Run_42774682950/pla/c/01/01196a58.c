/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01196a58; name: FUN_01196a58
 */


void FUN_01196a58(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 local_a0;
  long *local_98;
  long *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  uint local_5e;
  long *local_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_46;
  long *local_38;
  
  (**(code **)(**(long **)(param_1 + 0x1a8) + 0x108))(*(long **)(param_1 + 0x1a8),1,param_2,0);
  FUN_00d58ef0(*(undefined8 *)(param_1 + 0x1a8),0xcf43f8ca235107b2,0);
  local_50 = 0;
  local_46 = 0;
  local_48 = 0x101;
  FUN_00d591fc(&local_98,*(undefined8 *)(param_1 + 0x1a8));
  local_58 = local_98;
  if (local_98 != (long *)0x0) {
    plVar1 = local_98 + 10;
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
      (**(code **)(*local_98 + 0x10))();
    }
  }
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_60 = 1;
  local_5e = 0xffff;
  local_90 = (long *)0x0;
  uStack_88 = 0;
  local_a0 = 0xcf40fbca234ed6f4;
  FUN_00d593f0(&local_38,*(undefined8 *)(param_1 + 0x1a8),0,&local_a0,0);
  local_98 = local_38;
  if (local_38 != (long *)0x0) {
    plVar1 = local_38 + 10;
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
      (**(code **)(*local_38 + 0x10))();
    }
  }
  local_a0 = 0xcf40fcca234ed8a7;
  FUN_00d593f0(&local_38,*(undefined8 *)(param_1 + 0x1a8),1,&local_a0,0);
  local_90 = local_38;
  if (local_38 != (long *)0x0) {
    plVar1 = local_38 + 10;
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
      (**(code **)(*local_38 + 0x10))();
    }
  }
  local_5e = local_5e & 0xffff;
  thunk_FUN_014e9b28(param_1 + 0x90,&local_58,&local_98,param_5);
  lVar5 = FUN_011945c8(param_1);
  if (lVar5 != 0) {
    FUN_0118fdb0(lVar5,param_3,param_4);
    *(undefined1 *)(lVar5 + 0x70) = 0;
  }
  *(undefined8 *)(param_1 + 0x1d0) = 2;
  return;
}


