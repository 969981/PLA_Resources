/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0335bd80; name: FUN_0335bd80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_0335bd80(long *param_1,long *param_2,undefined1 (*param_3) [16],undefined8 *param_4,
            undefined4 *param_5)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined1 (*pauVar10) [16];
  uint uVar11;
  undefined1 (*pauVar12) [16];
  byte bVar13;
  float fVar14;
  int iVar15;
  uint uVar16;
  byte bVar17;
  int iVar18;
  byte bVar19;
  float fVar20;
  int iVar21;
  byte bVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined4 uVar29;
  int iVar31;
  undefined4 uVar32;
  int iVar33;
  int iVar34;
  undefined1 auVar30 [16];
  int iVar35;
  undefined4 uVar36;
  int iVar39;
  undefined4 uVar40;
  int iVar41;
  int iVar42;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  int iVar43;
  int iVar47;
  int iVar48;
  int iVar49;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  int iVar50;
  int iVar52;
  int iVar53;
  int iVar54;
  undefined1 auVar51 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  
  puVar5 = PTR_PTR_0434a080;
  fVar14 = (float)*param_4;
  iVar28 = -(uint)(*(float *)*param_3 <= fVar14);
  iVar31 = -(uint)(*(float *)(*param_3 + 4) <= fVar14);
  iVar33 = -(uint)(*(float *)(*param_3 + 8) <= fVar14);
  iVar34 = -(uint)(*(float *)(*param_3 + 0xc) <= fVar14);
  iVar24 = -(uint)(fVar14 <= *(float *)param_3[1]);
  iVar25 = -(uint)(fVar14 <= *(float *)(param_3[1] + 4));
  iVar26 = -(uint)(fVar14 <= *(float *)(param_3[1] + 8));
  iVar27 = -(uint)(fVar14 <= *(float *)(param_3[1] + 0xc));
  fVar14 = (float)((ulong)*param_4 >> 0x20);
  fVar20 = (float)param_4[1];
  iVar43 = -(uint)(*(float *)param_3[2] <= fVar14);
  iVar47 = -(uint)(*(float *)(param_3[2] + 4) <= fVar14);
  iVar48 = -(uint)(*(float *)(param_3[2] + 8) <= fVar14);
  iVar49 = -(uint)(*(float *)(param_3[2] + 0xc) <= fVar14);
  iVar35 = -(uint)(fVar14 <= *(float *)param_3[3]);
  iVar39 = -(uint)(fVar14 <= *(float *)(param_3[3] + 4));
  iVar41 = -(uint)(fVar14 <= *(float *)(param_3[3] + 8));
  iVar42 = -(uint)(fVar14 <= *(float *)(param_3[3] + 0xc));
  auVar46 = param_3[5];
  iVar50 = -(uint)(*(float *)param_3[4] <= fVar20);
  iVar52 = -(uint)(*(float *)(param_3[4] + 4) <= fVar20);
  iVar53 = -(uint)(*(float *)(param_3[4] + 8) <= fVar20);
  iVar54 = -(uint)(*(float *)(param_3[4] + 0xc) <= fVar20);
  iVar15 = -(uint)(fVar20 <= auVar46._0_4_);
  iVar18 = -(uint)(fVar20 <= auVar46._4_4_);
  iVar21 = -(uint)(fVar20 <= auVar46._8_4_);
  iVar23 = -(uint)(fVar20 <= auVar46._12_4_);
  bVar13 = (byte)iVar24 & (byte)iVar28 & (byte)iVar43 & (byte)iVar35 & (byte)iVar50 & (byte)iVar15;
  iVar15 = CONCAT13((byte)((uint)iVar24 >> 0x18) & (byte)((uint)iVar28 >> 0x18) &
                    (byte)((uint)iVar43 >> 0x18) & (byte)((uint)iVar35 >> 0x18) &
                    (byte)((uint)iVar50 >> 0x18) & (byte)((uint)iVar15 >> 0x18),
                    CONCAT12((byte)((uint)iVar24 >> 0x10) & (byte)((uint)iVar28 >> 0x10) &
                             (byte)((uint)iVar43 >> 0x10) & (byte)((uint)iVar35 >> 0x10) &
                             (byte)((uint)iVar50 >> 0x10) & (byte)((uint)iVar15 >> 0x10),
                             CONCAT11((byte)((uint)iVar24 >> 8) & (byte)((uint)iVar28 >> 8) &
                                      (byte)((uint)iVar43 >> 8) & (byte)((uint)iVar35 >> 8) &
                                      (byte)((uint)iVar50 >> 8) & (byte)((uint)iVar15 >> 8),bVar13))
                   );
  bVar17 = (byte)iVar25 & (byte)iVar31 & (byte)iVar47 & (byte)iVar39 & (byte)iVar52 & (byte)iVar18;
  bVar19 = (byte)iVar26 & (byte)iVar33 & (byte)iVar48 & (byte)iVar41 & (byte)iVar53 & (byte)iVar21;
  iVar21 = CONCAT13((byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar33 >> 0x18) &
                    (byte)((uint)iVar48 >> 0x18) & (byte)((uint)iVar41 >> 0x18) &
                    (byte)((uint)iVar53 >> 0x18) & (byte)((uint)iVar21 >> 0x18),
                    CONCAT12((byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar33 >> 0x10) &
                             (byte)((uint)iVar48 >> 0x10) & (byte)((uint)iVar41 >> 0x10) &
                             (byte)((uint)iVar53 >> 0x10) & (byte)((uint)iVar21 >> 0x10),
                             CONCAT11((byte)((uint)iVar26 >> 8) & (byte)((uint)iVar33 >> 8) &
                                      (byte)((uint)iVar48 >> 8) & (byte)((uint)iVar41 >> 8) &
                                      (byte)((uint)iVar53 >> 8) & (byte)((uint)iVar21 >> 8),bVar19))
                   );
  bVar22 = (byte)iVar27 & (byte)iVar34 & (byte)iVar49 & (byte)iVar42 & (byte)iVar54 & (byte)iVar23;
  if (((iVar15 == 0 &&
       (int)(CONCAT17((byte)((uint)iVar25 >> 0x18) & (byte)((uint)iVar31 >> 0x18) &
                      (byte)((uint)iVar47 >> 0x18) & (byte)((uint)iVar39 >> 0x18) &
                      (byte)((uint)iVar52 >> 0x18) & (byte)((uint)iVar18 >> 0x18),
                      CONCAT16((byte)((uint)iVar25 >> 0x10) & (byte)((uint)iVar31 >> 0x10) &
                               (byte)((uint)iVar47 >> 0x10) & (byte)((uint)iVar39 >> 0x10) &
                               (byte)((uint)iVar52 >> 0x10) & (byte)((uint)iVar18 >> 0x10),
                               CONCAT15((byte)((uint)iVar25 >> 8) & (byte)((uint)iVar31 >> 8) &
                                        (byte)((uint)iVar47 >> 8) & (byte)((uint)iVar39 >> 8) &
                                        (byte)((uint)iVar52 >> 8) & (byte)((uint)iVar18 >> 8),
                                        CONCAT14(bVar17,iVar15)))) >> 0x20) == 0) && iVar21 == 0) &&
      (int)(CONCAT17((byte)((uint)iVar27 >> 0x18) & (byte)((uint)iVar34 >> 0x18) &
                     (byte)((uint)iVar49 >> 0x18) & (byte)((uint)iVar42 >> 0x18) &
                     (byte)((uint)iVar54 >> 0x18) & (byte)((uint)iVar23 >> 0x18),
                     CONCAT16((byte)((uint)iVar27 >> 0x10) & (byte)((uint)iVar34 >> 0x10) &
                              (byte)((uint)iVar49 >> 0x10) & (byte)((uint)iVar42 >> 0x10) &
                              (byte)((uint)iVar54 >> 0x10) & (byte)((uint)iVar23 >> 0x10),
                              CONCAT15((byte)((uint)iVar27 >> 8) & (byte)((uint)iVar34 >> 8) &
                                       (byte)((uint)iVar49 >> 8) & (byte)((uint)iVar42 >> 8) &
                                       (byte)((uint)iVar54 >> 8) & (byte)((uint)iVar23 >> 8),
                                       CONCAT14(bVar22,iVar21)))) >> 0x20) == 0) {
    return 0;
  }
  uVar11 = *(uint *)((long)param_4 + 0xc);
  uVar16 = (uint)(bVar13 & (byte)_DAT_03889700) +
           (uint)(bVar17 & (byte)((ulong)_DAT_03889700 >> 0x20)) +
           (uint)(bVar19 & (byte)_UNK_03889708) +
           (uint)(bVar22 & (byte)((ulong)_UNK_03889708 >> 0x20));
  puVar2 = (uint *)((long)param_2 + 0xc);
  if ((uVar16 & 1) != 0) {
    if (param_3[7][0] == '\0') {
      lVar9 = *param_1;
      if (lVar9 != 0) {
        lVar9 = lVar9 + (long)param_1;
      }
      iVar15 = (int)param_2[1];
      uVar8 = *(uint *)((long)param_2 + 0xc);
      uVar1 = iVar15 + 1;
      if (iVar15 < (int)(uVar8 & 0x3fffffff)) {
        lVar7 = *param_2;
      }
      else {
        lVar7 = *param_2;
        if (0x3ffffffe < iVar15) {
          FUN_032bd0a8(uVar1);
          uVar8 = *puVar2;
        }
        uVar8 = (uVar8 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar8) {
          uVar8 = 0x3fffffff;
        }
        uVar3 = uVar1;
        if ((int)uVar1 <= (int)uVar8) {
          uVar3 = uVar8;
        }
        lVar7 = FUN_032bd1d4(puVar5,uVar3,4,lVar7,iVar15);
        iVar15 = (int)param_2[1];
        *param_2 = lVar7;
      }
      *(uint *)(lVar7 + (long)iVar15 * 4) = (uint)((ulong)((long)param_3 - lVar9) >> 5) & 0xfffffffc
      ;
      *(uint *)(param_2 + 1) = uVar1;
      lVar9 = *param_1;
      if (lVar9 != 0) {
        lVar9 = lVar9 + (long)param_1;
      }
      uVar6 = FUN_0335bd80(param_1,param_2,lVar9 + (ulong)*(uint *)param_3[6] * 0x80,param_4,param_5
                          );
      if ((uVar6 & 1) != 0) {
        return 1;
      }
      *(int *)(param_2 + 1) = (int)param_2[1] + -1;
    }
    else if (*(uint *)param_3[6] == (uVar11 & 0xc0ffffff)) {
      *(undefined4 *)*param_3 = *param_5;
      *(undefined4 *)param_3[1] = param_5[4];
      *(undefined4 *)param_3[2] = param_5[1];
      *(undefined4 *)param_3[3] = param_5[5];
      *(undefined4 *)param_3[4] = param_5[2];
      pauVar10 = param_3 + 5;
      goto LAB_0335bf50;
    }
  }
  uVar11 = uVar11 & 0xc0ffffff;
  if ((uVar16 >> 1 & 1) != 0) {
    if (param_3[7][0] == '\0') {
      lVar9 = *param_1;
      if (lVar9 != 0) {
        lVar9 = lVar9 + (long)param_1;
      }
      iVar15 = (int)param_2[1];
      uVar8 = *(uint *)((long)param_2 + 0xc);
      uVar1 = iVar15 + 1;
      if (iVar15 < (int)(uVar8 & 0x3fffffff)) {
        lVar7 = *param_2;
      }
      else {
        lVar7 = *param_2;
        if (0x3ffffffe < iVar15) {
          FUN_032bd0a8(uVar1);
          uVar8 = *puVar2;
        }
        uVar8 = (uVar8 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar8) {
          uVar8 = 0x3fffffff;
        }
        uVar3 = uVar1;
        if ((int)uVar1 <= (int)uVar8) {
          uVar3 = uVar8;
        }
        lVar7 = FUN_032bd1d4(puVar5,uVar3,4,lVar7,iVar15);
        iVar15 = (int)param_2[1];
        *param_2 = lVar7;
      }
      *(uint *)(lVar7 + (long)iVar15 * 4) =
           (uint)((ulong)((long)param_3 - lVar9) >> 5) & 0xfffffffc | 1;
      *(uint *)(param_2 + 1) = uVar1;
      lVar9 = *param_1;
      if (lVar9 != 0) {
        lVar9 = lVar9 + (long)param_1;
      }
      uVar6 = FUN_0335bd80(param_1,param_2,lVar9 + (ulong)*(uint *)(param_3[6] + 4) * 0x80,param_4,
                           param_5);
      if ((uVar6 & 1) != 0) {
        return 1;
      }
      *(int *)(param_2 + 1) = (int)param_2[1] + -1;
    }
    else if (*(uint *)(param_3[6] + 4) == uVar11) {
      *(undefined4 *)(*param_3 + 4) = *param_5;
      *(undefined4 *)(param_3[1] + 4) = param_5[4];
      *(undefined4 *)(param_3[2] + 4) = param_5[1];
      *(undefined4 *)(param_3[3] + 4) = param_5[5];
      *(undefined4 *)(param_3[4] + 4) = param_5[2];
      pauVar10 = (undefined1 (*) [16])(param_3[5] + 4);
      goto LAB_0335bf50;
    }
  }
  if ((uVar16 >> 2 & 1) != 0) {
    if (param_3[7][0] == '\0') {
      lVar9 = *param_1;
      if (lVar9 != 0) {
        lVar9 = lVar9 + (long)param_1;
      }
      iVar15 = (int)param_2[1];
      uVar8 = *(uint *)((long)param_2 + 0xc);
      uVar1 = iVar15 + 1;
      if (iVar15 < (int)(uVar8 & 0x3fffffff)) {
        lVar7 = *param_2;
      }
      else {
        lVar7 = *param_2;
        if (0x3ffffffe < iVar15) {
          FUN_032bd0a8(uVar1);
          uVar8 = *puVar2;
        }
        uVar8 = (uVar8 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar8) {
          uVar8 = 0x3fffffff;
        }
        uVar3 = uVar1;
        if ((int)uVar1 <= (int)uVar8) {
          uVar3 = uVar8;
        }
        lVar7 = FUN_032bd1d4(puVar5,uVar3,4,lVar7,iVar15);
        iVar15 = (int)param_2[1];
        *param_2 = lVar7;
      }
      *(uint *)(lVar7 + (long)iVar15 * 4) =
           (uint)((ulong)((long)param_3 - lVar9) >> 5) & 0xfffffffc | 2;
      *(uint *)(param_2 + 1) = uVar1;
      lVar9 = *param_1;
      if (lVar9 != 0) {
        lVar9 = lVar9 + (long)param_1;
      }
      uVar6 = FUN_0335bd80(param_1,param_2,lVar9 + (ulong)*(uint *)(param_3[6] + 8) * 0x80,param_4,
                           param_5);
      if ((uVar6 & 1) != 0) {
        return 1;
      }
      *(int *)(param_2 + 1) = (int)param_2[1] + -1;
    }
    else if (*(uint *)(param_3[6] + 8) == uVar11) {
      *(undefined4 *)(*param_3 + 8) = *param_5;
      *(undefined4 *)(param_3[1] + 8) = param_5[4];
      *(undefined4 *)(param_3[2] + 8) = param_5[1];
      *(undefined4 *)(param_3[3] + 8) = param_5[5];
      *(undefined4 *)(param_3[4] + 8) = param_5[2];
      pauVar10 = (undefined1 (*) [16])(param_3[5] + 8);
      goto LAB_0335bf50;
    }
  }
  if ((uVar16 >> 3 & 1) == 0) {
    return 0;
  }
  if (param_3[7][0] == '\0') {
    lVar9 = *param_1;
    if (lVar9 != 0) {
      lVar9 = lVar9 + (long)param_1;
    }
    iVar15 = (int)param_2[1];
    uVar16 = *(uint *)((long)param_2 + 0xc);
    uVar11 = iVar15 + 1;
    if (iVar15 < (int)(uVar16 & 0x3fffffff)) {
      lVar7 = *param_2;
    }
    else {
      lVar7 = *param_2;
      if (0x3ffffffe < iVar15) {
        FUN_032bd0a8(uVar11);
        uVar16 = *puVar2;
      }
      uVar16 = (uVar16 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar16) {
        uVar16 = 0x3fffffff;
      }
      uVar1 = uVar11;
      if ((int)uVar11 <= (int)uVar16) {
        uVar1 = uVar16;
      }
      lVar7 = FUN_032bd1d4(puVar5,uVar1,4,lVar7,iVar15);
      iVar15 = (int)param_2[1];
      *param_2 = lVar7;
    }
    *(uint *)(lVar7 + (long)iVar15 * 4) = (uint)((ulong)((long)param_3 - lVar9) >> 5) | 3;
    *(uint *)(param_2 + 1) = uVar11;
    lVar9 = *param_1;
    if (lVar9 != 0) {
      lVar9 = lVar9 + (long)param_1;
    }
    uVar6 = FUN_0335bd80(param_1,param_2,lVar9 + (ulong)*(uint *)(param_3[6] + 0xc) * 0x80,param_4,
                         param_5);
    if ((uVar6 & 1) == 0) {
      *(int *)(param_2 + 1) = (int)param_2[1] + -1;
      return 0;
    }
    return 1;
  }
  if (*(uint *)(param_3[6] + 0xc) != uVar11) {
    return 0;
  }
  *(undefined4 *)(*param_3 + 0xc) = *param_5;
  *(undefined4 *)(param_3[1] + 0xc) = param_5[4];
  *(undefined4 *)(param_3[2] + 0xc) = param_5[1];
  *(undefined4 *)(param_3[3] + 0xc) = param_5[5];
  *(undefined4 *)(param_3[4] + 0xc) = param_5[2];
  pauVar10 = (undefined1 (*) [16])(param_3[5] + 0xc);
