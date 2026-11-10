/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031485a0; name: FUN_031485a0
 */


void FUN_031485a0(float param_1,long param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined1 (*pauVar10) [12];
  undefined8 uVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar26;
  float fVar28;
  undefined1 auVar27 [16];
  undefined8 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 uVar32;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar8 = (**(code **)(*param_5 + 0x118))(param_5,param_4);
  lVar8 = (**(code **)(*param_5 + 0x270))(param_5,*(undefined4 *)(lVar8 + 0x80));
  if (0 < *(int *)(param_2 + 0x58)) {
    param_1 = 0.4 / param_1;
    lVar12 = 0;
    do {
      uVar11 = *(undefined8 *)(*(long *)(param_2 + 0x50) + lVar12 * 8);
      iVar7 = (**(code **)(*param_5 + 0x100))(param_5,uVar11);
      if (iVar7 != 0) {
        fVar13 = (float)(int)lVar12;
        uStack_58 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x88) >> 0x20) +
                             (float)((ulong)*(undefined8 *)(param_2 + 0x98) >> 0x20) * fVar13,
                             (float)*(undefined8 *)(param_2 + 0x88) +
                             (float)*(undefined8 *)(param_2 + 0x98) * fVar13);
        local_60 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x80) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(param_2 + 0x90) >> 0x20) * fVar13,
                            (float)*(undefined8 *)(param_2 + 0x80) +
                            (float)*(undefined8 *)(param_2 + 0x90) * fVar13);
        FUN_032cc3fc(&local_70,param_3,&local_60);
        lVar9 = (**(code **)(*param_5 + 0x118))(param_5,uVar11);
        pauVar10 = (undefined1 (*) [12])
                   (**(code **)(*param_5 + 0x270))(param_5,*(undefined4 *)(lVar9 + 0x80));
        fVar15 = (float)*(undefined8 *)(pauVar10[8] + 8);
        fVar16 = (float)((ulong)*(undefined8 *)(pauVar10[8] + 8) >> 0x20);
        fVar13 = (float)*(undefined8 *)pauVar10[8];
        fVar14 = (float)((ulong)*(undefined8 *)pauVar10[8] >> 0x20);
        uStack_78 = CONCAT44(fVar16 + ((float)((ulong)*(undefined8 *)(lVar8 + 0x68) >> 0x20) -
                                      fVar16) * 0.8 + param_1 * (fStack_64 - 0.0),
                             fVar15 + ((float)*(undefined8 *)(lVar8 + 0x68) - fVar15) * 0.8 +
                             param_1 * (fStack_68 - (float)*(double *)(pauVar10[2] + 8)));
        local_80 = CONCAT44(fVar14 + ((float)((ulong)*(undefined8 *)(lVar8 + 0x60) >> 0x20) - fVar14
                                     ) * 0.8 + param_1 * (fStack_6c - (float)*(double *)pauVar10[2])
                            ,fVar13 + ((float)*(undefined8 *)(lVar8 + 0x60) - fVar13) * 0.8 +
                             param_1 * (local_70 - (float)*(double *)(pauVar10[1] + 4)));
        fVar15 = (float)*(undefined8 *)(*pauVar10 + 8);
        fVar16 = (float)((ulong)*(undefined8 *)(*pauVar10 + 8) >> 0x20);
        uVar29 = *(undefined8 *)*pauVar10;
        fVar13 = (float)uVar29;
        fVar14 = (float)((ulong)uVar29 >> 0x20);
        pauVar1 = (undefined1 (*) [12])(pauVar10[9] + 4);
        fVar19 = (float)*(undefined8 *)pauVar10[10];
        fVar20 = (float)((ulong)*(undefined8 *)pauVar10[10] >> 0x20);
        uVar6 = *(undefined8 *)*pauVar1;
        fVar17 = (float)uVar6;
        fVar18 = (float)((ulong)uVar6 >> 0x20);
        auVar27._12_4_ = fVar16;
        auVar27._0_12_ = *pauVar10;
        auVar30._12_4_ = fVar16;
        auVar30._0_12_ = *pauVar10;
        auVar27 = NEON_ext(auVar27,auVar30,8,1);
        auVar3._12_4_ = fVar20;
        auVar3._0_12_ = *pauVar1;
        auVar4._12_4_ = fVar20;
        auVar4._0_12_ = *pauVar1;
        auVar30 = NEON_ext(auVar3,auVar4,8,1);
        uVar32 = NEON_ext(uVar29,auVar27._0_8_,4,1);
        uVar29 = NEON_ext(uVar6,auVar30._0_8_,4,1);
        fVar28 = auVar27._4_4_ * auVar27._4_4_;
        fVar21 = fVar13 * fVar17 + fVar14 * fVar18 + fVar15 * fVar19;
        fVar25 = fVar13 * fVar17 + fVar14 * fVar18 + fVar15 * fVar19;
        fVar26 = fVar28 + -0.5;
        fVar28 = fVar28 + -0.5;
        auVar31._0_4_ = fVar13 * (float)uVar29 - fVar17 * (float)uVar32;
        auVar31._4_4_ =
             fVar14 * (float)((ulong)uVar29 >> 0x20) - fVar18 * (float)((ulong)uVar32 >> 0x20);
        auVar31._8_4_ = fVar15 * fVar17 - fVar19 * fVar13;
        auVar31._12_4_ = fVar16 * fVar18 - fVar20 * fVar14;
        auVar27 = NEON_ext(auVar31,auVar31,4,1);
        fVar13 = fVar17 * fVar26 + fVar13 * fVar21 + auVar27._0_4_ * fVar16;
        fVar14 = fVar18 * fVar28 + fVar14 * fVar25 + auVar27._4_4_ * fVar16;
        fVar15 = fVar19 * fVar26 + fVar15 * fVar21 + auVar31._0_4_ * fVar16;
        fVar16 = fVar20 * fVar28 + fVar16 * fVar25 + auVar31._4_4_ * fVar16;
        fVar13 = fVar13 + fVar13;
        fVar14 = fVar14 + fVar14;
        fVar15 = fVar15 + fVar15;
        fVar16 = fVar16 + fVar16;
        fVar17 = fVar13 * 0.8;
        fVar18 = fVar14 * 0.8;
        fVar19 = fVar15 * 0.8;
        fVar20 = fVar16 * 0.8;
        auVar22._0_4_ = fVar17 * fVar17;
        auVar22._4_4_ = fVar18 * fVar18;
        auVar22._8_4_ = fVar19 * fVar19;
        auVar22._12_4_ = fVar20 * fVar20;
        auVar27 = NEON_ext(auVar22,auVar22,8,1);
        auVar23._0_4_ = -(uint)(1.0 < auVar22._0_4_ + auVar22._4_4_ + auVar27._0_4_);
        auVar23._4_4_ = auVar23._0_4_;
        auVar23._8_4_ = auVar23._0_4_;
        auVar23._12_4_ = auVar23._0_4_;
        auVar2._4_4_ = fVar14;
        auVar2._0_4_ = fVar13;
        auVar2._8_4_ = fVar15;
        auVar2._12_4_ = fVar16;
        auVar5._4_4_ = fVar18;
        auVar5._0_4_ = fVar17;
        auVar5._8_4_ = fVar19;
        auVar5._12_4_ = fVar20;
        auVar24._4_4_ = fVar14;
        auVar24._0_4_ = fVar13;
        auVar24._8_4_ = fVar15;
        auVar24._12_4_ = fVar16;
        auVar24 = auVar24 ^ (auVar2 ^ auVar5) & auVar23;
        uStack_88 = auVar24._8_8_;
        local_90 = auVar24._0_8_;
        FUN_0331fe78(auStack_98,0x15e4bd43);
        FUN_0331fe78(auStack_a0,0x15e4b843);
        FUN_0331fe78(auStack_a8,0x15e4bd44);
        (**(code **)(*param_5 + 400))(param_5,uVar11,&local_80,&local_90,0);
        FUN_0331fedc(auStack_a8);
        FUN_0331fedc(auStack_a0);
        FUN_0331fedc(auStack_98);
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)(param_2 + 0x58));
  }
  return;
}


