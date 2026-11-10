/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001a9504; name: FUN_001a9504
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_001a9504(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  byte bVar9;
  undefined1 auVar10 [16];
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  float fVar17;
  float fVar18;
  long lVar19;
  long lVar20;
  undefined4 uVar21;
  uint uVar22;
  ulong uVar23;
  ulong *puVar24;
  byte *pbVar25;
  ulong uVar26;
  int iVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  ulong uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  float fVar52;
  undefined8 uVar53;
  float fVar54;
  float fVar55;
  undefined8 uVar56;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
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
  float local_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  byte *local_88;
  
  if ((int)param_1[1] != 0) {
    uVar53 = *(undefined8 *)(PTR_DAT_04372370 + 0x50);
    uStack_d8 = param_1[3];
    uVar33 = param_1[2];
    local_c8 = param_1[5];
    uVar34 = param_1[4];
    auVar40._0_4_ = ((float)uVar33 - *(float *)(param_3 + 2)) * *(float *)(param_3 + 6);
    auVar40._4_4_ =
         ((float)(uVar33 >> 0x20) - *(float *)((long)param_3 + 0x14)) *
         *(float *)((long)param_3 + 0x34);
    auVar40._8_4_ = ((float)uStack_d8 - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7);
    auVar40._12_4_ =
         ((float)(uStack_d8 >> 0x20) - *(float *)((long)param_3 + 0x1c)) *
         *(float *)((long)param_3 + 0x3c);
    auVar35._0_4_ = *(float *)(param_3 + 6) * ((float)uVar34 - *(float *)(param_3 + 2));
    auVar35._4_4_ =
         *(float *)((long)param_3 + 0x34) *
         ((float)(uVar34 >> 0x20) - *(float *)((long)param_3 + 0x14));
    auVar35._8_4_ = *(float *)(param_3 + 7) * ((float)local_c8 - *(float *)(param_3 + 3));
    auVar35._12_4_ =
         *(float *)((long)param_3 + 0x3c) *
         ((float)(local_c8 >> 0x20) - *(float *)((long)param_3 + 0x1c));
    auVar42 = NEON_fmin(auVar40,auVar35,4);
    auVar35 = NEON_fmax(auVar40,auVar35,4);
    uVar38 = NEON_fmaxp(auVar42._0_8_,auVar42._0_8_,4);
    uVar39 = NEON_fmax(CONCAT44(auVar42._8_4_,auVar42._8_4_),uVar38,4);
    uVar38 = NEON_fminp(auVar35._0_8_,auVar35._0_8_,4);
    uVar38 = NEON_fmin(CONCAT44(auVar35._8_4_,auVar35._8_4_),uVar38,4);
    uVar39 = NEON_fmax(uVar39,uVar53,4);
    uVar38 = NEON_fmin(uVar38,*(undefined8 *)(*(long *)(*param_3 + 0xd8) + 0x10),4);
    if ((float)uVar39 <= (float)uVar38) {
      auVar35 = *(undefined1 (*) [16])(PTR_DAT_04372370 + 0x1e0);
      lVar19 = param_2[1];
      uVar38 = *(undefined8 *)PTR_PTR_04372408;
      auVar40 = NEON_ext(auVar35,auVar35,8,1);
      auVar35 = NEON_ext(auVar40,auVar35,8,1);
      uVar23 = 0;
      pbVar25 = (byte *)(*param_1 + (long)param_1);
      bVar9 = pbVar25[3];
joined_r0x001a9600:
      while (uVar21 = (undefined4)uVar23, (char)bVar9 < '\0') {
        uVar23 = (long)(int)uVar21 + 1;
        local_f0 = auVar35._0_4_;
        fStack_ec = auVar35._4_4_;
        fStack_e8 = auVar35._8_4_;
        local_a0 = (float)uVar34;
        local_b0 = (float)uVar33;
        fStack_9c = (float)(uVar34 >> 0x20);
        fStack_ac = (float)(uVar33 >> 0x20);
        fStack_98 = (float)local_c8;
        fStack_a8 = (float)uStack_d8;
        local_c0._0_4_ = (int)uVar23;
        local_f0 = (local_a0 - local_b0) * local_f0;
        fStack_ec = (fStack_9c - fStack_ac) * fStack_ec;
        fStack_e8 = (fStack_98 - fStack_a8) * fStack_e8;
        uVar26 = (long)(int)uVar21 + (ulong)((uint)pbVar25[4] | (pbVar25[3] & 0x7f) << 8) * 2;
        local_90 = (int)uVar26;
        local_b8 = (byte *)((long)param_1 + uVar23 * 5 + *param_1);
        pbVar25 = (byte *)((long)param_1 + uVar26 * 5 + *param_1);
        local_88 = pbVar25;
        bVar11 = *local_b8 >> 4;
        bVar9 = *local_b8 & 0xf;
        bVar12 = local_b8[1] >> 4;
        bVar3 = local_b8[1] & 0xf;
        bVar13 = local_b8[2] >> 4;
        bVar4 = local_b8[2] & 0xf;
        bVar14 = *pbVar25 >> 4;
        bVar5 = *pbVar25 & 0xf;
        bVar15 = pbVar25[1] >> 4;
        bVar16 = pbVar25[2] >> 4;
        bVar6 = pbVar25[1] & 0xf;
        bVar7 = pbVar25[2] & 0xf;
        fVar37 = local_b0 + (float)(byte)(bVar11 * bVar11) * local_f0;
        fVar44 = fStack_ac + (float)(byte)(bVar12 * bVar12) * fStack_ec;
        local_e0 = CONCAT44(fVar44,fVar37);
        fVar45 = fStack_a8 + (float)(byte)(bVar13 * bVar13) * fStack_e8;
        uStack_d8 = (ulong)(uint)fVar45;
        fVar46 = local_a0 - (float)(byte)(bVar9 * bVar9) * local_f0;
        fVar52 = fStack_9c - (float)(byte)(bVar3 * bVar3) * fStack_ec;
        local_d0 = CONCAT44(fVar52,fVar46);
        fVar47 = fStack_98 - (float)(byte)(bVar4 * bVar4) * fStack_e8;
        local_c8 = (ulong)(uint)fVar47;
        uStack_a4 = 0;
        uStack_94 = 0;
        local_b0 = local_b0 + (float)(byte)(bVar14 * bVar14) * local_f0;
        fStack_ac = fStack_ac + (float)(byte)(bVar15 * bVar15) * fStack_ec;
        fStack_a8 = fStack_a8 + (float)(byte)(bVar16 * bVar16) * fStack_e8;
        local_a0 = local_a0 - (float)(byte)(bVar5 * bVar5) * local_f0;
        fStack_9c = fStack_9c - (float)(byte)(bVar6 * bVar6) * fStack_ec;
        fStack_98 = fStack_98 - (float)(byte)(bVar7 * bVar7) * fStack_e8;
        fVar49 = *(float *)(param_3 + 2);
        fVar55 = *(float *)((long)param_3 + 0x14);
        fVar17 = *(float *)(param_3 + 3);
        fVar18 = *(float *)((long)param_3 + 0x1c);
        fVar48 = (float)param_3[6];
        auVar36._0_4_ = (fVar37 - fVar49) * fVar48;
        fVar37 = (float)((ulong)param_3[6] >> 0x20);
        auVar36._4_4_ = (fVar44 - fVar55) * fVar37;
        fVar44 = (float)param_3[7];
        auVar36._8_4_ = (fVar45 - fVar17) * fVar44;
        fVar45 = (float)((ulong)param_3[7] >> 0x20);
        auVar36._12_4_ = (0.0 - fVar18) * fVar45;
        auVar41._0_4_ = fVar48 * (fVar46 - fVar49);
        auVar41._4_4_ = fVar37 * (fVar52 - fVar55);
        auVar41._8_4_ = fVar44 * (fVar47 - fVar17);
        auVar41._12_4_ = fVar45 * (0.0 - fVar18);
        auVar42 = NEON_fmin(auVar36,auVar41,4);
        auVar40 = NEON_fmax(auVar36,auVar41,4);
        uVar39 = NEON_fmaxp(auVar42._0_8_,auVar42._0_8_,4);
        uVar50 = NEON_fmax(CONCAT44(auVar42._8_4_,auVar42._8_4_),uVar39,4);
        uVar39 = NEON_fminp(auVar40._0_8_,auVar40._0_8_,4);
        uVar39 = NEON_fmin(CONCAT44(auVar40._8_4_,auVar40._8_4_),uVar39,4);
        uVar56 = NEON_fmax(uVar50,uVar53,4);
        uVar33 = CONCAT44(fStack_ac,local_b0);
        uVar34 = CONCAT44(fStack_9c,local_a0);
        fVar46 = fVar48 * (local_b0 - fVar49);
        fVar47 = fVar37 * (fStack_ac - fVar55);
        fVar52 = fVar44 * (fStack_a8 - fVar17);
        fVar54 = fVar45 * (0.0 - fVar18);
        auVar43._0_4_ = fVar48 * (local_a0 - fVar49);
        auVar43._4_4_ = fVar37 * (fStack_9c - fVar55);
        auVar43._8_4_ = fVar44 * (fStack_98 - fVar17);
        auVar43._12_4_ = fVar45 * (0.0 - fVar18);
        uVar50 = *(undefined8 *)(*(long *)(*param_3 + 0xd8) + 0x10);
        uVar51 = NEON_fmin(uVar39,uVar50,4);
        fVar55 = (float)uVar56;
        auVar42._4_4_ = fVar47;
        auVar42._0_4_ = fVar46;
        auVar42._8_4_ = fVar52;
        auVar42._12_4_ = fVar54;
        auVar42 = NEON_fmin(auVar42,auVar43,4);
        uVar39 = NEON_fmaxp(auVar42._0_8_,auVar42._0_8_,4);
        auVar10._4_4_ = fVar47;
        auVar10._0_4_ = fVar46;
        auVar10._8_4_ = fVar52;
        auVar10._12_4_ = fVar54;
        auVar40 = NEON_fmax(auVar10,auVar43,4);
        uVar56 = NEON_fmax(CONCAT44(auVar42._8_4_,auVar42._8_4_),uVar39,4);
        uVar39 = NEON_fminp(auVar40._0_8_,auVar40._0_8_,4);
        uVar39 = NEON_fmin(CONCAT44(auVar40._8_4_,auVar40._8_4_),uVar39,4);
        uVar56 = NEON_fmax(uVar56,uVar53,4);
        fVar49 = (float)uVar56;
        uVar39 = NEON_fmin(uVar39,uVar50,4);
        bVar9 = fVar55 <= (float)uVar51 | (fVar49 <= (float)uVar39) << 1;
        if (bVar9 == 1) {
          bVar9 = local_b8[3];
          pbVar25 = local_b8;
          uVar34 = local_d0;
          uVar33 = local_e0;
        }
        else if (bVar9 == 2) {
          uVar23 = uVar26 & 0xffffffff;
          local_c8 = (ulong)(uint)fStack_98;
          uStack_d8 = (ulong)(uint)fStack_a8;
          bVar9 = pbVar25[3];
        }
        else {
          if (bVar9 != 3) goto LAB_001a9b20;
          *(uint *)(param_3 + 8) = (uint)(fVar49 < fVar55);
          iVar27 = (int)param_2[1];
          uVar22 = *(uint *)((long)param_2 + 0xc);
          uVar33 = (ulong)(fVar49 >= fVar55);
          uVar1 = iVar27 + 1;
          if (iVar27 < (int)(uVar22 & 0x3fffffff)) {
            lVar20 = *param_2;
          }
          else {
            lVar20 = *param_2;
            if (0x3ffffffe < iVar27) {
              FUN_032bd0a8(uVar1);
              uVar22 = *(uint *)((long)param_2 + 0xc);
            }
            uVar22 = (uVar22 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar22) {
              uVar22 = 0x3fffffff;
            }
            uVar8 = uVar1;
            if ((int)uVar1 <= (int)uVar22) {
              uVar8 = uVar22;
            }
            lVar20 = FUN_032bd1d4(uVar38,uVar8,0x30,lVar20,iVar27,(uint *)((long)param_2 + 0xc));
            *param_2 = lVar20;
            iVar27 = (int)param_2[1];
          }
          *(uint *)(param_2 + 1) = uVar1;
          uVar34 = (&local_c0)[uVar33 * 6 + -4];
          puVar24 = (ulong *)(lVar20 + (long)iVar27 * 0x30);
          uVar26 = (ulong)(fVar49 < fVar55);
          puVar24[1] = (&local_c0)[uVar33 * 6 + -3];
          *puVar24 = uVar34;
          uVar34 = (&local_c0)[uVar33 * 6 + -2];
          puVar24[3] = (&local_c0)[uVar33 * 6 + -1];
          puVar24[2] = uVar34;
          *(int *)(puVar24 + 4) = (int)(&local_c0)[uVar33 * 6];
          uStack_d8 = (&local_c0)[uVar26 * 6 + -3];
          uVar33 = (&local_c0)[uVar26 * 6 + -4];
          local_c8 = (&local_c0)[uVar26 * 6 + -1];
          uVar34 = (&local_c0)[uVar26 * 6 + -2];
          uVar23 = (ulong)(uint)(&local_c0)[uVar26 * 6];
          pbVar25 = (byte *)(&local_c0)[uVar26 * 6 + 1];
          bVar9 = pbVar25[3];
        }
      }
      lVar20 = *param_3;
      lVar28 = *(long *)(lVar20 + 0xa8);
      if (lVar28 != 0) {
        lVar31 = *(long *)(lVar28 + 0x20);
        lVar2 = 0;
        if (lVar31 != 0) {
          lVar2 = lVar31 + lVar28 + 0x20;
        }
        lVar32 = *(long *)(lVar2 + 0x48);
        lVar31 = 0;
        if (lVar32 != 0) {
          lVar31 = lVar32 + lVar2 + 0x48;
        }
        uVar1 = uVar21 + 0x1f;
        if (-1 < (int)uVar21) {
          uVar1 = uVar21;
        }
        if ((*(uint *)(lVar28 + 0x28 +
                      (long)((int)uVar1 >> 5) * 4 +
                      (long)(*(int *)(lVar31 + 0x68) << 3) * 4 + *(long *)(lVar28 + 0x28)) &
            1 << (ulong)(uVar21 & 0x1f)) == 0) goto LAB_001a9b20;
      }
      lVar32 = *(long *)(lVar20 + 0x50);
      lVar31 = (long)(param_1 + 8) + (ulong)CONCAT11(bVar9,pbVar25[4]) * 0x60 + param_1[8];
      lVar29 = *(long *)(lVar32 + 0x40);
      lVar28 = lVar29 + lVar32 + 0x40;
      lVar2 = 0;
      if (lVar29 != 0) {
        lVar2 = lVar28;
      }
      iVar27 = (int)(lVar31 - lVar2 >> 5) * -0x55555555;
      if ((*(int *)(lVar20 + 0x94) != iVar27) || (*(int *)(lVar20 + 0x98) != iVar27)) {
        lVar28 = lVar28 + (long)iVar27 * 0x60;
        *(long *)(lVar20 + 0x60) = lVar28;
        *(int *)(lVar20 + 0x94) = iVar27;
        *(int *)(lVar20 + 0x98) = iVar27;
        lVar29 = *(long *)(lVar32 + 0x70);
        lVar2 = 0;
        if (lVar29 != 0) {
          lVar2 = lVar29 + lVar32 + 0x70;
        }
        *(ulong *)(lVar20 + 0x70) = lVar2 + (ulong)*(uint *)(lVar28 + 0x48) * 4;
        lVar29 = *(long *)(lVar32 + 0x80);
        lVar2 = 0;
        if (lVar29 != 0) {
          lVar2 = lVar29 + lVar32 + 0x80;
        }
        *(ulong *)(lVar20 + 0x78) = lVar2 + (ulong)*(byte *)(lVar28 + 0x5b) * 0x80000;
        lVar29 = *(long *)(lVar32 + 0x60);
        lVar2 = 0;
        if (lVar29 != 0) {
          lVar2 = lVar29 + lVar32 + 0x60;
        }
        lVar2 = lVar2 + (ulong)*(uint *)(lVar28 + 0x4c) * 2;
        *(long *)(lVar20 + 0x80) = lVar2;
        lVar30 = *(long *)(lVar32 + 0x90);
        lVar29 = 0;
        if (lVar30 != 0) {
          lVar29 = lVar30 + lVar32 + 0x90;
        }
        *(ulong *)(lVar20 + 0x88) = lVar29 + (ulong)*(uint *)(lVar28 + 0x54) * 4;
        *(uint *)(lVar20 + 0x90) = (uint)*(byte *)(lVar28 + 0x58);
        lVar30 = *(long *)(lVar32 + 0x50);
        lVar29 = 0;
        if (lVar30 != 0) {
          lVar29 = lVar30 + lVar32 + 0x50;
        }
        *(ulong *)(lVar20 + 0x68) = lVar29 + (ulong)*(uint *)(lVar28 + 0x50) * 4;
        uVar39 = *(undefined8 *)(lVar28 + 0x30);
        *(undefined8 *)(lVar20 + 0x38) = *(undefined8 *)(lVar28 + 0x38);
        *(undefined8 *)(lVar20 + 0x30) = uVar39;
        uVar39 = *(undefined8 *)(lVar28 + 0x3c);
        *(ulong *)(lVar20 + 0x48) = (ulong)*(uint *)(lVar28 + 0x44);
        *(undefined8 *)(lVar20 + 0x40) = uVar39;
        *(ulong *)(lVar20 + 0x80) = lVar2 + (ulong)*(byte *)(lVar28 + 0x58) * -2;
      }
      FUN_001a9b84(lVar31,param_2,param_3);
LAB_001a9b20:
      if ((int)lVar19 < (int)param_2[1]) {
        iVar27 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar27;
        puVar24 = (ulong *)(*param_2 + (long)iVar27 * 0x30);
        uVar23 = (ulong)(int)puVar24[4];
        uStack_d8 = puVar24[1];
        uVar33 = *puVar24;
        local_c8 = puVar24[3];
        uVar34 = puVar24[2];
        pbVar25 = (byte *)((long)param_1 + uVar23 * 5 + *param_1);
        bVar9 = pbVar25[3];
        goto joined_r0x001a9600;
      }
    }
  }
  return;
}


