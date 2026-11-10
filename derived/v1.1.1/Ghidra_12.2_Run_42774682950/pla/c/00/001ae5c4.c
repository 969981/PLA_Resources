/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ae5c4; name: FUN_001ae5c4
 */


void FUN_001ae5c4(long *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = param_1[0x12];
  if ((int)*(uint *)((long)param_1 + 0x9c) < 0) {
    uVar2 = *(uint *)((long)param_1 + 0x9c) & 0x7fffffff;
    if ((int)uVar2 <= (int)*(uint *)(param_1 + 0x13)) {
      uVar2 = *(uint *)(param_1 + 0x13);
    }
    lVar9 = 0;
    if (lVar7 != 0) {
      lVar9 = lVar7 + (long)(param_1 + 0x12);
    }
    lVar7 = tpidr_el0;
    lVar8 = *(long *)(lVar7 + 0x38d490);
    if (lVar8 == 0) {
      lVar8 = FUN_0333d16c(0,1);
      *(long *)(lVar7 + 0x38d490) = lVar8;
    }
    plVar5 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar9,(ulong)uVar2 << 2);
    lVar7 = param_1[0x10];
    uVar2 = *(uint *)((long)param_1 + 0x8c);
  }
  else {
    lVar7 = param_1[0x10];
    uVar2 = *(uint *)((long)param_1 + 0x8c);
  }
  if ((int)uVar2 < 0) {
    uVar1 = uVar2 & 0x7fffffff;
    if ((int)(uVar2 & 0x7fffffff) <= (int)*(uint *)(param_1 + 0x11)) {
      uVar1 = *(uint *)(param_1 + 0x11);
    }
    lVar9 = 0;
    if (lVar7 != 0) {
      lVar9 = (long)param_1 + lVar7 + 0x80;
    }
    lVar7 = tpidr_el0;
    lVar8 = *(long *)(lVar7 + 0x38d490);
    if (lVar8 == 0) {
      lVar8 = FUN_0333d16c(0,1);
      *(long *)(lVar7 + 0x38d490) = lVar8;
    }
    plVar5 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar9,(ulong)uVar1 << 3);
    lVar7 = param_1[0xe];
    uVar2 = *(uint *)((long)param_1 + 0x7c);
  }
  else {
    lVar7 = param_1[0xe];
    uVar2 = *(uint *)((long)param_1 + 0x7c);
  }
  if ((int)uVar2 < 0) {
    uVar1 = uVar2 & 0x7fffffff;
    if ((int)(uVar2 & 0x7fffffff) <= (int)*(uint *)(param_1 + 0xf)) {
      uVar1 = *(uint *)(param_1 + 0xf);
    }
    lVar9 = 0;
    if (lVar7 != 0) {
      lVar9 = (long)param_1 + lVar7 + 0x70;
    }
    lVar7 = tpidr_el0;
    lVar8 = *(long *)(lVar7 + 0x38d490);
    if (lVar8 == 0) {
      lVar8 = FUN_0333d16c(0,1);
      *(long *)(lVar7 + 0x38d490) = lVar8;
    }
    plVar5 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar9,(ulong)uVar1 << 2);
  }
  lVar9 = param_1[0xc];
  lVar7 = tpidr_el0;
  if ((int)*(uint *)((long)param_1 + 0x6c) < 0) {
    uVar2 = *(uint *)((long)param_1 + 0x6c) & 0x7fffffff;
    if ((int)uVar2 <= (int)*(uint *)(param_1 + 0xd)) {
      uVar2 = *(uint *)(param_1 + 0xd);
    }
    lVar8 = 0;
    if (lVar9 != 0) {
      lVar8 = lVar9 + (long)(param_1 + 0xc);
    }
    lVar9 = *(long *)(lVar7 + 0x38d490);
    if (lVar9 == 0) {
      lVar9 = FUN_0333d16c(0,1);
      *(long *)(lVar7 + 0x38d490) = lVar9;
    }
    plVar5 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,uVar2 << 1);
    lVar9 = param_1[10];
    uVar2 = *(uint *)((long)param_1 + 0x5c);
  }
  else {
    lVar9 = param_1[10];
    uVar2 = *(uint *)((long)param_1 + 0x5c);
  }
  if ((int)uVar2 < 0) {
    uVar1 = uVar2 & 0x7fffffff;
    if ((int)(uVar2 & 0x7fffffff) <= (int)*(uint *)(param_1 + 0xb)) {
      uVar1 = *(uint *)(param_1 + 0xb);
    }
    lVar8 = 0;
    if (lVar9 != 0) {
      lVar8 = (long)param_1 + lVar9 + 0x50;
    }
    lVar9 = *(long *)(lVar7 + 0x38d490);
    if (lVar9 == 0) {
      lVar9 = FUN_0333d16c(0,1);
      *(long *)(lVar7 + 0x38d490) = lVar9;
    }
    plVar5 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,(ulong)uVar1 << 2);
  }
  plVar5 = param_1 + 8;
  iVar3 = (int)param_1[9];
  if (0 < iVar3) {
    lVar9 = 0;
    if (*plVar5 != 0) {
      lVar9 = *plVar5 + (long)plVar5;
    }
    lVar9 = lVar9 + (long)iVar3 * 0x60;
    uVar2 = *(uint *)(lVar9 + -0x54);
    plVar4 = (long *)(lVar9 + -0x60);
    while( true ) {
      if ((int)uVar2 < 0) {
        uVar1 = uVar2 & 0x7fffffff;
        if ((int)(uVar2 & 0x7fffffff) <= (int)*(uint *)(plVar4 + 1)) {
          uVar1 = *(uint *)(plVar4 + 1);
        }
        lVar9 = 0;
        if (*plVar4 != 0) {
          lVar9 = *plVar4 + (long)plVar4;
        }
        lVar8 = *(long *)(lVar7 + 0x38d490);
        if (lVar8 == 0) {
          lVar8 = FUN_0333d16c(0,1);
          *(long *)(lVar7 + 0x38d490) = lVar8;
        }
        plVar6 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar9,(ulong)uVar1 << 2);
      }
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) break;
      uVar2 = *(uint *)((long)plVar4 + -0x54);
      plVar4 = plVar4 + -0xc;
    }
  }
  if ((int)*(uint *)((long)param_1 + 0x4c) < 0) {
    uVar2 = *(uint *)((long)param_1 + 0x4c) & 0x7fffffff;
    if ((int)uVar2 <= (int)*(uint *)(param_1 + 9)) {
      uVar2 = *(uint *)(param_1 + 9);
    }
    lVar9 = 0;
    if (param_1[8] != 0) {
      lVar9 = param_1[8] + (long)plVar5;
    }
    lVar8 = *(long *)(lVar7 + 0x38d490);
    if (lVar8 == 0) {
      lVar8 = FUN_0333d16c(0,1);
      *(long *)(lVar7 + 0x38d490) = lVar8;
    }
    plVar5 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar9,(ulong)uVar2 * 0x60);
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
  lVar9 = 0;
  if (*param_1 != 0) {
    lVar9 = *param_1 + (long)param_1;
  }
  lVar8 = *(long *)(lVar7 + 0x38d490);
  if (lVar8 == 0) {
    lVar8 = FUN_0333d16c(0,1);
    *(long *)(lVar7 + 0x38d490) = lVar8;
  }
  plVar5 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
                    /* WARNING: Could not recover jumptable at 0x001aeb04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5,lVar9,(ulong)uVar1 * 5);
  return;
}


