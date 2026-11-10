/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0019f984; name: FUN_0019f984
 */


void FUN_0019f984(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [16];
  long lVar13;
  undefined *puVar14;
  uint uVar15;
  undefined8 *puVar16;
  long *plVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar35;
  undefined1 auVar28 [16];
  float fVar34;
  undefined8 uVar26;
  float fVar36;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 uVar27;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined8 uVar49;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float local_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  uint local_110;
  byte *local_108;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  undefined4 uStack_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  undefined4 uStack_e4;
  uint local_e0;
  byte *local_d8;
  long local_d0;
  long lStack_c8;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  uint local_b0;
  byte *local_a8;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  puVar14 = PTR_DAT_04372370;
  if ((int)param_1[1] != 0) {
    lVar13 = param_2[1];
    lVar2 = param_3 + 0x140;
    local_d0 = param_1[2];
    lStack_c8 = param_1[3];
    uVar49 = *(undefined8 *)(PTR_DAT_04372370 + 0x50);
    fStack_b8 = (float)param_1[5];
    fStack_b4 = (float)((ulong)param_1[5] >> 0x20);
    local_c0 = (float)param_1[4];
    fStack_bc = (float)((ulong)param_1[4] >> 0x20);
    auVar28 = *(undefined1 (*) [16])(PTR_DAT_04372370 + 0x150);
    local_b0 = 0;
    auVar37 = NEON_ext(auVar28,auVar28,8,1);
    local_a8 = (byte *)(*param_1 + (long)param_1);
    auVar28 = NEON_ext(auVar37,auVar28,8,1);
    uVar25 = NEON_fmax(uVar49,*(undefined8 *)(*(long *)(param_3 + 0x138) + 0x10),4);
    FUN_0333e220(lVar2,&local_d0,&local_130);
    fVar45 = auVar28._0_4_;
    auVar42._0_4_ = (*(float *)(param_3 + 0x180) + *(float *)(param_3 + 400)) * fVar45;
    fVar46 = auVar28._4_4_;
    auVar42._4_4_ = (*(float *)(param_3 + 0x184) + *(float *)(param_3 + 0x194)) * fVar46;
    fVar47 = auVar28._8_4_;
    auVar42._8_4_ = (*(float *)(param_3 + 0x188) + *(float *)(param_3 + 0x198)) * fVar47;
    fVar48 = auVar28._12_4_;
    auVar42._12_4_ = (*(float *)(param_3 + 0x18c) + *(float *)(param_3 + 0x19c)) * fVar48;
    fVar24 = (*(float *)(param_3 + 400) - *(float *)(param_3 + 0x180)) * fVar45;
    fVar34 = (*(float *)(param_3 + 0x194) - *(float *)(param_3 + 0x184)) * fVar46;
    fVar35 = (*(float *)(param_3 + 0x198) - *(float *)(param_3 + 0x188)) * fVar47;
    fVar36 = (*(float *)(param_3 + 0x19c) - *(float *)(param_3 + 0x18c)) * fVar48;
    auVar39._0_4_ = local_130 - fVar24;
    auVar39._4_4_ = fStack_12c - fVar34;
    auVar39._8_4_ = fStack_128 - fVar35;
    auVar39._12_4_ = fStack_124 - fVar36;
    auVar28._0_4_ = local_120 + fVar24;
    auVar28._4_4_ = fStack_11c + fVar34;
    auVar28._8_4_ = local_118 + fVar35;
    auVar28._12_4_ = fStack_114 + fVar36;
    auVar37 = NEON_fmax(auVar39,auVar42,4);
    auVar28 = NEON_fmin(auVar28,auVar37,4);
    fVar24 = auVar42._0_4_ - auVar28._0_4_;
    fVar34 = auVar42._4_4_ - auVar28._4_4_;
    fVar35 = auVar42._8_4_ - auVar28._8_4_;
    fVar36 = auVar42._12_4_ - auVar28._12_4_;
    auVar37._0_4_ = fVar24 * fVar24;
    auVar37._4_4_ = fVar34 * fVar34;
    auVar37._8_4_ = fVar35 * fVar35;
    auVar37._12_4_ = fVar36 * fVar36;
    auVar28 = NEON_ext(auVar37,auVar37,8,1);
    if (auVar37._0_4_ + auVar37._4_4_ + auVar28._0_4_ <= (float)uVar25 * (float)uVar25) {
      auVar28 = *(undefined1 (*) [16])(puVar14 + 0x1e0);
      auVar37 = NEON_ext(auVar28,auVar28,8,1);
      uVar25 = *(undefined8 *)PTR_PTR_04372408;
      auVar28 = NEON_ext(auVar37,auVar28,8,1);
      bVar5 = local_a8[3];
joined_r0x0019fac0:
      while ((char)bVar5 < '\0') {
        lVar3 = (long)(int)local_b0 + 1;
        local_100 = (float)local_d0;
        fStack_fc = (float)((ulong)local_d0 >> 0x20);
        fStack_f8 = (float)lStack_c8;
        local_110 = (uint)lVar3;
        lVar19 = (long)(int)local_b0 + (ulong)((uint)local_a8[4] | (local_a8[3] & 0x7f) << 8) * 2;
        local_e0 = (uint)lVar19;
        local_108 = (byte *)((long)param_1 + lVar3 * 5 + *param_1);
        local_d8 = (byte *)((long)param_1 + lVar19 * 5 + *param_1);
        bVar6 = local_108[1] >> 4;
        bVar7 = *local_108 >> 4;
        bVar5 = *local_108 & 0xf;
        fVar24 = (local_c0 - local_100) * auVar28._0_4_;
        fVar34 = (fStack_bc - fStack_fc) * auVar28._4_4_;
        fVar35 = (fStack_b8 - fStack_f8) * auVar28._8_4_;
        bVar8 = local_108[2] >> 4;
        fStack_128 = (float)(byte)(bVar8 * bVar8) * fVar35 + fStack_f8;
        bVar8 = local_108[1] & 0xf;
        fStack_124 = 0.0;
        local_130 = (float)(byte)(bVar7 * bVar7) * fVar24 + local_100;
        bVar9 = local_d8[2] >> 4;
        fStack_114 = 0.0;
        bVar7 = local_d8[2] & 0xf;
        fStack_12c = (float)(byte)(bVar6 * bVar6) * fVar34 + fStack_fc;
        bVar10 = local_d8[1] >> 4;
        bVar6 = local_d8[1] & 0xf;
        local_120 = local_c0 - (float)(byte)(bVar5 * bVar5) * fVar24;
        fStack_11c = fStack_bc - (float)(byte)(bVar8 * bVar8) * fVar34;
        bVar5 = local_108[2] & 0xf;
        local_118 = fStack_b8 - (float)(byte)(bVar5 * bVar5) * fVar35;
        bVar8 = *local_d8 >> 4;
        bVar5 = *local_d8 & 0xf;
        uStack_f4 = 0;
        local_100 = local_100 + (float)(byte)(bVar8 * bVar8) * fVar24;
        fStack_fc = (float)(byte)(bVar10 * bVar10) * fVar34 + fStack_fc;
        uStack_e4 = 0;
        fStack_f8 = (float)(byte)(bVar9 * bVar9) * fVar35 + fStack_f8;
        local_f0 = local_c0 - (float)(byte)(bVar5 * bVar5) * fVar24;
        fStack_ec = fStack_bc - (float)(byte)(bVar6 * bVar6) * fVar34;
        fStack_e8 = fStack_b8 - (float)(byte)(bVar7 * bVar7) * fVar35;
        uVar26 = NEON_fmax(uVar49,*(undefined8 *)(*(long *)(param_3 + 0x138) + 0x10),4);
        FUN_0333e220(lVar2,&local_130,&local_a0);
        auVar38._0_4_ = fVar45 * (*(float *)(param_3 + 0x180) + *(float *)(param_3 + 400));
        auVar38._4_4_ = fVar46 * (*(float *)(param_3 + 0x184) + *(float *)(param_3 + 0x194));
        auVar38._8_4_ = fVar47 * (*(float *)(param_3 + 0x188) + *(float *)(param_3 + 0x198));
        auVar38._12_4_ = fVar48 * (*(float *)(param_3 + 0x18c) + *(float *)(param_3 + 0x19c));
        fVar24 = fVar45 * (*(float *)(param_3 + 400) - *(float *)(param_3 + 0x180));
        fVar34 = fVar46 * (*(float *)(param_3 + 0x194) - *(float *)(param_3 + 0x184));
        fVar35 = fVar47 * (*(float *)(param_3 + 0x198) - *(float *)(param_3 + 0x188));
        fVar36 = fVar48 * (*(float *)(param_3 + 0x19c) - *(float *)(param_3 + 0x18c));
        auVar43._0_4_ = local_a0 - fVar24;
        auVar43._4_4_ = fStack_9c - fVar34;
        auVar43._8_4_ = fStack_98 - fVar35;
        auVar43._12_4_ = fStack_94 - fVar36;
        auVar29._0_4_ = (float)uStack_90 + fVar24;
        auVar29._4_4_ = (float)((ulong)uStack_90 >> 0x20) + fVar34;
        auVar29._8_4_ = (float)uStack_88 + fVar35;
        auVar29._12_4_ = (float)((ulong)uStack_88 >> 0x20) + fVar36;
        auVar37 = NEON_fmax(auVar43,auVar38,4);
        auVar37 = NEON_fmin(auVar29,auVar37,4);
        fVar24 = auVar38._0_4_ - auVar37._0_4_;
        fVar34 = auVar38._4_4_ - auVar37._4_4_;
        fVar35 = auVar38._8_4_ - auVar37._8_4_;
        fVar36 = auVar38._12_4_ - auVar37._12_4_;
        auVar30._0_4_ = fVar24 * fVar24;
        auVar30._4_4_ = fVar34 * fVar34;
        auVar30._8_4_ = fVar35 * fVar35;
        auVar30._12_4_ = fVar36 * fVar36;
        auVar39 = NEON_ext(auVar30,auVar30,8,1);
        uVar27 = NEON_fmax(uVar49,*(undefined8 *)(*(long *)(param_3 + 0x138) + 0x10),4);
        FUN_0333e220(lVar2,&local_100,&local_a0);
        auVar44._0_4_ = fVar45 * (*(float *)(param_3 + 0x180) + *(float *)(param_3 + 400));
        auVar44._4_4_ = fVar46 * (*(float *)(param_3 + 0x184) + *(float *)(param_3 + 0x194));
        auVar44._8_4_ = fVar47 * (*(float *)(param_3 + 0x188) + *(float *)(param_3 + 0x198));
        auVar44._12_4_ = fVar48 * (*(float *)(param_3 + 0x18c) + *(float *)(param_3 + 0x19c));
        fVar24 = fVar45 * (*(float *)(param_3 + 400) - *(float *)(param_3 + 0x180));
        fVar34 = fVar46 * (*(float *)(param_3 + 0x194) - *(float *)(param_3 + 0x184));
        fVar35 = fVar47 * (*(float *)(param_3 + 0x198) - *(float *)(param_3 + 0x188));
        fVar36 = fVar48 * (*(float *)(param_3 + 0x19c) - *(float *)(param_3 + 0x18c));
        auVar40._0_4_ = local_a0 - fVar24;
        auVar40._4_4_ = fStack_9c - fVar34;
        auVar40._8_4_ = fStack_98 - fVar35;
        auVar40._12_4_ = fStack_94 - fVar36;
        auVar31._0_4_ = (float)uStack_90 + fVar24;
        auVar31._4_4_ = (float)((ulong)uStack_90 >> 0x20) + fVar34;
        auVar31._8_4_ = (float)uStack_88 + fVar35;
        auVar31._12_4_ = (float)((ulong)uStack_88 >> 0x20) + fVar36;
        auVar37 = NEON_fmax(auVar40,auVar44,4);
        auVar37 = NEON_fmin(auVar31,auVar37,4);
        fVar24 = auVar44._0_4_ - auVar37._0_4_;
        fVar34 = auVar44._4_4_ - auVar37._4_4_;
        fVar35 = auVar44._8_4_ - auVar37._8_4_;
        fVar36 = auVar44._12_4_ - auVar37._12_4_;
        auVar32._0_4_ = fVar24 * fVar24;
        auVar32._4_4_ = fVar34 * fVar34;
        auVar32._8_4_ = fVar35 * fVar35;
        auVar32._12_4_ = fVar36 * fVar36;
        auVar37 = NEON_ext(auVar32,auVar32,8,1);
        bVar5 = auVar30._0_4_ + auVar30._4_4_ + auVar39._0_4_ <= (float)uVar26 * (float)uVar26 |
                (auVar32._0_4_ + auVar32._4_4_ + auVar37._0_4_ <= (float)uVar27 * (float)uVar27) <<
                1;
        if (bVar5 == 3) {
          iVar18 = (int)param_2[1];
          uVar15 = *(uint *)((long)param_2 + 0xc);
          uVar1 = iVar18 + 1;
          if (iVar18 < (int)(uVar15 & 0x3fffffff)) {
            lVar19 = *param_2;
          }
          else {
            lVar19 = *param_2;
            if (0x3ffffffe < iVar18) {
              FUN_032bd0a8(uVar1);
              uVar15 = *(uint *)((long)param_2 + 0xc);
            }
            uVar15 = (uVar15 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar15) {
              uVar15 = 0x3fffffff;
            }
            uVar4 = uVar1;
            if ((int)uVar1 <= (int)uVar15) {
              uVar4 = uVar15;
            }
            lVar19 = FUN_032bd1d4(uVar25,uVar4,0x30,lVar19,iVar18,(uint *)((long)param_2 + 0xc));
            iVar18 = (int)param_2[1];
            *param_2 = lVar19;
          }
          *(uint *)(param_2 + 1) = uVar1;
          puVar16 = (undefined8 *)(lVar19 + (long)iVar18 * 0x30);
          puVar16[1] = CONCAT44(uStack_f4,fStack_f8);
          *puVar16 = CONCAT44(fStack_fc,local_100);
          puVar16[3] = CONCAT44(uStack_e4,fStack_e8);
          puVar16[2] = CONCAT44(fStack_ec,local_f0);
          *(uint *)(puVar16 + 4) = local_e0;
          local_d0 = CONCAT44(fStack_12c,local_130);
          auVar12._8_4_ = fStack_128;
          auVar12._0_8_ = local_d0;
          auVar12._12_4_ = fStack_124;
          lStack_c8 = auVar12._8_8_;
          bVar5 = local_108[3];
          local_c0 = local_120;
          fStack_bc = fStack_11c;
          fStack_b8 = local_118;
          fStack_b4 = fStack_114;
          local_b0 = local_110;
          local_a8 = local_108;
        }
        else {
          if (bVar5 != 2) {
            if (bVar5 == 1) {
              local_b0 = local_110;
              auVar41._4_4_ = fStack_12c;
              auVar41._0_4_ = local_130;
              auVar41._8_4_ = fStack_128;
              auVar41._12_4_ = fStack_124;
              auVar33._4_4_ = fStack_11c;
              auVar33._0_4_ = local_120;
              auVar33._8_4_ = local_118;
              auVar33._12_4_ = fStack_114;
              local_a8 = local_108;
              goto LAB_0019fd9c;
            }
            iVar18 = (int)param_2[1];
            goto joined_r0x0019ffb4;
          }
          local_b0 = local_e0;
          auVar41._4_4_ = fStack_fc;
          auVar41._0_4_ = local_100;
          auVar41._8_4_ = fStack_f8;
          auVar41._12_4_ = uStack_f4;
          auVar33._4_4_ = fStack_ec;
          auVar33._0_4_ = local_f0;
          auVar33._8_4_ = fStack_e8;
          auVar33._12_4_ = uStack_e4;
          local_a8 = local_d8;
LAB_0019fd9c:
          lStack_c8 = auVar41._8_8_;
          local_d0 = auVar41._0_8_;
          fStack_b8 = auVar33._8_4_;
          fStack_b4 = auVar33._12_4_;
          local_c0 = auVar33._0_4_;
          fStack_bc = auVar33._4_4_;
          bVar5 = local_a8[3];
        }
      }
      lVar19 = *(long *)(param_3 + 0xa8);
      if (lVar19 == 0) {
LAB_0019fe1c:
        lVar23 = *(long *)(param_3 + 0x50);
        lVar20 = (long)(param_1 + 8) + (ulong)CONCAT11(bVar5,local_a8[4]) * 0x60 + param_1[8];
        lVar21 = *(long *)(lVar23 + 0x40);
        lVar19 = lVar21 + lVar23 + 0x40;
        lVar3 = 0;
        if (lVar21 != 0) {
          lVar3 = lVar19;
        }
        iVar18 = (int)(lVar20 - lVar3 >> 5) * -0x55555555;
        if ((*(int *)(param_3 + 0x94) != iVar18) || (*(int *)(param_3 + 0x98) != iVar18)) {
          lVar19 = lVar19 + (long)iVar18 * 0x60;
          *(long *)(param_3 + 0x60) = lVar19;
          *(int *)(param_3 + 0x94) = iVar18;
          *(int *)(param_3 + 0x98) = iVar18;
          lVar21 = *(long *)(lVar23 + 0x70);
          lVar3 = 0;
          if (lVar21 != 0) {
            lVar3 = lVar21 + lVar23 + 0x70;
          }
          *(ulong *)(param_3 + 0x70) = lVar3 + (ulong)*(uint *)(lVar19 + 0x48) * 4;
          lVar21 = *(long *)(lVar23 + 0x80);
          lVar3 = 0;
          if (lVar21 != 0) {
            lVar3 = lVar21 + lVar23 + 0x80;
          }
          *(ulong *)(param_3 + 0x78) = lVar3 + (ulong)*(byte *)(lVar19 + 0x5b) * 0x80000;
          lVar21 = *(long *)(lVar23 + 0x60);
          lVar3 = 0;
          if (lVar21 != 0) {
            lVar3 = lVar21 + lVar23 + 0x60;
          }
          lVar3 = lVar3 + (ulong)*(uint *)(lVar19 + 0x4c) * 2;
          *(long *)(param_3 + 0x80) = lVar3;
          lVar22 = *(long *)(lVar23 + 0x90);
          lVar21 = 0;
          if (lVar22 != 0) {
            lVar21 = lVar22 + lVar23 + 0x90;
          }
          *(ulong *)(param_3 + 0x88) = lVar21 + (ulong)*(uint *)(lVar19 + 0x54) * 4;
          *(uint *)(param_3 + 0x90) = (uint)*(byte *)(lVar19 + 0x58);
          lVar22 = *(long *)(lVar23 + 0x50);
          lVar21 = 0;
          if (lVar22 != 0) {
            lVar21 = lVar22 + lVar23 + 0x50;
          }
          *(ulong *)(param_3 + 0x68) = lVar21 + (ulong)*(uint *)(lVar19 + 0x50) * 4;
          uVar26 = *(undefined8 *)(lVar19 + 0x30);
          *(undefined8 *)(param_3 + 0x38) = *(undefined8 *)(lVar19 + 0x38);
          *(undefined8 *)(param_3 + 0x30) = uVar26;
          auVar11 = *(undefined1 (*) [12])(lVar19 + 0x3c);
          *(ulong *)(param_3 + 0x48) = (ulong)auVar11._8_4_;
          *(long *)(param_3 + 0x40) = auVar11._0_8_;
          *(ulong *)(param_3 + 0x80) = lVar3 + (ulong)*(byte *)(lVar19 + 0x58) * -2;
        }
        FUN_001a00a0(lVar20,param_2,param_3);
      }
      else {
        lVar20 = *(long *)(lVar19 + 0x20);
        lVar3 = 0;
        if (lVar20 != 0) {
          lVar3 = lVar20 + lVar19 + 0x20;
        }
        lVar23 = *(long *)(lVar3 + 0x48);
        lVar20 = 0;
        if (lVar23 != 0) {
          lVar20 = lVar23 + lVar3 + 0x48;
        }
        uVar1 = local_b0 + 0x1f;
        if (-1 < (int)local_b0) {
          uVar1 = local_b0;
        }
        if ((1 << (ulong)(local_b0 & 0x1f) &
            *(uint *)(lVar19 + 0x28 +
                     (long)((int)uVar1 >> 5) * 4 +
                     (long)(*(int *)(lVar20 + 0x68) << 3) * 4 + *(long *)(lVar19 + 0x28))) != 0)
        goto LAB_0019fe1c;
      }
      iVar18 = (int)param_2[1];
joined_r0x0019ffb4:
      if ((int)lVar13 < iVar18) {
        *(int *)(param_2 + 1) = iVar18 + -1;
        plVar17 = (long *)(*param_2 + (long)(iVar18 + -1) * 0x30);
        local_b0 = *(uint *)(plVar17 + 4);
        local_a8 = (byte *)((long)param_1 + (long)(int)plVar17[4] * 5 + *param_1);
        local_d0 = *plVar17;
        lStack_c8 = plVar17[1];
        auVar37 = *(undefined1 (*) [16])(plVar17 + 2);
        fStack_b8 = auVar37._8_4_;
        fStack_b4 = auVar37._12_4_;
        local_c0 = auVar37._0_4_;
        fStack_bc = auVar37._4_4_;
        bVar5 = local_a8[3];
        goto joined_r0x0019fac0;
      }
    }
  }
  return;
}


