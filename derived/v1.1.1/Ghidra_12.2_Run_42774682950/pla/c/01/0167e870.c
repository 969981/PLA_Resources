/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0167e870; name: FUN_0167e870
 */


void FUN_0167e870(undefined8 *param_1,int *param_2)

{
  ushort uVar1;
  bool bVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ushort *puVar8;
  ulong uVar9;
  ushort uVar10;
  int iVar11;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0xffffffffffffffff;
  param_1[3] = 0x3ffffffff;
  *(undefined4 *)(param_1 + 5) = 0x38a;
  *(undefined8 *)((long)param_1 + 0x2c) = 0xff000100000000;
  *(undefined4 *)((long)param_1 + 0x34) = 0xffffffff;
  *(undefined2 *)(param_1 + 7) = 0x1ff;
  *(undefined4 *)(param_1 + 0xc) = 0xffff;
  param_1[4] = 0xffffffffffffffff;
  *(undefined1 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x66) = 0xffff01000100;
  *(undefined4 *)((long)param_1 + 0x42) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x3a) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x46) = 0;
  *(undefined8 *)((long)param_1 + 0x4e) = 0;
  *(undefined8 *)((long)param_1 + 0x56) = 0;
  puVar8 = (ushort *)((long)param_2 - (long)*param_2);
  uVar1 = *puVar8;
  if (uVar1 < 5) {
    *(undefined4 *)(param_1 + 5) = 0;
LAB_0167ed4c:
    uVar6 = 0;
    *(undefined2 *)((long)param_1 + 0x2c) = 0;
  }
  else {
    uVar6 = 0;
    if ((ulong)puVar8[2] != 0) {
      uVar6 = *(undefined4 *)((long)param_2 + (ulong)puVar8[2]);
    }
    *(undefined4 *)(param_1 + 5) = uVar6;
    if (uVar1 < 7) goto LAB_0167ed4c;
    uVar10 = puVar8[3];
    if ((ulong)uVar10 != 0) {
      uVar10 = (ushort)*(undefined4 *)((long)param_2 + (ulong)uVar10);
    }
    *(ushort *)((long)param_1 + 0x2c) = uVar10;
    if ((uVar1 < 9) || ((ulong)puVar8[4] == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)((long)param_2 + (ulong)puVar8[4]);
    }
  }
  uVar5 = FUN_01096510(uVar6);
  *(undefined2 *)((long)param_1 + 0x32) = uVar5;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0xb) ||
     (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[5], uVar9 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)((long)param_2 + uVar9);
  }
  uVar7 = FUN_010964e0(uVar6);
  param_1[3] = uVar7;
  puVar8 = (ushort *)((long)param_2 - (long)*param_2);
  uVar1 = *puVar8;
  if (((uVar1 < 0xd) || ((ulong)puVar8[6] == 0)) ||
     (iVar11 = *(int *)((long)param_2 + (ulong)puVar8[6]), iVar11 < 1)) {
    uVar5 = 1;
  }
  else {
    if (99 < iVar11) {
      iVar11 = 100;
    }
    uVar5 = (undefined2)iVar11;
  }
  *(undefined2 *)(param_1 + 6) = uVar5;
  if ((uVar1 < 0xf) || ((ulong)puVar8[7] == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)((long)param_2 + (ulong)puVar8[7]);
  }
  uVar3 = FUN_01096550(uVar6);
  *(undefined1 *)(param_1 + 7) = uVar3;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x11) ||
     (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[8], uVar9 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)((long)param_2 + uVar9);
  }
  uVar5 = FUN_01096530(uVar6);
  *(undefined2 *)((long)param_1 + 0x34) = uVar5;
  puVar8 = (ushort *)((long)param_2 - (long)*param_2);
  uVar1 = *puVar8;
  if (uVar1 < 0x27) {
    bVar2 = false;
    uVar6 = 0;
    *(undefined1 *)((long)param_1 + 0x6c) = 0;
    if (uVar1 < 0x13) goto LAB_0167ea20;
LAB_0167ea14:
    uVar1 = puVar8[9];
  }
  else {
    if ((ulong)puVar8[0x13] != 0) {
      bVar2 = *(char *)((long)param_2 + (ulong)puVar8[0x13]) != '\0';
      *(bool *)((long)param_1 + 0x6c) = bVar2;
      goto LAB_0167ea14;
    }
    bVar2 = false;
    *(undefined1 *)((long)param_1 + 0x6c) = 0;
    uVar1 = puVar8[9];
  }
  if ((ulong)uVar1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)((long)param_2 + (ulong)uVar1);
  }
