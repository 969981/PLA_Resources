/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0296a628; name: FUN_0296a628
 */


bool FUN_0296a628(long param_1,long param_2,long param_3,uint *param_4,undefined4 param_5,
                 int param_6,uint param_7,uint param_8,byte param_9,char param_10,
                 undefined2 *param_11)

{
  long *plVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  undefined8 uVar11;
  char cVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  int iVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  char cVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  long *plVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  long *plVar35;
  float fVar36;
  uint local_770;
  uint uStack_76c;
  uint local_768;
  uint uStack_764;
  undefined4 local_760;
  undefined4 local_75c;
  int local_a8;
  int local_9c;
  int local_94;
  int local_84;
  int local_80;
  int local_7c;
  
  plVar31 = (long *)(param_1 + 0x10);
  lVar19 = *plVar31;
  lVar23 = *(long *)(lVar19 + 0x30);
  uVar32 = *(uint *)(lVar23 + 0xc08);
  if (uVar32 < 0x60) {
    do {
      lVar27 = *(long *)(lVar23 + (ulong)uVar32 * 0x20 + 8);
      if (*(short *)(lVar27 + 8) == 0) {
        if (uVar32 < 0x5f) {
          *(undefined2 *)(lVar27 + 8) = 1;
          *(int *)(lVar23 + 0xc08) = *(int *)(lVar23 + 0xc08) + 1;
        }
        break;
      }
      uVar32 = uVar32 + 1;
      *(uint *)(lVar23 + 0xc08) = uVar32;
    } while (uVar32 != 0x60);
  }
  lVar23 = *(long *)(lVar19 + 0x50);
  uVar32 = *(uint *)(lVar23 + 0x408);
  if (uVar32 < 0x1f) {
    *(uint *)(lVar23 + 0x408) = uVar32 + 1;
    lVar23 = *(long *)(lVar19 + 0x50);
    uVar32 = *(uint *)(lVar23 + 0x408);
  }
  *(undefined8 *)(lVar19 + 0x70) = *(undefined8 *)(lVar23 + (ulong)uVar32 * 0x20 + 8);
  lVar23 = *plVar31;
  lVar19 = *(long *)(lVar23 + 0x30);
  uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
  bVar3 = *(byte *)(param_3 + 0x7d);
  uVar20 = uVar24 << 5 | 8;
  uVar26 = uVar24;
  do {
    uVar29 = uVar26;
    if (0x5f < uVar29) goto LAB_0296a784;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296a748;
    uVar20 = uVar20 + 0x20;
    uVar26 = uVar29 + 1;
  } while (sVar5 != 2);
  if ((int)(uVar29 + 1) - 1U < 0x60) {
LAB_0296a748:
    lVar27 = *(long *)(lVar19 + (uVar29 & 0xffffffff) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 2;
      *(uint *)(lVar27 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar27 + 10) = 4;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x18) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296a784:
  uVar20 = uVar24 << 5 | 8;
  lVar27 = 0;
  do {
    lVar28 = lVar27;
    if (0x5f < uVar24 + lVar28) goto LAB_0296a80c;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296a7cc;
    uVar20 = uVar20 + 0x20;
    lVar27 = lVar28 + 1;
  } while (sVar5 != 0x60);
  if (((int)uVar24 + (int)(lVar28 + 1)) - 1U < 0x60) {
LAB_0296a7cc:
    lVar27 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar28) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 0x60;
      *(undefined8 *)(lVar27 + 0xc) = 0;
      *(undefined8 *)(lVar27 + 0x14) = 0;
      *(undefined4 *)(lVar27 + 0x1c) = 0;
      *(undefined1 *)(lVar27 + 10) = 1;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x308) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296a80c:
  plVar35 = (long *)(lVar19 + uVar24 * 0x20 + 8);
  do {
    uVar20 = uVar24;
    if (0x5f < uVar20) goto LAB_0296a888;
    lVar27 = *plVar35;
    if (*(short *)(lVar27 + 8) == 0) goto LAB_0296a850;
    plVar35 = plVar35 + 4;
    uVar24 = uVar20 + 1;
  } while (*(short *)(lVar27 + 8) != 0x76);
  if ((int)(uVar20 + 1) - 1U < 0x60) {
LAB_0296a850:
    lVar19 = *(long *)(lVar19 + (uVar20 & 0xffffffff) * 0x20 + 8);
    if (lVar19 != 0) {
      *(undefined2 *)(lVar19 + 8) = 0x76;
      *(undefined8 *)(lVar19 + 0xc) = 0;
      *(undefined8 *)(lVar19 + 0x14) = 0;
      *(undefined4 *)(lVar19 + 0x1c) = 0;
      *(undefined1 *)(lVar19 + 10) = 1;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x3b8) = lVar19;
      lVar23 = *plVar31;
    }
  }
LAB_0296a888:
  iVar13 = *(int *)(lVar23 + 0x78) + 1;
  *(int *)(lVar23 + 0x78) = iVar13;
  lVar19 = *(long *)(*(long *)(*(long *)(lVar23 + 8) + 0x88) + 0x14c8);
  if (lVar19 != 0) {
    do {
      lVar27 = FUN_02999e6c(lVar23,0x8d,8,1,lVar19);
      if (lVar27 == 0) break;
      if ((*(byte *)(lVar27 + 0x3f) >> 5 & 1) == 0) {
        lVar27 = *(long *)(lVar19 + 0x18);
      }
      lVar19 = lVar27;
    } while (lVar27 != 0);
    iVar13 = *(int *)(lVar23 + 0x78);
  }
  *(int *)(lVar23 + 0x78) = iVar13 + -1;
  if (iVar13 + -1 == 0) {
    for (lVar19 = *(long *)(*(long *)(*(long *)(lVar23 + 8) + 0x88) + 0x14c8); lVar19 != 0;
        lVar19 = *(long *)(lVar19 + 0x18)) {
      *(uint *)(lVar19 + 0x3c) = (uint)*(ushort *)(lVar19 + 0x3e) << 0x10;
    }
  }
  lVar23 = *plVar31;
  lVar19 = *(long *)(*(long *)(lVar23 + 0x70) + 0x308);
  if (lVar19 == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(lVar19 + 0xc);
  }
  lVar19 = *(long *)(lVar23 + 0x50);
  if (*(uint *)(lVar19 + 0x408) == 0) {
    uVar20 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar19 + (ulong)*(uint *)(lVar19 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar19 + 0x408) = *(int *)(lVar19 + 0x408) + -1;
    lVar19 = *(long *)(lVar23 + 0x50);
    uVar20 = (ulong)*(uint *)(lVar19 + 0x408);
  }
  *(undefined8 *)(lVar23 + 0x70) = *(undefined8 *)(lVar19 + uVar20 * 0x20 + 8);
  lVar19 = *(long *)(lVar23 + 0x30);
  uVar32 = *(uint *)(lVar19 + 0xc08);
  if (uVar32 != 0) {
    if ((uVar32 & 0xffff) < 0x60) {
      uVar20 = (ulong)uVar32 & 0xffff;
      plVar35 = (long *)(lVar19 + uVar20 * 0x20 + 8);
      do {
        uVar20 = uVar20 + 1;
        if (*(short *)(*plVar35 + 8) == 0) break;
        *(undefined2 *)(*plVar35 + 8) = 0;
        plVar35 = plVar35 + 4;
      } while (((uint)uVar20 & 0xffff) != 0x60);
      uVar32 = *(uint *)(lVar19 + 0xc08);
    }
    *(uint *)(lVar19 + 0xc08) = uVar32 - 1;
    *(undefined2 *)(*(long *)(lVar19 + (ulong)(uVar32 - 1) * 0x20 + 8) + 8) = 0;
    uVar20 = (ulong)*(uint *)(lVar19 + 0xc08);
    do {
      if (uVar20 == 0) goto LAB_0296aa1c;
      uVar20 = uVar20 - 1;
      *(int *)(lVar19 + 0xc08) = (int)uVar20;
    } while (*(short *)(*(long *)(lVar19 + (uVar20 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar19 + 0xc08) = (int)uVar20 + 1;
  }
LAB_0296aa1c:
  lVar19 = *plVar31;
  lVar23 = *(long *)(lVar19 + 0x30);
  uVar32 = *(uint *)(lVar23 + 0xc08);
  if (uVar32 < 0x60) {
    do {
      lVar27 = *(long *)(lVar23 + (ulong)uVar32 * 0x20 + 8);
      if (*(short *)(lVar27 + 8) == 0) {
        if (uVar32 < 0x5f) {
          *(undefined2 *)(lVar27 + 8) = 1;
          *(int *)(lVar23 + 0xc08) = *(int *)(lVar23 + 0xc08) + 1;
        }
        break;
      }
      uVar32 = uVar32 + 1;
      *(uint *)(lVar23 + 0xc08) = uVar32;
    } while (uVar32 != 0x60);
  }
  lVar23 = *(long *)(lVar19 + 0x50);
  uVar32 = *(uint *)(lVar23 + 0x408);
  if (uVar32 < 0x1f) {
    *(uint *)(lVar23 + 0x408) = uVar32 + 1;
    lVar23 = *(long *)(lVar19 + 0x50);
    uVar32 = *(uint *)(lVar23 + 0x408);
  }
  *(undefined8 *)(lVar19 + 0x70) = *(undefined8 *)(lVar23 + (ulong)uVar32 * 0x20 + 8);
  lVar23 = *plVar31;
  lVar19 = *(long *)(lVar23 + 0x30);
  uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
  uVar20 = uVar24 << 5 | 8;
  uVar26 = uVar24;
  do {
    uVar29 = uVar26;
    if (0x5f < uVar29) goto LAB_0296ab30;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296aaf0;
    uVar20 = uVar20 + 0x20;
    uVar26 = uVar29 + 1;
  } while (sVar5 != 0x3d);
  if ((int)(uVar29 + 1) - 1U < 0x60) {
LAB_0296aaf0:
    lVar27 = *(long *)(lVar19 + (uVar29 & 0xffffffff) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 0x3d;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(undefined4 *)(lVar27 + 0xc) = param_5;
      *(undefined1 *)(lVar27 + 10) = 4;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x1f0) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296ab30:
  bVar3 = *(byte *)(param_2 + 0x7d);
  uVar20 = uVar24 << 5 | 8;
  lVar27 = 0;
  do {
    lVar28 = lVar27;
    if (0x5f < uVar24 + lVar28) goto LAB_0296abb8;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296ab7c;
    uVar20 = uVar20 + 0x20;
    lVar27 = lVar28 + 1;
  } while (sVar5 != 3);
  if (((int)uVar24 + (int)(lVar28 + 1)) - 1U < 0x60) {
LAB_0296ab7c:
    lVar27 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar28) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 3;
      *(uint *)(lVar27 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar27 + 10) = 4;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x20) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296abb8:
  bVar3 = *(byte *)(param_3 + 0x7d);
  uVar20 = uVar24 << 5 | 8;
  lVar27 = 0;
  do {
    lVar28 = lVar27;
    if (0x5f < uVar24 + lVar28) goto LAB_0296ac3c;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296ac04;
    uVar20 = uVar20 + 0x20;
    lVar27 = lVar28 + 1;
  } while (sVar5 != 4);
  if (((int)uVar24 + (int)(lVar28 + 1)) - 1U < 0x60) {
LAB_0296ac04:
    lVar27 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar28) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 4;
      *(uint *)(lVar27 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar27 + 10) = 4;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x28) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296ac3c:
  uVar20 = uVar24 << 5 | 8;
  lVar27 = 0;
  do {
    lVar28 = lVar27;
    if (0x5f < uVar24 + lVar28) goto LAB_0296acc8;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296ac8c;
    uVar20 = uVar20 + 0x20;
    lVar27 = lVar28 + 1;
  } while (sVar5 != 0x4c);
  if (((int)uVar24 + (int)(lVar28 + 1)) - 1U < 0x60) {
LAB_0296ac8c:
    lVar27 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar28) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 0x4c;
      *(uint *)(lVar27 + 0xc) = param_7 & 1;
      *(undefined1 *)(lVar27 + 10) = 4;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x268) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296acc8:
  bVar3 = *(byte *)((long)param_4 + 10);
  uVar20 = uVar24 << 5 | 8;
  lVar27 = 0;
  do {
    lVar28 = lVar27;
    if (0x5f < uVar24 + lVar28) goto LAB_0296ad50;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296ad14;
    uVar20 = uVar20 + 0x20;
    lVar27 = lVar28 + 1;
  } while (sVar5 != 0x16);
  if (((int)uVar24 + (int)(lVar28 + 1)) - 1U < 0x60) {
LAB_0296ad14:
    lVar27 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar28) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 0x16;
      *(uint *)(lVar27 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar27 + 10) = 4;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0xb8) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296ad50:
  uVar32 = *param_4;
  uVar20 = uVar24 << 5 | 8;
  lVar27 = 0;
  do {
    lVar28 = lVar27;
    if (0x5f < uVar24 + lVar28) goto LAB_0296add8;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296ad9c;
    uVar20 = uVar20 + 0x20;
    lVar27 = lVar28 + 1;
  } while (sVar5 != 0x12);
  if (((int)uVar24 + (int)(lVar28 + 1)) - 1U < 0x60) {
LAB_0296ad9c:
    lVar27 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar28) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 0x12;
      *(uint *)(lVar27 + 0xc) = uVar32;
      *(undefined1 *)(lVar27 + 10) = 4;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x98) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296add8:
  uVar32 = param_4[4];
  uVar20 = uVar24 << 5 | 8;
  lVar27 = 0;
  do {
    lVar28 = lVar27;
    if (0x5f < uVar24 + lVar28) goto LAB_0296ae60;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296ae24;
    uVar20 = uVar20 + 0x20;
    lVar27 = lVar28 + 1;
  } while (sVar5 != 99);
  if (((int)uVar24 + (int)(lVar28 + 1)) - 1U < 0x60) {
LAB_0296ae24:
    lVar27 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar28) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 99;
      *(uint *)(lVar27 + 0xc) = (uint)(byte)uVar32;
      *(undefined1 *)(lVar27 + 10) = 4;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 800) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296ae60:
  uVar32 = param_4[3];
  uVar20 = uVar24 << 5 | 8;
  lVar27 = 0;
  do {
    lVar28 = lVar27;
    if (0x5f < uVar24 + lVar28) goto LAB_0296aee8;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296aeac;
    uVar20 = uVar20 + 0x20;
    lVar27 = lVar28 + 1;
  } while (sVar5 != 0x1b);
  if (((int)uVar24 + (int)(lVar28 + 1)) - 1U < 0x60) {
LAB_0296aeac:
    lVar27 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar28) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 0x1b;
      *(uint *)(lVar27 + 0xc) = uVar32;
      *(undefined1 *)(lVar27 + 10) = 4;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0xe0) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296aee8:
  uVar32 = param_4[6];
  uVar20 = uVar24 << 5 | 8;
  lVar27 = 0;
  do {
    lVar28 = lVar27;
    if (0x5f < uVar24 + lVar28) goto LAB_0296af70;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296af34;
    uVar20 = uVar20 + 0x20;
    lVar27 = lVar28 + 1;
  } while (sVar5 != 0x19);
  if (((int)uVar24 + (int)(lVar28 + 1)) - 1U < 0x60) {
LAB_0296af34:
    lVar27 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar28) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 0x19;
      *(uint *)(lVar27 + 0xc) = uVar32;
      *(undefined1 *)(lVar27 + 10) = 4;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0xd0) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296af70:
  uVar20 = uVar24 << 5 | 8;
  lVar27 = 0;
  do {
    lVar28 = lVar27;
    if (0x5f < uVar24 + lVar28) goto LAB_0296aff8;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296afbc;
    uVar20 = uVar20 + 0x20;
    lVar27 = lVar28 + 1;
  } while (sVar5 != 0x4d);
  if (((int)uVar24 + (int)(lVar28 + 1)) - 1U < 0x60) {
LAB_0296afbc:
    lVar27 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar28) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 0x4d;
      *(uint *)(lVar27 + 0xc) = param_9 & 1;
      *(undefined1 *)(lVar27 + 10) = 4;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x270) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296aff8:
  uVar20 = uVar24 << 5 | 8;
  lVar27 = 0;
  do {
    lVar28 = lVar27;
    if (0x5f < uVar24 + lVar28) goto LAB_0296b084;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296b048;
    uVar20 = uVar20 + 0x20;
    lVar27 = lVar28 + 1;
  } while (sVar5 != 0x60);
  if (((int)uVar24 + (int)(lVar28 + 1)) - 1U < 0x60) {
LAB_0296b048:
    lVar27 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar28) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 0x60;
      *(uint *)(lVar27 + 0xc) = (uint)(iVar13 != 0);
      *(undefined1 *)(lVar27 + 10) = 4;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x308) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296b084:
  uVar20 = uVar24 << 5 | 8;
  lVar27 = 0;
  do {
    lVar28 = lVar27;
    if (0x5f < uVar24 + lVar28) goto LAB_0296b108;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296b0cc;
    uVar20 = uVar20 + 0x20;
    lVar27 = lVar28 + 1;
  } while (sVar5 != 0x3a);
  if (((int)uVar24 + (int)(lVar28 + 1)) - 1U < 0x60) {
LAB_0296b0cc:
    lVar27 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar28) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 0x3a;
      *(undefined1 *)(lVar27 + 10) = 0;
      *(undefined8 *)(lVar27 + 0xc) = 0;
      *(undefined8 *)(lVar27 + 0x14) = 0;
      *(undefined4 *)(lVar27 + 0x1c) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x1d8) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296b108:
  uVar20 = uVar24 << 5 | 8;
  lVar27 = 0;
  do {
    lVar28 = lVar27;
    if (0x5f < uVar24 + lVar28) goto LAB_0296b18c;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296b150;
    uVar20 = uVar20 + 0x20;
    lVar27 = lVar28 + 1;
  } while (sVar5 != 0x3b);
  if (((int)uVar24 + (int)(lVar28 + 1)) - 1U < 0x60) {
LAB_0296b150:
    lVar27 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar28) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 0x3b;
      *(undefined1 *)(lVar27 + 10) = 0;
      *(undefined8 *)(lVar27 + 0xc) = 0;
      *(undefined8 *)(lVar27 + 0x14) = 0;
      *(undefined4 *)(lVar27 + 0x1c) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x1e0) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296b18c:
  plVar35 = (long *)(lVar19 + uVar24 * 0x20 + 8);
  do {
    uVar20 = uVar24;
    if (0x5f < uVar20) goto LAB_0296b1fc;
    lVar27 = *plVar35;
    if (*(short *)(lVar27 + 8) == 0) goto LAB_0296b1c8;
    plVar35 = plVar35 + 4;
    uVar24 = uVar20 + 1;
  } while (*(short *)(lVar27 + 8) != 0x3c);
  if ((int)(uVar20 + 1) - 1U < 0x60) {
LAB_0296b1c8:
    lVar19 = *(long *)(lVar19 + (uVar20 & 0xffffffff) * 0x20 + 8);
    if (lVar19 != 0) {
      *(undefined2 *)(lVar19 + 8) = 0x3c;
      *(undefined1 *)(lVar19 + 10) = 0;
      *(undefined8 *)(lVar19 + 0xc) = 0;
      *(undefined8 *)(lVar19 + 0x14) = 0;
      *(undefined4 *)(lVar19 + 0x1c) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x1e8) = lVar19;
      lVar23 = *plVar31;
    }
  }
