/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02977520; name: FUN_02977520
 */


int FUN_02977520(long param_1,long param_2,ulong param_3,char param_4)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  char cVar5;
  ulong uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined4 uVar10;
  int iVar11;
  long lVar12;
  char cVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  undefined1 auStack_750 [1728];
  int local_90;
  int local_8c;
  int local_6c;
  
  uVar10 = FUN_029506a8(param_2,0xc);
  lVar12 = *(long *)(param_1 + 0x10);
  lVar15 = *(long *)(lVar12 + 0x30);
  uVar17 = *(uint *)(lVar15 + 0xc08);
  if (uVar17 < 0x60) {
    do {
      lVar18 = *(long *)(lVar15 + (ulong)uVar17 * 0x20 + 8);
      if (*(short *)(lVar18 + 8) == 0) {
        if (uVar17 < 0x5f) {
          *(undefined2 *)(lVar18 + 8) = 1;
          *(int *)(lVar15 + 0xc08) = *(int *)(lVar15 + 0xc08) + 1;
        }
        break;
      }
      uVar17 = uVar17 + 1;
      *(uint *)(lVar15 + 0xc08) = uVar17;
    } while (uVar17 != 0x60);
  }
  lVar15 = *(long *)(lVar12 + 0x50);
  uVar17 = *(uint *)(lVar15 + 0x408);
  if (uVar17 < 0x1f) {
    *(uint *)(lVar15 + 0x408) = uVar17 + 1;
    lVar15 = *(long *)(lVar12 + 0x50);
    uVar17 = *(uint *)(lVar15 + 0x408);
  }
  *(undefined8 *)(lVar12 + 0x70) = *(undefined8 *)(lVar15 + (ulong)uVar17 * 0x20 + 8);
  lVar15 = *(long *)(param_1 + 0x10);
  lVar12 = *(long *)(lVar15 + 0x30);
  uVar16 = (ulong)*(uint *)(lVar12 + 0xc08);
  bVar2 = *(byte *)(param_2 + 0x7d);
  uVar22 = uVar16 << 5 | 8;
  uVar6 = uVar16;
  do {
    uVar20 = uVar6;
    if (0x5f < uVar20) goto LAB_0297766c;
    sVar4 = *(short *)(*(long *)(lVar12 + uVar22) + 8);
    if (sVar4 == 0) goto LAB_02977630;
    uVar22 = uVar22 + 0x20;
    uVar6 = uVar20 + 1;
  } while (sVar4 != 2);
  if ((int)(uVar20 + 1) - 1U < 0x60) {
LAB_02977630:
    lVar18 = *(long *)(lVar12 + (uVar20 & 0xffffffff) * 0x20 + 8);
    if (lVar18 != 0) {
      *(undefined2 *)(lVar18 + 8) = 2;
      *(uint *)(lVar18 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar18 + 10) = 4;
      *(undefined8 *)(lVar18 + 0x10) = 0;
      *(undefined8 *)(lVar18 + 0x18) = 0;
      *(long *)(*(long *)(lVar15 + 0x70) + 0x18) = lVar18;
      lVar15 = *(long *)(param_1 + 0x10);
      lVar12 = *(long *)(lVar15 + 0x30);
      uVar16 = (ulong)*(uint *)(lVar12 + 0xc08);
    }
  }
LAB_0297766c:
  uVar22 = uVar16 << 5 | 8;
  lVar18 = 0;
  do {
    lVar19 = lVar18;
    if (0x5f < uVar16 + lVar19) goto LAB_029776f0;
    sVar4 = *(short *)(*(long *)(lVar12 + uVar22) + 8);
    if (sVar4 == 0) goto LAB_029776b4;
    uVar22 = uVar22 + 0x20;
    lVar18 = lVar19 + 1;
  } while (sVar4 != 0x32);
  if (((int)uVar16 + (int)(lVar19 + 1)) - 1U < 0x60) {
LAB_029776b4:
    lVar18 = *(long *)(lVar12 + (ulong)(uint)((int)uVar16 + (int)lVar19) * 0x20 + 8);
    if (lVar18 != 0) {
      *(undefined2 *)(lVar18 + 8) = 0x32;
      *(undefined4 *)(lVar18 + 0xc) = uVar10;
      *(undefined1 *)(lVar18 + 10) = 4;
      *(undefined8 *)(lVar18 + 0x10) = 0;
      *(undefined8 *)(lVar18 + 0x18) = 0;
      *(long *)(*(long *)(lVar15 + 0x70) + 0x198) = lVar18;
      lVar15 = *(long *)(param_1 + 0x10);
      lVar12 = *(long *)(lVar15 + 0x30);
      uVar16 = (ulong)*(uint *)(lVar12 + 0xc08);
    }
  }
