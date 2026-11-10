/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03293f50; name: FUN_03293f50
 */


int FUN_03293f50(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                long *param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  undefined8 uVar17;
  float extraout_s0;
  float extraout_var;
  float extraout_var_00;
  float extraout_var_01;
  undefined8 uVar18;
  int iVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar27;
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar33;
  undefined1 auVar32 [16];
  undefined8 uVar34;
  int local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0 [8];
  
  puVar9 = PTR_PTR_0434a080;
  iVar16 = (int)param_5[1];
  if (iVar16 < 4) {
    uVar17 = 0x7f7fffee7f7fffee;
    if (0 < (int)param_1[1]) {
      uVar18 = NEON_fmov(0x3f800000,4);
      lVar12 = 0;
      iVar11 = -1;
      cVar2 = *(char *)*param_2;
      do {
        if (cVar2 == '\0') {
          puVar3 = (undefined8 *)(*param_1 + lVar12 * 0x10);
          uVar31 = puVar3[1];
          fVar29 = (float)uVar31;
          uVar25 = *puVar3;
          fVar30 = (float)uVar25;
          fVar33 = (float)((ulong)uVar25 >> 0x20);
          fVar23 = (float)*param_4 * fVar30;
          fVar27 = (float)((ulong)*param_4 >> 0x20) * fVar33;
          fVar28 = (float)param_4[1] * fVar29;
          fVar24 = fVar23 + fVar27 + fVar28 + (float)uVar18;
          uVar25 = CONCAT44(fVar23 + fVar27 + fVar28 + (float)((ulong)uVar18 >> 0x20),fVar24);
          if (1e-05 <= fVar24) {
            fVar27 = (float)*param_3 * (0.0 - fVar30);
            fVar28 = (float)((ulong)*param_3 >> 0x20) * (0.0 - fVar33);
            fVar23 = (float)param_3[1] * (0.0 - fVar29);
            fVar24 = (float)((ulong)param_3[1] >> 0x20) * (0.0 - (float)((ulong)uVar31 >> 0x20));
            auVar6._4_4_ = fVar28;
            auVar6._0_4_ = fVar27;
            auVar6._8_4_ = fVar23;
            auVar6._12_4_ = fVar24;
            auVar7._4_4_ = fVar28;
            auVar7._0_4_ = fVar27;
            auVar7._8_4_ = fVar23;
            auVar7._12_4_ = fVar24;
            auVar32 = NEON_ext(auVar6,auVar7,8,1);
            fVar24 = auVar32._0_4_ + auVar32._4_4_;
            fVar23 = fVar27 + fVar28 + fVar24;
            if (fVar23 < -1e-05) {
              iVar11 = -1;
              goto LAB_032942dc;
            }
            uVar31 = NEON_frecpe(uVar25,4);
            uVar34 = NEON_frecps(uVar25,uVar31,4);
            fVar30 = (float)uVar31 * (float)uVar34;
            fVar33 = (float)((ulong)uVar31 >> 0x20) * (float)((ulong)uVar34 >> 0x20);
            uVar25 = NEON_frecps(uVar25,CONCAT44(fVar33,fVar30),4);
            fVar23 = fVar23 * fVar30 * (float)uVar25;
            if (fVar23 < (float)uVar17) {
              iVar11 = (int)lVar12;
              uVar17 = CONCAT44((fVar27 + fVar28 + fVar24) * fVar33 * (float)((ulong)uVar25 >> 0x20)
                                ,fVar23);
            }
          }
        }
        lVar12 = lVar12 + 1;
        if ((int)param_1[1] == lVar12) goto LAB_032942dc;
        cVar2 = ((char *)*param_2)[lVar12];
      } while( true );
    }
    iVar11 = -1;
  }
  else {
    uVar18 = NEON_fmov(0x3f800000,4);
    uVar17 = 0xff7fffeeff7fffee;
    lVar12 = 0;
    iVar11 = -1;
    local_e4 = -1;
    uStack_d8 = 0;
    local_e0 = 0;
    do {
      local_b8 = -0x7ffffffc00000000;
      if (0 < iVar16) {
        iVar14 = 0;
        lVar13 = 0;
        if (lVar12 != 0) goto LAB_0329411c;
        while (lVar13 = lVar13 + 1, lVar13 < iVar16) {
          if (lVar13 != lVar12) {
LAB_0329411c:
            puVar3 = (undefined8 *)(*param_5 + lVar13 * 0x10);
            lVar15 = (long)iVar14;
            iVar14 = iVar14 + 1;
            local_b0[lVar15 * 2 + 1] = puVar3[1];
            local_b0[lVar15 * 2] = *puVar3;
            local_b8 = CONCAT44(local_b8._4_4_,iVar14);
            iVar16 = (int)param_5[1];
          }
        }
      }
      local_c0 = local_b0;
      FUN_03294320(&local_c0);
      lVar13 = local_b8;
      puVar3 = (undefined8 *)(*param_5 + lVar12 * 0x10);
      uVar31 = puVar3[1];
      uVar25 = *puVar3;
      fVar23 = extraout_s0 * (float)uVar25;
      fVar24 = extraout_var * (float)((ulong)uVar25 >> 0x20);
      fVar27 = extraout_var_00 * (float)uVar31;
      fVar28 = extraout_var_01 * (float)((ulong)uVar31 >> 0x20);
      auVar32._4_4_ = fVar24;
      auVar32._0_4_ = fVar23;
      auVar32._8_4_ = fVar27;
      auVar32._12_4_ = fVar28;
      auVar5._4_4_ = fVar24;
      auVar5._0_4_ = fVar23;
      auVar5._8_4_ = fVar27;
      auVar5._12_4_ = fVar28;
      auVar32 = NEON_ext(auVar32,auVar5,8,1);
      if ((1.0 < fVar23 + fVar24 + auVar32._0_4_) && (0 < (int)param_1[1])) {
        uVar25 = 0x7f7fffee7f7fffee;
        lVar15 = 0;
        iVar14 = -1;
        cVar2 = *(char *)*param_2;
        while( true ) {
          if (cVar2 == '\0') {
            auVar32 = *(undefined1 (*) [16])(*param_1 + lVar15 * 0x10);
            fVar23 = extraout_s0 * auVar32._0_4_;
            fVar27 = extraout_var * auVar32._4_4_;
            fVar28 = extraout_var_00 * auVar32._8_4_;
            fVar24 = fVar23 + fVar27 + fVar28 + (float)uVar18;
            uVar31 = CONCAT44(fVar23 + fVar27 + fVar28 + (float)((ulong)uVar18 >> 0x20),fVar24);
            if (1e-05 <= fVar24) {
              auVar20._0_4_ = (float)*param_3 * (0.0 - auVar32._0_4_);
              auVar20._4_4_ = (float)((ulong)*param_3 >> 0x20) * (0.0 - auVar32._4_4_);
              auVar20._8_4_ = (float)param_3[1] * (0.0 - auVar32._8_4_);
              auVar20._12_4_ = (float)((ulong)param_3[1] >> 0x20) * (0.0 - auVar32._12_4_);
              auVar32 = NEON_ext(auVar20,auVar20,8,1);
              fVar24 = auVar32._0_4_ + auVar32._4_4_;
              fVar23 = auVar20._0_4_ + auVar20._4_4_ + fVar24;
              if (fVar23 < -1e-05) goto LAB_032940cc;
              uVar26 = NEON_frecpe(uVar31,4);
              uVar34 = NEON_frecps(uVar31,uVar26,4);
              fVar27 = (float)uVar26 * (float)uVar34;
              fVar28 = (float)((ulong)uVar26 >> 0x20) * (float)((ulong)uVar34 >> 0x20);
              uVar31 = NEON_frecps(uVar31,CONCAT44(fVar28,fVar27),4);
              fVar23 = fVar23 * fVar27 * (float)uVar31;
              if (fVar23 < (float)uVar25) {
                iVar14 = (int)lVar15;
                uVar25 = CONCAT44((auVar20._0_4_ + auVar20._4_4_ + fVar24) *
                                  fVar28 * (float)((ulong)uVar31 >> 0x20),fVar23);
              }
            }
          }
          lVar15 = lVar15 + 1;
          if ((int)param_1[1] == lVar15) break;
          cVar2 = ((char *)*param_2)[lVar15];
        }
        if (iVar14 != -1) {
          iVar19 = -(uint)((float)uVar17 < (float)uVar25);
          auVar21._0_4_ =
               CONCAT13(~(byte)((uint)iVar19 >> 0x18),
                        CONCAT12(~(byte)((uint)iVar19 >> 0x10),
                                 CONCAT11(~(byte)((uint)iVar19 >> 8),~(byte)iVar19)));
          auVar8._8_8_ = uStack_d8;
          auVar8._0_8_ = local_e0;
          if ((float)uVar17 < (float)uVar25) {
            local_e4 = (int)lVar12;
            iVar11 = iVar14;
            uVar17 = uVar25;
          }
          auVar21._4_4_ = auVar21._0_4_;
          auVar21._8_4_ = auVar21._0_4_;
          auVar21._12_4_ = auVar21._0_4_;
          auVar4._4_4_ = extraout_var;
          auVar4._0_4_ = extraout_s0;
          auVar4._8_4_ = extraout_var_00;
          auVar4._12_4_ = extraout_var_01;
          auVar22._4_4_ = extraout_var;
          auVar22._0_4_ = extraout_s0;
          auVar22._8_4_ = extraout_var_00;
          auVar22._12_4_ = extraout_var_01;
          auVar22 = auVar22 ^ (auVar4 ^ auVar8) & auVar21;
          uStack_d8 = auVar22._8_8_;
          local_e0 = auVar22._0_8_;
        }
      }
LAB_032940cc:
      uVar10 = local_b8._4_4_;
      local_b8 = (ulong)local_b8._4_4_ << 0x20;
      if ((-1 < lVar13) && (local_c0 != (undefined8 *)0x0)) {
        FUN_032cf244(puVar9,local_c0,0x10,uVar10 & 0x3fffffff);
        iVar16 = (int)param_5[1];
      }
      iVar14 = iVar16 + -1;
      lVar12 = lVar12 + 1;
    } while (lVar12 < iVar14);
    if ((iVar11 != -1) && (*(int *)(param_5 + 1) = iVar14, iVar14 != local_e4)) {
      puVar1 = (undefined8 *)(*param_5 + (long)iVar14 * 0x10);
      puVar3 = (undefined8 *)(*param_5 + (long)local_e4 * 0x10);
      uVar18 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar18;
    }
    param_4[1] = uStack_d8;
    *param_4 = local_e0;
  }
LAB_032942dc:
  *param_6 = uVar17;
  return iVar11;
}


