/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b479fc; name: FUN_02b479fc
 */


void FUN_02b479fc(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  long *plVar11;
  long lVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float extraout_s0;
  float fVar16;
  float fVar17;
  float extraout_var;
  float fVar18;
  float fVar19;
  float extraout_var_00;
  float extraout_var_01;
  float fVar20;
  float fVar21;
  float __x;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 in_q3 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  
  iVar10 = (**(code **)(*(long *)(*(long *)(param_1 + 0x88) + 0x58) + 0x18))();
  plVar1 = *(long **)(*param_2 + 0x90);
  plVar2 = *(long **)(*param_2 + 0x98);
  if (plVar1 != plVar2) {
    fVar21 = 0.0;
    fVar22 = 0.0;
    fVar28 = 0.0;
    fVar30 = 0.0;
    lVar12 = *plVar1;
    while( true ) {
      if (iVar10 != 0) {
        uVar3 = *(undefined8 *)(lVar12 + 0x1c8);
        fVar19 = (float)uVar3;
        fVar15 = (float)*(undefined8 *)(lVar12 + 0x1c0);
        fVar17 = (float)((ulong)*(undefined8 *)(lVar12 + 0x1c0) >> 0x20);
        iVar13 = 0;
        fVar25 = 1.0;
        __x = fVar15;
        fVar24 = fVar17;
        fVar14 = fVar19;
        fVar26 = fVar21;
        fVar27 = fVar22;
        fVar29 = fVar28;
        fVar31 = fVar30;
        do {
          plVar11 = (long *)(*(long *)(param_1 + 0x88) + 0x58);
          fVar21 = fVar26;
          fVar22 = fVar27;
          fVar28 = fVar29;
          fVar30 = fVar31;
          (**(code **)(*plVar11 + 0x28))(plVar11,iVar13);
          fVar16 = extraout_s0 * extraout_s0;
          fVar18 = extraout_var * extraout_var;
          auVar35._4_4_ = fVar18;
          auVar35._0_4_ = fVar16;
          auVar35._8_4_ = extraout_var_00 * extraout_var_00;
          auVar35._12_4_ = extraout_var_01 * extraout_var_01;
          auVar36._4_4_ = fVar18;
          auVar36._0_4_ = fVar16;
          auVar36._8_4_ = extraout_var_00 * extraout_var_00;
          auVar36._12_4_ = extraout_var_01 * extraout_var_01;
          auVar35 = NEON_ext(auVar35,auVar36,8,1);
          fVar20 = __x * __x;
          fVar23 = fVar24 * fVar24;
          auVar4._4_4_ = fVar23;
          auVar4._0_4_ = fVar20;
          auVar4._8_4_ = fVar14 * fVar14;
          auVar4._12_4_ = fVar25 * fVar25;
          auVar5._4_4_ = fVar23;
          auVar5._0_4_ = fVar20;
          auVar5._8_4_ = fVar14 * fVar14;
          auVar5._12_4_ = fVar25 * fVar25;
          auVar36 = NEON_ext(auVar4,auVar5,8,1);
          fVar16 = SQRT(auVar35._0_4_ + fVar16 + auVar35._4_4_ + fVar18);
          fVar25 = fVar21 * fVar21;
          fVar18 = fVar22 * fVar22;
          fVar32 = fVar15 * extraout_s0 + fVar17 * __x + fVar19 * fVar21 + in_q3._0_4_ * 1.0;
          fVar33 = fVar15 * extraout_var + fVar17 * fVar24 + fVar19 * fVar22 + in_q3._4_4_ * 1.0;
          fVar34 = fVar15 * extraout_var_00 + fVar17 * fVar14 + fVar19 * fVar28 + in_q3._8_4_ * 1.0;
          auVar8._4_4_ = fVar18;
          auVar8._0_4_ = fVar25;
          auVar8._8_4_ = fVar28 * fVar28;
          auVar8._12_4_ = fVar30 * fVar30;
          auVar9._4_4_ = fVar18;
          auVar9._0_4_ = fVar25;
          auVar9._8_4_ = fVar28 * fVar28;
          auVar9._12_4_ = fVar30 * fVar30;
          in_q3 = NEON_ext(auVar8,auVar9,8,1);
          fVar25 = in_q3._0_4_ + fVar25;
          fVar18 = in_q3._4_4_ + fVar18;
          fVar14 = fVar25 + fVar18;
          fVar25 = fVar25 + fVar18;
          fVar21 = SQRT(auVar36._0_4_ + fVar20 + auVar36._4_4_ + fVar23);
          if (fVar21 <= fVar16) {
            fVar21 = fVar16;
          }
          __x = SQRT(fVar14);
          fVar24 = SQRT(fVar25);
          fVar14 = SQRT(fVar14);
          fVar25 = SQRT(fVar25);
          fVar16 = __x;
          if (__x <= fVar21) {
            fVar16 = fVar21;
          }
          fVar16 = (float)((ulong)uVar3 >> 0x20) * fVar16;
          fVar21 = fVar32;
          fVar22 = fVar33;
          fVar28 = fVar34;
          fVar30 = fVar16;
          if ((0.0 < fVar31) &&
             (fVar21 = fVar26, fVar22 = fVar27, fVar28 = fVar29, fVar30 = fVar31, 0.0 < fVar16)) {
            fVar37 = fVar16 - fVar31;
            fVar18 = fVar32 - fVar26;
            fVar20 = fVar33 - fVar27;
            fVar23 = fVar34 - fVar29;
            fVar24 = fVar18 * fVar18;
            fVar14 = fVar20 * fVar20;
            auVar6._4_4_ = fVar14;
            auVar6._0_4_ = fVar24;
            auVar6._8_4_ = fVar23 * fVar23;
            auVar6._12_4_ = 0;
            auVar7._4_4_ = fVar14;
            auVar7._0_4_ = fVar24;
            auVar7._8_4_ = fVar23 * fVar23;
            auVar7._12_4_ = 0;
            in_q3 = NEON_ext(auVar6,auVar7,8,1);
            fVar24 = in_q3._0_4_ + fVar24;
            fVar14 = in_q3._4_4_ + fVar14;
            __x = fVar24 + fVar14;
            fVar24 = fVar24 + fVar14;
            fVar14 = 0.0;
            fVar25 = 0.0;
            if (__x <= fVar37 * fVar37) {
              if (0.0 <= fVar37) {
                fVar21 = fVar32;
                fVar22 = fVar33;
                fVar28 = fVar34;
                fVar30 = fVar16;
              }
            }
            else {
              fVar21 = SQRT(__x);
              if (NAN(fVar21)) {
                fVar21 = sqrtf(__x);
              }
              fVar22 = (fVar37 + fVar21) / (fVar21 + fVar21);
              fVar24 = (fVar16 + fVar31 + fVar21) * 0.5;
              __x = fVar29 + fVar23 * fVar22;
              fVar14 = __x;
              fVar25 = __x;
              fVar21 = fVar26 + fVar18 * fVar22;
              fVar22 = fVar27 + fVar20 * fVar22;
              fVar28 = __x;
              fVar30 = fVar24;
            }
          }
          iVar13 = iVar13 + 1;
          fVar26 = fVar21;
          fVar27 = fVar22;
          fVar29 = fVar28;
          fVar31 = fVar30;
        } while (iVar10 != iVar13);
        lVar12 = *plVar1;
      }
      plVar1 = plVar1 + 1;
      *(undefined1 *)(lVar12 + 0x22b) = 1;
      *(ulong *)(lVar12 + 0x1e8) = CONCAT44(fVar30,fVar28);
      *(ulong *)(lVar12 + 0x1e0) = CONCAT44(fVar22,fVar21);
      if (plVar1 == plVar2) break;
      lVar12 = *plVar1;
    }
  }
  return;
}


