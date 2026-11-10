/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0309273c; name: FUN_0309273c
 */


undefined2 FUN_0309273c(long param_1,long param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined2 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  
  lVar8 = tpidr_el0;
  lVar7 = *(long *)(lVar8 + 0x38d490);
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar8 + 0x38d490) = lVar7;
    lVar10 = *(long *)(lVar7 + 0x10);
  }
  else {
    lVar10 = *(long *)(lVar7 + 0x10);
  }
  if (lVar10 != 0) {
    puVar1 = *(undefined8 **)(lVar10 + 8);
    uVar9 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= *(ulong *)(lVar10 + 0x10)) &&
       (*(ulong *)(lVar10 + 8) = uVar9, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "TtPreSolve";
      uVar6 = nn::os::GetSystemTick();
      puVar1[1] = uVar6;
      lVar7 = *(long *)(lVar8 + 0x38d490);
    }
  }
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar8 + 0x38d490) = lVar7;
  }
  plVar5 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x510,0);
  plVar5[1] = 0xffffffff;
  plVar11 = plVar5 + 2;
  *plVar11 = 1;
  *plVar5 = (long)&PTR_LAB_042b41c0;
  plVar5[4] = (long)&PTR_LAB_042b4208;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  FUN_0333af28(plVar5 + 9);
  plVar5[6] = param_1;
  plVar5[7] = param_2;
  plVar5[5] = (long)param_3;
  (**(code **)(*param_3 + 0x18))(param_3,plVar5 + 8,1,8);
  (**(code **)(*param_3 + 0x28))(param_3,plVar5[8],0,0x40);
  uVar6 = FUN_0333bfa4(param_4,param_3,*(undefined2 *)(param_4 + 0x4da));
  (**(code **)(*param_3 + 0x40))(param_3,plVar5[8],uVar6);
  uVar4 = FUN_0333b6e8(param_4,plVar5,0x40);
  if (plVar5[1] != 0) {
    do {
      lVar8 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  if (lVar10 != 0) {
    puVar1 = *(undefined8 **)(lVar10 + 8);
    uVar9 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= *(ulong *)(lVar10 + 0x10)) &&
       (*(ulong *)(lVar10 + 8) = uVar9, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_0390f40e;
      uVar6 = nn::os::GetSystemTick();
      puVar1[1] = uVar6;
    }
  }
  return uVar4;
}


