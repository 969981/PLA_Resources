/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011d269c; name: FUN_011d269c
 */


void FUN_011d269c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *local_50;
  char *local_48;
  undefined8 local_40;
  long *local_38;
  long *local_28;
  
  FUN_00d39c98(param_1,param_1 + 0x4d8,0x400000);
  uVar5 = FUN_00d39d00(param_1);
  lVar6 = FUN_0116001c(&local_50,uVar5);
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar7 = *(long **)(param_1 + 0x4c8);
  *(undefined8 *)(param_1 + 0x4c8) = 0;
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x4c8) = lVar6;
  *(undefined8 *)(lVar6 + 200) = *(undefined8 *)(param_1 + 0x340);
  *(undefined8 *)(lVar6 + 0xd0) = *(undefined8 *)(param_1 + 0x348);
  *(undefined8 *)(lVar6 + 0xd8) = *(undefined8 *)(param_1 + 0x350);
  plVar7 = *(long **)(param_1 + 0x358);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  plVar8 = *(long **)(lVar6 + 0xe0);
  *(long **)(lVar6 + 0xe0) = plVar7;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  plVar7 = *(long **)(param_1 + 0x4c8);
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      iVar4 = (int)*plVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  if (*(long *)(param_1 + 0xf8) == 0) {
    uVar5 = FUN_00d39d00(param_1);
    local_28 = (long *)FUN_00d39d00(param_1);
    FUN_01160160(&local_50,uVar5,&local_28);
    plVar7 = local_50;
    local_50 = (long *)0x0;
    FUN_011d369c((long *)(param_1 + 0xf8),plVar7);
    *(char **)(param_1 + 0x100) = local_48;
    *(undefined8 *)(param_1 + 0x108) = local_40;
    *(long **)(param_1 + 0x110) = local_38;
    FUN_011d369c(&local_50,0);
    if (*(long *)(param_1 + 0x4c8) != 0) {
      *(undefined8 *)(*(long *)(param_1 + 0x4c8) + 0xb0) = *(undefined8 *)(param_1 + 0xf8);
    }
  }
  FUN_011d2bcc(param_1);
  local_50 = (long *)0xcfb7180bd66ee8fc;
  local_48 = "common/btl_std.dat";
  local_40 = 0x12;
  local_38 = (long *)0x0;
  if ((*(long *)(param_1 + 0xf8) != 0) &&
     (FUN_00d37828(*(long *)(param_1 + 0xf8),&local_50,0,10), local_38 != (long *)0x0)) {
    (**(code **)(*local_38 + 0x20))();
  }
  local_50 = (long *)0x8251fe08e844de0d;
  local_48 = "common/btl_set.dat";
  local_40 = 0x12;
  local_38 = (long *)0x0;
  if ((*(long *)(param_1 + 0xf8) != 0) &&
     (FUN_00d37828(*(long *)(param_1 + 0xf8),&local_50,0,10), local_38 != (long *)0x0)) {
    (**(code **)(*local_38 + 0x20))();
  }
  local_50 = (long *)0xffc684a5eac0de91;
  local_48 = "common/btl_attack.dat";
  local_40 = 0x15;
  local_38 = (long *)0x0;
  if ((*(long *)(param_1 + 0xf8) != 0) &&
     (FUN_00d37828(*(long *)(param_1 + 0xf8),&local_50,0,10), local_38 != (long *)0x0)) {
    (**(code **)(*local_38 + 0x20))();
  }
  local_50 = (long *)&DAT_de6071302eade50e;
  local_48 = "common/btl_seq.dat";
  local_40 = 0x12;
  local_38 = (long *)0x0;
  if ((*(long *)(param_1 + 0xf8) != 0) &&
     (FUN_00d37828(*(long *)(param_1 + 0xf8),&local_50,0,10), local_38 != (long *)0x0)) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379690), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  *(undefined8 *)PTR_DAT_043796a0 = *(undefined8 *)PTR_DAT_04379698;
  FUN_0286b614(&local_50);
  local_28 = (long *)CONCAT44(local_28._4_4_,2);
  uVar5 = FUN_02858c50(local_50,&local_28);
  FUN_011d2dac(&local_28,param_1,uVar5);
  *(long **)(param_1 + 0x688) = local_28;
  if (local_28 != (long *)0x0) {
    lVar6 = local_28[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  FUN_011d2ddc(&local_28,param_1,uVar5);
  *(long **)(param_1 + 0x690) = local_28;
  if (local_28 != (long *)0x0) {
    lVar6 = local_28[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  FUN_011d2e0c(&local_28,param_1,uVar5);
  *(long **)(param_1 + 0x698) = local_28;
  if (local_28 != (long *)0x0) {
    lVar6 = local_28[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  FUN_011d2e3c(&local_28,param_1,uVar5);
  *(long **)(param_1 + 0x6a0) = local_28;
  if (local_28 != (long *)0x0) {
    lVar6 = local_28[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  FUN_011ad040(&local_28,param_1,"BattleMessageView",uVar5);
  *(long **)(param_1 + 0x6a8) = local_28;
  if (local_28 != (long *)0x0) {
    lVar6 = local_28[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  if (local_50 != (long *)0x0) {
    lVar6 = local_50[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_50 + 0x20))();
    }
  }
  return;
}


