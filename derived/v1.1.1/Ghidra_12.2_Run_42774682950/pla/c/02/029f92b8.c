/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029f92b8; name: FUN_029f92b8
 */


void FUN_029f92b8(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined1 auStack_38 [8];
  undefined4 local_30 [2];
  undefined8 local_28;
  
  lVar2 = *(long *)(param_1 + 0x20);
  lVar3 = *(long *)(*(long *)(*(long *)(lVar2 + 0x20) + 0x10) + 0x28);
  if (((*(int *)(lVar3 + 0x1ac) == 0) ||
      (uVar4 = (uint)*(undefined8 *)(lVar3 + 0x20), uVar1 = uVar4 & 7, uVar4 = uVar4 >> 8 & 0x3f,
      uVar1 != 4 && uVar1 != 2 || uVar4 == 0)) ||
     (uVar1 = *(int *)(lVar3 + 0x6c) + 1, *(uint *)(lVar3 + 0x6c) = uVar1, uVar1 < uVar4)) {
    FUN_02a3e6b8(*(undefined8 *)(lVar2 + 0x18),0x41,1);
  }
  else {
    FUN_02a3e6b8(*(undefined8 *)(lVar2 + 0x18),0x41,1);
    local_28 = 0;
    local_30[0] = 1;
    FUN_029dc2a8(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x6a0),auStack_38,local_30);
  }
  lVar2 = *(long *)(param_1 + 0x20);
  lVar3 = *(long *)(*(long *)(*(long *)(lVar2 + 0x20) + 0x10) + 0x28);
  if (((*(int *)(lVar3 + 0x1b0) == 0) ||
      (uVar4 = (uint)*(undefined8 *)(lVar3 + 0x28), uVar1 = uVar4 & 7, uVar4 = uVar4 >> 8 & 0x3f,
      uVar1 != 4 && uVar1 != 2 || uVar4 == 0)) ||
     (uVar1 = *(int *)(lVar3 + 0x70) + 1, *(uint *)(lVar3 + 0x70) = uVar1, uVar1 < uVar4)) {
    FUN_02a3e6b8(*(undefined8 *)(lVar2 + 0x18),0x41,2);
  }
  else {
    FUN_02a3e6b8(*(undefined8 *)(lVar2 + 0x18),0x41,2);
    local_28 = 0;
    local_30[0] = 2;
    FUN_029dc2a8(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x6a0),auStack_38,local_30);
  }
  lVar2 = *(long *)(param_1 + 0x20);
  lVar3 = *(long *)(*(long *)(*(long *)(lVar2 + 0x20) + 0x10) + 0x28);
  if (((*(int *)(lVar3 + 0x1b4) == 0) ||
      (uVar4 = (uint)*(undefined8 *)(lVar3 + 0x30), uVar1 = uVar4 & 7, uVar4 = uVar4 >> 8 & 0x3f,
      uVar1 != 4 && uVar1 != 2 || uVar4 == 0)) ||
     (uVar1 = *(int *)(lVar3 + 0x74) + 1, *(uint *)(lVar3 + 0x74) = uVar1, uVar1 < uVar4)) {
    FUN_02a3e6b8(*(undefined8 *)(lVar2 + 0x18),0x41,3);
  }
  else {
    FUN_02a3e6b8(*(undefined8 *)(lVar2 + 0x18),0x41,3);
    local_28 = 0;
    local_30[0] = 3;
    FUN_029dc2a8(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x6a0),auStack_38,local_30);
  }
  lVar2 = *(long *)(param_1 + 0x20);
  lVar3 = *(long *)(*(long *)(*(long *)(lVar2 + 0x20) + 0x10) + 0x28);
  if (*(int *)(lVar3 + 0x1b8) == 0) {
LAB_029f9420:
    FUN_02a3e6b8(*(undefined8 *)(lVar2 + 0x18),0x41,4);
  }
  else {
    uVar4 = (uint)*(undefined8 *)(lVar3 + 0x38);
    uVar1 = uVar4 & 7;
    if ((((uVar1 != 4) && (uVar1 != 2)) || (uVar1 = uVar4 >> 8 & 0x3f, uVar1 == 0)) ||
       (uVar4 = *(int *)(lVar3 + 0x78) + 1, *(uint *)(lVar3 + 0x78) = uVar4, uVar4 < uVar1))
    goto LAB_029f9420;
    FUN_02a3e6b8(*(undefined8 *)(lVar2 + 0x18),0x41,4);
    local_28 = 0;
    local_30[0] = 4;
    FUN_029dc2a8(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x6a0),auStack_38,local_30);
  }
  lVar2 = *(long *)(param_1 + 0x20);
  lVar3 = *(long *)(*(long *)(*(long *)(lVar2 + 0x20) + 0x10) + 0x28);
  if (*(int *)(lVar3 + 0x1bc) == 0) {
LAB_029f947c:
    FUN_02a3e6b8(*(undefined8 *)(lVar2 + 0x18),0x41,5);
  }
  else {
    uVar4 = (uint)*(undefined8 *)(lVar3 + 0x40);
    uVar1 = uVar4 & 7;
    if (((uVar1 != 4) && (uVar1 != 2)) ||
       ((uVar1 = uVar4 >> 8 & 0x3f, uVar1 == 0 ||
        (uVar4 = *(int *)(lVar3 + 0x7c) + 1, *(uint *)(lVar3 + 0x7c) = uVar4, uVar4 < uVar1))))
    goto LAB_029f947c;
    FUN_02a3e6b8(*(undefined8 *)(lVar2 + 0x18),0x41,5);
    local_28 = 0;
    local_30[0] = 5;
    FUN_029dc2a8(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x6a0),auStack_38,local_30);
  }
  lVar2 = *(long *)(param_1 + 0x20);
  lVar3 = *(long *)(*(long *)(*(long *)(lVar2 + 0x20) + 0x10) + 0x28);
  if (*(int *)(lVar3 + 0x1c0) == 0) {
LAB_029f94d8:
    FUN_02a3e6b8(*(undefined8 *)(lVar2 + 0x18),0x41,6);
  }
  else {
    uVar4 = (uint)*(undefined8 *)(lVar3 + 0x48);
    uVar1 = uVar4 & 7;
    if (((uVar1 != 4) && (uVar1 != 2)) ||
       ((uVar1 = uVar4 >> 8 & 0x3f, uVar1 == 0 ||
        (uVar4 = *(int *)(lVar3 + 0x80) + 1, *(uint *)(lVar3 + 0x80) = uVar4, uVar4 < uVar1))))
    goto LAB_029f94d8;
    FUN_02a3e6b8(*(undefined8 *)(lVar2 + 0x18),0x41,6);
    local_28 = 0;
    local_30[0] = 6;
    FUN_029dc2a8(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x6a0),auStack_38,local_30);
  }
  lVar2 = *(long *)(param_1 + 0x20);
  lVar3 = *(long *)(*(long *)(*(long *)(lVar2 + 0x20) + 0x10) + 0x28);
  if (*(int *)(lVar3 + 0x1c4) == 0) {
LAB_029f9534:
    FUN_02a3e6b8(*(undefined8 *)(lVar2 + 0x18),0x41,7);
  }
  else {
    uVar4 = (uint)*(undefined8 *)(lVar3 + 0x50);
    uVar1 = uVar4 & 7;
    if ((((uVar1 != 4) && (uVar1 != 2)) || (uVar1 = uVar4 >> 8 & 0x3f, uVar1 == 0)) ||
       (uVar4 = *(int *)(lVar3 + 0x84) + 1, *(uint *)(lVar3 + 0x84) = uVar4, uVar4 < uVar1))
    goto LAB_029f9534;
    FUN_02a3e6b8(*(undefined8 *)(lVar2 + 0x18),0x41,7);
    local_28 = 0;
    local_30[0] = 7;
    FUN_029dc2a8(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x6a0),auStack_38,local_30);
  }
  lVar2 = *(long *)(param_1 + 0x20);
  lVar3 = *(long *)(*(long *)(*(long *)(lVar2 + 0x20) + 0x10) + 0x28);
  if (*(int *)(lVar3 + 0x1c8) != 0) {
    uVar4 = (uint)*(undefined8 *)(lVar3 + 0x58);
    uVar1 = uVar4 & 7;
    if (((uVar1 == 4) || (uVar1 == 2)) &&
       ((uVar1 = uVar4 >> 8 & 0x3f, uVar1 != 0 &&
        (uVar4 = *(int *)(lVar3 + 0x88) + 1, *(uint *)(lVar3 + 0x88) = uVar4, uVar1 <= uVar4)))) {
      FUN_02a3e6b8(*(undefined8 *)(lVar2 + 0x18),0x41,8);
      local_28 = 0;
      local_30[0] = 8;
      FUN_029dc2a8(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x6a0),auStack_38,local_30);
      goto LAB_029f95a0;
    }
  }
  FUN_02a3e6b8(*(undefined8 *)(lVar2 + 0x18),0x41,8);
LAB_029f95a0:
  lVar2 = *(long *)(param_1 + 0x20);
  lVar3 = *(long *)(*(long *)(*(long *)(lVar2 + 0x20) + 0x10) + 0x28);
  if (*(int *)(lVar3 + 0x1cc) != 0) {
    uVar4 = (uint)*(undefined8 *)(lVar3 + 0x60);
    uVar1 = uVar4 & 7;
    if (((uVar1 == 4) || (uVar1 == 2)) &&
       ((uVar1 = uVar4 >> 8 & 0x3f, uVar1 != 0 &&
        (uVar4 = *(int *)(lVar3 + 0x8c) + 1, *(uint *)(lVar3 + 0x8c) = uVar4, uVar1 <= uVar4)))) {
      FUN_02a3e6b8(*(undefined8 *)(lVar2 + 0x18),0x41,9);
      local_28 = 0;
      local_30[0] = 9;
      FUN_029dc2a8(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x6a0),auStack_38,local_30);
      return;
    }
  }
  FUN_02a3e6b8(*(undefined8 *)(lVar2 + 0x18),0x41,9);
  return;
}


