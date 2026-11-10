/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018e0fb4; name: FUN_018e0fb4
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_018e0fb4(long param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)*(byte *)(param_1 + 0x838);
  iVar4 = 0x10;
  if (*(byte *)(param_1 + 0x838) != 0) {
    uVar2 = *(uint *)(param_1 + 0x83c);
    uVar6 = 0;
    if (*(int *)(param_1 + 0x840) <= (int)uVar2) {
      uVar6 = uVar2;
    }
    iVar4 = 0x10;
    if (*(int *)(param_1 + 0x840) <= (int)uVar2) {
      iVar4 = 3;
    }
  }
  if ((*(char *)(param_1 + 0x848) == '\0') ||
     (uVar2 = *(uint *)(param_1 + 0x84c), (int)uVar2 < *(int *)(param_1 + 0x850))) {
    cVar3 = *(char *)(param_1 + 0x858);
    uVar1 = uVar6;
    iVar5 = iVar4;
  }
  else {
    uVar1 = uVar2;
    if (iVar4 == 0x10) {
      cVar3 = *(char *)(param_1 + 0x858);
      iVar5 = 4;
    }
    else {
      if ((int)uVar6 <= (int)uVar2) {
        uVar1 = uVar6;
      }
      iVar5 = 4;
      if ((int)uVar6 <= (int)uVar2) {
        iVar5 = iVar4;
      }
      cVar3 = *(char *)(param_1 + 0x858);
    }
  }
  if ((cVar3 == '\0') ||
     (uVar6 = *(uint *)(param_1 + 0x85c), (int)uVar6 < *(int *)(param_1 + 0x860))) {
    cVar3 = *(char *)(param_1 + 0x868);
    uVar6 = uVar1;
  }
  else if (iVar5 == 0x10) {
    iVar5 = 5;
    cVar3 = *(char *)(param_1 + 0x868);
  }
  else {
    uVar2 = uVar6;
    if ((int)uVar1 <= (int)uVar6) {
      uVar2 = uVar1;
    }
    iVar4 = 5;
    if ((int)uVar1 <= (int)uVar6) {
      iVar4 = iVar5;
    }
    cVar3 = *(char *)(param_1 + 0x868);
    iVar5 = iVar4;
    uVar6 = uVar2;
  }
  if ((cVar3 == '\0') ||
     (uVar2 = *(uint *)(param_1 + 0x86c), (int)uVar2 < *(int *)(param_1 + 0x870))) {
    cVar3 = *(char *)(param_1 + 0x878);
    uVar2 = uVar6;
  }
  else if (iVar5 == 0x10) {
    iVar5 = 6;
    cVar3 = *(char *)(param_1 + 0x878);
  }
  else {
    uVar1 = uVar2;
    if ((int)uVar6 <= (int)uVar2) {
      uVar1 = uVar6;
    }
    iVar4 = 6;
    if ((int)uVar6 <= (int)uVar2) {
      iVar4 = iVar5;
    }
    cVar3 = *(char *)(param_1 + 0x878);
    uVar2 = uVar1;
    iVar5 = iVar4;
  }
  if ((cVar3 == '\0') ||
     (uVar6 = *(uint *)(param_1 + 0x87c), (int)uVar6 < *(int *)(param_1 + 0x880))) {
    cVar3 = *(char *)(param_1 + 0x888);
  }
  else if (iVar5 == 0x10) {
    iVar5 = 7;
    cVar3 = *(char *)(param_1 + 0x888);
    uVar2 = uVar6;
  }
  else {
    uVar1 = uVar6;
    if ((int)uVar2 <= (int)uVar6) {
      uVar1 = uVar2;
    }
    iVar4 = 7;
    if ((int)uVar2 <= (int)uVar6) {
      iVar4 = iVar5;
    }
    cVar3 = *(char *)(param_1 + 0x888);
    iVar5 = iVar4;
    uVar2 = uVar1;
  }
  if ((cVar3 == '\0') ||
     (uVar6 = *(uint *)(param_1 + 0x88c), (int)uVar6 < *(int *)(param_1 + 0x890))) {
    cVar3 = *(char *)(param_1 + 0x898);
    uVar6 = uVar2;
  }
  else if (iVar5 == 0x10) {
    iVar5 = 8;
    cVar3 = *(char *)(param_1 + 0x898);
  }
  else {
    uVar1 = uVar6;
    if ((int)uVar2 <= (int)uVar6) {
      uVar1 = uVar2;
    }
    iVar4 = 8;
    if ((int)uVar2 <= (int)uVar6) {
      iVar4 = iVar5;
    }
    cVar3 = *(char *)(param_1 + 0x898);
    uVar6 = uVar1;
    iVar5 = iVar4;
  }
  if ((cVar3 == '\0') ||
     (uVar2 = *(uint *)(param_1 + 0x89c), (int)uVar2 < *(int *)(param_1 + 0x8a0))) {
    cVar3 = *(char *)(param_1 + 0x8a8);
  }
  else if (iVar5 == 0x10) {
    iVar5 = 9;
    cVar3 = *(char *)(param_1 + 0x8a8);
    uVar6 = uVar2;
  }
  else {
    uVar1 = uVar2;
    if ((int)uVar6 <= (int)uVar2) {
      uVar1 = uVar6;
    }
    iVar4 = 9;
    if ((int)uVar6 <= (int)uVar2) {
      iVar4 = iVar5;
    }
    cVar3 = *(char *)(param_1 + 0x8a8);
    iVar5 = iVar4;
    uVar6 = uVar1;
  }
  if ((cVar3 == '\0') ||
     (uVar2 = *(uint *)(param_1 + 0x8ac), (int)uVar2 < *(int *)(param_1 + 0x8b0))) {
    cVar3 = *(char *)(param_1 + 0x8b8);
    uVar2 = uVar6;
  }
  else if (iVar5 == 0x10) {
    iVar5 = 10;
    cVar3 = *(char *)(param_1 + 0x8b8);
  }
  else {
    uVar1 = uVar2;
    if ((int)uVar6 <= (int)uVar2) {
      uVar1 = uVar6;
    }
    iVar4 = 10;
    if ((int)uVar6 <= (int)uVar2) {
      iVar4 = iVar5;
    }
    cVar3 = *(char *)(param_1 + 0x8b8);
    uVar2 = uVar1;
    iVar5 = iVar4;
  }
  if ((cVar3 == '\0') ||
     (uVar6 = *(uint *)(param_1 + 0x8bc), (int)uVar6 < *(int *)(param_1 + 0x8c0))) {
    cVar3 = *(char *)(param_1 + 0x8c8);
  }
  else if (iVar5 == 0x10) {
    iVar5 = 0xb;
    cVar3 = *(char *)(param_1 + 0x8c8);
    uVar2 = uVar6;
  }
  else {
    uVar1 = uVar6;
    if ((int)uVar2 <= (int)uVar6) {
      uVar1 = uVar2;
    }
    iVar4 = 0xb;
    if ((int)uVar2 <= (int)uVar6) {
      iVar4 = iVar5;
    }
    cVar3 = *(char *)(param_1 + 0x8c8);
    iVar5 = iVar4;
    uVar2 = uVar1;
  }
  if ((cVar3 == '\0') ||
     (uVar6 = *(uint *)(param_1 + 0x8cc), (int)uVar6 < *(int *)(param_1 + 0x8d0))) {
    cVar3 = *(char *)(param_1 + 0x8d8);
    uVar6 = uVar2;
  }
  else if (iVar5 == 0x10) {
    iVar5 = 0xc;
    cVar3 = *(char *)(param_1 + 0x8d8);
  }
  else {
    uVar1 = uVar6;
    if ((int)uVar2 <= (int)uVar6) {
      uVar1 = uVar2;
    }
    iVar4 = 0xc;
    if ((int)uVar2 <= (int)uVar6) {
      iVar4 = iVar5;
    }
    cVar3 = *(char *)(param_1 + 0x8d8);
    uVar6 = uVar1;
    iVar5 = iVar4;
  }
  if ((cVar3 == '\0') ||
     (uVar2 = *(uint *)(param_1 + 0x8dc), (int)uVar2 < *(int *)(param_1 + 0x8e0))) {
    cVar3 = *(char *)(param_1 + 0x8e8);
  }
  else if (iVar5 == 0x10) {
    cVar3 = *(char *)(param_1 + 0x8e8);
    uVar6 = uVar2;
    iVar5 = 0xd;
  }
  else {
    uVar1 = uVar2;
    if ((int)uVar6 <= (int)uVar2) {
      uVar1 = uVar6;
    }
    iVar4 = 0xd;
    if ((int)uVar6 <= (int)uVar2) {
      iVar4 = iVar5;
    }
    cVar3 = *(char *)(param_1 + 0x8e8);
    uVar6 = uVar1;
    iVar5 = iVar4;
  }
  if ((cVar3 == '\0') ||
     (uVar2 = *(uint *)(param_1 + 0x8ec), (int)uVar2 < *(int *)(param_1 + 0x8f0))) {
    cVar3 = *(char *)(param_1 + 0x8f8);
  }
  else if (iVar5 == 0x10) {
    cVar3 = *(char *)(param_1 + 0x8f8);
    uVar6 = uVar2;
    iVar5 = 0xe;
  }
  else {
    uVar1 = uVar2;
    if ((int)uVar6 <= (int)uVar2) {
      uVar1 = uVar6;
    }
    iVar4 = 0xe;
    if ((int)uVar6 <= (int)uVar2) {
      iVar4 = iVar5;
    }
    cVar3 = *(char *)(param_1 + 0x8f8);
    uVar6 = uVar1;
    iVar5 = iVar4;
  }
  if (cVar3 == '\0') {
    return iVar5;
  }
  if (*(int *)(param_1 + 0x8fc) < *(int *)(param_1 + 0x900)) {
    return iVar5;
  }
  iVar4 = 0xf;
  if ((iVar5 != 0x10) && (iVar4 = 0xf, (int)uVar6 <= *(int *)(param_1 + 0x8fc))) {
    iVar4 = iVar5;
  }
  return iVar4;
}


