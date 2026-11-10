/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fb820c; name: FUN_02fb820c
 */


void FUN_02fb820c(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  ulong *puVar19;
  byte *pbVar20;
  ulong uVar21;
  int iVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  float fVar29;
  float fVar30;
  ulong uVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar58;
  undefined8 uVar57;
  float fVar59;
  float fVar60;
  undefined8 uVar61;
  undefined1 auVar62 [16];
  undefined8 local_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  ulong local_c8;
  ulong local_c0;
  byte *local_b8;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  ulong uStack_98;
  undefined4 local_90;
  byte *local_88;
  
  puVar15 = PTR_PTR_0434a080;
  if ((int)param_1[1] != 0) {
    uVar31 = param_1[3];
    uVar28 = param_1[2];
    local_c8 = param_1[5];
    local_d0 = param_1[4];
    fVar36 = (((float)uVar28 - *(float *)(param_3 + 8)) - *(float *)(param_3 + 2)) *
             *(float *)(param_3 + 6);
    fVar38 = (((float)(uVar28 >> 0x20) - *(float *)((long)param_3 + 0x44)) -
             *(float *)((long)param_3 + 0x14)) * *(float *)((long)param_3 + 0x34);
    fVar39 = (((float)uVar31 - *(float *)(param_3 + 9)) - *(float *)(param_3 + 3)) *
             *(float *)(param_3 + 7);
    fVar40 = (((float)(uVar31 >> 0x20) - *(float *)((long)param_3 + 0x4c)) -
             *(float *)((long)param_3 + 0x1c)) * *(float *)((long)param_3 + 0x3c);
    auVar34._0_4_ =
         *(float *)(param_3 + 6) *
         (((float)local_d0 + *(float *)(param_3 + 8)) - *(float *)(param_3 + 2));
    auVar34._4_4_ =
         *(float *)((long)param_3 + 0x34) *
         (((float)(local_d0 >> 0x20) + *(float *)((long)param_3 + 0x44)) -
         *(float *)((long)param_3 + 0x14));
    auVar34._8_4_ =
         *(float *)(param_3 + 7) *
         (((float)local_c8 + *(float *)(param_3 + 9)) - *(float *)(param_3 + 3));
    auVar34._12_4_ =
         *(float *)((long)param_3 + 0x3c) *
         (((float)(local_c8 >> 0x20) + *(float *)((long)param_3 + 0x4c)) -
         *(float *)((long)param_3 + 0x1c));
    auVar35._4_4_ = fVar38;
    auVar35._0_4_ = fVar36;
    auVar35._8_4_ = fVar39;
    auVar35._12_4_ = fVar40;
    auVar48 = NEON_fmin(auVar35,auVar34,4);
    auVar62._4_4_ = fVar38;
    auVar62._0_4_ = fVar36;
    auVar62._8_4_ = fVar39;
    auVar62._12_4_ = fVar40;
    auVar35 = NEON_fmax(auVar62,auVar34,4);
    uVar57 = NEON_fmaxp(auVar48._0_8_,auVar48._0_8_,4);
    uVar57 = NEON_fmax(CONCAT44(auVar48._8_4_,auVar48._8_4_),uVar57,4);
    uVar46 = NEON_fminp(auVar35._0_8_,auVar35._0_8_,4);
    uVar46 = NEON_fmin(CONCAT44(auVar35._8_4_,auVar35._8_4_),uVar46,4);
    uVar57 = NEON_fmax(uVar57,0,4);
    uVar46 = NEON_fmin(uVar46,*(undefined8 *)(*(long *)(*param_3 + 0x128) + 0x10),4);
    if ((float)uVar57 <= (float)uVar46) {
      lVar14 = param_2[1];
      uVar18 = 0;
      pbVar20 = (byte *)(*param_1 + (long)param_1);
      bVar4 = pbVar20[3];
      do {
        uVar13 = (uint)uVar18;
joined_r0x02fb8300:
        if (-1 < (char)bVar4) {
          lVar16 = *param_3;
          lVar23 = *(long *)(lVar16 + 0xa8);
          if (lVar23 != 0) {
            lVar26 = *(long *)(lVar23 + 0x20);
            lVar1 = 0;
            if (lVar26 != 0) {
              lVar1 = lVar26 + lVar23 + 0x20;
            }
            lVar27 = *(long *)(lVar1 + 0x48);
            lVar26 = 0;
            if (lVar27 != 0) {
              lVar26 = lVar27 + lVar1 + 0x48;
            }
            uVar3 = uVar13 + 0x1f;
            if (-1 < (int)uVar13) {
              uVar3 = uVar13;
            }
            if ((*(uint *)(lVar23 + 0x28 +
                          (long)((int)uVar3 >> 5) * 4 +
                          (long)(*(int *)(lVar26 + 0x68) << 3) * 4 + *(long *)(lVar23 + 0x28)) &
                1 << (ulong)(uVar13 & 0x1f)) == 0) goto LAB_02fb87d0;
          }
          lVar27 = *(long *)(lVar16 + 0x50);
          lVar26 = (long)(param_1 + 8) + (ulong)CONCAT11(bVar4,pbVar20[4]) * 0x60 + param_1[8];
          lVar24 = *(long *)(lVar27 + 0x40);
          lVar23 = lVar24 + lVar27 + 0x40;
          lVar1 = 0;
          if (lVar24 != 0) {
            lVar1 = lVar23;
          }
          iVar22 = (int)(lVar26 - lVar1 >> 5) * -0x55555555;
          if ((*(int *)(lVar16 + 0x94) != iVar22) || (*(int *)(lVar16 + 0x98) != iVar22)) {
            lVar23 = lVar23 + (long)iVar22 * 0x60;
            *(long *)(lVar16 + 0x60) = lVar23;
            *(int *)(lVar16 + 0x94) = iVar22;
            *(int *)(lVar16 + 0x98) = iVar22;
            lVar24 = *(long *)(lVar27 + 0x70);
            lVar1 = 0;
            if (lVar24 != 0) {
              lVar1 = lVar24 + lVar27 + 0x70;
            }
            *(ulong *)(lVar16 + 0x70) = lVar1 + (ulong)*(uint *)(lVar23 + 0x48) * 4;
            lVar24 = *(long *)(lVar27 + 0x80);
            lVar1 = 0;
            if (lVar24 != 0) {
              lVar1 = lVar24 + lVar27 + 0x80;
            }
            *(ulong *)(lVar16 + 0x78) = lVar1 + (ulong)*(byte *)(lVar23 + 0x5b) * 0x80000;
            lVar24 = *(long *)(lVar27 + 0x60);
            lVar1 = 0;
            if (lVar24 != 0) {
              lVar1 = lVar24 + lVar27 + 0x60;
            }
            lVar1 = lVar1 + (ulong)*(uint *)(lVar23 + 0x4c) * 2;
            *(long *)(lVar16 + 0x80) = lVar1;
            lVar25 = *(long *)(lVar27 + 0x90);
            lVar24 = 0;
            if (lVar25 != 0) {
              lVar24 = lVar25 + lVar27 + 0x90;
            }
            *(ulong *)(lVar16 + 0x88) = lVar24 + (ulong)*(uint *)(lVar23 + 0x54) * 4;
            *(uint *)(lVar16 + 0x90) = (uint)*(byte *)(lVar23 + 0x58);
            lVar25 = *(long *)(lVar27 + 0x50);
            lVar24 = 0;
            if (lVar25 != 0) {
              lVar24 = lVar25 + lVar27 + 0x50;
            }
            *(ulong *)(lVar16 + 0x68) = lVar24 + (ulong)*(uint *)(lVar23 + 0x50) * 4;
            uVar57 = *(undefined8 *)(lVar23 + 0x30);
            *(undefined8 *)(lVar16 + 0x38) = *(undefined8 *)(lVar23 + 0x38);
            *(undefined8 *)(lVar16 + 0x30) = uVar57;
            uVar57 = *(undefined8 *)(lVar23 + 0x3c);
            *(ulong *)(lVar16 + 0x48) = (ulong)*(uint *)(lVar23 + 0x44);
            *(undefined8 *)(lVar16 + 0x40) = uVar57;
            *(ulong *)(lVar16 + 0x80) = lVar1 + (ulong)*(byte *)(lVar23 + 0x58) * -2;
          }
          FUN_02fb8834(lVar26,param_2,param_3);
LAB_02fb87d0:
          if ((int)param_2[1] <= (int)lVar14) {
            return;
          }
          iVar22 = (int)param_2[1] + -1;
          *(int *)(param_2 + 1) = iVar22;
          puVar19 = (ulong *)(*param_2 + (long)iVar22 * 0x30);
          uVar18 = (ulong)(int)puVar19[4];
          uVar31 = puVar19[1];
          uVar28 = *puVar19;
          local_c8 = puVar19[3];
          local_d0 = puVar19[2];
          pbVar20 = (byte *)((long)param_1 + uVar18 * 5 + *param_1);
          bVar4 = pbVar20[3];
          goto joined_r0x02fb8310;
        }
        iVar22 = (int)uVar18;
        uVar18 = (long)iVar22 + 1;
        fVar29 = (float)local_d0;
        local_b0 = (float)uVar28;
        fVar30 = (float)(local_d0 >> 0x20);
        fStack_ac = (float)(uVar28 >> 0x20);
        fVar33 = (float)local_c8;
        fVar32 = (float)uVar31;
        local_c0._0_4_ = (int)uVar18;
        fVar36 = (fVar29 - local_b0) * 0.0044247787;
        fVar38 = (fVar30 - fStack_ac) * 0.0044247787;
        fVar39 = (fVar33 - fVar32) * 0.0044247787;
        uVar31 = (long)iVar22 + (ulong)((uint)pbVar20[4] | (pbVar20[3] & 0x7f) << 8) * 2;
        local_90 = (int)uVar31;
        local_b8 = (byte *)((long)param_1 + uVar18 * 5 + *param_1);
        pbVar20 = (byte *)((long)param_1 + uVar31 * 5 + *param_1);
        local_88 = pbVar20;
        bVar8 = *local_b8 >> 4;
        bVar4 = *local_b8 & 0xf;
        bVar9 = local_b8[1] >> 4;
        bVar10 = local_b8[2] >> 4;
        fVar37 = local_b0 + (float)(byte)(bVar8 * bVar8) * fVar36;
        fVar42 = fStack_ac + (float)(byte)(bVar9 * bVar9) * fVar38;
        bVar8 = local_b8[2] & 0xf;
        bVar9 = local_b8[1] & 0xf;
        bVar11 = *pbVar20 >> 4;
        bVar2 = *pbVar20 & 0xf;
        bVar12 = pbVar20[1] >> 4;
        local_e0 = CONCAT44(fVar42,fVar37);
        fVar43 = fVar32 + (float)(byte)(bVar10 * bVar10) * fVar39;
        bVar10 = pbVar20[2] >> 4;
        fVar44 = fVar29 - (float)(byte)(bVar4 * bVar4) * fVar36;
        fVar55 = fVar30 - (float)(byte)(bVar9 * bVar9) * fVar38;
        local_d0 = CONCAT44(fVar55,fVar44);
        fVar45 = fVar33 - (float)(byte)(bVar8 * bVar8) * fVar39;
        local_c8 = (ulong)(uint)fVar45;
        local_b0 = local_b0 + (float)(byte)(bVar11 * bVar11) * fVar36;
        fStack_ac = fStack_ac + (float)(byte)(bVar12 * bVar12) * fVar38;
        uStack_a4 = 0;
        bVar4 = pbVar20[1] & 0xf;
        fVar32 = fVar32 + (float)(byte)(bVar10 * bVar10) * fVar39;
        fVar29 = fVar29 - (float)(byte)(bVar2 * bVar2) * fVar36;
        bVar8 = pbVar20[2] & 0xf;
        fStack_a8 = fVar32;
        fVar30 = fVar30 - (float)(byte)(bVar4 * bVar4) * fVar38;
        fVar33 = fVar33 - (float)(byte)(bVar8 * bVar8) * fVar39;
        local_a0 = CONCAT44(fVar30,fVar29);
        uStack_98 = (ulong)(uint)fVar33;
        fVar36 = *(float *)(param_3 + 8);
        fVar38 = *(float *)((long)param_3 + 0x44);
        fVar39 = *(float *)(param_3 + 9);
        fVar40 = *(float *)((long)param_3 + 0x4c);
        uVar28 = CONCAT44(fStack_ac,local_b0);
        uVar61 = *(undefined8 *)(*(long *)(*param_3 + 0x128) + 0x10);
        fVar56 = (float)param_3[2];
        fVar58 = (float)((ulong)param_3[2] >> 0x20);
        fVar59 = (float)param_3[3];
        fVar60 = (float)((ulong)param_3[3] >> 0x20);
        fVar50 = (float)param_3[6];
        fVar44 = fVar50 * ((fVar36 + fVar44) - fVar56);
        fVar51 = (float)((ulong)param_3[6] >> 0x20);
        fVar55 = fVar51 * ((fVar38 + fVar55) - fVar58);
        fVar52 = (float)param_3[7];
        fVar45 = fVar52 * ((fVar39 + fVar45) - fVar59);
        fVar54 = (float)((ulong)param_3[7] >> 0x20);
        fVar53 = fVar54 * ((fVar40 + 0.0) - fVar60);
        auVar49._0_4_ = ((fVar37 - fVar36) - fVar56) * fVar50;
        auVar49._4_4_ = ((fVar42 - fVar38) - fVar58) * fVar51;
        auVar49._8_4_ = ((fVar43 - fVar39) - fVar59) * fVar52;
        auVar49._12_4_ = ((0.0 - fVar40) - fVar60) * fVar54;
        auVar41._0_4_ = fVar50 * ((fVar36 + fVar29) - fVar56);
        auVar41._4_4_ = fVar51 * ((fVar38 + fVar30) - fVar58);
        auVar41._8_4_ = fVar52 * ((fVar39 + fVar33) - fVar59);
        auVar41._12_4_ = fVar54 * ((fVar40 + 0.0) - fVar60);
        auVar48._4_4_ = fVar55;
        auVar48._0_4_ = fVar44;
        auVar48._8_4_ = fVar45;
        auVar48._12_4_ = fVar53;
        auVar62 = NEON_fmin(auVar49,auVar48,4);
        auVar5._4_4_ = fVar55;
        auVar5._0_4_ = fVar44;
        auVar5._8_4_ = fVar45;
        auVar5._12_4_ = fVar53;
        auVar35 = NEON_fmax(auVar49,auVar5,4);
        uVar57 = NEON_fmaxp(auVar62._0_8_,auVar62._0_8_,4);
        uVar57 = NEON_fmax(CONCAT44(auVar62._8_4_,auVar62._8_4_),uVar57,4);
        uVar46 = NEON_fminp(auVar35._0_8_,auVar35._0_8_,4);
        uVar46 = NEON_fmin(CONCAT44(auVar35._8_4_,auVar35._8_4_),uVar46,4);
        uVar57 = NEON_fmax(uVar57,0,4);
        fVar50 = ((local_b0 - fVar36) - fVar56) * fVar50;
        fVar51 = ((fStack_ac - fVar38) - fVar58) * fVar51;
        fVar52 = ((fVar32 - fVar39) - fVar59) * fVar52;
        fVar54 = ((0.0 - fVar40) - fVar60) * fVar54;
        uVar46 = NEON_fmin(uVar46,uVar61,4);
        fVar38 = (float)uVar57;
        auVar6._4_4_ = fVar51;
        auVar6._0_4_ = fVar50;
        auVar6._8_4_ = fVar52;
        auVar6._12_4_ = fVar54;
        auVar62 = NEON_fmin(auVar6,auVar41,4);
        auVar7._4_4_ = fVar51;
        auVar7._0_4_ = fVar50;
        auVar7._8_4_ = fVar52;
        auVar7._12_4_ = fVar54;
        auVar35 = NEON_fmax(auVar7,auVar41,4);
        uVar57 = NEON_fmaxp(auVar62._0_8_,auVar62._0_8_,4);
        uVar47 = NEON_fmax(CONCAT44(auVar62._8_4_,auVar62._8_4_),uVar57,4);
        uVar57 = NEON_fminp(auVar35._0_8_,auVar35._0_8_,4);
        uVar57 = NEON_fmin(CONCAT44(auVar35._8_4_,auVar35._8_4_),uVar57,4);
        uVar47 = NEON_fmax(uVar47,0,4);
        fVar36 = (float)uVar47;
        uVar57 = NEON_fmin(uVar57,uVar61,4);
        bVar4 = fVar38 <= (float)uVar46 | (fVar36 <= (float)uVar57) << 1;
        if (bVar4 == 1) {
          bVar4 = local_b8[3];
          pbVar20 = local_b8;
          uVar28 = local_e0;
          fVar32 = fVar43;
joined_r0x02fb8310:
          uVar31 = (ulong)(uint)fVar32;
joined_r0x02fb8310:
          uVar13 = (uint)uVar18;
          goto joined_r0x02fb8300;
        }
        if (bVar4 == 2) {
          uVar18 = uVar31 & 0xffffffff;
          bVar4 = pbVar20[3];
          local_d0 = local_a0;
          local_c8 = uStack_98;
          goto joined_r0x02fb8310;
        }
        if (bVar4 != 3) goto LAB_02fb87d0;
        *(uint *)(param_3 + 10) = (uint)(fVar36 < fVar38);
        iVar17 = (int)param_2[1];
        lVar16 = *param_2;
        uVar28 = (ulong)(fVar36 >= fVar38);
        iVar22 = iVar17 + 1;
        if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) <= iVar17) {
          lVar16 = FUN_02fb5338(puVar15,iVar22,lVar16,iVar17,(long)param_2 + 0xc);
          *param_2 = lVar16;
          iVar17 = (int)param_2[1];
        }
        *(int *)(param_2 + 1) = iVar22;
        uVar31 = (&local_c0)[uVar28 * 6 + -4];
        puVar19 = (ulong *)(lVar16 + (long)iVar17 * 0x30);
        puVar19[1] = (&local_c0)[uVar28 * 6 + -3];
        *puVar19 = uVar31;
        uVar31 = (&local_c0)[uVar28 * 6 + -2];
        uVar21 = (ulong)(fVar36 < fVar38);
        puVar19[3] = (&local_c0)[uVar28 * 6 + -1];
        puVar19[2] = uVar31;
        *(int *)(puVar19 + 4) = (int)(&local_c0)[uVar28 * 6];
        uVar31 = (&local_c0)[uVar21 * 6 + -3];
        uVar28 = (&local_c0)[uVar21 * 6 + -4];
        local_c8 = (&local_c0)[uVar21 * 6 + -1];
        local_d0 = (&local_c0)[uVar21 * 6 + -2];
        uVar18 = (ulong)(uint)(&local_c0)[uVar21 * 6];
        pbVar20 = (byte *)(&local_c0)[uVar21 * 6 + 1];
        bVar4 = pbVar20[3];
      } while( true );
    }
  }
  return;
}


