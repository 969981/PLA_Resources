/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0190548c; name: FUN_0190548c
 */


void FUN_0190548c(long param_1,long param_2)

{
  byte bVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar7 = (long *)(param_2 + 0x98);
  uVar3 = FUN_02c6849c(*plVar7);
  *(undefined4 *)(param_1 + 4) = uVar3;
  uVar2 = FUN_02c6f924(*plVar7);
  *(undefined2 *)(param_1 + 8) = uVar2;
  uVar3 = FUN_02c5fb2c(param_2);
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  if (*(long *)(*plVar7 + 8) == 0) {
    uVar4 = FUN_02c5e31c(param_2);
    uVar4 = uVar4 & 0xffff;
  }
  else {
    uVar4 = FUN_02c66b3c();
  }
  *(uint *)(param_1 + 0x28) = uVar4;
  if (*(long *)(*plVar7 + 8) == 0) {
    uVar4 = FUN_02c5e31c(param_2);
    uVar4 = uVar4 & 0xffff;
  }
  else {
    uVar4 = FUN_02c66e84();
  }
  *(uint *)(param_1 + 0x2c) = uVar4;
  uVar3 = FUN_02c667f4(*plVar7);
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  bVar1 = FUN_02c6d5b0(*plVar7);
  *(byte *)(param_1 + 0x34) = bVar1 & 1;
  uVar4 = FUN_02c6df60(*plVar7);
  uVar4 = uVar4 & 0xff;
  uVar6 = FUN_02c8b05c(*plVar7);
  if (((uVar6 & 1) == 0) && (uVar5 = FUN_02c6bbd4(*plVar7), uVar5 < 0x1f)) {
    if (uVar5 < 0x1a) {
      if (0x13 < uVar5) {
        uVar4 = uVar4 + 1;
      }
    }
    else {
      uVar4 = uVar4 + 2;
    }
  }
  else {
    uVar4 = uVar4 + 3;
  }
  if (9 < uVar4) {
    uVar4 = 10;
  }
  *(uint *)(param_1 + 0x10) = uVar4;
  uVar4 = FUN_02c6e298(*plVar7);
  uVar4 = uVar4 & 0xff;
  uVar5 = FUN_02c8b05c(*plVar7);
  if (((uVar5 >> 1 & 1) == 0) && (uVar5 = FUN_02c6bf10(*plVar7), uVar5 < 0x1f)) {
    if (uVar5 < 0x1a) {
      if (0x13 < uVar5) {
        uVar4 = uVar4 + 1;
      }
    }
    else {
      uVar4 = uVar4 + 2;
    }
  }
  else {
    uVar4 = uVar4 + 3;
  }
  if (9 < uVar4) {
    uVar4 = 10;
  }
  *(uint *)(param_1 + 0x14) = uVar4;
  uVar4 = FUN_02c6e5d0(*plVar7);
  uVar4 = uVar4 & 0xff;
  uVar5 = FUN_02c8b05c(*plVar7);
  if (((uVar5 >> 2 & 1) == 0) && (uVar5 = FUN_02c6c24c(*plVar7), uVar5 < 0x1f)) {
    if (uVar5 < 0x1a) {
      if (0x13 < uVar5) {
        uVar4 = uVar4 + 1;
      }
    }
    else {
      uVar4 = uVar4 + 2;
    }
  }
  else {
    uVar4 = uVar4 + 3;
  }
  if (9 < uVar4) {
    uVar4 = 10;
  }
  *(uint *)(param_1 + 0x18) = uVar4;
  uVar4 = FUN_02c6ec40(*plVar7);
  uVar4 = uVar4 & 0xff;
  uVar5 = FUN_02c8b05c(*plVar7);
  if (((uVar5 >> 3 & 1) == 0) && (uVar5 = FUN_02c6c588(*plVar7), uVar5 < 0x1f)) {
    if (uVar5 < 0x1a) {
      if (0x13 < uVar5) {
        uVar4 = uVar4 + 1;
      }
    }
    else {
      uVar4 = uVar4 + 2;
    }
  }
  else {
    uVar4 = uVar4 + 3;
  }
  if (9 < uVar4) {
    uVar4 = 10;
  }
  *(uint *)(param_1 + 0x1c) = uVar4;
  uVar4 = FUN_02c6ef78(*plVar7);
  uVar4 = uVar4 & 0xff;
  uVar5 = FUN_02c8b05c(*plVar7);
  if (((uVar5 >> 4 & 1) == 0) && (uVar5 = FUN_02c6c8c4(*plVar7), uVar5 < 0x1f)) {
    if (uVar5 < 0x1a) {
      if (0x13 < uVar5) {
        uVar4 = uVar4 + 1;
      }
    }
    else {
      uVar4 = uVar4 + 2;
    }
  }
  else {
    uVar4 = uVar4 + 3;
  }
  if (9 < uVar4) {
    uVar4 = 10;
  }
  *(uint *)(param_1 + 0x20) = uVar4;
  uVar4 = FUN_02c6e908(*plVar7);
  uVar4 = uVar4 & 0xff;
  uVar5 = FUN_02c8b05c(*plVar7);
  if (((uVar5 >> 5 & 1) == 0) && (uVar5 = FUN_02c6cc00(*plVar7), uVar5 < 0x1f)) {
    if (uVar5 < 0x1a) {
      if (0x13 < uVar5) {
        uVar4 = uVar4 + 1;
      }
    }
    else {
      uVar4 = uVar4 + 2;
    }
  }
  else {
    uVar4 = uVar4 + 3;
  }
  if (9 < uVar4) {
    uVar4 = 10;
  }
  *(uint *)(param_1 + 0x24) = uVar4;
  return;
}