LAB_0167ea20:
  uVar5 = FUN_010965e0(uVar6,bVar2);
  *(undefined2 *)(param_1 + 0xd) = uVar5;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x15) ||
     (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[10], uVar9 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)((long)param_2 + uVar9);
  }
  uVar5 = FUN_01096610(uVar6,*(undefined1 *)((long)param_1 + 0x6c));
  *(undefined2 *)((long)param_1 + 0x66) = uVar5;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x39) ||
     (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x1c], uVar9 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)((long)param_2 + uVar9);
  }
  uVar5 = FUN_010965a0(uVar6);
  *(undefined2 *)((long)param_1 + 0x3a) = uVar5;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x3b) ||
     (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x1d], uVar9 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)((long)param_2 + uVar9);
  }
  uVar5 = FUN_010965a0(uVar6);
  *(undefined2 *)((long)param_1 + 0x3c) = uVar5;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x3d) ||
     (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x1e], uVar9 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)((long)param_2 + uVar9);
  }
  uVar5 = FUN_010965a0(uVar6);
  *(undefined2 *)((long)param_1 + 0x3e) = uVar5;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x3f) ||
     (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x1f], uVar9 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)((long)param_2 + uVar9);
  }
  uVar5 = FUN_010965a0(uVar6);
  *(undefined2 *)(param_1 + 8) = uVar5;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x41) ||
     (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x20], uVar9 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)((long)param_2 + uVar9);
  }
  uVar5 = FUN_010965a0(uVar6);
  *(undefined2 *)((long)param_1 + 0x42) = uVar5;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x43) ||
     (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x21], uVar9 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)((long)param_2 + uVar9);
  }
  uVar5 = FUN_010965a0(uVar6);
  *(undefined2 *)((long)param_1 + 0x44) = uVar5;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x45) ||
     (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x22], uVar9 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)((long)param_2 + uVar9);
  }
  uVar3 = FUN_010965d0(uVar6);
  *(undefined1 *)((long)param_1 + 100) = uVar3;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x47) ||
     (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x23], uVar9 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)((long)param_2 + uVar9);
  }
  uVar5 = FUN_01096580(uVar6);
  *(undefined2 *)((long)param_1 + 0x52) = uVar5;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x49) ||
     (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x24], uVar9 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)((long)param_2 + uVar9);
  }
  uVar5 = FUN_01096580(uVar6);
  *(undefined2 *)((long)param_1 + 0x54) = uVar5;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x4b) ||
     (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x25], uVar9 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)((long)param_2 + uVar9);
  }
  uVar5 = FUN_01096580(uVar6);
  *(undefined2 *)((long)param_1 + 0x56) = uVar5;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x4d) ||
     (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x26], uVar9 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)((long)param_2 + uVar9);
  }
  uVar5 = FUN_01096580(uVar6);
  *(undefined2 *)(param_1 + 0xb) = uVar5;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x4f) ||
     (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x27], uVar9 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)((long)param_2 + uVar9);
  }
  uVar5 = FUN_01096580(uVar6);
  *(undefined2 *)((long)param_1 + 0x5a) = uVar5;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x51) ||
     (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x28], uVar9 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)((long)param_2 + uVar9);
  }
  uVar5 = FUN_01096580(uVar6);
  *(undefined2 *)((long)param_1 + 0x5c) = uVar5;
  bVar4 = FUN_01090d40(*(undefined4 *)(param_1 + 5),*(undefined2 *)((long)param_1 + 0x2c));
  *(byte *)((long)param_1 + 0x6d) = bVar4 & 1;
  return;
}