LAB_029776f0:
  uVar22 = uVar16 << 5 | 8;
  lVar18 = 0;
  do {
    lVar19 = lVar18;
    if (0x5f < uVar16 + lVar19) goto LAB_02977774;
    sVar4 = *(short *)(*(long *)(lVar12 + uVar22) + 8);
    if (sVar4 == 0) goto LAB_02977738;
    uVar22 = uVar22 + 0x20;
    lVar18 = lVar19 + 1;
  } while (sVar4 != 0x59);
  if (((int)uVar16 + (int)(lVar19 + 1)) - 1U < 0x60) {
LAB_02977738:
    lVar18 = *(long *)(lVar12 + (ulong)(uint)((int)uVar16 + (int)lVar19) * 0x20 + 8);
    if (lVar18 != 0) {
      *(undefined2 *)(lVar18 + 8) = 0x59;
      *(undefined8 *)(lVar18 + 0x10) = 0;
      *(undefined8 *)(lVar18 + 0x18) = 0;
      *(undefined4 *)(lVar18 + 0xc) = 1;
      *(undefined1 *)(lVar18 + 10) = 0;
      *(long *)(*(long *)(lVar15 + 0x70) + 0x2d0) = lVar18;
      lVar15 = *(long *)(param_1 + 0x10);
      lVar12 = *(long *)(lVar15 + 0x30);
      uVar16 = (ulong)*(uint *)(lVar12 + 0xc08);
    }
  }
LAB_02977774:
  uVar22 = uVar16 << 5 | 8;
  lVar18 = 0;
  do {
    lVar19 = lVar18;
    if (0x5f < uVar16 + lVar19) goto LAB_029777f8;
    sVar4 = *(short *)(*(long *)(lVar12 + uVar22) + 8);
    if (sVar4 == 0) goto LAB_029777bc;
    uVar22 = uVar22 + 0x20;
    lVar18 = lVar19 + 1;
  } while (sVar4 != 0x51);
  if (((int)uVar16 + (int)(lVar19 + 1)) - 1U < 0x60) {
LAB_029777bc:
    lVar18 = *(long *)(lVar12 + (ulong)(uint)((int)uVar16 + (int)lVar19) * 0x20 + 8);
    if (lVar18 != 0) {
      *(undefined2 *)(lVar18 + 8) = 0x51;
      *(undefined1 *)(lVar18 + 10) = 0;
      *(undefined8 *)(lVar18 + 0xc) = 0;
      *(undefined8 *)(lVar18 + 0x14) = 0;
      *(undefined4 *)(lVar18 + 0x1c) = 0;
      *(long *)(*(long *)(lVar15 + 0x70) + 0x290) = lVar18;
      lVar15 = *(long *)(param_1 + 0x10);
      lVar12 = *(long *)(lVar15 + 0x30);
      uVar16 = (ulong)*(uint *)(lVar12 + 0xc08);
    }
  }
LAB_029777f8:
  plVar21 = (long *)(lVar12 + uVar16 * 0x20 + 8);
  do {
    uVar22 = uVar16;
    if (0x5f < uVar22) goto LAB_02977878;
    lVar18 = *plVar21;
    if (*(short *)(lVar18 + 8) == 0) goto LAB_02977834;
    plVar21 = plVar21 + 4;
    uVar16 = uVar22 + 1;
  } while (*(short *)(lVar18 + 8) != 0x38);
  if ((int)(uVar22 + 1) - 1U < 0x60) {
LAB_02977834:
    lVar12 = *(long *)(lVar12 + (uVar22 & 0xffffffff) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 0x38;
      *(undefined8 *)(lVar12 + 0xc) = 0x19a00001000;
      *(undefined4 *)(lVar12 + 0x14) = 0x20000;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      *(undefined1 *)(lVar12 + 10) = 3;
      *(long *)(*(long *)(lVar15 + 0x70) + 0x1c8) = lVar12;
      lVar15 = *(long *)(param_1 + 0x10);
    }
  }