LAB_0296b1fc:
  iVar13 = *(int *)(lVar23 + 0x78) + 1;
  *(int *)(lVar23 + 0x78) = iVar13;
  lVar19 = *(long *)(*(long *)(*(long *)(lVar23 + 8) + 0x88) + 0x14c8);
  if (lVar19 != 0) {
    do {
      lVar27 = FUN_02999e6c(lVar23,0x5a,8,1,lVar19);
      if (lVar27 == 0) break;
      if ((*(byte *)(lVar27 + 0x3f) >> 5 & 1) == 0) {
        lVar27 = *(long *)(lVar19 + 0x18);
      }
      lVar19 = lVar27;
    } while (lVar27 != 0);
    iVar13 = *(int *)(lVar23 + 0x78);
  }
  *(int *)(lVar23 + 0x78) = iVar13 + -1;
  if (iVar13 + -1 == 0) {
    for (lVar19 = *(long *)(*(long *)(*(long *)(lVar23 + 8) + 0x88) + 0x14c8); lVar19 != 0;
        lVar19 = *(long *)(lVar19 + 0x18)) {
      *(uint *)(lVar19 + 0x3c) = (uint)*(ushort *)(lVar19 + 0x3e) << 0x10;
    }
  }
  lVar23 = *plVar31;
  iVar13 = *(int *)(lVar23 + 0x78) + 1;
  *(int *)(lVar23 + 0x78) = iVar13;
  lVar19 = *(long *)(*(long *)(*(long *)(lVar23 + 8) + 0x88) + 0x14c8);
  if (lVar19 != 0) {
    do {
      lVar27 = FUN_02999e6c(lVar23,0x5b,8,1,lVar19);
      if (lVar27 == 0) break;
      if ((*(byte *)(lVar27 + 0x3f) >> 5 & 1) == 0) {
        lVar27 = *(long *)(lVar19 + 0x18);
      }
      lVar19 = lVar27;
    } while (lVar27 != 0);
    iVar13 = *(int *)(lVar23 + 0x78);
  }
  *(int *)(lVar23 + 0x78) = iVar13 + -1;
  if (iVar13 + -1 == 0) {
    for (lVar19 = *(long *)(*(long *)(*(long *)(lVar23 + 8) + 0x88) + 0x14c8); lVar19 != 0;
        lVar19 = *(long *)(lVar19 + 0x18)) {
      *(uint *)(lVar19 + 0x3c) = (uint)*(ushort *)(lVar19 + 0x3e) << 0x10;
    }
  }
  lVar23 = *plVar31;
  lVar19 = *(long *)(lVar23 + 0x70);
  uVar32 = 0;
  if (*(long *)(lVar19 + 0x1d8) != 0) {
    uVar32 = *(uint *)(*(long *)(lVar19 + 0x1d8) + 0xc);
  }
  iVar13 = 0;
  if (*(long *)(lVar19 + 0x1e0) != 0) {
    iVar13 = *(int *)(*(long *)(lVar19 + 0x1e0) + 0xc);
  }
  iVar21 = 0;
  if (*(long *)(lVar19 + 0x1e8) != 0) {
    iVar21 = *(int *)(*(long *)(lVar19 + 0x1e8) + 0xc);
  }
  uVar33 = 0;
  if (iVar21 == 0) {
    uVar33 = uVar32;
  }
  if (iVar21 != 0 || iVar13 != 0) goto LAB_0296e470;
  lVar19 = *(long *)(lVar23 + 0x30);
  uVar32 = *(uint *)(lVar19 + 0xc08);
  uVar33 = param_4[7];
  if (uVar32 < 0x60) {
    do {
      lVar27 = *(long *)(lVar19 + (ulong)uVar32 * 0x20 + 8);
      if (*(short *)(lVar27 + 8) == 0) {
        if (uVar32 < 0x5f) {
          *(undefined2 *)(lVar27 + 8) = 1;
          *(int *)(lVar19 + 0xc08) = *(int *)(lVar19 + 0xc08) + 1;
        }
        break;
      }
      uVar32 = uVar32 + 1;
      *(uint *)(lVar19 + 0xc08) = uVar32;
    } while (uVar32 != 0x60);
  }
  lVar19 = *(long *)(lVar23 + 0x50);
  uVar32 = *(uint *)(lVar19 + 0x408);
  if (uVar32 < 0x1f) {
    *(uint *)(lVar19 + 0x408) = uVar32 + 1;
    lVar19 = *(long *)(lVar23 + 0x50);
    uVar32 = *(uint *)(lVar19 + 0x408);
  }
  *(undefined8 *)(lVar23 + 0x70) = *(undefined8 *)(lVar19 + (ulong)uVar32 * 0x20 + 8);
  lVar23 = *plVar31;
  lVar19 = *(long *)(lVar23 + 0x30);
  uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
  bVar3 = *(byte *)(param_2 + 0x7d);
  uVar20 = uVar24 << 5 | 8;
  uVar26 = uVar24;
  do {
    uVar29 = uVar26;
    if (0x5f < uVar29) goto LAB_0296b46c;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296b430;
    uVar20 = uVar20 + 0x20;
    uVar26 = uVar29 + 1;
  } while (sVar5 != 3);
  if ((int)(uVar29 + 1) - 1U < 0x60) {
LAB_0296b430:
    lVar27 = *(long *)(lVar19 + (uVar29 & 0xffffffff) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 3;
      *(uint *)(lVar27 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar27 + 10) = 4;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x20) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296b46c:
  bVar3 = *(byte *)(param_3 + 0x7d);
  uVar20 = uVar24 << 5 | 8;
  lVar27 = 0;
  do {
    lVar28 = lVar27;
    if (0x5f < uVar24 + lVar28) goto LAB_0296b4f0;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296b4b8;
    uVar20 = uVar20 + 0x20;
    lVar27 = lVar28 + 1;
  } while (sVar5 != 4);
  if (((int)uVar24 + (int)(lVar28 + 1)) - 1U < 0x60) {
LAB_0296b4b8:
    lVar27 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar28) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 4;
      *(uint *)(lVar27 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar27 + 10) = 4;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x28) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296b4f0:
  uVar32 = *param_4;
  uVar20 = uVar24 << 5 | 8;
  lVar27 = 0;
  do {
    lVar28 = lVar27;
    if (0x5f < uVar24 + lVar28) goto LAB_0296b578;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296b53c;
    uVar20 = uVar20 + 0x20;
    lVar27 = lVar28 + 1;
  } while (sVar5 != 0x12);
  if (((int)uVar24 + (int)(lVar28 + 1)) - 1U < 0x60) {
LAB_0296b53c:
    lVar27 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar28) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 0x12;
      *(uint *)(lVar27 + 0xc) = uVar32;
      *(undefined1 *)(lVar27 + 10) = 4;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x98) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296b578:
  bVar3 = *(byte *)((long)param_4 + 10);
  uVar20 = uVar24 << 5 | 8;
  lVar27 = 0;
  do {
    lVar28 = lVar27;
    if (0x5f < uVar24 + lVar28) goto LAB_0296b600;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296b5c4;
    uVar20 = uVar20 + 0x20;
    lVar27 = lVar28 + 1;
  } while (sVar5 != 0x16);
  if (((int)uVar24 + (int)(lVar28 + 1)) - 1U < 0x60) {
LAB_0296b5c4:
    lVar27 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar28) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 0x16;
      *(uint *)(lVar27 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar27 + 10) = 4;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0xb8) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296b600:
  uVar32 = param_4[3];
  uVar20 = uVar24 << 5 | 8;
  lVar27 = 0;
  do {
    lVar28 = lVar27;
    if (0x5f < uVar24 + lVar28) goto LAB_0296b688;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296b64c;
    uVar20 = uVar20 + 0x20;
    lVar27 = lVar28 + 1;
  } while (sVar5 != 0x1b);
  if (((int)uVar24 + (int)(lVar28 + 1)) - 1U < 0x60) {
LAB_0296b64c:
    lVar27 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar28) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 0x1b;
      *(uint *)(lVar27 + 0xc) = uVar32;
      *(undefined1 *)(lVar27 + 10) = 4;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0xe0) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296b688:
  uVar32 = param_4[8];
  uVar20 = uVar24 << 5 | 8;
  lVar27 = 0;
  do {
    lVar28 = lVar27;
    if (0x5f < uVar24 + lVar28) goto LAB_0296b710;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296b6d4;
    uVar20 = uVar20 + 0x20;
    lVar27 = lVar28 + 1;
  } while (sVar5 != 0x80);
  if (((int)uVar24 + (int)(lVar28 + 1)) - 1U < 0x60) {
LAB_0296b6d4:
    lVar27 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar28) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 0x80;
      *(uint *)(lVar27 + 0xc) = uVar32;
      *(undefined1 *)(lVar27 + 10) = 4;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x408) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296b710:
  uVar32 = param_4[4];
  uVar20 = uVar24 << 5 | 8;
  lVar27 = 0;
  do {
    lVar28 = lVar27;
    if (0x5f < uVar24 + lVar28) goto LAB_0296b798;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296b75c;
    uVar20 = uVar20 + 0x20;
    lVar27 = lVar28 + 1;
  } while (sVar5 != 99);
  if (((int)uVar24 + (int)(lVar28 + 1)) - 1U < 0x60) {
LAB_0296b75c:
    lVar27 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar28) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 99;
      *(uint *)(lVar27 + 0xc) = (uint)(byte)uVar32;
      *(undefined1 *)(lVar27 + 10) = 4;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 800) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296b798:
  uVar20 = uVar24 << 5 | 8;
  lVar27 = 0;
  do {
    lVar28 = lVar27;
    if (0x5f < uVar24 + lVar28) goto LAB_0296b820;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296b7e0;
    uVar20 = uVar20 + 0x20;
    lVar27 = lVar28 + 1;
  } while (sVar5 != 0x5d);
  if (((int)uVar24 + (int)(lVar28 + 1)) - 1U < 0x60) {
LAB_0296b7e0:
    lVar27 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar28) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 0x5d;
      *(undefined8 *)(lVar27 + 0xc) = 0;
      *(undefined8 *)(lVar27 + 0x14) = 0;
      *(undefined4 *)(lVar27 + 0x1c) = 0;
      *(undefined1 *)(lVar27 + 10) = 1;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x2f0) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296b820:
  uVar20 = uVar24 << 5 | 8;
  lVar27 = 0;
  do {
    lVar28 = lVar27;
    if (0x5f < uVar24 + lVar28) goto LAB_0296b8a8;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296b868;
    uVar20 = uVar20 + 0x20;
    lVar27 = lVar28 + 1;
  } while (sVar5 != 0x5e);
  if (((int)uVar24 + (int)(lVar28 + 1)) - 1U < 0x60) {
LAB_0296b868:
    lVar27 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar28) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 0x5e;
      *(undefined8 *)(lVar27 + 0xc) = 0;
      *(undefined8 *)(lVar27 + 0x14) = 0;
      *(undefined4 *)(lVar27 + 0x1c) = 0;
      *(undefined1 *)(lVar27 + 10) = 1;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x2f8) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296b8a8:
  plVar35 = (long *)(lVar19 + uVar24 * 0x20 + 8);
  do {
    uVar20 = uVar24;
    if (0x5f < uVar20) goto LAB_0296b91c;
    lVar27 = *plVar35;
    if (*(short *)(lVar27 + 8) == 0) goto LAB_0296b8e8;
    plVar35 = plVar35 + 4;
    uVar24 = uVar20 + 1;
  } while (*(short *)(lVar27 + 8) != 0x33);
  if ((int)(uVar20 + 1) - 1U < 0x60) {
LAB_0296b8e8:
    lVar19 = *(long *)(lVar19 + (uVar20 & 0xffffffff) * 0x20 + 8);
    if (lVar19 != 0) {
      *(uint *)(lVar19 + 0xc) = (uint)(ushort)uVar33;
      *(undefined2 *)(lVar19 + 8) = 0x33;
      *(undefined1 *)(lVar19 + 10) = 1;
      *(undefined8 *)(lVar19 + 0x10) = 0;
      *(undefined8 *)(lVar19 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x1a0) = lVar19;
      lVar23 = *plVar31;
    }
  }
