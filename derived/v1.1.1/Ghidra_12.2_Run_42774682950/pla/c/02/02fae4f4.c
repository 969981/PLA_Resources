/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fae4f4; name: FUN_02fae4f4
 */


void FUN_02fae4f4(long *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 *param_6,
                 undefined4 *param_7)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  long *plVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  long *plVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  undefined4 uVar29;
  undefined1 auVar30 [16];
  undefined4 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  
  iVar11 = (int)param_1[1];
  if (1 < iVar11) {
    lVar9 = 1;
    do {
      if (param_2 < 0) {
        param_2 = param_2 + 1;
      }
      param_2 = param_2 >> 1;
      if (param_4 < 0) {
        param_4 = param_4 + 1;
      }
      param_4 = param_4 >> 1;
      if (param_3 < 0) {
        param_3 = param_3 + 1;
      }
      param_3 = param_3 >> 1;
      if (param_5 < 0) {
        param_5 = param_5 + 1;
      }
      param_5 = param_5 >> 1;
      if (param_2 <= param_4) {
        plVar14 = (long *)((long)param_1 + lVar9 * 0x18 + *param_1);
        uVar13 = param_2 << 1 | 1;
        lVar12 = lVar9 + -1;
        iVar11 = param_2 << 1;
        iVar15 = param_2;
        do {
          if (param_3 <= param_5) {
            uVar2 = iVar15 << 1 | 1;
            iVar6 = iVar15 * 2;
            iVar10 = param_3 << 1;
            iVar16 = param_3;
            do {
              lVar18 = *param_1;
              uVar5 = *(ushort *)((long)param_1 + lVar12 * 0x18 + lVar18 + 0x10);
              uVar20 = (uint)uVar5;
              if ((iVar6 < (int)(uint)uVar5) &&
                 (uVar5 = *(ushort *)((long)param_1 + lVar12 * 0x18 + lVar18 + 0x12),
                 iVar10 < (int)(uint)uVar5)) {
                plVar23 = (long *)((long)param_1 + lVar12 * 0x18 + lVar18);
                iVar7 = iVar10 + iVar11 * (uint)uVar5;
                uVar24 = *(uint *)((long)plVar23 + (long)(iVar7 * 4) * 4 + *plVar23);
                uVar21 = *(uint *)((long)plVar23 + ((long)iVar7 << 4 | 4U) + *plVar23);
                uVar17 = uVar24 >> 0x10;
                uVar24 = uVar24 & 0xffff;
                if (uVar24 <= uVar17) {
                  uVar17 = uVar24;
                }
                uVar24 = uVar21 >> 0x10;
                uVar21 = uVar21 & 0xffff;
                if (uVar21 <= uVar24) {
                  uVar24 = uVar21;
                }
                if (uVar24 <= uVar17) {
                  uVar17 = uVar24;
                }
                if ((int)uVar20 <= (int)uVar2) goto LAB_02faea2c;
LAB_02fae624:
                uVar5 = *(ushort *)((long)param_1 + lVar12 * 0x18 + lVar18 + 0x12);
                iVar7 = iVar10 + uVar13 * uVar5;
                if (iVar10 < (int)(uint)uVar5) {
                  plVar23 = (long *)((long)param_1 + lVar12 * 0x18 + lVar18);
                  uVar24 = *(uint *)((long)plVar23 + (long)(iVar7 * 4) * 4 + *plVar23);
                  uVar22 = *(uint *)((long)plVar23 + ((long)iVar7 << 4 | 4U) + *plVar23);
                  uVar21 = uVar24 >> 0x10;
                  uVar24 = uVar24 & 0xffff;
                  if (uVar24 <= uVar21) {
                    uVar21 = uVar24;
                  }
                  uVar24 = uVar22 >> 0x10;
                  uVar22 = uVar22 & 0xffff;
                  if (uVar22 <= uVar24) {
                    uVar24 = uVar22;
                  }
                  if (uVar24 <= uVar21) {
                    uVar21 = uVar24;
                  }
                }
                else {
                  uVar21 = 0xffff;
                }
                uVar24 = iVar10 + 1;
                if ((int)(uint)uVar5 <= (int)uVar24) goto LAB_02faea38;
                plVar23 = (long *)((long)param_1 + lVar12 * 0x18 + lVar18);
                uVar25 = *(uint *)((long)plVar23 + (long)((iVar7 + 1) * 4) * 4 + *plVar23);
                uVar26 = *(uint *)((long)plVar23 + ((long)(iVar7 + 1) << 4 | 4U) + *plVar23);
                uVar22 = uVar25 >> 0x10;
                uVar25 = uVar25 & 0xffff;
                if (uVar25 <= uVar22) {
                  uVar22 = uVar25;
                }
                uVar25 = uVar26 >> 0x10;
                uVar26 = uVar26 & 0xffff;
                if (uVar26 <= uVar25) {
                  uVar25 = uVar26;
                }
                if (uVar25 <= uVar22) {
                  uVar22 = uVar25;
                }
                if ((int)uVar20 <= iVar6) goto LAB_02faea44;
LAB_02fae6e8:
                uVar5 = *(ushort *)((long)param_1 + lVar12 * 0x18 + lVar18 + 0x12);
                uVar26 = (uint)uVar5;
                if ((int)uVar24 < (int)(uint)uVar5) {
                  plVar23 = (long *)((long)param_1 + lVar12 * 0x18 + lVar18);
                  iVar7 = uVar24 + iVar6 * uVar26;
                  uVar27 = *(uint *)((long)plVar23 + (long)(iVar7 * 4) * 4 + *plVar23);
                  uVar3 = *(uint *)((long)plVar23 + ((long)iVar7 << 4 | 4U) + *plVar23);
                  uVar25 = uVar27 >> 0x10;
                  uVar27 = uVar27 & 0xffff;
                  if (uVar27 <= uVar25) {
                    uVar25 = uVar27;
                  }
                  uVar27 = uVar3 >> 0x10;
                  uVar3 = uVar3 & 0xffff;
                  if (uVar3 <= uVar27) {
                    uVar27 = uVar3;
                  }
                  if (uVar27 <= uVar25) {
                    uVar25 = uVar27;
                  }
                  if ((int)uVar26 <= iVar10) goto LAB_02faea6c;
LAB_02fae750:
                  plVar23 = (long *)((long)param_1 + lVar12 * 0x18 + lVar18);
                  iVar7 = iVar10 + iVar11 * (uint)uVar5;
                  uVar27 = *(uint *)((long)plVar23 +
                                    (((ulong)(long)(iVar7 * 4) >> 2) << 4 | 8) + *plVar23);
                  uVar3 = *(uint *)((long)plVar23 + ((long)iVar7 << 4 | 0xcU) + *plVar23);
                  uVar26 = uVar27 >> 0x10;
                  uVar27 = uVar27 & 0xffff;
                  if (uVar26 <= uVar27) {
                    uVar26 = uVar27;
                  }
                  uVar27 = uVar3 >> 0x10;
                  uVar3 = uVar3 & 0xffff;
                  if (uVar27 <= uVar3) {
                    uVar27 = uVar3;
                  }
                  if (uVar26 <= uVar27) {
                    uVar26 = uVar27;
                  }
                }
                else {
                  uVar25 = 0xffff;
                  if (iVar10 < (int)uVar26) goto LAB_02fae750;
LAB_02faea6c:
                  uVar26 = 0;
                }
                if ((int)uVar2 < (int)uVar20) goto LAB_02fae7b8;
LAB_02faea78:
                uVar27 = 0;
LAB_02faea7c:
                uVar28 = 0;
                if ((int)uVar20 <= iVar6) goto LAB_02faea88;
LAB_02fae898:
                uVar5 = *(ushort *)((long)param_1 + lVar12 * 0x18 + lVar18 + 0x12);
                if ((int)(uint)uVar5 <= (int)uVar24) goto LAB_02faea88;
                plVar23 = (long *)((long)param_1 + lVar12 * 0x18 + lVar18);
                iVar7 = uVar24 + iVar6 * (uint)uVar5;
                uVar24 = *(uint *)((long)plVar23 +
                                  (((ulong)(long)(iVar7 * 4) >> 2) << 4 | 8) + *plVar23);
                uVar3 = *(uint *)((long)plVar23 + ((long)iVar7 << 4 | 0xcU) + *plVar23);
                uVar20 = uVar24 >> 0x10;
                uVar24 = uVar24 & 0xffff;
                if (uVar20 <= uVar24) {
                  uVar20 = uVar24;
                }
                uVar24 = uVar3 >> 0x10;
                uVar3 = uVar3 & 0xffff;
                if (uVar24 <= uVar3) {
                  uVar24 = uVar3;
                }
                if (uVar20 <= uVar24) {
                  uVar20 = uVar24;
                }
              }
              else {
                uVar17 = 0xffff;
                if ((int)uVar2 < (int)uVar20) goto LAB_02fae624;
LAB_02faea2c:
                uVar24 = iVar16 << 1 | 1;
                uVar21 = 0xffff;
LAB_02faea38:
                uVar22 = 0xffff;
                if (iVar6 < (int)uVar20) goto LAB_02fae6e8;
LAB_02faea44:
                uVar26 = 0;
                uVar25 = 0xffff;
                if ((int)uVar20 <= (int)uVar2) goto LAB_02faea78;
LAB_02fae7b8:
                uVar5 = *(ushort *)((long)param_1 + lVar12 * 0x18 + lVar18 + 0x12);
                if (iVar10 < (int)(uint)uVar5) {
                  plVar23 = (long *)((long)param_1 + lVar12 * 0x18 + lVar18);
                  iVar7 = iVar10 + uVar13 * uVar5;
                  uVar3 = *(uint *)((long)plVar23 +
                                   (((ulong)(long)(iVar7 * 4) >> 2) << 4 | 8) + *plVar23);
                  uVar27 = uVar3 >> 0x10;
                  uVar4 = *(uint *)((long)plVar23 + ((long)iVar7 << 4 | 0xcU) + *plVar23);
                  uVar3 = uVar3 & 0xffff;
                  if (uVar27 <= uVar3) {
                    uVar27 = uVar3;
                  }
                  uVar3 = uVar4 >> 0x10;
                  uVar4 = uVar4 & 0xffff;
                  if (uVar3 <= uVar4) {
                    uVar3 = uVar4;
                  }
                  if (uVar27 <= uVar3) {
                    uVar27 = uVar3;
                  }
                }
                else {
                  uVar27 = 0;
                }
                if ((int)(uint)uVar5 <= (int)uVar24) goto LAB_02faea7c;
                iVar7 = uVar24 + uVar2 * uVar5;
                plVar23 = (long *)((long)param_1 + lVar12 * 0x18 + lVar18);
                uVar3 = *(uint *)((long)plVar23 +
                                 (((ulong)(long)(iVar7 * 4) >> 2) << 4 | 8) + *plVar23);
                uVar4 = *(uint *)((long)plVar23 + ((long)iVar7 << 4 | 0xcU) + *plVar23);
                uVar28 = uVar3 >> 0x10;
                uVar3 = uVar3 & 0xffff;
                if (uVar28 <= uVar3) {
                  uVar28 = uVar3;
                }
                uVar3 = uVar4 >> 0x10;
                uVar4 = uVar4 & 0xffff;
                if (uVar3 <= uVar4) {
                  uVar3 = uVar4;
                }
                if (uVar28 <= uVar3) {
                  uVar28 = uVar3;
                }
                if (iVar6 < (int)uVar20) goto LAB_02fae898;
LAB_02faea88:
                uVar20 = 0;
              }
              uVar24 = iVar16 + iVar15 * (uint)*(ushort *)((long)plVar14 + 0x12);
              *(uint *)((long)plVar14 +
                       (-(ulong)((uVar24 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
                       (ulong)(uVar24 * 4) << 2) + *plVar14) = uVar17 | uVar21 << 0x10;
              *(uint *)((long)plVar14 + ((long)(int)uVar24 << 4 | 4U) + *plVar14) =
                   uVar22 | uVar25 << 0x10;
              uVar19 = (ulong)(long)(int)(uVar24 * 4) >> 2;
              iVar10 = iVar10 + 2;
              *(uint *)((long)plVar14 + (uVar19 << 4 | 8) + *plVar14) = uVar26 | uVar27 << 0x10;
              *(uint *)((long)plVar14 + (uVar19 << 4 | 0xc) + *plVar14) = uVar28 | uVar20 << 0x10;
              bVar1 = iVar16 < param_5;
              iVar16 = iVar16 + 1;
            } while (bVar1);
          }
          uVar13 = uVar13 + 2;
          iVar11 = iVar11 + 2;
          bVar1 = iVar15 < param_4;
          iVar15 = iVar15 + 1;
        } while (bVar1);
        iVar11 = (int)param_1[1];
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar11);
  }
  lVar12 = *param_1;
  lVar9 = (long)iVar11 + -1;
  auVar33 = ZEXT816(0);
  auVar34 = auVar33;
  if ((*(short *)((long)param_1 + lVar9 * 0x18 + lVar12 + 0x10) != 0) &&
     (*(short *)((long)param_1 + lVar9 * 0x18 + lVar12 + 0x12) != 0)) {
    plVar14 = (long *)((long)param_1 + lVar9 * 0x18 + lVar12);
    puVar8 = (ushort *)(*plVar14 + (long)plVar14);
    auVar32._2_2_ = 0;
    auVar32._0_2_ = *puVar8;
    auVar32._4_2_ = puVar8[1];
    auVar32._6_2_ = 0;
    auVar32._8_2_ = puVar8[2];
    auVar32._10_2_ = 0;
    auVar32._12_2_ = puVar8[3];
    auVar32._14_2_ = 0;
    auVar30._2_2_ = 0;
    auVar30._0_2_ = puVar8[4];
    auVar30._4_2_ = puVar8[5];
    auVar30._6_2_ = 0;
    auVar30._8_2_ = puVar8[6];
    auVar30._10_2_ = 0;
    auVar30._12_2_ = puVar8[7];
    auVar30._14_2_ = 0;
    auVar33 = NEON_ucvtf(auVar32,4);
    auVar30 = NEON_ucvtf(auVar30,4);
    fVar35 = *(float *)(param_1 + 4);
    fVar36 = (float)param_1[2];
    auVar34._0_4_ = fVar36 + auVar33._0_4_ * fVar35;
    fVar37 = (float)((ulong)param_1[2] >> 0x20);
    auVar34._4_4_ = fVar37 + auVar33._4_4_ * fVar35;
    fVar38 = (float)param_1[3];
    auVar34._8_4_ = fVar38 + auVar33._8_4_ * fVar35;
    fVar39 = (float)((ulong)param_1[3] >> 0x20);
    auVar34._12_4_ = fVar39 + auVar33._12_4_ * fVar35;
    auVar33._0_4_ = fVar36 + auVar30._0_4_ * fVar35;
    auVar33._4_4_ = fVar37 + auVar30._4_4_ * fVar35;
    auVar33._8_4_ = fVar38 + auVar30._8_4_ * fVar35;
    auVar33._12_4_ = fVar39 + auVar30._12_4_ * fVar35;
  }
  uVar31 = NEON_fminnmv(auVar34,4);
  uVar29 = NEON_fmaxnmv(auVar33,4);
  *param_6 = uVar31;
  *param_7 = uVar29;
  return;
}


