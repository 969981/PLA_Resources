/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03216dec; name: FUN_03216dec
 */


void FUN_03216dec(long param_1,undefined ***param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined **local_70;
  long local_68;
  undefined8 local_60;
  long *local_58;
  undefined4 local_50;
  undefined2 local_4c;
  long local_38;
  
  lVar9 = tpidr_el0;
  if (*(long *)(lVar9 + 0x38d490) == 0) {
    lVar8 = FUN_0333d16c(0,1);
    *(long *)(lVar9 + 0x38d490) = lVar8;
    lVar9 = *(long *)(lVar8 + 0x10);
  }
  else {
    lVar9 = *(long *)(*(long *)(lVar9 + 0x38d490) + 0x10);
  }
  if (lVar9 != 0) {
    puVar2 = *(undefined8 **)(lVar9 + 8);
    uVar7 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar7 <= *(ulong *)(lVar9 + 0x10)) &&
       (*(ulong *)(lVar9 + 8) = uVar7, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "TtcommitAsyncProcessingRun";
      uVar6 = nn::os::GetSystemTick();
      puVar2[1] = uVar6;
    }
  }
  local_50 = 0x8000010;
  local_4c = 0x1e;
  local_38 = lVar9;
  FUN_031aa380(param_1 + 0x28,param_1,&local_50);
  lVar8 = *(long *)(*(long *)(param_1 + 0x4e8) + 0x68);
  plVar5 = (long *)0x0;
  if (lVar8 != 0) {
    plVar5 = (long *)(lVar8 + 0x18);
  }
  (**(code **)(*plVar5 + 0x20))(plVar5,param_1 + 0x4f8,1,8);
  plVar5 = *(long **)(param_1 + 0x4f0);
  *(undefined8 *)(param_1 + 0x4f0) = 0;
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar1 = plVar5 + 2;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  FUN_031fa4e0(&local_58,*(undefined8 *)(param_1 + 0x500));
  if (local_58 != (long *)0x0) {
    local_70 = &PTR_LAB_04350d48;
    local_68 = 0;
    local_60 = -0x8000000000000000;
    if (param_2 == (undefined ***)0x0) {
      param_2 = &local_70;
    }
    (**(code **)((long)*param_2 + 0xb0))(param_2,local_58,0);
    lVar8 = local_60;
    uVar7 = (ulong)local_60._4_4_;
    local_70 = &PTR_LAB_04350d48;
    local_60 = (ulong)local_60._4_4_ << 0x20;
    if ((-1 < lVar8) && (local_68 != 0)) {
      (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                (PTR_PTR_0434a080,local_68,(uVar7 & 0x3fffffff) << 3);
    }
    if ((local_58 != (long *)0x0) && (local_58[1] != 0)) {
      plVar5 = local_58 + 2;
      do {
        lVar8 = *plVar5;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*local_58 + 0x18))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x500);
  *(undefined8 *)(param_1 + 0x500) = 0;
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar1 = plVar5 + 2;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  if (lVar9 != 0) {
    puVar2 = *(undefined8 **)(lVar9 + 8);
    uVar7 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar7 <= *(ulong *)(lVar9 + 0x10)) &&
       (*(ulong *)(lVar9 + 8) = uVar7, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_0390f40e;
      uVar6 = nn::os::GetSystemTick();
      puVar2[1] = uVar6;
    }
  }
  return;
}


