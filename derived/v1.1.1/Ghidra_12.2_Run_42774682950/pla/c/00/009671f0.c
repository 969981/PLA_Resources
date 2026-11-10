/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009671f0; name: FUN_009671f0
 */


void FUN_009671f0(long *param_1,long param_2,long *param_3,uint param_4,byte param_5)

{
  long *plVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  char cVar8;
  ulong uVar9;
  long lVar10;
  
  if ((param_4 & 0xff) == 0x1f) {
    uVar7 = 0;
    goto LAB_009672a8;
  }
  lVar6 = FUN_00933eec(*(undefined8 *)(param_2 + 0xd0),param_4);
  bVar3 = *(byte *)(*(long *)(lVar6 + 0x70) + 0x7d);
  uVar4 = *(uint *)(*(long *)(*(long *)(*(long *)(param_2 + 0xd0) + 0x68) + 0x98) + 0x110);
  if (bVar3 < 6) {
    lVar10 = 0;
joined_r0x0096726c:
    if (uVar4 < 3) goto LAB_00967270;
LAB_0096725c:
    cVar8 = '\x02';
  }
  else {
    if (bVar3 < 0xc) {
      lVar10 = 2;
      goto joined_r0x0096726c;
    }
    if (bVar3 < 0x12) {
      lVar10 = 1;
    }
    else {
      if (0x17 < bVar3) {
        lVar10 = (ulong)(bVar3 < 0x1e) << 2;
        goto joined_r0x0096726c;
      }
      lVar10 = 3;
    }
    if (2 < uVar4) goto LAB_0096725c;
LAB_00967270:
    cVar8 = (&PTR_DAT_041c31e8)[(int)uVar4][lVar10];
  }
  uVar2 = *(undefined4 *)(lVar6 + 0xbc);
  *(bool *)((long)param_1 + 10) = bVar3 == param_5;
  uVar7 = 1;
  *param_1 = lVar6;
  *(bool *)(param_1 + 1) = cVar8 == '\0';
  *(char *)((long)param_1 + 9) = (char)uVar2;
LAB_009672a8:
  lVar6 = *param_3;
  bVar3 = *(byte *)(*(long *)(lVar6 + 0x70) + 0x7d);
  uVar4 = *(uint *)(*(long *)(*(long *)(*(long *)(param_2 + 0xd0) + 0x68) + 0x98) + 0x110);
  if (bVar3 < 6) {
    lVar10 = 0;
  }
  else if (bVar3 < 0xc) {
    lVar10 = 2;
  }
  else if (bVar3 < 0x12) {
    lVar10 = 1;
  }
  else if (bVar3 < 0x18) {
    lVar10 = 3;
  }
  else {
    lVar10 = (ulong)(bVar3 < 0x1e) << 2;
  }
  if (uVar4 < 3) {
    cVar8 = (&PTR_DAT_041c31e8)[(int)uVar4][lVar10];
  }
  else {
    cVar8 = '\x02';
  }
  uVar2 = *(undefined4 *)(lVar6 + 0xbc);
  plVar1 = param_1 + uVar7 * 2;
  *plVar1 = lVar6;
  *(bool *)(plVar1 + 1) = cVar8 == '\0';
  *(bool *)((long)plVar1 + 10) = bVar3 == param_5;
  *(char *)((long)plVar1 + 9) = (char)uVar2;
  lVar6 = param_3[1];
  bVar3 = *(byte *)(*(long *)(lVar6 + 0x70) + 0x7d);
  uVar4 = *(uint *)(*(long *)(*(long *)(*(long *)(param_2 + 0xd0) + 0x68) + 0x98) + 0x110);
  if (bVar3 < 6) {
    lVar10 = 0;
  }
  else if (bVar3 < 0xc) {
    lVar10 = 2;
  }
  else if (bVar3 < 0x12) {
    lVar10 = 1;
  }
  else if (bVar3 < 0x18) {
    lVar10 = 3;
  }
  else {
    lVar10 = (ulong)(bVar3 < 0x1e) << 2;
  }
  if (uVar4 < 3) {
    bVar5 = (&PTR_DAT_041c31e8)[(int)uVar4][lVar10] == '\0';
  }
  else {
    bVar5 = false;
  }
  uVar2 = *(undefined4 *)(lVar6 + 0xbc);
  plVar1 = param_1 + (uVar7 + 1) * 2;
  *plVar1 = lVar6;
  *(bool *)(plVar1 + 1) = bVar5;
  *(char *)((long)plVar1 + 9) = (char)uVar2;
  *(bool *)((long)plVar1 + 10) = bVar3 == param_5;
  lVar6 = param_3[2];
  bVar3 = *(byte *)(*(long *)(lVar6 + 0x70) + 0x7d);
  uVar4 = *(uint *)(*(long *)(*(long *)(*(long *)(param_2 + 0xd0) + 0x68) + 0x98) + 0x110);
  if (bVar3 < 6) {
    lVar10 = 0;
  }
  else if (bVar3 < 0xc) {
    lVar10 = 2;
  }
  else if (bVar3 < 0x12) {
    lVar10 = 1;
  }
  else if (bVar3 < 0x18) {
    lVar10 = 3;
  }
  else {
    lVar10 = (ulong)(bVar3 < 0x1e) << 2;
  }
  uVar9 = uVar7 | 2;
  if (uVar4 < 3) {
    bVar5 = (&PTR_DAT_041c31e8)[(int)uVar4][lVar10] == '\0';
  }
  else {
    bVar5 = false;
  }
  uVar2 = *(undefined4 *)(lVar6 + 0xbc);
  plVar1 = param_1 + uVar9 * 2;
  *plVar1 = lVar6;
  *(bool *)(plVar1 + 1) = bVar5;
  *(char *)((long)plVar1 + 9) = (char)uVar2;
  *(bool *)((long)plVar1 + 10) = bVar3 == param_5;
  lVar6 = param_3[3];
  bVar3 = *(byte *)(*(long *)(lVar6 + 0x70) + 0x7d);
  uVar4 = *(uint *)(*(long *)(*(long *)(*(long *)(param_2 + 0xd0) + 0x68) + 0x98) + 0x110);
  if (bVar3 < 6) {
    lVar10 = 0;
  }
  else if (bVar3 < 0xc) {
    lVar10 = 2;
  }
  else if (bVar3 < 0x12) {
    lVar10 = 1;
  }
  else if (bVar3 < 0x18) {
    lVar10 = 3;
  }
  else {
    lVar10 = (ulong)(bVar3 < 0x1e) << 2;
  }
  if (uVar4 < 3) {
    bVar5 = (&PTR_DAT_041c31e8)[(int)uVar4][lVar10] == '\0';
  }
  else {
    bVar5 = false;
  }
  uVar2 = *(undefined4 *)(lVar6 + 0xbc);
  plVar1 = param_1 + (uVar9 + 1) * 2;
  *plVar1 = lVar6;
  *(bool *)(plVar1 + 1) = bVar5;
  *(char *)((long)plVar1 + 9) = (char)uVar2;
  *(bool *)((long)plVar1 + 10) = bVar3 == param_5;
  lVar6 = param_3[4];
  bVar3 = *(byte *)(*(long *)(lVar6 + 0x70) + 0x7d);
  uVar4 = *(uint *)(*(long *)(*(long *)(*(long *)(param_2 + 0xd0) + 0x68) + 0x98) + 0x110);
  if (bVar3 < 6) {
    lVar10 = 0;
  }
  else if (bVar3 < 0xc) {
    lVar10 = 2;
  }
  else if (bVar3 < 0x12) {
    lVar10 = 1;
  }
  else if (bVar3 < 0x18) {
    lVar10 = 3;
  }
  else {
    lVar10 = (ulong)(bVar3 < 0x1e) << 2;
  }
  if (uVar4 < 3) {
    bVar5 = (&PTR_DAT_041c31e8)[(int)uVar4][lVar10] == '\0';
  }
  else {
    bVar5 = false;
  }
  uVar2 = *(undefined4 *)(lVar6 + 0xbc);
  plVar1 = param_1 + (uVar9 + 2) * 2;
  *plVar1 = lVar6;
  *(bool *)(plVar1 + 1) = bVar5;
  *(bool *)((long)plVar1 + 10) = bVar3 == param_5;
  *(char *)((long)plVar1 + 9) = (char)uVar2;
  if (uVar7 == 0) {
    lVar6 = param_3[5];
    bVar3 = *(byte *)(*(long *)(lVar6 + 0x70) + 0x7d);
    uVar4 = *(uint *)(*(long *)(*(long *)(*(long *)(param_2 + 0xd0) + 0x68) + 0x98) + 0x110);
    if (bVar3 < 6) {
      lVar10 = 0;
    }
    else if (bVar3 < 0xc) {
      lVar10 = 2;
    }
    else if (bVar3 < 0x12) {
      lVar10 = 1;
    }
    else if (bVar3 < 0x18) {
      lVar10 = 3;
    }
    else {
      lVar10 = (ulong)(bVar3 < 0x1e) << 2;
    }
    if (uVar4 < 3) {
      bVar5 = (&PTR_DAT_041c31e8)[(int)uVar4][lVar10] == '\0';
    }
    else {
      bVar5 = false;
    }
    uVar2 = *(undefined4 *)(lVar6 + 0xbc);
    param_1[10] = lVar6;
    *(bool *)(param_1 + 0xb) = bVar5;
    *(bool *)((long)param_1 + 0x5a) = bVar3 == param_5;
    *(char *)((long)param_1 + 0x59) = (char)uVar2;
  }
  return;
}


