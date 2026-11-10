/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a0018c; name: FUN_02a0018c
 */


void FUN_02a0018c(undefined2 *param_1,long *param_2)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  short sVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  short sVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined1 uVar18;
  char cVar19;
  int iVar20;
  ulong uVar21;
  char cVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  int *piVar27;
  long lVar28;
  int iVar29;
  ulong uVar30;
  ulong uVar31;
  char cVar32;
  long lVar33;
  long lVar34;
  float fVar35;
  float fVar36;
  double dVar37;
  double dVar38;
  undefined **local_a0;
  uint local_98;
  ushort local_94;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  if ((((char)param_2[5] != '\0') || (uVar4 = *(ushort *)(param_2 + 4), uVar4 == 1)) ||
     (lVar34 = *param_2, *(char *)(*(long *)(lVar34 + 0x58) + 0x106e) != '\0')) {
    *(undefined1 *)param_1 = 1;
    uVar18 = 3;
    goto LAB_02a001fc;
  }
  lVar33 = param_2[3];
  iVar20 = *(int *)((long)param_2 + 0x24);
  lVar23 = param_2[1];
  lVar28 = param_2[2];
  iVar13 = FUN_029506a8(lVar33,0xe);
  uVar14 = iVar13 * 3;
  iVar13 = FUN_029506a8(lVar33,0xd);
  iVar13 = uVar14 + iVar13 * -2;
  fVar35 = -0.5;
  if (iVar13 != 0) {
    fVar35 = 0.5;
  }
  iVar13 = (int)(fVar35 + (float)(uint)(iVar13 * 0x1000));
  lVar34 = *(long *)(lVar34 + 0x58);
  uVar21 = *(ulong *)(lVar34 + 0x1040);
  if (((uint)uVar21 >> 2 & 1) != 0) {
    uVar17 = *(uint *)(lVar34 + 0x1060);
    if (uVar17 < 0x259) {
      if (uVar17 < 0x1c3) {
        if (uVar17 < 0x12d) {
          if (uVar17 < 0x97) {
            lVar25 = 0x800;
            if (uVar17 < 0x1f) {
              lVar25 = 0x4cd;
            }
          }
          else {
            lVar25 = 0xb33;
          }
        }
        else {
          lVar25 = 0xccd;
        }
      }
      else {
        lVar25 = 0xe66;
      }
    }
    else {
      lVar25 = 0x1000;
    }
    iVar13 = (int)(lVar25 * iVar13 + 0x800U >> 0xc);
  }
  uVar5 = *(ushort *)(lVar33 + 0x70);
  uVar15 = (uint)uVar5;
  bVar2 = *(byte *)(lVar33 + 0x369);
  bVar7 = (uVar15 | 1) != 0x38b;
  uVar17 = 0;
  if (uVar5 < 0x38a && bVar7) {
    uVar17 = (uint)bVar2;
  }
  uVar26 = (ulong)uVar17;
  if (uVar17 < 0x1c) {
    uVar31 = 0;
    if (uVar5 < 0x38a && bVar7) {
      uVar31 = (ulong)uVar5;
    }
    lVar25 = *(&DAT_043f23a0)[uVar31 * 4];
    uVar31 = (&DAT_043f23a0)[uVar31 * 4][1] - lVar25 >> 3;
    if ((uVar31 <= uVar26) || (*(long *)(lVar25 + uVar26 * 8) == 0)) goto LAB_02a00350;
  }
  else {
LAB_02a00350:
    uVar26 = 0;
    lVar25 = *DAT_043f23a0;
    uVar31 = DAT_043f23a0[1] - lVar25 >> 3;
  }
  if (uVar31 <= uVar26) goto LAB_02a0098c;
  piVar27 = *(int **)(lVar25 + uVar26 * 8);
  if ((*(ushort *)((long)piVar27 - (long)*piVar27) < 0x27) ||
     (uVar26 = (ulong)((ushort *)((long)piVar27 - (long)*piVar27))[0x13], uVar26 == 0)) {
    uVar17 = 0;
    uVar24 = 0;
    if (uVar4 != 0x1ef) goto LAB_02a004e0;
LAB_02a0039c:
    uVar4 = *(ushort *)(lVar33 + 0x366);
    iVar29 = 0x14;
    if (2999 < uVar4) {
      iVar29 = 0x1e;
    }
    iVar16 = 0;
    if (1999 < uVar4) {
      iVar16 = iVar29;
    }
    iVar29 = -0x14;
    if (999 < uVar4) {
      iVar29 = iVar16;
    }
    iVar29 = iVar29 + uVar24;
    if (iVar29 < 2) {
      iVar29 = 1;
    }
    iVar29 = iVar29 * iVar13;
    goto LAB_02a003d4;
  }
  uVar24 = (uint)*(byte *)((long)piVar27 + uVar26);
  uVar17 = uVar24;
  if (uVar4 == 0x1ef) goto LAB_02a0039c;
