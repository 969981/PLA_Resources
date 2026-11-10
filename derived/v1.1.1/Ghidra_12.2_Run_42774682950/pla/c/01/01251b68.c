/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01251b68; name: FUN_01251b68
 */


void FUN_01251b68(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  long *plVar10;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  
  uVar4 = *(undefined4 *)(*(long *)(param_1 + 0x1270) + (ulong)*(byte *)(param_1 + 0x12a8) * 4);
  lVar7 = FUN_01234c2c(param_1 + 0x9c0,uVar4);
  lVar8 = FUN_01234c60(param_1 + 0x9c0,uVar4);
  plVar10 = *(long **)(param_1 + 0x2c8);
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 10;
    do {
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (lVar7 != 0 && lVar8 != 0) {
    uVar2 = *(uint *)(lVar7 + 0x50);
    uVar3 = *(uint *)(lVar8 + 0x50);
    if ((uVar3 & uVar2) == 0xffffffff) {
      local_70 = *(undefined8 *)(param_2 + 0x30);
      uStack_68 = *(undefined8 *)(param_2 + 0x38);
      local_60 = *(undefined8 *)(param_2 + 0x40);
      local_58 = (long *)0x0;
      FUN_0283b11c(plVar10,&local_70,0);
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      local_70 = *(undefined8 *)(param_2 + 0x48);
      uStack_68 = *(undefined8 *)(param_2 + 0x50);
      local_60 = *(undefined8 *)(param_2 + 0x58);
      local_58 = (long *)0x0;
      FUN_0283b11c(plVar10,&local_70,0);
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      local_70 = *(undefined8 *)(param_2 + 0x60);
      uStack_68 = *(undefined8 *)(param_2 + 0x68);
      local_60 = *(undefined8 *)(param_2 + 0x70);
      bVar9 = true;
    }
    else {
      local_70 = *(undefined8 *)(param_2 + 0x30);
      uStack_68 = *(undefined8 *)(param_2 + 0x38);
      local_60 = *(undefined8 *)(param_2 + 0x40);
      local_58 = (long *)0x0;
      FUN_0283b11c(plVar10,&local_70,uVar3 == param_3);
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      local_70 = *(undefined8 *)(param_2 + 0x48);
      uStack_68 = *(undefined8 *)(param_2 + 0x50);
      local_60 = *(undefined8 *)(param_2 + 0x58);
      local_58 = (long *)0x0;
      FUN_0283b11c(plVar10,&local_70,uVar2 == param_3 && uVar3 != param_3);
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      local_70 = *(undefined8 *)(param_2 + 0x60);
      uStack_68 = *(undefined8 *)(param_2 + 0x68);
      local_60 = *(undefined8 *)(param_2 + 0x70);
      bVar9 = uVar2 != param_3 && uVar3 != param_3;
    }
    local_58 = (long *)0x0;
    FUN_0283b11c(plVar10,&local_70,bVar9);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
  }
  lVar7 = FUN_01236d4c(param_1 + 0x5c0,uVar4,param_3);
  local_70 = *(undefined8 *)(param_2 + 0x78);
  uStack_68 = *(undefined8 *)(param_2 + 0x80);
  local_60 = *(undefined8 *)(param_2 + 0x88);
  local_58 = (long *)0x0;
  FUN_0283b11c(plVar10,&local_70,*(undefined1 *)(lVar7 + 0x4c));
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 10;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *(int *)plVar1 = iVar6;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  return;
}


