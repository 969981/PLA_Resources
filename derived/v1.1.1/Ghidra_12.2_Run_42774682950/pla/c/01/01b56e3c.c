/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b56e3c; name: FUN_01b56e3c
 */


void FUN_01b56e3c(undefined8 *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  bool bVar3;
  size_t sVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined4 uVar9;
  
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x59) ||
     (uVar5 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x2c], uVar5 == 0)) {
    lVar8 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_2 + uVar5);
    lVar8 = (long)puVar1 + (ulong)*puVar1;
  }
  puVar7 = &DAT_cbf29ce484222645;
  sVar4 = strlen((char *)(lVar8 + 4));
  bVar2 = *(byte *)(lVar8 + 4);
  if (bVar2 != 0) {
    pbVar6 = (byte *)(lVar8 + 5);
    do {
      puVar7 = (undefined1 *)(((ulong)puVar7 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar2 != 0);
  }
  param_1[3] = puVar7;
  param_1[4] = (char *)(lVar8 + 4);
  uVar9 = 0;
  param_1[5] = sVar4;
  param_1[6] = 0;
  if ((0x5a < *(ushort *)((long)param_2 - (long)*param_2)) &&
     (uVar5 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x2d], uVar5 != 0)) {
    uVar9 = *(undefined4 *)((long)param_2 + uVar5);
  }
  *(undefined4 *)(param_1 + 7) = uVar9;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x47) {
    bVar3 = false;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x23];
    bVar3 = false;
    if (uVar5 != 0) {
      bVar3 = *(char *)((long)param_2 + uVar5) != '\0';
    }
  }
  *(bool *)((long)param_1 + 0x3c) = bVar3;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x49) {
    uVar9 = 0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x24];
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = *(undefined4 *)((long)param_2 + uVar5);
    }
  }
  *(undefined4 *)param_1 = uVar9;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x4b) {
    uVar9 = 0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x25];
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = *(undefined4 *)((long)param_2 + uVar5);
    }
  }
  *(undefined4 *)((long)param_1 + 4) = uVar9;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x4d) {
    uVar9 = 0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x26];
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = *(undefined4 *)((long)param_2 + uVar5);
    }
  }
  *(undefined4 *)(param_1 + 1) = uVar9;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x4f) {
    uVar9 = 0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x27];
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = *(undefined4 *)((long)param_2 + uVar5);
    }
  }
  *(undefined4 *)((long)param_1 + 0xc) = uVar9;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x51) {
    bVar3 = false;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x28];
    bVar3 = false;
    if (uVar5 != 0) {
      bVar3 = *(char *)((long)param_2 + uVar5) != '\0';
    }
  }
  *(bool *)(param_1 + 2) = bVar3;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x53) {
    bVar3 = false;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x29];
    bVar3 = false;
    if (uVar5 != 0) {
      bVar3 = *(char *)((long)param_2 + uVar5) != '\0';
    }
  }
  *(bool *)((long)param_1 + 0x11) = bVar3;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x55) {
    bVar3 = false;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x2a];
    bVar3 = false;
    if (uVar5 != 0) {
      bVar3 = *(char *)((long)param_2 + uVar5) != '\0';
    }
  }
  *(bool *)((long)param_1 + 0x12) = bVar3;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x57) {
    bVar3 = false;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x2b];
    bVar3 = false;
    if (uVar5 != 0) {
      bVar3 = *(char *)((long)param_2 + uVar5) != '\0';
    }
  }
  *(bool *)((long)param_1 + 0x13) = bVar3;
  return;
}


