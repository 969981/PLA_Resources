/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0294f0dc; name: FUN_0294f0dc
 */


void FUN_0294f0dc(long param_1,undefined8 *param_2)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  byte bVar6;
  char cVar7;
  undefined2 uVar8;
  ushort uVar9;
  ushort uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  short sVar16;
  ulong uVar17;
  ulong uVar18;
  int *piVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  
  bVar1 = *(char *)(*(long *)(param_2[1] + 0x98) + 0x19) == '\0';
  if (bVar1) {
    FUN_02c66480();
  }
  *(undefined8 *)(param_1 + 0x4a8) = *param_2;
  FUN_02c653d0(*(undefined8 *)(param_1 + 0x60),param_2[1]);
  *(undefined1 *)(param_1 + 0x7d) = *(undefined1 *)(param_2 + 6);
  uVar8 = FUN_02c6849c(*(undefined8 *)(param_2[1] + 0x98));
  *(undefined2 *)(param_1 + 0x70) = uVar8;
  if (*(long *)(*(long *)(param_2[1] + 0x98) + 8) == 0) {
    uVar8 = FUN_02c5e31c();
  }
  else {
    uVar8 = FUN_02c66b3c(*(long *)(param_2[1] + 0x98));
  }
  *(undefined2 *)(param_1 + 0x74) = uVar8;
  lVar14 = *(long *)(*(long *)(param_1 + 0x60) + 0x98);
  if (*(long *)(lVar14 + 8) == 0) {
    uVar8 = FUN_02c5e31c();
  }
  else {
    uVar8 = FUN_02c66e84(lVar14);
  }
  *(undefined2 *)(param_1 + 0x72) = uVar8;
  uVar9 = FUN_02c687d4(*(undefined8 *)(param_2[1] + 0x98));
  uVar10 = 0;
  if (uVar9 < 0x725) {
    uVar10 = uVar9;
  }
  *(ushort *)(param_1 + 0x76) = uVar10;
  *(undefined2 *)(param_1 + 0x78) = 0;
  *(undefined2 *)(param_1 + 0x28c) = 0;
  *(undefined1 *)(param_1 + 0x28e) = 0x1f;
  *(ushort *)(param_1 + 0x87) = *(ushort *)(param_1 + 0x87) & 0xff1f;
  *(undefined4 *)(param_1 + 0x68) = **(undefined4 **)(*(long *)(param_2[1] + 0x98) + 0x10);
  uVar5 = FUN_02c6fc70(*(undefined8 *)(param_2[1] + 0x98));
  *(undefined1 *)(param_1 + 0x80) = uVar5;
  uVar5 = FUN_02c6bbd4(*(undefined8 *)(param_2[1] + 0x98));
  *(undefined1 *)(param_1 + 0x81) = uVar5;
  uVar5 = FUN_02c6bf10(*(undefined8 *)(param_2[1] + 0x98));
  *(undefined1 *)(param_1 + 0x82) = uVar5;
  uVar5 = FUN_02c6c24c(*(undefined8 *)(param_2[1] + 0x98));
  *(undefined1 *)(param_1 + 0x83) = uVar5;
  uVar5 = FUN_02c6c588(*(undefined8 *)(param_2[1] + 0x98));
  *(undefined1 *)(param_1 + 0x84) = uVar5;
  uVar5 = FUN_02c6c8c4(*(undefined8 *)(param_2[1] + 0x98));
  *(undefined1 *)(param_1 + 0x85) = uVar5;
  uVar5 = FUN_02c6cc00(*(undefined8 *)(param_2[1] + 0x98));
  *(undefined1 *)(param_1 + 0x86) = uVar5;
  uVar10 = FUN_02c6f924(*(undefined8 *)(param_2[1] + 0x98));
  *(ushort *)(param_1 + 0x87) = *(ushort *)(param_1 + 0x87) & 0xffe0 | uVar10 & 0x1f;
  uVar8 = FUN_02c69538(*(undefined8 *)(param_2[1] + 0x98));
  *(undefined2 *)(param_1 + 0x7a) = uVar8;
  uVar5 = FUN_02c5fb2c(param_2[1]);
  uVar18 = (ulong)*(ushort *)(param_1 + 0x70);
  uVar10 = *(ushort *)(param_1 + 0x87);
  bVar4 = uVar18 < 0x38a;
  bVar3 = (*(ushort *)(param_1 + 0x70) | 1) != 0x38b;
  uVar2 = 0;
  if (bVar4 && bVar3) {
    uVar2 = uVar10 & 0x1f;
  }
  uVar17 = (ulong)uVar2;
  *(undefined1 *)(param_1 + 0x7c) = uVar5;
  if (uVar2 < 0x1c) {
    uVar20 = 0;
    if (bVar4 && bVar3) {
      uVar20 = uVar18;
    }
    lVar14 = *(&DAT_043f23a0)[uVar20 * 4];
    uVar20 = (&DAT_043f23a0)[uVar20 * 4][1] - lVar14 >> 3;
    if ((uVar20 <= uVar17) || (*(long *)(lVar14 + uVar17 * 8) == 0)) goto LAB_0294f308;
    uVar21 = (ulong)uVar2;
    if (uVar20 <= uVar21) goto LAB_0294fc80;
  }
  else {
LAB_0294f308:
    uVar21 = 0;
    lVar14 = *DAT_043f23a0;
    if (DAT_043f23a0[1] - lVar14 >> 3 == 0) goto LAB_0294fc80;
  }
  piVar19 = *(int **)(lVar14 + uVar21 * 8);
  if ((*(ushort *)((long)piVar19 - (long)*piVar19) < 0x17) ||
     (uVar20 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[0xb], uVar20 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined1 *)((long)piVar19 + uVar20);
  }
  *(undefined1 *)(param_1 + 0x7e) = uVar5;
  if (uVar2 < 0x1c) {
    uVar20 = 0;
    if (bVar4 && bVar3) {
      uVar20 = uVar18;
    }
    lVar14 = *(&DAT_043f23a0)[uVar20 * 4];
    uVar18 = (&DAT_043f23a0)[uVar20 * 4][1] - lVar14 >> 3;
    if ((uVar18 <= uVar17) || (*(long *)(lVar14 + uVar17 * 8) == 0)) goto LAB_0294f390;
  }
  else {
LAB_0294f390:
    uVar17 = 0;
    lVar14 = *DAT_043f23a0;
    uVar18 = DAT_043f23a0[1] - lVar14 >> 3;
  }
  if (uVar18 <= uVar17) goto LAB_0294fc80;
  piVar19 = *(int **)(lVar14 + uVar17 * 8);
  if ((*(ushort *)((long)piVar19 - (long)*piVar19) < 0x1f) ||
     (uVar18 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[0xf], uVar18 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined1 *)((long)piVar19 + uVar18);
  }
  *(undefined1 *)(param_1 + 0x7f) = uVar5;
  *(undefined1 *)(param_1 + 0x2b2) = 0;
  *(ushort *)(param_1 + 0x87) = uVar10 & 0xfeff;
  uVar10 = uVar10 & 0xfcff | (ushort)*(byte *)((long)param_2 + 0x32) << 9;
  *(ushort *)(param_1 + 0x87) = uVar10;
  *(ushort *)(param_1 + 0x87) = uVar10 & 0xfbff | (ushort)*(byte *)((long)param_2 + 0x33) << 10;
  *(undefined4 *)(param_1 + 0x2b4) = *(undefined4 *)((long)param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)(param_1 + 700) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)((long)param_2 + 0x3c);
  *(undefined2 *)(param_1 + 0x2b0) = 0x1f00;
  *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)(param_1 + 0x294) = *(undefined1 *)((long)param_2 + 0x14);
  *(undefined1 *)(param_1 + 0x295) = *(undefined1 *)((long)param_2 + 0x15);
  *(undefined1 *)(param_1 + 0x296) = *(undefined1 *)((long)param_2 + 0x16);
  *(undefined1 *)(param_1 + 0x297) = *(undefined1 *)((long)param_2 + 0x17);
  *(undefined1 *)(param_1 + 0x298) = *(undefined1 *)(param_2 + 3);
  *(undefined8 *)(param_1 + 0x2a8) = param_2[5];
  *(undefined8 *)(param_1 + 0x2a0) = param_2[4];
  lVar14 = param_2[1];
  *(undefined2 *)(param_1 + 0x2ea) = 0;
  bVar6 = FUN_02c69e70(*(undefined8 *)(lVar14 + 0x98));
  *(byte *)(param_1 + 0x2ec) = bVar6;
  *(ushort *)(param_1 + 0x2ea) = *(short *)(param_1 + 0x2ea) + (ushort)bVar6;
  bVar6 = FUN_02c6a1a8(*(undefined8 *)(lVar14 + 0x98));
  *(byte *)(param_1 + 0x2ed) = bVar6;
  *(ushort *)(param_1 + 0x2ea) = *(short *)(param_1 + 0x2ea) + (ushort)bVar6;
  bVar6 = FUN_02c6a4e0(*(undefined8 *)(lVar14 + 0x98));
  *(byte *)(param_1 + 0x2ee) = bVar6;
  *(ushort *)(param_1 + 0x2ea) = *(short *)(param_1 + 0x2ea) + (ushort)bVar6;
  bVar6 = FUN_02c6a818(*(undefined8 *)(lVar14 + 0x98));
  *(byte *)(param_1 + 0x2f0) = bVar6;
  *(ushort *)(param_1 + 0x2ea) = *(short *)(param_1 + 0x2ea) + (ushort)bVar6;
  bVar6 = FUN_02c6ab50(*(undefined8 *)(lVar14 + 0x98));
  *(byte *)(param_1 + 0x2f1) = bVar6;
  *(ushort *)(param_1 + 0x2ea) = *(short *)(param_1 + 0x2ea) + (ushort)bVar6;
  bVar6 = FUN_02c6ae88(*(undefined8 *)(lVar14 + 0x98));
  *(byte *)(param_1 + 0x2ef) = bVar6;
  *(ushort *)(param_1 + 0x2ea) = *(short *)(param_1 + 0x2ea) + (ushort)bVar6;
  cVar7 = FUN_02c73748(*(undefined8 *)(lVar14 + 0x98));
  *(bool *)(param_1 + 0x2f2) = cVar7 != '\0';
  *(undefined1 *)(param_1 + 0x2f3) = 0;
  lVar14 = *(long *)(*(long *)(param_1 + 0x60) + 0x98);
  if (*(long *)(lVar14 + 8) == 0) {
    uVar8 = FUN_02c5e31c();
  }
  else {
    uVar8 = FUN_02c66b3c(lVar14);
  }
  *(undefined2 *)(param_1 + 0x74) = uVar8;
  lVar14 = *(long *)(*(long *)(param_1 + 0x60) + 0x98);
  if (*(long *)(lVar14 + 8) == 0) {
    uVar8 = FUN_02c5e31c();
  }
  else {
    uVar8 = FUN_02c66e84(lVar14);
  }
  *(undefined2 *)(param_1 + 0x72) = uVar8;
  uVar11 = FUN_02c68e44(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x98));
  *(undefined4 *)(param_1 + 0x6c) = uVar11;
  FUN_0294fc84(param_1,1,1);
  uVar8 = FUN_02c69538(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x98));
  *(undefined2 *)(param_1 + 0x364) = uVar8;
  bVar6 = FUN_02c6f924(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x98));
  uVar10 = *(ushort *)(param_1 + 0x70);
  uVar18 = (ulong)uVar10;
  bVar4 = (uVar10 | 1) != 0x38b;
  uVar2 = 0;
  if (uVar18 < 0x38a && bVar4) {
    uVar2 = (uint)bVar6;
  }
  uVar17 = (ulong)uVar2;
  *(byte *)(param_1 + 0x369) = bVar6;
  if (uVar2 < 0x1c) {
    uVar20 = 0;
    if (uVar18 < 0x38a && bVar4) {
      uVar20 = uVar18;
    }
    lVar14 = *(&DAT_043f23a0)[uVar20 * 4];
    uVar18 = (&DAT_043f23a0)[uVar20 * 4][1] - lVar14 >> 3;
    if ((uVar18 <= uVar17) || (*(long *)(lVar14 + uVar17 * 8) == 0)) goto LAB_0294f618;
  }
  else {
LAB_0294f618:
    uVar17 = 0;
    lVar14 = *DAT_043f23a0;
    uVar18 = DAT_043f23a0[1] - lVar14 >> 3;
  }
  if (uVar18 <= uVar17) {
LAB_0294fc80:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  piVar19 = *(int **)(lVar14 + uVar17 * 8);
  if (((*(ushort *)((long)piVar19 - (long)*piVar19) < 0x2f) ||
      (uVar18 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[0x17], uVar18 == 0)) ||
     (sVar16 = *(short *)((long)piVar19 + uVar18), sVar16 == 0)) {
    sVar16 = 1;
  }
  *(short *)(param_1 + 0x366) = sVar16;
  plVar22 = (long *)(param_2[1] + 0x98);
  bVar4 = *(char *)(*plVar22 + 0x19) == '\0';
  if (bVar4) {
    FUN_02c66480();
  }
  *(undefined4 *)(param_1 + 0x2fb) = 0;
  *(undefined4 *)(param_1 + 0x317) = 0;
  *(undefined4 *)(param_1 + 0x333) = 0;
  *(undefined4 *)(param_1 + 0x34f) = 0;
  iVar12 = FUN_02c6b1c0(*plVar22,0);
  if (*(int *)(param_1 + 0x2f4) != iVar12) {
    *(undefined2 *)(param_1 + 0x2fb) = 0;
    *(undefined1 *)(param_1 + 0x2fd) = 0;
  }
  *(int *)(param_1 + 0x2f4) = iVar12;
  if (iVar12 == 0) {
    bVar3 = false;
    cVar7 = '\0';
    *(undefined2 *)(param_1 + 0x2f8) = 0;
    *(undefined1 *)(param_1 + 0x2fa) = 0;
  }
  else {
    uVar5 = FUN_02c6b51c(*plVar22,0);
    *(undefined1 *)(param_1 + 0x2f8) = uVar5;
    uVar18 = FUN_02c6b1c0(*plVar22,0);
    lVar14 = (&DAT_0428af30)[(uVar18 & 0xffffffff) * 6];
    if (lVar14 == 0) {
      plVar15 = &DAT_0428af30;
    }
    else {
      plVar15 = &DAT_0428af30;
      if (*(char *)(lVar14 + 0x1e1) != '\0') {
        plVar15 = &DAT_0428af30 + (uVar18 & 0xffffffff) * 6;
      }
    }
    piVar19 = (int *)((long)*(uint **)(*plVar15 + 0x250) + (ulong)**(uint **)(*plVar15 + 0x250));
    if ((*(ushort *)((long)piVar19 - (long)*piVar19) < 0x13) ||
       (uVar18 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[9], uVar18 == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined1 *)((long)piVar19 + uVar18);
    }
    *(undefined1 *)(param_1 + 0x2f9) = uVar5;
    *(undefined1 *)(param_1 + 0x2fa) = 0;
    iVar12 = FUN_02c6b1c0(*plVar22,0);
    iVar13 = FUN_02c6dc28(*plVar22);
    bVar3 = iVar13 == iVar12;
    cVar7 = '\x01';
  }
  *(bool *)(param_1 + 0x2fe) = bVar3;
  iVar12 = FUN_02c6b1c0(*plVar22,1);
  if (*(int *)(param_1 + 0x310) != iVar12) {
    *(undefined2 *)(param_1 + 0x317) = 0;
    *(undefined1 *)(param_1 + 0x319) = 0;
  }
  *(int *)(param_1 + 0x310) = iVar12;
  if (iVar12 == 0) {
    bVar3 = false;
    *(undefined2 *)(param_1 + 0x314) = 0;
    *(undefined1 *)(param_1 + 0x316) = 0;
  }
  else {
    uVar5 = FUN_02c6b51c(*plVar22,1);
    *(undefined1 *)(param_1 + 0x314) = uVar5;
    uVar18 = FUN_02c6b1c0(*plVar22,1);
    lVar14 = (&DAT_0428af30)[(uVar18 & 0xffffffff) * 6];
    if (lVar14 == 0) {
      plVar15 = &DAT_0428af30;
    }
    else {
      plVar15 = &DAT_0428af30;
      if (*(char *)(lVar14 + 0x1e1) != '\0') {
        plVar15 = &DAT_0428af30 + (uVar18 & 0xffffffff) * 6;
      }
    }
    piVar19 = (int *)((long)*(uint **)(*plVar15 + 0x250) + (ulong)**(uint **)(*plVar15 + 0x250));
    if ((*(ushort *)((long)piVar19 - (long)*piVar19) < 0x13) ||
       (uVar18 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[9], uVar18 == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined1 *)((long)piVar19 + uVar18);
    }
    *(undefined1 *)(param_1 + 0x315) = uVar5;
    *(undefined1 *)(param_1 + 0x316) = 0;
    iVar12 = FUN_02c6b1c0(*plVar22,1);
    iVar13 = FUN_02c6dc28(*plVar22);
    bVar3 = iVar13 == iVar12;
    cVar7 = cVar7 + '\x01';
  }
  *(bool *)(param_1 + 0x31a) = bVar3;
  iVar12 = FUN_02c6b1c0(*plVar22,2);
  if (*(int *)(param_1 + 0x32c) != iVar12) {
    *(undefined2 *)(param_1 + 0x333) = 0;
    *(undefined1 *)(param_1 + 0x335) = 0;
  }
  *(int *)(param_1 + 0x32c) = iVar12;
  if (iVar12 == 0) {
    bVar3 = false;
    *(undefined2 *)(param_1 + 0x330) = 0;
    *(undefined1 *)(param_1 + 0x332) = 0;
  }
  else {
    uVar5 = FUN_02c6b51c(*plVar22,2);
    *(undefined1 *)(param_1 + 0x330) = uVar5;
    uVar18 = FUN_02c6b1c0(*plVar22,2);
    lVar14 = (&DAT_0428af30)[(uVar18 & 0xffffffff) * 6];
    if (lVar14 == 0) {
      plVar15 = &DAT_0428af30;
    }
    else {
      plVar15 = &DAT_0428af30;
      if (*(char *)(lVar14 + 0x1e1) != '\0') {
        plVar15 = &DAT_0428af30 + (uVar18 & 0xffffffff) * 6;
      }
    }
    piVar19 = (int *)((long)*(uint **)(*plVar15 + 0x250) + (ulong)**(uint **)(*plVar15 + 0x250));
    if ((*(ushort *)((long)piVar19 - (long)*piVar19) < 0x13) ||
       (uVar18 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[9], uVar18 == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined1 *)((long)piVar19 + uVar18);
    }
    *(undefined1 *)(param_1 + 0x331) = uVar5;
    *(undefined1 *)(param_1 + 0x332) = 0;
    iVar12 = FUN_02c6b1c0(*plVar22,2);
    iVar13 = FUN_02c6dc28(*plVar22);
    bVar3 = iVar13 == iVar12;
    cVar7 = cVar7 + '\x01';
  }
  *(bool *)(param_1 + 0x336) = bVar3;
  iVar12 = FUN_02c6b1c0(*plVar22,3);
  if (*(int *)(param_1 + 0x348) != iVar12) {
    *(undefined2 *)(param_1 + 0x34f) = 0;
    *(undefined1 *)(param_1 + 0x351) = 0;
  }
  *(int *)(param_1 + 0x348) = iVar12;
  if (iVar12 == 0) {
    bVar3 = false;
    *(undefined2 *)(param_1 + 0x34c) = 0;
    *(undefined1 *)(param_1 + 0x34e) = 0;
  }
  else {
    uVar5 = FUN_02c6b51c(*plVar22,3);
    *(undefined1 *)(param_1 + 0x34c) = uVar5;
    uVar18 = FUN_02c6b1c0(*plVar22,3);
    lVar14 = (&DAT_0428af30)[(uVar18 & 0xffffffff) * 6];
    if (lVar14 == 0) {
      plVar15 = &DAT_0428af30;
    }
    else {
      plVar15 = &DAT_0428af30;
      if (*(char *)(lVar14 + 0x1e1) != '\0') {
        plVar15 = &DAT_0428af30 + (uVar18 & 0xffffffff) * 6;
      }
    }
    piVar19 = (int *)((long)*(uint **)(*plVar15 + 0x250) + (ulong)**(uint **)(*plVar15 + 0x250));
    if ((*(ushort *)((long)piVar19 - (long)*piVar19) < 0x13) ||
       (uVar18 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[9], uVar18 == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined1 *)((long)piVar19 + uVar18);
    }
    *(undefined1 *)(param_1 + 0x34d) = uVar5;
    *(undefined1 *)(param_1 + 0x34e) = 0;
    iVar12 = FUN_02c6b1c0(*plVar22,3);
    iVar13 = FUN_02c6dc28(*plVar22);
    bVar3 = iVar13 == iVar12;
    cVar7 = cVar7 + '\x01';
  }
  *(bool *)(param_1 + 0x352) = bVar3;
  *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_1 + 0x2f4);
  *(undefined4 *)(param_1 + 0x307) = *(undefined4 *)(param_1 + 0x2fb);
  *(undefined1 *)(param_1 + 0x30c) = 1;
  *(undefined8 *)(param_1 + 0x31c) = *(undefined8 *)(param_1 + 0x310);
  *(undefined4 *)(param_1 + 0x323) = *(undefined4 *)(param_1 + 0x317);
  *(undefined1 *)(param_1 + 0x328) = 1;
  *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)(param_1 + 0x32c);
  *(undefined4 *)(param_1 + 0x33f) = *(undefined4 *)(param_1 + 0x333);
  *(undefined1 *)(param_1 + 0x344) = 1;
  *(undefined4 *)(param_1 + 0x35b) = *(undefined4 *)(param_1 + 0x34f);
  *(undefined8 *)(param_1 + 0x354) = *(undefined8 *)(param_1 + 0x348);
  *(undefined1 *)(param_1 + 0x360) = 1;
  if (bVar4 && *(char *)(*plVar22 + 0x19) != '\0') {
    FUN_02c66640();
  }
  *(char *)(param_1 + 0x368) = cVar7;
  *(undefined1 *)(param_1 + 0x36c) = 0;
  if (*(char *)(param_1 + 0x2e4) != '\x01') {
    *(undefined1 *)(param_1 + 0x2e4) = 1;
    *(undefined1 *)(param_1 + 0x2e7) = 0;
  }
  if (*(char *)(param_1 + 0x2e5) != '\x01') {
    *(undefined1 *)(param_1 + 0x2e5) = 1;
    *(undefined1 *)(param_1 + 0x2e8) = 0;
  }
  if (*(char *)(param_1 + 0x2e6) != '\x01') {
    *(undefined1 *)(param_1 + 0x2e6) = 1;
    *(undefined1 *)(param_1 + 0x2e9) = 0;
  }
  memset((void *)(param_1 + 0x90),0,0x1dd);
  iVar12 = FUN_02c667f4(*(undefined8 *)(param_2[1] + 0x98));
  lVar14 = DAT_043ecde0;
  if (iVar12 == 0) goto LAB_0294fb40;
  bVar6 = *(byte *)(param_1 + 0x7d);
  if (iVar12 - 3U < 5) {
LAB_0294fb20:
    uVar18 = (ulong)((uint)bVar6 << 3 | 1) & 0xff;
  }
  else if (iVar12 == 2) {
    uVar18 = *(ulong *)(DAT_043ecde0 + 8);
    uVar17 = *(ulong *)(DAT_043ecde0 + 0x10);
    do {
      uVar21 = uVar18 ^ uVar17;
      iVar13 = (int)uVar17;
      uVar17 = uVar21 >> 0x1b | uVar21 << 0x25;
      uVar20 = (ulong)(uint)((int)uVar18 + iVar13) & 3;
      uVar18 = uVar21 ^ (uVar18 >> 0x28 | uVar18 << 0x18) ^ uVar21 << 0x10;
    } while (uVar20 == 3);
    *(ulong *)(DAT_043ecde0 + 8) = uVar18;
    *(ulong *)(lVar14 + 0x10) = uVar17;
    uVar18 = ((ulong)((uint)bVar6 << 3 | 2) & 0xff | uVar20 << 8) + 0x200;
  }
  else {
    if (iVar12 == 1) goto LAB_0294fb20;
    uVar18 = ((ulong)bVar6 & 0x1f) << 3;
  }
  *(ulong *)(param_1 + 0x60 + (long)iVar12 * 8 + 0x30) = uVar18;
  *(undefined1 *)(param_1 + 0x60 + (long)iVar12 + 0x1d8) = 0;
LAB_0294fb40:
  *(undefined4 *)(param_1 + 0x372) = 10000;
  *(undefined1 *)(param_1 + 0x36d) = 0x12;
  *(undefined2 *)(param_1 + 0x370) = 0;
  *(undefined2 *)(param_1 + 0x496) = 0;
  *(undefined1 *)(param_1 + 0x376) = 0;
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined4 *)(param_1 + 0x498) = 0;
  *(undefined1 *)(param_1 + 0x49c) = 0x1f;
  *(undefined1 *)(param_1 + 0x36b) = 0;
  *(undefined1 *)(param_1 + 0x36a) = *(undefined1 *)((long)param_2 + 0x31);
  *(undefined1 *)(param_1 + 0x36e) = 1;
  *(undefined1 *)(param_1 + 0x26d) = 0;
  *(undefined8 *)(param_1 + 900) = 0;
  *(undefined8 *)(param_1 + 0x38b) = 0;
  memset((void *)(param_1 + 0x394),0,0x101);
  if (!(bVar1 && *(char *)(*(long *)(param_2[1] + 0x98) + 0x19) != '\0')) {
    return;
  }
  FUN_02c66640();
  return;
}


