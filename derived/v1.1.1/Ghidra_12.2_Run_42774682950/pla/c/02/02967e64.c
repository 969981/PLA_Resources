/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02967e64; name: FUN_02967e64
 */


void FUN_02967e64(long param_1,uint param_2,uint param_3,uint param_4,uint param_5,long param_6,
                 uint *param_7)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  char cVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined1 uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined2 uVar13;
  undefined1 uVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;
  undefined2 uVar28;
  uint uVar29;
  long *plVar30;
  uint local_7ac;
  uint local_7a8;
  uint local_7a4;
  undefined1 auStack_780 [1088];
  code *local_340;
  undefined1 auStack_320 [680];
  uint local_78;
  ushort local_74 [2];
  uint local_70;
  uint auStack_6c [3];
  
  bVar2 = *(byte *)(param_6 + 0x2dc);
  uVar26 = (uint)bVar2;
  bVar10 = (*(byte *)(param_6 + 0x168) & 7) != 0;
  bVar3 = *(byte *)(param_6 + 0x2dd);
  uVar27 = (uint)bVar3;
  bVar11 = bVar3 != 0x12;
  bVar12 = bVar3 == 2;
  if (*(char *)(param_6 + 0x389) < '\0') {
    if (bVar2 != 0x12 && (bVar2 != 2 || !bVar10)) {
      if (bVar11 && (!bVar10 || !bVar12)) goto LAB_02967f10;
    }
    else {
      if (bVar11 && (!bVar10 || !bVar12)) goto LAB_02967f00;
      uVar26 = 0x12;
    }
LAB_02967f0c:
    uVar27 = uVar26;
    uVar26 = uVar27;
  }
  else if (bVar2 != 0x12 && (bVar2 != 2 || !bVar10)) {
    if (!bVar11 || bVar10 && bVar12) goto LAB_02967f0c;
  }
  else {
    uVar26 = 0;
    if (bVar11 && (!bVar10 || !bVar12)) {
      uVar26 = uVar27;
    }
    uVar27 = uVar26;
LAB_02967f00:
    uVar26 = uVar27;
  }