LAB_02a004e0:
  iVar29 = uVar17 * iVar13;
  iVar13 = 0x1000;
  if (uVar4 < 0x1ec) {
    iVar16 = 0x1800;
    switch(uVar4) {
    case 2:
      iVar16 = 0x2000;
      break;
    case 3:
      break;
    default:
      goto switchD_02a00514_caseD_4;
    case 6:
      bVar7 = (*(byte *)(lVar33 + 0x168) & 7) != 0;
      cVar22 = *(char *)(lVar33 + 0x2dc);
      cVar3 = *(char *)(lVar33 + 0x2dd);
      bVar8 = cVar22 != '\x12';
      bVar9 = cVar22 != '\x02';
      bVar10 = cVar3 == '\x12';
      bVar11 = cVar3 == '\x02';
      cVar19 = cVar3;
      if (*(char *)(lVar33 + 0x389) < '\0') {
        if (bVar8 && (bVar9 || !bVar7)) goto joined_r0x02a00c04;
        cVar32 = cVar3;
        if (bVar10 || bVar7 && bVar11) {
          cVar19 = '\x12';
          cVar32 = '\x12';
        }
      }
      else if (bVar8 && (bVar9 || !bVar7)) {
joined_r0x02a00c04:
        cVar32 = cVar22;
        if (bVar10 || bVar7 && bVar11) {
          cVar19 = cVar22;
        }
      }
      else {
        cVar19 = '\0';
        cVar32 = '\0';
        if (!bVar10 && (!bVar7 || !bVar11)) {
          cVar19 = cVar3;
          cVar32 = cVar3;
        }
      }
      iVar16 = 0x3800;
      if ((cVar32 != '\n') && (cVar19 != '\n')) {
        if (*(char *)(lVar33 + 0x2de) == '\n') goto LAB_02a00be0;
        cVar19 = cVar3;
        if (*(char *)(lVar33 + 0x389) < '\0') {
          if (bVar8 && (bVar9 || !bVar7)) goto joined_r0x02a00c4c;
          cVar22 = cVar3;
          if (!bVar10 && (!bVar7 || !bVar11)) goto LAB_02a00c2c;
          cVar22 = '\x12';
LAB_02a00c28:
          cVar19 = cVar22;
        }
        else if (bVar8 && (bVar9 || !bVar7)) {
joined_r0x02a00c4c:
          if (bVar10 || bVar7 && bVar11) goto LAB_02a00c28;
        }
        else {
          cVar22 = '\0';
          cVar19 = '\0';
          if (!bVar10 && (!bVar7 || !bVar11)) {
            cVar22 = cVar3;
            cVar19 = cVar3;
          }
        }
LAB_02a00c2c:
        iVar16 = 0x3800;
        if (((*(char *)(lVar33 + 0x2de) != '\x06') && (cVar22 != '\x06')) && (cVar19 != '\x06'))
        goto LAB_02a003d4;
      }
      break;
    case 7:
      if ((uVar21 & 3) == 0) goto LAB_02a003d4;
LAB_02a00be0:
      iVar16 = 0x3800;
      break;
    case 8:
      uVar17 = FUN_029506a8(lVar33,0xf);
      if (0x1d < (uVar17 & 0xfffe)) goto LAB_02a003d4;
      uVar17 = 0x29 - uVar17;
      if (0x27 < (uVar17 & 0xffff)) {
        uVar17 = 0x28;
      }
      fVar35 = -0.5;
      if ((uVar17 & 0xffff) != 0) {
        fVar35 = 0.5;
      }
      iVar16 = (int)(fVar35 + (float)((uVar17 & 0xffff) << 0xc)) / 10;
      break;
    case 10:
      iVar16 = *(int *)(*(long *)(lVar23 + 0x1c8) + 8) * 0x4cd + 0x1000;
      if (0x3fff < iVar16) {
        iVar16 = 0x4000;
      }
      break;
    case 0xd:
      if (*(char *)(lVar34 + 8) == '\0') goto LAB_02a003d4;
      iVar16 = 0x3000;
      break;
    case 0xf:
      if (*(long *)(*(long *)(lVar23 + 0x1c8) + 8) != 0) goto LAB_02a003d4;
      iVar16 = 0x5000;
    }
    goto switchD_02a00514_caseD_3;
  }
  switch(uVar4) {
  case 0x1ec:
    iVar13 = FUN_029506a8(lVar33,0x17);
    if (99 < iVar13) goto LAB_02a00ab8;
    break;
  case 0x1ed:
    uVar17 = FUN_029506a8(lVar28,0xf);
    uVar15 = FUN_029506a8(lVar33,0xf);
    if ((uVar15 & 0xff) <= (uVar17 & 0xff) >> 2) {
LAB_02a0093c:
      iVar16 = 0x8000;
      goto switchD_02a00514_caseD_3;
    }
    if ((uVar17 & 0xff) >> 1 < (uVar15 & 0xff)) {
      iVar16 = 0x2000;
      if ((uVar17 & 0xff) <= (uVar15 & 0xff)) {
        iVar16 = 0x1000;
      }
      goto switchD_02a00514_caseD_3;
    }
LAB_02a00ab8:
    iVar16 = 0x4000;
    goto switchD_02a00514_caseD_3;
  case 0x1ee:
joined_r0x02a00ab4:
    if ((uVar21 & 1) != 0) goto LAB_02a00ab8;
    break;
  case 0x1ef:
  case 0x1f1:
switchD_02a00514_caseD_4:
    iVar16 = iVar13;
    if (uVar4 != 0x353) goto switchD_02a00514_caseD_3;
    goto LAB_02a00400;
  case 0x1f0:
    sVar12 = *(short *)(lVar28 + 0x70);
    iVar13 = FUN_029506a8(lVar28,0x12);
    sVar6 = *(short *)(lVar33 + 0x70);
    iVar16 = FUN_029506a8(lVar33,0x12);
    if ((sVar12 == sVar6) && (iVar13 != iVar16)) goto LAB_02a0093c;
    break;
  case 0x1f2:
    if ((uVar15 < 0x38a) && (bVar2 < 0x1c)) {
      lVar34 = *(&DAT_043f9500)[(ulong)uVar5 * 4];
      uVar21 = (&DAT_043f9500)[(ulong)uVar5 * 4][1] - lVar34 >> 3;
      if ((uVar21 <= bVar2) || (*(long *)(lVar34 + (ulong)bVar2 * 8) == 0)) goto LAB_02a00ac0;
      uVar26 = (ulong)bVar2;
      if (uVar21 <= uVar26) goto LAB_02a0098c;
    }
    else {
LAB_02a00ac0:
      uVar26 = 0;
      lVar34 = *DAT_043f9500;
      if (DAT_043f9500[1] - lVar34 >> 3 == 0) {
LAB_02a0098c:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
    }
    piVar27 = *(int **)(lVar34 + uVar26 * 8);
    puVar1 = (uint *)((long)piVar27 + (ulong)*(ushort *)((long)piVar27 + (8 - (long)*piVar27)));
    uVar17 = *(uint *)((long)puVar1 + (ulong)*puVar1);
    if ((uVar17 & 0xff) != 0) {
      uVar15 = 0;
      do {
        local_a0 = &PTR_LAB_0428aca8;
        local_94 = (ushort)bVar2;
        local_98 = (uint)uVar5;
        iVar13 = FUN_02c551b0(&local_a0,uVar15);
        if (iVar13 == 8) {
          local_a0 = &PTR_LAB_0428aca8;
          local_94 = (ushort)bVar2;
          local_98 = (uint)uVar5;
          sVar12 = FUN_02c55304(&local_a0,uVar15);
          if (sVar12 == 0x51) {
            iVar13 = 0x4000;
            goto switchD_02a00514_caseD_4;
          }
        }
        uVar15 = uVar15 + 1;
      } while ((uVar15 & 0xff) < (uVar17 & 0xff));
      iVar13 = 0x1000;
      goto switchD_02a00514_caseD_4;
    }
    break;
  default:
    if (uVar4 == 0x240) {
      uVar21 = FUN_02950bb4(lVar33,1);
      goto joined_r0x02a00ab4;
    }
    if (uVar4 != 0x353) goto switchD_02a00514_caseD_4;
    iVar13 = 0x19a;
    if ((uVar15 - 0x319 < 0xe) && ((1 << (ulong)(uVar15 - 0x319 & 0x1f) & 0x3c7fU) != 0)) {
      iVar13 = 0x5000;
    }
    goto LAB_02a00400;
  }
LAB_02a003d4:
  iVar16 = 0x1000;
switchD_02a00514_caseD_3:
  uVar17 = *(ushort *)(lVar33 + 0x70) - 0x319;
  iVar13 = iVar16;
  if ((uVar17 < 0xe) && (iVar13 = 0x19a, (1 << (ulong)(uVar17 & 0x1f) & 0x3c7fU) == 0)) {
    iVar13 = iVar16;
  }
LAB_02a00400:
  uVar17 = 0;
  if (uVar14 != 0) {
    uVar17 = (uint)((long)iVar13 * (long)iVar29 + 0x800U >> 0xc) / uVar14;
  }
  uVar14 = FUN_029506a8(lVar33,0xf);
  lVar34 = DAT_043ecde0;
  if ((uVar14 & 0xffff) < 0x15) {
    uVar17 = (int)((0x1e - (uVar14 & 0xffff)) * uVar17) / 10;
  }
  if ((*(byte *)(lVar33 + 0x98) & 7) == 0) {
    if (((*(byte *)(lVar33 + 0xa0) & 7) != 0) || ((*(byte *)(lVar33 + 0xa8) & 7) != 0)) {
      iVar13 = 0x2800;
      goto LAB_02a0047c;
    }
    if (((*(byte *)(lVar33 + 0xb0) & 7) != 0) || ((*(byte *)(lVar33 + 0xb8) & 7) != 0))
    goto LAB_02a00458;
  }
  else {
LAB_02a00458:
    iVar13 = 0x1800;
LAB_02a0047c:
    uVar17 = (uint)((long)(int)uVar17 * (long)iVar13 + 0x800U >> 0xc);
  }
  uVar21 = (long)(int)uVar17 * (long)iVar20 + 0x800U >> 0xc;
  uVar14 = (uint)uVar21;
  if (*(char *)((long)param_2 + 0x29) != '\0') {
    uVar17 = *(uint *)(*(long *)(*param_2 + 0x58) + 0x1060);
    if (uVar17 < 0x259) {
      if (0x1c2 < uVar17) {
        lVar23 = 0x2000;
        goto LAB_02a005e0;
      }
      if (300 < uVar17) {
        lVar23 = 0x1800;
        goto LAB_02a005e0;
      }
      if (0x96 < uVar17) {
        lVar23 = 0x1000;
        goto LAB_02a005e0;
      }
      if (0x1e < uVar17) {
        lVar23 = 0x800;
        goto LAB_02a005e0;
      }
      bVar7 = false;
    }
    else {
      lVar23 = 0x2800;
LAB_02a005e0:
      bVar2 = *(byte *)(*(long *)(*param_2 + 0x58) + 0x102a);
      lVar28 = (long)(int)uVar14;
      if (0xfefff < (int)uVar14) {
        lVar28 = 0xff000;
      }
      uVar26 = *(ulong *)(DAT_043ecde0 + 8);
      uVar31 = *(ulong *)(DAT_043ecde0 + 0x10);
      uVar30 = uVar31 ^ uVar26;
      *(ulong *)(DAT_043ecde0 + 8) = uVar30 ^ (uVar26 >> 0x28 | uVar26 << 0x18) ^ uVar30 << 0x10;
      *(ulong *)(lVar34 + 0x10) = uVar30 >> 0x1b | uVar30 << 0x25;
      bVar7 = (int)((int)uVar31 + (int)uVar26 & 0xffU) <
              (int)(lVar28 * (lVar23 << ((ulong)bVar2 & 0x3f)) + 0x800U >> 0xc) / 6 >> 0xc;
    }
    *(bool *)((long)param_1 + 1) = bVar7;
  }
  if ((int)uVar14 < 0xff000) {
    dVar37 = 0.0;
    if ((uVar21 & 0xfff) != 0) {
      dVar37 = (double)(uVar14 & 0xfff) * 0.000244140625;
    }
    dVar37 = dVar37 + (double)((int)uVar14 >> 0xc);
    if (dVar37 == 0.0) {
      uVar14 = 0;
    }
    else {
      dVar37 = 255.0 / dVar37;
      dVar38 = 0.5;
      if (dVar37 <= 0.0) {
        dVar38 = -0.5;
      }
      uVar14 = (uint)(dVar37 * 4096.0 + dVar38);
    }
    fVar35 = 0.0;
    if ((uVar14 & 0xfff) != 0) {
      fVar35 = (float)(uVar14 & 0xfff) * 0.00024414062;
    }
    fVar35 = powf(fVar35 + (float)((int)uVar14 >> 0xc),0.1875);
    fVar36 = 0.5;
    if (fVar35 <= 0.0) {
      fVar36 = -0.5;
    }
    uVar14 = (uint)(fVar35 * 4096.0 + fVar36);
    dVar37 = 0.0;
    if ((uVar14 & 0xfff) != 0) {
      dVar37 = (double)(uVar14 & 0xfff) * 0.000244140625;
    }
    dVar37 = dVar37 + (double)((int)uVar14 >> 0xc);
    if (dVar37 == 0.0) {
      iVar20 = 0;
    }
    else {
      dVar37 = 65536.0 / dVar37;
      dVar38 = 0.5;
      if (dVar37 <= 0.0) {
        dVar38 = -0.5;
      }
      iVar20 = (int)(dVar37 * 4096.0 + dVar38) >> 0xc;
    }
    *(undefined1 *)param_1 = 0;
    cVar22 = *(char *)((long)param_1 + 1);
    *(undefined1 *)(param_1 + 1) = 0;
    lVar34 = DAT_043ecde0;
    uVar21 = *(ulong *)(DAT_043ecde0 + 8);
    uVar26 = *(ulong *)(DAT_043ecde0 + 0x10);
    uVar31 = uVar26 ^ uVar21;
    *(ulong *)(DAT_043ecde0 + 8) = uVar31 ^ (uVar21 >> 0x28 | uVar21 << 0x18) ^ uVar31 << 0x10;
    *(ulong *)(lVar34 + 0x10) = uVar31 >> 0x1b | uVar31 << 0x25;
    if ((int)((int)uVar26 + (int)uVar21 & 0xffffU) < iVar20) {
      if (*(byte *)(param_1 + 1) < 3) {
        *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) + 1;
      }
      lVar34 = DAT_043ecde0;
      if (cVar22 == '\0') {
        uVar21 = *(ulong *)(DAT_043ecde0 + 8);
        uVar26 = *(ulong *)(DAT_043ecde0 + 0x10);
        uVar31 = uVar26 ^ uVar21;
        *(ulong *)(DAT_043ecde0 + 8) = uVar31 ^ (uVar21 >> 0x28 | uVar21 << 0x18) ^ uVar31 << 0x10;
        *(ulong *)(lVar34 + 0x10) = uVar31 >> 0x1b | uVar31 << 0x25;
        if (iVar20 <= (int)((int)uVar26 + (int)uVar21 & 0xffffU)) {
          return;
        }
        if (*(byte *)(param_1 + 1) < 3) {
          *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) + 1;
        }
        lVar34 = DAT_043ecde0;
        uVar21 = *(ulong *)(DAT_043ecde0 + 8);
        uVar26 = *(ulong *)(DAT_043ecde0 + 0x10);
        uVar31 = uVar26 ^ uVar21;
        *(ulong *)(DAT_043ecde0 + 8) = uVar31 ^ (uVar21 >> 0x28 | uVar21 << 0x18) ^ uVar31 << 0x10;
        *(ulong *)(lVar34 + 0x10) = uVar31 >> 0x1b | uVar31 << 0x25;
        if (iVar20 <= (int)((int)uVar26 + (int)uVar21 & 0xffffU)) {
          return;
        }
        if (*(byte *)(param_1 + 1) < 3) {
          *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) + 1;
        }
        lVar34 = DAT_043ecde0;
        uVar21 = *(ulong *)(DAT_043ecde0 + 8);
        uVar26 = *(ulong *)(DAT_043ecde0 + 0x10);
        uVar31 = uVar26 ^ uVar21;
        *(ulong *)(DAT_043ecde0 + 8) = uVar31 ^ (uVar21 >> 0x28 | uVar21 << 0x18) ^ uVar31 << 0x10;
        *(ulong *)(lVar34 + 0x10) = uVar31 >> 0x1b | uVar31 << 0x25;
        if (iVar20 <= (int)((int)uVar26 + (int)uVar21 & 0xffffU)) {
          return;
        }
        if (*(byte *)(param_1 + 1) < 3) {
          *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) + 1;
        }
      }
      *(undefined1 *)param_1 = 1;
    }
  }
  else {
    *(undefined1 *)param_1 = 1;
    uVar18 = 3;
    if (*(char *)((long)param_1 + 1) != '\0') {
      uVar18 = 1;
    }
LAB_02a001fc:
    *(undefined1 *)(param_1 + 1) = uVar18;
  }
  return;
}


