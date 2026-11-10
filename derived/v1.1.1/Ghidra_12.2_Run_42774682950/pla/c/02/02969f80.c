/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02969f80; name: FUN_02969f80
 */


byte FUN_02969f80(long param_1,long param_2,long param_3,undefined4 param_4,undefined4 param_5,
                 undefined1 *param_6)

{
  long *plVar1;
  ushort uVar2;
  short sVar3;
  ulong uVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  undefined1 auStack_780 [1344];
  code *local_240;
  undefined1 auStack_220 [424];
  undefined4 local_78;
  ushort local_74 [2];
  uint local_70;
  undefined4 auStack_6c [3];
  
  uVar2 = *(ushort *)(param_2 + 0x70);
  bVar7 = *(byte *)(param_2 + 0x369);
  plVar20 = *(long **)(*(long *)(param_1 + 8) + 0x1e8);
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  FUN_009463f0(auStack_780,plVar20 + 0xc);
  local_70 = (uint)uVar2;
  local_74[0] = (ushort)bVar7;
  local_78 = param_5;
  auStack_6c[0] = param_4;
  uVar8 = (*local_240)(auStack_220,auStack_6c,&local_70,local_74,&local_78);
  FUN_00945e04(auStack_780);
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      iVar9 = (int)*plVar1 + -1;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
    }
  }
  if ((uVar8 & 0xffff) == 6) {
    uVar10 = 6;
  }
  else {
    uVar10 = (uint)*(byte *)(param_2 + 0x36b);
    if ((*(byte *)(param_2 + 0x388) & 2) != 0) {
      uVar10 = *(byte *)(param_2 + 0x36b) + 2;
    }
    uVar11 = *(ulong *)(param_2 + 0x230);
    if ((*(byte *)(param_2 + 0x1e8) & 7) != 0) {
      uVar10 = uVar10 + 3;
    }
    if ((uVar11 & 7) != 0) {
      uVar12 = (uint)uVar11;
      uVar13 = uVar12 & 7;
      if (uVar13 == 4) {
        uVar13 = uVar12 >> 0xe & 0x3f;
      }
      else if (uVar13 == 3) {
        uVar13 = uVar12 >> 8 & 0x3f;
      }
      else if (uVar13 == 2) {
        uVar13 = (uint)(uVar11 >> 0xe);
      }
      else {
        uVar13 = 0;
      }
      uVar10 = uVar13 + uVar10;
    }
    if (2 < (uVar10 & 0xff)) {
      uVar10 = 3;
    }
    uVar10 = uVar8 + (uVar10 & 0xff) & 0xffff;
  }
  lVar14 = *(long *)(param_1 + 0x10);
  lVar15 = *(long *)(lVar14 + 0x30);
  uVar13 = *(uint *)(lVar15 + 0xc08);
  if (uVar13 < 0x60) {
    do {
      lVar17 = *(long *)(lVar15 + (ulong)uVar13 * 0x20 + 8);
      if (*(short *)(lVar17 + 8) == 0) {
        if (uVar13 < 0x5f) {
          *(undefined2 *)(lVar17 + 8) = 1;
          *(int *)(lVar15 + 0xc08) = *(int *)(lVar15 + 0xc08) + 1;
        }
        break;
      }
      uVar13 = uVar13 + 1;
      *(uint *)(lVar15 + 0xc08) = uVar13;
    } while (uVar13 != 0x60);
  }
  lVar15 = *(long *)(lVar14 + 0x50);
  uVar13 = *(uint *)(lVar15 + 0x408);
  if (uVar13 < 0x1f) {
    *(uint *)(lVar15 + 0x408) = uVar13 + 1;
    lVar15 = *(long *)(lVar14 + 0x50);
    uVar13 = *(uint *)(lVar15 + 0x408);
  }
  *(undefined8 *)(lVar14 + 0x70) = *(undefined8 *)(lVar15 + (ulong)uVar13 * 0x20 + 8);
  lVar15 = *(long *)(param_1 + 0x10);
  lVar14 = *(long *)(lVar15 + 0x30);
  uVar16 = (ulong)*(uint *)(lVar14 + 0xc08);
  bVar7 = *(byte *)(param_3 + 0x7d);
  uVar11 = uVar16 << 5 | 8;
  uVar4 = uVar16;
  do {
    uVar19 = uVar4;
    if (0x5f < uVar19) goto LAB_0296a1e8;
    sVar3 = *(short *)(*(long *)(lVar14 + uVar11) + 8);
    if (sVar3 == 0) goto LAB_0296a1b0;
    uVar11 = uVar11 + 0x20;
    uVar4 = uVar19 + 1;
  } while (sVar3 != 4);
  if ((int)(uVar19 + 1) - 1U < 0x60) {
LAB_0296a1b0:
    lVar17 = *(long *)(lVar14 + (uVar19 & 0xffffffff) * 0x20 + 8);
    if (lVar17 != 0) {
      *(undefined2 *)(lVar17 + 8) = 4;
      *(uint *)(lVar17 + 0xc) = (uint)bVar7;
      *(undefined1 *)(lVar17 + 10) = 4;
      *(undefined8 *)(lVar17 + 0x10) = 0;
      *(undefined8 *)(lVar17 + 0x18) = 0;
      *(long *)(*(long *)(lVar15 + 0x70) + 0x28) = lVar17;
      lVar15 = *(long *)(param_1 + 0x10);
      lVar14 = *(long *)(lVar15 + 0x30);
      uVar16 = (ulong)*(uint *)(lVar14 + 0xc08);
    }
  }
