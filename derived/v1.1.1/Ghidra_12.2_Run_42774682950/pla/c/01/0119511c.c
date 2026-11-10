/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0119511c; name: FUN_0119511c
 */


void FUN_0119511c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined1 *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  long local_d0;
  undefined1 *local_c8;
  undefined8 uStack_c0;
  undefined5 local_68;
  undefined3 uStack_63;
  undefined5 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar5 = FUN_00d4bf2c(*(undefined8 *)(param_1 + 0x1a8),1);
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379678), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar10 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar10;
  plVar7 = *(long **)(lVar10 + 0xd0);
  if (plVar7 != (long *)0x0) {
    plVar11 = plVar7 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar11 = (long *)plVar7[0xb];
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar1 = plVar7 + 10;
  do {
    iVar6 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar7 + 0x10))();
  }
  uVar8 = (**(code **)(*plVar11 + 0x58))(plVar11,uVar5);
  local_58 = 0;
  local_40 = 0;
  local_38 = 0;
  local_68 = 0;
  uStack_63 = 0;
  uStack_60 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_0109aad0(&local_68);
  uVar9 = FUN_02c63e34(DAT_04407c28,(long)&local_38 + 4,&local_38,uVar8,plVar11,&local_68);
  if ((uVar9 & 1) == 0) {
    FUN_00d42438(*(undefined8 *)(param_1 + 0x1a8),1,1);
    FUN_00d4ba88(*(undefined8 *)(param_1 + 0x1a8),2,1);
    FUN_00d469b4(*(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x68),*(long *)(param_1 + 0x1a8),0);
  }
  else {
    uVar9 = FUN_01196838(param_1,uVar5);
    local_d0 = param_1;
    if ((uVar9 & 1) == 0) {
      local_c8 = &LAB_01196318;
      uStack_c0 = 0;
      local_f0 = &LAB_011997dc;
      local_e8 = FUN_011997f8;
      local_e0 = &LAB_011997fc;
      local_d8 = &LAB_01199810;
      FUN_0119541c(param_1,0xcf54ffca235f86ca,&local_f0,1,0,1);
      pcVar4 = local_e8;
    }
    else {
      local_c8 = &LAB_01197bec;
      uStack_c0 = 0;
      local_f0 = &LAB_01199824;
      local_e8 = FUN_01199844;
      local_e0 = &LAB_01199848;
      local_d8 = &LAB_0119985c;
      FUN_01196a58(param_1,uVar5,local_38._4_4_,local_38 & 0xffffffff,&local_f0);
      pcVar4 = local_e8;
    }
    local_e8 = pcVar4;
    if (pcVar4 != (code *)0x0) {
      local_d8 = (undefined1 *)0x0;
      local_e0 = (undefined1 *)0x0;
      local_f0 = (undefined1 *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar4)(&local_d0);
    }
  }
  plVar7 = plVar11 + 10;
  do {
    iVar6 = (int)*plVar7 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *(int *)plVar7 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  return;
}