LAB_0296b91c:
  iVar17 = *(int *)(lVar23 + 0x78) + 1;
  *(int *)(lVar23 + 0x78) = iVar17;
  lVar19 = *(long *)(*(long *)(*(long *)(lVar23 + 8) + 0x88) + 0x14c8);
  if (lVar19 != 0) {
    do {
      lVar27 = FUN_02999e6c(lVar23,0x47,8,1,lVar19);
      if (lVar27 == 0) break;
      if ((*(byte *)(lVar27 + 0x3f) >> 5 & 1) == 0) {
        lVar27 = *(long *)(lVar19 + 0x18);
      }
      lVar19 = lVar27;
    } while (lVar27 != 0);
    iVar17 = *(int *)(lVar23 + 0x78);
  }
  *(int *)(lVar23 + 0x78) = iVar17 + -1;
  if (iVar17 + -1 == 0) {
    for (lVar19 = *(long *)(*(long *)(*(long *)(lVar23 + 8) + 0x88) + 0x14c8); lVar19 != 0;
        lVar19 = *(long *)(lVar19 + 0x18)) {
      *(uint *)(lVar19 + 0x3c) = (uint)*(ushort *)(lVar19 + 0x3e) << 0x10;
    }
  }
  lVar23 = *plVar31;
  lVar19 = *(long *)(lVar23 + 0x30);
  plVar35 = (long *)(lVar19 + (ulong)*(uint *)(lVar19 + 0xc08) * 0x20 + 8);
  uVar20 = (ulong)*(uint *)(lVar19 + 0xc08);
  do {
    uVar24 = uVar20;
    if (0x5f < uVar24) goto LAB_0296ba34;
    lVar27 = *plVar35;
    if (*(short *)(lVar27 + 8) == 0) goto LAB_0296b9f0;
    plVar35 = plVar35 + 4;
    uVar20 = uVar24 + 1;
  } while (*(short *)(lVar27 + 8) != 0x34);
  if ((int)(uVar24 + 1) - 1U < 0x60) {
LAB_0296b9f0:
    lVar19 = *(long *)(lVar19 + (uVar24 & 0xffffffff) * 0x20 + 8);
    if (lVar19 != 0) {
      *(undefined2 *)(lVar19 + 8) = 0x34;
      *(undefined8 *)(lVar19 + 0xc) = 0x2900001000;
      *(undefined4 *)(lVar19 + 0x14) = 0x200000;
      *(undefined8 *)(lVar19 + 0x18) = 0;
      *(undefined1 *)(lVar19 + 10) = 3;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x1a8) = lVar19;
      lVar23 = *plVar31;
    }
  }
