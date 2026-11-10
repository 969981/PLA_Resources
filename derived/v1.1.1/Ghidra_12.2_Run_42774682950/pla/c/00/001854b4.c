/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001854b4; name: FUN_001854b4
 */


void FUN_001854b4(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = param_1[4];
  if ((int)*(uint *)((long)param_1 + 0x2c) < 0) {
    uVar2 = *(uint *)((long)param_1 + 0x2c) & 0x7fffffff;
    if ((int)uVar2 <= (int)*(uint *)(param_1 + 5)) {
      uVar2 = *(uint *)(param_1 + 5);
    }
    lVar3 = 0;
    if (lVar5 != 0) {
      lVar3 = lVar5 + (long)(param_1 + 4);
    }
    lVar5 = tpidr_el0;
    lVar6 = *(long *)(lVar5 + 0x38d490);
    if (lVar6 == 0) {
      lVar6 = FUN_0333d16c(0,1);
      *(long *)(lVar5 + 0x38d490) = lVar6;
    }
    plVar4 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar3,(ulong)uVar2 << 2);
    lVar5 = param_1[2];
    uVar2 = *(uint *)((long)param_1 + 0x1c);
  }
  else {
    lVar5 = param_1[2];
    uVar2 = *(uint *)((long)param_1 + 0x1c);
  }
  if ((int)uVar2 < 0) {
    uVar1 = uVar2 & 0x7fffffff;
    if ((int)(uVar2 & 0x7fffffff) <= (int)*(uint *)(param_1 + 3)) {
      uVar1 = *(uint *)(param_1 + 3);
    }
    lVar3 = 0;
    if (lVar5 != 0) {
      lVar3 = (long)param_1 + lVar5 + 0x10;
    }
    lVar5 = tpidr_el0;
    lVar6 = *(long *)(lVar5 + 0x38d490);
    if (lVar6 == 0) {
      lVar6 = FUN_0333d16c(0,1);
      *(long *)(lVar5 + 0x38d490) = lVar6;
    }
    plVar4 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar3,uVar1);
    uVar2 = *(uint *)((long)param_1 + 0xc);
  }
  else {
    uVar2 = *(uint *)((long)param_1 + 0xc);
  }
  if (-1 < (int)uVar2) {
    return;
  }
  uVar1 = uVar2 & 0x7fffffff;
  if ((int)(uVar2 & 0x7fffffff) <= (int)*(uint *)(param_1 + 1)) {
    uVar1 = *(uint *)(param_1 + 1);
  }
  lVar5 = 0;
  if (*param_1 != 0) {
    lVar5 = *param_1 + (long)param_1;
  }
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x38d490);
  if (lVar6 == 0) {
    lVar6 = FUN_0333d16c(0,1);
    *(long *)(lVar3 + 0x38d490) = lVar6;
  }
  plVar4 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00185694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))(plVar4,lVar5,(ulong)uVar1 << 3);
  return;
}


