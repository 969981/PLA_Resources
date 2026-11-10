/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f9b80; name: FUN_031f9b80
 */


void FUN_031f9b80(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar2 = tpidr_el0;
  if (*(long *)(lVar2 + 0x38d490) == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar9;
    lVar9 = *(long *)(lVar9 + 0x10);
  }
  else {
    lVar9 = *(long *)(*(long *)(lVar2 + 0x38d490) + 0x10);
  }
  if (lVar9 != 0) {
    puVar4 = *(undefined8 **)(lVar9 + 8);
    uVar6 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
    if ((uVar6 <= *(ulong *)(lVar9 + 0x10)) &&
       (*(ulong *)(lVar9 + 8) = uVar6, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = "TthkaiWorldProcessingTasks::makeNextTaskGraph";
      uVar5 = nn::os::GetSystemTick();
      puVar4[1] = uVar5;
    }
  }
  iVar1 = *(int *)(param_2 + 0xac);
  *(int *)(param_2 + 0xac) = iVar1 + 1;
  if (iVar1 == 1) {
    if (*(char *)(param_2 + 0x28) == '\0') goto LAB_031f9c1c;
  }
  else {
    if (iVar1 != 0) {
LAB_031f9c1c:
      *param_1 = 0;
      goto joined_r0x031f9c0c;
    }
    if (*(char *)(param_2 + 0x28) != '\0') {
      lVar7 = *(long *)(lVar2 + 0x38d490);
      if (lVar7 == 0) {
        lVar7 = FUN_0333d16c(0,1);
        *(long *)(lVar2 + 0x38d490) = lVar7;
        lVar10 = *(long *)(lVar7 + 0x10);
      }
      else {
        lVar10 = *(long *)(lVar7 + 0x10);
      }
      if (lVar10 != 0) {
        puVar4 = *(undefined8 **)(lVar10 + 8);
        uVar6 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
        if ((uVar6 <= *(ulong *)(lVar10 + 0x10)) &&
           (*(ulong *)(lVar10 + 8) = uVar6, puVar4 != (undefined8 *)0x0)) {
          *puVar4 = "TthkaiWorldProcessingTasks::makePreCuttingTaskGraph";
          uVar5 = nn::os::GetSystemTick();
          puVar4[1] = uVar5;
          lVar7 = *(long *)(lVar2 + 0x38d490);
        }
      }
      if (lVar7 == 0) {
        lVar7 = FUN_0333d16c(0,1);
        *(long *)(lVar2 + 0x38d490) = lVar7;
      }
      plVar3 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
      puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,0x4c8,0);
      *puVar4 = &PTR_LAB_04350ee8;
      puVar4[1] = 0xffffffff;
      puVar4[2] = 1;
      puVar4[3] = puVar4 + 5;
      puVar4[0x65] = puVar4 + 0x67;
      puVar4[4] = 0x8000002000000000;
      puVar4[0x66] = 0x8000002000000000;
      puVar4[0x77] = puVar4 + 0x79;
      puVar4[0x78] = 0x8000002000000000;
      lVar8 = (long)DAT_0444b53c;
      *param_1 = puVar4;
      lVar7 = *(long *)(lVar2 + 0x38d490);
      if (lVar7 == 0) {
        lVar7 = FUN_0333d16c(0,1);
        *(long *)(lVar2 + 0x38d490) = lVar7;
      }
      if (*(long *)(lVar7 + lVar8 * 8 + 0x18) != 0) {
        FUN_0332a954();
      }
      FUN_031ff830(puVar4,*(undefined8 *)(param_2 + 0x88),0xffff);
      lVar8 = (long)DAT_0444b53c;
      lVar7 = *(long *)(lVar2 + 0x38d490);
      if (lVar7 == 0) {
        lVar7 = FUN_0333d16c(0,1);
        *(long *)(lVar2 + 0x38d490) = lVar7;
      }
      if (*(long *)(lVar7 + lVar8 * 8 + 0x18) != 0) {
        FUN_0332a954();
      }
      if (lVar10 != 0) {
        puVar4 = *(undefined8 **)(lVar10 + 8);
        uVar6 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
        if ((uVar6 <= *(ulong *)(lVar10 + 0x10)) &&
           (*(ulong *)(lVar10 + 8) = uVar6, puVar4 != (undefined8 *)0x0)) {
          *puVar4 = &DAT_0390f40e;
          uVar5 = nn::os::GetSystemTick();
          puVar4[1] = uVar5;
        }
      }
      goto joined_r0x031f9c0c;
    }
  }
  FUN_031f9f00(param_1,param_2);
joined_r0x031f9c0c:
  if (lVar9 != 0) {
    puVar4 = *(undefined8 **)(lVar9 + 8);
    uVar6 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
    if ((uVar6 <= *(ulong *)(lVar9 + 0x10)) &&
       (*(ulong *)(lVar9 + 8) = uVar6, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = &DAT_0390f40e;
      uVar5 = nn::os::GetSystemTick();
      puVar4[1] = uVar5;
    }
  }
  return;
}


