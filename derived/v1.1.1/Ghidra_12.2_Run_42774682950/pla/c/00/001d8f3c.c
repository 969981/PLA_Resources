/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001d8f3c; name: FUN_001d8f3c
 */


void FUN_001d8f3c(long *param_1,long *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 uVar36;
  undefined8 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined8 uVar41;
  undefined1 auVar42 [16];
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  float fVar46;
  float fVar47;
  undefined8 local_110;
  ulong uStack_108;
  undefined8 local_100;
  ulong local_f8;
  ulong local_f0;
  byte *local_e8;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  undefined4 uStack_c4;
  uint local_c0;
  byte *local_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  uint local_90;
  byte *local_88;
  
  if ((int)param_1[1] != 0) {
    uStack_a8 = param_1[3];
    local_b0 = param_1[2];
    uStack_98 = param_1[5];
    local_a0 = param_1[4];
    lVar13 = param_2[1];
    fVar23 = (float)local_b0;
    fVar24 = (float)(local_b0 >> 0x20);
    local_90 = 0;
    local_88 = (byte *)(*param_1 + (long)param_1);
    fVar28 = (float)local_a0;
    fVar25 = (float)(local_a0 >> 0x20);
    auVar42._0_4_ = (fVar23 - *(float *)(param_3 + 2)) * *(float *)(param_3 + 6);
    auVar42._4_4_ = (fVar24 - *(float *)((long)param_3 + 0x14)) * *(float *)((long)param_3 + 0x34);
    auVar42._8_4_ = ((float)uStack_a8 - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7);
    auVar42._12_4_ =
         ((float)(uStack_a8 >> 0x20) - *(float *)((long)param_3 + 0x1c)) *
         *(float *)((long)param_3 + 0x3c);
    auVar34._0_4_ = *(float *)(param_3 + 6) * (fVar28 - *(float *)(param_3 + 2));
    auVar34._4_4_ = *(float *)((long)param_3 + 0x34) * (fVar25 - *(float *)((long)param_3 + 0x14));
    auVar34._8_4_ = *(float *)(param_3 + 7) * ((float)uStack_98 - *(float *)(param_3 + 3));
    auVar34._12_4_ =
         *(float *)((long)param_3 + 0x3c) *
         ((float)(uStack_98 >> 0x20) - *(float *)((long)param_3 + 0x1c));
    uVar45 = *(undefined8 *)(PTR_DAT_04372370 + 0x50);
    auVar39 = NEON_fmin(auVar42,auVar34,4);
    auVar34 = NEON_fmax(auVar42,auVar34,4);
    uVar36 = NEON_fmaxp(auVar39._0_8_,auVar39._0_8_,4);
    uVar37 = NEON_fmax(CONCAT44(auVar39._8_4_,auVar39._8_4_),uVar36,4);
    uVar36 = NEON_fminp(auVar34._0_8_,auVar34._0_8_,4);
    uVar36 = NEON_fmin(CONCAT44(auVar34._8_4_,auVar34._8_4_),uVar36,4);
    uVar37 = NEON_fmax(uVar37,uVar45,4);
    uVar36 = NEON_fmin(uVar36,CONCAT44(*(undefined4 *)((long)param_3 + 0x2c),
                                       *(undefined4 *)((long)param_3 + 0x2c)),4);
    if ((float)uVar37 <= (float)uVar36) {
      auVar34 = *(undefined1 (*) [16])(PTR_DAT_04372370 + 0x1e0);
      uVar36 = *(undefined8 *)PTR_PTR_04372408;
      auVar42 = NEON_ext(auVar34,auVar34,8,1);
      auVar39 = ZEXT416((uint)fVar25);
      auVar34 = NEON_ext(auVar42,auVar34,8,1);
      auVar40 = ZEXT416((uint)fVar24);
      uVar19 = 0;
      if (-1 < (char)local_88[3]) goto LAB_001d907c;
      do {
        uVar17 = (long)(int)uVar19 + 1;
        local_f0._0_4_ = (uint)uVar17;
        fStack_d8 = (float)uStack_a8;
        fStack_c8 = (float)uStack_98;
        fVar24 = ((float)local_a0 - (float)local_b0) * auVar34._0_4_;
        fVar25 = ((float)(local_a0 >> 0x20) - (float)(local_b0 >> 0x20)) * auVar34._4_4_;
        fVar26 = (fStack_c8 - fStack_d8) * auVar34._8_4_;
        local_c0 = (int)uVar19 +
                   ((uint)*(ushort *)(local_88 + 4) | (local_88[3] & 0x7f) << 0x10) * 2;
        local_e8 = (byte *)((long)param_1 + uVar17 * 6 + *param_1);
        local_b8 = (byte *)((long)param_1 + (long)(int)local_c0 * 6 + *param_1);
        bVar6 = *local_e8 >> 4;
        bVar1 = *local_e8 & 0xf;
        bVar7 = local_e8[1] >> 4;
        bVar2 = local_e8[1] & 0xf;
        bVar8 = local_e8[2] >> 4;
        fVar29 = (float)(byte)(bVar6 * bVar6) * fVar24 + fVar23;
        fVar46 = (float)(byte)(bVar7 * bVar7) * fVar25 + auVar40._0_4_;
        bVar6 = local_e8[2] & 0xf;
        bVar9 = *local_b8 >> 4;
        bVar7 = *local_b8 & 0xf;
        local_110 = CONCAT44(fVar46,fVar29);
        fVar30 = (float)(byte)(bVar8 * bVar8) * fVar26 + fStack_d8;
        uStack_108 = (ulong)(uint)fVar30;
        fVar31 = fVar28 - (float)(byte)(bVar1 * bVar1) * fVar24;
        fVar47 = auVar39._0_4_ - (float)(byte)(bVar2 * bVar2) * fVar25;
        local_100 = CONCAT44(fVar47,fVar31);
        fVar32 = fStack_c8 - (float)(byte)(bVar6 * bVar6) * fVar26;
        local_f8 = (ulong)(uint)fVar32;
        bVar6 = local_b8[1] >> 4;
        bVar8 = local_b8[2] >> 4;
        bVar1 = local_b8[1] & 0xf;
        uStack_d4 = 0;
        bVar2 = local_b8[2] & 0xf;
        uStack_c4 = 0;
        local_e0 = (float)(byte)(bVar9 * bVar9) * fVar24 + fVar23;
        fStack_dc = (float)(byte)(bVar6 * bVar6) * fVar25 + auVar40._0_4_;
        fStack_d8 = (float)(byte)(bVar8 * bVar8) * fVar26 + fStack_d8;
        local_d0 = fVar28 - (float)(byte)(bVar7 * bVar7) * fVar24;
        fStack_cc = auVar39._0_4_ - (float)(byte)(bVar1 * bVar1) * fVar25;
        fStack_c8 = fStack_c8 - (float)(byte)(bVar2 * bVar2) * fVar26;
        fVar23 = *(float *)(param_3 + 2);
        fVar28 = *(float *)((long)param_3 + 0x14);
        fVar24 = *(float *)(param_3 + 3);
        fVar25 = *(float *)((long)param_3 + 0x1c);
        fVar26 = *(float *)(param_3 + 6);
        fVar10 = *(float *)((long)param_3 + 0x34);
        fVar11 = *(float *)(param_3 + 7);
        fVar12 = *(float *)((long)param_3 + 0x3c);
        auVar33._0_4_ = (fVar29 - fVar23) * fVar26;
        auVar33._4_4_ = (fVar46 - fVar28) * fVar10;
        auVar33._8_4_ = (fVar30 - fVar24) * fVar11;
        auVar33._12_4_ = (0.0 - fVar25) * fVar12;
        auVar35._0_4_ = fVar26 * (fVar31 - fVar23);
        auVar35._4_4_ = fVar10 * (fVar47 - fVar28);
        auVar35._8_4_ = fVar11 * (fVar32 - fVar24);
        auVar35._12_4_ = fVar12 * (0.0 - fVar25);
        auVar39 = NEON_fmin(auVar33,auVar35,4);
        auVar42 = NEON_fmax(auVar33,auVar35,4);
        uVar37 = NEON_fmaxp(auVar39._0_8_,auVar39._0_8_,4);
        uVar37 = NEON_fmax(CONCAT44(auVar39._8_4_,auVar39._8_4_),uVar37,4);
        uVar43 = NEON_fminp(auVar42._0_8_,auVar42._0_8_,4);
        uVar44 = NEON_fmin(CONCAT44(auVar42._8_4_,auVar42._8_4_),uVar43,4);
        fVar29 = fVar26 * (local_e0 - fVar23);
        fVar30 = fVar10 * (fStack_dc - fVar28);
        fVar31 = fVar11 * (fStack_d8 - fVar24);
        fVar32 = fVar12 * (0.0 - fVar25);
        uVar37 = NEON_fmax(uVar37,uVar45,4);
        auVar38._0_4_ = fVar26 * (local_d0 - fVar23);
        auVar38._4_4_ = fVar10 * (fStack_cc - fVar28);
        auVar38._8_4_ = fVar11 * (fStack_c8 - fVar24);
        auVar38._12_4_ = fVar12 * (0.0 - fVar25);
        uVar27 = (undefined4)((ulong)param_3[5] >> 0x20);
        uVar43 = CONCAT44(uVar27,uVar27);
        uVar44 = NEON_fmin(uVar44,uVar43,4);
        fVar28 = (float)uVar37;
        auVar4._4_4_ = fVar30;
        auVar4._0_4_ = fVar29;
        auVar4._8_4_ = fVar31;
        auVar4._12_4_ = fVar32;
        auVar39 = NEON_fmin(auVar4,auVar38,4);
        auVar5._4_4_ = fVar30;
        auVar5._0_4_ = fVar29;
        auVar5._8_4_ = fVar31;
        auVar5._12_4_ = fVar32;
        auVar42 = NEON_fmax(auVar5,auVar38,4);
        uVar37 = NEON_fmaxp(auVar39._0_8_,auVar39._0_8_,4);
        uVar41 = NEON_fmax(CONCAT44(auVar39._8_4_,auVar39._8_4_),uVar37,4);
        uVar37 = NEON_fminp(auVar42._0_8_,auVar42._0_8_,4);
        uVar37 = NEON_fmin(CONCAT44(auVar42._8_4_,auVar42._8_4_),uVar37,4);
        uVar41 = NEON_fmax(uVar41,uVar45,4);
        fVar23 = (float)uVar41;
        uVar37 = NEON_fmin(uVar37,uVar43,4);
        bVar1 = fVar28 <= (float)uVar44 | (fVar23 <= (float)uVar37) << 1;
        if (bVar1 == 1) {
          local_b0 = local_110;
          uStack_a8 = uStack_108;
          local_a0 = local_100;
          uStack_98 = local_f8;
          local_90 = (uint)uVar17;
          local_88 = local_e8;
        }
        else if (bVar1 == 2) {
          uVar17 = (ulong)local_c0;
          local_b0 = CONCAT44(fStack_dc,local_e0);
          uStack_a8 = (ulong)(uint)fStack_d8;
          local_a0 = CONCAT44(fStack_cc,local_d0);
          uStack_98 = (ulong)(uint)fStack_c8;
          local_90 = local_c0;
          local_88 = local_b8;
        }
        else {
          if (bVar1 != 3) goto LAB_001d90cc;
          *(uint *)(param_3 + 8) = (uint)(fVar23 < fVar28);
          iVar22 = (int)param_2[1];
          uVar16 = *(uint *)((long)param_2 + 0xc);
          uVar19 = (ulong)(fVar23 >= fVar28);
          uVar14 = iVar22 + 1;
          if (iVar22 < (int)(uVar16 & 0x3fffffff)) {
            lVar15 = *param_2;
          }
          else {
            lVar15 = *param_2;
            if (0x3ffffffe < iVar22) {
              FUN_032bd0a8(uVar14);
              uVar16 = *(uint *)((long)param_2 + 0xc);
            }
            uVar16 = (uVar16 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar16) {
              uVar16 = 0x3fffffff;
            }
            uVar3 = uVar14;
            if ((int)uVar14 <= (int)uVar16) {
              uVar3 = uVar16;
            }
            lVar15 = FUN_032bd1d4(uVar36,uVar3,0x30,lVar15,iVar22,(uint *)((long)param_2 + 0xc));
            *param_2 = lVar15;
            iVar22 = (int)param_2[1];
          }
          *(uint *)(param_2 + 1) = uVar14;
          uVar17 = (&local_f0)[uVar19 * 6 + -4];
          puVar18 = (ulong *)(lVar15 + (long)iVar22 * 0x30);
          puVar18[1] = (&local_f0)[uVar19 * 6 + -3];
          *puVar18 = uVar17;
          uVar17 = (&local_f0)[uVar19 * 6 + -2];
          uVar20 = (ulong)(fVar23 < fVar28);
          puVar18[3] = (&local_f0)[uVar19 * 6 + -1];
          puVar18[2] = uVar17;
          *(int *)(puVar18 + 4) = (int)(&local_f0)[uVar19 * 6];
          uVar17 = (ulong)(uint)(&local_f0)[uVar20 * 6];
          local_b0 = (&local_f0)[uVar20 * 6 + -4];
          uStack_a8 = (&local_f0)[uVar20 * 6 + -3];
          local_a0 = (&local_f0)[uVar20 * 6 + -2];
          uStack_98 = (&local_f0)[uVar20 * 6 + -1];
          local_90 = (uint)(&local_f0)[uVar20 * 6];
          local_88 = (byte *)(&local_f0)[uVar20 * 6 + 1];
        }
        while( true ) {
          auVar40._8_8_ = 0;
          auVar40._0_8_ = local_b0 >> 0x20;
          uVar19 = uVar17 & 0xffffffff;
          fVar23 = (float)local_b0;
          fVar28 = (float)local_a0;
          auVar39._8_8_ = 0;
          auVar39._0_8_ = local_a0 >> 0x20;
          if ((char)local_88[3] < '\0') break;
LAB_001d907c:
          uVar27 = (undefined4)((ulong)param_3[5] >> 0x20);
          local_110 = CONCAT44(uVar27,uVar27);
          puVar21 = (undefined8 *)*param_3;
          uVar14 = (**(code **)(*(long *)*puVar21 + 0x10))
                             ((long *)*puVar21,
                              (ulong)CONCAT12(local_88[3],*(undefined2 *)(local_88 + 4)),&local_b0,
                              &local_110);
          *(uint *)(puVar21 + 1) = *(uint *)(puVar21 + 1) | uVar14;
          param_3[5] = CONCAT44((int)local_110,(int)param_3[5]);
          param_3[4] = param_3[4];
LAB_001d90cc:
          if ((int)param_2[1] <= (int)lVar13) {
            return;
          }
          iVar22 = (int)param_2[1] + -1;
          *(int *)(param_2 + 1) = iVar22;
          puVar18 = (ulong *)(*param_2 + (long)iVar22 * 0x30);
          uVar17 = (ulong)(uint)puVar18[4];
          local_b0 = *puVar18;
          uStack_a8 = puVar18[1];
          local_a0 = puVar18[2];
          uStack_98 = puVar18[3];
          local_90 = (uint)puVar18[4];
          local_88 = (byte *)((long)param_1 + (long)(int)puVar18[4] * 6 + *param_1);
        }
      } while( true );
    }
  }
  return;
}