LAB_0335bf50:
  *(undefined4 *)*pauVar10 = param_5[6];
  lVar9 = (long)(int)param_2[1];
  if ((int)param_2[1] < 1) {
    return 1;
  }
  do {
    uVar16 = *(uint *)(*param_2 + lVar9 * 4 + -4);
    lVar7 = *param_1;
    uVar11 = uVar16 & 3;
    if (lVar7 != 0) {
      lVar7 = lVar7 + (long)param_1;
    }
    auVar46 = param_3[4];
    auVar45 = param_3[5];
    auVar59 = NEON_ext(auVar45,auVar45,8,1);
    auVar44 = NEON_ext(auVar46,auVar46,8,1);
    auVar30 = *param_3;
    auVar4 = param_3[1];
    pauVar10 = param_3 + 2;
    auVar38 = param_3[3];
    auVar55 = NEON_ext(auVar4,auVar4,8,1);
    auVar57 = NEON_ext(auVar38,auVar38,8,1);
    auVar56._4_4_ = auVar57._0_4_;
    auVar56._0_4_ = auVar55._0_4_;
    auVar58._4_4_ = (int)((ulong)*(undefined8 *)*pauVar10 >> 0x20);
    auVar58._0_4_ = auVar30._4_4_;
    param_3 = (undefined1 (*) [16])(lVar7 + (ulong)(uVar16 >> 2) * 0x80);
    auVar37._4_4_ = (int)*(undefined8 *)*pauVar10;
    auVar37._0_4_ = auVar30._0_4_;
    auVar56._8_4_ = auVar59._0_4_;
    auVar56._12_4_ = 0;
    auVar51 = NEON_ext(auVar30,auVar30,8,1);
    auVar37._8_4_ = auVar46._0_4_;
    auVar37._12_4_ = 0;
    lVar9 = lVar9 + -1;
    auVar57._4_4_ = auVar57._4_4_;
    auVar57._0_4_ = auVar55._4_4_;
    auVar57._8_4_ = auVar59._4_4_;
    auVar57._12_4_ = 0;
    auVar57 = NEON_fmax(auVar56,auVar57,4);
    auVar30._4_4_ = auVar38._0_4_;
    auVar30._0_4_ = auVar4._0_4_;
    auVar30._8_4_ = auVar45._0_4_;
    auVar30._12_4_ = 0;
    auVar38._4_4_ = auVar38._4_4_;
    auVar38._0_4_ = auVar4._4_4_;
    auVar38._8_4_ = auVar45._4_4_;
    auVar38._12_4_ = 0;
    auVar30 = NEON_fmax(auVar30,auVar38,4);
    auVar30 = NEON_fmax(auVar30,auVar57,4);
    auVar57 = NEON_ext(*pauVar10,*pauVar10,8,1);
    auVar58._8_4_ = auVar46._4_4_;
    auVar58._12_4_ = 0;
    auVar38 = NEON_fmin(auVar37,auVar58,4);
    auVar45._4_4_ = auVar57._4_4_;
    auVar45._0_4_ = auVar51._4_4_;
    auVar45._8_4_ = auVar44._4_4_;
    auVar45._12_4_ = 0;
    auVar46._4_4_ = auVar57._0_4_;
    auVar46._0_4_ = auVar51._0_4_;
    auVar46._8_4_ = auVar44._0_4_;
    auVar46._12_4_ = 0;
    auVar46 = NEON_fmin(auVar46,auVar45,4);
    auVar46 = NEON_fmin(auVar38,auVar46,4);
    uVar36 = auVar46._0_4_;
    uVar40 = auVar46._4_4_;
    uVar29 = auVar30._0_4_;
    uVar32 = auVar30._4_4_;
    if (uVar11 == 0) {
      *(undefined4 *)*param_3 = uVar36;
      pauVar10 = param_3 + 4;
      *(undefined4 *)param_3[1] = uVar29;
      *(undefined4 *)param_3[2] = uVar40;
      *(undefined4 *)param_3[3] = uVar32;
      pauVar12 = param_3 + 5;
    }
    else if (uVar11 == 1) {
      *(undefined4 *)(*param_3 + 4) = uVar36;
      pauVar10 = (undefined1 (*) [16])(param_3[4] + 4);
      *(undefined4 *)(param_3[1] + 4) = uVar29;
      *(undefined4 *)(param_3[2] + 4) = uVar40;
      *(undefined4 *)(param_3[3] + 4) = uVar32;
      pauVar12 = (undefined1 (*) [16])(param_3[5] + 4);
    }
    else if (uVar11 == 2) {
      *(undefined4 *)(*param_3 + 8) = uVar36;
      pauVar10 = (undefined1 (*) [16])(param_3[4] + 8);
      *(undefined4 *)(param_3[1] + 8) = uVar29;
      *(undefined4 *)(param_3[2] + 8) = uVar40;
      *(undefined4 *)(param_3[3] + 8) = uVar32;
      pauVar12 = (undefined1 (*) [16])(param_3[5] + 8);
    }
    else {
      *(undefined4 *)(*param_3 + 0xc) = uVar36;
      pauVar10 = (undefined1 (*) [16])(param_3[4] + 0xc);
      *(undefined4 *)(param_3[1] + 0xc) = uVar29;
      *(undefined4 *)(param_3[2] + 0xc) = uVar40;
      *(undefined4 *)(param_3[3] + 0xc) = uVar32;
      pauVar12 = (undefined1 (*) [16])(param_3[5] + 0xc);
    }
    *(int *)*pauVar10 = auVar46._8_4_;
    *(int *)*pauVar12 = auVar30._8_4_;
  } while (0 < lVar9);
  return 1;
}


