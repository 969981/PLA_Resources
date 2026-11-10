/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001d96a0; name: FUN_001d96a0
 */


void FUN_001d96a0(long *param_1,long *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  float fVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 uVar38;
  float fVar39;
  float fVar40;
  float fVar42;
  undefined8 uVar41;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 uVar46;
  undefined8 uVar47;
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
  undefined8 local_d0;
  ulong uStack_c8;
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
    lVar8 = param_2[1];
    local_90 = 0;
    local_88 = (byte *)(*param_1 + (long)param_1);
    uVar38 = *(undefined8 *)(PTR_DAT_04372370 + 0x50);
    uVar22 = (undefined4)((ulong)param_3[5] >> 0x20);
    fVar29 = (float)local_a0;
    fVar20 = (float)param_3[8];
    fVar19 = (float)(local_a0 >> 0x20);
    fVar21 = (float)((ulong)param_3[8] >> 0x20);
    fVar27 = (float)local_b0;
    fVar18 = (float)(local_b0 >> 0x20);
    auVar28._0_4_ = *(float *)(param_3 + 6) * ((fVar27 - fVar20) - *(float *)(param_3 + 2));
    auVar28._4_4_ =
         *(float *)((long)param_3 + 0x34) * ((fVar18 - fVar21) - *(float *)((long)param_3 + 0x14));
    auVar28._8_4_ =
         *(float *)(param_3 + 7) * (((float)uStack_a8 - fVar20) - *(float *)(param_3 + 3));
    auVar28._12_4_ =
         *(float *)((long)param_3 + 0x3c) *
         (((float)(uStack_a8 >> 0x20) - fVar21) - *(float *)((long)param_3 + 0x1c));
    auVar35._0_4_ = *(float *)(param_3 + 6) * ((fVar29 + fVar20) - *(float *)(param_3 + 2));
    auVar35._4_4_ =
         *(float *)((long)param_3 + 0x34) * ((fVar19 + fVar21) - *(float *)((long)param_3 + 0x14));
    auVar35._8_4_ =
         *(float *)(param_3 + 7) * (((float)uStack_98 + fVar20) - *(float *)(param_3 + 3));
    auVar35._12_4_ =
         *(float *)((long)param_3 + 0x3c) *
         (((float)(uStack_98 >> 0x20) + fVar21) - *(float *)((long)param_3 + 0x1c));
    auVar33 = NEON_fmin(auVar28,auVar35,4);
    auVar28 = NEON_fmax(auVar28,auVar35,4);
    uVar30 = NEON_fmaxp(auVar33._0_8_,auVar33._0_8_,4);
    uVar31 = NEON_fmax(CONCAT44(auVar33._8_4_,auVar33._8_4_),uVar30,4);
    uVar30 = NEON_fminp(auVar28._0_8_,auVar28._0_8_,4);
    uVar30 = NEON_fmin(CONCAT44(auVar28._8_4_,auVar28._8_4_),uVar30,4);
    uVar31 = NEON_fmax(uVar31,uVar38,4);
    uVar30 = NEON_fmin(uVar30,CONCAT44(uVar22,uVar22),4);
    if ((float)uVar31 <= (float)uVar30) {
      auVar28 = *(undefined1 (*) [16])(PTR_DAT_04372370 + 0x1e0);
      uVar30 = *(undefined8 *)PTR_PTR_04372408;
      auVar35 = NEON_ext(auVar28,auVar28,8,1);
      uVar16 = (ulong)(uint)fVar19;
      auVar28 = NEON_ext(auVar35,auVar28,8,1);
      auVar33 = ZEXT416((uint)fVar18);
      uVar14 = 0;
      if (-1 < (char)local_88[3]) goto LAB_001d97f0;
      do {
        uVar12 = (long)(int)uVar14 + 1;
        local_f0._0_4_ = (uint)uVar12;
        fStack_d8 = (float)uStack_a8;
        fVar19 = (float)uStack_98;
        fVar18 = ((float)local_a0 - (float)local_b0) * auVar28._0_4_;
        fVar20 = ((float)(local_a0 >> 0x20) - (float)(local_b0 >> 0x20)) * auVar28._4_4_;
        fVar21 = (fVar19 - fStack_d8) * auVar28._8_4_;
        local_c0 = (int)uVar14 +
                   ((uint)*(ushort *)(local_88 + 4) | (local_88[3] & 0x7f) << 0x10) * 2;
        local_e8 = (byte *)((long)param_1 + uVar12 * 6 + *param_1);
        local_b8 = (byte *)((long)param_1 + (long)(int)local_c0 * 6 + *param_1);
        bVar4 = *local_e8 >> 4;
        bVar1 = *local_e8 & 0xf;
        bVar5 = local_e8[1] >> 4;
        bVar2 = local_e8[1] & 0xf;
        bVar6 = local_e8[2] >> 4;
        fVar23 = (float)(byte)(bVar4 * bVar4) * fVar18 + fVar27;
        fVar39 = (float)(byte)(bVar5 * bVar5) * fVar20 + auVar33._0_4_;
        bVar4 = local_e8[2] & 0xf;
        bVar7 = *local_b8 >> 4;
        bVar5 = *local_b8 & 0xf;
        local_110 = CONCAT44(fVar39,fVar23);
        fVar24 = (float)(byte)(bVar6 * bVar6) * fVar21 + fStack_d8;
        uStack_108 = (ulong)(uint)fVar24;
        fVar25 = fVar29 - (float)(byte)(bVar1 * bVar1) * fVar18;
        fVar40 = (float)uVar16 - (float)(byte)(bVar2 * bVar2) * fVar20;
        local_100 = CONCAT44(fVar40,fVar25);
        fVar26 = fVar19 - (float)(byte)(bVar4 * bVar4) * fVar21;
        local_f8 = (ulong)(uint)fVar26;
        bVar4 = local_b8[1] >> 4;
        bVar6 = local_b8[2] >> 4;
        bVar1 = local_b8[1] & 0xf;
        uStack_d4 = 0;
        bVar2 = local_b8[2] & 0xf;
        local_e0 = (float)(byte)(bVar7 * bVar7) * fVar18 + fVar27;
        fStack_dc = (float)(byte)(bVar4 * bVar4) * fVar20 + auVar33._0_4_;
        fStack_d8 = (float)(byte)(bVar6 * bVar6) * fVar21 + fStack_d8;
        fVar29 = fVar29 - (float)(byte)(bVar5 * bVar5) * fVar18;
        fVar27 = (float)uVar16 - (float)(byte)(bVar1 * bVar1) * fVar20;
        fVar19 = fVar19 - (float)(byte)(bVar2 * bVar2) * fVar21;
        local_d0 = CONCAT44(fVar27,fVar29);
        uStack_c8 = (ulong)(uint)fVar19;
        fVar18 = (float)param_3[8];
        fVar20 = (float)((ulong)param_3[8] >> 0x20);
        uVar22 = (undefined4)((ulong)param_3[5] >> 0x20);
        uVar46 = CONCAT44(uVar22,uVar22);
        fVar21 = (float)param_3[2];
        fVar42 = (float)((ulong)param_3[2] >> 0x20);
        fVar43 = (float)param_3[3];
        fVar44 = (float)((ulong)param_3[3] >> 0x20);
        fVar45 = (float)param_3[6];
        auVar34._0_4_ = fVar45 * ((fVar25 + fVar18) - fVar21);
        fVar25 = (float)((ulong)param_3[6] >> 0x20);
        auVar34._4_4_ = fVar25 * ((fVar40 + fVar20) - fVar42);
        fVar40 = (float)param_3[7];
        auVar34._8_4_ = fVar40 * ((fVar26 + fVar18) - fVar43);
        fVar26 = (float)((ulong)param_3[7] >> 0x20);
        auVar34._12_4_ = fVar26 * ((fVar20 + 0.0) - fVar44);
        auVar36._0_4_ = ((fVar23 - fVar18) - fVar21) * fVar45;
        auVar36._4_4_ = ((fVar39 - fVar20) - fVar42) * fVar25;
        auVar36._8_4_ = ((fVar24 - fVar18) - fVar43) * fVar40;
        auVar36._12_4_ = ((0.0 - fVar20) - fVar44) * fVar26;
        auVar33 = NEON_fmin(auVar36,auVar34,4);
        auVar35 = NEON_fmax(auVar36,auVar34,4);
        uVar31 = NEON_fmaxp(auVar33._0_8_,auVar33._0_8_,4);
        uVar31 = NEON_fmax(CONCAT44(auVar33._8_4_,auVar33._8_4_),uVar31,4);
        uVar47 = NEON_fminp(auVar35._0_8_,auVar35._0_8_,4);
        uVar41 = NEON_fmax(uVar31,uVar38,4);
        uVar31 = NEON_fmin(CONCAT44(auVar35._8_4_,auVar35._8_4_),uVar47,4);
        uVar47 = NEON_fmin(uVar31,uVar46,4);
        auVar32._0_4_ = ((local_e0 - fVar18) - fVar21) * fVar45;
        auVar32._4_4_ = ((fStack_dc - fVar20) - fVar42) * fVar25;
        auVar32._8_4_ = ((fStack_d8 - fVar18) - fVar43) * fVar40;
        auVar32._12_4_ = ((0.0 - fVar20) - fVar44) * fVar26;
        fVar23 = (float)uVar41;
        auVar37._0_4_ = fVar45 * ((fVar18 + fVar29) - fVar21);
        auVar37._4_4_ = fVar25 * ((fVar20 + fVar27) - fVar42);
        auVar37._8_4_ = fVar40 * ((fVar18 + fVar19) - fVar43);
        auVar37._12_4_ = fVar26 * ((fVar20 + 0.0) - fVar44);
        auVar33 = NEON_fmin(auVar32,auVar37,4);
        auVar35 = NEON_fmax(auVar32,auVar37,4);
        uVar31 = NEON_fmaxp(auVar33._0_8_,auVar33._0_8_,4);
        uVar41 = NEON_fmax(CONCAT44(auVar33._8_4_,auVar33._8_4_),uVar31,4);
        uVar31 = NEON_fminp(auVar35._0_8_,auVar35._0_8_,4);
        uVar31 = NEON_fmin(CONCAT44(auVar35._8_4_,auVar35._8_4_),uVar31,4);
        uVar41 = NEON_fmax(uVar41,uVar38,4);
        fVar27 = (float)uVar41;
        uVar31 = NEON_fmin(uVar31,uVar46,4);
        bVar1 = fVar23 <= (float)uVar47 | (fVar27 <= (float)uVar31) << 1;
        if (bVar1 == 1) {
          local_b0 = local_110;
          uStack_a8 = uStack_108;
          local_a0 = local_100;
          uStack_98 = local_f8;
          local_90 = (uint)uVar12;
          local_88 = local_e8;
        }
        else if (bVar1 == 2) {
          uVar12 = (ulong)local_c0;
          local_b0 = CONCAT44(fStack_dc,local_e0);
          uStack_98 = uStack_c8;
          local_a0 = local_d0;
          uStack_a8 = (ulong)(uint)fStack_d8;
          local_90 = local_c0;
          local_88 = local_b8;
        }
        else {
          if (bVar1 != 3) goto LAB_001d9840;
          *(uint *)(param_3 + 9) = (uint)(fVar27 < fVar23);
          iVar17 = (int)param_2[1];
          uVar11 = *(uint *)((long)param_2 + 0xc);
          uVar16 = (ulong)(fVar27 >= fVar23);
          uVar9 = iVar17 + 1;
          if (iVar17 < (int)(uVar11 & 0x3fffffff)) {
            lVar10 = *param_2;
          }
          else {
            lVar10 = *param_2;
            if (0x3ffffffe < iVar17) {
              FUN_032bd0a8(uVar9);
              uVar11 = *(uint *)((long)param_2 + 0xc);
            }
            uVar11 = (uVar11 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar11) {
              uVar11 = 0x3fffffff;
            }
            uVar3 = uVar9;
            if ((int)uVar9 <= (int)uVar11) {
              uVar3 = uVar11;
            }
            lVar10 = FUN_032bd1d4(uVar30,uVar3,0x30,lVar10,iVar17,(uint *)((long)param_2 + 0xc));
            *param_2 = lVar10;
            iVar17 = (int)param_2[1];
          }
          *(uint *)(param_2 + 1) = uVar9;
          uVar14 = (&local_f0)[uVar16 * 6 + -4];
          puVar13 = (ulong *)(lVar10 + (long)iVar17 * 0x30);
          puVar13[1] = (&local_f0)[uVar16 * 6 + -3];
          *puVar13 = uVar14;
          uVar12 = (&local_f0)[uVar16 * 6 + -2];
          uVar14 = (ulong)(fVar27 < fVar23);
          puVar13[3] = (&local_f0)[uVar16 * 6 + -1];
          puVar13[2] = uVar12;
          *(int *)(puVar13 + 4) = (int)(&local_f0)[uVar16 * 6];
          uVar12 = (ulong)(uint)(&local_f0)[uVar14 * 6];
          local_b0 = (&local_f0)[uVar14 * 6 + -4];
          uStack_a8 = (&local_f0)[uVar14 * 6 + -3];
          local_a0 = (&local_f0)[uVar14 * 6 + -2];
          uStack_98 = (&local_f0)[uVar14 * 6 + -1];
          local_90 = (uint)(&local_f0)[uVar14 * 6];
          local_88 = (byte *)(&local_f0)[uVar14 * 6 + 1];
        }
        while( true ) {
          auVar33._8_8_ = 0;
          auVar33._0_8_ = local_b0 >> 0x20;
          uVar14 = uVar12 & 0xffffffff;
          fVar27 = (float)local_b0;
          fVar29 = (float)local_a0;
          uVar16 = local_a0 >> 0x20;
          if ((char)local_88[3] < '\0') break;
LAB_001d97f0:
          uVar22 = (undefined4)((ulong)param_3[5] >> 0x20);
          local_110 = CONCAT44(uVar22,uVar22);
          puVar15 = (undefined8 *)*param_3;
          uVar9 = (**(code **)(*(long *)*puVar15 + 0x10))
                            ((long *)*puVar15,
                             (ulong)CONCAT12(local_88[3],*(undefined2 *)(local_88 + 4)),&local_b0,
                             &local_110);
          *(uint *)(puVar15 + 1) = *(uint *)(puVar15 + 1) | uVar9;
          param_3[5] = CONCAT44((int)local_110,(int)param_3[5]);
          param_3[4] = param_3[4];
LAB_001d9840:
          if ((int)param_2[1] <= (int)lVar8) {
            return;
          }
          iVar17 = (int)param_2[1] + -1;
          *(int *)(param_2 + 1) = iVar17;
          puVar13 = (ulong *)(*param_2 + (long)iVar17 * 0x30);
          uVar12 = (ulong)(uint)puVar13[4];
          local_b0 = *puVar13;
          uStack_a8 = puVar13[1];
          local_a0 = puVar13[2];
          uStack_98 = puVar13[3];
          local_90 = (uint)puVar13[4];
          local_88 = (byte *)((long)param_1 + (long)(int)puVar13[4] * 6 + *param_1);
        }
      } while( true );
    }
  }
  return;
}


