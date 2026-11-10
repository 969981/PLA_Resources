/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f17188; name: FUN_02f17188
 */


/* WARNING: Removing unreachable block (ram,0x02f17290) */

void FUN_02f17188(uint param_1)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  long lVar10;
  undefined4 *puVar11;
  ulong uVar12;
  uint auStack_70 [4];
  
  auStack_70[2] = 0xffffffff;
  auStack_70[3] = 0xffffffff;
  FUN_02f17a04(param_1 & 1,auStack_70 + 3,auStack_70 + 2);
  if ((DAT_0440ae38 != 0) && ((param_1 & 1) != 0)) {
    uVar2 = auStack_70[3];
    if (auStack_70[2] <= auStack_70[3]) {
      uVar2 = auStack_70[2];
    }
    uVar8 = DAT_0440ae38;
    if ((DAT_0440ae38 <= uVar2) || (uVar8 = uVar2, uVar2 != 0)) {
      (*DAT_0440a1f0)(DAT_0440ae30,0,uVar8,1,&LAB_02f179ac,0,"AK::Voice");
    }
  }
  if ((((param_1 & 1) == 0) || (DAT_0440ae08 == 0)) || (DAT_0440ae44 != '\0')) goto LAB_02f174b8;
  lVar10 = -((long)(int)DAT_0440ae18 * 4 + 0xfU & 0xfffffffffffffff0);
  puVar11 = (undefined4 *)((long)auStack_70 + lVar10);
  *puVar11 = 0;
  if (1 < (int)DAT_0440ae18) {
    if (DAT_0440ae18 == 2) {
      iVar4 = 0;
      lVar5 = 1;
    }
    else {
      iVar4 = 0;
      lVar5 = 1;
      piVar6 = DAT_0440ae10 + 1;
      piVar7 = (int *)((long)auStack_70 + lVar10 + 8);
      do {
        iVar1 = piVar6[-1];
        piVar7[-1] = iVar1 + iVar4;
        lVar5 = lVar5 + 2;
        iVar4 = *piVar6 + iVar1 + iVar4;
        *piVar7 = iVar4;
        piVar6 = piVar6 + 2;
        piVar7 = piVar7 + 2;
      } while ((ulong)DAT_0440ae18 - ((ulong)(DAT_0440ae18 - 1) & 1) != lVar5);
      if ((DAT_0440ae18 - 1 & 1) == 0) goto LAB_02f172e4;
    }
    puVar11[lVar5] = DAT_0440ae10[lVar5 + -1] + iVar4;
  }
