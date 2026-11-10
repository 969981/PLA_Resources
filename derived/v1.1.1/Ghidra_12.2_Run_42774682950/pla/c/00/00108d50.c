/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00108d50; name: FUN_00108d50
 */


long FUN_00108d50(double param_1,undefined8 *param_2,int *param_3,undefined1 *param_4,int *param_5,
                 uint param_6)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  uint uVar15;
  char *pcVar16;
  char *__s;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  ulong local_68;
  
  dVar17 = param_1;
  if ((long)param_1 < 0) {
    dVar17 = -param_1;
  }
  uVar8 = (uint)((ulong)param_1 >> 0x34) & 0x7ff;
  if (uVar8 == 0) {
    if (ABS(param_1) == 0.0) {
      iVar2 = 1;
      *param_5 = 1;
      *param_2 = param_4;
      *param_4 = 0x30;
      goto LAB_00109378;
    }
    if (((ulong)param_1 >> 0x33 & 1) == 0) {
      uVar8 = 0;
      uVar6 = 0x8000000000000;
      do {
        uVar6 = (long)uVar6 >> 1;
        uVar8 = uVar8 - 1;
      } while ((uVar6 & (ulong)param_1) == 0);
      goto LAB_00108dec;
    }
    iVar2 = -0x3ff;
LAB_00108e30:
    iVar2 = iVar2 * 0x269;
    iVar3 = iVar2 + 0x7ff;
    if (-1 < iVar2) {
      iVar3 = iVar2;
    }
    iVar3 = iVar3 >> 0xb;
  }
  else {
    if (uVar8 == 0x7ff) {
      puVar13 = &DAT_039b0510;
      if (((ulong)param_1 & 0xfffffffffffff) != 0) {
        puVar13 = &DAT_03952c79;
      }
      *param_2 = puVar13;
      *param_5 = 0x7000;
      iVar2 = 3;
LAB_00109378:
      *param_3 = iVar2;
      return (long)param_1 >> 0x3f;
    }
LAB_00108dec:
    iVar2 = uVar8 - 0x3ff;
    if (iVar2 < 0) goto LAB_00108e30;
    iVar2 = iVar2 * 0x4d1;
    iVar3 = iVar2 + 0xfff;
    if (-1 < iVar2) {
      iVar3 = iVar2;
    }
    iVar3 = (iVar3 >> 0xc) + 1;
  }
  uVar8 = (uint)(0x12 - (long)iVar3);
  if (uVar8 < 0x17) {
    dVar18 = *(double *)(&DAT_039c2f00 + (0x12 - (long)iVar3) * 8);
    dVar10 = (double)((ulong)dVar17 & 0xfffffffff8000000);
    dVar19 = dVar17 - dVar10;
    dVar17 = dVar17 * dVar18;
    dVar11 = (double)((ulong)dVar18 & 0xfffffffff8000000);
    dVar10 = dVar19 * (dVar18 - dVar11) +
             dVar19 * dVar11 + (dVar10 * dVar11 - dVar17) + (dVar18 - dVar11) * dVar10;
  }
  else {
    uVar4 = -uVar8;
    if (-1 < (int)uVar8) {
      uVar4 = uVar8;
    }
    uVar15 = (int)(uVar4 * 0x2c9) >> 0xe;
    if (0xc < (int)uVar15) {
      uVar15 = 0xd;
    }
    iVar2 = uVar4 + uVar15 * -0x17;
    if ((int)uVar8 < 0) {
      if (iVar2 == 0) {
        dVar10 = 0.0;
      }
      else {
        uVar6 = -(ulong)(iVar2 - 1U >> 0x1f) & 0xfffffff800000000 | (ulong)(iVar2 - 1U) << 3;
        dVar19 = *(double *)(&DAT_039c2fb8 + uVar6);
        dVar11 = (double)((ulong)dVar17 & 0xfffffffff8000000);
        dVar20 = dVar17 - dVar11;
        dVar18 = (double)((ulong)dVar19 & 0xfffffffff8000000);
        dVar10 = dVar17 * *(double *)(&DAT_039c3068 + uVar6);
        dVar17 = dVar17 * dVar19;
        dVar10 = dVar10 + dVar20 * (dVar19 - dVar18) +
                          dVar20 * dVar18 + (dVar11 * dVar18 - dVar17) + (dVar19 - dVar18) * dVar11;
      }
      if (uVar15 == 0) goto LAB_001090fc;
      dVar18 = dVar17 + dVar10;
      uVar6 = -(ulong)(uVar15 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar15 << 3;
      dVar19 = *(double *)(&UNK_039c3110 + uVar6);
      dVar11 = (double)((ulong)dVar18 & 0xfffffffff8000000);
      dVar10 = dVar10 - (dVar18 - dVar17);
      dVar17 = dVar18 * dVar19;
      dVar20 = dVar18 - dVar11;
      puVar13 = &UNK_039c3180;
    }
    else {
      if (iVar2 == 0) {
        dVar10 = 0.0;
      }
      else {
        iVar9 = iVar2;
        if (0x15 < iVar2) {
          iVar9 = 0x16;
        }
        dVar18 = *(double *)(&DAT_039c2f00 + (long)iVar9 * 8);
        dVar10 = (double)((ulong)dVar17 & 0xfffffffff8000000);
        dVar11 = (double)((ulong)dVar18 & 0xfffffffff8000000);
        dVar19 = dVar17 * dVar18;
        dVar10 = (dVar17 - dVar10) * (dVar18 - dVar11) +
                 (dVar17 - dVar10) * dVar11 +
                 (dVar10 * dVar11 - dVar19) + (dVar18 - dVar11) * dVar10;
        dVar17 = dVar19;
        if (iVar2 - iVar9 != 0) {
          dVar20 = dVar19 + dVar10;
          dVar18 = *(double *)(&DAT_039c2f00 + (long)(iVar2 - iVar9) * 8);
          dVar17 = (double)((ulong)dVar20 & 0xfffffffff8000000);
          dVar11 = (double)((ulong)dVar18 & 0xfffffffff8000000);
          dVar10 = (dVar10 - (dVar20 - dVar19)) * dVar18 +
                   (dVar20 - dVar17) * (dVar18 - dVar11) +
                   (dVar20 - dVar17) * dVar11 +
                   (dVar17 * dVar11 - dVar20 * dVar18) + (dVar18 - dVar11) * dVar17;
          dVar17 = dVar20 * dVar18;
        }
      }
      if (uVar15 == 0) goto LAB_001090fc;
      dVar18 = dVar17 + dVar10;
      uVar6 = -(ulong)(uVar15 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar15 << 3;
      dVar19 = *(double *)((long)&DAT_039c31e0 + uVar6);
      dVar11 = (double)((ulong)dVar18 & 0xfffffffff8000000);
      dVar10 = dVar10 - (dVar18 - dVar17);
      dVar17 = dVar18 * dVar19;
      dVar20 = dVar18 - dVar11;
      puVar13 = &UNK_039c3250;
    }
    dVar21 = (double)((ulong)dVar19 & 0xfffffffff8000000);
    dVar10 = dVar10 * dVar19 + dVar18 * *(double *)(puVar13 + (uVar6 - 8)) +
             dVar20 * (dVar19 - dVar21) +
             dVar20 * dVar21 + (dVar11 * dVar21 - dVar17) + (dVar19 - dVar21) * dVar11;
  }
LAB_001090fc:
  dVar18 = dVar17 + dVar10;
  dVar19 = (double)(long)dVar18;
  dVar11 = dVar18 - dVar19;
  uVar6 = (long)((dVar10 - (dVar18 - dVar17)) +
                dVar11 + ((dVar18 - (dVar11 - (dVar11 - dVar18))) - ((dVar11 - dVar18) + dVar19))) +
          (long)dVar18;
  if (999999999999999999 < uVar6) {
    iVar3 = iVar3 + 1;
  }
  uVar8 = iVar3 + param_6;
  if ((int)param_6 < 0) {
    uVar8 = (param_6 & 0x7ffffff) + 1;
  }
  if (uVar8 < 0x18) {
    uVar4 = 10;
    if (uVar6 < 1000000000) {
      uVar4 = 1;
    }
    uVar14 = (ulong)uVar4;
    do {
      if (uVar6 < *(ulong *)(&DAT_039c2e60 + uVar14 * 8)) {
        if ((uVar8 < (uint)uVar14) && (uVar8 = (uint)uVar14 - uVar8, uVar8 < 0x18)) {
          uVar5 = *(ulong *)(&DAT_039c2e60 + (long)(int)uVar8 * 8);
          uVar12 = uVar6 + (uVar5 >> 1);
          uVar6 = 0;
          if (uVar5 != 0) {
            uVar6 = uVar12 / uVar5;
          }
          if (*(ulong *)(&DAT_039c2e60 + uVar14 * 8) <= uVar12) {
            iVar3 = iVar3 + 1;
          }
        }
        break;
      }
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 != 0x14);
  }
  uVar14 = uVar6;
  if (uVar6 != 0) {
    if (0xffffffff < (long)uVar6) {
      do {
        uVar6 = uVar14 / 1000;
        if (uVar14 % 1000 != 0) goto LAB_00109270;
        uVar12 = uVar14 >> 0x23;
        uVar14 = uVar6;
      } while (0x7c < uVar12);
    }
    iVar2 = (int)uVar6 + (int)((uVar6 & 0xffffffff) / 1000) * -1000;
    while (iVar2 == 0) {
      uVar14 = uVar6 & 0xffffffff;
      uVar6 = uVar14 / 1000;
      iVar2 = (int)(uVar14 / 1000) + (int)(uVar6 / 1000) * -1000;
    }
    uVar14 = uVar6 & 0xffffffff;
  }
LAB_00109270:
  iVar2 = 0;
  __s = param_4 + 0x40;
  param_4 = param_4 + 0x38;
  if (99999999 < (long)uVar14) goto LAB_001092cc;
  do {
    local_68 = 0;
    iVar9 = (int)uVar14;
    uVar6 = uVar14;
    pcVar1 = __s;
    uVar14 = local_68;
    while( true ) {
      pcVar16 = pcVar1;
      if (iVar9 != 0) {
        do {
          uVar12 = (uVar6 & 0xffffffff) / 100;
          uVar8 = (uint)uVar6;
          iVar2 = iVar2 + 2;
          pcVar16 = pcVar16 + -2;
          *(undefined2 *)pcVar16 =
               *(undefined2 *)
                (
                "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                + (ulong)(uVar8 + (int)uVar12 * -100) * 2);
          uVar6 = uVar12;
        } while (99 < uVar8);
      }
      if (uVar14 == 0) {
        if ((iVar2 != 0) && (*pcVar16 == '0')) {
          pcVar16 = pcVar16 + 1;
          iVar2 = iVar2 + -1;
        }
        *param_5 = iVar3;
        *param_2 = pcVar16;
        goto LAB_00109378;
      }
      __s = pcVar1 + -8;
      if (pcVar16 != __s) {
        memset(__s,0x30,(size_t)(pcVar16 + (8 - (long)pcVar1)));
        lVar7 = (long)param_4 - (long)pcVar16;
        do {
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0);
        iVar2 = (iVar2 + (int)pcVar16 + 8) - (int)pcVar1;
      }
      param_4 = param_4 + -8;
      if (uVar14 < 100000000) break;
LAB_001092cc:
      uVar6 = uVar14 % 100000000;
      iVar9 = (int)uVar6;
      pcVar1 = __s;
      uVar14 = uVar14 / 100000000;
    }
  } while( true );
}


