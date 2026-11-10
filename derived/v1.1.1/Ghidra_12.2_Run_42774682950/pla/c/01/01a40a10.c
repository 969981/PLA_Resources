/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a40a10; name: FUN_01a40a10
 */


void FUN_01a40a10(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = *(ulong *)(param_1 + 0x5f70);
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x5eb0);
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
    uVar3 = *(ulong *)(param_1 + 0x5eb0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x5df0);
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
    uVar3 = *(ulong *)(param_1 + 0x5df0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x5d30);
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
    uVar3 = *(ulong *)(param_1 + 0x5d30);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x5c70);
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
    uVar3 = *(ulong *)(param_1 + 0x5c70);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x5bb0);
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
    uVar3 = *(ulong *)(param_1 + 0x5bb0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x5af0);
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
    uVar3 = *(ulong *)(param_1 + 0x5af0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x5a30);
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
    uVar3 = *(ulong *)(param_1 + 0x5a30);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x5970);
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
    uVar3 = *(ulong *)(param_1 + 0x5970);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x58b0);
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
    uVar3 = *(ulong *)(param_1 + 0x58b0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x57f0);
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
    uVar3 = *(ulong *)(param_1 + 0x57f0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x5730);
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
    uVar3 = *(ulong *)(param_1 + 0x5730);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x5670);
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
    uVar3 = *(ulong *)(param_1 + 0x5670);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x55b0);
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
    uVar3 = *(ulong *)(param_1 + 0x55b0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x54f0);
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
    uVar3 = *(ulong *)(param_1 + 0x54f0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x5430);
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
    uVar3 = *(ulong *)(param_1 + 0x5430);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x5370);
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
    uVar3 = *(ulong *)(param_1 + 0x5370);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x52b0);
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
    uVar3 = *(ulong *)(param_1 + 0x52b0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x51f0);
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
    uVar3 = *(ulong *)(param_1 + 0x51f0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x5130);
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
    uVar3 = *(ulong *)(param_1 + 0x5130);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x5070);
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
    uVar3 = *(ulong *)(param_1 + 0x5070);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x4fb0);
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
    uVar3 = *(ulong *)(param_1 + 0x4fb0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x4ef0);
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
    uVar3 = *(ulong *)(param_1 + 0x4ef0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x4e30);
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
    uVar3 = *(ulong *)(param_1 + 0x4e30);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x4d70);
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
    uVar3 = *(ulong *)(param_1 + 0x4d70);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x4cb0);
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
    uVar3 = *(ulong *)(param_1 + 0x4cb0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x4bf0);
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
    uVar3 = *(ulong *)(param_1 + 0x4bf0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x4b30);
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
    uVar3 = *(ulong *)(param_1 + 0x4b30);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x4a70);
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
    uVar3 = *(ulong *)(param_1 + 0x4a70);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x49b0);
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
    uVar3 = *(ulong *)(param_1 + 0x49b0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x48f0);
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
    uVar3 = *(ulong *)(param_1 + 0x48f0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x4830);
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
    uVar3 = *(ulong *)(param_1 + 0x4830);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x4770);
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
    uVar3 = *(ulong *)(param_1 + 0x4770);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x46b0);
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
    uVar3 = *(ulong *)(param_1 + 0x46b0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x45f0);
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
    uVar3 = *(ulong *)(param_1 + 0x45f0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x4530);
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
    uVar3 = *(ulong *)(param_1 + 0x4530);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x4470);
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
    uVar3 = *(ulong *)(param_1 + 0x4470);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x43b0);
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
    uVar3 = *(ulong *)(param_1 + 0x43b0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x42f0);
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
    uVar3 = *(ulong *)(param_1 + 0x42f0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x4230);
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
    uVar3 = *(ulong *)(param_1 + 0x4230);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x4170);
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
    uVar3 = *(ulong *)(param_1 + 0x4170);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x40b0);
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
    uVar3 = *(ulong *)(param_1 + 0x40b0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x3ff0);
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
    uVar3 = *(ulong *)(param_1 + 0x3ff0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x3f30);
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
    uVar3 = *(ulong *)(param_1 + 0x3f30);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x3e70);
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
    uVar3 = *(ulong *)(param_1 + 0x3e70);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x3db0);
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
    uVar3 = *(ulong *)(param_1 + 0x3db0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x3cf0);
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
    uVar3 = *(ulong *)(param_1 + 0x3cf0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x3c30);
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
    uVar3 = *(ulong *)(param_1 + 0x3c30);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x3b70);
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
    uVar3 = *(ulong *)(param_1 + 0x3b70);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x3ab0);
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
    uVar3 = *(ulong *)(param_1 + 0x3ab0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x39f0);
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
    uVar3 = *(ulong *)(param_1 + 0x39f0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x3930);
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
    uVar3 = *(ulong *)(param_1 + 0x3930);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x3870);
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
    uVar3 = *(ulong *)(param_1 + 0x3870);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x37b0);
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
    uVar3 = *(ulong *)(param_1 + 0x37b0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x36f0);
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
    uVar3 = *(ulong *)(param_1 + 0x36f0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x3630);
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
    uVar3 = *(ulong *)(param_1 + 0x3630);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x3570);
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
    uVar3 = *(ulong *)(param_1 + 0x3570);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x34b0);
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
    uVar3 = *(ulong *)(param_1 + 0x34b0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x33f0);
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
    uVar3 = *(ulong *)(param_1 + 0x33f0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x3330);
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
    uVar3 = *(ulong *)(param_1 + 0x3330);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x3270);
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
    uVar3 = *(ulong *)(param_1 + 0x3270);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x31b0);
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
    uVar3 = *(ulong *)(param_1 + 0x31b0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x30f0);
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
    uVar3 = *(ulong *)(param_1 + 0x30f0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x3030);
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
    uVar3 = *(ulong *)(param_1 + 0x3030);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x2f70);
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
    uVar3 = *(ulong *)(param_1 + 0x2f70);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x2eb0);
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
    uVar3 = *(ulong *)(param_1 + 0x2eb0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x2df0);
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
    uVar3 = *(ulong *)(param_1 + 0x2df0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x2d30);
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
    uVar3 = *(ulong *)(param_1 + 0x2d30);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x2c70);
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
    uVar3 = *(ulong *)(param_1 + 0x2c70);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x2bb0);
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
    uVar3 = *(ulong *)(param_1 + 0x2bb0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x2af0);
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
    uVar3 = *(ulong *)(param_1 + 0x2af0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x2a30);
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
    uVar3 = *(ulong *)(param_1 + 0x2a30);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x2970);
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
    uVar3 = *(ulong *)(param_1 + 0x2970);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x28b0);
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
    uVar3 = *(ulong *)(param_1 + 0x28b0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x27f0);
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
    uVar3 = *(ulong *)(param_1 + 0x27f0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x2730);
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
    uVar3 = *(ulong *)(param_1 + 0x2730);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x2670);
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
    uVar3 = *(ulong *)(param_1 + 0x2670);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x25b0);
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
    uVar3 = *(ulong *)(param_1 + 0x25b0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x24f0);
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
    uVar3 = *(ulong *)(param_1 + 0x24f0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x2430);
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
    uVar3 = *(ulong *)(param_1 + 0x2430);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x2370);
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
    uVar3 = *(ulong *)(param_1 + 0x2370);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x22b0);
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
    uVar3 = *(ulong *)(param_1 + 0x22b0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x21f0);
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
    uVar3 = *(ulong *)(param_1 + 0x21f0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x2130);
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
    uVar3 = *(ulong *)(param_1 + 0x2130);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x2070);
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
    uVar3 = *(ulong *)(param_1 + 0x2070);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x1fb0);
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
    uVar3 = *(ulong *)(param_1 + 0x1fb0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x1ef0);
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
    uVar3 = *(ulong *)(param_1 + 0x1ef0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x1e30);
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
    uVar3 = *(ulong *)(param_1 + 0x1e30);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x1d70);
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
    uVar3 = *(ulong *)(param_1 + 0x1d70);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x1cb0);
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
    uVar3 = *(ulong *)(param_1 + 0x1cb0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x1bf0);
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
    uVar3 = *(ulong *)(param_1 + 0x1bf0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x1b30);
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
    uVar3 = *(ulong *)(param_1 + 0x1b30);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x1a70);
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
    uVar3 = *(ulong *)(param_1 + 0x1a70);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x19b0);
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
    uVar3 = *(ulong *)(param_1 + 0x19b0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x18f0);
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
    uVar3 = *(ulong *)(param_1 + 0x18f0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x1830);
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
    uVar3 = *(ulong *)(param_1 + 0x1830);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 6000);
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
    uVar3 = *(ulong *)(param_1 + 6000);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x16b0);
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
    uVar3 = *(ulong *)(param_1 + 0x16b0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x15f0);
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
    uVar3 = *(ulong *)(param_1 + 0x15f0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x1530);
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
    uVar3 = *(ulong *)(param_1 + 0x1530);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x1470);
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
    uVar3 = *(ulong *)(param_1 + 0x1470);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x13b0);
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
    uVar3 = *(ulong *)(param_1 + 0x13b0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x12f0);
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
    uVar3 = *(ulong *)(param_1 + 0x12f0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x1230);
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
    uVar3 = *(ulong *)(param_1 + 0x1230);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x1170);
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
    uVar3 = *(ulong *)(param_1 + 0x1170);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x10b0);
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
    uVar3 = *(ulong *)(param_1 + 0x10b0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0xff0);
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
    uVar3 = *(ulong *)(param_1 + 0xff0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0xf30);
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
    uVar3 = *(ulong *)(param_1 + 0xf30);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0xe70);
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
    uVar3 = *(ulong *)(param_1 + 0xe70);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0xdb0);
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
    uVar3 = *(ulong *)(param_1 + 0xdb0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0xcf0);
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
    uVar3 = *(ulong *)(param_1 + 0xcf0);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0xc30);
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
    uVar3 = *(ulong *)(param_1 + 0xc30);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0xb70);
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
    uVar3 = *(ulong *)(param_1 + 0xb70);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0xab0);
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
    uVar3 = *(ulong *)(param_1 + 0xab0);
  }
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
                    /* WARNING: Could not recover jumptable at 0x01a43234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))
            (plVar2,(undefined8 *)(uVar3 - 0x11),(long)*(int *)(uVar3 - 9) + 0x10);
  return;
}