LAB_02967f10:
  bVar2 = *(byte *)(param_6 + 0x2de);
  plVar30 = &DAT_0428af30 + (ulong)param_2 * 6;
  lVar17 = *plVar30;
  if (lVar17 == 0) {
    plVar18 = &DAT_0428af30;
  }
  else {
    plVar18 = &DAT_0428af30;
    if (*(char *)(lVar17 + 0x1e1) != '\0') {
      plVar18 = plVar30;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar18 + 0x250) + (ulong)**(uint **)(*plVar18 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
     (uVar21 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar21 == 0)) {
    uVar29 = 0;
  }
  else {
    uVar29 = (uint)*(byte *)((long)piVar1 + uVar21);
  }
  plVar18 = &DAT_0428af30;
  if ((lVar17 != 0) && (plVar18 = &DAT_0428af30, *(char *)(lVar17 + 0x1e1) != '\0')) {
    plVar18 = plVar30;
  }
  piVar1 = (int *)((long)*(uint **)(*plVar18 + 0x250) + (ulong)**(uint **)(*plVar18 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x2f) ||
     (uVar21 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x17], uVar21 == 0)) {
    local_7a4 = 0;
  }
  else {
    local_7a4 = (uint)*(byte *)((long)piVar1 + uVar21);
  }
  plVar18 = &DAT_0428af30;
  if ((lVar17 != 0) && (plVar18 = &DAT_0428af30, *(char *)(lVar17 + 0x1e1) != '\0')) {
    plVar18 = plVar30;
  }
  piVar1 = (int *)((long)*(uint **)(*plVar18 + 0x250) + (ulong)**(uint **)(*plVar18 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x4b) ||
     (uVar21 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x25], uVar21 == 0)) {
    local_7a8 = 0;
  }
  else {
    local_7a8 = (uint)(*(char *)((long)piVar1 + uVar21) != '\0');
  }
  plVar18 = &DAT_0428af30;
  if ((lVar17 != 0) && (plVar18 = &DAT_0428af30, *(char *)(lVar17 + 0x1e1) != '\0')) {
    plVar18 = plVar30;
  }
  piVar1 = (int *)((long)*(uint **)(*plVar18 + 0x250) + (ulong)**(uint **)(*plVar18 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xd) ||
     (uVar21 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6], uVar21 == 0)) {
    local_7ac = 0;
  }
  else {
    local_7ac = (uint)*(byte *)((long)piVar1 + uVar21);
  }
  uVar4 = *(ushort *)(param_6 + 0x70);
  bVar3 = *(byte *)(param_6 + 0x369);
  plVar30 = *(long **)(*(long *)(param_1 + 8) + 0x1e8);
  if (plVar30 != (long *)0x0) {
    plVar18 = plVar30 + 10;
    do {
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar10) {
        *(int *)plVar18 = (int)*plVar18 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  FUN_009463f0(auStack_780,plVar30 + 0xc);
  local_70 = (uint)uVar4;
  local_74[0] = (ushort)bVar3;
  local_78 = param_4;
  auStack_6c[0] = param_2;
  uVar13 = (*local_340)(auStack_320,auStack_6c,&local_70,local_74,&local_78);
  FUN_00945e04(auStack_780);
  if (plVar30 != (long *)0x0) {
    plVar18 = plVar30 + 10;
    do {
      iVar15 = (int)*plVar18 + -1;
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar10) {
        *(int *)plVar18 = iVar15;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar15 == 0) {
      (**(code **)(*plVar30 + 0x10))(plVar30);
    }
  }
  lVar17 = *(long *)(param_1 + 0x10);
  lVar19 = *(long *)(lVar17 + 0x30);
  uVar22 = *(uint *)(lVar19 + 0xc08);
  if (uVar22 < 0x60) {
    do {
      lVar23 = *(long *)(lVar19 + (ulong)uVar22 * 0x20 + 8);
      if (*(short *)(lVar23 + 8) == 0) {
        if (uVar22 < 0x5f) {
          *(undefined2 *)(lVar23 + 8) = 1;
          *(int *)(lVar19 + 0xc08) = *(int *)(lVar19 + 0xc08) + 1;
        }
        break;
      }
      uVar22 = uVar22 + 1;
      *(uint *)(lVar19 + 0xc08) = uVar22;
    } while (uVar22 != 0x60);
  }
  lVar19 = *(long *)(lVar17 + 0x50);
  uVar22 = *(uint *)(lVar19 + 0x408);
  if (uVar22 < 0x1f) {
    *(uint *)(lVar19 + 0x408) = uVar22 + 1;
    lVar19 = *(long *)(lVar17 + 0x50);
    uVar22 = *(uint *)(lVar19 + 0x408);
  }
  *(undefined8 *)(lVar17 + 0x70) = *(undefined8 *)(lVar19 + (ulong)uVar22 * 0x20 + 8);
  lVar17 = *(long *)(param_1 + 0x10);
  lVar19 = *(long *)(lVar17 + 0x30);
  uVar20 = (ulong)*(uint *)(lVar19 + 0xc08);
  bVar3 = *(byte *)(param_6 + 0x7d);
  uVar21 = uVar20 << 5 | 8;
  uVar7 = uVar20;
  do {
    uVar25 = uVar7;
    if (0x5f < uVar25) goto LAB_02968240;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar21) + 8);
    if (sVar5 == 0) goto LAB_02968204;
    uVar21 = uVar21 + 0x20;
    uVar7 = uVar25 + 1;
  } while (sVar5 != 2);
  if ((int)(uVar25 + 1) - 1U < 0x60) {
LAB_02968204:
    lVar23 = *(long *)(lVar19 + (uVar25 & 0xffffffff) * 0x20 + 8);
    if (lVar23 != 0) {
      *(undefined2 *)(lVar23 + 8) = 2;
      *(uint *)(lVar23 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar23 + 10) = 4;
      *(undefined8 *)(lVar23 + 0x10) = 0;
      *(undefined8 *)(lVar23 + 0x18) = 0;
      *(long *)(*(long *)(lVar17 + 0x70) + 0x18) = lVar23;
      lVar17 = *(long *)(param_1 + 0x10);
      lVar19 = *(long *)(lVar17 + 0x30);
      uVar20 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_02968240:
  uVar21 = uVar20 << 5 | 8;
  lVar23 = 0;
  do {
    lVar24 = lVar23;
    if (0x5f < uVar20 + lVar24) goto LAB_029682c8;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar21) + 8);
    if (sVar5 == 0) goto LAB_02968288;
    uVar21 = uVar21 + 0x20;
    lVar23 = lVar24 + 1;
  } while (sVar5 != 0x12);
  if (((int)uVar20 + (int)(lVar24 + 1)) - 1U < 0x60) {
LAB_02968288:
    lVar23 = *(long *)(lVar19 + (ulong)(uint)((int)uVar20 + (int)lVar24) * 0x20 + 8);
    if (lVar23 != 0) {
      *(undefined2 *)(lVar23 + 8) = 0x12;
      *(undefined8 *)(lVar23 + 0x10) = 0;
      *(undefined8 *)(lVar23 + 0x18) = 0;
      *(uint *)(lVar23 + 0xc) = param_2;
      *(undefined1 *)(lVar23 + 10) = 4;
      *(long *)(*(long *)(lVar17 + 0x70) + 0x98) = lVar23;
      lVar17 = *(long *)(param_1 + 0x10);
      lVar19 = *(long *)(lVar17 + 0x30);
      uVar20 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_029682c8:
  uVar21 = uVar20 << 5 | 8;
  lVar23 = 0;
  do {
    lVar24 = lVar23;
    if (0x5f < uVar20 + lVar24) goto LAB_0296834c;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar21) + 8);
    if (sVar5 == 0) goto LAB_02968310;
    uVar21 = uVar21 + 0x20;
    lVar23 = lVar24 + 1;
  } while (sVar5 != 0x16);
  if (((int)uVar20 + (int)(lVar24 + 1)) - 1U < 0x60) {
LAB_02968310:
    lVar23 = *(long *)(lVar19 + (ulong)(uint)((int)uVar20 + (int)lVar24) * 0x20 + 8);
    if (lVar23 != 0) {
      *(undefined2 *)(lVar23 + 8) = 0x16;
      *(uint *)(lVar23 + 0xc) = uVar29;
      *(undefined1 *)(lVar23 + 10) = 1;
      *(undefined8 *)(lVar23 + 0x10) = 0;
      *(undefined8 *)(lVar23 + 0x18) = 0;
      *(long *)(*(long *)(lVar17 + 0x70) + 0xb8) = lVar23;
      lVar17 = *(long *)(param_1 + 0x10);
      lVar19 = *(long *)(lVar17 + 0x30);
      uVar20 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296834c:
  uVar21 = uVar20 << 5 | 8;
  lVar23 = 0;
  do {
    lVar24 = lVar23;
    if (0x5f < uVar20 + lVar24) goto LAB_029683cc;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar21) + 8);
    if (sVar5 == 0) goto LAB_02968394;
    uVar21 = uVar21 + 0x20;
    lVar23 = lVar24 + 1;
  } while (sVar5 != 0x1d);
  if (((int)uVar20 + (int)(lVar24 + 1)) - 1U < 0x60) {
LAB_02968394:
    lVar23 = *(long *)(lVar19 + (ulong)(uint)((int)uVar20 + (int)lVar24) * 0x20 + 8);
    if (lVar23 != 0) {
      *(undefined2 *)(lVar23 + 8) = 0x1d;
      *(uint *)(lVar23 + 0xc) = uVar26 & 0x1f | (uVar27 & 0x1f) << 5 | (bVar2 & 0x1f) << 10;
      *(undefined1 *)(lVar23 + 10) = 0;
      *(undefined8 *)(lVar23 + 0x10) = 0;
      *(undefined8 *)(lVar23 + 0x18) = 0;
      *(long *)(*(long *)(lVar17 + 0x70) + 0xf0) = lVar23;
      lVar17 = *(long *)(param_1 + 0x10);
      lVar19 = *(long *)(lVar17 + 0x30);
      uVar20 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_029683cc:
  uVar21 = uVar20 << 5 | 8;
  lVar23 = 0;
  do {
    lVar24 = lVar23;
    if (0x5f < uVar20 + lVar24) goto LAB_02968450;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar21) + 8);
    if (sVar5 == 0) goto LAB_02968414;
    uVar21 = uVar21 + 0x20;
    lVar23 = lVar24 + 1;
  } while (sVar5 != 0x1b);
  if (((int)uVar20 + (int)(lVar24 + 1)) - 1U < 0x60) {
LAB_02968414:
    lVar23 = *(long *)(lVar19 + (ulong)(uint)((int)uVar20 + (int)lVar24) * 0x20 + 8);
    if (lVar23 != 0) {
      *(undefined2 *)(lVar23 + 8) = 0x1b;
      *(undefined8 *)(lVar23 + 0x10) = 0;
      *(undefined8 *)(lVar23 + 0x18) = 0;
      *(uint *)(lVar23 + 0xc) = local_7ac;
      *(undefined1 *)(lVar23 + 10) = 0;
      *(long *)(*(long *)(lVar17 + 0x70) + 0xe0) = lVar23;
      lVar17 = *(long *)(param_1 + 0x10);
      lVar19 = *(long *)(lVar17 + 0x30);
      uVar20 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_02968450:
  uVar21 = uVar20 << 5 | 8;
  lVar23 = 0;
  do {
    lVar24 = lVar23;
    if (0x5f < uVar20 + lVar24) goto LAB_029684d4;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar21) + 8);
    if (sVar5 == 0) goto LAB_02968498;
    uVar21 = uVar21 + 0x20;
    lVar23 = lVar24 + 1;
  } while (sVar5 != 99);
  if (((int)uVar20 + (int)(lVar24 + 1)) - 1U < 0x60) {
LAB_02968498:
    lVar23 = *(long *)(lVar19 + (ulong)(uint)((int)uVar20 + (int)lVar24) * 0x20 + 8);
    if (lVar23 != 0) {
      *(undefined2 *)(lVar23 + 8) = 99;
      *(undefined8 *)(lVar23 + 0x10) = 0;
      *(undefined8 *)(lVar23 + 0x18) = 0;
      *(uint *)(lVar23 + 0xc) = local_7a8;
      *(undefined1 *)(lVar23 + 10) = 0;
      *(long *)(*(long *)(lVar17 + 0x70) + 800) = lVar23;
      lVar17 = *(long *)(param_1 + 0x10);
      lVar19 = *(long *)(lVar17 + 0x30);
      uVar20 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_029684d4:
  uVar21 = uVar20 << 5 | 8;
  lVar23 = 0;
  do {
    lVar24 = lVar23;
    if (0x5f < uVar20 + lVar24) goto LAB_02968558;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar21) + 8);
    if (sVar5 == 0) goto LAB_0296851c;
    uVar21 = uVar21 + 0x20;
    lVar23 = lVar24 + 1;
  } while (sVar5 != 0x1c);
  if (((int)uVar20 + (int)(lVar24 + 1)) - 1U < 0x60) {
LAB_0296851c:
    lVar23 = *(long *)(lVar19 + (ulong)(uint)((int)uVar20 + (int)lVar24) * 0x20 + 8);
    if (lVar23 != 0) {
      *(undefined2 *)(lVar23 + 8) = 0x1c;
      *(undefined8 *)(lVar23 + 0x10) = 0;
      *(undefined8 *)(lVar23 + 0x18) = 0;
      *(uint *)(lVar23 + 0xc) = local_7a4;
      *(undefined1 *)(lVar23 + 10) = 0;
      *(long *)(*(long *)(lVar17 + 0x70) + 0xe8) = lVar23;
      lVar17 = *(long *)(param_1 + 0x10);
      lVar19 = *(long *)(lVar17 + 0x30);
      uVar20 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_02968558:
  uVar21 = uVar20 << 5 | 8;
  lVar23 = 0;
  do {
    lVar24 = lVar23;
    if (0x5f < uVar20 + lVar24) goto LAB_029685dc;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar21) + 8);
    if (sVar5 == 0) goto LAB_029685a0;
    uVar21 = uVar21 + 0x20;
    lVar23 = lVar24 + 1;
  } while (sVar5 != 0x6d);
  if (((int)uVar20 + (int)(lVar24 + 1)) - 1U < 0x60) {
LAB_029685a0:
    lVar23 = *(long *)(lVar19 + (ulong)(uint)((int)uVar20 + (int)lVar24) * 0x20 + 8);
    if (lVar23 != 0) {
      *(undefined2 *)(lVar23 + 8) = 0x6d;
      *(undefined1 *)(lVar23 + 10) = 0;
      *(undefined8 *)(lVar23 + 0xc) = 0;
      *(undefined8 *)(lVar23 + 0x14) = 0;
      *(undefined4 *)(lVar23 + 0x1c) = 0;
      *(long *)(*(long *)(lVar17 + 0x70) + 0x370) = lVar23;
      lVar17 = *(long *)(param_1 + 0x10);
      lVar19 = *(long *)(lVar17 + 0x30);
      uVar20 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_029685dc:
  uVar21 = uVar20 << 5 | 8;
  lVar23 = 0;
  do {
    lVar24 = lVar23;
    if (0x5f < uVar20 + lVar24) goto LAB_02968664;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar21) + 8);
    if (sVar5 == 0) goto LAB_02968624;
    uVar21 = uVar21 + 0x20;
    lVar23 = lVar24 + 1;
  } while (sVar5 != 0x7a);
  if (((int)uVar20 + (int)(lVar24 + 1)) - 1U < 0x60) {
LAB_02968624:
    lVar23 = *(long *)(lVar19 + (ulong)(uint)((int)uVar20 + (int)lVar24) * 0x20 + 8);
    if (lVar23 != 0) {
      *(undefined2 *)(lVar23 + 8) = 0x7a;
      *(undefined8 *)(lVar23 + 0xc) = 0;
      *(undefined8 *)(lVar23 + 0x14) = 0;
      *(undefined4 *)(lVar23 + 0x1c) = 0;
      *(undefined1 *)(lVar23 + 10) = 1;
      *(long *)(*(long *)(lVar17 + 0x70) + 0x3d8) = lVar23;
      lVar17 = *(long *)(param_1 + 0x10);
      lVar19 = *(long *)(lVar17 + 0x30);
      uVar20 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_02968664:
  plVar30 = (long *)(lVar19 + uVar20 * 0x20 + 8);
  do {
    uVar21 = uVar20;
    if (0x5f < uVar21) goto LAB_029686d4;
    lVar23 = *plVar30;
    if (*(short *)(lVar23 + 8) == 0) goto LAB_029686a0;
    plVar30 = plVar30 + 4;
    uVar20 = uVar21 + 1;
  } while (*(short *)(lVar23 + 8) != 0x52);
  if ((int)(uVar21 + 1) - 1U < 0x60) {
LAB_029686a0:
    lVar19 = *(long *)(lVar19 + (uVar21 & 0xffffffff) * 0x20 + 8);
    if (lVar19 != 0) {
      *(undefined2 *)(lVar19 + 8) = 0x52;
      *(undefined8 *)(lVar19 + 0xc) = 0;
      *(undefined8 *)(lVar19 + 0x14) = 0;
      *(undefined4 *)(lVar19 + 0x1c) = 0;
      *(undefined1 *)(lVar19 + 10) = 1;
      *(long *)(*(long *)(lVar17 + 0x70) + 0x298) = lVar19;
    }
  }
LAB_029686d4:
  uVar21 = *(ulong *)(param_6 + 0x1c8);
  if ((uVar21 & 7) != 0) {
    switch((uint)uVar21 & 7) {
    case 1:
    case 2:
    case 3:
      uVar27 = (uint)(uVar21 >> 0xe);
      break;
    case 4:
      uVar27 = (uint)(uVar21 >> 0x14);
      break;
    default:
      uVar27 = 0;
    }
    lVar17 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x70) + 0xb8);
    if (((lVar17 != 0) && (*(byte *)(lVar17 + 10) < 2)) &&
       (*(uint *)(lVar17 + 0xc) = uVar27 & 0xffff, *(byte *)(lVar17 + 10) == 1)) {
      *(undefined1 *)(lVar17 + 10) = 2;
    }
  }
  lVar19 = *(long *)(param_1 + 0x10);
  iVar15 = *(int *)(lVar19 + 0x78) + 1;
  *(int *)(lVar19 + 0x78) = iVar15;
  lVar17 = *(long *)(*(long *)(*(long *)(lVar19 + 8) + 0x88) + 0x14c8);
  if (lVar17 != 0) {
    do {
      lVar23 = FUN_02999e6c(lVar19,0x2a,8,1,lVar17);
      if (lVar23 == 0) break;
      if ((*(byte *)(lVar23 + 0x3f) >> 5 & 1) == 0) {
        lVar23 = *(long *)(lVar17 + 0x18);
      }
      lVar17 = lVar23;
    } while (lVar23 != 0);
    iVar15 = *(int *)(lVar19 + 0x78);
  }
  *(int *)(lVar19 + 0x78) = iVar15 + -1;
  if (iVar15 + -1 == 0) {
    for (lVar17 = *(long *)(*(long *)(*(long *)(lVar19 + 8) + 0x88) + 0x14c8); lVar17 != 0;
        lVar17 = *(long *)(lVar17 + 0x18)) {
      *(uint *)(lVar17 + 0x3c) = (uint)*(ushort *)(lVar17 + 0x3e) << 0x10;
    }
  }
  lVar19 = *(long *)(param_1 + 0x10);
  lVar17 = *(long *)(*(long *)(lVar19 + 0x70) + 0xb8);
  if (lVar17 != 0) {
    *(undefined1 *)(lVar17 + 10) = 1;
    lVar19 = *(long *)(param_1 + 0x10);
  }
  iVar15 = *(int *)(lVar19 + 0x78) + 1;
  *(int *)(lVar19 + 0x78) = iVar15;
  lVar17 = *(long *)(*(long *)(*(long *)(lVar19 + 8) + 0x88) + 0x14c8);
  if (lVar17 != 0) {
    do {
      lVar23 = FUN_02999e6c(lVar19,0x2b,8,1,lVar17);
      if (lVar23 == 0) break;
      if ((*(byte *)(lVar23 + 0x3f) >> 5 & 1) == 0) {
        lVar23 = *(long *)(lVar17 + 0x18);
      }
      lVar17 = lVar23;
    } while (lVar23 != 0);
    iVar15 = *(int *)(lVar19 + 0x78);
  }
  *(int *)(lVar19 + 0x78) = iVar15 + -1;
  if (iVar15 + -1 == 0) {
    for (lVar17 = *(long *)(*(long *)(*(long *)(lVar19 + 8) + 0x88) + 0x14c8); lVar17 != 0;
        lVar17 = *(long *)(lVar17 + 0x18)) {
      *(uint *)(lVar17 + 0x3c) = (uint)*(ushort *)(lVar17 + 0x3e) << 0x10;
    }
  }
  lVar19 = *(long *)(param_1 + 0x10);
  lVar17 = *(long *)(lVar19 + 0x70);
  if (*(long *)(lVar17 + 0xb8) == 0) {
    uVar14 = 0;
    lVar23 = *(long *)(lVar17 + 0xf0);
    uVar9 = 0;
    if (lVar23 != 0) goto LAB_029688a8;
LAB_0296892c:
    uVar14 = uVar9;
    uVar28 = 0;
    lVar23 = *(long *)(lVar17 + 0xe0);
    uVar8 = 0;
    if (lVar23 != 0) goto LAB_029688b4;
LAB_02968938:
    uVar28 = uVar8;
    uVar27 = 0;
    lVar23 = *(long *)(lVar17 + 0xe8);
    if (lVar23 != 0) goto LAB_029688c0;
LAB_02968944:
    uVar26 = 0;
    lVar23 = *(long *)(lVar17 + 800);
    if (lVar23 != 0) goto LAB_029688cc;
LAB_02968950:
    bVar10 = false;
    lVar23 = *(long *)(lVar17 + 0x370);
    if (lVar23 != 0) goto LAB_029688e0;
LAB_0296895c:
    uVar29 = 0;
    lVar23 = *(long *)(lVar17 + 0x3d8);
    if (lVar23 != 0) goto LAB_029688f8;
LAB_02968968:
    uVar22 = 0;
    lVar17 = *(long *)(lVar17 + 0x298);
    if (lVar17 != 0) goto LAB_02968910;
LAB_02968974:
    bVar11 = true;
  }
  else {
    uVar14 = (undefined1)*(undefined4 *)(*(long *)(lVar17 + 0xb8) + 0xc);
    lVar23 = *(long *)(lVar17 + 0xf0);
    uVar9 = uVar14;
    if (lVar23 == 0) goto LAB_0296892c;
LAB_029688a8:
    uVar28 = (undefined2)*(undefined4 *)(lVar23 + 0xc);
    lVar23 = *(long *)(lVar17 + 0xe0);
    uVar8 = uVar28;
    if (lVar23 == 0) goto LAB_02968938;
LAB_029688b4:
    uVar27 = *(uint *)(lVar23 + 0xc);
    lVar23 = *(long *)(lVar17 + 0xe8);
    if (lVar23 == 0) goto LAB_02968944;
LAB_029688c0:
    uVar26 = *(uint *)(lVar23 + 0xc);
    lVar23 = *(long *)(lVar17 + 800);
    if (lVar23 == 0) goto LAB_02968950;
LAB_029688cc:
    bVar10 = *(int *)(lVar23 + 0xc) != 0;
    lVar23 = *(long *)(lVar17 + 0x370);
    if (lVar23 == 0) goto LAB_0296895c;
LAB_029688e0:
    uVar29 = (uint)(*(int *)(lVar23 + 0xc) != 0) << 2;
    lVar23 = *(long *)(lVar17 + 0x3d8);
    if (lVar23 == 0) goto LAB_02968968;
LAB_029688f8:
    uVar22 = (uint)(*(int *)(lVar23 + 0xc) != 0) << 3;
    lVar17 = *(long *)(lVar17 + 0x298);
    if (lVar17 == 0) goto LAB_02968974;
LAB_02968910:
    bVar11 = *(int *)(lVar17 + 0xc) == 0;
  }
  lVar17 = *(long *)(lVar19 + 0x50);
  if (*(uint *)(lVar17 + 0x408) == 0) {
    uVar21 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar17 + (ulong)*(uint *)(lVar17 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar17 + 0x408) = *(int *)(lVar17 + 0x408) + -1;
    lVar17 = *(long *)(lVar19 + 0x50);
    uVar21 = (ulong)*(uint *)(lVar17 + 0x408);
  }
  *(undefined8 *)(lVar19 + 0x70) = *(undefined8 *)(lVar17 + uVar21 * 0x20 + 8);
  lVar17 = *(long *)(lVar19 + 0x30);
  uVar16 = *(uint *)(lVar17 + 0xc08);
  if (uVar16 != 0) {
    if ((uVar16 & 0xffff) < 0x60) {
      uVar21 = (ulong)uVar16 & 0xffff;
      plVar30 = (long *)(lVar17 + uVar21 * 0x20 + 8);
      do {
        uVar21 = uVar21 + 1;
        if (*(short *)(*plVar30 + 8) == 0) break;
        *(undefined2 *)(*plVar30 + 8) = 0;
        plVar30 = plVar30 + 4;
      } while (((uint)uVar21 & 0xffff) != 0x60);
      uVar16 = *(uint *)(lVar17 + 0xc08);
    }
    *(uint *)(lVar17 + 0xc08) = uVar16 - 1;
    *(undefined2 *)(*(long *)(lVar17 + (ulong)(uVar16 - 1) * 0x20 + 8) + 8) = 0;
    uVar21 = (ulong)*(uint *)(lVar17 + 0xc08);
    do {
      if (uVar21 == 0) goto LAB_02968a78;
      uVar21 = uVar21 - 1;
      *(int *)(lVar17 + 0xc08) = (int)uVar21;
    } while (*(short *)(*(long *)(lVar17 + (uVar21 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar17 + 0xc08) = (int)uVar21 + 1;
  }
LAB_02968a78:
  *param_7 = param_2;
  param_7[1] = param_3;
  param_7[5] = uVar26;
  param_7[6] = param_5;
  *(undefined2 *)(param_7 + 7) = uVar13;
  *(undefined1 *)((long)param_7 + 10) = uVar14;
  *(undefined2 *)(param_7 + 2) = uVar28;
  param_7[3] = uVar27;
  *(bool *)(param_7 + 4) = bVar10;
  param_7[8] = param_4;
  param_7[9] = uVar22 | uVar29;
  if (!bVar11) {
    *(undefined1 *)((long)param_7 + 10) = 0x12;
  }
  if (param_2 == 0) {
LAB_02968b14:
    uVar14 = 0;
  }
  else {
    if (*(uint *)(param_6 + 0x300) == param_2) {
      lVar17 = 0;
    }
    else if (*(uint *)(param_6 + 0x31c) == param_2) {
      lVar17 = 1;
    }
    else if (*(uint *)(param_6 + 0x338) == param_2) {
      lVar17 = 2;
    }
    else {
      if (*(uint *)(param_6 + 0x354) != param_2) goto LAB_02968b14;
      lVar17 = 3;
    }
    uVar14 = *(undefined1 *)(param_6 + lVar17 * 0x1c + 0x30a);
  }
  *(undefined1 *)((long)param_7 + 0x1e) = uVar14;
  return;
}