LAB_02f172e4:
  if (0 < (int)(DAT_0440ae18 - 1)) {
    uVar12 = (ulong)(DAT_0440ae18 - 1);
    do {
      uVar2 = puVar11[uVar12];
      iVar4 = DAT_0440ae10[uVar12];
      if (iVar4 < 2) {
        if (iVar4 == 1) {
          FUN_02f17c08(*(undefined8 *)(DAT_0440ae00 + (ulong)uVar2 * 8));
        }
      }
      else if ((DAT_0440ae40 == '\x01') && (*(char *)(DAT_0440ae20 + uVar12) != '\0')) {
        uVar8 = iVar4 + uVar2;
        do {
          uVar8 = uVar8 - 1;
          FUN_02f17c08(*(undefined8 *)(DAT_0440ae00 + (ulong)uVar8 * 8));
        } while ((int)uVar2 < (int)uVar8);
      }
      else {
        (*DAT_0440a1f0)(&DAT_0440ae00,(ulong)uVar2,iVar4 + uVar2,1,&LAB_02f17bc4,0,"AK::Bus");
      }
      uVar12 = uVar12 - 1;
    } while (0 < (int)uVar12);
  }
  iVar4 = *DAT_0440ae10;
  uVar2 = DAT_0440ae08;
  if (0 < iVar4) {
    lVar10 = (ulong)(iVar4 - 1) << 3;
    do {
      iVar4 = iVar4 + -1;
      FUN_02f17c08(*(undefined8 *)(DAT_0440ae00 + lVar10));
      lVar10 = lVar10 + -8;
      uVar2 = DAT_0440ae08;
    } while (0 < iVar4);
  }
  while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
    lVar10 = *(long *)(DAT_0440ae00 + (ulong)uVar2 * 8);
    iVar4 = *(int *)(lVar10 + 0x84);
    *(undefined4 *)(lVar10 + 0x84) = 0x11;
    uVar9 = 4;
    if (iVar4 != 0x11) {
      uVar9 = 1;
    }
    *(undefined4 *)(lVar10 + 0x340) = uVar9;
    *(undefined8 *)(lVar10 + 0x58) = 0;
    *(undefined2 *)(lVar10 + 0x8a) = 0;
    if (*(short *)(lVar10 + 0x338) == 0) {
      if ((*(short *)(lVar10 + 0x128) == 0) && (*(long *)(lVar10 + 0x2b0) != 0)) {
        iVar4 = *(int *)(lVar10 + 700);
        *(undefined4 *)(lVar10 + 700) = 0x11;
        uVar9 = 4;
        if (iVar4 != 0x11) {
          uVar9 = 1;
        }
        *(undefined4 *)(lVar10 + 0x340) = uVar9;
        *(undefined2 *)(lVar10 + 0x2c2) = 0;
        if (*(short *)(lVar10 + 0x1a8) != 0) goto LAB_02f17460;
LAB_02f17458:
        if (*(long *)(lVar10 + 0x2c8) == 0) goto LAB_02f17460;
        iVar4 = *(int *)(lVar10 + 0x2d4);
        *(undefined4 *)(lVar10 + 0x2d4) = 0x11;
        uVar9 = 4;
        if (iVar4 != 0x11) {
          uVar9 = 1;
        }
        *(undefined4 *)(lVar10 + 0x340) = uVar9;
        *(undefined2 *)(lVar10 + 0x2da) = 0;
        if (*(short *)(lVar10 + 0x228) == 0) goto LAB_02f17468;
LAB_02f17470:
        sVar3 = *(short *)(lVar10 + 0x2a8);
      }
      else {
        if (*(short *)(lVar10 + 0x1a8) == 0) goto LAB_02f17458;
LAB_02f17460:
        if (*(short *)(lVar10 + 0x228) != 0) goto LAB_02f17470;
LAB_02f17468:
        if (*(long *)(lVar10 + 0x2e0) == 0) goto LAB_02f17470;
        iVar4 = *(int *)(lVar10 + 0x2ec);
        *(undefined4 *)(lVar10 + 0x2ec) = 0x11;
        uVar9 = 4;
        if (iVar4 != 0x11) {
          uVar9 = 1;
        }
        *(undefined4 *)(lVar10 + 0x340) = uVar9;
        *(undefined2 *)(lVar10 + 0x2f2) = 0;
        sVar3 = *(short *)(lVar10 + 0x2a8);
      }
      if ((sVar3 == 0) && (*(long *)(lVar10 + 0x2f8) != 0)) {
        iVar4 = *(int *)(lVar10 + 0x304);
        *(undefined4 *)(lVar10 + 0x304) = 0x11;
        uVar9 = 4;
        if (iVar4 != 0x11) {
          uVar9 = 1;
        }
        *(undefined4 *)(lVar10 + 0x340) = uVar9;
        *(undefined2 *)(lVar10 + 0x30a) = 0;
      }
    }
    memset(*(void **)(lVar10 + 0x78),0,
           (ulong)*(ushort *)(lVar10 + 0x88) * (ulong)*(byte *)(lVar10 + 0x80) * 4);
    if (DAT_0440ae40 == '\x01') {
      FUN_02f17d34(*(undefined8 *)(DAT_0440ae00 + (ulong)uVar2 * 8));
    }
  }
LAB_02f174b8:
  FUN_02f17da8();
  return;
}


