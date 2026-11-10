/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0321610c; name: FUN_0321610c
 */


void FUN_0321610c(long param_1,undefined8 param_2,byte param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_a0 [16];
  long local_90;
  undefined4 local_88;
  int local_84;
  undefined1 auStack_78 [8];
  long local_70;
  undefined4 local_68;
  uint local_64;
  long local_48;
  
  lVar4 = tpidr_el0;
  if (*(long *)(lVar4 + 0x38d490) == 0) {
    lVar11 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar11;
    lVar11 = *(long *)(lVar11 + 0x10);
  }
  else {
    lVar11 = *(long *)(*(long *)(lVar4 + 0x38d490) + 0x10);
  }
  if (lVar11 != 0) {
    puVar8 = *(undefined8 **)(lVar11 + 8);
    uVar9 = (long)puVar8 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= *(ulong *)(lVar11 + 0x10)) &&
       (*(ulong *)(lVar11 + 8) = uVar9, puVar8 != (undefined8 *)0x0)) {
      *puVar8 = "TtenableAsyncProcessing";
      uVar7 = nn::os::GetSystemTick();
      puVar8[1] = uVar7;
    }
  }
  local_48 = lVar11;
  FUN_0321643c(auStack_a0,param_2,param_3 & 1);
  FUN_031aa380(param_1 + 0x28,param_1,auStack_a0);
  lVar10 = *(long *)(lVar4 + 0x38d490);
  if (lVar10 == 0) {
    lVar10 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar10;
  }
  plVar6 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
  uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,0x70,0);
  FUN_0332b3cc(uVar7,param_2);
  plVar6 = *(long **)(param_1 + 0x4e8);
  *(undefined8 *)(param_1 + 0x4e8) = uVar7;
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar1 = plVar6 + 2;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  lVar10 = *(long *)(lVar4 + 0x38d490);
  if (lVar10 == 0) {
    lVar10 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar10;
  }
  plVar6 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
  puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x100,0);
  uVar7 = *(undefined8 *)(param_1 + 0x4d0);
  *puVar8 = 0;
  puVar8[2] = puVar8 + 6;
  puVar8[3] = 0x8000001800000000;
  FUN_032be540(puVar8,uVar7,0);
  *(undefined8 **)(param_1 + 0x4d8) = puVar8;
  lVar10 = *(long *)(lVar4 + 0x38d490);
  if (lVar10 == 0) {
    lVar10 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar10;
  }
  plVar6 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
  puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x28,0);
  *puVar8 = 0;
  *(undefined8 **)(param_1 + 0x4e0) = puVar8;
  FUN_032bf524(puVar8,*(undefined8 *)(param_1 + 0x4d0),*(undefined8 *)(param_1 + 0x4d8));
  *(byte *)(param_1 + 0x4b8) = param_3 & 1;
  puVar5 = PTR_PTR_0434a080;
  local_68 = 0;
  if ((-1 < (int)local_64) && (local_70 != 0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))(PTR_PTR_0434a080,local_70,local_64 & 0x3fffffff)
    ;
  }
  local_64 = 0x80000000;
  local_70 = 0;
  FUN_032c7b9c(auStack_78);
  local_88 = 0;
  if ((-1 < local_84) && (local_90 != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5,local_90,local_84 << 2);
  }
  if (lVar11 != 0) {
    puVar8 = *(undefined8 **)(lVar11 + 8);
    uVar9 = (long)puVar8 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= *(ulong *)(lVar11 + 0x10)) &&
       (*(ulong *)(lVar11 + 8) = uVar9, puVar8 != (undefined8 *)0x0)) {
      *puVar8 = &DAT_0390f40e;
      uVar7 = nn::os::GetSystemTick();
      puVar8[1] = uVar7;
    }
  }
  return;
}


