/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001da2b8; name: FUN_001da2b8
 */


void FUN_001da2b8(long *param_1,long *param_2,undefined8 *param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  long lVar17;
  long lVar18;
  long *plVar19;
  uint uVar20;
  int iVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  ulong uVar24;
  undefined1 (*pauVar25) [16];
  byte *pbVar26;
  undefined1 (*pauVar27) [16];
  float *pfVar28;
  uint *puVar29;
  ulong uVar30;
  float fVar31;
  float extraout_s0;
  float fVar34;
  undefined8 uVar32;
  float extraout_var;
  float fVar35;
  undefined1 auVar33 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  undefined4 uStack_f4;
  float local_f0;
  float fStack_ec;
  float local_e8;
  undefined4 uStack_e4;
  uint local_e0 [2];
  byte *local_d8;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  undefined4 uStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  uint local_b0;
  byte *local_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  uint local_80;
  byte *local_78;
  
  if ((int)param_1[1] != 0) {
    auVar41 = *(undefined1 (*) [16])(param_1 + 2);
    uStack_88 = param_1[5];
    fVar31 = (float)uStack_88;
    uVar39 = (undefined4)(uStack_88 >> 0x20);
    local_90 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 4);
    fVar46 = (float)local_90;
    fVar38 = (float)((ulong)local_90 >> 0x20);
    lVar17 = param_2[1];
    uStack_98 = auVar41._8_8_;
    local_a0 = auVar41._0_8_;
    local_80 = 0;
    local_78 = (byte *)(*param_1 + (long)param_1);
    pauVar27 = (undefined1 (*) [16])(param_3 + 2);
    auVar50 = *pauVar27;
    auVar47 = NEON_fmax(auVar41,auVar50,4);
    auVar48._12_4_ = uVar39;
    auVar48._0_12_ = *(undefined1 (*) [12])(param_1 + 4);
    auVar48 = NEON_fmin(auVar48,auVar47,4);
    pfVar28 = (float *)(param_3 + 4);
    fVar40 = auVar50._0_4_ - auVar48._0_4_;
    fVar43 = auVar50._4_4_ - auVar48._4_4_;
    fVar44 = auVar50._8_4_ - auVar48._8_4_;
    fVar45 = auVar50._12_4_ - auVar48._12_4_;
    auVar50._0_4_ = fVar40 * fVar40;
    auVar50._4_4_ = fVar43 * fVar43;
    auVar50._8_4_ = fVar44 * fVar44;
    auVar50._12_4_ = fVar45 * fVar45;
    auVar48 = NEON_ext(auVar50,auVar50,8,1);
    if (auVar50._0_4_ + auVar50._4_4_ + auVar48._0_4_ <= (float)*(undefined8 *)pfVar28) {
      iVar21 = 0;
      fVar44 = auVar41._8_4_;
      auVar48 = *(undefined1 (*) [16])(PTR_DAT_04372370 + 0x1e0);
      uVar22 = *(undefined8 *)PTR_PTR_04372408;
      auVar50 = NEON_ext(auVar48,auVar48,8,1);
      auVar48 = NEON_ext(auVar50,auVar48,8,1);
      fVar40 = auVar41._0_4_;
      fVar43 = auVar41._4_4_;
      if (-1 < (char)local_78[3]) goto LAB_001da6e8;
      do {
        uVar30 = (long)iVar21 + 1;
        local_e0[0] = (uint)uVar30;
        fVar45 = (fVar46 - auVar41._0_4_) * auVar48._0_4_;
        fVar34 = (fVar38 - auVar41._4_4_) * auVar48._4_4_;
        fVar35 = (fVar31 - auVar41._8_4_) * auVar48._8_4_;
        local_b0 = iVar21 + ((uint)*(ushort *)(local_78 + 4) | (local_78[3] & 0x7f) << 0x10) * 2;
        pbVar26 = (byte *)((long)param_1 + uVar30 * 6 + *param_1);
        local_a8 = (byte *)((long)param_1 + (long)(int)local_b0 * 6 + *param_1);
        local_d8 = pbVar26;
        bVar9 = *pbVar26 >> 4;
        bVar2 = *pbVar26 & 0xf;
        bVar10 = pbVar26[1] >> 4;
        bVar3 = pbVar26[1] & 0xf;
        bVar11 = pbVar26[2] >> 4;
        bVar4 = pbVar26[2] & 0xf;
        bVar12 = *local_a8 >> 4;
        bVar5 = *local_a8 & 0xf;
        bVar13 = local_a8[2] >> 4;
        uStack_f4 = 0;
        bVar6 = local_a8[2] & 0xf;
        uStack_e4 = 0;
        local_100 = (float)(byte)(bVar9 * bVar9) * fVar45 + fVar40;
        bVar14 = local_a8[1] >> 4;
        bVar9 = local_a8[1] & 0xf;
        fStack_fc = (float)(byte)(bVar10 * bVar10) * fVar34 + fVar43;
        fStack_f8 = (float)(byte)(bVar11 * bVar11) * fVar35 + fVar44;
        fVar36 = fVar46 - (float)(byte)(bVar2 * bVar2) * fVar45;
        fVar51 = fVar38 - (float)(byte)(bVar3 * bVar3) * fVar34;
        local_f0 = fVar36;
        fStack_ec = fVar51;
        fVar37 = fVar31 - (float)(byte)(bVar4 * bVar4) * fVar35;
        local_e8 = fVar37;
        uStack_c4 = 0;
        local_d0 = (float)(byte)(bVar12 * bVar12) * fVar45 + fVar40;
        fStack_cc = (float)(byte)(bVar14 * bVar14) * fVar34 + fVar43;
        uStack_b4 = 0;
        fStack_c8 = (float)(byte)(bVar13 * bVar13) * fVar35 + fVar44;
        fVar46 = fVar46 - (float)(byte)(bVar5 * bVar5) * fVar45;
        local_c0 = fVar46;
        fVar38 = fVar38 - (float)(byte)(bVar9 * bVar9) * fVar34;
        fVar31 = fVar31 - (float)(byte)(bVar6 * bVar6) * fVar35;
        fStack_bc = fVar38;
        fStack_b8 = fVar31;
        auVar33._4_4_ = fStack_fc;
        auVar33._0_4_ = local_100;
        auVar33._8_4_ = fStack_f8;
        auVar33._12_4_ = 0;
        uVar39 = 0;
        auVar47._4_4_ = fVar51;
        auVar47._0_4_ = fVar36;
        auVar47._8_4_ = fVar37;
        auVar50 = *(undefined1 (*) [16])(param_3 + 2);
        auVar41 = NEON_fmax(auVar33,auVar50,4);
        auVar47._12_4_ = 0;
        auVar41 = NEON_fmin(auVar47,auVar41,4);
        fVar40 = auVar50._0_4_ - auVar41._0_4_;
        fVar43 = auVar50._4_4_ - auVar41._4_4_;
        fVar44 = auVar50._8_4_ - auVar41._8_4_;
        fVar45 = auVar50._12_4_ - auVar41._12_4_;
        auVar42._0_4_ = fVar40 * fVar40;
        auVar42._4_4_ = fVar43 * fVar43;
        auVar42._8_4_ = fVar44 * fVar44;
        auVar42._12_4_ = fVar45 * fVar45;
        auVar41 = NEON_ext(auVar42,auVar42,8,1);
        fVar34 = auVar42._0_4_ + auVar42._4_4_ + auVar41._0_4_;
        uVar32 = CONCAT44(fStack_cc,local_d0);
        auVar41._8_4_ = fStack_c8;
        auVar41._0_8_ = uVar32;
        auVar41._12_4_ = 0;
        auVar16._4_4_ = fVar38;
        auVar16._0_4_ = fVar46;
        auVar16._8_4_ = fVar31;
        auVar16._12_4_ = 0;
        auVar47 = NEON_fmax(auVar41,auVar50,4);
        auVar47 = NEON_fmin(auVar16,auVar47,4);
        fVar40 = auVar50._0_4_ - auVar47._0_4_;
        fVar43 = auVar50._4_4_ - auVar47._4_4_;
        fVar44 = auVar50._8_4_ - auVar47._8_4_;
        fVar45 = auVar50._12_4_ - auVar47._12_4_;
        auVar49._0_4_ = fVar40 * fVar40;
        auVar49._4_4_ = fVar43 * fVar43;
        auVar49._8_4_ = fVar44 * fVar44;
        auVar49._12_4_ = fVar45 * fVar45;
        auVar50 = NEON_ext(auVar49,auVar49,8,1);
        fVar40 = auVar49._0_4_ + auVar49._4_4_ + auVar50._0_4_;
        bVar2 = fVar34 <= (float)param_3[4] | (fVar40 <= (float)param_3[4]) << 1;
        if (bVar2 == 1) {
LAB_001da684:
          uStack_98 = auVar33._8_8_;
          local_a0 = auVar33._0_8_;
          auVar41 = auVar33;
          fVar46 = fVar36;
          fVar38 = fVar51;
          fVar31 = fVar37;
          local_90 = CONCAT44(fVar51,fVar36);
          uStack_88 = CONCAT44(uVar39,fVar37);
          local_80 = (uint)uVar30;
          local_78 = pbVar26;
        }
        else {
          if (bVar2 != 2) {
            if (bVar2 != 3) goto LAB_001da750;
            *(uint *)(param_3 + 5) = (uint)(fVar40 < fVar34);
            iVar21 = (int)param_2[1];
            uVar20 = *(uint *)((long)param_2 + 0xc);
            uVar30 = (ulong)(fVar40 >= fVar34);
            uVar1 = iVar21 + 1;
            if (iVar21 < (int)(uVar20 & 0x3fffffff)) {
              lVar18 = *param_2;
            }
            else {
              lVar18 = *param_2;
              if (0x3ffffffe < iVar21) {
                FUN_032bd0a8(uVar1);
                uVar20 = *(uint *)((long)param_2 + 0xc);
              }
              uVar20 = (uVar20 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar20) {
                uVar20 = 0x3fffffff;
              }
              uVar7 = uVar1;
              if ((int)uVar1 <= (int)uVar20) {
                uVar7 = uVar20;
              }
              lVar18 = FUN_032bd1d4(uVar22,uVar7,0x30,lVar18,iVar21,(uint *)((long)param_2 + 0xc));
              *param_2 = lVar18;
              iVar21 = (int)param_2[1];
            }
            *(uint *)(param_2 + 1) = uVar1;
            uVar32 = *(undefined8 *)(local_e0 + uVar30 * 0xc + -8);
            puVar23 = (undefined8 *)(lVar18 + (long)iVar21 * 0x30);
            uVar24 = (ulong)(fVar40 < fVar34);
            puVar23[1] = *(undefined8 *)(local_e0 + uVar30 * 0xc + -6);
            *puVar23 = uVar32;
            uVar32 = *(undefined8 *)(local_e0 + uVar30 * 0xc + -4);
            puVar23[3] = *(undefined8 *)(local_e0 + uVar30 * 0xc + -2);
            puVar23[2] = uVar32;
            *(uint *)(puVar23 + 4) = local_e0[uVar30 * 0xc];
            uVar30 = (ulong)local_e0[uVar24 * 0xc];
            auVar33._8_8_ = *(undefined8 *)(local_e0 + uVar24 * 0xc + -6);
            auVar33._0_8_ = *(undefined8 *)(local_e0 + uVar24 * 0xc + -8);
            fVar37 = (float)*(undefined8 *)(local_e0 + uVar24 * 0xc + -2);
            uVar39 = (undefined4)((ulong)*(undefined8 *)(local_e0 + uVar24 * 0xc + -2) >> 0x20);
            fVar36 = (float)*(undefined8 *)(local_e0 + uVar24 * 0xc + -4);
            fVar51 = (float)((ulong)*(undefined8 *)(local_e0 + uVar24 * 0xc + -4) >> 0x20);
            pbVar26 = *(byte **)(local_e0 + uVar24 * 0xc + 2);
            goto LAB_001da684;
          }
          uVar30 = (ulong)local_b0;
          uStack_98 = (ulong)(uint)fStack_c8;
          uVar39 = 0;
          local_a0 = uVar32;
          local_90 = CONCAT44(fVar38,fVar46);
          uStack_88 = (ulong)(uint)fVar31;
          local_80 = local_b0;
          local_78 = local_a8;
        }
        while( true ) {
          fVar43 = auVar41._4_4_;
          iVar21 = (int)uVar30;
          fVar40 = auVar41._0_4_;
          fVar44 = auVar41._8_4_;
          if ((char)local_78[3] < '\0') break;
LAB_001da6e8:
          puVar29 = (uint *)*param_3;
          local_100 = (float)*(undefined8 *)*pauVar27;
          fStack_fc = (float)((ulong)*(undefined8 *)*pauVar27 >> 0x20);
          fStack_f8 = (float)param_3[3];
          uStack_f4 = (undefined4)((ulong)param_3[3] >> 0x20);
          plVar19 = *(long **)(puVar29 + 8);
          if (plVar19 == (long *)0x0) {
            auVar15._12_4_ = uStack_f4;
            auVar15._0_12_ = *(undefined1 (*) [12])*pauVar27;
            auVar41 = NEON_fmax(auVar15,auVar41,4);
            auVar8._4_4_ = fVar38;
            auVar8._0_4_ = fVar46;
            auVar8._8_4_ = fVar31;
            auVar8._12_4_ = uVar39;
            auVar41 = NEON_fmin(auVar41,auVar8,4);
            fStack_f8 = auVar41._8_4_;
            uStack_f4 = auVar41._12_4_;
            local_100 = auVar41._0_4_;
            fStack_fc = auVar41._4_4_;
            fVar31 = local_100 - (float)*(undefined8 *)*pauVar27;
            fVar40 = fStack_fc - (float)((ulong)*(undefined8 *)*pauVar27 >> 0x20);
            fVar38 = fStack_f8 - (float)param_3[3];
            fVar31 = fVar31 * fVar31;
            fVar40 = fVar40 * fVar40;
            fVar38 = fVar38 * fVar38;
            fVar46 = fVar31 + fVar40 + fVar38;
            fVar38 = fVar31 + fVar40 + fVar38;
            if (fVar46 < (float)*(undefined8 *)pfVar28) goto LAB_001da730;
          }
          else {
            (**(code **)(*plVar19 + 0x10))
                      (plVar19,(ulong)CONCAT12(local_78[3],*(undefined2 *)(local_78 + 4)),&local_a0,
                       pauVar27,&local_100,pfVar28);
            fVar46 = extraout_s0;
            fVar38 = extraout_var;
            if (extraout_s0 < (float)*(undefined8 *)pfVar28) {
LAB_001da730:
              *pfVar28 = fVar46;
              *(float *)((long)param_3 + 0x24) = fVar38;
              *(ulong *)(puVar29 + 6) = CONCAT44(uStack_f4,fStack_f8);
              *(ulong *)(puVar29 + 4) = CONCAT44(fStack_fc,local_100);
              *puVar29 = (uint)CONCAT12(local_78[3],*(undefined2 *)(local_78 + 4));
            }
          }
LAB_001da750:
          if ((int)param_2[1] <= (int)lVar17) {
            return;
          }
          iVar21 = (int)param_2[1] + -1;
          *(int *)(param_2 + 1) = iVar21;
          pauVar25 = (undefined1 (*) [16])(*param_2 + (long)iVar21 * 0x30);
          uVar30 = (ulong)*(uint *)pauVar25[2];
          auVar41 = *pauVar25;
          uStack_98 = auVar41._8_8_;
          local_a0 = auVar41._0_8_;
          uStack_88 = *(ulong *)(pauVar25[1] + 8);
          fVar31 = (float)uStack_88;
          uVar39 = (undefined4)(uStack_88 >> 0x20);
          local_90 = *(undefined8 *)pauVar25[1];
          fVar46 = (float)local_90;
          fVar38 = (float)((ulong)local_90 >> 0x20);
          local_80 = *(uint *)pauVar25[2];
          local_78 = (byte *)((long)param_1 + (long)*(int *)pauVar25[2] * 6 + *param_1);
        }
      } while( true );
    }
  }
  return;
}