LAB_02977878:
  iVar11 = *(int *)(lVar15 + 0x78) + 1;
  *(int *)(lVar15 + 0x78) = iVar11;
  lVar12 = *(long *)(*(long *)(*(long *)(lVar15 + 8) + 0x88) + 0x14c8);
  if (lVar12 != 0) {
    do {
      lVar18 = FUN_02999e6c(lVar15,0x13,8,1,lVar12);
      if (lVar18 == 0) break;
      if ((*(byte *)(lVar18 + 0x3f) >> 5 & 1) == 0) {
        lVar18 = *(long *)(lVar12 + 0x18);
      }
      lVar12 = lVar18;
    } while (lVar18 != 0);
    iVar11 = *(int *)(lVar15 + 0x78);
  }
  *(int *)(lVar15 + 0x78) = iVar11 + -1;
  if (iVar11 + -1 == 0) {
    for (lVar12 = *(long *)(*(long *)(*(long *)(lVar15 + 8) + 0x88) + 0x14c8); lVar12 != 0;
        lVar12 = *(long *)(lVar12 + 0x18)) {
      *(uint *)(lVar12 + 0x3c) = (uint)*(ushort *)(lVar12 + 0x3e) << 0x10;
    }
  }
  lVar15 = *(long *)(*(long *)(param_1 + 0x10) + 0x70);
  lVar12 = *(long *)(lVar15 + 0x198);
  iVar11 = 0;
  if (lVar12 != 0) {
    iVar11 = *(int *)(lVar12 + 0xc);
  }
  lVar12 = *(long *)(lVar15 + 0x1c8);
  iVar14 = 0;
  if (lVar12 != 0) {
    iVar14 = *(int *)(lVar12 + 0xc);
  }
  uVar17 = (uint)(iVar14 * iVar11) >> 0xc;
  if (0x800 < (iVar14 * iVar11 & 0xfffU)) {
    uVar17 = uVar17 + 1;
  }
  uVar22 = (ulong)uVar17;
  if (param_4 == '\x01') {
LAB_02977954:
    bVar7 = (*(byte *)(param_2 + 0x168) & 7) != 0;
    cVar13 = *(char *)(param_2 + 0x2dc);
    cVar3 = *(char *)(param_2 + 0x2dd);
    bVar8 = cVar3 != '\x12';
    bVar9 = cVar3 == '\x02';
    cVar5 = cVar3;
    if (*(char *)(param_2 + 0x389) < '\0') {
      if (cVar13 != '\x12' && (cVar13 != '\x02' || !bVar7)) {
        if (!bVar8 || bVar7 && bVar9) goto LAB_02977a44;
      }
      else {
        cVar13 = cVar3;
        if (!bVar8 || bVar7 && bVar9) {
          cVar13 = '\x12';
LAB_02977a44:
          cVar5 = cVar13;
        }
      }
    }
    else if (cVar13 != '\x12' && (cVar13 != '\x02' || !bVar7)) {
      if (!bVar8 || bVar7 && bVar9) goto LAB_02977a44;
    }
    else {
      cVar5 = '\0';
      cVar13 = '\0';
      if (bVar8 && (!bVar7 || !bVar9)) {
        cVar5 = cVar3;
        cVar13 = cVar3;
      }
    }
    if (((cVar13 != '\v') && (cVar5 != '\v')) && (*(char *)(param_2 + 0x2de) != '\v'))
    goto LAB_02977b58;
    plVar21 = *(long **)(*(long *)(param_1 + 8) + 0x1e8);
    if (plVar21 != (long *)0x0) {
      plVar1 = plVar21 + 10;
      do {
        cVar13 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
    }
    FUN_009463f0(auStack_750,plVar21 + 0xc);
    FUN_00945e04(auStack_750);
    iVar11 = local_90;
    if (plVar21 != (long *)0x0) {
      plVar1 = plVar21 + 10;
      do {
        iVar14 = (int)*plVar1 + -1;
        cVar13 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = iVar14;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
LAB_02977b40:
      if (iVar14 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
  else {
    if (param_4 != '\r') {
      if (param_4 != '\x06') goto LAB_02977b58;
      goto LAB_02977954;
    }
    bVar7 = (*(byte *)(param_2 + 0x168) & 7) != 0;
    cVar13 = *(char *)(param_2 + 0x2dc);
    cVar3 = *(char *)(param_2 + 0x2dd);
    bVar8 = cVar3 != '\x12';
    bVar9 = cVar3 == '\x02';
    cVar5 = cVar3;
    if (*(char *)(param_2 + 0x389) < '\0') {
      if (cVar13 != '\x12' && (cVar13 != '\x02' || !bVar7)) {
        if (!bVar8 || bVar7 && bVar9) goto LAB_02977ae4;
      }
      else {
        cVar13 = cVar3;
        if (!bVar8 || bVar7 && bVar9) {
          cVar13 = '\x12';
LAB_02977ae4:
          cVar5 = cVar13;
        }
      }
    }
    else if (cVar13 != '\x12' && (cVar13 != '\x02' || !bVar7)) {
      if (!bVar8 || bVar7 && bVar9) goto LAB_02977ae4;
    }
    else {
      cVar5 = '\0';
      cVar13 = '\0';
      if (bVar8 && (!bVar7 || !bVar9)) {
        cVar5 = cVar3;
        cVar13 = cVar3;
      }
    }
    if (((cVar13 != '\x0e') && (cVar5 != '\x0e')) && (*(char *)(param_2 + 0x2de) != '\x0e'))
    goto LAB_02977b58;
    plVar21 = *(long **)(*(long *)(param_1 + 8) + 0x1e8);
    if (plVar21 != (long *)0x0) {
      plVar1 = plVar21 + 10;
      do {
        cVar13 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
    }
    FUN_009463f0(auStack_750,plVar21 + 0xc);
    FUN_00945e04(auStack_750);
    iVar11 = local_8c;
    if (plVar21 != (long *)0x0) {
      plVar1 = plVar21 + 10;
      do {
        iVar14 = (int)*plVar1 + -1;
        cVar13 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = iVar14;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      goto LAB_02977b40;
    }
  }
  uVar22 = (ulong)(iVar11 * uVar17) / 100;
LAB_02977b58:
  if ((((*(byte *)(param_2 + 0x98) & 7) != 0) &&
      (lVar12 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x70) + 0x2d0), lVar12 != 0)) &&
     (*(int *)(lVar12 + 0xc) != 0)) {
    plVar21 = *(long **)(*(long *)(param_1 + 8) + 0x1e8);
    if (plVar21 != (long *)0x0) {
      plVar1 = plVar21 + 10;
      do {
        cVar13 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
    }
    FUN_009463f0(auStack_750,plVar21 + 0xc);
    FUN_00945e04(auStack_750);
    if (plVar21 != (long *)0x0) {
      plVar1 = plVar21 + 10;
      do {
        iVar11 = (int)*plVar1 + -1;
        cVar13 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = iVar11;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
    uVar22 = (ulong)(uint)(local_6c * (int)uVar22) / 100;
  }
  lVar12 = *(long *)(param_1 + 0x10);
  iVar11 = (int)uVar22;
  if (0x270 < (uint)(uVar22 >> 4)) {
    iVar11 = 10000;
  }
  if ((((param_3 & 1) != 0) && (lVar15 = *(long *)(*(long *)(lVar12 + 0x70) + 0x290), lVar15 != 0))
     && (*(int *)(lVar15 + 0xc) != 0)) {
    iVar11 = 10000 - iVar11;
  }
  lVar15 = *(long *)(lVar12 + 0x50);
  if (*(uint *)(lVar15 + 0x408) == 0) {
    uVar22 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar15 + (ulong)*(uint *)(lVar15 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar15 + 0x408) = *(int *)(lVar15 + 0x408) + -1;
    lVar15 = *(long *)(lVar12 + 0x50);
    uVar22 = (ulong)*(uint *)(lVar15 + 0x408);
  }
  *(undefined8 *)(lVar12 + 0x70) = *(undefined8 *)(lVar15 + uVar22 * 0x20 + 8);
  lVar12 = *(long *)(lVar12 + 0x30);
  uVar17 = *(uint *)(lVar12 + 0xc08);
  if (uVar17 != 0) {
    if ((uVar17 & 0xffff) < 0x60) {
      uVar22 = (ulong)uVar17 & 0xffff;
      plVar21 = (long *)(lVar12 + uVar22 * 0x20 + 8);
      do {
        uVar22 = uVar22 + 1;
        if (*(short *)(*plVar21 + 8) == 0) break;
        *(undefined2 *)(*plVar21 + 8) = 0;
        plVar21 = plVar21 + 4;
      } while (((uint)uVar22 & 0xffff) != 0x60);
      uVar17 = *(uint *)(lVar12 + 0xc08);
    }
    *(uint *)(lVar12 + 0xc08) = uVar17 - 1;
    *(undefined2 *)(*(long *)(lVar12 + (ulong)(uVar17 - 1) * 0x20 + 8) + 8) = 0;
    uVar22 = (ulong)*(uint *)(lVar12 + 0xc08);
    do {
      if (uVar22 == 0) {
        return iVar11;
      }
      uVar22 = uVar22 - 1;
      *(int *)(lVar12 + 0xc08) = (int)uVar22;
    } while (*(short *)(*(long *)(lVar12 + (uVar22 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar12 + 0xc08) = (int)uVar22 + 1;
  }
  return iVar11;
}