LAB_0296ba34:
  iVar17 = *(int *)(lVar23 + 0x78) + 1;
  *(int *)(lVar23 + 0x78) = iVar17;
  lVar19 = *(long *)(*(long *)(*(long *)(lVar23 + 8) + 0x88) + 0x14c8);
  if (lVar19 != 0) {
    do {
      lVar27 = FUN_02999e6c(lVar23,0x48,8,1,lVar19);
      if (lVar27 == 0) break;
      if ((*(byte *)(lVar27 + 0x3f) >> 5 & 1) == 0) {
        lVar27 = *(long *)(lVar19 + 0x18);
      }
      lVar19 = lVar27;
    } while (lVar27 != 0);
    iVar17 = *(int *)(lVar23 + 0x78);
  }
  *(int *)(lVar23 + 0x78) = iVar17 + -1;
  if (iVar17 + -1 == 0) {
    for (lVar19 = *(long *)(*(long *)(*(long *)(lVar23 + 8) + 0x88) + 0x14c8); lVar19 != 0;
        lVar19 = *(long *)(lVar19 + 0x18)) {
      *(uint *)(lVar19 + 0x3c) = (uint)*(ushort *)(lVar19 + 0x3e) << 0x10;
    }
  }
  lVar23 = *plVar31;
  lVar19 = *(long *)(lVar23 + 0x70);
  if (*(long *)(lVar19 + 0x1a0) == 0) {
    uVar32 = 0;
    lVar19 = *(long *)(lVar19 + 0x1a8);
    if (lVar19 == 0) goto LAB_0296baf0;
LAB_0296badc:
    iVar17 = *(int *)(lVar19 + 0xc);
  }
  else {
    uVar32 = (uint)*(ushort *)(*(long *)(lVar19 + 0x1a0) + 0xc);
    lVar19 = *(long *)(lVar19 + 0x1a8);
    if (lVar19 != 0) goto LAB_0296badc;
LAB_0296baf0:
    iVar17 = 0;
  }
  lVar19 = *(long *)(lVar23 + 0x50);
  if (*(uint *)(lVar19 + 0x408) == 0) {
    uVar20 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar19 + (ulong)*(uint *)(lVar19 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar19 + 0x408) = *(int *)(lVar19 + 0x408) + -1;
    lVar19 = *(long *)(lVar23 + 0x50);
    uVar20 = (ulong)*(uint *)(lVar19 + 0x408);
  }
  *(undefined8 *)(lVar23 + 0x70) = *(undefined8 *)(lVar19 + uVar20 * 0x20 + 8);
  lVar19 = *(long *)(lVar23 + 0x30);
  uVar33 = *(uint *)(lVar19 + 0xc08);
  if (uVar33 != 0) {
    if ((uVar33 & 0xffff) < 0x60) {
      uVar20 = (ulong)uVar33 & 0xffff;
      plVar35 = (long *)(lVar19 + uVar20 * 0x20 + 8);
      do {
        uVar20 = uVar20 + 1;
        if (*(short *)(*plVar35 + 8) == 0) break;
        *(undefined2 *)(*plVar35 + 8) = 0;
        plVar35 = plVar35 + 4;
      } while (((uint)uVar20 & 0xffff) != 0x60);
      uVar33 = *(uint *)(lVar19 + 0xc08);
    }
    *(uint *)(lVar19 + 0xc08) = uVar33 - 1;
    *(undefined2 *)(*(long *)(lVar19 + (ulong)(uVar33 - 1) * 0x20 + 8) + 8) = 0;
    uVar20 = (ulong)*(uint *)(lVar19 + 0xc08);
    do {
      if (uVar20 == 0) goto LAB_0296bbd8;
      uVar20 = uVar20 - 1;
      *(int *)(lVar19 + 0xc08) = (int)uVar20;
    } while (*(short *)(*(long *)(lVar19 + (uVar20 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar19 + 0xc08) = (int)uVar20 + 1;
  }
LAB_0296bbd8:
  uVar33 = iVar17 * uVar32 >> 0xc;
  if (0x800 < (iVar17 * uVar32 & 0xfff)) {
    uVar33 = uVar33 + 1;
  }
  if ((((((*(byte *)(param_3 + 0x98) & 7) != 0) || ((*(byte *)(param_3 + 0xa0) & 7) != 0)) ||
       ((*(byte *)(param_3 + 0xa8) & 7) != 0)) ||
      (((*(byte *)(param_3 + 0xb0) & 7) != 0 || ((*(byte *)(param_3 + 0xb8) & 7) != 0)))) ||
     (((*(byte *)(param_3 + 0xc0) & 7) != 0 || ((*(byte *)(param_3 + 200) & 7) != 0)))) {
    lVar19 = (&DAT_0428af30)[(ulong)*param_4 * 6];
    if (lVar19 == 0) {
      plVar35 = &DAT_0428af30;
    }
    else {
      plVar35 = &DAT_0428af30;
      if (*(char *)(lVar19 + 0x1e1) != '\0') {
        plVar35 = &DAT_0428af30 + (ulong)*param_4 * 6;
      }
    }
    piVar2 = (int *)((long)*(uint **)(*plVar35 + 0x250) + (ulong)**(uint **)(*plVar35 + 0x250));
    if (((0x8a < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
        (uVar20 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x45], uVar20 != 0)) &&
       (iVar17 = *(int *)((long)piVar2 + uVar20), iVar17 != 0)) {
      uVar33 = (iVar17 * (uVar33 & 0xffff)) / 100;
    }
  }
  lVar19 = *plVar31;
  lVar23 = *(long *)(lVar19 + 0x30);
  uVar32 = *(uint *)(lVar23 + 0xc08);
  if (uVar32 < 0x60) {
    do {
      lVar27 = *(long *)(lVar23 + (ulong)uVar32 * 0x20 + 8);
      if (*(short *)(lVar27 + 8) == 0) {
        if (uVar32 < 0x5f) {
          *(undefined2 *)(lVar27 + 8) = 1;
          *(int *)(lVar23 + 0xc08) = *(int *)(lVar23 + 0xc08) + 1;
        }
        break;
      }
      uVar32 = uVar32 + 1;
      *(uint *)(lVar23 + 0xc08) = uVar32;
    } while (uVar32 != 0x60);
  }
  lVar23 = *(long *)(lVar19 + 0x50);
  uVar32 = *(uint *)(lVar23 + 0x408);
  if (uVar32 < 0x1f) {
    *(uint *)(lVar23 + 0x408) = uVar32 + 1;
    lVar23 = *(long *)(lVar19 + 0x50);
    uVar32 = *(uint *)(lVar23 + 0x408);
  }
  *(undefined8 *)(lVar19 + 0x70) = *(undefined8 *)(lVar23 + (ulong)uVar32 * 0x20 + 8);
  lVar23 = *plVar31;
  lVar19 = *(long *)(lVar23 + 0x30);
  uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
  bVar3 = *(byte *)(param_2 + 0x7d);
  uVar20 = uVar24 << 5 | 8;
  uVar26 = uVar24;
  do {
    uVar29 = uVar26;
    if (0x5f < uVar29) goto LAB_0296bdd4;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296bd98;
    uVar20 = uVar20 + 0x20;
    uVar26 = uVar29 + 1;
  } while (sVar5 != 3);
  if ((int)(uVar29 + 1) - 1U < 0x60) {
LAB_0296bd98:
    lVar27 = *(long *)(lVar19 + (uVar29 & 0xffffffff) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 3;
      *(uint *)(lVar27 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar27 + 10) = 4;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x20) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296bdd4:
  bVar3 = *(byte *)(param_3 + 0x7d);
  uVar20 = uVar24 << 5 | 8;
  lVar27 = 0;
  do {
    lVar28 = lVar27;
    if (0x5f < uVar24 + lVar28) goto LAB_0296be58;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296be20;
    uVar20 = uVar20 + 0x20;
    lVar27 = lVar28 + 1;
  } while (sVar5 != 4);
  if (((int)uVar24 + (int)(lVar28 + 1)) - 1U < 0x60) {
LAB_0296be20:
    lVar27 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar28) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 4;
      *(uint *)(lVar27 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar27 + 10) = 4;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x28) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296be58:
  uVar20 = uVar24 << 5 | 8;
  lVar27 = 0;
  do {
    lVar28 = lVar27;
    if (0x5f < uVar24 + lVar28) goto LAB_0296bedc;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296bea0;
    uVar20 = uVar20 + 0x20;
    lVar27 = lVar28 + 1;
  } while (sVar5 != 0x40);
  if (((int)uVar24 + (int)(lVar28 + 1)) - 1U < 0x60) {
LAB_0296bea0:
    lVar27 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar28) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 0x40;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(undefined4 *)(lVar27 + 0xc) = 0x1f;
      *(undefined1 *)(lVar27 + 10) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x208) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296bedc:
  plVar35 = (long *)(lVar19 + uVar24 * 0x20 + 8);
  do {
    uVar20 = uVar24;
    if (0x5f < uVar20) goto LAB_0296bf4c;
    lVar27 = *plVar35;
    if (*(short *)(lVar27 + 8) == 0) goto LAB_0296bf18;
    plVar35 = plVar35 + 4;
    uVar24 = uVar20 + 1;
  } while (*(short *)(lVar27 + 8) != 0x59);
  if ((int)(uVar20 + 1) - 1U < 0x60) {
LAB_0296bf18:
    lVar19 = *(long *)(lVar19 + (uVar20 & 0xffffffff) * 0x20 + 8);
    if (lVar19 != 0) {
      *(undefined2 *)(lVar19 + 8) = 0x59;
      *(undefined1 *)(lVar19 + 10) = 0;
      *(undefined8 *)(lVar19 + 0xc) = 0;
      *(undefined8 *)(lVar19 + 0x14) = 0;
      *(undefined4 *)(lVar19 + 0x1c) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x2d0) = lVar19;
      lVar23 = *plVar31;
    }
  }
LAB_0296bf4c:
  iVar17 = *(int *)(lVar23 + 0x78) + 1;
  *(int *)(lVar23 + 0x78) = iVar17;
  lVar19 = *(long *)(*(long *)(*(long *)(lVar23 + 8) + 0x88) + 0x14c8);
  if (lVar19 != 0) {
    do {
      lVar27 = FUN_02999e6c(lVar23,0x49,8,1,lVar19);
      if (lVar27 == 0) break;
      if ((*(byte *)(lVar27 + 0x3f) >> 5 & 1) == 0) {
        lVar27 = *(long *)(lVar19 + 0x18);
      }
      lVar19 = lVar27;
    } while (lVar27 != 0);
    iVar17 = *(int *)(lVar23 + 0x78);
  }
  *(int *)(lVar23 + 0x78) = iVar17 + -1;
  if (iVar17 + -1 == 0) {
    for (lVar19 = *(long *)(*(long *)(*(long *)(lVar23 + 8) + 0x88) + 0x14c8); lVar19 != 0;
        lVar19 = *(long *)(lVar19 + 0x18)) {
      *(uint *)(lVar19 + 0x3c) = (uint)*(ushort *)(lVar19 + 0x3e) << 0x10;
    }
  }
  lVar23 = *plVar31;
  lVar19 = *(long *)(lVar23 + 0x70);
  if (*(long *)(lVar19 + 0x2d0) == 0) {
    iVar17 = 0;
    lVar19 = *(long *)(lVar19 + 0x208);
    uVar20 = 0;
    if (lVar19 != 0) goto LAB_0296c004;
LAB_0296c014:
    lVar27 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + uVar20 * 8 + 0x120);
  }
  else {
    iVar17 = *(int *)(*(long *)(lVar19 + 0x2d0) + 0xc);
    lVar19 = *(long *)(lVar19 + 0x208);
    if (lVar19 == 0) {
      uVar20 = 0;
      goto LAB_0296c014;
    }
LAB_0296c004:
    uVar20 = (ulong)*(byte *)(lVar19 + 0xc);
    lVar27 = param_2;
    if (*(byte *)(lVar19 + 0xc) != 0x1f) goto LAB_0296c014;
  }
  uVar14 = 10;
  if (param_4[3] != 2) {
    uVar14 = 8;
  }
  if ((*(byte *)(lVar27 + 0x228) & 7) != 0) {
    uVar14 = *(undefined4 *)(&DAT_03888c24 + (ulong)(param_4[3] == 2) * 0x10);
  }
  lVar19 = *(long *)(lVar23 + 0x30);
  uVar32 = *(uint *)(lVar19 + 0xc08);
  if (uVar32 < 0x60) {
    do {
      lVar28 = *(long *)(lVar19 + (ulong)uVar32 * 0x20 + 8);
      if (*(short *)(lVar28 + 8) == 0) {
        if (uVar32 < 0x5f) {
          *(undefined2 *)(lVar28 + 8) = 1;
          *(int *)(lVar19 + 0xc08) = *(int *)(lVar19 + 0xc08) + 1;
        }
        break;
      }
      uVar32 = uVar32 + 1;
      *(uint *)(lVar19 + 0xc08) = uVar32;
    } while (uVar32 != 0x60);
  }
  lVar19 = *(long *)(lVar23 + 0x50);
  uVar32 = *(uint *)(lVar19 + 0x408);
  if (uVar32 < 0x1f) {
    *(uint *)(lVar19 + 0x408) = uVar32 + 1;
    lVar19 = *(long *)(lVar23 + 0x50);
    uVar32 = *(uint *)(lVar19 + 0x408);
  }
  *(undefined8 *)(lVar23 + 0x70) = *(undefined8 *)(lVar19 + (ulong)uVar32 * 0x20 + 8);
  lVar23 = *plVar31;
  lVar19 = *(long *)(lVar23 + 0x30);
  uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
  bVar3 = *(byte *)(lVar27 + 0x7d);
  uVar20 = uVar24 << 5 | 8;
  uVar26 = uVar24;
  do {
    uVar29 = uVar26;
    if (0x5f < uVar29) goto LAB_0296c178;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296c13c;
    uVar20 = uVar20 + 0x20;
    uVar26 = uVar29 + 1;
  } while (sVar5 != 3);
  if ((int)(uVar29 + 1) - 1U < 0x60) {
LAB_0296c13c:
    lVar28 = *(long *)(lVar19 + (uVar29 & 0xffffffff) * 0x20 + 8);
    if (lVar28 != 0) {
      *(undefined2 *)(lVar28 + 8) = 3;
      *(uint *)(lVar28 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar28 + 10) = 4;
      *(undefined8 *)(lVar28 + 0x10) = 0;
      *(undefined8 *)(lVar28 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x20) = lVar28;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296c178:
  uVar32 = *param_4;
  uVar20 = uVar24 << 5 | 8;
  lVar28 = 0;
  do {
    lVar30 = lVar28;
    if (0x5f < uVar24 + lVar30) goto LAB_0296c200;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296c1c4;
    uVar20 = uVar20 + 0x20;
    lVar28 = lVar30 + 1;
  } while (sVar5 != 0x12);
  if (((int)uVar24 + (int)(lVar30 + 1)) - 1U < 0x60) {
LAB_0296c1c4:
    lVar28 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar30) * 0x20 + 8);
    if (lVar28 != 0) {
      *(undefined2 *)(lVar28 + 8) = 0x12;
      *(uint *)(lVar28 + 0xc) = uVar32;
      *(undefined1 *)(lVar28 + 10) = 4;
      *(undefined8 *)(lVar28 + 0x10) = 0;
      *(undefined8 *)(lVar28 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x98) = lVar28;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296c200:
  plVar35 = (long *)(lVar19 + uVar24 * 0x20 + 8);
  do {
    uVar20 = uVar24;
    if (0x5f < uVar20) goto LAB_0296c274;
    lVar28 = *plVar35;
    if (*(short *)(lVar28 + 8) == 0) goto LAB_0296c240;
    plVar35 = plVar35 + 4;
    uVar24 = uVar20 + 1;
  } while (*(short *)(lVar28 + 8) != 0x41);
  if ((int)(uVar20 + 1) - 1U < 0x60) {
LAB_0296c240:
    lVar19 = *(long *)(lVar19 + (uVar20 & 0xffffffff) * 0x20 + 8);
    if (lVar19 != 0) {
      *(undefined4 *)(lVar19 + 0xc) = uVar14;
      *(undefined2 *)(lVar19 + 8) = 0x41;
      *(undefined1 *)(lVar19 + 10) = 1;
      *(undefined8 *)(lVar19 + 0x10) = 0;
      *(undefined8 *)(lVar19 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x210) = lVar19;
      lVar23 = *plVar31;
    }
  }
LAB_0296c274:
  iVar15 = *(int *)(lVar23 + 0x78) + 1;
  *(int *)(lVar23 + 0x78) = iVar15;
  lVar19 = *(long *)(*(long *)(*(long *)(lVar23 + 8) + 0x88) + 0x14c8);
  if (lVar19 != 0) {
    do {
      lVar28 = FUN_02999e6c(lVar23,0x4b,8,1,lVar19);
      if (lVar28 == 0) break;
      if ((*(byte *)(lVar28 + 0x3f) >> 5 & 1) == 0) {
        lVar28 = *(long *)(lVar19 + 0x18);
      }
      lVar19 = lVar28;
    } while (lVar28 != 0);
    iVar15 = *(int *)(lVar23 + 0x78);
  }
  *(int *)(lVar23 + 0x78) = iVar15 + -1;
  if (iVar15 + -1 == 0) {
    for (lVar19 = *(long *)(*(long *)(*(long *)(lVar23 + 8) + 0x88) + 0x14c8); lVar19 != 0;
        lVar19 = *(long *)(lVar19 + 0x18)) {
      *(uint *)(lVar19 + 0x3c) = (uint)*(ushort *)(lVar19 + 0x3e) << 0x10;
    }
  }
  lVar23 = *plVar31;
  lVar19 = *(long *)(*(long *)(lVar23 + 0x70) + 0x210);
  if (lVar19 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(undefined4 *)(lVar19 + 0xc);
  }
  lVar19 = *(long *)(lVar23 + 0x50);
  if (*(uint *)(lVar19 + 0x408) == 0) {
    uVar20 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar19 + (ulong)*(uint *)(lVar19 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar19 + 0x408) = *(int *)(lVar19 + 0x408) + -1;
    lVar19 = *(long *)(lVar23 + 0x50);
    uVar20 = (ulong)*(uint *)(lVar19 + 0x408);
  }
  *(undefined8 *)(lVar23 + 0x70) = *(undefined8 *)(lVar19 + uVar20 * 0x20 + 8);
  lVar19 = *(long *)(lVar23 + 0x30);
  uVar32 = *(uint *)(lVar19 + 0xc08);
  if (uVar32 != 0) {
    if ((uVar32 & 0xffff) < 0x60) {
      uVar20 = (ulong)uVar32 & 0xffff;
      plVar35 = (long *)(lVar19 + uVar20 * 0x20 + 8);
      do {
        uVar20 = uVar20 + 1;
        if (*(short *)(*plVar35 + 8) == 0) break;
        *(undefined2 *)(*plVar35 + 8) = 0;
        plVar35 = plVar35 + 4;
      } while (((uint)uVar20 & 0xffff) != 0x60);
      uVar32 = *(uint *)(lVar19 + 0xc08);
    }
    *(uint *)(lVar19 + 0xc08) = uVar32 - 1;
    *(undefined2 *)(*(long *)(lVar19 + (ulong)(uVar32 - 1) * 0x20 + 8) + 8) = 0;
    uVar20 = (ulong)*(uint *)(lVar19 + 0xc08);
    do {
      if (uVar20 == 0) goto LAB_0296c3fc;
      uVar20 = uVar20 - 1;
      *(int *)(lVar19 + 0xc08) = (int)uVar20;
    } while (*(short *)(*(long *)(lVar19 + (uVar20 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar19 + 0xc08) = (int)uVar20 + 1;
  }
LAB_0296c3fc:
  if (iVar17 != 0) goto LAB_0296c400;
  if ((param_7 & 1) == 0) goto switchD_0296c438_default;
  switch(uVar14) {
  case 8:
  case 10:
    uVar11 = 1;
    goto LAB_0296c450;
  case 9:
    uVar11 = 2;
LAB_0296c450:
    iVar17 = FUN_029506a8(lVar27,uVar11);
    if (0 < iVar17) goto switchD_0296c438_default;
LAB_0296c400:
    uVar32 = FUN_0295084c(lVar27,uVar14);
    break;
  case 0xb:
    iVar17 = FUN_029506a8(lVar27,2);
    if (iVar17 < 1) goto LAB_0296c400;
  default:
switchD_0296c438_default:
    uVar32 = FUN_029506a8(lVar27,uVar14);
  }
  lVar23 = *plVar31;
  uVar18 = *param_4;
  lVar19 = *(long *)(lVar23 + 0x30);
  uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
  uVar20 = uVar24 << 5 | 8;
  uVar26 = uVar24;
  do {
    uVar29 = uVar26;
    if (0x5f < uVar29) goto LAB_0296c50c;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296c4d0;
    uVar20 = uVar20 + 0x20;
    uVar26 = uVar29 + 1;
  } while (sVar5 != 0x12);
  if ((int)(uVar29 + 1) - 1U < 0x60) {
LAB_0296c4d0:
    lVar27 = *(long *)(lVar19 + (uVar29 & 0xffffffff) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 0x12;
      *(uint *)(lVar27 + 0xc) = uVar18;
      *(undefined1 *)(lVar27 + 10) = 4;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x98) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296c50c:
  bVar3 = *(byte *)((long)param_4 + 10);
  uVar20 = uVar24 << 5 | 8;
  lVar27 = 0;
  do {
    lVar28 = lVar27;
    if (0x5f < uVar24 + lVar28) goto LAB_0296c594;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296c558;
    uVar20 = uVar20 + 0x20;
    lVar27 = lVar28 + 1;
  } while (sVar5 != 0x16);
  if (((int)uVar24 + (int)(lVar28 + 1)) - 1U < 0x60) {
LAB_0296c558:
    lVar27 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar28) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 0x16;
      *(uint *)(lVar27 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar27 + 10) = 4;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0xb8) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296c594:
  uVar18 = param_4[3];
  uVar20 = uVar24 << 5 | 8;
  lVar27 = 0;
  do {
    lVar28 = lVar27;
    if (0x5f < uVar24 + lVar28) goto LAB_0296c61c;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296c5e0;
    uVar20 = uVar20 + 0x20;
    lVar27 = lVar28 + 1;
  } while (sVar5 != 0x1b);
  if (((int)uVar24 + (int)(lVar28 + 1)) - 1U < 0x60) {
LAB_0296c5e0:
    lVar27 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar28) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 0x1b;
      *(uint *)(lVar27 + 0xc) = uVar18;
      *(undefined1 *)(lVar27 + 10) = 4;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0xe0) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296c61c:
  uVar20 = uVar24 << 5 | 8;
  lVar27 = 0;
  do {
    lVar28 = lVar27;
    if (0x5f < uVar24 + lVar28) goto LAB_0296c6a0;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296c668;
    uVar20 = uVar20 + 0x20;
    lVar27 = lVar28 + 1;
  } while (sVar5 != 0x36);
  if (((int)uVar24 + (int)(lVar28 + 1)) - 1U < 0x60) {
LAB_0296c668:
    lVar27 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar28) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 0x36;
      *(uint *)(lVar27 + 0xc) = uVar32 & 0xffff;
      *(undefined1 *)(lVar27 + 10) = 0;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x1b8) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296c6a0:
  uVar20 = uVar24 << 5 | 8;
  lVar27 = 0;
  do {
    lVar28 = lVar27;
    if (0x5f < uVar24 + lVar28) goto LAB_0296c734;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296c6e8;
    uVar20 = uVar20 + 0x20;
    lVar27 = lVar28 + 1;
  } while (sVar5 != 0x38);
  if (((int)uVar24 + (int)(lVar28 + 1)) - 1U < 0x60) {
LAB_0296c6e8:
    lVar27 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar28) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 0x38;
      *(undefined8 *)(lVar27 + 0xc) = 0x19a00001000;
      *(undefined4 *)(lVar27 + 0x14) = 0x20000;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(undefined1 *)(lVar27 + 10) = 3;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x1c8) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296c734:
  plVar35 = (long *)(lVar19 + uVar24 * 0x20 + 8);
  do {
    uVar20 = uVar24;
    if (0x5f < uVar20) goto LAB_0296c7a8;
    lVar27 = *plVar35;
    if (*(short *)(lVar27 + 8) == 0) goto LAB_0296c770;
    plVar35 = plVar35 + 4;
    uVar24 = uVar20 + 1;
  } while (*(short *)(lVar27 + 8) != 0x5a);
  if ((int)(uVar20 + 1) - 1U < 0x60) {
LAB_0296c770:
    lVar19 = *(long *)(lVar19 + (uVar20 & 0xffffffff) * 0x20 + 8);
    if (lVar19 != 0) {
      *(undefined2 *)(lVar19 + 8) = 0x5a;
      *(undefined8 *)(lVar19 + 0xc) = 0;
      *(undefined8 *)(lVar19 + 0x14) = 0;
      *(undefined4 *)(lVar19 + 0x1c) = 0;
      *(undefined1 *)(lVar19 + 10) = 1;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x2d8) = lVar19;
      lVar23 = *plVar31;
    }
  }
LAB_0296c7a8:
  iVar17 = *(int *)(lVar23 + 0x78) + 1;
  *(int *)(lVar23 + 0x78) = iVar17;
  lVar19 = *(long *)(*(long *)(*(long *)(lVar23 + 8) + 0x88) + 0x14c8);
  if (lVar19 != 0) {
    do {
      lVar27 = FUN_02999e6c(lVar23,0x4c,8,1,lVar19);
      if (lVar27 == 0) break;
      if ((*(byte *)(lVar27 + 0x3f) >> 5 & 1) == 0) {
        lVar27 = *(long *)(lVar19 + 0x18);
      }
      lVar19 = lVar27;
    } while (lVar27 != 0);
    iVar17 = *(int *)(lVar23 + 0x78);
  }
  *(int *)(lVar23 + 0x78) = iVar17 + -1;
  if (iVar17 + -1 == 0) {
    for (lVar19 = *(long *)(*(long *)(*(long *)(lVar23 + 8) + 0x88) + 0x14c8); lVar19 != 0;
        lVar19 = *(long *)(lVar19 + 0x18)) {
      *(uint *)(lVar19 + 0x3c) = (uint)*(ushort *)(lVar19 + 0x3e) << 0x10;
    }
  }
  lVar23 = *plVar31;
  lVar19 = *(long *)(lVar23 + 0x70);
  if (*(long *)(lVar19 + 0x1b8) == 0) {
    uVar32 = 0;
    lVar27 = *(long *)(lVar19 + 0x1c8);
    if (lVar27 == 0) goto LAB_0296c87c;
LAB_0296c850:
    iVar17 = *(int *)(lVar27 + 0xc);
    lVar19 = *(long *)(lVar19 + 0x2d8);
    if (lVar19 != 0) goto LAB_0296c85c;
LAB_0296c888:
    bVar6 = false;
  }
  else {
    uVar32 = (uint)*(ushort *)(*(long *)(lVar19 + 0x1b8) + 0xc);
    lVar27 = *(long *)(lVar19 + 0x1c8);
    if (lVar27 != 0) goto LAB_0296c850;
LAB_0296c87c:
    iVar17 = 0;
    lVar19 = *(long *)(lVar19 + 0x2d8);
    if (lVar19 == 0) goto LAB_0296c888;
LAB_0296c85c:
    bVar6 = *(int *)(lVar19 + 0xc) != 0;
  }
  lVar19 = *(long *)(lVar23 + 0x50);
  if (*(uint *)(lVar19 + 0x408) == 0) {
    uVar20 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar19 + (ulong)*(uint *)(lVar19 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar19 + 0x408) = *(int *)(lVar19 + 0x408) + -1;
    lVar19 = *(long *)(lVar23 + 0x50);
    uVar20 = (ulong)*(uint *)(lVar19 + 0x408);
  }
  *(undefined8 *)(lVar23 + 0x70) = *(undefined8 *)(lVar19 + uVar20 * 0x20 + 8);
  lVar19 = *(long *)(lVar23 + 0x30);
  uVar18 = *(uint *)(lVar19 + 0xc08);
  if (uVar18 != 0) {
    if ((uVar18 & 0xffff) < 0x60) {
      uVar20 = (ulong)uVar18 & 0xffff;
      plVar35 = (long *)(lVar19 + uVar20 * 0x20 + 8);
      do {
        uVar20 = uVar20 + 1;
        if (*(short *)(*plVar35 + 8) == 0) break;
        *(undefined2 *)(*plVar35 + 8) = 0;
        plVar35 = plVar35 + 4;
      } while (((uint)uVar20 & 0xffff) != 0x60);
      uVar18 = *(uint *)(lVar19 + 0xc08);
    }
    *(uint *)(lVar19 + 0xc08) = uVar18 - 1;
    *(undefined2 *)(*(long *)(lVar19 + (ulong)(uVar18 - 1) * 0x20 + 8) + 8) = 0;
    uVar20 = (ulong)*(uint *)(lVar19 + 0xc08);
    do {
      if (uVar20 == 0) goto LAB_0296c96c;
      uVar20 = uVar20 - 1;
      *(int *)(lVar19 + 0xc08) = (int)uVar20;
    } while (*(short *)(*(long *)(lVar19 + (uVar20 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar19 + 0xc08) = (int)uVar20 + 1;
  }
LAB_0296c96c:
  uVar18 = iVar17 * uVar32 >> 0xc;
  uVar16 = param_4[3];
  if (0x800 < (iVar17 * uVar32 & 0xfff)) {
    uVar18 = uVar18 + 1;
  }
  iVar17 = 0xb;
  if (uVar16 != 2) {
    iVar17 = 9;
  }
  if ((*(byte *)(param_3 + 0x228) & 7) != 0) {
    lVar19 = 0x18;
    if (uVar16 != 2) {
      lVar19 = 8;
    }
    iVar17 = *(int *)(&DAT_03888c24 + lVar19);
  }
  lVar19 = *plVar31;
  lVar23 = *(long *)(lVar19 + 0x30);
  uVar32 = *(uint *)(lVar23 + 0xc08);
  if (uVar32 < 0x60) {
    do {
      lVar27 = *(long *)(lVar23 + (ulong)uVar32 * 0x20 + 8);
      if (*(short *)(lVar27 + 8) == 0) {
        if (uVar32 < 0x5f) {
          *(undefined2 *)(lVar27 + 8) = 1;
          *(int *)(lVar23 + 0xc08) = *(int *)(lVar23 + 0xc08) + 1;
        }
        break;
      }
      uVar32 = uVar32 + 1;
      *(uint *)(lVar23 + 0xc08) = uVar32;
    } while (uVar32 != 0x60);
  }
  lVar23 = *(long *)(lVar19 + 0x50);
  uVar32 = *(uint *)(lVar23 + 0x408);
  if (uVar32 < 0x1f) {
    *(uint *)(lVar23 + 0x408) = uVar32 + 1;
    lVar23 = *(long *)(lVar19 + 0x50);
    uVar32 = *(uint *)(lVar23 + 0x408);
  }
  *(undefined8 *)(lVar19 + 0x70) = *(undefined8 *)(lVar23 + (ulong)uVar32 * 0x20 + 8);
  lVar23 = *plVar31;
  bVar3 = *(byte *)(param_2 + 0x7d);
  lVar19 = *(long *)(lVar23 + 0x30);
  uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
  uVar20 = uVar24 << 5 | 8;
  uVar26 = uVar24;
  do {
    uVar29 = uVar26;
    if (0x5f < uVar29) goto LAB_0296cadc;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296ca9c;
    uVar20 = uVar20 + 0x20;
    uVar26 = uVar29 + 1;
  } while (sVar5 != 3);
  if ((int)(uVar29 + 1) - 1U < 0x60) {
LAB_0296ca9c:
    lVar27 = *(long *)(lVar19 + (uVar29 & 0xffffffff) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 3;
      *(uint *)(lVar27 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar27 + 10) = 4;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x20) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296cadc:
  bVar3 = *(byte *)(param_3 + 0x7d);
  uVar20 = uVar24 << 5 | 8;
  lVar27 = 0;
  do {
    lVar28 = lVar27;
    if (0x5f < uVar24 + lVar28) goto LAB_0296cb64;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296cb28;
    uVar20 = uVar20 + 0x20;
    lVar27 = lVar28 + 1;
  } while (sVar5 != 4);
  if (((int)uVar24 + (int)(lVar28 + 1)) - 1U < 0x60) {
LAB_0296cb28:
    lVar27 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar28) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 4;
      *(uint *)(lVar27 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar27 + 10) = 4;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x28) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296cb64:
  uVar20 = uVar24 << 5 | 8;
  lVar27 = 0;
  do {
    lVar28 = lVar27;
    if (0x5f < uVar24 + lVar28) goto LAB_0296cbec;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296cbac;
    uVar20 = uVar20 + 0x20;
    lVar27 = lVar28 + 1;
  } while (sVar5 != 0x41);
  if (((int)uVar24 + (int)(lVar28 + 1)) - 1U < 0x60) {
LAB_0296cbac:
    lVar27 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar28) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 0x41;
      *(int *)(lVar27 + 0xc) = iVar17;
      *(undefined1 *)(lVar27 + 10) = 4;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x210) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296cbec:
  uVar20 = uVar24 << 5 | 8;
  lVar27 = 0;
  do {
    lVar28 = lVar27;
    if (0x5f < uVar24 + lVar28) goto LAB_0296cc74;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296cc34;
    uVar20 = uVar20 + 0x20;
    lVar27 = lVar28 + 1;
  } while (sVar5 != 0x42);
  if (((int)uVar24 + (int)(lVar28 + 1)) - 1U < 0x60) {
LAB_0296cc34:
    lVar27 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar28) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 0x42;
      *(undefined1 *)(lVar27 + 10) = 0;
      *(undefined8 *)(lVar27 + 0xc) = 0;
      *(undefined8 *)(lVar27 + 0x14) = 0;
      *(undefined4 *)(lVar27 + 0x1c) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x218) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296cc74:
  plVar35 = (long *)(lVar19 + uVar24 * 0x20 + 8);
  do {
    uVar20 = uVar24;
    if (0x5f < uVar20) goto LAB_0296ccf0;
    lVar27 = *plVar35;
    if (*(short *)(lVar27 + 8) == 0) goto LAB_0296ccb4;
    plVar35 = plVar35 + 4;
    uVar24 = uVar20 + 1;
  } while (*(short *)(lVar27 + 8) != 0x59);
  if ((int)(uVar20 + 1) - 1U < 0x60) {
LAB_0296ccb4:
    lVar19 = *(long *)(lVar19 + (uVar20 & 0xffffffff) * 0x20 + 8);
    if (lVar19 != 0) {
      *(undefined2 *)(lVar19 + 8) = 0x59;
      *(undefined8 *)(lVar19 + 0xc) = 0;
      *(undefined8 *)(lVar19 + 0x14) = 0;
      *(undefined4 *)(lVar19 + 0x1c) = 0;
      *(undefined1 *)(lVar19 + 10) = 1;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x2d0) = lVar19;
      lVar23 = *plVar31;
    }
  }
LAB_0296ccf0:
  iVar15 = *(int *)(lVar23 + 0x78) + 1;
  *(int *)(lVar23 + 0x78) = iVar15;
  lVar19 = *(long *)(*(long *)(*(long *)(lVar23 + 8) + 0x88) + 0x14c8);
  if (lVar19 != 0) {
    do {
      lVar27 = FUN_02999e6c(lVar23,0x4a,8,1,lVar19);
      if (lVar27 == 0) break;
      if ((*(byte *)(lVar27 + 0x3f) >> 5 & 1) == 0) {
        lVar27 = *(long *)(lVar19 + 0x18);
      }
      lVar19 = lVar27;
    } while (lVar27 != 0);
    iVar15 = *(int *)(lVar23 + 0x78);
  }
  *(int *)(lVar23 + 0x78) = iVar15 + -1;
  if (iVar15 + -1 == 0) {
    for (lVar19 = *(long *)(*(long *)(*(long *)(lVar23 + 8) + 0x88) + 0x14c8); lVar19 != 0;
        lVar19 = *(long *)(lVar19 + 0x18)) {
      *(uint *)(lVar19 + 0x3c) = (uint)*(ushort *)(lVar19 + 0x3e) << 0x10;
    }
  }
  lVar23 = *plVar31;
  lVar19 = *(long *)(lVar23 + 0x70);
  if (*(long *)(lVar19 + 0x2d0) == 0) {
    uVar32 = 0;
    lVar19 = *(long *)(lVar19 + 0x218);
    if (lVar19 == 0) goto LAB_0296cdb0;
LAB_0296cd9c:
    uVar34 = *(uint *)(lVar19 + 0xc);
  }
  else {
    uVar32 = *(uint *)(*(long *)(lVar19 + 0x2d0) + 0xc);
    lVar19 = *(long *)(lVar19 + 0x218);
    if (lVar19 != 0) goto LAB_0296cd9c;
LAB_0296cdb0:
    uVar34 = 0;
  }
  lVar19 = *(long *)(lVar23 + 0x50);
  if (*(uint *)(lVar19 + 0x408) == 0) {
    uVar20 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar19 + (ulong)*(uint *)(lVar19 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar19 + 0x408) = *(int *)(lVar19 + 0x408) + -1;
    lVar19 = *(long *)(lVar23 + 0x50);
    uVar20 = (ulong)*(uint *)(lVar19 + 0x408);
  }
  *(undefined8 *)(lVar23 + 0x70) = *(undefined8 *)(lVar19 + uVar20 * 0x20 + 8);
  lVar19 = *(long *)(lVar23 + 0x30);
  uVar22 = *(uint *)(lVar19 + 0xc08);
  if (uVar22 != 0) {
    if ((uVar22 & 0xffff) < 0x60) {
      uVar20 = (ulong)uVar22 & 0xffff;
      plVar35 = (long *)(lVar19 + uVar20 * 0x20 + 8);
      do {
        uVar20 = uVar20 + 1;
        if (*(short *)(*plVar35 + 8) == 0) break;
        *(undefined2 *)(*plVar35 + 8) = 0;
        plVar35 = plVar35 + 4;
      } while (((uint)uVar20 & 0xffff) != 0x60);
      uVar22 = *(uint *)(lVar19 + 0xc08);
    }
    *(uint *)(lVar19 + 0xc08) = uVar22 - 1;
    *(undefined2 *)(*(long *)(lVar19 + (ulong)(uVar22 - 1) * 0x20 + 8) + 8) = 0;
    uVar20 = (ulong)*(uint *)(lVar19 + 0xc08);
    do {
      if (uVar20 == 0) goto LAB_0296ce98;
      uVar20 = uVar20 - 1;
      *(int *)(lVar19 + 0xc08) = (int)uVar20;
    } while (*(short *)(*(long *)(lVar19 + (uVar20 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar19 + 0xc08) = (int)uVar20 + 1;
  }
LAB_0296ce98:
  if ((uVar34 & 1) != 0) {
    bVar7 = iVar17 != 9;
    iVar17 = 0xb;
    if (bVar7) {
      iVar17 = 9;
    }
    uVar16 = 1;
    if (!bVar7) {
      uVar16 = 2;
    }
  }
  if ((uVar32 & 0xff) == 0) {
    if ((param_7 & 1) == 0) {
      uVar32 = FUN_029506a8(param_3,iVar17);
    }
    else {
      uVar32 = FUN_02951958(param_3,iVar17);
    }
  }
  else {
    uVar32 = FUN_0295084c(param_3,iVar17);
  }
  cVar10 = FUN_0296eaa8(param_1);
  if (cVar10 == '\x04') {
    bVar7 = (*(byte *)(param_3 + 0x168) & 7) != 0;
    cVar10 = *(char *)(param_3 + 0x2dc);
    cVar12 = *(char *)(param_3 + 0x2dd);
    bVar8 = cVar12 != '\x12';
    bVar9 = cVar12 == '\x02';
    if (*(char *)(param_3 + 0x389) < '\0') {
      if (cVar10 != '\x12' && (cVar10 != '\x02' || !bVar7)) {
        if (bVar8 && (!bVar7 || !bVar9)) goto LAB_0296d808;
      }
      else {
        cVar10 = cVar12;
        if (bVar8 && (!bVar7 || !bVar9)) goto LAB_0296cf70;
        cVar10 = '\x12';
      }
LAB_0296d804:
      cVar12 = cVar10;
LAB_0296d808:
      if (cVar10 == '\x05') goto LAB_0296d810;
LAB_0296cf7c:
      if (cVar12 == '\x05') goto LAB_0296d810;
      if ((iVar17 != 0xb) || (*(char *)(param_3 + 0x2de) != '\x05')) goto LAB_0296cfa4;
    }
    else {
      if (cVar10 != '\x12' && (cVar10 != '\x02' || !bVar7)) {
        if (!bVar8 || bVar7 && bVar9) goto LAB_0296d804;
        goto LAB_0296d808;
      }
      cVar10 = '\0';
      if (bVar8 && (!bVar7 || !bVar9)) {
        cVar10 = cVar12;
      }
LAB_0296cf70:
      cVar12 = cVar10;
      if (cVar12 != '\x05') goto LAB_0296cf7c;
LAB_0296d810:
      if (iVar17 != 0xb) goto LAB_0296cfa4;
    }
    uVar32 = (uVar32 & 0xffff) + (uVar32 & 0xffff) * 2 >> 1;
  }
LAB_0296cfa4:
  lVar19 = *plVar31;
  lVar23 = *(long *)(lVar19 + 0x30);
  uVar34 = *(uint *)(lVar23 + 0xc08);
  if (uVar34 < 0x60) {
    do {
      lVar27 = *(long *)(lVar23 + (ulong)uVar34 * 0x20 + 8);
      if (*(short *)(lVar27 + 8) == 0) {
        if (uVar34 < 0x5f) {
          *(undefined2 *)(lVar27 + 8) = 1;
          *(int *)(lVar23 + 0xc08) = *(int *)(lVar23 + 0xc08) + 1;
        }
        break;
      }
      uVar34 = uVar34 + 1;
      *(uint *)(lVar23 + 0xc08) = uVar34;
    } while (uVar34 != 0x60);
  }
  lVar23 = *(long *)(lVar19 + 0x50);
  uVar34 = *(uint *)(lVar23 + 0x408);
  if (uVar34 < 0x1f) {
    *(uint *)(lVar23 + 0x408) = uVar34 + 1;
    lVar23 = *(long *)(lVar19 + 0x50);
    uVar34 = *(uint *)(lVar23 + 0x408);
  }
  *(undefined8 *)(lVar19 + 0x70) = *(undefined8 *)(lVar23 + (ulong)uVar34 * 0x20 + 8);
  bVar3 = *(byte *)(param_2 + 0x7d);
  lVar23 = *plVar31;
  lVar19 = *(long *)(lVar23 + 0x30);
  uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
  uVar20 = uVar24 << 5 | 8;
  uVar26 = uVar24;
  do {
    uVar29 = uVar26;
    if (0x5f < uVar29) goto LAB_0296d0c4;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296d084;
    uVar20 = uVar20 + 0x20;
    uVar26 = uVar29 + 1;
  } while (sVar5 != 3);
  if ((int)(uVar29 + 1) - 1U < 0x60) {
LAB_0296d084:
    lVar27 = *(long *)(lVar19 + (uVar29 & 0xffffffff) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 3;
      *(uint *)(lVar27 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar27 + 10) = 4;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x20) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296d0c4:
  bVar3 = *(byte *)(param_3 + 0x7d);
  uVar20 = uVar24 << 5 | 8;
  lVar27 = 0;
  do {
    lVar28 = lVar27;
    if (0x5f < uVar24 + lVar28) goto LAB_0296d14c;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296d110;
    uVar20 = uVar20 + 0x20;
    lVar27 = lVar28 + 1;
  } while (sVar5 != 4);
  if (((int)uVar24 + (int)(lVar28 + 1)) - 1U < 0x60) {
LAB_0296d110:
    lVar27 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar28) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 4;
      *(uint *)(lVar27 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar27 + 10) = 4;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x28) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296d14c:
  uVar34 = *param_4;
  uVar20 = uVar24 << 5 | 8;
  lVar27 = 0;
  do {
    lVar28 = lVar27;
    if (0x5f < uVar24 + lVar28) goto LAB_0296d1d8;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296d198;
    uVar20 = uVar20 + 0x20;
    lVar27 = lVar28 + 1;
  } while (sVar5 != 0x12);
  if (((int)uVar24 + (int)(lVar28 + 1)) - 1U < 0x60) {
LAB_0296d198:
    lVar27 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar28) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 0x12;
      *(uint *)(lVar27 + 0xc) = uVar34;
      *(undefined1 *)(lVar27 + 10) = 4;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x98) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296d1d8:
  bVar3 = *(byte *)((long)param_4 + 10);
  uVar20 = uVar24 << 5 | 8;
  lVar27 = 0;
  do {
    lVar28 = lVar27;
    if (0x5f < uVar24 + lVar28) goto LAB_0296d264;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296d224;
    uVar20 = uVar20 + 0x20;
    lVar27 = lVar28 + 1;
  } while (sVar5 != 0x16);
  if (((int)uVar24 + (int)(lVar28 + 1)) - 1U < 0x60) {
LAB_0296d224:
    lVar27 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar28) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 0x16;
      *(uint *)(lVar27 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar27 + 10) = 4;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0xb8) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296d264:
  uVar20 = uVar24 << 5 | 8;
  lVar27 = 0;
  do {
    lVar28 = lVar27;
    if (0x5f < uVar24 + lVar28) goto LAB_0296d2f4;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296d2ac;
    uVar20 = uVar20 + 0x20;
    lVar27 = lVar28 + 1;
  } while (sVar5 != 0x1b);
  if (((int)uVar24 + (int)(lVar28 + 1)) - 1U < 0x60) {
LAB_0296d2ac:
    lVar27 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar28) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 0x1b;
      *(uint *)(lVar27 + 0xc) = uVar16;
      *(undefined1 *)(lVar27 + 10) = 4;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0xe0) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296d2f4:
  uVar20 = uVar24 << 5 | 8;
  lVar27 = 0;
  do {
    lVar28 = lVar27;
    if (0x5f < uVar24 + lVar28) goto LAB_0296d378;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296d340;
    uVar20 = uVar20 + 0x20;
    lVar27 = lVar28 + 1;
  } while (sVar5 != 0x37);
  if (((int)uVar24 + (int)(lVar28 + 1)) - 1U < 0x60) {
LAB_0296d340:
    lVar27 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar28) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 0x37;
      *(uint *)(lVar27 + 0xc) = uVar32 & 0xffff;
      *(undefined1 *)(lVar27 + 10) = 0;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x1c0) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296d378:
  plVar35 = (long *)(lVar19 + uVar24 * 0x20 + 8);
  do {
    uVar20 = uVar24;
    if (0x5f < uVar20) goto LAB_0296d3f8;
    lVar27 = *plVar35;
    if (*(short *)(lVar27 + 8) == 0) goto LAB_0296d3b4;
    plVar35 = plVar35 + 4;
    uVar24 = uVar20 + 1;
  } while (*(short *)(lVar27 + 8) != 0x38);
  if ((int)(uVar20 + 1) - 1U < 0x60) {
LAB_0296d3b4:
    lVar19 = *(long *)(lVar19 + (uVar20 & 0xffffffff) * 0x20 + 8);
    if (lVar19 != 0) {
      *(undefined2 *)(lVar19 + 8) = 0x38;
      *(undefined8 *)(lVar19 + 0xc) = 0x19a00001000;
      *(undefined4 *)(lVar19 + 0x14) = 0x20000;
      *(undefined8 *)(lVar19 + 0x18) = 0;
      *(undefined1 *)(lVar19 + 10) = 3;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x1c8) = lVar19;
      lVar23 = *plVar31;
    }
  }
