/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0301f850; name: FUN_0301f850
 */


void FUN_0301f850(undefined1 (*param_1) [16],long param_2,undefined8 *param_3)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
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
  undefined8 uVar32;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar33 [16];
  undefined8 uVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  
  fVar12 = -*(float *)(param_2 + 0x1c);
  fVar18 = *(float *)(param_1[3] + 8);
  fVar14 = *(float *)param_1[3];
  fVar13 = *(float *)(param_1[3] + 4);
  fVar16 = *(float *)(param_2 + 0x74);
  puVar11 = (undefined8 *)*param_3;
  lVar2 = *(long *)(param_2 + 0x30);
  lVar3 = *(long *)(param_2 + 0x38);
  fVar15 = *(float *)(param_2 + 0x70);
  fVar17 = fVar16;
  if ((0.0 <= fVar18) && (0.0 <= *(float *)(param_1[3] + 0xc))) {
    fVar12 = -(*(float *)(param_2 + 8) * fVar18);
    fVar15 = fVar18;
    fVar17 = *(float *)(param_1[3] + 0xc);
  }
  auVar8 = *param_1;
  fVar21 = (float)*(undefined8 *)param_1[1];
  fVar25 = fVar21 - (float)*(undefined8 *)(lVar3 + 0x70);
  fVar22 = (float)((ulong)*(undefined8 *)param_1[1] >> 0x20);
  fVar26 = fVar22 - (float)((ulong)*(undefined8 *)(lVar3 + 0x70) >> 0x20);
  fVar23 = (float)*(undefined8 *)(param_1[1] + 8);
  fVar27 = fVar23 - (float)*(undefined8 *)(lVar3 + 0x78);
  fVar24 = (float)((ulong)*(undefined8 *)(param_1[1] + 8) >> 0x20);
  fVar29 = fVar24 - (float)((ulong)*(undefined8 *)(lVar3 + 0x78) >> 0x20);
  pauVar1 = param_1 + 2;
  fVar19 = (float)*(undefined8 *)(param_1[2] + 8);
  fVar40 = (float)((ulong)*(undefined8 *)(param_1[2] + 8) >> 0x20);
  uVar5 = *(undefined8 *)*pauVar1;
  fVar18 = (float)uVar5;
  fVar39 = (float)((ulong)uVar5 >> 0x20);
  auVar33 = NEON_ext(auVar8,auVar8,8,1);
  uVar32 = NEON_ext(auVar8._0_8_,auVar33._0_8_,4,1);
  auVar33._12_4_ = fVar40;
  auVar33._0_12_ = *(undefined1 (*) [12])*pauVar1;
  auVar4._12_4_ = fVar40;
  auVar4._0_12_ = *(undefined1 (*) [12])*pauVar1;
  auVar33 = NEON_ext(auVar33,auVar4,8,1);
  uVar38 = NEON_ext(uVar5,auVar33._0_8_,4,1);
  auVar6._4_4_ = fVar26;
  auVar6._0_4_ = fVar25;
  auVar6._8_4_ = fVar27;
  auVar6._12_4_ = fVar29;
  auVar7._4_4_ = fVar26;
  auVar7._0_4_ = fVar25;
  auVar7._8_4_ = fVar27;
  auVar7._12_4_ = fVar29;
  auVar33 = NEON_ext(auVar6,auVar7,4,1);
  fVar36 = auVar8._0_4_;
  fVar28 = (float)((ulong)uVar38 >> 0x20);
  fVar30 = fVar36 * (float)uVar38 - fVar18 * (float)uVar32;
  fVar34 = auVar8._4_4_ * fVar28 - fVar39 * (float)((ulong)uVar32 >> 0x20);
  fVar37 = auVar8._8_4_ * fVar18 - fVar19 * fVar36;
  fVar29 = fVar18 * auVar33._0_4_ - (float)uVar38 * fVar25;
  fVar26 = fVar39 * auVar33._4_4_ - fVar28 * fVar26;
  fVar28 = fVar19 * fVar25 - fVar18 * fVar27;
  fVar45 = (float)*(undefined8 *)(lVar2 + 0x38);
  fVar43 = (float)*(undefined8 *)(lVar2 + 0x30);
  fVar44 = (float)((ulong)*(undefined8 *)(lVar2 + 0x30) >> 0x20);
  fVar31 = (float)*(undefined8 *)(lVar2 + 0x60) * fVar30 +
           *(float *)(lVar2 + 0x40) * fVar34 + *(float *)(lVar2 + 0x50) * fVar37;
  fVar35 = (float)((ulong)*(undefined8 *)(lVar2 + 0x60) >> 0x20) * fVar30 +
           *(float *)(lVar2 + 0x44) * fVar34 + *(float *)(lVar2 + 0x54) * fVar37;
  fVar30 = (float)*(undefined8 *)(lVar2 + 0x68) * fVar30 +
           *(float *)(lVar2 + 0x48) * fVar34 + *(float *)(lVar2 + 0x58) * fVar37;
  fVar25 = (float)*(undefined8 *)(lVar3 + 0x60) * fVar29 +
           (float)*(undefined8 *)(lVar3 + 0x40) * fVar26 +
           (float)*(undefined8 *)(lVar3 + 0x50) * fVar28;
  fVar27 = (float)((ulong)*(undefined8 *)(lVar3 + 0x60) >> 0x20) * fVar29 +
           (float)((ulong)*(undefined8 *)(lVar3 + 0x40) >> 0x20) * fVar26 +
           (float)((ulong)*(undefined8 *)(lVar3 + 0x50) >> 0x20) * fVar28;
  fVar29 = (float)*(undefined8 *)(lVar3 + 0x68) * fVar29 +
           (float)*(undefined8 *)(lVar3 + 0x48) * fVar26 +
           (float)*(undefined8 *)(lVar3 + 0x58) * fVar28;
  fVar26 = (float)*(undefined8 *)(lVar3 + 0x30);
  fVar28 = (float)((ulong)*(undefined8 *)(lVar3 + 0x30) >> 0x20);
  fVar34 = (float)*(undefined8 *)(lVar3 + 0x38);
  auVar20._0_4_ = fVar18 * (fVar21 - fVar36);
  auVar20._4_4_ = fVar39 * (fVar22 - auVar8._4_4_);
  auVar20._8_4_ = fVar19 * (fVar23 - auVar8._8_4_);
  auVar20._12_4_ = fVar40 * (fVar24 - auVar8._12_4_);
  fVar18 = fVar31 * fVar31 * fVar43 + fVar26 * fVar25 * fVar25;
  fVar39 = fVar35 * fVar35 * fVar44 + fVar28 * fVar27 * fVar27;
  uVar32 = CONCAT44(fVar39,fVar18);
  fVar40 = fVar30 * fVar30 * fVar45 + fVar34 * fVar29 * fVar29;
  auVar42._8_4_ = 0x28800000;
  auVar42._0_8_ = 0x2880000028800000;
  auVar42._12_4_ = 0x28800000;
  auVar8._4_4_ = fVar44 + fVar28;
  auVar8._0_4_ = fVar43 + fVar26;
  auVar8._8_4_ = fVar45 + fVar34;
  auVar8._12_4_ =
       (float)((ulong)*(undefined8 *)(lVar2 + 0x38) >> 0x20) +
       (float)((ulong)*(undefined8 *)(lVar3 + 0x38) >> 0x20);
  auVar33 = NEON_fmax(auVar8,auVar42,4);
  auVar9._8_4_ = fVar40;
  auVar9._0_8_ = uVar32;
  auVar9._12_4_ = auVar33._12_4_;
  auVar10._8_4_ = fVar40;
  auVar10._0_8_ = uVar32;
  auVar10._12_4_ = auVar33._12_4_;
  auVar33 = NEON_ext(auVar9,auVar10,8,1);
  fVar18 = fVar18 + fVar39;
  fVar40 = auVar33._0_4_ + auVar33._4_4_;
  fVar39 = fVar18 + fVar40;
  uVar38 = CONCAT44(fVar18 + fVar40,fVar39);
  uVar41 = NEON_frecpe(uVar38,4);
  uVar32 = NEON_frecps(uVar38,uVar41,4);
  fVar18 = (float)uVar41 * (float)uVar32;
  auVar33 = NEON_ext(auVar20,auVar20,8,1);
  uVar32 = NEON_frecps(uVar38,CONCAT44((float)((ulong)uVar41 >> 0x20) *
                                       (float)((ulong)uVar32 >> 0x20),fVar18),4);
  puVar11[1] = CONCAT44(*(float *)(param_2 + 8) * (auVar33._0_4_ + auVar20._0_4_ + auVar20._4_4_),
                        fVar19);
  *puVar11 = uVar5;
  *(float *)(puVar11 + 3) = fVar30;
  *(float *)((long)puVar11 + 0x1c) = fVar16 * fVar18 * (float)uVar32;
  *(float *)(puVar11 + 2) = fVar31;
  *(float *)((long)puVar11 + 0x14) = fVar35;
  puVar11[5] = CONCAT44(fVar39,fVar29);
  puVar11[4] = CONCAT44(fVar27,fVar25);
  *param_3 = puVar11 + 8;
  *(float *)(puVar11 + 6) = fVar14 * fVar12;
  *(float *)((long)puVar11 + 0x34) = fVar13 * fVar12;
  *(float *)(puVar11 + 7) = fVar15;
  *(float *)((long)puVar11 + 0x3c) = fVar17;
  *(undefined1 *)puVar11 = 7;
  return;
}


