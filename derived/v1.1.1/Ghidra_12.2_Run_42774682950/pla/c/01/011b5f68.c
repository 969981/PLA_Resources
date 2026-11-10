/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011b5f68; name: FUN_011b5f68
 */


void FUN_011b5f68(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  long *local_28;
  
  FUN_011d24c4(&local_28);
  FUN_011b2bb4(param_1);
  piVar5 = (int *)FUN_011b2000();
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x98) + 0x5b8);
  if (*piVar5 == 0) {
    iVar4 = piVar5[1];
    local_88 = 0xdedb3abe986cfb80;
    FUN_02c2e7d0(local_28,&local_88,*(undefined8 *)(param_1 + 0xa8));
    FUN_02c3865c(uVar7,0,(short)iVar4,1);
  }
  else {
    lVar8 = *(long *)(piVar5 + 2);
    if (lVar8 == 0) {
      local_88 = 0xdedb3dbe986d0099;
      FUN_02c2e7d0(local_28,&local_88,*(undefined8 *)(param_1 + 0xa0));
      goto LAB_011b5fec;
    }
    local_88 = 0xdedb3dbe986d0099;
    FUN_02c2e7d0(local_28,&local_88,*(undefined8 *)(param_1 + 0xa8));
    uVar6 = FUN_0093210c(lVar8);
    FUN_010c6004(uVar7,0,uVar6);
  }
  FUN_02c333a8(uVar7,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xa8));
LAB_011b5fec:
  local_88 = 0x3ce587c2a412cfae;
  FUN_02c2e7d0(local_28,&local_88,*(undefined8 *)(param_1 + 0xb0));
  local_88 = 0x3ce588c2a412d161;
  FUN_02c2e7d0(local_28,&local_88,*(undefined8 *)(param_1 + 0xb8));
  local_37 = 1;
  local_48 = *(undefined8 *)(param_1 + 0xa0);
  uStack_40 = 0;
  local_38 = 0;
  local_36 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 1;
  local_4c = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_88 = *(undefined8 *)(param_1 + 0xb0);
  local_80 = *(undefined8 *)(param_1 + 0xb8);
  local_4e = 1;
  uStack_78 = 0;
  FUN_00d428b0(*(undefined8 *)(param_1 + 0x98),0);
  (**(code **)(**(long **)(param_1 + 0x98) + 0x90))(*(long **)(param_1 + 0x98),&local_48,&local_88);
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
  return;
}


