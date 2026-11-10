/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001d2ebc; name: FUN_001d2ebc
 */


void FUN_001d2ebc(long param_1,uint param_2,undefined8 *param_3,float *param_4,float *param_5)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  float fVar14;
  float fVar16;
  undefined1 auVar15 [16];
  undefined8 uVar18;
  undefined1 auVar17 [16];
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  float fVar27;
  double dVar25;
  undefined8 uVar26;
  float fVar28;
  float fVar29;
  double dVar30;
  undefined1 in_q5 [16];
  undefined1 auVar34 [16];
  undefined1 auVar33 [16];
  undefined1 auVar32 [16];
  undefined1 auVar31 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  double dVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  float fVar42;
  double dVar43;
  undefined8 uVar44;
  float fVar45;
  undefined8 uVar46;
  double dVar47;
  undefined8 uVar48;
  double dVar49;
  double dVar50;
  float afStack_50 [4];
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined8 local_30;
  undefined8 uStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  uint local_c [3];
  
  lVar12 = param_1 + 0xd60;
  bVar2 = *(byte *)(lVar12 + (-(ulong)((param_2 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
                             (ulong)(param_2 << 2) << 2) + 2);
  uVar11 = (ulong)(long)(int)(param_2 << 2) >> 2;
  bVar3 = *(byte *)(lVar12 + (uVar11 << 4 | 4) + 2);
  local_c[0] = (uint)bVar2;
  local_c[1] = (uint)bVar3;
  bVar4 = *(byte *)(lVar12 + (uVar11 << 4 | 8) + 2);
  param_1 = param_1 + 0x8d0;
  local_c[2] = (uint)bVar4;
  pfVar7 = (float *)(param_1 + (ulong)bVar4 * 0x10);
  pfVar8 = (float *)(param_1 + (ulong)bVar3 * 0x10);
  local_40 = *pfVar7 - *pfVar8;
  fStack_3c = pfVar7[1] - pfVar8[1];
  fStack_38 = pfVar7[2] - pfVar8[2];
  fStack_34 = pfVar7[3] - pfVar8[3];
  puVar9 = (undefined8 *)(param_1 + (ulong)bVar2 * 0x10);
  uVar21 = puVar9[1];
  fStack_18 = (float)uVar21;
  fVar20 = (float)((ulong)uVar21 >> 0x20);
  uVar21 = *puVar9;
  fStack_20 = (float)uVar21;
  fStack_1c = (float)((ulong)uVar21 >> 0x20);
  fVar23 = fStack_20 - *pfVar7;
  fVar27 = fStack_1c - pfVar7[1];
  fVar28 = fStack_18 - pfVar7[2];
  local_40 = local_40 * local_40;
  fStack_20 = *pfVar8 - fStack_20;
  fStack_1c = pfVar8[1] - fStack_1c;
  fStack_18 = pfVar8[2] - fStack_18;
  auVar31._4_12_ = in_q5._4_12_;
  auVar31._0_4_ = local_40;
  auVar33._12_4_ = in_q5._12_4_;
  auVar33._0_8_ = auVar31._0_8_;
  auVar33._8_4_ = fStack_38 * fStack_38;
  auVar32._8_8_ = auVar33._8_8_;
  auVar32._4_4_ = fVar23 * fVar23;
  auVar32._0_4_ = local_40;
  auVar34._0_12_ = auVar32._0_12_;
  auVar34._12_4_ = fVar28 * fVar28;
  auVar35 = NEON_ext(auVar34,auVar34,8,1);
  fVar19 = fStack_20 * fStack_20 + fStack_1c * fStack_1c + fStack_18 * fStack_18;
  auVar15._12_4_ = fStack_20 * fStack_20 + fStack_1c * fStack_1c + fStack_18 * fStack_18;
  auVar15._8_4_ = fVar19;
  fVar14 = auVar35._0_4_ + fStack_3c * fStack_3c + local_40;
  fVar16 = auVar35._4_4_ + fVar27 * fVar27 + fVar23 * fVar23;
  auVar15._0_8_ = CONCAT44(fVar16,fVar14);
  uStack_28 = CONCAT44(fVar20 - pfVar7[3],fVar28);
  local_30 = CONCAT44(fVar27,fVar23);
  fStack_14 = pfVar8[3] - fVar20;
  uVar21 = NEON_fminp(auVar15._0_8_,auVar15._0_8_,4);
  uVar21 = NEON_fmin(CONCAT44(fVar19,fVar19),uVar21,4);
  cVar5 = PTR_DAT_04372398
          [(-(uint)(fVar16 <= (float)((ulong)uVar21 >> 0x20)) & 2) + (uint)(fVar14 <= (float)uVar21)
           | -(uint)(fVar19 <= (float)uVar21) & 4];
  lVar12 = (long)cVar5;
  uVar10 = (uint)cVar5;
  uVar6 = (uVar10 & 3) << 1;
  uVar1 = 0x36U >> (ulong)uVar6 & 3 ^ uVar10;
  uVar18 = *(undefined8 *)(local_c + (long)(int)uVar1 * 4 + -0xb);
  fVar16 = (float)((ulong)*(undefined8 *)(afStack_50 + (long)(int)uVar1 * 4 + 4) >> 0x20);
  fVar19 = (float)uVar18;
  fVar14 = (float)*(undefined8 *)(afStack_50 + (long)(int)uVar1 * 4 + 4);
  dVar30 = (double)fVar14;
  dVar43 = (double)fVar16;
  dVar47 = (double)fVar19;
  uVar21 = *(undefined8 *)(local_c + lVar12 * 4 + -0xb);
  fVar28 = (float)uVar21;
  fVar23 = (float)*(undefined8 *)(afStack_50 + lVar12 * 4 + 4);
  fVar27 = (float)((ulong)*(undefined8 *)(afStack_50 + lVar12 * 4 + 4) >> 0x20);
  dVar49 = (double)fVar23;
  dVar38 = (double)fVar27;
  dVar22 = *(double *)(PTR_DAT_043726a0 + 0xc0) /
           (dVar47 * dVar47 + dVar30 * dVar30 + dVar43 * dVar43);
  dVar25 = (double)fVar28;
  dVar50 = (dVar25 * dVar47 + dVar49 * dVar30 + dVar38 * dVar43) * dVar22;
  fVar20 = (float)dVar22;
  fVar29 = (float)(dVar49 - dVar50 * dVar30);
  fVar36 = (float)(dVar38 - dVar50 * dVar43);
  fVar24 = (float)(dVar25 - dVar50 * dVar47);
  uVar13 = -(ulong)((uint)(int)cVar5 >> 0x1f) & 0xfffffffc00000000 |
           (ulong)(0x2dU >> (ulong)uVar6 & 3 ^ (int)cVar5) << 2;
  uVar26 = CONCAT44(fVar29 * fVar29 + fVar36 * fVar36 + fVar24 * fVar24,
                    fVar29 * fVar29 + fVar36 * fVar36 + fVar24 * fVar24);
  uVar46 = param_3[1];
  puVar9 = (undefined8 *)(param_1 + (long)*(int *)((long)local_c + uVar13) * 0x10);
  uVar41 = puVar9[1];
  uVar44 = *puVar9;
  fVar37 = (float)*param_3 - (float)uVar44;
  fVar39 = (float)((ulong)*param_3 >> 0x20) - (float)((ulong)uVar44 >> 0x20);
  fVar40 = (float)uVar46 - (float)uVar41;
  uVar11 = -(ulong)(uVar10 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
  fVar29 = fVar37 * fVar29;
  fVar36 = fVar39 * fVar36;
  fVar24 = fVar40 * fVar24;
  uVar44 = NEON_frecpe(uVar26,4);
  uVar48 = NEON_frecps(uVar26,uVar44,4);
  fVar42 = (float)uVar44 * (float)uVar48;
  fVar45 = (float)((ulong)uVar44 >> 0x20) * (float)((ulong)uVar48 >> 0x20);
  uVar26 = NEON_frecps(uVar26,CONCAT44(fVar45,fVar42),4);
  fVar42 = fVar42 * (float)uVar26 * (fVar29 + fVar36 + fVar24);
  fVar24 = fVar45 * (float)((ulong)uVar26 >> 0x20) * (fVar29 + fVar36 + fVar24);
  *(float *)((long)afStack_50 + uVar11) = fVar42;
  auVar17._0_4_ = fVar14 * (fVar37 - fVar23 * fVar42);
  auVar17._4_4_ = fVar16 * (fVar39 - fVar27 * fVar24);
  auVar17._8_4_ = fVar19 * (fVar40 - fVar28 * fVar42);
  auVar17._12_4_ =
       (float)((ulong)uVar18 >> 0x20) *
       (((float)((ulong)uVar46 >> 0x20) - (float)((ulong)uVar41 >> 0x20)) -
       (float)((ulong)uVar21 >> 0x20) * fVar24);
  auVar35 = NEON_ext(auVar17,auVar17,8,1);
  fVar14 = auVar17._0_4_ + auVar17._4_4_ + auVar35._0_4_;
  afStack_50[lVar12] = -(fVar14 * fVar20);
  *(float *)((long)afStack_50 + uVar13) =
       (fVar20 * fVar14 + 1.0) - *(float *)((long)afStack_50 + uVar11);
  auVar35 = NEON_frsqrte(auVar15,4);
  param_4[2] = afStack_50[2];
  param_4[3] = 0.0;
  *param_4 = afStack_50[0];
  param_4[1] = afStack_50[1];
  fVar14 = auVar35._0_4_;
  fVar16 = auVar35._4_4_;
  fVar19 = auVar35._8_4_;
  fVar20 = auVar35._12_4_;
  auVar35._4_4_ = fVar16 * fVar16;
  auVar35._0_4_ = fVar14 * fVar14;
  auVar35._8_4_ = fVar19 * fVar19;
  auVar35._12_4_ = fVar20 * fVar20;
  auVar35 = NEON_frsqrts(auVar15,auVar35,4);
  param_5[2] = afStack_50[2] * fVar19 * auVar35._8_4_;
  param_5[3] = fVar20 * auVar35._12_4_ * 0.0;
  *param_5 = afStack_50[0] * fVar14 * auVar35._0_4_;
  param_5[1] = afStack_50[1] * fVar16 * auVar35._4_4_;
  return;
}