LAB_0296a1e8:
  bVar7 = *(byte *)(param_2 + 0x7d);
  uVar11 = uVar16 << 5 | 8;
  lVar17 = 0;
  do {
    lVar18 = lVar17;
    if (0x5f < uVar16 + lVar18) goto LAB_0296a270;
    sVar3 = *(short *)(*(long *)(lVar14 + uVar11) + 8);
    if (sVar3 == 0) goto LAB_0296a234;
    uVar11 = uVar11 + 0x20;
    lVar17 = lVar18 + 1;
  } while (sVar3 != 3);
  if (((int)uVar16 + (int)(lVar18 + 1)) - 1U < 0x60) {
LAB_0296a234:
    lVar17 = *(long *)(lVar14 + (ulong)(uint)((int)uVar16 + (int)lVar18) * 0x20 + 8);
    if (lVar17 != 0) {
      *(undefined2 *)(lVar17 + 8) = 3;
      *(uint *)(lVar17 + 0xc) = (uint)bVar7;
      *(undefined1 *)(lVar17 + 10) = 4;
      *(undefined8 *)(lVar17 + 0x10) = 0;
      *(undefined8 *)(lVar17 + 0x18) = 0;
      *(long *)(*(long *)(lVar15 + 0x70) + 0x20) = lVar17;
      lVar15 = *(long *)(param_1 + 0x10);
      lVar14 = *(long *)(lVar15 + 0x30);
      uVar16 = (ulong)*(uint *)(lVar14 + 0xc08);
    }
  }
LAB_0296a270:
  uVar11 = uVar16 << 5 | 8;
  lVar17 = 0;
  do {
    lVar18 = lVar17;
    if (0x5f < uVar16 + lVar18) goto LAB_0296a2f4;
    sVar3 = *(short *)(*(long *)(lVar14 + uVar11) + 8);
    if (sVar3 == 0) goto LAB_0296a2b8;
    uVar11 = uVar11 + 0x20;
    lVar17 = lVar18 + 1;
  } while (sVar3 != 0x80);
  if (((int)uVar16 + (int)(lVar18 + 1)) - 1U < 0x60) {
LAB_0296a2b8:
    lVar17 = *(long *)(lVar14 + (ulong)(uint)((int)uVar16 + (int)lVar18) * 0x20 + 8);
    if (lVar17 != 0) {
      *(undefined2 *)(lVar17 + 8) = 0x80;
      *(undefined4 *)(lVar17 + 0xc) = param_5;
      *(undefined1 *)(lVar17 + 10) = 4;
      *(undefined8 *)(lVar17 + 0x10) = 0;
      *(undefined8 *)(lVar17 + 0x18) = 0;
      *(long *)(*(long *)(lVar15 + 0x70) + 0x408) = lVar17;
      lVar15 = *(long *)(param_1 + 0x10);
      lVar14 = *(long *)(lVar15 + 0x30);
      uVar16 = (ulong)*(uint *)(lVar14 + 0xc08);
    }
  }
LAB_0296a2f4:
  uVar11 = uVar16 << 5 | 8;
  lVar17 = 0;
  do {
    lVar18 = lVar17;
    if (0x5f < uVar16 + lVar18) goto LAB_0296a374;
    sVar3 = *(short *)(*(long *)(lVar14 + uVar11) + 8);
    if (sVar3 == 0) goto LAB_0296a33c;
    uVar11 = uVar11 + 0x20;
    lVar17 = lVar18 + 1;
  } while (sVar3 != 0x2f);
  if (((int)uVar16 + (int)(lVar18 + 1)) - 1U < 0x60) {
LAB_0296a33c:
    lVar17 = *(long *)(lVar14 + (ulong)(uint)((int)uVar16 + (int)lVar18) * 0x20 + 8);
    if (lVar17 != 0) {
      *(undefined2 *)(lVar17 + 8) = 0x2f;
      *(uint *)(lVar17 + 0xc) = uVar10;
      *(undefined1 *)(lVar17 + 10) = 0;
      *(undefined8 *)(lVar17 + 0x10) = 0;
      *(undefined8 *)(lVar17 + 0x18) = 0;
      *(long *)(*(long *)(lVar15 + 0x70) + 0x180) = lVar17;
      lVar15 = *(long *)(param_1 + 0x10);
      lVar14 = *(long *)(lVar15 + 0x30);
      uVar16 = (ulong)*(uint *)(lVar14 + 0xc08);
    }
  }
