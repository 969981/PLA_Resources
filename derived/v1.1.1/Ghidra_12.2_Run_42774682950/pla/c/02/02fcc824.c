/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fcc824; name: FUN_02fcc824
 */


void FUN_02fcc824(long *param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong *puVar22;
  ulong uVar23;
  byte *pbVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  ulong uVar30;
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar36;
  float fVar37;
  undefined1 auVar34 [16];
  float fVar38;
  undefined1 auVar35 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  undefined1 auVar48 [16];
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  ulong local_a8;
  ulong local_a0;
  byte *local_98;
  float local_90;
  float fStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  uint local_70;
  byte *local_68;
  
  puVar17 = PTR_PTR_0434a080;
  if ((int)param_1[1] != 0) {
    lVar16 = param_2[1];
    uVar30 = param_1[3];
    uVar25 = param_1[2];
    uVar27 = param_1[5];
    uVar26 = param_1[4];
    auVar45 = *(undefined1 (*) [16])(param_3 + 6);
    auVar39._0_4_ = (float)uVar25 - *(float *)(param_3 + 8);
    auVar39._4_4_ = (float)(uVar25 >> 0x20) - *(float *)((long)param_3 + 0x44);
    auVar39._8_4_ = (float)uVar30 - *(float *)(param_3 + 9);
    auVar39._12_4_ = (float)(uVar30 >> 0x20) - *(float *)((long)param_3 + 0x4c);
    auVar34._0_4_ = (float)uVar26 + *(float *)(param_3 + 8);
    auVar34._4_4_ = (float)(uVar26 >> 0x20) + *(float *)((long)param_3 + 0x44);
    auVar34._8_4_ = (float)uVar27 + *(float *)(param_3 + 9);
    auVar34._12_4_ = (float)(uVar27 >> 0x20) + *(float *)((long)param_3 + 0x4c);
    auVar39 = NEON_fmax(auVar39,auVar45,4);
    auVar34 = NEON_fmin(auVar34,auVar39,4);
    fVar32 = auVar45._0_4_ - auVar34._0_4_;
    fVar36 = auVar45._4_4_ - auVar34._4_4_;
    fVar37 = auVar45._8_4_ - auVar34._8_4_;
    fVar38 = auVar45._12_4_ - auVar34._12_4_;
    auVar45._0_4_ = fVar32 * fVar32;
    auVar45._4_4_ = fVar36 * fVar36;
    auVar45._8_4_ = fVar37 * fVar37;
    auVar45._12_4_ = fVar38 * fVar38;
    auVar34 = NEON_ext(auVar45,auVar45,8,1);
    if (auVar45._0_4_ + auVar45._4_4_ + auVar34._0_4_ <= (float)param_3[10]) {
      pbVar24 = (byte *)(*param_1 + (long)param_1);
      uVar20 = 0;
      bVar7 = pbVar24[3];
joined_r0x02fcc8dc:
      do {
        uVar21 = (uint)(char)bVar7;
        if (-1 < (char)bVar7) goto LAB_02fccbb0;
        while( true ) {
          uVar23 = (long)(int)uVar20 + 1;
          local_80 = (float)uVar26;
          local_90 = (float)uVar25;
          fStack_7c = (float)(uVar26 >> 0x20);
          fStack_8c = (float)(uVar25 >> 0x20);
          fVar29 = (float)uVar27;
          fVar28 = (float)uVar30;
          local_a0._0_4_ = (int)uVar23;
          fVar32 = (local_80 - local_90) * 0.0044247787;
          fVar36 = (fStack_7c - fStack_8c) * 0.0044247787;
          fVar37 = (fVar29 - fVar28) * 0.0044247787;
          local_70 = (int)uVar20 +
                     ((uint)*(ushort *)(pbVar24 + 4) | (pbVar24[3] & 0x7f) << 0x10) * 2;
          uVar20 = (ulong)local_70;
          local_98 = (byte *)((long)param_1 + uVar23 * 6 + *param_1);
          pbVar24 = (byte *)((long)param_1 + (long)(int)local_70 * 6 + *param_1);
          local_68 = pbVar24;
          bVar10 = *local_98 >> 4;
          bVar7 = *local_98 & 0xf;
          bVar11 = local_98[1] >> 4;
          bVar2 = local_98[1] & 0xf;
          bVar12 = local_98[2] >> 4;
          bVar3 = local_98[2] & 0xf;
          bVar13 = *pbVar24 >> 4;
          bVar4 = *pbVar24 & 0xf;
          bVar14 = pbVar24[1] >> 4;
          bVar15 = pbVar24[2] >> 4;
          bVar5 = pbVar24[1] & 0xf;
          bVar6 = pbVar24[2] & 0xf;
          fVar33 = local_90 + (float)(byte)(bVar10 * bVar10) * fVar32;
          fVar42 = fStack_8c + (float)(byte)(bVar11 * bVar11) * fVar36;
          local_c0 = CONCAT44(fVar42,fVar33);
          fVar43 = fVar28 + (float)(byte)(bVar12 * bVar12) * fVar37;
          fVar44 = local_80 - (float)(byte)(bVar7 * bVar7) * fVar32;
          fVar46 = fStack_7c - (float)(byte)(bVar2 * bVar2) * fVar36;
          local_b0 = CONCAT44(fVar46,fVar44);
          fVar47 = fVar29 - (float)(byte)(bVar3 * bVar3) * fVar37;
          uStack_74 = 0;
          local_90 = local_90 + (float)(byte)(bVar13 * bVar13) * fVar32;
          fStack_8c = fStack_8c + (float)(byte)(bVar14 * bVar14) * fVar36;
          uStack_84 = 0;
          fVar28 = fVar28 + (float)(byte)(bVar15 * bVar15) * fVar37;
          local_80 = local_80 - (float)(byte)(bVar4 * bVar4) * fVar32;
          fStack_88 = fVar28;
          fStack_7c = fStack_7c - (float)(byte)(bVar5 * bVar5) * fVar36;
          fVar29 = fVar29 - (float)(byte)(bVar6 * bVar6) * fVar37;
          fStack_78 = fVar29;
          auVar45 = *(undefined1 (*) [16])(param_3 + 6);
          fVar32 = *(float *)(param_3 + 8);
          fVar36 = *(float *)((long)param_3 + 0x44);
          fVar37 = *(float *)(param_3 + 9);
          fVar38 = *(float *)((long)param_3 + 0x4c);
          auVar35._0_4_ = fVar32 + fVar44;
          auVar35._4_4_ = fVar36 + fVar46;
          auVar35._8_4_ = fVar37 + fVar47;
          auVar35._12_4_ = fVar38 + 0.0;
          auVar31._0_4_ = fVar33 - fVar32;
          auVar31._4_4_ = fVar42 - fVar36;
          auVar31._8_4_ = fVar43 - fVar37;
          auVar31._12_4_ = 0.0 - fVar38;
          auVar34 = NEON_fmax(auVar31,auVar45,4);
          auVar34 = NEON_fmin(auVar35,auVar34,4);
          fVar33 = auVar45._0_4_ - auVar34._0_4_;
          fVar42 = auVar45._4_4_ - auVar34._4_4_;
          fVar44 = auVar45._8_4_ - auVar34._8_4_;
          fVar46 = auVar45._12_4_ - auVar34._12_4_;
          fVar33 = fVar33 * fVar33;
          fVar42 = fVar42 * fVar42;
          fVar44 = fVar44 * fVar44;
          fVar46 = fVar46 * fVar46;
          uVar25 = CONCAT44(fStack_8c,local_90);
          uVar26 = CONCAT44(fStack_7c,local_80);
          auVar48._0_4_ = local_90 - fVar32;
          auVar48._4_4_ = fStack_8c - fVar36;
          auVar48._8_4_ = fVar28 - fVar37;
          auVar48._12_4_ = 0.0 - fVar38;
          auVar40._0_4_ = fVar32 + local_80;
          auVar40._4_4_ = fVar36 + fStack_7c;
          auVar40._8_4_ = fVar37 + fVar29;
          auVar40._12_4_ = fVar38 + 0.0;
          auVar34 = NEON_fmax(auVar48,auVar45,4);
          auVar34 = NEON_fmin(auVar40,auVar34,4);
          auVar8._4_4_ = fVar42;
          auVar8._0_4_ = fVar33;
          auVar8._8_4_ = fVar44;
          auVar8._12_4_ = fVar46;
          auVar9._4_4_ = fVar42;
          auVar9._0_4_ = fVar33;
          auVar9._8_4_ = fVar44;
          auVar9._12_4_ = fVar46;
          auVar39 = NEON_ext(auVar8,auVar9,8,1);
          fVar32 = auVar45._0_4_ - auVar34._0_4_;
          fVar36 = auVar45._4_4_ - auVar34._4_4_;
          fVar37 = auVar45._8_4_ - auVar34._8_4_;
          fVar38 = auVar45._12_4_ - auVar34._12_4_;
          auVar41._0_4_ = fVar32 * fVar32;
          auVar41._4_4_ = fVar36 * fVar36;
          auVar41._8_4_ = fVar37 * fVar37;
          auVar41._12_4_ = fVar38 * fVar38;
          auVar45 = NEON_ext(auVar41,auVar41,8,1);
          fVar36 = fVar33 + fVar42 + auVar39._0_4_;
          fVar32 = auVar41._0_4_ + auVar41._4_4_ + auVar45._0_4_;
          bVar7 = fVar36 <= (float)param_3[10] | (fVar32 <= (float)param_3[10]) << 1;
          if (bVar7 == 1) break;
          if (bVar7 == 2) {
            bVar7 = pbVar24[3];
            goto joined_r0x02fcc8f0;
          }
          if (bVar7 == 3) {
            *(uint *)(param_3 + 0xb) = (uint)(fVar32 < fVar36);
            iVar19 = (int)param_2[1];
            lVar18 = *param_2;
            uVar25 = (ulong)(fVar32 >= fVar36);
            iVar1 = iVar19 + 1;
            if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) <= iVar19) {
              lVar18 = FUN_02fb5338(puVar17,iVar1,lVar18,iVar19,(long)param_2 + 0xc);
              *param_2 = lVar18;
              iVar19 = (int)param_2[1];
            }
            *(int *)(param_2 + 1) = iVar1;
            uVar26 = (&local_a0)[uVar25 * 6 + -4];
            puVar22 = (ulong *)(lVar18 + (long)iVar19 * 0x30);
            puVar22[1] = (&local_a0)[uVar25 * 6 + -3];
            *puVar22 = uVar26;
            uVar26 = (&local_a0)[uVar25 * 6 + -2];
            uVar23 = (ulong)(fVar32 < fVar36);
            puVar22[3] = (&local_a0)[uVar25 * 6 + -1];
            puVar22[2] = uVar26;
            *(int *)(puVar22 + 4) = (int)(&local_a0)[uVar25 * 6];
            uVar30 = (&local_a0)[uVar23 * 6 + -3];
            uVar25 = (&local_a0)[uVar23 * 6 + -4];
            uVar27 = (&local_a0)[uVar23 * 6 + -1];
            uVar26 = (&local_a0)[uVar23 * 6 + -2];
            uVar20 = (ulong)(uint)(&local_a0)[uVar23 * 6];
            pbVar24 = (byte *)(&local_a0)[uVar23 * 6 + 1];
            bVar7 = pbVar24[3];
            goto joined_r0x02fcc8dc;
          }
          while( true ) {
            if ((int)param_2[1] <= (int)lVar16) {
              return;
            }
            iVar1 = (int)param_2[1] + -1;
            *(int *)(param_2 + 1) = iVar1;
            puVar22 = (ulong *)(*param_2 + (long)iVar1 * 0x30);
            uVar30 = puVar22[1];
            uVar25 = *puVar22;
            uVar27 = puVar22[3];
            uVar26 = puVar22[2];
            uVar20 = (ulong)(int)puVar22[4];
            pbVar24 = (byte *)((long)param_1 + uVar20 * 6 + *param_1);
            uVar21 = (uint)(char)pbVar24[3];
            if ((int)uVar21 < 0) break;
LAB_02fccbb0:
            FUN_02fcb5a4(*param_3,(uint)*(ushort *)(pbVar24 + 4) | (uVar21 & 0xff) << 0x10,
                         param_3 + 10);
          }
        }
        uVar20 = uVar23 & 0xffffffff;
        bVar7 = local_98[3];
        pbVar24 = local_98;
        uVar25 = local_c0;
        uVar26 = local_b0;
        fVar28 = fVar43;
        fVar29 = fVar47;
joined_r0x02fcc8f0:
        uVar27 = (ulong)(uint)fVar29;
        uVar30 = (ulong)(uint)fVar28;
      } while( true );
    }
  }
  return;
}


