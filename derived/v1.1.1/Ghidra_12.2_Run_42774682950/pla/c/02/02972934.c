/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02972934; name: FUN_02972934
 */


ulong FUN_02972934(long param_1,undefined4 param_2,long param_3,long param_4,undefined4 *param_5)

{
  long *plVar1;
  undefined4 uVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  bool bVar6;
  ulong uVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int iVar19;
  long *plVar20;
  undefined1 auStack_780 [1216];
  code *local_2c0;
  undefined1 auStack_2a0 [552];
  undefined4 local_78;
  ushort local_74 [2];
  uint local_70;
  undefined4 auStack_6c [3];
  
  uVar9 = *param_5;
  uVar2 = param_5[8];
  uVar4 = *(ushort *)(param_3 + 0x70);
  bVar3 = *(byte *)(param_3 + 0x369);
  plVar20 = *(long **)(*(long *)(param_1 + 8) + 0x1e8);
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar8 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  FUN_009463f0(auStack_780,plVar20 + 0xc);
  local_70 = (uint)uVar4;
  local_74[0] = (ushort)bVar3;
  local_78 = uVar2;
  auStack_6c[0] = uVar9;
  uVar9 = (*local_2c0)(auStack_2a0,auStack_6c,&local_70,local_74,&local_78);
  FUN_00945e04(auStack_780);
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      iVar10 = (int)*plVar1 + -1;
      cVar8 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar10;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
    }
  }
  lVar11 = *(long *)(param_1 + 0x10);
  lVar13 = *(long *)(lVar11 + 0x30);
  uVar15 = *(uint *)(lVar13 + 0xc08);
  if (uVar15 < 0x60) {
    do {
      lVar16 = *(long *)(lVar13 + (ulong)uVar15 * 0x20 + 8);
      if (*(short *)(lVar16 + 8) == 0) {
        if (uVar15 < 0x5f) {
          *(undefined2 *)(lVar16 + 8) = 1;
          *(int *)(lVar13 + 0xc08) = *(int *)(lVar13 + 0xc08) + 1;
        }
        break;
      }
      uVar15 = uVar15 + 1;
      *(uint *)(lVar13 + 0xc08) = uVar15;
    } while (uVar15 != 0x60);
  }
  lVar13 = *(long *)(lVar11 + 0x50);
  uVar15 = *(uint *)(lVar13 + 0x408);
  if (uVar15 < 0x1f) {
    *(uint *)(lVar13 + 0x408) = uVar15 + 1;
    lVar13 = *(long *)(lVar11 + 0x50);
    uVar15 = *(uint *)(lVar13 + 0x408);
  }
  *(undefined8 *)(lVar11 + 0x70) = *(undefined8 *)(lVar13 + (ulong)uVar15 * 0x20 + 8);
  lVar13 = *(long *)(param_1 + 0x10);
  lVar11 = *(long *)(lVar13 + 0x30);
  uVar14 = (ulong)*(uint *)(lVar11 + 0xc08);
  bVar3 = *(byte *)(param_3 + 0x7d);
  uVar12 = uVar14 << 5 | 8;
  uVar7 = uVar14;
  do {
    uVar18 = uVar7;
    if (0x5f < uVar18) goto LAB_02972b0c;
    sVar5 = *(short *)(*(long *)(lVar11 + uVar12) + 8);
    if (sVar5 == 0) goto LAB_02972ad0;
    uVar12 = uVar12 + 0x20;
    uVar7 = uVar18 + 1;
  } while (sVar5 != 3);
  if ((int)(uVar18 + 1) - 1U < 0x60) {
LAB_02972ad0:
    lVar16 = *(long *)(lVar11 + (uVar18 & 0xffffffff) * 0x20 + 8);
    if (lVar16 != 0) {
      *(undefined2 *)(lVar16 + 8) = 3;
      *(uint *)(lVar16 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar16 + 10) = 4;
      *(undefined8 *)(lVar16 + 0x10) = 0;
      *(undefined8 *)(lVar16 + 0x18) = 0;
      *(long *)(*(long *)(lVar13 + 0x70) + 0x20) = lVar16;
      lVar13 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar13 + 0x30);
      uVar14 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_02972b0c:
  uVar12 = uVar14 << 5 | 8;
  bVar3 = *(byte *)(param_4 + 0x7d);
  lVar16 = 0;
  do {
    lVar17 = lVar16;
    if (0x5f < uVar14 + lVar17) goto LAB_02972b94;
    sVar5 = *(short *)(*(long *)(lVar11 + uVar12) + 8);
    if (sVar5 == 0) goto LAB_02972b5c;
    uVar12 = uVar12 + 0x20;
    lVar16 = lVar17 + 1;
  } while (sVar5 != 4);
  if (((int)uVar14 + (int)(lVar17 + 1)) - 1U < 0x60) {
LAB_02972b5c:
    lVar16 = *(long *)(lVar11 + (ulong)(uint)((int)uVar14 + (int)lVar17) * 0x20 + 8);
    if (lVar16 != 0) {
      *(undefined2 *)(lVar16 + 8) = 4;
      *(uint *)(lVar16 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar16 + 10) = 4;
      *(undefined8 *)(lVar16 + 0x10) = 0;
      *(undefined8 *)(lVar16 + 0x18) = 0;
      *(long *)(*(long *)(lVar13 + 0x70) + 0x28) = lVar16;
      lVar13 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar13 + 0x30);
      uVar14 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_02972b94:
  uVar2 = *param_5;
  uVar12 = uVar14 << 5 | 8;
  lVar16 = 0;
  do {
    lVar17 = lVar16;
    if (0x5f < uVar14 + lVar17) goto LAB_02972c1c;
    sVar5 = *(short *)(*(long *)(lVar11 + uVar12) + 8);
    if (sVar5 == 0) goto LAB_02972be0;
    uVar12 = uVar12 + 0x20;
    lVar16 = lVar17 + 1;
  } while (sVar5 != 0x12);
  if (((int)uVar14 + (int)(lVar17 + 1)) - 1U < 0x60) {
LAB_02972be0:
    lVar16 = *(long *)(lVar11 + (ulong)(uint)((int)uVar14 + (int)lVar17) * 0x20 + 8);
    if (lVar16 != 0) {
      *(undefined2 *)(lVar16 + 8) = 0x12;
      *(undefined4 *)(lVar16 + 0xc) = uVar2;
      *(undefined1 *)(lVar16 + 10) = 4;
      *(undefined8 *)(lVar16 + 0x10) = 0;
      *(undefined8 *)(lVar16 + 0x18) = 0;
      *(long *)(*(long *)(lVar13 + 0x70) + 0x98) = lVar16;
      lVar13 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar13 + 0x30);
      uVar14 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_02972c1c:
  uVar2 = param_5[3];
  uVar12 = uVar14 << 5 | 8;
  lVar16 = 0;
  do {
    lVar17 = lVar16;
    if (0x5f < uVar14 + lVar17) goto LAB_02972ca4;
    sVar5 = *(short *)(*(long *)(lVar11 + uVar12) + 8);
    if (sVar5 == 0) goto LAB_02972c68;
    uVar12 = uVar12 + 0x20;
    lVar16 = lVar17 + 1;
  } while (sVar5 != 0x1b);
  if (((int)uVar14 + (int)(lVar17 + 1)) - 1U < 0x60) {
LAB_02972c68:
    lVar16 = *(long *)(lVar11 + (ulong)(uint)((int)uVar14 + (int)lVar17) * 0x20 + 8);
    if (lVar16 != 0) {
      *(undefined2 *)(lVar16 + 8) = 0x1b;
      *(undefined4 *)(lVar16 + 0xc) = uVar2;
      *(undefined1 *)(lVar16 + 10) = 4;
      *(undefined8 *)(lVar16 + 0x10) = 0;
      *(undefined8 *)(lVar16 + 0x18) = 0;
      *(long *)(*(long *)(lVar13 + 0x70) + 0xe0) = lVar16;
      lVar13 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar13 + 0x30);
      uVar14 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_02972ca4:
  uVar12 = uVar14 << 5 | 8;
  lVar16 = 0;
  do {
    lVar17 = lVar16;
    if (0x5f < uVar14 + lVar17) goto LAB_02972d28;
    sVar5 = *(short *)(*(long *)(lVar11 + uVar12) + 8);
    if (sVar5 == 0) goto LAB_02972cec;
    uVar12 = uVar12 + 0x20;
    lVar16 = lVar17 + 1;
  } while (sVar5 != 0x2e);
  if (((int)uVar14 + (int)(lVar17 + 1)) - 1U < 0x60) {
LAB_02972cec:
    lVar16 = *(long *)(lVar11 + (ulong)(uint)((int)uVar14 + (int)lVar17) * 0x20 + 8);
    if (lVar16 != 0) {
      *(undefined2 *)(lVar16 + 8) = 0x2e;
      *(undefined4 *)(lVar16 + 0xc) = uVar9;
      *(undefined1 *)(lVar16 + 10) = 1;
      *(undefined8 *)(lVar16 + 0x10) = 0;
      *(undefined8 *)(lVar16 + 0x18) = 0;
      *(long *)(*(long *)(lVar13 + 0x70) + 0x178) = lVar16;
      lVar13 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar13 + 0x30);
      uVar14 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_02972d28:
  plVar20 = (long *)(lVar11 + uVar14 * 0x20 + 8);
  do {
    uVar12 = uVar14;
    if (0x5f < uVar12) goto LAB_02972da8;
    lVar16 = *plVar20;
    if (*(short *)(lVar16 + 8) == 0) goto LAB_02972d64;
    plVar20 = plVar20 + 4;
    uVar14 = uVar12 + 1;
  } while (*(short *)(lVar16 + 8) != 0x38);
  if ((int)(uVar12 + 1) - 1U < 0x60) {
LAB_02972d64:
    lVar11 = *(long *)(lVar11 + (uVar12 & 0xffffffff) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x38;
      *(undefined8 *)(lVar11 + 0xc) = 0x19a00001000;
      *(undefined4 *)(lVar11 + 0x14) = 0x20000;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(undefined1 *)(lVar11 + 10) = 3;
      *(long *)(*(long *)(lVar13 + 0x70) + 0x1c8) = lVar11;
      lVar13 = *(long *)(param_1 + 0x10);
    }
  }
LAB_02972da8:
  iVar10 = *(int *)(lVar13 + 0x78) + 1;
  *(int *)(lVar13 + 0x78) = iVar10;
  lVar11 = *(long *)(*(long *)(*(long *)(lVar13 + 8) + 0x88) + 0x14c8);
  if (lVar11 != 0) {
    do {
      lVar16 = FUN_02999e6c(lVar13,param_2,8,1,lVar11);
      if (lVar16 == 0) break;
      if ((*(byte *)(lVar16 + 0x3f) >> 5 & 1) == 0) {
        lVar16 = *(long *)(lVar11 + 0x18);
      }
      lVar11 = lVar16;
    } while (lVar16 != 0);
    iVar10 = *(int *)(lVar13 + 0x78);
  }
  *(int *)(lVar13 + 0x78) = iVar10 + -1;
  if (iVar10 + -1 == 0) {
    for (lVar11 = *(long *)(*(long *)(*(long *)(lVar13 + 8) + 0x88) + 0x14c8); lVar11 != 0;
        lVar11 = *(long *)(lVar11 + 0x18)) {
      *(uint *)(lVar11 + 0x3c) = (uint)*(ushort *)(lVar11 + 0x3e) << 0x10;
    }
  }
  lVar13 = *(long *)(param_1 + 0x10);
  lVar11 = *(long *)(lVar13 + 0x70);
  if (*(long *)(lVar11 + 0x178) == 0) {
    iVar10 = 0;
    lVar11 = *(long *)(lVar11 + 0x1c8);
  }
  else {
    iVar10 = *(int *)(*(long *)(lVar11 + 0x178) + 0xc);
    lVar11 = *(long *)(lVar11 + 0x1c8);
  }
  if (lVar11 == 0) {
    iVar19 = 0;
  }
  else {
    iVar19 = *(int *)(lVar11 + 0xc);
  }
  lVar11 = *(long *)(lVar13 + 0x50);
  if (*(uint *)(lVar11 + 0x408) == 0) {
    uVar12 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar11 + (ulong)*(uint *)(lVar11 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar11 + 0x408) = *(int *)(lVar11 + 0x408) + -1;
    lVar11 = *(long *)(lVar13 + 0x50);
    uVar12 = (ulong)*(uint *)(lVar11 + 0x408);
  }
  *(undefined8 *)(lVar13 + 0x70) = *(undefined8 *)(lVar11 + uVar12 * 0x20 + 8);
  lVar11 = *(long *)(lVar13 + 0x30);
  uVar15 = *(uint *)(lVar11 + 0xc08);
  if (uVar15 != 0) {
    if ((uVar15 & 0xffff) < 0x60) {
      uVar12 = (ulong)uVar15 & 0xffff;
      plVar20 = (long *)(lVar11 + uVar12 * 0x20 + 8);
      do {
        uVar12 = uVar12 + 1;
        if (*(short *)(*plVar20 + 8) == 0) break;
        *(undefined2 *)(*plVar20 + 8) = 0;
        plVar20 = plVar20 + 4;
      } while (((uint)uVar12 & 0xffff) != 0x60);
      uVar15 = *(uint *)(lVar11 + 0xc08);
    }
    *(uint *)(lVar11 + 0xc08) = uVar15 - 1;
    *(undefined2 *)(*(long *)(lVar11 + (ulong)(uVar15 - 1) * 0x20 + 8) + 8) = 0;
    uVar12 = (ulong)*(uint *)(lVar11 + 0xc08);
    do {
      if (uVar12 == 0) goto LAB_02972f44;
      uVar12 = uVar12 - 1;
      *(int *)(lVar11 + 0xc08) = (int)uVar12;
    } while (*(short *)(*(long *)(lVar11 + (uVar12 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar11 + 0xc08) = (int)uVar12 + 1;
  }
LAB_02972f44:
  uVar15 = (uint)(iVar19 * iVar10) >> 0xc;
  if (0x800 < (iVar19 * iVar10 & 0xfffU)) {
    uVar15 = uVar15 + 1;
  }
  uVar12 = (ulong)uVar15;
  cVar8 = FUN_0296eaa8(param_1);
  if (cVar8 == '\f') {
    uVar12 = (ulong)(uVar15 * 0x4b) / 100;
  }
  return uVar12;
}