LAB_0296a374:
  plVar20 = (long *)(lVar14 + uVar16 * 0x20 + 8);
  do {
    uVar11 = uVar16;
    if (0x5f < uVar11) goto LAB_0296a3e8;
    lVar17 = *plVar20;
    if (*(short *)(lVar17 + 8) == 0) goto LAB_0296a3b0;
    plVar20 = plVar20 + 4;
    uVar16 = uVar11 + 1;
  } while (*(short *)(lVar17 + 8) != 0x48);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_0296a3b0:
    lVar14 = *(long *)(lVar14 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 0x48;
      *(undefined8 *)(lVar14 + 0xc) = 0;
      *(undefined8 *)(lVar14 + 0x14) = 0;
      *(undefined4 *)(lVar14 + 0x1c) = 0;
      *(undefined1 *)(lVar14 + 10) = 1;
      *(long *)(*(long *)(lVar15 + 0x70) + 0x248) = lVar14;
      lVar15 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0296a3e8:
  iVar9 = *(int *)(lVar15 + 0x78) + 1;
  *(int *)(lVar15 + 0x78) = iVar9;
  lVar14 = *(long *)(*(long *)(*(long *)(lVar15 + 8) + 0x88) + 0x14c8);
  if (lVar14 != 0) {
    do {
      lVar17 = FUN_02999e6c(lVar15,0x45,8,1,lVar14);
      if (lVar17 == 0) break;
      if ((*(byte *)(lVar17 + 0x3f) >> 5 & 1) == 0) {
        lVar17 = *(long *)(lVar14 + 0x18);
      }
      lVar14 = lVar17;
    } while (lVar17 != 0);
    iVar9 = *(int *)(lVar15 + 0x78);
  }
  *(int *)(lVar15 + 0x78) = iVar9 + -1;
  if (iVar9 + -1 == 0) {
    for (lVar14 = *(long *)(*(long *)(*(long *)(lVar15 + 8) + 0x88) + 0x14c8); lVar14 != 0;
        lVar14 = *(long *)(lVar14 + 0x18)) {
      *(uint *)(lVar14 + 0x3c) = (uint)*(ushort *)(lVar14 + 0x3e) << 0x10;
    }
  }
  lVar15 = *(long *)(param_1 + 0x10);
  lVar14 = *(long *)(lVar15 + 0x70);
  if (*(long *)(lVar14 + 0x248) == 0) {
    bVar5 = false;
    lVar14 = *(long *)(lVar14 + 0x180);
  }
  else {
    bVar5 = *(int *)(*(long *)(lVar14 + 0x248) + 0xc) != 0;
    lVar14 = *(long *)(lVar14 + 0x180);
  }
  if (lVar14 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(uint *)(lVar14 + 0xc);
  }
  lVar14 = *(long *)(lVar15 + 0x50);
  if (*(uint *)(lVar14 + 0x408) == 0) {
    uVar11 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar14 + (ulong)*(uint *)(lVar14 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar14 + 0x408) = *(int *)(lVar14 + 0x408) + -1;
    lVar14 = *(long *)(lVar15 + 0x50);
    uVar11 = (ulong)*(uint *)(lVar14 + 0x408);
  }
  *(undefined8 *)(lVar15 + 0x70) = *(undefined8 *)(lVar14 + uVar11 * 0x20 + 8);
  lVar14 = *(long *)(lVar15 + 0x30);
  uVar13 = *(uint *)(lVar14 + 0xc08);
  if (uVar13 != 0) {
    if ((uVar13 & 0xffff) < 0x60) {
      uVar11 = (ulong)uVar13 & 0xffff;
      plVar20 = (long *)(lVar14 + uVar11 * 0x20 + 8);
      do {
        uVar11 = uVar11 + 1;
        if (*(short *)(*plVar20 + 8) == 0) break;
        *(undefined2 *)(*plVar20 + 8) = 0;
        plVar20 = plVar20 + 4;
      } while (((uint)uVar11 & 0xffff) != 0x60);
      uVar13 = *(uint *)(lVar14 + 0xc08);
    }
    *(uint *)(lVar14 + 0xc08) = uVar13 - 1;
    *(undefined2 *)(*(long *)(lVar14 + (ulong)(uVar13 - 1) * 0x20 + 8) + 8) = 0;
    uVar11 = (ulong)*(uint *)(lVar14 + 0xc08);
    do {
      if (uVar11 == 0) goto LAB_0296a590;
      uVar11 = uVar11 - 1;
      *(int *)(lVar14 + 0xc08) = (int)uVar11;
    } while (*(short *)(*(long *)(lVar14 + (uVar11 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar14 + 0xc08) = (int)uVar11 + 1;
  }
LAB_0296a590:
  if ((uVar8 & 0xffff) == 6 || bVar5 != false) {
    bVar7 = bVar5 ^ 1;
  }
  else {
    if (2 < (int)uVar10) {
      uVar10 = 3;
    }
    if (((uVar10 & 0xff) < 4) &&
       (cVar6 = FUN_02954744(DAT_043ecde0,(&DAT_039c72f0)[(ulong)uVar10 & 0xff]), cVar6 == '\0')) {
      bVar7 = 1;
      *param_6 = 0;
    }
    else {
      bVar7 = 0;
    }
  }
  return bVar7;
}


