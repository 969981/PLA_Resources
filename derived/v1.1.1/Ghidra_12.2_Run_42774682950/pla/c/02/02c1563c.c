/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c1563c; name: FUN_02c1563c
 */


void FUN_02c1563c(long *param_1,long *param_2,int param_3)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char cVar11;
  bool bVar12;
  int iVar13;
  short sVar14;
  long lVar15;
  long *plVar16;
  char *pcVar17;
  long *plVar18;
  int iVar19;
  int iVar20;
  short sVar21;
  short sVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  ulong uVar27;
  float *pfVar28;
  int iVar29;
  ulong uVar30;
  float *pfVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  long lVar36;
  long lVar37;
  float fVar38;
  float fVar39;
  long *local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 auStack_58 [8];
  
  lVar37 = *param_2;
  *(uint *)(lVar37 + 0x178) = *(uint *)(lVar37 + 0x178) | 3;
  uStack_98 = *(undefined8 *)(lVar37 + 0x160);
  local_a0 = 0;
  local_b0 = (long *)0x0;
  uStack_a8 = 0;
  local_80 = 0;
  local_78 = (long *)0x0;
  uStack_70 = 0;
  local_90 = 0x1fffffffffffffff;
  uStack_88 = 0;
  lVar15 = *(long *)(lVar37 + 0x130);
  lVar36 = lVar15 - *(long *)(lVar37 + 0x128);
  if (lVar36 == 0) {
    FUN_02adbf4c((long *)(lVar37 + 0x128),1,&local_b0);
  }
  else if (1 < (ulong)((lVar36 >> 3) * -0x71c71c71c71c71c7)) {
    lVar36 = *(long *)(lVar37 + 0x128) + 0x48;
    while (lVar36 != lVar15) {
      plVar16 = *(long **)(lVar15 + -0x10);
      lVar15 = lVar15 + -0x48;
      if (plVar16 != (long *)0x0) {
        plVar18 = plVar16 + 10;
        do {
          iVar29 = (int)*plVar18 + -1;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar12) {
            *(int *)plVar18 = iVar29;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar29 == 0) {
          (**(code **)(*plVar16 + 0x10))();
        }
      }
      FUN_014bd284(lVar15);
    }
    *(long *)(lVar37 + 0x130) = lVar36;
  }
  if (local_78 != (long *)0x0) {
    plVar16 = local_78 + 10;
    do {
      iVar29 = (int)*plVar16 + -1;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar12) {
        *(int *)plVar16 = iVar29;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (iVar29 == 0) {
      (**(code **)(*local_78 + 0x10))();
    }
  }
  FUN_014bd284(&local_b0);
  lVar36 = *(long *)(lVar37 + 0x128);
  uVar2 = param_3 + 1;
  local_b0._0_4_ = 0x22;
  local_68._0_4_ = 1;
  FUN_02b76540(lVar36,&local_68,&local_b0);
  *(int *)(lVar36 + 0x40) = *(int *)(lVar36 + 0x40) + 0xc;
  local_b0 = (long *)CONCAT44(local_b0._4_4_,0x16);
  local_68 = CONCAT44(local_68._4_4_,0x18);
  FUN_02b76540(lVar36,&local_68,&local_b0);
  iVar29 = *(int *)(lVar36 + 0x40) + 8;
  *(int *)(lVar36 + 0x40) = iVar29;
  *(uint *)(lVar36 + 0x44) = uVar2 * uVar2;
  local_b0 = (long *)(ulong)(iVar29 * uVar2 * uVar2);
  local_a0 = local_a0 & 0xffffffff00000000;
  uStack_a8 = 4;
  local_68 = *param_1;
  lVar15 = FUN_01b34908(auStack_58,*(undefined8 *)(local_68 + 8),&local_68);
  if (lVar15 != 0) {
    piVar4 = (int *)(lVar15 + 0x50);
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar12) {
        *piVar4 = *piVar4 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  FUN_02bbfe84(lVar15,&local_b0,1,0,0);
  plVar16 = *(long **)(lVar36 + 0x38);
  *(undefined8 *)(lVar36 + 0x38) = 0;
  if (plVar16 != (long *)0x0) {
    plVar18 = plVar16 + 10;
    do {
      iVar29 = (int)*plVar18 + -1;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar12) {
        *(int *)plVar18 = iVar29;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (iVar29 == 0) {
      (**(code **)(*plVar16 + 0x10))();
    }
  }
  *(long *)(lVar36 + 0x38) = lVar15;
  uVar10 = *(uint *)(lVar15 + 0xa0);
  uVar27 = *(ulong *)(*(long *)(lVar15 + 0x98) + 0x138);
  uVar24 = (uint)uVar27;
  if (uVar10 < 3) {
    uVar24 = uVar24 & uVar10 - 1;
  }
  else {
    iVar29 = 0;
    if ((ulong)uVar10 != 0) {
      iVar29 = (int)(uVar27 / uVar10);
    }
    uVar24 = uVar24 - iVar29 * uVar10;
  }
  pcVar17 = (char *)FUN_02bc0470((long)(int)uVar24,lVar15 + 0x58);
  if (*pcVar17 == '\0' || *(long *)(pcVar17 + 8) == 0) {
    lVar15 = 0;
  }
  else {
    if (*(long *)(*(long *)(pcVar17 + 8) + 0x20) == 0) goto LAB_02c16f9c;
    lVar15 = (*DAT_043f0470)();
  }
  if (-1 < param_3) {
    fVar38 = (float)param_3;
    uVar27 = 0;
    pfVar28 = (float *)(lVar15 + 8);
    do {
      uVar30 = 0;
      pfVar31 = pfVar28;
      do {
        iVar29 = (int)uVar30;
        uVar30 = uVar30 + 1;
        fVar39 = (float)iVar29 / fVar38;
        pfVar31[-1] = 0.0;
        pfVar31[-2] = fVar39;
        *pfVar31 = -(float)(int)uVar27 / fVar38;
        pfVar31[1] = fVar39;
        pfVar31[2] = 1.0 - (float)(int)uVar27 / fVar38;
        pfVar31 = pfVar31 + 5;
      } while (uVar2 != uVar30);
      uVar27 = uVar27 + 1;
      pfVar28 = pfVar28 + (long)(int)uVar2 * 5;
    } while (uVar27 != uVar2);
  }
  iVar29 = param_3 * param_3;
  local_68 = *param_1;
  local_b0 = (long *)(ulong)(uint)(iVar29 * 0x6c);
  local_a0 = local_a0 & 0xffffffff00000000;
  uStack_a8 = 4;
  plVar16 = (long *)FUN_01b34908(auStack_58,*(undefined8 *)(local_68 + 8),&local_68);
  if (plVar16 == (long *)0x0) {
    plVar18 = (long *)0x0;
  }
  else {
    plVar18 = plVar16 + 10;
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar12) {
        *(int *)plVar18 = (int)*plVar18 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    plVar18 = plVar16;
  }
  FUN_02bbfe84(plVar18,&local_b0,1,0,0);
  uVar10 = *(uint *)(plVar18 + 0x14);
  uVar24 = (uint)*(ulong *)(plVar18[0x13] + 0x138);
  if (uVar10 < 3) {
    uVar24 = uVar24 & uVar10 - 1;
  }
  else {
    iVar25 = 0;
    if ((ulong)uVar10 != 0) {
      iVar25 = (int)(*(ulong *)(plVar18[0x13] + 0x138) / (ulong)uVar10);
    }
    uVar24 = uVar24 - iVar25 * uVar10;
  }
  pcVar17 = (char *)FUN_02bc0470((long)(int)uVar24,plVar18 + 0xb);
  if (*pcVar17 == '\0' || *(long *)(pcVar17 + 8) == 0) {
    lVar15 = 0;
  }
  else {
    if (*(long *)(*(long *)(pcVar17 + 8) + 0x20) == 0) {
LAB_02c16f9c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    lVar15 = (*DAT_043f0470)();
  }
  iVar25 = 0;
  iVar26 = 0;
  iVar13 = param_3 + -1;
  do {
    if (0 < param_3) {
      iVar32 = 0;
      iVar33 = param_3;
      iVar34 = 0;
      do {
        iVar35 = 0;
        iVar3 = iVar34 + 1;
        do {
          sVar14 = (short)uVar2;
          sVar22 = (short)iVar35;
          if (7 < iVar25 - 1U) {
            psVar1 = (short *)(lVar15 + (long)iVar26 * 2);
            sVar21 = (short)iVar33 + sVar22;
            sVar22 = (short)iVar32 + sVar22;
            psVar1[1] = sVar21 + 2;
            *psVar1 = sVar22;
            psVar1[2] = sVar21 + 1;
            psVar1[3] = sVar22;
            lVar36 = (long)iVar26 + 5;
            psVar1[4] = sVar22 + 1;
            iVar20 = iVar35 + 1;
            iVar19 = iVar3;
            goto LAB_02c15bfc;
          }
          uVar10 = iVar34 + iVar35 & 1;
          switch(iVar25) {
          case 1:
            uVar10 = uVar10 << 1;
            if (iVar35 != 0) {
              uVar10 = 0;
            }
            uVar30 = (ulong)uVar10;
            uVar27 = (ulong)(uVar10 | 1);
            lVar37 = (long)iVar26;
            iVar19 = (&DAT_03a8419c)[uVar27 * 6] + iVar34;
            if (((&DAT_03a8419c)[uVar30 * 6] + iVar35 == 0) && (iVar19 % 2 == 1)) {
              iVar19 = iVar19 + 1;
            }
            *(short *)(lVar15 + lVar37 * 2) =
                 sVar22 + (short)(&DAT_03a8419c)[uVar30 * 6] + sVar14 * (short)iVar19;
            iVar19 = (&DAT_03a841a0)[uVar27 * 6] + iVar34;
            if (((&DAT_03a841a0)[uVar30 * 6] + iVar35 == 0) && (iVar19 % 2 == 1)) {
              iVar19 = iVar19 + 1;
            }
            *(short *)(lVar15 + (lVar37 + 1) * 2) =
                 sVar22 + (short)(&DAT_03a841a0)[uVar30 * 6] + sVar14 * (short)iVar19;
            iVar19 = (&DAT_03a841a4)[uVar27 * 6] + iVar34;
            if (((&DAT_03a841a4)[uVar30 * 6] + iVar35 == 0) && (iVar19 % 2 == 1)) {
              iVar19 = iVar19 + 1;
            }
            *(short *)(lVar15 + (lVar37 + 2) * 2) =
                 sVar22 + (short)(&DAT_03a841a4)[uVar30 * 6] + sVar14 * (short)iVar19;
            iVar19 = (&DAT_03a841a8)[uVar27 * 6] + iVar34;
            if (((&DAT_03a841a8)[uVar30 * 6] + iVar35 == 0) && (iVar19 % 2 == 1)) {
              iVar19 = iVar19 + 1;
            }
            *(short *)(lVar15 + (lVar37 + 3) * 2) =
                 sVar22 + (short)(&DAT_03a841a8)[uVar30 * 6] + sVar14 * (short)iVar19;
            iVar19 = (&DAT_03a841ac)[uVar27 * 6] + iVar34;
            if (((&DAT_03a841ac)[uVar30 * 6] + iVar35 == 0) && (iVar19 % 2 == 1)) {
              iVar19 = iVar19 + 1;
            }
            lVar36 = lVar37 + 5;
            *(short *)(lVar15 + (lVar37 + 4) * 2) =
                 sVar22 + (short)(&DAT_03a841ac)[uVar30 * 6] + sVar14 * (short)iVar19;
            iVar20 = iVar35 + (&DAT_03a841b0)[uVar30 * 6];
            iVar19 = (&DAT_03a841b0)[uVar27 * 6] + iVar34;
            if ((iVar20 == 0) && (iVar19 % 2 == 1)) {
              iVar19 = iVar19 + 1;
            }
            break;
          case 2:
            uVar24 = 0;
            if (iVar13 <= iVar35) {
              uVar24 = uVar10 << 1;
            }
            uVar27 = (ulong)uVar24;
            uVar30 = (ulong)(uVar24 | 1);
            iVar23 = (&DAT_03a841a0)[uVar27 * 6];
            iVar6 = (&DAT_03a841a0)[uVar30 * 6];
            psVar1 = (short *)(lVar15 + (long)iVar26 * 2);
            iVar19 = (&DAT_03a841a4)[uVar27 * 6];
            iVar7 = (&DAT_03a841a8)[uVar27 * 6];
            *psVar1 = sVar22 + (short)(&DAT_03a8419c)[uVar27 * 6] +
                               sVar14 * ((short)((&DAT_03a8419c)[uVar30 * 6] + iVar34) +
                                        (ushort)(param_3 - (&DAT_03a8419c)[uVar27 * 6] == iVar35 &&
                                                ((&DAT_03a8419c)[uVar30 * 6] + iVar34) % 2 == 1));
            iVar20 = (&DAT_03a841a4)[uVar30 * 6];
            iVar8 = (&DAT_03a841a8)[uVar30 * 6];
            psVar1[1] = sVar22 + (short)iVar23 +
                                 sVar14 * ((short)(iVar6 + iVar34) +
                                          (ushort)(param_3 - iVar23 == iVar35 &&
                                                  (iVar6 + iVar34) % 2 == 1));
            iVar23 = (&DAT_03a841ac)[uVar27 * 6];
            iVar6 = (&DAT_03a841b0)[uVar27 * 6];
            psVar1[2] = sVar22 + (short)iVar19 +
                                 sVar14 * ((short)(iVar20 + iVar34) +
                                          (ushort)(param_3 - iVar19 == iVar35 &&
                                                  (iVar20 + iVar34) % 2 == 1));
            iVar19 = (&DAT_03a841ac)[uVar30 * 6];
            iVar9 = (&DAT_03a841b0)[uVar30 * 6];
            iVar20 = iVar6 + iVar35;
            psVar1[3] = sVar22 + (short)iVar7 +
                                 sVar14 * ((short)(iVar8 + iVar34) +
                                          (ushort)(param_3 - iVar7 == iVar35 &&
                                                  (iVar8 + iVar34) % 2 == 1));
            lVar36 = (long)iVar26 + 5;
            psVar1[4] = sVar22 + (short)iVar23 +
                                 sVar14 * ((short)(iVar19 + iVar34) +
                                          (ushort)(param_3 - iVar23 == iVar35 &&
                                                  (iVar19 + iVar34) % 2 == 1));
            iVar19 = iVar9 + iVar34 + (uint)(param_3 - iVar6 == iVar35 && (iVar9 + iVar34) % 2 == 1)
            ;
            break;
          case 3:
            uVar10 = uVar10 << 1;
            if (iVar34 != 0) {
              uVar10 = 0;
            }
            uVar30 = (ulong)uVar10;
            uVar27 = (ulong)(uVar10 | 1);
            iVar20 = (&DAT_03a8419c)[(ulong)uVar10 * 6];
            lVar37 = (long)iVar26;
            iVar19 = iVar20 + iVar35;
            if ((&DAT_03a8419c)[uVar27 * 6] + iVar34 == 0) {
              if (iVar19 % 2 == 1) {
                iVar20 = iVar20 + 1;
              }
              iVar19 = iVar35 + iVar20;
            }
            *(short *)(lVar15 + lVar37 * 2) =
                 (short)iVar19 + (short)((&DAT_03a8419c)[uVar27 * 6] + iVar34) * sVar14;
            iVar20 = (&DAT_03a841a0)[uVar30 * 6];
            iVar19 = iVar20 + iVar35;
            if ((&DAT_03a841a0)[uVar27 * 6] + iVar34 == 0) {
              if (iVar19 % 2 == 1) {
                iVar20 = iVar20 + 1;
              }
              iVar19 = iVar35 + iVar20;
            }
            *(short *)(lVar15 + (lVar37 + 1) * 2) =
                 (short)iVar19 + (short)((&DAT_03a841a0)[uVar27 * 6] + iVar34) * sVar14;
            iVar20 = (&DAT_03a841a4)[uVar30 * 6];
            iVar19 = iVar20 + iVar35;
            if ((&DAT_03a841a4)[uVar27 * 6] + iVar34 == 0) {
              if (iVar19 % 2 == 1) {
                iVar20 = iVar20 + 1;
              }
              iVar19 = iVar35 + iVar20;
            }
            *(short *)(lVar15 + (lVar37 + 2) * 2) =
                 (short)iVar19 + (short)((&DAT_03a841a4)[uVar27 * 6] + iVar34) * sVar14;
            iVar20 = (&DAT_03a841a8)[uVar30 * 6];
            iVar19 = iVar20 + iVar35;
            if ((&DAT_03a841a8)[uVar27 * 6] + iVar34 == 0) {
              if (iVar19 % 2 == 1) {
                iVar20 = iVar20 + 1;
              }
              iVar19 = iVar35 + iVar20;
            }
            *(short *)(lVar15 + (lVar37 + 3) * 2) =
                 (short)iVar19 + (short)((&DAT_03a841a8)[uVar27 * 6] + iVar34) * sVar14;
            iVar20 = (&DAT_03a841ac)[uVar30 * 6];
            iVar19 = iVar20 + iVar35;
            if ((&DAT_03a841ac)[uVar27 * 6] + iVar34 == 0) {
              if (iVar19 % 2 == 1) {
                iVar20 = iVar20 + 1;
              }
              iVar19 = iVar35 + iVar20;
            }
            lVar36 = lVar37 + 5;
            *(short *)(lVar15 + (lVar37 + 4) * 2) =
                 (short)iVar19 + (short)((&DAT_03a841ac)[uVar27 * 6] + iVar34) * sVar14;
            iVar20 = (&DAT_03a841b0)[uVar30 * 6] + iVar35;
            iVar19 = (&DAT_03a841b0)[uVar27 * 6] + iVar34;
joined_r0x02c16974:
            if ((iVar19 == 0) && (iVar20 % 2 == 1)) {
              iVar20 = iVar20 + 1;
            }
            break;
          case 4:
            uVar24 = 0;
            if (iVar13 <= iVar34) {
              uVar24 = uVar10 << 1;
            }
            uVar27 = (ulong)uVar24;
            uVar30 = (ulong)(uVar24 | 1);
            iVar19 = (&DAT_03a841a0)[uVar27 * 6];
            iVar20 = (&DAT_03a841a0)[uVar30 * 6];
            psVar1 = (short *)(lVar15 + (long)iVar26 * 2);
            *psVar1 = sVar22 + (short)(&DAT_03a8419c)[uVar27 * 6] +
                               sVar14 * (short)((&DAT_03a8419c)[uVar30 * 6] + iVar34) +
                               (ushort)((&DAT_03a8419c)[uVar30 * 6] + iVar34 == param_3 &&
                                       (iVar35 + (&DAT_03a8419c)[uVar27 * 6]) % 2 == 1);
            psVar1[1] = sVar22 + (short)iVar19 + sVar14 * (short)(iVar20 + iVar34) +
                                 (ushort)(iVar20 + iVar34 == param_3 && (iVar35 + iVar19) % 2 == 1);
            iVar19 = (&DAT_03a841a8)[uVar30 * 6];
            iVar20 = (&DAT_03a841a8)[uVar27 * 6];
            psVar1[2] = sVar22 + (short)(&DAT_03a841a4)[uVar27 * 6] +
                                 sVar14 * (short)((&DAT_03a841a4)[uVar30 * 6] + iVar34) +
                                 (ushort)((&DAT_03a841a4)[uVar30 * 6] + iVar34 == param_3 &&
                                         (iVar35 + (&DAT_03a841a4)[uVar27 * 6]) % 2 == 1);
            psVar1[3] = sVar22 + (short)iVar20 + sVar14 * (short)(iVar19 + iVar34) +
                                 (ushort)(iVar19 + iVar34 == param_3 && (iVar35 + iVar20) % 2 == 1);
            iVar19 = (&DAT_03a841b0)[uVar30 * 6];
            iVar20 = (&DAT_03a841b0)[uVar27 * 6];
            psVar1[4] = sVar22 + (short)(&DAT_03a841ac)[uVar27 * 6] +
                                 sVar14 * (short)((&DAT_03a841ac)[uVar30 * 6] + iVar34) +
                                 (ushort)((&DAT_03a841ac)[uVar30 * 6] + iVar34 == param_3 &&
                                         (iVar35 + (&DAT_03a841ac)[uVar27 * 6]) % 2 == 1);
            lVar36 = (long)iVar26 + 5;
            iVar20 = iVar20 + iVar35;
            iVar19 = iVar19 + iVar34;
            goto LAB_02c16bc8;
          case 5:
            uVar24 = 0;
            if (iVar35 == 0 || iVar34 == 0) {
              uVar24 = uVar10 << 1;
            }
            uVar30 = (ulong)uVar24;
            uVar27 = (ulong)(uVar24 | 1);
            iVar23 = (&DAT_03a8419c)[(ulong)uVar24 * 6];
            lVar37 = (long)iVar26;
            iVar20 = iVar23 + iVar35;
            iVar19 = (&DAT_03a8419c)[uVar27 * 6] + iVar34;
            if (iVar20 == 0 && iVar19 % 2 == 1) {
              iVar20 = 0;
              iVar19 = iVar19 + 1;
            }
            else if (iVar19 == 0) {
              if (iVar20 % 2 == 1) {
                iVar23 = iVar23 + 1;
              }
              iVar20 = iVar35 + iVar23;
            }
            *(short *)(lVar15 + lVar37 * 2) = (short)iVar20 + (short)iVar19 * sVar14;
            iVar23 = (&DAT_03a841a0)[uVar30 * 6];
            iVar19 = (&DAT_03a841a0)[uVar27 * 6] + iVar34;
            iVar20 = iVar23 + iVar35;
            if ((iVar20 == 0) && (iVar19 % 2 == 1)) {
              iVar20 = 0;
              iVar19 = iVar19 + 1;
            }
            else if (iVar19 == 0) {
              if (iVar20 % 2 == 1) {
                iVar23 = iVar23 + 1;
              }
              iVar20 = iVar35 + iVar23;
            }
            *(short *)(lVar15 + (lVar37 + 1) * 2) = (short)iVar20 + (short)iVar19 * sVar14;
            iVar23 = (&DAT_03a841a4)[uVar30 * 6];
            iVar19 = (&DAT_03a841a4)[uVar27 * 6] + iVar34;
            iVar20 = iVar23 + iVar35;
            if ((iVar20 == 0) && (iVar19 % 2 == 1)) {
              iVar20 = 0;
              iVar19 = iVar19 + 1;
            }
            else if (iVar19 == 0) {
              if (iVar20 % 2 == 1) {
                iVar23 = iVar23 + 1;
              }
              iVar20 = iVar35 + iVar23;
            }
            *(short *)(lVar15 + (lVar37 + 2) * 2) = (short)iVar20 + (short)iVar19 * sVar14;
            iVar23 = (&DAT_03a841a8)[uVar30 * 6];
            iVar19 = (&DAT_03a841a8)[uVar27 * 6] + iVar34;
            iVar20 = iVar23 + iVar35;
            if ((iVar20 == 0) && (iVar19 % 2 == 1)) {
              iVar20 = 0;
              iVar19 = iVar19 + 1;
            }
            else if (iVar19 == 0) {
              if (iVar20 % 2 == 1) {
                iVar23 = iVar23 + 1;
              }
              iVar20 = iVar35 + iVar23;
            }
            *(short *)(lVar15 + (lVar37 + 3) * 2) = (short)iVar20 + (short)iVar19 * sVar14;
            iVar23 = (&DAT_03a841ac)[uVar30 * 6];
            iVar19 = (&DAT_03a841ac)[uVar27 * 6] + iVar34;
            iVar20 = iVar23 + iVar35;
            if ((iVar20 == 0) && (iVar19 % 2 == 1)) {
              iVar20 = 0;
              iVar19 = iVar19 + 1;
            }
            else if (iVar19 == 0) {
              if (iVar20 % 2 == 1) {
                iVar23 = iVar23 + 1;
              }
              iVar20 = iVar35 + iVar23;
            }
            lVar36 = lVar37 + 5;
            *(short *)(lVar15 + (lVar37 + 4) * 2) = (short)iVar20 + (short)iVar19 * sVar14;
            iVar19 = (&DAT_03a841b0)[uVar27 * 6] + iVar34;
            iVar20 = (&DAT_03a841b0)[uVar30 * 6] + iVar35;
            if ((iVar20 != 0) || (iVar19 % 2 != 1)) goto joined_r0x02c16974;
LAB_02c16bbc:
            iVar20 = 0;
            iVar19 = iVar19 + 1;
            break;
          case 6:
            uVar24 = 0;
            if (iVar13 <= iVar35 || iVar34 == 0) {
              uVar24 = uVar10 << 1;
            }
            uVar30 = (ulong)uVar24;
            uVar27 = (ulong)(uVar24 | 1);
            iVar20 = (&DAT_03a8419c)[(ulong)uVar24 * 6];
            lVar37 = (long)iVar26;
            iVar19 = (&DAT_03a8419c)[uVar27 * 6] + iVar34;
            if (param_3 - iVar20 == iVar35 && iVar19 % 2 == 1) {
              iVar19 = iVar19 + 1;
              iVar23 = param_3;
            }
            else {
              iVar23 = iVar20 + iVar35;
              if (iVar19 == 0) {
                if ((iVar20 + iVar35) % 2 == 1) {
                  iVar20 = iVar20 + 1;
                }
                iVar23 = iVar35 + iVar20;
              }
            }
            *(short *)(lVar15 + lVar37 * 2) = (short)iVar23 + (short)iVar19 * sVar14;
            iVar20 = (&DAT_03a841a0)[uVar30 * 6];
            iVar19 = (&DAT_03a841a0)[uVar27 * 6] + iVar34;
            if ((param_3 - iVar20 == iVar35) && (iVar19 % 2 == 1)) {
              iVar19 = iVar19 + 1;
              iVar23 = param_3;
            }
            else {
              iVar23 = iVar20 + iVar35;
              if (iVar19 == 0) {
                if (iVar23 % 2 == 1) {
                  iVar20 = iVar20 + 1;
                }
                iVar23 = iVar35 + iVar20;
              }
            }
            *(short *)(lVar15 + (lVar37 + 1) * 2) = (short)iVar23 + (short)iVar19 * sVar14;
            iVar20 = (&DAT_03a841a4)[uVar30 * 6];
            iVar19 = (&DAT_03a841a4)[uVar27 * 6] + iVar34;
            if ((param_3 - iVar20 == iVar35) && (iVar19 % 2 == 1)) {
              iVar19 = iVar19 + 1;
              iVar23 = param_3;
            }
            else {
              iVar23 = iVar20 + iVar35;
              if (iVar19 == 0) {
                if (iVar23 % 2 == 1) {
                  iVar20 = iVar20 + 1;
                }
                iVar23 = iVar35 + iVar20;
              }
            }
            *(short *)(lVar15 + (lVar37 + 2) * 2) = (short)iVar23 + (short)iVar19 * sVar14;
            iVar20 = (&DAT_03a841a8)[uVar30 * 6];
            iVar19 = (&DAT_03a841a8)[uVar27 * 6] + iVar34;
            if ((param_3 - iVar20 == iVar35) && (iVar19 % 2 == 1)) {
              iVar19 = iVar19 + 1;
              iVar23 = param_3;
            }
            else {
              iVar23 = iVar20 + iVar35;
              if (iVar19 == 0) {
                if (iVar23 % 2 == 1) {
                  iVar20 = iVar20 + 1;
                }
                iVar23 = iVar35 + iVar20;
              }
            }
            *(short *)(lVar15 + (lVar37 + 3) * 2) = (short)iVar23 + (short)iVar19 * sVar14;
            iVar20 = (&DAT_03a841ac)[uVar30 * 6];
            iVar19 = (&DAT_03a841ac)[uVar27 * 6] + iVar34;
            if ((param_3 - iVar20 == iVar35) && (iVar19 % 2 == 1)) {
              iVar19 = iVar19 + 1;
              iVar23 = param_3;
            }
            else {
              iVar23 = iVar20 + iVar35;
              if (iVar19 == 0) {
                if (iVar23 % 2 == 1) {
                  iVar20 = iVar20 + 1;
                }
                iVar23 = iVar35 + iVar20;
              }
            }
            lVar36 = lVar37 + 5;
            *(short *)(lVar15 + (lVar37 + 4) * 2) = (short)iVar23 + (short)iVar19 * sVar14;
            iVar19 = (&DAT_03a841b0)[uVar27 * 6] + iVar34;
            if ((param_3 - (&DAT_03a841b0)[uVar30 * 6] != iVar35) || (iVar19 % 2 != 1)) {
              iVar20 = (&DAT_03a841b0)[uVar30 * 6] + iVar35;
              goto joined_r0x02c16974;
            }
LAB_02c16964:
            iVar19 = iVar19 + 1;
            iVar20 = param_3;
            break;
          case 7:
            uVar24 = 0;
            if (iVar35 == 0 || iVar13 <= iVar34) {
              uVar24 = uVar10 << 1;
            }
            uVar30 = (ulong)uVar24;
            uVar27 = (ulong)(uVar24 | 1);
            lVar37 = (long)iVar26;
            iVar20 = iVar35 + (&DAT_03a8419c)[(ulong)uVar24 * 6];
            iVar19 = (&DAT_03a8419c)[uVar27 * 6] + iVar34;
            if (iVar20 == 0 && iVar19 % 2 == 1) {
              sVar21 = 0;
              iVar19 = iVar19 + 1;
            }
            else {
              sVar21 = sVar22 + (short)(&DAT_03a8419c)[(ulong)uVar24 * 6] +
                                (ushort)(iVar19 == param_3 && iVar20 % 2 == 1);
            }
            *(short *)(lVar15 + lVar37 * 2) = sVar21 + (short)iVar19 * sVar14;
            iVar19 = (&DAT_03a841a0)[uVar27 * 6] + iVar34;
            iVar20 = iVar35 + (&DAT_03a841a0)[uVar30 * 6];
            if ((iVar20 == 0) && (iVar19 % 2 == 1)) {
              sVar21 = 0;
              iVar19 = iVar19 + 1;
            }
            else {
              sVar21 = sVar22 + (short)(&DAT_03a841a0)[uVar30 * 6] +
                                (ushort)(iVar19 == param_3 && iVar20 % 2 == 1);
            }
            *(short *)(lVar15 + (lVar37 + 1) * 2) = sVar21 + (short)iVar19 * sVar14;
            iVar19 = (&DAT_03a841a4)[uVar27 * 6] + iVar34;
            iVar20 = iVar35 + (&DAT_03a841a4)[uVar30 * 6];
            if ((iVar20 == 0) && (iVar19 % 2 == 1)) {
              sVar21 = 0;
              iVar19 = iVar19 + 1;
            }
            else {
              sVar21 = sVar22 + (short)(&DAT_03a841a4)[uVar30 * 6] +
                                (ushort)(iVar19 == param_3 && iVar20 % 2 == 1);
            }
            *(short *)(lVar15 + (lVar37 + 2) * 2) = sVar21 + (short)iVar19 * sVar14;
            iVar19 = (&DAT_03a841a8)[uVar27 * 6] + iVar34;
            iVar20 = iVar35 + (&DAT_03a841a8)[uVar30 * 6];
            if ((iVar20 == 0) && (iVar19 % 2 == 1)) {
              sVar21 = 0;
              iVar19 = iVar19 + 1;
            }
            else {
              sVar21 = sVar22 + (short)(&DAT_03a841a8)[uVar30 * 6] +
                                (ushort)(iVar19 == param_3 && iVar20 % 2 == 1);
            }
            *(short *)(lVar15 + (lVar37 + 3) * 2) = sVar21 + (short)iVar19 * sVar14;
            iVar19 = (&DAT_03a841ac)[uVar27 * 6] + iVar34;
            iVar20 = iVar35 + (&DAT_03a841ac)[uVar30 * 6];
            if ((iVar20 == 0) && (iVar19 % 2 == 1)) {
              sVar22 = 0;
              iVar19 = iVar19 + 1;
            }
            else {
              sVar22 = sVar22 + (short)(&DAT_03a841ac)[uVar30 * 6] +
                                (ushort)(iVar19 == param_3 && iVar20 % 2 == 1);
            }
            lVar36 = lVar37 + 5;
            *(short *)(lVar15 + (lVar37 + 4) * 2) = sVar22 + (short)iVar19 * sVar14;
            iVar19 = (&DAT_03a841b0)[uVar27 * 6] + iVar34;
            iVar20 = (&DAT_03a841b0)[uVar30 * 6] + iVar35;
            if ((iVar20 == 0) && (iVar19 % 2 == 1)) goto LAB_02c16bbc;
            goto LAB_02c16bc8;
          case 8:
            uVar24 = 0;
            if (iVar13 <= iVar35 || iVar13 <= iVar34) {
              uVar24 = uVar10 << 1;
            }
            uVar30 = (ulong)uVar24;
            uVar27 = (ulong)(uVar24 | 1);
            iVar20 = (&DAT_03a8419c)[(ulong)uVar24 * 6];
            lVar37 = (long)iVar26;
            iVar19 = (&DAT_03a8419c)[uVar27 * 6] + iVar34;
            if (param_3 - iVar20 == iVar35 && iVar19 % 2 == 1) {
              iVar19 = iVar19 + 1;
              iVar20 = param_3;
            }
            else {
              iVar20 = iVar35 + iVar20 + (uint)(iVar19 == param_3 && (iVar35 + iVar20) % 2 == 1);
            }
            *(short *)(lVar15 + lVar37 * 2) = (short)iVar20 + (short)iVar19 * sVar14;
            iVar20 = (&DAT_03a841a0)[uVar30 * 6];
            iVar19 = (&DAT_03a841a0)[uVar27 * 6] + iVar34;
            if ((param_3 - iVar20 == iVar35) && (iVar19 % 2 == 1)) {
              iVar19 = iVar19 + 1;
              iVar20 = param_3;
            }
            else {
              iVar20 = iVar35 + iVar20 + (uint)(iVar19 == param_3 && (iVar35 + iVar20) % 2 == 1);
            }
            *(short *)(lVar15 + (lVar37 + 1) * 2) = (short)iVar20 + (short)iVar19 * sVar14;
            iVar20 = (&DAT_03a841a4)[uVar30 * 6];
            iVar19 = (&DAT_03a841a4)[uVar27 * 6] + iVar34;
            if ((param_3 - iVar20 == iVar35) && (iVar19 % 2 == 1)) {
              iVar19 = iVar19 + 1;
              iVar20 = param_3;
            }
            else {
              iVar20 = iVar35 + iVar20 + (uint)(iVar19 == param_3 && (iVar35 + iVar20) % 2 == 1);
            }
            *(short *)(lVar15 + (lVar37 + 2) * 2) = (short)iVar20 + (short)iVar19 * sVar14;
            iVar20 = (&DAT_03a841a8)[uVar30 * 6];
            iVar19 = (&DAT_03a841a8)[uVar27 * 6] + iVar34;
            if ((param_3 - iVar20 == iVar35) && (iVar19 % 2 == 1)) {
              iVar19 = iVar19 + 1;
              iVar20 = param_3;
            }
            else {
              iVar20 = iVar35 + iVar20 + (uint)(iVar19 == param_3 && (iVar35 + iVar20) % 2 == 1);
            }
            *(short *)(lVar15 + (lVar37 + 3) * 2) = (short)iVar20 + (short)iVar19 * sVar14;
            iVar20 = (&DAT_03a841ac)[uVar30 * 6];
            iVar19 = (&DAT_03a841ac)[uVar27 * 6] + iVar34;
            if ((param_3 - iVar20 == iVar35) && (iVar19 % 2 == 1)) {
              iVar19 = iVar19 + 1;
              iVar20 = param_3;
            }
            else {
              iVar20 = iVar35 + iVar20 + (uint)(iVar19 == param_3 && (iVar35 + iVar20) % 2 == 1);
            }
            lVar36 = lVar37 + 5;
            *(short *)(lVar15 + (lVar37 + 4) * 2) = (short)iVar20 + (short)iVar19 * sVar14;
            iVar19 = (&DAT_03a841b0)[uVar27 * 6] + iVar34;
            if ((param_3 - (&DAT_03a841b0)[uVar30 * 6] == iVar35) && (iVar19 % 2 == 1))
            goto LAB_02c16964;
            iVar20 = (&DAT_03a841b0)[uVar30 * 6] + iVar35;
LAB_02c16bc8:
            iVar20 = iVar20 + (uint)(iVar19 == param_3 && iVar20 % 2 == 1);
          }
LAB_02c15bfc:
          iVar35 = iVar35 + 1;
          iVar26 = iVar26 + 6;
          *(short *)(lVar15 + lVar36 * 2) = (short)iVar20 + (short)iVar19 * sVar14;
        } while (param_3 != iVar35);
        iVar33 = iVar33 + uVar2;
        iVar32 = iVar32 + uVar2;
        iVar34 = iVar3;
      } while (iVar3 != param_3);
    }
    iVar25 = iVar25 + 1;
    if (iVar25 == 9) {
      lVar15 = *param_2;
      plVar18 = *(long **)(lVar15 + 0x168);
      if (plVar18 != plVar16) {
        *(uint *)(lVar15 + 0x178) = *(uint *)(lVar15 + 0x178) | 4;
        if (plVar16 != (long *)0x0) {
          plVar18 = plVar16 + 10;
          do {
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar12) {
              *(int *)plVar18 = (int)*plVar18 + 1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          plVar18 = *(long **)(lVar15 + 0x168);
        }
        *(long **)(lVar15 + 0x168) = plVar16;
        if (plVar18 != (long *)0x0) {
          plVar5 = plVar18 + 10;
          do {
            iVar25 = (int)*plVar5 + -1;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar12) {
              *(int *)plVar5 = iVar25;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (iVar25 == 0) {
            (**(code **)(*plVar18 + 0x10))();
          }
        }
        *(undefined4 *)(lVar15 + 0x170) = 0x10;
        lVar15 = *param_2;
      }
      iVar25 = iVar29 * 6;
      FUN_02b372c0(&local_b0,lVar15);
      *(int *)(local_b0 + 0x23) = iVar25;
      *(undefined8 *)((long)local_b0 + 0x11c) = 0;
      if (local_b0 != (long *)0x0) {
        plVar18 = local_b0 + 10;
        do {
          iVar26 = (int)*plVar18 + -1;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar12) {
            *(int *)plVar18 = iVar26;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar26 == 0) {
          (**(code **)(*local_b0 + 0x10))();
        }
      }
      FUN_02b372c0(&local_b0,*param_2);
      *(int *)(local_b0 + 0x23) = iVar25;
      *(int *)(local_b0 + 0x24) = iVar25;
      *(undefined4 *)((long)local_b0 + 0x11c) = 0;
      if (local_b0 != (long *)0x0) {
        plVar18 = local_b0 + 10;
        do {
          iVar26 = (int)*plVar18 + -1;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar12) {
            *(int *)plVar18 = iVar26;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar26 == 0) {
          (**(code **)(*local_b0 + 0x10))();
        }
      }
      FUN_02b372c0(&local_b0,*param_2);
      *(int *)(local_b0 + 0x23) = iVar25;
      *(int *)(local_b0 + 0x24) = iVar29 * 0xc;
      *(undefined4 *)((long)local_b0 + 0x11c) = 0;
      if (local_b0 != (long *)0x0) {
        plVar18 = local_b0 + 10;
        do {
          iVar26 = (int)*plVar18 + -1;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar12) {
            *(int *)plVar18 = iVar26;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar26 == 0) {
          (**(code **)(*local_b0 + 0x10))();
        }
      }
      FUN_02b372c0(&local_b0,*param_2);
      *(int *)(local_b0 + 0x23) = iVar25;
      *(int *)(local_b0 + 0x24) = iVar29 * 0x12;
      *(undefined4 *)((long)local_b0 + 0x11c) = 0;
      if (local_b0 != (long *)0x0) {
        plVar18 = local_b0 + 10;
        do {
          iVar26 = (int)*plVar18 + -1;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar12) {
            *(int *)plVar18 = iVar26;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar26 == 0) {
          (**(code **)(*local_b0 + 0x10))();
        }
      }
      FUN_02b372c0(&local_b0,*param_2);
      *(int *)(local_b0 + 0x23) = iVar25;
      *(int *)(local_b0 + 0x24) = iVar29 * 0x18;
      *(undefined4 *)((long)local_b0 + 0x11c) = 0;
      if (local_b0 != (long *)0x0) {
        plVar18 = local_b0 + 10;
        do {
          iVar26 = (int)*plVar18 + -1;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar12) {
            *(int *)plVar18 = iVar26;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar26 == 0) {
          (**(code **)(*local_b0 + 0x10))();
        }
      }
      FUN_02b372c0(&local_b0,*param_2);
      *(int *)(local_b0 + 0x23) = iVar25;
      *(int *)(local_b0 + 0x24) = iVar29 * 0x1e;
      *(undefined4 *)((long)local_b0 + 0x11c) = 0;
      if (local_b0 != (long *)0x0) {
        plVar18 = local_b0 + 10;
        do {
          iVar26 = (int)*plVar18 + -1;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar12) {
            *(int *)plVar18 = iVar26;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar26 == 0) {
          (**(code **)(*local_b0 + 0x10))();
        }
      }
      FUN_02b372c0(&local_b0,*param_2);
      *(int *)(local_b0 + 0x23) = iVar25;
      *(int *)(local_b0 + 0x24) = iVar29 * 0x24;
      *(undefined4 *)((long)local_b0 + 0x11c) = 0;
      if (local_b0 != (long *)0x0) {
        plVar18 = local_b0 + 10;
        do {
          iVar26 = (int)*plVar18 + -1;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar12) {
            *(int *)plVar18 = iVar26;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar26 == 0) {
          (**(code **)(*local_b0 + 0x10))();
        }
      }
      FUN_02b372c0(&local_b0,*param_2);
      *(int *)(local_b0 + 0x23) = iVar25;
      *(int *)(local_b0 + 0x24) = iVar29 * 0x2a;
      *(undefined4 *)((long)local_b0 + 0x11c) = 0;
      if (local_b0 != (long *)0x0) {
        plVar18 = local_b0 + 10;
        do {
          iVar26 = (int)*plVar18 + -1;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar12) {
            *(int *)plVar18 = iVar26;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar26 == 0) {
          (**(code **)(*local_b0 + 0x10))();
        }
      }
      FUN_02b372c0(&local_b0,*param_2);
      *(int *)(local_b0 + 0x23) = iVar25;
      *(int *)(local_b0 + 0x24) = iVar29 * 0x30;
      *(undefined4 *)((long)local_b0 + 0x11c) = 0;
      if (local_b0 != (long *)0x0) {
        plVar18 = local_b0 + 10;
        do {
          iVar29 = (int)*plVar18 + -1;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar12) {
            *(int *)plVar18 = iVar29;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar29 == 0) {
          (**(code **)(*local_b0 + 0x10))();
        }
      }
      if (plVar16 != (long *)0x0) {
        plVar18 = plVar16 + 10;
        do {
          iVar29 = (int)*plVar18 + -1;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar12) {
            *(int *)plVar18 = iVar29;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar29 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
      return;
    }
  } while( true );
}


