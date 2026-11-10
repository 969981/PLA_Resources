/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e20b9c; name: FUN_02e20b9c
 */


void FUN_02e20b9c(float param_1,float param_2,long param_3,long *param_4)

{
  uint uVar1;
  ushort uVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  short *psVar9;
  long lVar10;
  float *pfVar11;
  uint uVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  lVar10 = *(long *)(param_3 + 0x10);
  fVar15 = 0.0;
  uVar2 = *(ushort *)((long)param_4 + 0x12);
  uVar4 = (uint)uVar2;
  uVar1 = *(uint *)(param_4 + 1);
  fVar18 = 0.0;
  if (-37.0 <= *(float *)(lVar10 + 8) * 0.05) {
    uVar12 = (uint)(*(float *)(lVar10 + 8) * 1393317.6 + 1.0653532e+09);
    fVar18 = (float)(uVar12 & 0x7fffff | 0x3f800000);
    fVar18 = (float)(uVar12 & 0xff800000) * 32767.0 *
             (fVar18 * (fVar18 * 0.32518977 + 0.020805772) + 0.65304345);
  }
  fVar17 = 0.0;
  if (-37.0 <= *(float *)(lVar10 + 0xc) * 0.05) {
    uVar12 = (uint)(*(float *)(lVar10 + 0xc) * 1393317.6 + 1.0653532e+09);
    fVar17 = (float)(uVar12 & 0x7fffff | 0x3f800000);
    fVar17 = (float)(uVar12 & 0xff800000) * 32767.0 *
             (fVar17 * (fVar17 * 0.32518977 + 0.020805772) + 0.65304345);
  }
  fVar16 = 0.0;
  if (-37.0 <= *(float *)(lVar10 + 0x10) * 0.05) {
    uVar12 = (uint)(*(float *)(lVar10 + 0x10) * 1393317.6 + 1.0653532e+09);
    fVar16 = (float)(uVar12 & 0x7fffff | 0x3f800000);
    fVar16 = (float)(uVar12 & 0xff800000) * 32767.0 *
             (fVar16 * (fVar16 * 0.32518977 + 0.020805772) + 0.65304345);
  }
  fVar19 = 0.0;
  if (-37.0 <= *(float *)(lVar10 + 0x14) * 0.05) {
    uVar12 = (uint)(*(float *)(lVar10 + 0x14) * 1393317.6 + 1.0653532e+09);
    fVar19 = (float)(uVar12 & 0x7fffff | 0x3f800000);
    fVar19 = (float)(uVar12 & 0xff800000) * 32767.0 *
             (fVar19 * (fVar19 * 0.32518977 + 0.020805772) + 0.65304345);
  }
  if (-37.0 <= *(float *)(lVar10 + 0x18) * 0.05) {
    uVar12 = (uint)(*(float *)(lVar10 + 0x18) * 1393317.6 + 1.0653532e+09);
    fVar15 = (float)(uVar12 & 0x7fffff | 0x3f800000);
    fVar15 = (float)(uVar12 & 0xff800000) * 32767.0 *
             (fVar15 * (fVar15 * 0.32518977 + 0.020805772) + 0.65304345);
  }
  plVar3 = (long *)(param_3 + 0x30);
  puVar13 = (undefined2 *)*plVar3;
  uVar5 = (uint)uVar2;
  uVar7 = uVar5 - 1;
  uVar6 = (uint)uVar2;
  uVar12 = uVar6 & 3;
  puVar14 = puVar13;
  if ((uVar2 & 3) != 0) {
    do {
      uVar5 = uVar5 - 1;
      uVar12 = uVar12 - 1;
      puVar13 = puVar14 + 2;
      *puVar14 = 0;
      puVar14 = puVar13;
    } while (uVar12 != 0);
  }
  if (2 < uVar7) {
    do {
      *puVar13 = 0;
      uVar5 = uVar5 - 4;
      puVar13[2] = 0;
      puVar13[4] = 0;
      puVar13[6] = 0;
      puVar13 = puVar13 + 8;
    } while (uVar5 != 0);
  }
  uVar12 = uVar6 & 3;
  puVar13 = (undefined2 *)(*plVar3 + 2);
  puVar14 = puVar13;
  uVar5 = uVar6;
  if ((uVar2 & 3) != 0) {
    do {
      uVar5 = uVar5 - 1;
      uVar12 = uVar12 - 1;
      puVar13 = puVar14 + 2;
      *puVar14 = 0;
      puVar14 = puVar13;
    } while (uVar12 != 0);
  }
  uVar1 = uVar1 >> 0xc & 0x63f;
  if (2 < uVar7) {
    do {
      *puVar13 = 0;
      uVar5 = uVar5 - 4;
      puVar13[2] = 0;
      puVar13[4] = 0;
      puVar13[6] = 0;
      puVar13 = puVar13 + 8;
    } while (uVar5 != 0);
  }
  uVar12 = (uint)uVar2;
  uVar5 = (uint)uVar2;
  uVar7 = (uint)uVar2;
  switch(uVar1) {
  case 0x603:
  case 0x60b:
    psVar9 = (short *)*plVar3;
    pfVar11 = (float *)*param_4;
    fVar18 = param_1;
    do {
      fVar19 = fVar18 * fVar17;
      fVar18 = fVar18 + param_2;
      iVar8 = (int)(fVar19 * *pfVar11) + (int)*psVar9;
      if (iVar8 < -0x7fff) {
        iVar8 = -0x8000;
      }
      if (0x7ffe < iVar8) {
        iVar8 = 0x7fff;
      }
      uVar12 = uVar12 - 1;
      *psVar9 = (short)iVar8;
      psVar9 = psVar9 + 2;
      pfVar11 = pfVar11 + 1;
    } while (uVar12 != 0);
    psVar9 = (short *)(*plVar3 + 2);
    pfVar11 = (float *)(*param_4 + (ulong)*(ushort *)(param_4 + 2) * 4);
    uVar1 = uVar5;
    fVar18 = param_1;
    do {
      fVar19 = fVar18 * fVar17;
      fVar18 = fVar18 + param_2;
      iVar8 = (int)(fVar19 * *pfVar11) + (int)*psVar9;
      if (iVar8 < -0x7fff) {
        iVar8 = -0x8000;
      }
      if (0x7ffe < iVar8) {
        iVar8 = 0x7fff;
      }
      uVar1 = uVar1 - 1;
      *psVar9 = (short)iVar8;
      psVar9 = psVar9 + 2;
      pfVar11 = pfVar11 + 1;
    } while (uVar1 != 0);
    psVar9 = (short *)*plVar3;
    pfVar11 = (float *)(*param_4 + (ulong)*(ushort *)(param_4 + 2) * 8);
    uVar1 = uVar5;
    fVar18 = param_1;
    do {
      fVar17 = fVar18 * fVar16;
      fVar18 = fVar18 + param_2;
      iVar8 = (int)(fVar17 * *pfVar11) + (int)*psVar9;
      if (iVar8 < -0x7fff) {
        iVar8 = -0x8000;
      }
      if (0x7ffe < iVar8) {
        iVar8 = 0x7fff;
      }
      uVar1 = uVar1 - 1;
      *psVar9 = (short)iVar8;
      psVar9 = psVar9 + 2;
      pfVar11 = pfVar11 + 1;
    } while (uVar1 != 0);
    psVar9 = (short *)(*plVar3 + 2);
    pfVar11 = (float *)(*param_4 + (ulong)*(ushort *)(param_4 + 2) * 0xc);
    uVar1 = uVar5;
    fVar18 = param_1;
    do {
      fVar17 = fVar18 * fVar16;
      fVar18 = fVar18 + param_2;
      iVar8 = (int)(fVar17 * *pfVar11) + (int)*psVar9;
      if (iVar8 < -0x7fff) {
        iVar8 = -0x8000;
      }
      if (0x7ffe < iVar8) {
        iVar8 = 0x7fff;
      }
      uVar1 = uVar1 - 1;
      *psVar9 = (short)iVar8;
      psVar9 = psVar9 + 2;
      pfVar11 = pfVar11 + 1;
    } while (uVar1 != 0);
    break;
  case 0x604:
  case 0x605:
  case 0x606:
  case 0x608:
  case 0x609:
  case 0x60a:
  case 0x60c:
  case 0x60d:
  case 0x60e:
  case 0x610:
  case 0x611:
  case 0x612:
  case 0x613:
  case 0x614:
  case 0x615:
  case 0x616:
  case 0x617:
  case 0x618:
  case 0x619:
  case 0x61a:
  case 0x61b:
  case 0x61c:
  case 0x61d:
  case 0x61e:
  case 0x61f:
  case 0x620:
  case 0x621:
  case 0x622:
  case 0x623:
  case 0x624:
  case 0x625:
  case 0x626:
  case 0x627:
  case 0x628:
  case 0x629:
  case 0x62a:
  case 0x62b:
  case 0x62c:
  case 0x62d:
  case 0x62e:
  case 0x62f:
  case 0x630:
  case 0x631:
  case 0x632:
  case 0x634:
  case 0x635:
  case 0x636:
  case 0x638:
  case 0x639:
  case 0x63a:
  case 0x63c:
  case 0x63d:
  case 0x63e:
    break;
  case 0x607:
  case 0x60f:
    psVar9 = (short *)*plVar3;
    pfVar11 = (float *)(*param_4 + (ulong)*(ushort *)(param_4 + 2) * 8);
    uVar1 = uVar12;
    fVar19 = param_1;
    do {
      fVar20 = fVar19 * fVar18;
      fVar19 = fVar19 + param_2;
      iVar8 = (int)(fVar20 * *pfVar11) + (int)*psVar9;
      if (iVar8 < -0x7fff) {
        iVar8 = -0x8000;
      }
      if (0x7ffe < iVar8) {
        iVar8 = 0x7fff;
      }
      uVar1 = uVar1 - 1;
      *psVar9 = (short)iVar8;
      psVar9 = psVar9 + 2;
      pfVar11 = pfVar11 + 1;
    } while (uVar1 != 0);
    psVar9 = (short *)(*plVar3 + 2);
    pfVar11 = (float *)(*param_4 + (ulong)*(ushort *)(param_4 + 2) * 8);
    uVar1 = uVar7;
    fVar19 = param_1;
    do {
      fVar20 = fVar19 * fVar18;
      fVar19 = fVar19 + param_2;
      iVar8 = (int)(fVar20 * *pfVar11) + (int)*psVar9;
      if (iVar8 < -0x7fff) {
        iVar8 = -0x8000;
      }
      if (0x7ffe < iVar8) {
        iVar8 = 0x7fff;
      }
      uVar1 = uVar1 - 1;
      *psVar9 = (short)iVar8;
      psVar9 = psVar9 + 2;
      pfVar11 = pfVar11 + 1;
    } while (uVar1 != 0);
    psVar9 = (short *)*plVar3;
    pfVar11 = (float *)*param_4;
    uVar1 = uVar7;
    fVar18 = param_1;
    do {
      fVar19 = fVar18 * fVar17;
      fVar18 = fVar18 + param_2;
      iVar8 = (int)(fVar19 * *pfVar11) + (int)*psVar9;
      if (iVar8 < -0x7fff) {
        iVar8 = -0x8000;
      }
      if (0x7ffe < iVar8) {
        iVar8 = 0x7fff;
      }
      uVar1 = uVar1 - 1;
      *psVar9 = (short)iVar8;
      psVar9 = psVar9 + 2;
      pfVar11 = pfVar11 + 1;
    } while (uVar1 != 0);
    psVar9 = (short *)(*plVar3 + 2);
    pfVar11 = (float *)(*param_4 + (ulong)*(ushort *)(param_4 + 2) * 4);
    uVar1 = uVar7;
    fVar18 = param_1;
    do {
      fVar19 = fVar18 * fVar17;
      fVar18 = fVar18 + param_2;
      iVar8 = (int)(fVar19 * *pfVar11) + (int)*psVar9;
      if (iVar8 < -0x7fff) {
        iVar8 = -0x8000;
      }
      if (0x7ffe < iVar8) {
        iVar8 = 0x7fff;
      }
      uVar1 = uVar1 - 1;
      *psVar9 = (short)iVar8;
      psVar9 = psVar9 + 2;
      pfVar11 = pfVar11 + 1;
    } while (uVar1 != 0);
    psVar9 = (short *)*plVar3;
    pfVar11 = (float *)(*param_4 + (ulong)*(ushort *)(param_4 + 2) * 0xc);
    fVar18 = param_1;
    do {
      fVar17 = fVar18 * fVar16;
      fVar18 = fVar18 + param_2;
      iVar8 = (int)(fVar17 * *pfVar11) + (int)*psVar9;
      if (iVar8 < -0x7fff) {
        iVar8 = -0x8000;
      }
      if (0x7ffe < iVar8) {
        iVar8 = 0x7fff;
      }
      uVar7 = uVar7 - 1;
      *psVar9 = (short)iVar8;
      psVar9 = psVar9 + 2;
      pfVar11 = pfVar11 + 1;
    } while (uVar7 != 0);
    psVar9 = (short *)(*plVar3 + 2);
    pfVar11 = (float *)(*param_4 + (ulong)*(ushort *)(param_4 + 2) * 0x10);
    fVar18 = param_1;
    do {
      fVar17 = fVar18 * fVar16;
      fVar18 = fVar18 + param_2;
      iVar8 = (int)(fVar17 * *pfVar11) + (int)*psVar9;
      if (iVar8 < -0x7fff) {
        iVar8 = -0x8000;
      }
      if (0x7ffe < iVar8) {
        iVar8 = 0x7fff;
      }
      uVar12 = uVar12 - 1;
      *psVar9 = (short)iVar8;
      psVar9 = psVar9 + 2;
      pfVar11 = pfVar11 + 1;
    } while (uVar12 != 0);
    break;
  case 0x633:
  case 0x63b:
    psVar9 = (short *)*plVar3;
    pfVar11 = (float *)*param_4;
    uVar1 = uVar12;
    fVar18 = param_1;
    do {
      fVar20 = fVar18 * fVar17;
      fVar18 = fVar18 + param_2;
      iVar8 = (int)(fVar20 * *pfVar11) + (int)*psVar9;
      if (iVar8 < -0x7fff) {
        iVar8 = -0x8000;
      }
      if (0x7ffe < iVar8) {
        iVar8 = 0x7fff;
      }
      uVar1 = uVar1 - 1;
      *psVar9 = (short)iVar8;
      psVar9 = psVar9 + 2;
      pfVar11 = pfVar11 + 1;
    } while (uVar1 != 0);
    psVar9 = (short *)(*plVar3 + 2);
    pfVar11 = (float *)(*param_4 + (ulong)*(ushort *)(param_4 + 2) * 4);
    uVar1 = uVar7;
    fVar18 = param_1;
    do {
      fVar20 = fVar18 * fVar17;
      fVar18 = fVar18 + param_2;
      iVar8 = (int)(fVar20 * *pfVar11) + (int)*psVar9;
      if (iVar8 < -0x7fff) {
        iVar8 = -0x8000;
      }
      if (0x7ffe < iVar8) {
        iVar8 = 0x7fff;
      }
      uVar1 = uVar1 - 1;
      *psVar9 = (short)iVar8;
      psVar9 = psVar9 + 2;
      pfVar11 = pfVar11 + 1;
    } while (uVar1 != 0);
    psVar9 = (short *)*plVar3;
    pfVar11 = (float *)(*param_4 + (ulong)*(ushort *)(param_4 + 2) * 8);
    uVar1 = uVar7;
    fVar18 = param_1;
    do {
      fVar17 = fVar18 * fVar19;
      fVar18 = fVar18 + param_2;
      iVar8 = (int)(fVar17 * *pfVar11) + (int)*psVar9;
      if (iVar8 < -0x7fff) {
        iVar8 = -0x8000;
      }
      if (0x7ffe < iVar8) {
        iVar8 = 0x7fff;
      }
      uVar1 = uVar1 - 1;
      *psVar9 = (short)iVar8;
      psVar9 = psVar9 + 2;
      pfVar11 = pfVar11 + 1;
    } while (uVar1 != 0);
    psVar9 = (short *)(*plVar3 + 2);
    pfVar11 = (float *)(*param_4 + (ulong)*(ushort *)(param_4 + 2) * 0xc);
    uVar1 = uVar7;
    fVar18 = param_1;
    do {
      fVar17 = fVar18 * fVar19;
      fVar18 = fVar18 + param_2;
      iVar8 = (int)(fVar17 * *pfVar11) + (int)*psVar9;
      if (iVar8 < -0x7fff) {
        iVar8 = -0x8000;
      }
      if (0x7ffe < iVar8) {
        iVar8 = 0x7fff;
      }
      uVar1 = uVar1 - 1;
      *psVar9 = (short)iVar8;
      psVar9 = psVar9 + 2;
      pfVar11 = pfVar11 + 1;
    } while (uVar1 != 0);
    psVar9 = (short *)*plVar3;
    pfVar11 = (float *)(*param_4 + (ulong)*(ushort *)(param_4 + 2) * 0x10);
    fVar18 = param_1;
    do {
      fVar17 = fVar18 * fVar16;
      fVar18 = fVar18 + param_2;
      iVar8 = (int)(fVar17 * *pfVar11) + (int)*psVar9;
      if (iVar8 < -0x7fff) {
        iVar8 = -0x8000;
      }
      if (0x7ffe < iVar8) {
        iVar8 = 0x7fff;
      }
      uVar7 = uVar7 - 1;
      *psVar9 = (short)iVar8;
      psVar9 = psVar9 + 2;
      pfVar11 = pfVar11 + 1;
    } while (uVar7 != 0);
    psVar9 = (short *)(*plVar3 + 2);
    pfVar11 = (float *)(*param_4 + (ulong)*(ushort *)(param_4 + 2) * 0x14);
    fVar18 = param_1;
    do {
      fVar17 = fVar18 * fVar16;
      fVar18 = fVar18 + param_2;
      iVar8 = (int)(fVar17 * *pfVar11) + (int)*psVar9;
      if (iVar8 < -0x7fff) {
        iVar8 = -0x8000;
      }
      if (0x7ffe < iVar8) {
        iVar8 = 0x7fff;
      }
      uVar12 = uVar12 - 1;
      *psVar9 = (short)iVar8;
      psVar9 = psVar9 + 2;
      pfVar11 = pfVar11 + 1;
    } while (uVar12 != 0);
    break;
  case 0x637:
  case 0x63f:
    psVar9 = (short *)*plVar3;
    pfVar11 = (float *)(*param_4 + (ulong)*(ushort *)(param_4 + 2) * 8);
    uVar1 = uVar12;
    fVar20 = param_1;
    do {
      fVar21 = fVar20 * fVar18;
      fVar20 = fVar20 + param_2;
      iVar8 = (int)(fVar21 * *pfVar11) + (int)*psVar9;
      if (iVar8 < -0x7fff) {
        iVar8 = -0x8000;
      }
      if (0x7ffe < iVar8) {
        iVar8 = 0x7fff;
      }
      uVar1 = uVar1 - 1;
      *psVar9 = (short)iVar8;
      psVar9 = psVar9 + 2;
      pfVar11 = pfVar11 + 1;
    } while (uVar1 != 0);
    psVar9 = (short *)(*plVar3 + 2);
    pfVar11 = (float *)(*param_4 + (ulong)*(ushort *)(param_4 + 2) * 8);
    uVar1 = uVar5;
    fVar20 = param_1;
    do {
      fVar21 = fVar20 * fVar18;
      fVar20 = fVar20 + param_2;
      iVar8 = (int)(fVar21 * *pfVar11) + (int)*psVar9;
      if (iVar8 < -0x7fff) {
        iVar8 = -0x8000;
      }
      if (0x7ffe < iVar8) {
        iVar8 = 0x7fff;
      }
      uVar1 = uVar1 - 1;
      *psVar9 = (short)iVar8;
      psVar9 = psVar9 + 2;
      pfVar11 = pfVar11 + 1;
    } while (uVar1 != 0);
    psVar9 = (short *)*plVar3;
    pfVar11 = (float *)*param_4;
    uVar1 = uVar5;
    fVar18 = param_1;
    do {
      fVar20 = fVar18 * fVar17;
      fVar18 = fVar18 + param_2;
      iVar8 = (int)(fVar20 * *pfVar11) + (int)*psVar9;
      if (iVar8 < -0x7fff) {
        iVar8 = -0x8000;
      }
      if (0x7ffe < iVar8) {
        iVar8 = 0x7fff;
      }
      uVar1 = uVar1 - 1;
      *psVar9 = (short)iVar8;
      psVar9 = psVar9 + 2;
      pfVar11 = pfVar11 + 1;
    } while (uVar1 != 0);
    psVar9 = (short *)(*plVar3 + 2);
    pfVar11 = (float *)(*param_4 + (ulong)*(ushort *)(param_4 + 2) * 4);
    uVar1 = uVar7;
    fVar18 = param_1;
    do {
      fVar20 = fVar18 * fVar17;
      fVar18 = fVar18 + param_2;
      iVar8 = (int)(fVar20 * *pfVar11) + (int)*psVar9;
      if (iVar8 < -0x7fff) {
        iVar8 = -0x8000;
      }
      if (0x7ffe < iVar8) {
        iVar8 = 0x7fff;
      }
      uVar1 = uVar1 - 1;
      *psVar9 = (short)iVar8;
      psVar9 = psVar9 + 2;
      pfVar11 = pfVar11 + 1;
    } while (uVar1 != 0);
    psVar9 = (short *)*plVar3;
    pfVar11 = (float *)(*param_4 + (ulong)*(ushort *)(param_4 + 2) * 0xc);
    uVar1 = uVar7;
    fVar18 = param_1;
    do {
      fVar17 = fVar18 * fVar19;
      fVar18 = fVar18 + param_2;
      iVar8 = (int)(fVar17 * *pfVar11) + (int)*psVar9;
      if (iVar8 < -0x7fff) {
        iVar8 = -0x8000;
      }
      if (0x7ffe < iVar8) {
        iVar8 = 0x7fff;
      }
      uVar1 = uVar1 - 1;
      *psVar9 = (short)iVar8;
      psVar9 = psVar9 + 2;
      pfVar11 = pfVar11 + 1;
    } while (uVar1 != 0);
    psVar9 = (short *)(*plVar3 + 2);
    pfVar11 = (float *)(*param_4 + (ulong)*(ushort *)(param_4 + 2) * 0x10);
    uVar1 = uVar7;
    fVar18 = param_1;
    do {
      fVar17 = fVar18 * fVar19;
      fVar18 = fVar18 + param_2;
      iVar8 = (int)(fVar17 * *pfVar11) + (int)*psVar9;
      if (iVar8 < -0x7fff) {
        iVar8 = -0x8000;
      }
      if (0x7ffe < iVar8) {
        iVar8 = 0x7fff;
      }
      uVar1 = uVar1 - 1;
      *psVar9 = (short)iVar8;
      psVar9 = psVar9 + 2;
      pfVar11 = pfVar11 + 1;
    } while (uVar1 != 0);
    psVar9 = (short *)*plVar3;
    pfVar11 = (float *)(*param_4 + (ulong)*(ushort *)(param_4 + 2) * 0x14);
    fVar18 = param_1;
    do {
      fVar17 = fVar18 * fVar16;
      fVar18 = fVar18 + param_2;
      iVar8 = (int)(fVar17 * *pfVar11) + (int)*psVar9;
      if (iVar8 < -0x7fff) {
        iVar8 = -0x8000;
      }
      if (0x7ffe < iVar8) {
        iVar8 = 0x7fff;
      }
      uVar7 = uVar7 - 1;
      *psVar9 = (short)iVar8;
      psVar9 = psVar9 + 2;
      pfVar11 = pfVar11 + 1;
    } while (uVar7 != 0);
    psVar9 = (short *)(*plVar3 + 2);
    pfVar11 = (float *)(*param_4 + (ulong)*(ushort *)(param_4 + 2) * 0x18);
    fVar18 = param_1;
    do {
      fVar17 = fVar18 * fVar16;
      fVar18 = fVar18 + param_2;
      iVar8 = (int)(fVar17 * *pfVar11) + (int)*psVar9;
      if (iVar8 < -0x7fff) {
        iVar8 = -0x8000;
      }
      if (0x7ffe < iVar8) {
        iVar8 = 0x7fff;
      }
      uVar12 = uVar12 - 1;
      *psVar9 = (short)iVar8;
      psVar9 = psVar9 + 2;
      pfVar11 = pfVar11 + 1;
    } while (uVar12 != 0);
    break;
  default:
    switch(uVar1) {
    case 3:
    case 0xb:
      psVar9 = (short *)*plVar3;
      pfVar11 = (float *)*param_4;
      fVar18 = param_1;
      do {
        fVar16 = fVar18 * fVar17;
        fVar18 = fVar18 + param_2;
        iVar8 = (int)(fVar16 * *pfVar11) + (int)*psVar9;
        if (iVar8 < -0x7fff) {
          iVar8 = -0x8000;
        }
        if (0x7ffe < iVar8) {
          iVar8 = 0x7fff;
        }
        uVar7 = uVar7 - 1;
        *psVar9 = (short)iVar8;
        psVar9 = psVar9 + 2;
        pfVar11 = pfVar11 + 1;
      } while (uVar7 != 0);
      psVar9 = (short *)(*plVar3 + 2);
      pfVar11 = (float *)(*param_4 + (ulong)*(ushort *)(param_4 + 2) * 4);
      fVar18 = param_1;
      do {
        fVar16 = fVar18 * fVar17;
        fVar18 = fVar18 + param_2;
        iVar8 = (int)(fVar16 * *pfVar11) + (int)*psVar9;
        if (iVar8 < -0x7fff) {
          iVar8 = -0x8000;
        }
        if (0x7ffe < iVar8) {
          iVar8 = 0x7fff;
        }
        uVar12 = uVar12 - 1;
        *psVar9 = (short)iVar8;
        psVar9 = psVar9 + 2;
        pfVar11 = pfVar11 + 1;
      } while (uVar12 != 0);
      break;
    case 4:
    case 0xc:
      psVar9 = (short *)*plVar3;
      pfVar11 = (float *)*param_4;
      uVar1 = uVar7;
      fVar17 = param_1;
      do {
        fVar16 = fVar17 * fVar18;
        fVar17 = fVar17 + param_2;
        iVar8 = (int)(fVar16 * *pfVar11) + (int)*psVar9;
        if (iVar8 < -0x7fff) {
          iVar8 = -0x8000;
        }
        if (0x7ffe < iVar8) {
          iVar8 = 0x7fff;
        }
        uVar1 = uVar1 - 1;
        *psVar9 = (short)iVar8;
        psVar9 = psVar9 + 2;
        pfVar11 = pfVar11 + 1;
      } while (uVar1 != 0);
      psVar9 = (short *)(*plVar3 + 2);
      pfVar11 = (float *)*param_4;
      fVar17 = param_1;
      do {
        fVar16 = fVar17 * fVar18;
        fVar17 = fVar17 + param_2;
        iVar8 = (int)(fVar16 * *pfVar11) + (int)*psVar9;
        if (iVar8 < -0x7fff) {
          iVar8 = -0x8000;
        }
        if (0x7ffe < iVar8) {
          iVar8 = 0x7fff;
        }
        uVar7 = uVar7 - 1;
        *psVar9 = (short)iVar8;
        psVar9 = psVar9 + 2;
        pfVar11 = pfVar11 + 1;
      } while (uVar7 != 0);
      break;
    case 7:
    case 0xf:
      psVar9 = (short *)*plVar3;
      pfVar11 = (float *)(*param_4 + (ulong)*(ushort *)(param_4 + 2) * 8);
      uVar1 = uVar5;
      fVar16 = param_1;
      do {
        fVar19 = fVar16 * fVar18;
        fVar16 = fVar16 + param_2;
        iVar8 = (int)(fVar19 * *pfVar11) + (int)*psVar9;
        if (iVar8 < -0x7fff) {
          iVar8 = -0x8000;
        }
        if (0x7ffe < iVar8) {
          iVar8 = 0x7fff;
        }
        uVar1 = uVar1 - 1;
        *psVar9 = (short)iVar8;
        psVar9 = psVar9 + 2;
        pfVar11 = pfVar11 + 1;
      } while (uVar1 != 0);
      psVar9 = (short *)(*plVar3 + 2);
      pfVar11 = (float *)(*param_4 + (ulong)*(ushort *)(param_4 + 2) * 8);
      uVar1 = uVar5;
      fVar16 = param_1;
      do {
        fVar19 = fVar16 * fVar18;
        fVar16 = fVar16 + param_2;
        iVar8 = (int)(fVar19 * *pfVar11) + (int)*psVar9;
        if (iVar8 < -0x7fff) {
          iVar8 = -0x8000;
        }
        if (0x7ffe < iVar8) {
          iVar8 = 0x7fff;
        }
        uVar1 = uVar1 - 1;
        *psVar9 = (short)iVar8;
        psVar9 = psVar9 + 2;
        pfVar11 = pfVar11 + 1;
      } while (uVar1 != 0);
      psVar9 = (short *)*plVar3;
      pfVar11 = (float *)*param_4;
      uVar1 = uVar5;
      fVar18 = param_1;
      do {
        fVar16 = fVar18 * fVar17;
        fVar18 = fVar18 + param_2;
        iVar8 = (int)(fVar16 * *pfVar11) + (int)*psVar9;
        if (iVar8 < -0x7fff) {
          iVar8 = -0x8000;
        }
        if (0x7ffe < iVar8) {
          iVar8 = 0x7fff;
        }
        uVar1 = uVar1 - 1;
        *psVar9 = (short)iVar8;
        psVar9 = psVar9 + 2;
        pfVar11 = pfVar11 + 1;
      } while (uVar1 != 0);
      psVar9 = (short *)(*plVar3 + 2);
      pfVar11 = (float *)(*param_4 + (ulong)*(ushort *)(param_4 + 2) * 4);
      fVar18 = param_1;
      do {
        fVar16 = fVar18 * fVar17;
        fVar18 = fVar18 + param_2;
        iVar8 = (int)(fVar16 * *pfVar11) + (int)*psVar9;
        if (iVar8 < -0x7fff) {
          iVar8 = -0x8000;
        }
        if (0x7ffe < iVar8) {
          iVar8 = 0x7fff;
        }
        uVar7 = uVar7 - 1;
        *psVar9 = (short)iVar8;
        psVar9 = psVar9 + 2;
        pfVar11 = pfVar11 + 1;
      } while (uVar7 != 0);
      break;
    case 8:
      psVar9 = (short *)*plVar3;
      pfVar11 = (float *)*param_4;
      fVar18 = param_1;
      do {
        fVar17 = fVar18 * fVar15;
        fVar18 = fVar18 + param_2;
        iVar8 = (int)(fVar17 * *pfVar11) + (int)*psVar9;
        if (iVar8 < -0x7fff) {
          iVar8 = -0x8000;
        }
        if (0x7ffe < iVar8) {
          iVar8 = 0x7fff;
        }
        uVar6 = uVar6 - 1;
        *psVar9 = (short)iVar8;
        psVar9 = psVar9 + 2;
        pfVar11 = pfVar11 + 1;
      } while (uVar6 != 0);
      psVar9 = (short *)(*plVar3 + 2);
      pfVar11 = (float *)*param_4;
      uVar1 = uVar5;
      fVar18 = param_1;
      do {
        fVar17 = fVar18 * fVar15;
        fVar18 = fVar18 + param_2;
        iVar8 = (int)(fVar17 * *pfVar11) + (int)*psVar9;
        if (iVar8 < -0x7fff) {
          iVar8 = -0x8000;
        }
        if (0x7ffe < iVar8) {
          iVar8 = 0x7fff;
        }
        uVar1 = uVar1 - 1;
        *psVar9 = (short)iVar8;
        psVar9 = psVar9 + 2;
        pfVar11 = pfVar11 + 1;
      } while (uVar1 != 0);
    }
  }
  if ((*(uint *)(param_4 + 1) >> 0xf & 1) != 0) {
    psVar9 = (short *)*plVar3;
    pfVar11 = (float *)(*param_4 +
                       (ulong)((*(uint *)(param_4 + 1) & 0xff) - 1) *
                       (ulong)*(ushort *)(param_4 + 2) * 4);
    fVar18 = param_1;
    do {
      fVar17 = fVar18 * fVar15;
      fVar18 = fVar18 + param_2;
      iVar8 = (int)(fVar17 * *pfVar11) + (int)*psVar9;
      if (iVar8 < -0x7fff) {
        iVar8 = -0x8000;
      }
      if (0x7ffe < iVar8) {
        iVar8 = 0x7fff;
      }
      uVar5 = uVar5 - 1;
      *psVar9 = (short)iVar8;
      psVar9 = psVar9 + 2;
      pfVar11 = pfVar11 + 1;
    } while (uVar5 != 0);
    psVar9 = (short *)(*plVar3 + 2);
    if ((*(uint *)(param_4 + 1) >> 0xf & 1) == 0) {
      pfVar11 = (float *)0x0;
    }
    else {
      pfVar11 = (float *)(*param_4 +
                         (ulong)((*(uint *)(param_4 + 1) & 0xff) - 1) *
                         (ulong)*(ushort *)(param_4 + 2) * 4);
    }
    do {
      fVar18 = param_1 * fVar15;
      param_1 = param_1 + param_2;
      iVar8 = (int)(fVar18 * *pfVar11) + (int)*psVar9;
      if (iVar8 < -0x7fff) {
        iVar8 = -0x8000;
      }
      if (0x7ffe < iVar8) {
        iVar8 = 0x7fff;
      }
      uVar4 = uVar4 - 1;
      *psVar9 = (short)iVar8;
      psVar9 = psVar9 + 2;
      pfVar11 = pfVar11 + 1;
    } while (uVar4 != 0);
  }
  return;
}


