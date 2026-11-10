/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010e5070; name: FUN_010e5070
 */


void FUN_010e5070(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  long *local_a0;
  long *local_98 [4];
  long *local_78;
  undefined *local_68;
  long local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_34;
  
  uVar8 = *(undefined8 *)(param_1 + 8);
  local_34 = 0x11;
  plVar6 = (long *)FUN_010c858c(&local_68,uVar8,&local_34);
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = (int)*plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_48 = 0;
  uStack_40 = 0;
  local_68 = PTR_DAT_0437a508 + 0x10;
  local_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_a8 = 0x12;
  local_a0 = (long *)0x0;
  local_b8 = 0xdfcd4fe7ee129fb2;
  pcStack_b0 = "common/boxname.dat";
  FUN_010c4b50(local_98,&local_b8,10);
  FUN_00938764(&local_68,0,local_98,0,uVar8,0);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98[0] != (long *)0x0) {
    (**(code **)(*local_98[0] + 0x20))();
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  local_98[0] = *(long **)(local_60 + 0x250);
  plVar7 = (long *)FUN_00d12804(&local_b8,uVar8,local_98);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar9 = 0;
  do {
    FUN_02c2e33c(plVar7,uVar9 & 0xffffffff,plVar6);
    uVar8 = FUN_02c2f268(plVar6);
    FUN_010e60b4(param_1,uVar8,uVar9 & 0xffffffff);
    lVar2 = param_1 + uVar9;
    uVar9 = uVar9 + 1;
    *(undefined1 *)(lVar2 + 0x4ac) = 0;
  } while (uVar9 != 0x20);
  FUN_00937d80(&local_68);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  FUN_00936104(&local_68);
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  return;
}


