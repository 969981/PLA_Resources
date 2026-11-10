/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fba26c; name: FUN_02fba26c
 */


void FUN_02fba26c(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined1 auVar10 [12];
  float fVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  int iVar15;
  long *plVar16;
  undefined8 *puVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar45;
  undefined8 uVar44;
  float fVar46;
  undefined1 auVar47 [16];
  undefined8 uVar48;
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float local_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  uint local_130 [2];
  byte *local_128;
  float local_120;
  float fStack_11c;
  float fStack_118;
  undefined4 uStack_114;
  float local_110;
  float fStack_10c;
  float local_108;
  undefined4 uStack_104;
  uint local_100;
  byte *local_f8;
  long local_f0;
  long lStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  uint local_d0;
  byte *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  
  if ((int)param_1[1] != 0) {
    local_f0 = param_1[2];
    lStack_e8 = param_1[3];
    lVar1 = param_3 + 0x180;
    lVar12 = param_2[1];
    uStack_d8 = SUB168(*(undefined1 (*) [16])(param_1 + 4),8);
    local_e0 = SUB168(*(undefined1 (*) [16])(param_1 + 4),0);
    local_d0 = 0;
    local_c8 = (byte *)(*param_1 + (long)param_1);
    uVar48 = *(undefined8 *)(*(long *)(param_3 + 0x128) + 0x10);
    FUN_0333e220(lVar1,&local_f0,&local_150);
    puVar13 = PTR_PTR_0434a080;
    auVar25._0_4_ =
         ((local_150 - *(float *)(param_3 + 0x170)) - *(float *)(param_3 + 0x140)) *
         *(float *)(param_3 + 0x160);
    auVar25._4_4_ =
         ((fStack_14c - *(float *)(param_3 + 0x174)) - *(float *)(param_3 + 0x144)) *
         *(float *)(param_3 + 0x164);
    auVar25._8_4_ =
         ((fStack_148 - *(float *)(param_3 + 0x178)) - *(float *)(param_3 + 0x148)) *
         *(float *)(param_3 + 0x168);
    auVar25._12_4_ =
         ((fStack_144 - *(float *)(param_3 + 0x17c)) - *(float *)(param_3 + 0x14c)) *
         *(float *)(param_3 + 0x16c);
    auVar47._0_4_ =
         *(float *)(param_3 + 0x160) *
         ((*(float *)(param_3 + 0x170) + local_140) - *(float *)(param_3 + 0x140));
    auVar47._4_4_ =
         *(float *)(param_3 + 0x164) *
         ((*(float *)(param_3 + 0x174) + fStack_13c) - *(float *)(param_3 + 0x144));
    auVar47._8_4_ =
         *(float *)(param_3 + 0x168) *
         ((*(float *)(param_3 + 0x178) + local_138) - *(float *)(param_3 + 0x148));
    auVar47._12_4_ =
         *(float *)(param_3 + 0x16c) *
         ((*(float *)(param_3 + 0x17c) + fStack_134) - *(float *)(param_3 + 0x14c));
    auVar32 = NEON_fmin(auVar25,auVar47,4);
    auVar25 = NEON_fmax(auVar25,auVar47,4);
    uVar27 = NEON_fmaxp(auVar32._0_8_,auVar32._0_8_,4);
    uVar28 = NEON_fmax(CONCAT44(auVar32._8_4_,auVar32._8_4_),uVar27,4);
    uVar27 = NEON_fminp(auVar25._0_8_,auVar25._0_8_,4);
    uVar27 = NEON_fmin(CONCAT44(auVar25._8_4_,auVar25._8_4_),uVar27,4);
    uVar28 = NEON_fmax(uVar28,0,4);
    uVar27 = NEON_fmin(uVar27,uVar48,4);
    if ((float)uVar28 <= (float)uVar27) {
      bVar5 = local_c8[3];
joined_r0x02fba390:
      while ((char)bVar5 < '\0') {
        lVar2 = (long)(int)local_d0 + 1;
        local_110 = (float)local_e0;
        local_120 = (float)local_f0;
        fStack_10c = (float)((ulong)local_e0 >> 0x20);
        fStack_11c = (float)((ulong)local_f0 >> 0x20);
        local_108 = (float)uStack_d8;
        fStack_118 = (float)lStack_e8;
        local_130[0] = (uint)lVar2;
        lVar14 = (long)(int)local_d0 + (ulong)((uint)local_c8[4] | (local_c8[3] & 0x7f) << 8) * 2;
        local_100 = (uint)lVar14;
        local_128 = (byte *)((long)param_1 + lVar2 * 5 + *param_1);
        local_f8 = (byte *)((long)param_1 + lVar14 * 5 + *param_1);
        fVar43 = (local_110 - local_120) * 0.0044247787;
        fVar45 = (fStack_10c - fStack_11c) * 0.0044247787;
        fVar46 = (local_108 - fStack_118) * 0.0044247787;
        bVar6 = *local_128 >> 4;
        bVar7 = local_128[1] >> 4;
        bVar5 = local_128[1] & 0xf;
        bVar3 = *local_128 & 0xf;
        bVar8 = local_128[2] >> 4;
        fStack_14c = (float)(byte)(bVar7 * bVar7) * fVar45 + fStack_11c;
        local_150 = local_120 + (float)(byte)(bVar6 * bVar6) * fVar43;
        bVar6 = local_128[2] & 0xf;
        bVar7 = local_f8[2] >> 4;
        fStack_144 = 0.0;
        fStack_134 = 0.0;
        local_140 = local_110 - (float)(byte)(bVar3 * bVar3) * fVar43;
        fStack_13c = fStack_10c - (float)(byte)(bVar5 * bVar5) * fVar45;
        fStack_148 = (float)(byte)(bVar8 * bVar8) * fVar46 + fStack_118;
        local_138 = local_108 - (float)(byte)(bVar6 * bVar6) * fVar46;
        bVar8 = *local_f8 >> 4;
        bVar5 = *local_f8 & 0xf;
        bVar9 = local_f8[1] >> 4;
        bVar3 = local_f8[1] & 0xf;
        bVar6 = local_f8[2] & 0xf;
        fStack_118 = (float)(byte)(bVar7 * bVar7) * fVar46 + fStack_118;
        local_120 = local_120 + (float)(byte)(bVar8 * bVar8) * fVar43;
        fStack_11c = fStack_11c + (float)(byte)(bVar9 * bVar9) * fVar45;
        local_110 = local_110 - (float)(byte)(bVar5 * bVar5) * fVar43;
        uStack_104 = 0;
        fStack_10c = fStack_10c - (float)(byte)(bVar3 * bVar3) * fVar45;
        uStack_114 = 0;
        local_108 = local_108 - (float)(byte)(bVar6 * bVar6) * fVar46;
        FUN_0333e220(lVar1,&local_150,&local_a0);
        FUN_0333e220(lVar1,&local_120,&local_c0);
        uVar44 = *(undefined8 *)(*(long *)(param_3 + 0x128) + 0x10);
        fVar43 = *(float *)(param_3 + 0x170);
        fVar45 = *(float *)(param_3 + 0x174);
        fVar46 = *(float *)(param_3 + 0x178);
        fVar11 = *(float *)(param_3 + 0x17c);
        fVar35 = (float)*(undefined8 *)(param_3 + 0x140);
        fVar36 = (float)((ulong)*(undefined8 *)(param_3 + 0x140) >> 0x20);
        fVar37 = (float)*(undefined8 *)(param_3 + 0x148);
        fVar38 = (float)((ulong)*(undefined8 *)(param_3 + 0x148) >> 0x20);
        fVar39 = (float)*(undefined8 *)(param_3 + 0x160);
        auVar32._0_4_ = ((local_a0 - fVar43) - fVar35) * fVar39;
        fVar40 = (float)((ulong)*(undefined8 *)(param_3 + 0x160) >> 0x20);
        auVar32._4_4_ = ((fStack_9c - fVar45) - fVar36) * fVar40;
        fVar41 = (float)*(undefined8 *)(param_3 + 0x168);
        auVar32._8_4_ = ((fStack_98 - fVar46) - fVar37) * fVar41;
        fVar42 = (float)((ulong)*(undefined8 *)(param_3 + 0x168) >> 0x20);
        auVar32._12_4_ = ((fStack_94 - fVar11) - fVar38) * fVar42;
        auVar33._0_4_ = fVar39 * ((fVar43 + fStack_90) - fVar35);
        auVar33._4_4_ = fVar40 * ((fVar45 + fStack_8c) - fVar36);
        auVar33._8_4_ = fVar41 * ((fVar46 + fStack_88) - fVar37);
        auVar33._12_4_ = fVar42 * ((fVar11 + fStack_84) - fVar38);
        auVar47 = NEON_fmin(auVar32,auVar33,4);
        auVar25 = NEON_fmax(auVar32,auVar33,4);
        uVar27 = NEON_fmaxp(auVar47._0_8_,auVar47._0_8_,4);
        uVar28 = NEON_fmax(CONCAT44(auVar47._8_4_,auVar47._8_4_),uVar27,4);
        uVar27 = NEON_fminp(auVar25._0_8_,auVar25._0_8_,4);
        uVar27 = NEON_fmin(CONCAT44(auVar25._8_4_,auVar25._8_4_),uVar27,4);
        uVar28 = NEON_fmax(uVar28,0,4);
        auVar34._0_4_ = (((float)local_c0 - fVar43) - fVar35) * fVar39;
        auVar34._4_4_ = (((float)((ulong)local_c0 >> 0x20) - fVar45) - fVar36) * fVar40;
        auVar34._8_4_ = (((float)uStack_b8 - fVar46) - fVar37) * fVar41;
        auVar34._12_4_ = (((float)((ulong)uStack_b8 >> 0x20) - fVar11) - fVar38) * fVar42;
        uVar27 = NEON_fmin(uVar27,uVar44,4);
        auVar29._0_4_ = fVar39 * ((fVar43 + (float)uStack_b0) - fVar35);
        auVar29._4_4_ = fVar40 * ((fVar45 + (float)((ulong)uStack_b0 >> 0x20)) - fVar36);
        auVar29._8_4_ = fVar41 * ((fVar46 + (float)uStack_a8) - fVar37);
        auVar29._12_4_ = fVar42 * ((fVar11 + (float)((ulong)uStack_a8 >> 0x20)) - fVar38);
        fVar45 = (float)uVar28;
        auVar25 = NEON_fmin(auVar34,auVar29,4);
        auVar47 = NEON_fmax(auVar34,auVar29,4);
        uVar28 = NEON_fmaxp(auVar25._0_8_,auVar25._0_8_,4);
        uVar28 = NEON_fmax(CONCAT44(auVar25._8_4_,auVar25._8_4_),uVar28,4);
        uVar48 = NEON_fminp(auVar47._0_8_,auVar47._0_8_,4);
        uVar48 = NEON_fmin(CONCAT44(auVar47._8_4_,auVar47._8_4_),uVar48,4);
        uVar31 = NEON_fmax(uVar28,0,4);
        uVar28 = NEON_fmin(uVar48,uVar44,4);
        fVar43 = (float)uVar31;
        bVar5 = fVar45 <= (float)uVar27 | (fVar43 <= (float)uVar28) << 1;
        if (bVar5 == 3) {
          *(uint *)(param_3 + 0x1c0) = (uint)(fVar43 < fVar45);
          iVar15 = (int)param_2[1];
          lVar14 = *param_2;
          uVar24 = (ulong)(fVar43 >= fVar45);
          iVar18 = iVar15 + 1;
          if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) <= iVar15) {
            lVar14 = FUN_02fb5338(puVar13,iVar18,lVar14,iVar15,(long)param_2 + 0xc);
            *param_2 = lVar14;
            iVar15 = (int)param_2[1];
          }
          *(int *)(param_2 + 1) = iVar18;
          uVar27 = *(undefined8 *)(local_130 + uVar24 * 0xc + -8);
          puVar17 = (undefined8 *)(lVar14 + (long)iVar15 * 0x30);
          puVar17[1] = *(undefined8 *)(local_130 + uVar24 * 0xc + -6);
          *puVar17 = uVar27;
          uVar27 = *(undefined8 *)(local_130 + uVar24 * 0xc + -4);
          uVar19 = (ulong)(fVar43 < fVar45);
          puVar17[3] = *(undefined8 *)(local_130 + uVar24 * 0xc + -2);
          puVar17[2] = uVar27;
          *(uint *)(puVar17 + 4) = local_130[uVar24 * 0xc];
          local_d0 = local_130[uVar19 * 0xc];
          local_c8 = *(byte **)(local_130 + uVar19 * 0xc + 2);
          lStack_e8 = *(long *)(local_130 + uVar19 * 0xc + -6);
          local_f0 = *(long *)(local_130 + uVar19 * 0xc + -8);
          uStack_d8 = *(undefined8 *)(local_130 + uVar19 * 0xc + -2);
          local_e0 = *(undefined8 *)(local_130 + uVar19 * 0xc + -4);
        }
        else {
          if (bVar5 == 2) {
            local_d0 = local_100;
            auVar30._4_4_ = fStack_11c;
            auVar30._0_4_ = local_120;
            auVar30._8_4_ = fStack_118;
            auVar30._12_4_ = uStack_114;
            auVar26._4_4_ = fStack_10c;
            auVar26._0_4_ = local_110;
            auVar26._8_4_ = local_108;
            auVar26._12_4_ = uStack_104;
            local_c8 = local_f8;
          }
          else {
            if (bVar5 != 1) goto LAB_02fba8d8;
            local_d0 = local_130[0];
            auVar30._4_4_ = fStack_14c;
            auVar30._0_4_ = local_150;
            auVar30._8_4_ = fStack_148;
            auVar30._12_4_ = fStack_144;
            auVar26._4_4_ = fStack_13c;
            auVar26._0_4_ = local_140;
            auVar26._8_4_ = local_138;
            auVar26._12_4_ = fStack_134;
            local_c8 = local_128;
          }
          lStack_e8 = auVar30._8_8_;
          local_f0 = auVar30._0_8_;
          uStack_d8 = auVar26._8_8_;
          local_e0 = auVar26._0_8_;
        }
        bVar5 = local_c8[3];
      }
      lVar14 = *(long *)(param_3 + 0xa8);
      if (lVar14 == 0) {
LAB_02fba7a4:
        lVar23 = *(long *)(param_3 + 0x50);
        lVar20 = (long)(param_1 + 8) + (ulong)CONCAT11(bVar5,local_c8[4]) * 0x60 + param_1[8];
        lVar21 = *(long *)(lVar23 + 0x40);
        lVar14 = lVar21 + lVar23 + 0x40;
        lVar2 = 0;
        if (lVar21 != 0) {
          lVar2 = lVar14;
        }
        iVar18 = (int)(lVar20 - lVar2 >> 5) * -0x55555555;
        if ((*(int *)(param_3 + 0x94) != iVar18) || (*(int *)(param_3 + 0x98) != iVar18)) {
          lVar14 = lVar14 + (long)iVar18 * 0x60;
          *(long *)(param_3 + 0x60) = lVar14;
          *(int *)(param_3 + 0x94) = iVar18;
          *(int *)(param_3 + 0x98) = iVar18;
          lVar21 = *(long *)(lVar23 + 0x70);
          lVar2 = 0;
          if (lVar21 != 0) {
            lVar2 = lVar21 + lVar23 + 0x70;
          }
          *(ulong *)(param_3 + 0x70) = lVar2 + (ulong)*(uint *)(lVar14 + 0x48) * 4;
          lVar21 = *(long *)(lVar23 + 0x80);
          lVar2 = 0;
          if (lVar21 != 0) {
            lVar2 = lVar21 + lVar23 + 0x80;
          }
          *(ulong *)(param_3 + 0x78) = lVar2 + (ulong)*(byte *)(lVar14 + 0x5b) * 0x80000;
          lVar21 = *(long *)(lVar23 + 0x60);
          lVar2 = 0;
          if (lVar21 != 0) {
            lVar2 = lVar21 + lVar23 + 0x60;
          }
          lVar2 = lVar2 + (ulong)*(uint *)(lVar14 + 0x4c) * 2;
          *(long *)(param_3 + 0x80) = lVar2;
          lVar22 = *(long *)(lVar23 + 0x90);
          lVar21 = 0;
          if (lVar22 != 0) {
            lVar21 = lVar22 + lVar23 + 0x90;
          }
          *(ulong *)(param_3 + 0x88) = lVar21 + (ulong)*(uint *)(lVar14 + 0x54) * 4;
          *(uint *)(param_3 + 0x90) = (uint)*(byte *)(lVar14 + 0x58);
          lVar22 = *(long *)(lVar23 + 0x50);
          lVar21 = 0;
          if (lVar22 != 0) {
            lVar21 = lVar22 + lVar23 + 0x50;
          }
          *(ulong *)(param_3 + 0x68) = lVar21 + (ulong)*(uint *)(lVar14 + 0x50) * 4;
          uVar27 = *(undefined8 *)(lVar14 + 0x30);
          *(undefined8 *)(param_3 + 0x38) = *(undefined8 *)(lVar14 + 0x38);
          *(undefined8 *)(param_3 + 0x30) = uVar27;
          auVar10 = *(undefined1 (*) [12])(lVar14 + 0x3c);
          *(ulong *)(param_3 + 0x48) = (ulong)auVar10._8_4_;
          *(long *)(param_3 + 0x40) = auVar10._0_8_;
          *(ulong *)(param_3 + 0x80) = lVar2 + (ulong)*(byte *)(lVar14 + 0x58) * -2;
        }
        FUN_02fba90c(lVar20,param_2,param_3);
      }
      else {
        lVar20 = *(long *)(lVar14 + 0x20);
        lVar2 = 0;
        if (lVar20 != 0) {
          lVar2 = lVar20 + lVar14 + 0x20;
        }
        lVar23 = *(long *)(lVar2 + 0x48);
        lVar20 = 0;
        if (lVar23 != 0) {
          lVar20 = lVar23 + lVar2 + 0x48;
        }
        uVar4 = local_d0 + 0x1f;
        if (-1 < (int)local_d0) {
          uVar4 = local_d0;
        }
        if ((1 << (ulong)(local_d0 & 0x1f) &
            *(uint *)(lVar14 + 0x28 +
                     (long)((int)uVar4 >> 5) * 4 +
                     (long)(*(int *)(lVar20 + 0x68) << 3) * 4 + *(long *)(lVar14 + 0x28))) != 0)
        goto LAB_02fba7a4;
      }
LAB_02fba8d8:
      if ((int)lVar12 < (int)param_2[1]) {
        iVar18 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar18;
        plVar16 = (long *)(*param_2 + (long)iVar18 * 0x30);
        local_d0 = *(uint *)(plVar16 + 4);
        local_c8 = (byte *)((long)param_1 + (long)(int)plVar16[4] * 5 + *param_1);
        local_f0 = *plVar16;
        lStack_e8 = plVar16[1];
        uStack_d8 = SUB168(*(undefined1 (*) [16])(plVar16 + 2),8);
        local_e0 = SUB168(*(undefined1 (*) [16])(plVar16 + 2),0);
        bVar5 = local_c8[3];
        goto joined_r0x02fba390;
      }
    }
  }
  return;
}


