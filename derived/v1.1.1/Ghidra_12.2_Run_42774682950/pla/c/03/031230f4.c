/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031230f4; name: FUN_031230f4
 */


void FUN_031230f4(long *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = (long)&PTR_LAB_042b9448;
  if ((long *)param_1[0xd] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xd] + 8))();
  }
  lVar5 = param_1[10];
  lVar3 = tpidr_el0;
  if ((int)*(uint *)((long)param_1 + 0x5c) < 0) {
    uVar1 = *(uint *)((long)param_1 + 0x5c) & 0x7fffffff;
    if ((int)uVar1 <= (int)*(uint *)(param_1 + 0xb)) {
      uVar1 = *(uint *)(param_1 + 0xb);
    }
    lVar2 = 0;
    if (lVar5 != 0) {
      lVar2 = lVar5 + (long)(param_1 + 10);
    }
    lVar5 = *(long *)(lVar3 + 0x38d490);
    if (lVar5 == 0) {
      lVar5 = FUN_0333d16c(0,1);
      *(long *)(lVar3 + 0x38d490) = lVar5;
    }
    plVar4 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar2,(ulong)uVar1 << 7);
  }
  lVar5 = param_1[4];
  if ((int)*(uint *)((long)param_1 + 0x2c) < 0) {
    uVar1 = *(uint *)((long)param_1 + 0x2c) & 0x7fffffff;
    if ((int)uVar1 <= (int)*(uint *)(param_1 + 5)) {
      uVar1 = *(uint *)(param_1 + 5);
    }
    lVar2 = 0;
    if (lVar5 != 0) {
      lVar2 = lVar5 + (long)(param_1 + 4);
    }
    lVar5 = *(long *)(lVar3 + 0x38d490);
    if (lVar5 == 0) {
      lVar5 = FUN_0333d16c(0,1);
      *(long *)(lVar3 + 0x38d490) = lVar5;
    }
    plVar4 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar2,(ulong)uVar1 * 6);
  }
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


