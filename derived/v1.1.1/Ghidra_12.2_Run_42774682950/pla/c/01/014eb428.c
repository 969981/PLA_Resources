/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014eb428; name: FUN_014eb428
 */


void FUN_014eb428(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  uint local_3e;
  long *local_38;
  undefined8 local_30;
  undefined2 local_28;
  undefined1 local_26;
  
  FUN_014fa7e0(*(undefined8 *)(param_1 + 0x1a8));
  local_30 = 0;
  local_26 = 0;
  local_28 = 0x101;
  FUN_014fab84(&local_78,*(undefined8 *)(param_1 + 0x1a8));
  local_38 = local_78;
  if (local_78 != (long *)0x0) {
    plVar1 = local_78 + 10;
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
      (**(code **)(*local_78 + 0x10))();
    }
  }
  local_40 = 1;
  local_50 = 0;
  uStack_48 = 0;
  local_3e = 0xffff;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = (long *)0x0;
  uStack_68 = 0;
  local_88 = 0x1c021ca7ff251bf5;
  FUN_014fabe8(&local_80,*(undefined8 *)(param_1 + 0x1a8),0,&local_88);
  local_78 = local_80;
  if (local_80 != (long *)0x0) {
    plVar1 = local_80 + 10;
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
      (**(code **)(*local_80 + 0x10))();
    }
  }
  local_88 = 0xe63f2240885ca3f9;
  FUN_014fabe8(&local_80,*(undefined8 *)(param_1 + 0x1a8),1,&local_88);
  local_70 = local_80;
  if (local_80 != (long *)0x0) {
    plVar1 = local_80 + 10;
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
      (**(code **)(*local_80 + 0x10))();
    }
  }
  local_3e = local_3e & 0xffff;
  thunk_FUN_014e9b28(param_1 + 0x90,&local_38,&local_78,param_3);
  *(undefined8 *)(param_1 + 0x1c8) = 5;
  return;
}


