/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0335e6a0; name: FUN_0335e6a0
 */


void FUN_0335e6a0(long param_1,undefined1 (*param_2) [12],undefined1 (*param_3) [12],
                 undefined1 (*param_4) [12],int param_5,undefined8 param_6,undefined8 *param_7)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar30;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar37;
  undefined1 auVar36 [16];
  undefined8 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  
  fVar19 = (float)*(undefined8 *)(*param_3 + 8);
  fVar20 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
  uVar27 = *(undefined8 *)*param_3;
  fVar17 = (float)uVar27;
  fVar18 = (float)((ulong)uVar27 >> 0x20);
  auVar29._12_4_ = fVar20;
  auVar29._0_12_ = *param_3;
  auVar40._12_4_ = fVar20;
  auVar40._0_12_ = *param_3;
  auVar21 = NEON_ext(auVar29,auVar40,8,1);
  fVar15 = (float)*(undefined8 *)(*param_4 + 8);
  fVar16 = (float)((ulong)*(undefined8 *)(*param_4 + 8) >> 0x20);
  uVar35 = *(undefined8 *)*param_4;
  fVar13 = (float)uVar35;
  fVar14 = (float)((ulong)uVar35 >> 0x20);
  fVar33 = (float)*(undefined8 *)(*param_2 + 8);
  fVar34 = (float)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  uVar38 = *(undefined8 *)*param_2;
  fVar31 = (float)uVar38;
  fVar32 = (float)((ulong)uVar38 >> 0x20);
  uVar27 = NEON_ext(uVar27,auVar21._0_8_,4,1);
  auVar21._12_4_ = fVar16;
  auVar21._0_12_ = *param_4;
  auVar39._12_4_ = fVar16;
  auVar39._0_12_ = *param_4;
  auVar21 = NEON_ext(auVar21,auVar39,8,1);
  uVar35 = NEON_ext(uVar35,auVar21._0_8_,4,1);
  fVar30 = (float)((ulong)uVar27 >> 0x20);
  fVar37 = (float)((ulong)uVar35 >> 0x20);
  fVar22 = fVar17 * (float)uVar35 - fVar13 * (float)uVar27;
  fVar23 = fVar18 * fVar37 - fVar14 * fVar30;
  fVar25 = fVar19 * fVar13 - fVar15 * fVar17;
  fVar26 = fVar20 * fVar14 - fVar16 * fVar18;
  auVar6._4_4_ = fVar23;
  auVar6._0_4_ = fVar22;
  auVar6._8_4_ = fVar25;
  auVar6._12_4_ = fVar26;
  auVar7._4_4_ = fVar23;
  auVar7._0_4_ = fVar22;
  auVar7._8_4_ = fVar25;
  auVar7._12_4_ = fVar26;
  auVar21 = NEON_ext(auVar6,auVar7,4,1);
  fVar25 = fVar31 * auVar21._0_4_;
  fVar24 = fVar32 * auVar21._4_4_;
  fVar26 = fVar25 + fVar24 + fVar33 * fVar22;
  fVar25 = fVar25 + fVar24 + fVar33 * fVar22;
  if (1.1920929e-07 <= ABS(fVar26)) {
    auVar8._12_4_ = fVar34;
    auVar8._0_12_ = *param_2;
    auVar9._12_4_ = fVar34;
    auVar9._0_12_ = *param_2;
    auVar39 = NEON_ext(auVar8,auVar9,8,1);
    uVar38 = NEON_ext(uVar38,auVar39._0_8_,4,1);
    fVar24 = (float)((ulong)uVar38 >> 0x20);
    auVar28._0_4_ = fVar31 * (float)uVar27 - fVar17 * (float)uVar38;
    auVar28._4_4_ = fVar32 * fVar30 - fVar18 * fVar24;
    auVar28._8_4_ = fVar33 * fVar17 - fVar19 * fVar31;
    auVar28._12_4_ = fVar34 * fVar18 - fVar20 * fVar32;
    auVar40 = NEON_ext(auVar28,auVar28,4,1);
    auVar36._0_4_ = fVar13 * (float)uVar38 - fVar31 * (float)uVar35;
    auVar36._4_4_ = fVar14 * fVar24 - fVar32 * fVar37;
    auVar36._8_4_ = fVar15 * fVar31 - fVar33 * fVar13;
    auVar36._12_4_ = fVar16 * fVar32 - fVar34 * fVar14;
    auVar29 = NEON_ext(auVar36,auVar36,4,1);
    fVar31 = fVar31 * *(float *)(param_2[1] + 4);
    fVar32 = fVar32 * *(float *)(param_2[1] + 8);
    fVar33 = fVar33 * *(float *)param_2[2];
    fVar34 = fVar34 * *(float *)(param_2[2] + 4);
    fVar17 = fVar17 * *(float *)(param_3[1] + 4);
    fVar18 = fVar18 * *(float *)(param_3[1] + 8);
    fVar19 = fVar19 * *(float *)param_3[2];
    fVar20 = fVar20 * *(float *)(param_3[2] + 4);
    auVar4._4_4_ = fVar18;
    auVar4._0_4_ = fVar17;
    auVar4._8_4_ = fVar19;
    auVar4._12_4_ = fVar20;
    auVar5._4_4_ = fVar18;
    auVar5._0_4_ = fVar17;
    auVar5._8_4_ = fVar19;
    auVar5._12_4_ = fVar20;
    auVar39 = NEON_ext(auVar4,auVar5,8,1);
    fVar17 = fVar17 + fVar18 + auVar39._0_4_;
    auVar10._4_4_ = fVar32;
    auVar10._0_4_ = fVar31;
    auVar10._8_4_ = fVar33;
    auVar10._12_4_ = fVar34;
    auVar11._4_4_ = fVar32;
    auVar11._0_4_ = fVar31;
    auVar11._8_4_ = fVar33;
    auVar11._12_4_ = fVar34;
    auVar39 = NEON_ext(auVar10,auVar11,8,1);
    fVar19 = fVar31 + fVar32 + auVar39._0_4_;
    fVar13 = fVar13 * *(float *)(param_4[1] + 4);
    fVar14 = fVar14 * *(float *)(param_4[1] + 8);
    fVar15 = fVar15 * *(float *)param_4[2];
    fVar16 = fVar16 * *(float *)(param_4[2] + 4);
    auVar2._4_4_ = fVar14;
    auVar2._0_4_ = fVar13;
    auVar2._8_4_ = fVar15;
    auVar2._12_4_ = fVar16;
    auVar3._4_4_ = fVar14;
    auVar3._0_4_ = fVar13;
    auVar3._8_4_ = fVar15;
    auVar3._12_4_ = fVar16;
    auVar39 = NEON_ext(auVar2,auVar3,8,1);
    fVar13 = fVar13 + fVar14 + auVar39._0_4_;
    uVar35 = NEON_frecpe(CONCAT44(fVar25,fVar26),4);
    uVar27 = NEON_frecps(CONCAT44(fVar25,fVar26),uVar35,4);
    fVar16 = (float)uVar35 * (float)uVar27;
    fVar18 = (float)((ulong)uVar35 >> 0x20) * (float)((ulong)uVar27 >> 0x20);
    uVar35 = NEON_frecps(CONCAT44(fVar25,fVar26),CONCAT44(fVar18,fVar16),4);
    fVar16 = fVar16 * (float)uVar35;
    fVar18 = fVar18 * (float)((ulong)uVar35 >> 0x20);
    auVar39 = *(undefined1 (*) [16])(*(long *)(param_1 + 0x68) + 0x20);
    fVar14 = fVar16 * (auVar21._0_4_ * fVar19 + auVar29._0_4_ * fVar17 + auVar40._0_4_ * fVar13);
    fVar15 = fVar18 * (auVar21._4_4_ * fVar19 + auVar29._4_4_ * fVar17 + auVar40._4_4_ * fVar13);
    fVar16 = fVar16 * (fVar22 * fVar19 + auVar36._0_4_ * fVar17 + auVar28._0_4_ * fVar13);
    if (ABS(fVar16) <= auVar39._8_4_ &&
        (ABS(fVar15) <= auVar39._4_4_ && ABS(fVar14) <= auVar39._0_4_)) {
      param_7[1] = CONCAT44(fVar18 * (fVar23 * fVar19 + auVar36._4_4_ * fVar17 +
                                     auVar28._4_4_ * fVar13),fVar16);
      *param_7 = CONCAT44(fVar15,fVar14);
      return;
    }
  }
  if (param_5 != 0) {
    FUN_0335e900(param_1);
    param_2 = *(undefined1 (**) [12])(param_1 + 8);
    param_3 = *(undefined1 (**) [12])(param_1 + 0x20);
    param_4 = *(undefined1 (**) [12])(param_1 + 0x38);
  }
  *(undefined4 *)
   (*(long *)(*(long *)(param_1 + 0x70) + 0x28) +
    ((ulong)((long)param_2 - *(long *)(*(long *)(param_1 + 0x68) + 0x48)) >> 4) *
    -0x3333333333333330 + 0xc) = 1;
  *(undefined4 *)
   (*(long *)(*(long *)(param_1 + 0x70) + 0x28) +
    ((ulong)((long)param_3 - *(long *)(*(long *)(param_1 + 0x68) + 0x48)) >> 4) *
    -0x3333333333333330 + 0xc) = 1;
  *(undefined4 *)
   (*(long *)(*(long *)(param_1 + 0x70) + 0x28) +
    ((ulong)((long)param_4 - *(long *)(*(long *)(param_1 + 0x68) + 0x48)) >> 4) *
    -0x3333333333333330 + 0xc) = 1;
  iVar1 = *(int *)(param_1 + 0x60);
  FUN_0335e350(param_1,param_2,param_3,param_6,param_7);
  iVar12 = *(int *)(param_1 + 0x60);
  if (iVar1 == iVar12) {
    FUN_0335e350(param_1,param_2,param_4,param_7,param_7);
    iVar12 = *(int *)(param_1 + 0x60);
  }
  if (iVar1 == iVar12) {
    FUN_0335e350(param_1,param_3,param_4,param_7,param_7);
    return;
  }
  return;
}


