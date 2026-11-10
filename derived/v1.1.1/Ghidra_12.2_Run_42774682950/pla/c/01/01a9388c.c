/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a9388c; name: FUN_01a9388c
 */


void FUN_01a9388c(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = *(ulong *)(param_1 + 0xab0);
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x9f0);
  }
  else {
    lVar1 = tpidr_el0;
    lVar4 = *(long *)(lVar1 + 0x38d490);
    if (lVar4 == 0) {
      lVar4 = FUN_0333d16c(0,1);
      *(long *)(lVar1 + 0x38d490) = lVar4;
    }
    plVar2 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
    *(undefined8 *)(uVar3 - 0x11) = 0;
    (**(code **)(*plVar2 + 0x18))
              (plVar2,(undefined8 *)(uVar3 - 0x11),(long)*(int *)(uVar3 - 9) + 0x10);
    uVar3 = *(ulong *)(param_1 + 0x9f0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x930);
  }
  else {
    lVar1 = tpidr_el0;
    lVar4 = *(long *)(lVar1 + 0x38d490);
    if (lVar4 == 0) {
      lVar4 = FUN_0333d16c(0,1);
      *(long *)(lVar1 + 0x38d490) = lVar4;
    }
    plVar2 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
    *(undefined8 *)(uVar3 - 0x11) = 0;
    (**(code **)(*plVar2 + 0x18))
              (plVar2,(undefined8 *)(uVar3 - 0x11),(long)*(int *)(uVar3 - 9) + 0x10);
    uVar3 = *(ulong *)(param_1 + 0x930);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x870);
  }
  else {
    lVar1 = tpidr_el0;
    lVar4 = *(long *)(lVar1 + 0x38d490);
    if (lVar4 == 0) {
      lVar4 = FUN_0333d16c(0,1);
      *(long *)(lVar1 + 0x38d490) = lVar4;
    }
    plVar2 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
    *(undefined8 *)(uVar3 - 0x11) = 0;
    (**(code **)(*plVar2 + 0x18))
              (plVar2,(undefined8 *)(uVar3 - 0x11),(long)*(int *)(uVar3 - 9) + 0x10);
    uVar3 = *(ulong *)(param_1 + 0x870);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x7b0);
  }
  else {
    lVar1 = tpidr_el0;
    lVar4 = *(long *)(lVar1 + 0x38d490);
    if (lVar4 == 0) {
      lVar4 = FUN_0333d16c(0,1);
      *(long *)(lVar1 + 0x38d490) = lVar4;
    }
    plVar2 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
    *(undefined8 *)(uVar3 - 0x11) = 0;
    (**(code **)(*plVar2 + 0x18))
              (plVar2,(undefined8 *)(uVar3 - 0x11),(long)*(int *)(uVar3 - 9) + 0x10);
    uVar3 = *(ulong *)(param_1 + 0x7b0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x6f0);
  }
  else {
    lVar1 = tpidr_el0;
    lVar4 = *(long *)(lVar1 + 0x38d490);
    if (lVar4 == 0) {
      lVar4 = FUN_0333d16c(0,1);
      *(long *)(lVar1 + 0x38d490) = lVar4;
    }
    plVar2 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
    *(undefined8 *)(uVar3 - 0x11) = 0;
    (**(code **)(*plVar2 + 0x18))
              (plVar2,(undefined8 *)(uVar3 - 0x11),(long)*(int *)(uVar3 - 9) + 0x10);
    uVar3 = *(ulong *)(param_1 + 0x6f0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x630);
  }
  else {
    lVar1 = tpidr_el0;
    lVar4 = *(long *)(lVar1 + 0x38d490);
    if (lVar4 == 0) {
      lVar4 = FUN_0333d16c(0,1);
      *(long *)(lVar1 + 0x38d490) = lVar4;
    }
    plVar2 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
    *(undefined8 *)(uVar3 - 0x11) = 0;
    (**(code **)(*plVar2 + 0x18))
              (plVar2,(undefined8 *)(uVar3 - 0x11),(long)*(int *)(uVar3 - 9) + 0x10);
    uVar3 = *(ulong *)(param_1 + 0x630);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x570);
  }
  else {
    lVar1 = tpidr_el0;
    lVar4 = *(long *)(lVar1 + 0x38d490);
    if (lVar4 == 0) {
      lVar4 = FUN_0333d16c(0,1);
      *(long *)(lVar1 + 0x38d490) = lVar4;
    }
    plVar2 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
    *(undefined8 *)(uVar3 - 0x11) = 0;
    (**(code **)(*plVar2 + 0x18))
              (plVar2,(undefined8 *)(uVar3 - 0x11),(long)*(int *)(uVar3 - 9) + 0x10);
    uVar3 = *(ulong *)(param_1 + 0x570);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x4b0);
  }
  else {
    lVar1 = tpidr_el0;
    lVar4 = *(long *)(lVar1 + 0x38d490);
    if (lVar4 == 0) {
      lVar4 = FUN_0333d16c(0,1);
      *(long *)(lVar1 + 0x38d490) = lVar4;
    }
    plVar2 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
    *(undefined8 *)(uVar3 - 0x11) = 0;
    (**(code **)(*plVar2 + 0x18))
              (plVar2,(undefined8 *)(uVar3 - 0x11),(long)*(int *)(uVar3 - 9) + 0x10);
    uVar3 = *(ulong *)(param_1 + 0x4b0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x3f0);
  }
  else {
    lVar1 = tpidr_el0;
    lVar4 = *(long *)(lVar1 + 0x38d490);
    if (lVar4 == 0) {
      lVar4 = FUN_0333d16c(0,1);
      *(long *)(lVar1 + 0x38d490) = lVar4;
    }
    plVar2 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
    *(undefined8 *)(uVar3 - 0x11) = 0;
    (**(code **)(*plVar2 + 0x18))
              (plVar2,(undefined8 *)(uVar3 - 0x11),(long)*(int *)(uVar3 - 9) + 0x10);
    uVar3 = *(ulong *)(param_1 + 0x3f0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x330);
  }
  else {
    lVar1 = tpidr_el0;
    lVar4 = *(long *)(lVar1 + 0x38d490);
    if (lVar4 == 0) {
      lVar4 = FUN_0333d16c(0,1);
      *(long *)(lVar1 + 0x38d490) = lVar4;
    }
    plVar2 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
    *(undefined8 *)(uVar3 - 0x11) = 0;
    (**(code **)(*plVar2 + 0x18))
              (plVar2,(undefined8 *)(uVar3 - 0x11),(long)*(int *)(uVar3 - 9) + 0x10);
    uVar3 = *(ulong *)(param_1 + 0x330);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x270);
  }
  else {
    lVar1 = tpidr_el0;
    lVar4 = *(long *)(lVar1 + 0x38d490);
    if (lVar4 == 0) {
      lVar4 = FUN_0333d16c(0,1);
      *(long *)(lVar1 + 0x38d490) = lVar4;
    }
    plVar2 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
    *(undefined8 *)(uVar3 - 0x11) = 0;
    (**(code **)(*plVar2 + 0x18))
              (plVar2,(undefined8 *)(uVar3 - 0x11),(long)*(int *)(uVar3 - 9) + 0x10);
    uVar3 = *(ulong *)(param_1 + 0x270);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x1b0);
  }
  else {
    lVar1 = tpidr_el0;
    lVar4 = *(long *)(lVar1 + 0x38d490);
    if (lVar4 == 0) {
      lVar4 = FUN_0333d16c(0,1);
      *(long *)(lVar1 + 0x38d490) = lVar4;
    }
    plVar2 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
    *(undefined8 *)(uVar3 - 0x11) = 0;
    (**(code **)(*plVar2 + 0x18))
              (plVar2,(undefined8 *)(uVar3 - 0x11),(long)*(int *)(uVar3 - 9) + 0x10);
    uVar3 = *(ulong *)(param_1 + 0x1b0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0xf0);
  }
  else {
    lVar1 = tpidr_el0;
    lVar4 = *(long *)(lVar1 + 0x38d490);
    if (lVar4 == 0) {
      lVar4 = FUN_0333d16c(0,1);
      *(long *)(lVar1 + 0x38d490) = lVar4;
    }
    plVar2 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
    *(undefined8 *)(uVar3 - 0x11) = 0;
    (**(code **)(*plVar2 + 0x18))
              (plVar2,(undefined8 *)(uVar3 - 0x11),(long)*(int *)(uVar3 - 9) + 0x10);
    uVar3 = *(ulong *)(param_1 + 0xf0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x30);
  }
  else {
    lVar1 = tpidr_el0;
    lVar4 = *(long *)(lVar1 + 0x38d490);
    if (lVar4 == 0) {
      lVar4 = FUN_0333d16c(0,1);
      *(long *)(lVar1 + 0x38d490) = lVar4;
    }
    plVar2 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
    *(undefined8 *)(uVar3 - 0x11) = 0;
    (**(code **)(*plVar2 + 0x18))
              (plVar2,(undefined8 *)(uVar3 - 0x11),(long)*(int *)(uVar3 - 9) + 0x10);
    uVar3 = *(ulong *)(param_1 + 0x30);
  }
  if ((uVar3 & 1) == 0) {
    return;
  }
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x38d490);
  if (lVar4 == 0) {
    lVar4 = FUN_0333d16c(0,1);
    *(long *)(lVar1 + 0x38d490) = lVar4;
  }
  plVar2 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
  *(undefined8 *)(uVar3 - 0x11) = 0;
                    /* WARNING: Could not recover jumptable at 0x01a93d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))
            (plVar2,(undefined8 *)(uVar3 - 0x11),(long)*(int *)(uVar3 - 9) + 0x10);
  return;
}