LAB_0296d3f8:
  iVar17 = *(int *)(lVar23 + 0x78) + 1;
  *(int *)(lVar23 + 0x78) = iVar17;
  lVar19 = *(long *)(*(long *)(*(long *)(lVar23 + 8) + 0x88) + 0x14c8);
  if (lVar19 != 0) {
    do {
      lVar27 = FUN_02999e6c(lVar23,0x4d,8,1,lVar19);
      if (lVar27 == 0) break;
      if ((*(byte *)(lVar27 + 0x3f) >> 5 & 1) == 0) {
        lVar27 = *(long *)(lVar19 + 0x18);
      }
      lVar19 = lVar27;
    } while (lVar27 != 0);
    iVar17 = *(int *)(lVar23 + 0x78);
  }
  *(int *)(lVar23 + 0x78) = iVar17 + -1;
  if (iVar17 + -1 == 0) {
    for (lVar19 = *(long *)(*(long *)(*(long *)(lVar23 + 8) + 0x88) + 0x14c8); lVar19 != 0;
        lVar19 = *(long *)(lVar19 + 0x18)) {
      *(uint *)(lVar19 + 0x3c) = (uint)*(ushort *)(lVar19 + 0x3e) << 0x10;
    }
  }
  lVar23 = *plVar31;
  lVar19 = *(long *)(lVar23 + 0x70);
  if (*(long *)(lVar19 + 0x1c0) == 0) {
    uVar32 = 0;
    lVar19 = *(long *)(lVar19 + 0x1c8);
    if (lVar19 == 0) goto LAB_0296d4b4;
LAB_0296d4a0:
    iVar17 = *(int *)(lVar19 + 0xc);
  }
  else {
    uVar32 = (uint)*(ushort *)(*(long *)(lVar19 + 0x1c0) + 0xc);
    lVar19 = *(long *)(lVar19 + 0x1c8);
    if (lVar19 != 0) goto LAB_0296d4a0;
LAB_0296d4b4:
    iVar17 = 0;
  }
  lVar19 = *(long *)(lVar23 + 0x50);
  if (*(uint *)(lVar19 + 0x408) == 0) {
    uVar20 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar19 + (ulong)*(uint *)(lVar19 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar19 + 0x408) = *(int *)(lVar19 + 0x408) + -1;
    lVar19 = *(long *)(lVar23 + 0x50);
    uVar20 = (ulong)*(uint *)(lVar19 + 0x408);
  }
  *(undefined8 *)(lVar23 + 0x70) = *(undefined8 *)(lVar19 + uVar20 * 0x20 + 8);
  lVar19 = *(long *)(lVar23 + 0x30);
  uVar16 = *(uint *)(lVar19 + 0xc08);
  if (uVar16 != 0) {
    if ((uVar16 & 0xffff) < 0x60) {
      uVar20 = (ulong)uVar16 & 0xffff;
      plVar35 = (long *)(lVar19 + uVar20 * 0x20 + 8);
      do {
        uVar20 = uVar20 + 1;
        if (*(short *)(*plVar35 + 8) == 0) break;
        *(undefined2 *)(*plVar35 + 8) = 0;
        plVar35 = plVar35 + 4;
      } while (((uint)uVar20 & 0xffff) != 0x60);
      uVar16 = *(uint *)(lVar19 + 0xc08);
    }
    *(uint *)(lVar19 + 0xc08) = uVar16 - 1;
    *(undefined2 *)(*(long *)(lVar19 + (ulong)(uVar16 - 1) * 0x20 + 8) + 8) = 0;
    uVar20 = (ulong)*(uint *)(lVar19 + 0xc08);
    do {
      if (uVar20 == 0) goto LAB_0296d5a0;
      uVar20 = uVar20 - 1;
      *(int *)(lVar19 + 0xc08) = (int)uVar20;
    } while (*(short *)(*(long *)(lVar19 + (uVar20 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar19 + 0xc08) = (int)uVar20 + 1;
  }
LAB_0296d5a0:
  uVar16 = iVar17 * uVar32 >> 0xc;
  if (0x800 < (iVar17 * uVar32 & 0xfff)) {
    uVar16 = uVar16 + 1;
  }
  uStack_76c = FUN_029506a8(param_2,0xf);
  local_770 = uVar33 & 0xffff;
  uStack_76c = uStack_76c & 0xff;
  local_768 = uVar18 & 0xffff;
  uStack_764 = uVar16 & 0xffff;
  local_760 = FUN_029506a8(param_2,1);
  local_75c = FUN_029506a8(param_3,2);
  uVar32 = FUN_029ce294(*(undefined8 *)(param_1 + 8),&local_770);
  if ((param_6 != 0x1000) &&
     (uVar33 = uVar32 * param_6, uVar32 = uVar33 >> 0xc, 0x800 < (uVar33 & 0xfff))) {
    uVar32 = uVar32 + 1;
  }
  if (((param_10 == '\x05') || (param_10 == '\x02')) && (*(char *)((long)param_4 + 10) == '\t')) {
    plVar35 = *(long **)(*(long *)(param_1 + 8) + 0x1e8);
    if (plVar35 != (long *)0x0) {
      plVar1 = plVar35 + 10;
      do {
        cVar10 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    FUN_009463f0(&local_770,plVar35 + 0xc);
    FUN_00945e04(&local_770);
    if (plVar35 != (long *)0x0) {
      plVar1 = plVar35 + 10;
      do {
        iVar17 = (int)*plVar1 + -1;
        cVar10 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = iVar17;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar17 == 0) {
        (**(code **)(*plVar35 + 0x10))(plVar35);
      }
    }
    fVar36 = 0.5;
    if ((float)local_a8 / 100.0 <= 0.0) {
      fVar36 = -0.5;
    }
    iVar17 = (int)(((float)local_a8 / 100.0) * 4096.0 + fVar36);
    if ((iVar17 != 0x1000) &&
       (uVar33 = uVar32 * iVar17, uVar32 = uVar33 >> 0xc, 0x800 < (uVar33 & 0xfff))) {
      uVar32 = uVar32 + 1;
    }
  }
  lVar19 = DAT_043ecde0;
  if ((param_7 & 1) != 0) {
    uVar32 = (uVar32 * 0xf) / 10;
  }
  if ((param_8 & 1) == 0) {
    uVar20 = *(ulong *)(DAT_043ecde0 + 8);
    uVar24 = *(ulong *)(DAT_043ecde0 + 0x10);
    uVar26 = uVar24 ^ uVar20;
    *(ulong *)(DAT_043ecde0 + 8) = uVar26 ^ (uVar20 >> 0x28 | uVar20 << 0x18) ^ uVar26 << 0x10;
    *(ulong *)(lVar19 + 0x10) = uVar26 >> 0x1b | uVar26 << 0x25;
    iVar17 = 100 - ((int)uVar24 + (int)uVar20 & 0xfU);
  }
  else {
    iVar17 = 0x55;
  }
  cVar10 = *(char *)((long)param_4 + 10);
  uVar20 = (ulong)(iVar17 * uVar32) / 100;
  if (cVar10 != '\x12') {
    bVar7 = (*(byte *)(param_2 + 0x168) & 7) != 0;
    cVar12 = *(char *)(param_2 + 0x2dc);
    cVar4 = *(char *)(param_2 + 0x2dd);
    bVar8 = cVar4 != '\x12';
    bVar9 = cVar4 == '\x02';
    cVar25 = cVar4;
    if (*(char *)(param_2 + 0x389) < '\0') {
      if (cVar12 != '\x12' && (cVar12 != '\x02' || !bVar7)) {
        if (!bVar8 || bVar7 && bVar9) goto LAB_0296d820;
      }
      else {
        cVar12 = cVar4;
        if (!bVar8 || bVar7 && bVar9) {
          cVar12 = '\x12';
LAB_0296d820:
          cVar25 = cVar12;
        }
      }
    }
    else if (cVar12 != '\x12' && (cVar12 != '\x02' || !bVar7)) {
      if (!bVar8 || bVar7 && bVar9) goto LAB_0296d820;
    }
    else {
      cVar12 = '\0';
      cVar25 = '\0';
      if (bVar8 && (!bVar7 || !bVar9)) {
        cVar12 = cVar4;
        cVar25 = cVar4;
      }
    }
    uVar33 = 1;
    if ((cVar12 != cVar10) && (cVar25 != cVar10)) {
      uVar33 = (uint)(*(char *)(param_2 + 0x2de) == cVar10);
    }
    lVar19 = *plVar31;
    lVar23 = *(long *)(lVar19 + 0x30);
    uVar18 = *(uint *)(lVar23 + 0xc08);
    if (uVar18 < 0x60) {
      do {
        lVar27 = *(long *)(lVar23 + (ulong)uVar18 * 0x20 + 8);
        if (*(short *)(lVar27 + 8) == 0) {
          if (uVar18 < 0x5f) {
            *(undefined2 *)(lVar27 + 8) = 1;
            *(int *)(lVar23 + 0xc08) = *(int *)(lVar23 + 0xc08) + 1;
          }
          break;
        }
        uVar18 = uVar18 + 1;
        *(uint *)(lVar23 + 0xc08) = uVar18;
      } while (uVar18 != 0x60);
    }
    lVar23 = *(long *)(lVar19 + 0x50);
    uVar18 = *(uint *)(lVar23 + 0x408);
    if (uVar18 < 0x1f) {
      *(uint *)(lVar23 + 0x408) = uVar18 + 1;
      lVar23 = *(long *)(lVar19 + 0x50);
      uVar18 = *(uint *)(lVar23 + 0x408);
    }
    *(undefined8 *)(lVar19 + 0x70) = *(undefined8 *)(lVar23 + (ulong)uVar18 * 0x20 + 8);
    lVar23 = *plVar31;
    lVar19 = *(long *)(lVar23 + 0x30);
    uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    bVar3 = *(byte *)(param_2 + 0x7d);
    uVar20 = uVar24 << 5 | 8;
    uVar26 = uVar24;
    do {
      uVar29 = uVar26;
      if (0x5f < uVar29) goto LAB_0296d95c;
      sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
      if (sVar5 == 0) goto LAB_0296d91c;
      uVar20 = uVar20 + 0x20;
      uVar26 = uVar29 + 1;
    } while (sVar5 != 2);
    if ((int)(uVar29 + 1) - 1U < 0x60) {
LAB_0296d91c:
      lVar27 = *(long *)(lVar19 + (uVar29 & 0xffffffff) * 0x20 + 8);
      if (lVar27 != 0) {
        *(undefined2 *)(lVar27 + 8) = 2;
        *(uint *)(lVar27 + 0xc) = (uint)bVar3;
        *(undefined1 *)(lVar27 + 10) = 4;
        *(undefined8 *)(lVar27 + 0x10) = 0;
        *(undefined8 *)(lVar27 + 0x18) = 0;
        *(long *)(*(long *)(lVar23 + 0x70) + 0x18) = lVar27;
        lVar23 = *plVar31;
        lVar19 = *(long *)(lVar23 + 0x30);
        uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
      }
    }
LAB_0296d95c:
    plVar35 = (long *)(lVar19 + uVar24 * 0x20 + 8);
    do {
      uVar20 = uVar24;
      if (0x5f < uVar20) goto LAB_0296d9d0;
      lVar27 = *plVar35;
      if (*(short *)(lVar27 + 8) == 0) goto LAB_0296d998;
      plVar35 = plVar35 + 4;
      uVar24 = uVar20 + 1;
    } while (*(short *)(lVar27 + 8) != 0x59);
    if ((int)(uVar20 + 1) - 1U < 0x60) {
LAB_0296d998:
      lVar19 = *(long *)(lVar19 + (uVar20 & 0xffffffff) * 0x20 + 8);
      if (lVar19 != 0) {
        *(uint *)(lVar19 + 0xc) = uVar33;
        *(undefined2 *)(lVar19 + 8) = 0x59;
        *(undefined1 *)(lVar19 + 10) = 1;
        *(undefined8 *)(lVar19 + 0x10) = 0;
        *(undefined8 *)(lVar19 + 0x18) = 0;
        *(long *)(*(long *)(lVar23 + 0x70) + 0x2d0) = lVar19;
        lVar23 = *plVar31;
      }
    }
LAB_0296d9d0:
    iVar15 = *(int *)(lVar23 + 0x78) + 1;
    *(int *)(lVar23 + 0x78) = iVar15;
    lVar19 = *(long *)(*(long *)(*(long *)(lVar23 + 8) + 0x88) + 0x14c8);
    if (lVar19 != 0) {
      do {
        lVar27 = FUN_02999e6c(lVar23,0x55,8,1,lVar19);
        if (lVar27 == 0) break;
        if ((*(byte *)(lVar27 + 0x3f) >> 5 & 1) == 0) {
          lVar27 = *(long *)(lVar19 + 0x18);
        }
        lVar19 = lVar27;
      } while (lVar27 != 0);
      iVar15 = *(int *)(lVar23 + 0x78);
    }
    *(int *)(lVar23 + 0x78) = iVar15 + -1;
    if (iVar15 + -1 == 0) {
      for (lVar19 = *(long *)(*(long *)(*(long *)(lVar23 + 8) + 0x88) + 0x14c8); lVar19 != 0;
          lVar19 = *(long *)(lVar19 + 0x18)) {
        *(uint *)(lVar19 + 0x3c) = (uint)*(ushort *)(lVar19 + 0x3e) << 0x10;
      }
    }
    lVar23 = *plVar31;
    lVar19 = *(long *)(*(long *)(lVar23 + 0x70) + 0x2d0);
    uVar14 = 0x1000;
    if (lVar19 == 0) {
      uVar33 = 0;
    }
    else {
      bVar7 = *(int *)(lVar19 + 0xc) != 0;
      uVar33 = (uint)bVar7;
      uVar14 = 0x1400;
      if (!bVar7) {
        uVar14 = 0x1000;
      }
    }
    lVar19 = *(long *)(lVar23 + 0x30);
    uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    uVar20 = uVar24 << 5 | 8;
    uVar26 = uVar24;
    do {
      uVar29 = uVar26;
      if (0x5f < uVar29) goto LAB_0296db1c;
      sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
      if (sVar5 == 0) goto LAB_0296dadc;
      uVar20 = uVar20 + 0x20;
      uVar26 = uVar29 + 1;
    } while (sVar5 != 0x4b);
    if ((int)(uVar29 + 1) - 1U < 0x60) {
LAB_0296dadc:
      lVar27 = *(long *)(lVar19 + (uVar29 & 0xffffffff) * 0x20 + 8);
      if (lVar27 != 0) {
        *(undefined2 *)(lVar27 + 8) = 0x4b;
        *(uint *)(lVar27 + 0xc) = uVar33;
        *(undefined1 *)(lVar27 + 10) = 4;
        *(undefined8 *)(lVar27 + 0x10) = 0;
        *(undefined8 *)(lVar27 + 0x18) = 0;
        *(long *)(*(long *)(lVar23 + 0x70) + 0x260) = lVar27;
        lVar23 = *plVar31;
        lVar19 = *(long *)(lVar23 + 0x30);
        uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
      }
    }
LAB_0296db1c:
    plVar35 = (long *)(lVar19 + uVar24 * 0x20 + 8);
    do {
      uVar20 = uVar24;
      if (0x5f < uVar20) goto LAB_0296db8c;
      lVar27 = *plVar35;
      if (*(short *)(lVar27 + 8) == 0) goto LAB_0296db58;
      plVar35 = plVar35 + 4;
      uVar24 = uVar20 + 1;
    } while (*(short *)(lVar27 + 8) != 0x38);
    if ((int)(uVar20 + 1) - 1U < 0x60) {
LAB_0296db58:
      lVar19 = *(long *)(lVar19 + (uVar20 & 0xffffffff) * 0x20 + 8);
      if (lVar19 != 0) {
        *(undefined2 *)(lVar19 + 8) = 0x38;
        *(undefined4 *)(lVar19 + 0xc) = uVar14;
        *(undefined1 *)(lVar19 + 10) = 0;
        *(undefined8 *)(lVar19 + 0x10) = 0;
        *(undefined8 *)(lVar19 + 0x18) = 0;
        *(long *)(*(long *)(lVar23 + 0x70) + 0x1c8) = lVar19;
        lVar23 = *plVar31;
      }
    }
LAB_0296db8c:
    iVar15 = *(int *)(lVar23 + 0x78) + 1;
    *(int *)(lVar23 + 0x78) = iVar15;
    lVar19 = *(long *)(*(long *)(*(long *)(lVar23 + 8) + 0x88) + 0x14c8);
    if (lVar19 != 0) {
      do {
        lVar27 = FUN_02999e6c(lVar23,0x56,8,1,lVar19);
        if (lVar27 == 0) break;
        if ((*(byte *)(lVar27 + 0x3f) >> 5 & 1) == 0) {
          lVar27 = *(long *)(lVar19 + 0x18);
        }
        lVar19 = lVar27;
      } while (lVar27 != 0);
      iVar15 = *(int *)(lVar23 + 0x78);
    }
    *(int *)(lVar23 + 0x78) = iVar15 + -1;
    if (iVar15 + -1 == 0) {
      for (lVar19 = *(long *)(*(long *)(*(long *)(lVar23 + 8) + 0x88) + 0x14c8); lVar19 != 0;
          lVar19 = *(long *)(lVar19 + 0x18)) {
        *(uint *)(lVar19 + 0x3c) = (uint)*(ushort *)(lVar19 + 0x3e) << 0x10;
      }
    }
    lVar23 = *plVar31;
    lVar19 = *(long *)(*(long *)(lVar23 + 0x70) + 0x1c8);
    if (lVar19 == 0) {
      iVar15 = 0;
    }
    else {
      iVar15 = *(int *)(lVar19 + 0xc);
    }
    lVar19 = *(long *)(lVar23 + 0x50);
    if (*(uint *)(lVar19 + 0x408) == 0) {
      uVar20 = 0;
    }
    else {
      memset((void *)(*(long *)(lVar19 + (ulong)*(uint *)(lVar19 + 0x408) * 0x20 + 8) + 8),0,0x410);
      *(int *)(lVar19 + 0x408) = *(int *)(lVar19 + 0x408) + -1;
      lVar19 = *(long *)(lVar23 + 0x50);
      uVar20 = (ulong)*(uint *)(lVar19 + 0x408);
    }
    *(undefined8 *)(lVar23 + 0x70) = *(undefined8 *)(lVar19 + uVar20 * 0x20 + 8);
    lVar19 = *(long *)(lVar23 + 0x30);
    uVar33 = *(uint *)(lVar19 + 0xc08);
    if (uVar33 != 0) {
      if ((uVar33 & 0xffff) < 0x60) {
        uVar20 = (ulong)uVar33 & 0xffff;
        plVar35 = (long *)(lVar19 + uVar20 * 0x20 + 8);
        do {
          uVar20 = uVar20 + 1;
          if (*(short *)(*plVar35 + 8) == 0) break;
          *(undefined2 *)(*plVar35 + 8) = 0;
          plVar35 = plVar35 + 4;
        } while (((uint)uVar20 & 0xffff) != 0x60);
        uVar33 = *(uint *)(lVar19 + 0xc08);
      }
      *(uint *)(lVar19 + 0xc08) = uVar33 - 1;
      *(undefined2 *)(*(long *)(lVar19 + (ulong)(uVar33 - 1) * 0x20 + 8) + 8) = 0;
      uVar20 = (ulong)*(uint *)(lVar19 + 0xc08);
      do {
        if (uVar20 == 0) goto LAB_0296dd20;
        uVar20 = uVar20 - 1;
        *(int *)(lVar19 + 0xc08) = (int)uVar20;
      } while (*(short *)(*(long *)(lVar19 + (uVar20 & 0xffffffff) * 0x20 + 8) + 8) != 1);
      *(int *)(lVar19 + 0xc08) = (int)uVar20 + 1;
    }
LAB_0296dd20:
    uVar33 = iVar15 * ((iVar17 * uVar32) / 100);
    uVar32 = uVar33 >> 0xc;
    if (0x800 < (uVar33 & 0xfff)) {
      uVar32 = uVar32 + 1;
    }
    uVar20 = (ulong)uVar32;
  }
  uVar33 = FUN_0293eb50(uVar20,param_5);
  uVar32 = param_4[3];
  if (uVar32 == 1) {
    if (((((*(byte *)(param_2 + 0x98) & 7) == 0) && ((*(byte *)(param_2 + 0xa0) & 7) == 0)) &&
        ((*(byte *)(param_2 + 0xa8) & 7) == 0)) &&
       ((!bVar6 && ((*(ulong *)(param_2 + 0xb0) & 7) != 0)))) {
      plVar35 = *(long **)(*(long *)(param_1 + 8) + 0x1e8);
      if (plVar35 != (long *)0x0) {
        plVar1 = plVar35 + 10;
        do {
          cVar10 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      FUN_009463f0(&local_770,plVar35 + 0xc);
      FUN_00945e04(&local_770);
      if (plVar35 != (long *)0x0) {
        plVar1 = plVar35 + 10;
        do {
          iVar17 = (int)*plVar1 + -1;
          cVar10 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *(int *)plVar1 = iVar17;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar17 == 0) {
          (**(code **)(*plVar35 + 0x10))(plVar35);
        }
      }
      uVar33 = (local_9c * uVar33) / 100;
      uVar32 = param_4[3];
      goto LAB_0296ddfc;
    }
  }
  else {
LAB_0296ddfc:
    if (((uVar32 == 2) && ((*(byte *)(param_2 + 0x98) & 7) == 0)) &&
       (((*(byte *)(param_2 + 0xa0) & 7) == 0 &&
        ((((((*(byte *)(param_2 + 0xa8) & 7) == 0 && ((*(byte *)(param_2 + 0xb0) & 7) == 0)) &&
           ((*(byte *)(param_2 + 0xb8) & 7) == 0)) &&
          (((*(byte *)(param_2 + 0xc0) & 7) == 0 && (!bVar6)))) &&
         ((*(ulong *)(param_2 + 200) & 7) != 0)))))) {
      plVar35 = *(long **)(*(long *)(param_1 + 8) + 0x1e8);
      if (plVar35 != (long *)0x0) {
        plVar1 = plVar35 + 10;
        do {
          cVar10 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      FUN_009463f0(&local_770,plVar35 + 0xc);
      FUN_00945e04(&local_770);
      if (plVar35 != (long *)0x0) {
        plVar1 = plVar35 + 10;
        do {
          iVar17 = (int)*plVar1 + -1;
          cVar10 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = iVar17;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar17 == 0) {
          (**(code **)(*plVar35 + 0x10))(plVar35);
        }
      }
      uVar33 = (local_94 * uVar33) / 100;
    }
  }
  if ((((*(byte *)(param_3 + 0x98) & 7) == 0) && ((*(byte *)(param_3 + 0xa0) & 7) == 0)) &&
     (((*(byte *)(param_3 + 0xa8) & 7) == 0 &&
      ((((*(byte *)(param_3 + 0xb0) & 7) == 0 && ((*(byte *)(param_3 + 0xb8) & 7) == 0)) &&
       ((*(byte *)(param_3 + 0xc0) & 7) != 0)))))) {
    plVar35 = *(long **)(*(long *)(param_1 + 8) + 0x1e8);
    if (plVar35 != (long *)0x0) {
      plVar1 = plVar35 + 10;
      do {
        cVar10 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    FUN_009463f0(&local_770,plVar35 + 0xc);
    FUN_00945e04(&local_770);
    if (plVar35 != (long *)0x0) {
      plVar1 = plVar35 + 10;
      do {
        iVar17 = (int)*plVar1 + -1;
        cVar10 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = iVar17;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar17 == 0) {
        (**(code **)(*plVar35 + 0x10))(plVar35);
      }
    }
    uVar33 = (local_84 * uVar33) / 100;
  }
  uVar20 = *(ulong *)(param_2 + 0x208);
  if ((uVar20 & 7) == 0) {
    uVar32 = 0;
  }
  else {
    switch((uint)uVar20 & 7) {
    case 1:
    case 2:
    case 3:
      uVar32 = (uint)(uVar20 >> 0xe);
      break;
    case 4:
      uVar32 = (uint)(uVar20 >> 0x14);
      break;
    default:
      uVar32 = 0;
    }
    uVar32 = uVar32 & 0xffff;
  }
  if (uVar32 == *param_4) {
    plVar35 = *(long **)(*(long *)(param_1 + 8) + 0x1e8);
    if (plVar35 != (long *)0x0) {
      plVar1 = plVar35 + 10;
      do {
        cVar10 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    FUN_009463f0(&local_770,plVar35 + 0xc);
    FUN_00945e04(&local_770);
    if (plVar35 != (long *)0x0) {
      plVar1 = plVar35 + 10;
      do {
        iVar17 = (int)*plVar1 + -1;
        cVar10 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = iVar17;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar17 == 0) {
        (**(code **)(*plVar35 + 0x10))(plVar35);
      }
    }
    uVar33 = (local_80 * uVar33) / 100;
  }
  if ((*(byte *)(param_3 + 0x208) & 7) != 0) {
    plVar35 = *(long **)(*(long *)(param_1 + 8) + 0x1e8);
    if (plVar35 != (long *)0x0) {
      plVar1 = plVar35 + 10;
      do {
        cVar10 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    FUN_009463f0(&local_770,plVar35 + 0xc);
    FUN_00945e04(&local_770);
    if (plVar35 != (long *)0x0) {
      plVar1 = plVar35 + 10;
      do {
        iVar17 = (int)*plVar1 + -1;
        cVar10 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = iVar17;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar17 == 0) {
        (**(code **)(*plVar35 + 0x10))(plVar35);
      }
    }
    uVar33 = (local_7c * uVar33) / 100;
  }
  uVar20 = *(ulong *)(param_2 + 0x220);
  if ((uVar20 & 7) != 0) {
    uVar18 = (uint)uVar20;
    uVar32 = uVar18 & 7;
    if (uVar32 == 4) {
      uVar18 = uVar18 >> 0xe;
joined_r0x0296e0fc:
      uVar20 = (ulong)(uVar18 & 0x3f);
      if ((uVar18 & 0x3f) != 0) goto LAB_0296e114;
LAB_0296e100:
      uVar32 = 0x96;
    }
    else {
      if (uVar32 == 3) {
        uVar18 = uVar18 >> 8;
        goto joined_r0x0296e0fc;
      }
      if ((uVar32 != 2) || (uVar20 = uVar20 >> 0xe, (uVar20 & 0xffff) == 0)) goto LAB_0296e100;
LAB_0296e114:
      lVar19 = (&DAT_0428af30)[(uVar20 & 0xffff) * 6];
      if (lVar19 == 0) {
        plVar35 = &DAT_0428af30;
      }
      else {
        plVar35 = &DAT_0428af30;
        if (*(char *)(lVar19 + 0x1e1) != '\0') {
          plVar35 = &DAT_0428af30 + (uVar20 & 0xffff) * 6;
        }
      }
      piVar2 = (int *)((long)*(uint **)(*plVar35 + 0x250) + (ulong)**(uint **)(*plVar35 + 0x250));
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x7b) ||
         (uVar20 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x3d], uVar20 == 0)) {
        uVar32 = 0;
      }
      else {
        uVar32 = (uint)*(byte *)((long)piVar2 + uVar20);
      }
    }
    uVar33 = (uVar32 * uVar33) / 100;
  }
  lVar23 = *plVar31;
  lVar19 = *(long *)(lVar23 + 0x30);
  uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
  uVar20 = uVar24 << 5 | 8;
  uVar26 = uVar24;
  do {
    uVar29 = uVar26;
    if (0x5f < uVar29) goto LAB_0296e230;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296e1e4;
    uVar20 = uVar20 + 0x20;
    uVar26 = uVar29 + 1;
  } while (sVar5 != 0x38);
  if ((int)(uVar29 + 1) - 1U < 0x60) {
LAB_0296e1e4:
    lVar27 = *(long *)(lVar19 + (uVar29 & 0xffffffff) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 0x38;
      *(undefined8 *)(lVar27 + 0xc) = 0x2900001000;
      *(undefined4 *)(lVar27 + 0x14) = 0x20000;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(undefined1 *)(lVar27 + 10) = 3;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x1c8) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296e230:
  uVar20 = uVar24 << 5 | 8;
  lVar27 = 0;
  do {
    lVar28 = lVar27;
    if (0x5f < uVar24 + lVar28) goto LAB_0296e2b0;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296e278;
    uVar20 = uVar20 + 0x20;
    lVar27 = lVar28 + 1;
  } while (sVar5 != 0x35);
  if (((int)uVar24 + (int)(lVar28 + 1)) - 1U < 0x60) {
LAB_0296e278:
    lVar27 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar28) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 0x35;
      *(uint *)(lVar27 + 0xc) = uVar33;
      *(undefined1 *)(lVar27 + 10) = 0;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x1b0) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296e2b0:
  uVar20 = uVar24 << 5 | 8;
  lVar27 = 0;
  do {
    lVar28 = lVar27;
    if (0x5f < uVar24 + lVar28) goto LAB_0296e338;
    sVar5 = *(short *)(*(long *)(lVar19 + uVar20) + 8);
    if (sVar5 == 0) goto LAB_0296e2f8;
    uVar20 = uVar20 + 0x20;
    lVar27 = lVar28 + 1;
  } while (sVar5 != 100);
  if (((int)uVar24 + (int)(lVar28 + 1)) - 1U < 0x60) {
LAB_0296e2f8:
    lVar27 = *(long *)(lVar19 + (ulong)(uint)((int)uVar24 + (int)lVar28) * 0x20 + 8);
    if (lVar27 != 0) {
      *(undefined2 *)(lVar27 + 8) = 100;
      *(undefined8 *)(lVar27 + 0xc) = 0;
      *(undefined8 *)(lVar27 + 0x14) = 0;
      *(undefined4 *)(lVar27 + 0x1c) = 0;
      *(undefined1 *)(lVar27 + 10) = 1;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x328) = lVar27;
      lVar23 = *plVar31;
      lVar19 = *(long *)(lVar23 + 0x30);
      uVar24 = (ulong)*(uint *)(lVar19 + 0xc08);
    }
  }
LAB_0296e338:
  plVar35 = (long *)(lVar19 + uVar24 * 0x20 + 8);
  do {
    uVar20 = uVar24;
    if (0x5f < uVar20) goto LAB_0296e3ac;
    lVar27 = *plVar35;
    if (*(short *)(lVar27 + 8) == 0) goto LAB_0296e374;
    plVar35 = plVar35 + 4;
    uVar24 = uVar20 + 1;
  } while (*(short *)(lVar27 + 8) != 0x65);
  if ((int)(uVar20 + 1) - 1U < 0x60) {
LAB_0296e374:
    lVar19 = *(long *)(lVar19 + (uVar20 & 0xffffffff) * 0x20 + 8);
    if (lVar19 != 0) {
      *(undefined2 *)(lVar19 + 8) = 0x65;
      *(undefined8 *)(lVar19 + 0xc) = 0;
      *(undefined8 *)(lVar19 + 0x14) = 0;
      *(undefined4 *)(lVar19 + 0x1c) = 0;
      *(undefined1 *)(lVar19 + 10) = 1;
      *(long *)(*(long *)(lVar23 + 0x70) + 0x330) = lVar19;
      lVar23 = *plVar31;
    }
  }
LAB_0296e3ac:
  iVar17 = *(int *)(lVar23 + 0x78) + 1;
  *(int *)(lVar23 + 0x78) = iVar17;
  lVar19 = *(long *)(*(long *)(*(long *)(lVar23 + 8) + 0x88) + 0x14c8);
  if (lVar19 != 0) {
    do {
      lVar27 = FUN_02999e6c(lVar23,0x5c,8,1,lVar19);
      if (lVar27 == 0) break;
      if ((*(byte *)(lVar27 + 0x3f) >> 5 & 1) == 0) {
        lVar27 = *(long *)(lVar19 + 0x18);
      }
      lVar19 = lVar27;
    } while (lVar27 != 0);
    iVar17 = *(int *)(lVar23 + 0x78);
  }
  *(int *)(lVar23 + 0x78) = iVar17 + -1;
  if (iVar17 + -1 == 0) {
    for (lVar19 = *(long *)(*(long *)(*(long *)(lVar23 + 8) + 0x88) + 0x14c8); lVar19 != 0;
        lVar19 = *(long *)(lVar19 + 0x18)) {
      *(uint *)(lVar19 + 0x3c) = (uint)*(ushort *)(lVar19 + 0x3e) << 0x10;
    }
  }
  lVar23 = *plVar31;
  lVar19 = *(long *)(*(long *)(lVar23 + 0x70) + 0x1c8);
  iVar17 = 0;
  if (lVar19 != 0) {
    iVar17 = *(int *)(lVar19 + 0xc);
  }
  lVar19 = *(long *)(*(long *)(lVar23 + 0x70) + 0x1b0);
  iVar15 = 0;
  if (lVar19 != 0) {
    iVar15 = *(int *)(lVar19 + 0xc);
  }
  uVar33 = (uint)(iVar15 * iVar17) >> 0xc;
  if (0x800 < (iVar15 * iVar17 & 0xfffU)) {
    uVar33 = uVar33 + 1;
  }
LAB_0296e470:
  iVar17 = *(int *)(lVar23 + 0x78) + 1;
  *(int *)(lVar23 + 0x78) = iVar17;
  lVar19 = *(long *)(*(long *)(*(long *)(lVar23 + 8) + 0x88) + 0x14c8);
  if (lVar19 != 0) {
    do {
      lVar27 = FUN_02999e6c(lVar23,0x5d,8,1,lVar19);
      if (lVar27 == 0) break;
      if ((*(byte *)(lVar27 + 0x3f) >> 5 & 1) == 0) {
        lVar27 = *(long *)(lVar19 + 0x18);
      }
      lVar19 = lVar27;
    } while (lVar27 != 0);
    iVar17 = *(int *)(lVar23 + 0x78);
  }
  *(int *)(lVar23 + 0x78) = iVar17 + -1;
  if (iVar17 + -1 == 0) {
    for (lVar19 = *(long *)(*(long *)(*(long *)(lVar23 + 8) + 0x88) + 0x14c8); lVar19 != 0;
        lVar19 = *(long *)(lVar19 + 0x18)) {
      *(uint *)(lVar19 + 0x3c) = (uint)*(ushort *)(lVar19 + 0x3e) << 0x10;
    }
  }
  lVar19 = *plVar31;
  lVar23 = *(long *)(lVar19 + 0x50);
  if (*(uint *)(lVar23 + 0x408) == 0) {
    uVar20 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar23 + (ulong)*(uint *)(lVar23 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar23 + 0x408) = *(int *)(lVar23 + 0x408) + -1;
    lVar23 = *(long *)(lVar19 + 0x50);
    uVar20 = (ulong)*(uint *)(lVar23 + 0x408);
  }
  *(undefined8 *)(lVar19 + 0x70) = *(undefined8 *)(lVar23 + uVar20 * 0x20 + 8);
  lVar19 = *(long *)(lVar19 + 0x30);
  uVar32 = *(uint *)(lVar19 + 0xc08);
  if (uVar32 != 0) {
    if ((uVar32 & 0xffff) < 0x60) {
      uVar20 = (ulong)uVar32 & 0xffff;
      plVar31 = (long *)(lVar19 + uVar20 * 0x20 + 8);
      do {
        uVar20 = uVar20 + 1;
        if (*(short *)(*plVar31 + 8) == 0) break;
        *(undefined2 *)(*plVar31 + 8) = 0;
        plVar31 = plVar31 + 4;
      } while (((uint)uVar20 & 0xffff) != 0x60);
      uVar32 = *(uint *)(lVar19 + 0xc08);
    }
    *(uint *)(lVar19 + 0xc08) = uVar32 - 1;
    *(undefined2 *)(*(long *)(lVar19 + (ulong)(uVar32 - 1) * 0x20 + 8) + 8) = 0;
    uVar20 = (ulong)*(uint *)(lVar19 + 0xc08);
    do {
      if (uVar20 == 0) goto LAB_0296e5ec;
      uVar20 = uVar20 - 1;
      *(int *)(lVar19 + 0xc08) = (int)uVar20;
    } while (*(short *)(*(long *)(lVar19 + (uVar20 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar19 + 0xc08) = (int)uVar20 + 1;
  }
LAB_0296e5ec:
  if (uVar33 == 0 && iVar21 == 0) {
    uVar33 = 1;
  }
  *param_11 = (short)uVar33;
  return iVar21 != 0 || iVar13 != 0;
}


