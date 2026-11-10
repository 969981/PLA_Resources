/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03189ba4; name: FUN_03189ba4
 */


undefined8
FUN_03189ba4(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,float *param_5
            ,float *param_6,float *param_7)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong uVar10;
  long lVar11;
  long lVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar29;
  undefined1 auVar28 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 local_a0;
  undefined8 local_90;
  undefined1 local_80 [24];
  long local_68;
  
  lVar12 = tpidr_el0;
  lVar11 = *(long *)(lVar12 + 0x38d490);
  if (lVar11 == 0) {
    lVar11 = FUN_0333d16c(0,1);
    *(long *)(lVar12 + 0x38d490) = lVar11;
  }
  lVar12 = *(long *)(lVar11 + 0x10);
  if (lVar12 != 0) {
    FUN_032d5af0(lVar12,"TtprojectSegmentOntoFace",0x18);
  }
  iVar2 = (int)param_1[1] + -1;
  local_68 = lVar12;
  if (iVar2 < 1) {
    fVar25 = (float)param_4[1];
    fVar22 = (float)((ulong)param_4[1] >> 0x20);
    fVar23 = (float)*param_4;
    fVar24 = (float)((ulong)*param_4 >> 0x20);
    iVar15 = -1;
    uVar19 = param_3[1];
    uVar27 = *param_3;
    iVar16 = -1;
    local_90 = 0;
    local_a0 = NEON_fmov(0x3f800000,4);
  }
  else {
    local_a0 = NEON_fmov(0x3f800000,4);
    iVar16 = -1;
    iVar14 = 0;
    iVar15 = -1;
    local_90 = 0;
    do {
      FUN_03193490(param_1,iVar14,param_5,local_80);
      fVar18 = local_80._12_4_;
      uVar19 = param_3[1];
      uVar27 = *param_3;
      fVar20 = local_80._0_4_ * (float)uVar27;
      fVar21 = local_80._4_4_ * (float)((ulong)uVar27 >> 0x20);
      fVar23 = local_80._8_4_ * (float)uVar19;
      fVar24 = fVar18 * (float)((ulong)uVar19 >> 0x20);
      auVar28._4_4_ = fVar21;
      auVar28._0_4_ = fVar20;
      auVar28._8_4_ = fVar23;
      auVar28._12_4_ = fVar24;
      auVar3._4_4_ = fVar21;
      auVar3._0_4_ = fVar20;
      auVar3._8_4_ = fVar23;
      auVar3._12_4_ = fVar24;
      auVar28 = NEON_ext(auVar28,auVar3,8,1);
      fVar17 = auVar28._0_4_ + fVar18;
      fVar25 = (float)param_4[1];
      fVar22 = (float)((ulong)param_4[1] >> 0x20);
      fVar23 = (float)*param_4;
      fVar24 = (float)((ulong)*param_4 >> 0x20);
      fVar30 = local_80._0_4_ * fVar23;
      fVar31 = local_80._4_4_ * fVar24;
      fVar33 = local_80._8_4_ * fVar25;
      auVar8._4_4_ = fVar31;
      auVar8._0_4_ = fVar30;
      auVar8._8_4_ = fVar33;
      auVar8._12_4_ = fVar18 * fVar22;
      auVar9._4_4_ = fVar31;
      auVar9._0_4_ = fVar30;
      auVar9._8_4_ = fVar33;
      auVar9._12_4_ = fVar18 * fVar22;
      auVar28 = NEON_ext(auVar8,auVar9,8,1);
      fVar33 = fVar20 + fVar21 + fVar17;
      fVar17 = fVar20 + fVar21 + fVar17;
      fVar18 = auVar28._0_4_ + fVar18;
      fVar20 = (fVar30 + fVar31 + fVar18) - fVar33;
      uVar26 = CONCAT44((fVar30 + fVar31 + fVar18) - fVar17,fVar20);
      fVar18 = fVar33 + (float)local_a0 * fVar20;
      if (0.0 <= fVar33 + (float)local_90 * fVar20) {
        if (0.0 <= fVar18) {
          uVar27 = 0;
          goto joined_r0x03189f78;
        }
        uVar35 = NEON_frecpe(uVar26,4);
        uVar34 = NEON_frecps(uVar26,uVar35,4);
        fVar18 = (float)uVar35 * (float)uVar34;
        fVar20 = (float)((ulong)uVar35 >> 0x20) * (float)((ulong)uVar34 >> 0x20);
        uVar26 = NEON_frecps(uVar26,CONCAT44(fVar20,fVar18),4);
        local_90 = CONCAT44(-(fVar17 * fVar20 * (float)((ulong)uVar26 >> 0x20)),
                            -(fVar33 * fVar18 * (float)uVar26));
        iVar16 = iVar14;
      }
      else if (0.0 <= fVar18) {
        uVar35 = NEON_frecpe(uVar26,4);
        uVar34 = NEON_frecps(uVar26,uVar35,4);
        fVar18 = (float)uVar35 * (float)uVar34;
        fVar20 = (float)((ulong)uVar35 >> 0x20) * (float)((ulong)uVar34 >> 0x20);
        uVar26 = NEON_frecps(uVar26,CONCAT44(fVar20,fVar18),4);
        local_a0 = CONCAT44(-(fVar17 * fVar20 * (float)((ulong)uVar26 >> 0x20)),
                            -(fVar33 * fVar18 * (float)uVar26));
        iVar15 = iVar14;
      }
      iVar14 = iVar14 + 1;
    } while (iVar2 != iVar14);
  }
  fVar18 = (float)((ulong)local_90 >> 0x20);
  fVar33 = (float)((ulong)uVar27 >> 0x20);
  fVar17 = (float)((ulong)uVar19 >> 0x20);
  fVar20 = (float)((ulong)local_a0 >> 0x20);
  *(ulong *)(param_6 + 2) =
       CONCAT44(fVar17 + (fVar22 - fVar17) * fVar18,
                (float)uVar19 + (fVar25 - (float)uVar19) * (float)local_90);
  *(ulong *)param_6 =
       CONCAT44(fVar33 + (fVar24 - fVar33) * fVar18,
                (float)uVar27 + (fVar23 - (float)uVar27) * (float)local_90);
  uVar27 = *param_4;
  fVar25 = (float)param_3[1];
  fVar22 = (float)((ulong)param_3[1] >> 0x20);
  fVar23 = (float)*param_3;
  fVar24 = (float)((ulong)*param_3 >> 0x20);
  *(ulong *)(param_7 + 2) =
       CONCAT44(fVar22 + fVar20 * ((float)((ulong)param_4[1] >> 0x20) - fVar22),
                fVar25 + (float)local_a0 * ((float)param_4[1] - fVar25));
  *(ulong *)param_7 =
       CONCAT44(fVar24 + fVar20 * ((float)((ulong)uVar27 >> 0x20) - fVar24),
                fVar23 + (float)local_a0 * ((float)uVar27 - fVar23));
  lVar11 = *param_1;
  if (iVar16 == -1) {
    uVar10 = FUN_03189640(lVar11,lVar11 + (long)(int)param_1[1] * 0x10,param_5,param_6);
    if ((uVar10 & 1) == 0) {
      FUN_03198e54(param_1,local_80);
      bVar13 = true;
      uVar26 = param_3[1];
      uVar19 = *param_3;
      fVar25 = local_80._0_4_ * (float)uVar19;
      fVar33 = local_80._4_4_ * (float)((ulong)uVar19 >> 0x20);
      fVar23 = local_80._8_4_ * (float)uVar26;
      fVar24 = local_80._12_4_ * (float)((ulong)uVar26 >> 0x20);
      auVar4._4_4_ = fVar33;
      auVar4._0_4_ = fVar25;
      auVar4._8_4_ = fVar23;
      auVar4._12_4_ = fVar24;
      auVar5._4_4_ = fVar33;
      auVar5._0_4_ = fVar25;
      auVar5._8_4_ = fVar23;
      auVar5._12_4_ = fVar24;
      auVar28 = NEON_ext(auVar4,auVar5,8,1);
      fVar23 = auVar28._0_4_ + local_80._12_4_;
      fVar17 = (float)*(undefined8 *)(param_5 + 2);
      fVar18 = (float)((ulong)*(undefined8 *)(param_5 + 2) >> 0x20);
      fVar24 = (float)*(undefined8 *)param_5;
      fVar22 = (float)((ulong)*(undefined8 *)param_5 >> 0x20);
      fVar20 = local_80._0_4_ * fVar24;
      fVar30 = local_80._4_4_ * fVar22;
      fVar31 = local_80._8_4_ * fVar17;
      fVar21 = fVar20 + fVar30 + fVar31;
      fVar31 = fVar20 + fVar30 + fVar31;
      uVar27 = NEON_frecpe(CONCAT44(fVar31,fVar21),4);
      uVar35 = NEON_frecps(CONCAT44(fVar31,fVar21),uVar27,4);
      fVar20 = (float)uVar27 * (float)uVar35;
      fVar30 = (float)((ulong)uVar27 >> 0x20) * (float)((ulong)uVar35 >> 0x20);
      uVar27 = NEON_frecps(CONCAT44(fVar31,fVar21),CONCAT44(fVar30,fVar20),4);
      fVar20 = -((fVar25 + fVar33 + fVar23) * fVar20 * (float)uVar27);
      fVar23 = -((fVar25 + fVar33 + fVar23) * fVar30 * (float)((ulong)uVar27 >> 0x20));
      goto LAB_03189dfc;
    }
    bVar13 = false;
  }
  else {
    puVar1 = (undefined8 *)(lVar11 + (long)iVar16 * 0x10);
    fVar25 = (float)*(undefined8 *)param_5;
    fVar33 = (float)((ulong)*(undefined8 *)param_5 >> 0x20);
    bVar13 = false;
    uVar26 = puVar1[1];
    uVar19 = *puVar1;
    fVar24 = (float)puVar1[2] - (float)uVar19;
    fVar23 = (float)((ulong)uVar19 >> 0x20);
    fVar22 = (float)((ulong)puVar1[2] >> 0x20) - fVar23;
    fVar17 = (float)puVar1[3] - (float)uVar26;
    fVar18 = (float)((ulong)puVar1[3] >> 0x20) - (float)((ulong)uVar26 >> 0x20);
    fVar20 = fVar24 * fVar25;
    fVar30 = fVar22 * fVar33;
    fVar31 = fVar17 * (float)*(undefined8 *)(param_5 + 2);
    fVar21 = fVar20 + fVar30 + fVar31;
    fVar25 = fVar24 - fVar25 * fVar21;
    fVar33 = fVar22 - fVar33 * (fVar20 + fVar30 + fVar31);
    fVar20 = fVar17 - (float)*(undefined8 *)(param_5 + 2) * fVar21;
    fVar21 = (*param_6 - (float)uVar19) * fVar25;
    fVar30 = (param_6[1] - fVar23) * fVar33;
    fVar31 = (param_6[2] - (float)uVar26) * fVar20;
    fVar23 = fVar25 * fVar25 + fVar33 * fVar33 + fVar20 * fVar20;
    fVar25 = fVar25 * fVar25 + fVar33 * fVar33 + fVar20 * fVar20;
    uVar27 = NEON_frecpe(CONCAT44(fVar25,fVar23),4);
    uVar35 = NEON_frecps(CONCAT44(fVar25,fVar23),uVar27,4);
    fVar33 = (float)uVar27 * (float)uVar35;
    fVar32 = (float)((ulong)uVar27 >> 0x20) * (float)((ulong)uVar35 >> 0x20);
    uVar27 = NEON_frecps(CONCAT44(fVar25,fVar23),CONCAT44(fVar32,fVar33),4);
    fVar20 = fVar33 * (float)uVar27 * (fVar21 + fVar30 + fVar31);
    fVar23 = fVar32 * (float)((ulong)uVar27 >> 0x20) * (fVar21 + fVar30 + fVar31);
LAB_03189dfc:
    *(ulong *)(param_6 + 2) =
         CONCAT44((float)((ulong)uVar26 >> 0x20) + fVar18 * fVar23,(float)uVar26 + fVar17 * fVar20);
    *(ulong *)param_6 =
         CONCAT44((float)((ulong)uVar19 >> 0x20) + fVar22 * fVar23,(float)uVar19 + fVar24 * fVar20);
  }
  lVar11 = *param_1;
  if (iVar15 == -1) {
    uVar10 = FUN_03189640(lVar11,lVar11 + (long)(int)param_1[1] * 0x10,param_5,param_7);
    if ((uVar10 & 1) != 0) goto LAB_03189e94;
    if (!bVar13) {
      FUN_03198e54(param_1,local_80);
    }
    fVar33 = (float)param_4[1];
    fVar17 = (float)((ulong)param_4[1] >> 0x20);
    fVar25 = (float)*param_4;
    fVar22 = (float)((ulong)*param_4 >> 0x20);
    fVar18 = local_80._0_4_ * fVar25;
    fVar20 = local_80._4_4_ * fVar22;
    fVar23 = local_80._8_4_ * fVar33;
    fVar24 = local_80._12_4_ * fVar17;
    auVar6._4_4_ = fVar20;
    auVar6._0_4_ = fVar18;
    auVar6._8_4_ = fVar23;
    auVar6._12_4_ = fVar24;
    auVar7._4_4_ = fVar20;
    auVar7._0_4_ = fVar18;
    auVar7._8_4_ = fVar23;
    auVar7._12_4_ = fVar24;
    auVar28 = NEON_ext(auVar6,auVar7,8,1);
    fVar23 = local_80._0_4_ * *param_5;
    fVar24 = local_80._4_4_ * param_5[1];
    fVar21 = local_80._8_4_ * param_5[2];
    uVar19 = CONCAT44(fVar23 + fVar24 + fVar21,fVar23 + fVar24 + fVar21);
    fVar23 = auVar28._0_4_ + local_80._12_4_;
    uVar27 = NEON_frecpe(uVar19,4);
    uVar26 = NEON_frecps(uVar19,uVar27,4);
    fVar24 = (float)uVar27 * (float)uVar26;
    fVar21 = (float)((ulong)uVar27 >> 0x20) * (float)((ulong)uVar26 >> 0x20);
    uVar27 = NEON_frecps(uVar19,CONCAT44(fVar21,fVar24),4);
    fVar24 = -((fVar18 + fVar20 + fVar23) * fVar24 * (float)uVar27);
    fVar23 = -((fVar18 + fVar20 + fVar23) * fVar21 * (float)((ulong)uVar27 >> 0x20));
    uVar27 = CONCAT44(fVar22 + param_5[1] * fVar23,fVar25 + *param_5 * fVar24);
    uVar19 = CONCAT44(fVar17 + param_5[3] * fVar23,fVar33 + param_5[2] * fVar24);
  }
  else {
    puVar1 = (undefined8 *)(lVar11 + (long)iVar15 * 0x10);
    fVar20 = (float)*(undefined8 *)param_5;
    fVar21 = (float)((ulong)*(undefined8 *)param_5 >> 0x20);
    fVar23 = (float)*puVar1;
    fVar33 = (float)puVar1[2] - fVar23;
    fVar24 = (float)((ulong)*puVar1 >> 0x20);
    fVar17 = (float)((ulong)puVar1[2] >> 0x20) - fVar24;
    fVar25 = (float)puVar1[1];
    fVar18 = (float)puVar1[3] - fVar25;
    fVar22 = (float)((ulong)puVar1[1] >> 0x20);
    fVar30 = fVar33 * fVar20;
    fVar32 = fVar17 * fVar21;
    fVar29 = fVar18 * (float)*(undefined8 *)(param_5 + 2);
    fVar31 = fVar30 + fVar32 + fVar29;
    fVar20 = fVar33 - fVar20 * fVar31;
    fVar30 = fVar17 - fVar21 * (fVar30 + fVar32 + fVar29);
    fVar32 = fVar18 - (float)*(undefined8 *)(param_5 + 2) * fVar31;
    fVar21 = (*param_7 - fVar23) * fVar20;
    fVar31 = (param_7[1] - fVar24) * fVar30;
    fVar29 = (param_7[2] - fVar25) * fVar32;
    uVar19 = CONCAT44(fVar20 * fVar20 + fVar30 * fVar30 + fVar32 * fVar32,
                      fVar20 * fVar20 + fVar30 * fVar30 + fVar32 * fVar32);
    uVar27 = NEON_frecpe(uVar19,4);
    uVar26 = NEON_frecps(uVar19,uVar27,4);
    fVar20 = (float)uVar27 * (float)uVar26;
    fVar30 = (float)((ulong)uVar27 >> 0x20) * (float)((ulong)uVar26 >> 0x20);
    uVar27 = NEON_frecps(uVar19,CONCAT44(fVar30,fVar20),4);
    fVar20 = fVar20 * (float)uVar27 * (fVar21 + fVar31 + fVar29);
    fVar21 = fVar30 * (float)((ulong)uVar27 >> 0x20) * (fVar21 + fVar31 + fVar29);
    uVar27 = CONCAT44(fVar24 + fVar17 * fVar21,fVar23 + fVar33 * fVar20);
    uVar19 = CONCAT44(fVar22 + ((float)((ulong)puVar1[3] >> 0x20) - fVar22) * fVar21,
                      fVar25 + fVar18 * fVar20);
  }
  *(undefined8 *)(param_7 + 2) = uVar19;
  *(undefined8 *)param_7 = uVar27;
LAB_03189e94:
  uVar27 = 1;
joined_r0x03189f78:
  if (lVar12 != 0) {
    FUN_032d5b34(lVar12,&DAT_0390f40e);
  }
  return uVar27;
}


