/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031249ac; name: FUN_031249ac
 */


void FUN_031249ac(long *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = (long)&PTR_LAB_042b5eb8;
  lVar4 = param_1[10];
  if ((int)*(uint *)((long)param_1 + 0x5c) < 0) {
    uVar1 = *(uint *)((long)param_1 + 0x5c) & 0x7fffffff;
    if ((int)uVar1 <= (int)*(uint *)(param_1 + 0xb)) {
      uVar1 = *(uint *)(param_1 + 0xb);
    }
    lVar2 = 0;
    if (lVar4 != 0) {
      lVar2 = lVar4 + (long)(param_1 + 10);
    }
    lVar4 = tpidr_el0;
    lVar5 = *(long *)(lVar4 + 0x38d490);
    if (lVar5 == 0) {
      lVar5 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar5;
    }
    plVar3 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar2,(ulong)uVar1 << 2);
  }
  lVar4 = param_1[7];
  if ((int)*(uint *)((long)param_1 + 0x44) < 0) {
    uVar1 = *(uint *)((long)param_1 + 0x44) & 0x7fffffff;
    if ((int)uVar1 <= (int)*(uint *)(param_1 + 8)) {
      uVar1 = *(uint *)(param_1 + 8);
    }
    lVar2 = 0;
    if (lVar4 != 0) {
      lVar2 = lVar4 + (long)(param_1 + 7);
    }
    lVar4 = tpidr_el0;
    lVar5 = *(long *)(lVar4 + 0x38d490);
    if (lVar5 == 0) {
      lVar5 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar5;
    }
    plVar3 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar2,(ulong)uVar1 << 2);
  }
  lVar4 = param_1[3];
  if ((int)*(uint *)((long)param_1 + 0x24) < 0) {
    uVar1 = *(uint *)((long)param_1 + 0x24) & 0x7fffffff;
    if ((int)uVar1 <= (int)*(uint *)(param_1 + 4)) {
      uVar1 = *(uint *)(param_1 + 4);
    }
    lVar2 = 0;
    if (lVar4 != 0) {
      lVar2 = lVar4 + (long)(param_1 + 3);
    }
    lVar4 = tpidr_el0;
    lVar5 = *(long *)(lVar4 + 0x38d490);
    if (lVar5 == 0) {
      lVar5 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar5;
    }
    plVar3 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar2,(ulong)uVar1 << 2);
  }
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


