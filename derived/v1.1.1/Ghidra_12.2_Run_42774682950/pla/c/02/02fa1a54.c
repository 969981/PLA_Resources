/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fa1a54; name: FUN_02fa1a54
 */


void FUN_02fa1a54(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  
  *param_1 = (long)&PTR_LAB_042b7de0;
  lVar7 = param_1[4];
  if ((lVar7 != 0) && (lVar7 + (long)(param_1 + 4) != 0)) {
    FUN_032d647c();
  }
  iVar6 = (int)param_1[6];
  plVar5 = param_1 + 5;
  if (0 < iVar6) {
    lVar7 = 0;
    do {
      plVar4 = *(long **)((long)plVar5 + lVar7 * 8 + *plVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
        iVar6 = (int)param_1[6];
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar6);
  }
  lVar7 = param_1[7];
  if ((int)*(uint *)((long)param_1 + 0x44) < 0) {
    uVar2 = *(uint *)((long)param_1 + 0x44) & 0x7fffffff;
    if ((int)uVar2 <= (int)*(uint *)(param_1 + 8)) {
      uVar2 = *(uint *)(param_1 + 8);
    }
    lVar3 = 0;
    if (lVar7 != 0) {
      lVar3 = lVar7 + (long)(param_1 + 7);
    }
    lVar7 = tpidr_el0;
    lVar8 = *(long *)(lVar7 + 0x38d490);
    if (lVar8 == 0) {
      lVar8 = FUN_0333d16c(0,1);
      *(long *)(lVar7 + 0x38d490) = lVar8;
    }
    plVar4 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar3,(ulong)uVar2 << 2);
    uVar2 = *(uint *)((long)param_1 + 0x34);
  }
  else {
    uVar2 = *(uint *)((long)param_1 + 0x34);
  }
  if ((int)uVar2 < 0) {
    uVar1 = uVar2 & 0x7fffffff;
    if ((int)(uVar2 & 0x7fffffff) <= (int)*(uint *)(param_1 + 6)) {
      uVar1 = *(uint *)(param_1 + 6);
    }
    lVar7 = 0;
    if (param_1[5] != 0) {
      lVar7 = param_1[5] + (long)plVar5;
    }
    lVar3 = tpidr_el0;
    lVar8 = *(long *)(lVar3 + 0x38d490);
    if (lVar8 == 0) {
      lVar8 = FUN_0333d16c(0,1);
      *(long *)(lVar3 + 0x38d490) = lVar8;
    }
    plVar5 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar7,(ulong)uVar1 << 3);
  }
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


