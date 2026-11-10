/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0120678c; name: FUN_0120678c
 */


void FUN_0120678c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  code *pcVar8;
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
  
  FUN_00d58ef0(*(undefined8 *)(param_1 + 0x90),param_2,0);
  local_40 = 0;
  local_36 = 0;
  local_38 = 0x101;
  FUN_00d591fc(&local_88,*(undefined8 *)(param_1 + 0x90));
  local_48 = local_88;
  if (local_88 != (long *)0x0) {
    plVar1 = local_88 + 10;
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
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
  FUN_00d593f0(&local_28,*(undefined8 *)(param_1 + 0x90),0,&local_90,0xffffffff);
  local_88 = local_28;
  if (local_28 != (long *)0x0) {
    plVar1 = local_28 + 10;
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
  }
  local_90 = 0x61fd2b46542c6a45;
  FUN_00d593f0(&local_28,*(undefined8 *)(param_1 + 0x90),1,&local_90,0xffffffff);
  local_80 = local_28;
  if (local_28 != (long *)0x0) {
    plVar1 = local_28 + 10;
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
  }
  local_4e = CONCAT22(1,(undefined2)local_4e);
  FUN_00d42690(*(undefined8 *)(param_1 + 0xa0),1,1);
  FUN_00d428b0(*(undefined8 *)(param_1 + 0xa0),0);
  (**(code **)(**(long **)(param_1 + 0xa0) + 0x90))(*(long **)(param_1 + 0xa0),&local_48,&local_88);
  pcVar8 = *(code **)(param_1 + 0x148);
  if (pcVar8 == (code *)0x0) {
    pcVar8 = (code *)param_3[2];
  }
  else {
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
    (*pcVar8)(param_1 + 0x160);
    pcVar8 = (code *)param_3[2];
  }
  if (pcVar8 != (code *)0x0) {
    (*pcVar8)(param_3 + 4,param_1 + 0x160);
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[3];
    *(undefined8 *)(param_1 + 0x150) = param_3[2];
    *(undefined8 *)(param_1 + 0x158) = uVar4;
    *(undefined8 *)(param_1 + 0x140) = uVar2;
    *(undefined8 *)(param_1 + 0x148) = uVar3;
  }
  *(undefined8 *)(param_1 + 0xb0) = 2;
  return;
}


