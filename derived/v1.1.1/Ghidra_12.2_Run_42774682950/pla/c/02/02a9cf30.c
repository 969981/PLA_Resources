/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a9cf30; name: FUN_02a9cf30
 */


undefined8
FUN_02a9cf30(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
            undefined1 param_4 [16],long param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar15;
  undefined1 auVar14 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [12];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  long *local_48;
  
  uVar23 = param_3._8_8_;
  uVar22 = param_3._0_8_;
  fVar17 = param_2._12_4_;
  fVar18 = param_2._8_4_;
  fVar16 = param_2._4_4_;
  auVar25._8_4_ = param_2._0_4_;
  plVar12 = *(long **)(param_5 + 0x248);
  if (plVar12 == (long *)0x0) {
    auVar24 = SUB1612(ZEXT816(0),0);
  }
  else {
    uVar13 = 0;
    uVar15 = 0;
    do {
      if (((*(long *)(plVar12[6] + 0x88) == 0) ||
          (lVar11 = *(long *)(*(long *)(plVar12[6] + 0x88) + 0xb8), lVar11 == 0)) ||
         (*(char *)(lVar11 + 0x1e1) == '\0')) {
LAB_02a9cf64:
        auVar14._8_8_ = uVar15;
        auVar14._0_8_ = uVar13;
      }
      else {
        fVar19 = (float)((ulong)uVar15 >> 0x20);
        auVar14 = *(undefined1 (*) [16])(lVar11 + 0x360);
        if (0.0 < fVar19) {
          fVar20 = auVar14._12_4_;
          if (fVar20 <= 0.0) goto LAB_02a9cf64;
          fVar27 = auVar14._0_4_ - (float)uVar13;
          fVar21 = (float)((ulong)uVar13 >> 0x20);
          fVar28 = auVar14._4_4_ - fVar21;
          fVar29 = auVar14._8_4_ - (float)uVar15;
          fVar30 = fVar20 - fVar19;
          fVar16 = fVar27 * fVar27;
          fVar18 = fVar28 * fVar28;
          auVar5._4_4_ = fVar18;
          auVar5._0_4_ = fVar16;
          auVar5._8_4_ = fVar29 * fVar29;
          auVar5._12_4_ = 0;
          auVar6._4_4_ = fVar18;
          auVar6._0_4_ = fVar16;
          auVar6._8_4_ = fVar29 * fVar29;
          auVar6._12_4_ = 0;
          param_4 = NEON_ext(auVar5,auVar6,8,1);
          fVar16 = param_4._0_4_ + fVar16;
          fVar18 = param_4._4_4_ + fVar18;
          uVar22 = (ulong)(uint)(fVar30 * fVar30);
          uVar23 = 0;
          auVar25._8_4_ = fVar16 + fVar18;
          fVar16 = fVar16 + fVar18;
          fVar18 = 0.0;
          fVar17 = 0.0;
          if (auVar25._8_4_ <= fVar30 * fVar30) {
            if (fVar30 < 0.0) goto LAB_02a9cf64;
          }
          else {
            fVar18 = SQRT(auVar25._8_4_);
            if (NAN(fVar18)) {
              fVar18 = sqrtf(auVar25._8_4_);
            }
            uVar22 = (ulong)(uint)(fVar18 + fVar18);
            uVar23 = 0;
            fVar17 = (fVar30 + fVar18) / (fVar18 + fVar18);
            fVar16 = (fVar20 + fVar19 + fVar18) * 0.5;
            auVar25._0_4_ = (float)uVar13 + fVar27 * fVar17;
            auVar25._4_4_ = fVar21 + fVar28 * fVar17;
            auVar25._8_4_ = (float)uVar15 + fVar29 * fVar17;
            auVar25._12_4_ = fVar16;
            fVar18 = auVar25._8_4_;
            fVar17 = auVar25._8_4_;
            auVar14 = auVar25;
          }
        }
      }
      auVar24 = auVar14._0_12_;
      plVar12 = (long *)*plVar12;
      uVar15 = auVar14._8_8_;
      uVar13 = auVar14._0_8_;
    } while (plVar12 != (long *)0x0);
  }
  FUN_00956dac(&local_48,param_5 + 0x1a8);
  auVar14 = (**(code **)(*local_48 + 0x40))();
  if (local_48 != (long *)0x0) {
    lVar11 = local_48[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  fVar28 = auVar14._0_4_;
  fVar29 = auVar14._4_4_;
  auVar26._0_4_ = fVar28 * fVar28;
  auVar26._4_4_ = fVar29 * fVar29;
  auVar26._8_4_ = auVar14._8_4_ * auVar14._8_4_;
  auVar26._12_4_ = auVar14._12_4_ * auVar14._12_4_;
  NEON_ext(auVar26,auVar26,8,1);
  fVar21 = (float)uVar22;
  fVar27 = (float)(uVar22 >> 0x20);
  fVar19 = (float)uVar23 * (float)uVar23;
  fVar20 = (float)((ulong)uVar23 >> 0x20);
  fVar20 = fVar20 * fVar20;
  auVar9._4_4_ = fVar16 * fVar16;
  auVar9._0_4_ = auVar25._8_4_ * auVar25._8_4_;
  auVar9._8_4_ = fVar18 * fVar18;
  auVar9._12_4_ = fVar17 * fVar17;
  auVar10._4_4_ = fVar16 * fVar16;
  auVar10._0_4_ = auVar25._8_4_ * auVar25._8_4_;
  auVar10._8_4_ = fVar18 * fVar18;
  auVar10._12_4_ = fVar17 * fVar17;
  NEON_ext(auVar9,auVar10,8,1);
  auVar7._4_4_ = fVar27 * fVar27;
  auVar7._0_4_ = fVar21 * fVar21;
  auVar7._8_4_ = fVar19;
  auVar7._12_4_ = fVar20;
  auVar8._4_4_ = fVar27 * fVar27;
  auVar8._0_4_ = fVar21 * fVar21;
  auVar8._8_4_ = fVar19;
  auVar8._12_4_ = fVar20;
  NEON_ext(auVar7,auVar8,8,1);
  return CONCAT44(fVar29 * auVar24._0_4_ + fVar16 * auVar24._4_4_ + fVar27 * auVar24._8_4_ +
                  param_4._4_4_ * 1.0,
                  fVar28 * auVar24._0_4_ + auVar25._8_4_ * auVar24._4_4_ + fVar21 * auVar24._8_4_ +
                  param_4._0_4_ * 1.0);
}


