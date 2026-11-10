/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001d6618; name: FUN_001d6618
 */


void FUN_001d6618(long *param_1,long *param_2,undefined8 *param_3)

{
  byte bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long lVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined1 (**ppauVar12) [16];
  ulong uVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  float fVar34;
  float fVar36;
  undefined8 uVar35;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined1 (*local_110 [5]) [16];
  uint local_e8 [2];
  undefined1 (*local_e0) [16];
  undefined1 (*pauStack_d8) [16];
  undefined1 (*local_d0) [16];
  undefined1 (*pauStack_c8) [16];
  undefined1 (*local_c0) [16];
  uint local_b8;
  undefined1 (*local_b0) [16];
  undefined1 (*pauStack_a8) [16];
  undefined1 (*local_a0) [16];
  undefined1 (*pauStack_98) [16];
  undefined1 (*local_90) [16];
  uint local_88;
  
  local_88 = *(uint *)((long)param_1 + 0x1c);
  if (local_88 != 0) {
    lVar7 = param_2[1];
    lVar9 = 0;
    if (*param_1 != 0) {
      lVar9 = *param_1 + (long)param_1;
    }
    local_90 = (undefined1 (*) [16])(lVar9 + (ulong)local_88 * 0x30);
    pauStack_a8 = *(undefined1 (**) [16])(*local_90 + 8);
    local_b0 = *(undefined1 (**) [16])*local_90;
    pauStack_98 = *(undefined1 (**) [16])(local_90[1] + 8);
    local_a0 = *(undefined1 (**) [16])local_90[1];
    uVar33 = *(undefined8 *)(PTR_DAT_04372370 + 0x50);
    fVar27 = (float)param_3[8];
    fVar29 = (float)((ulong)param_3[8] >> 0x20);
    fVar28 = (float)param_3[2];
    fVar30 = (float)((ulong)param_3[2] >> 0x20);
    fVar31 = (float)param_3[3];
    fVar32 = (float)((ulong)param_3[3] >> 0x20);
    fVar17 = (float)param_3[6];
    auVar26._0_4_ = fVar17 * ((*(float *)*local_90 - fVar27) - fVar28);
    fVar18 = (float)((ulong)param_3[6] >> 0x20);
    auVar26._4_4_ = fVar18 * ((*(float *)(*local_90 + 4) - fVar29) - fVar30);
    fVar19 = (float)param_3[7];
    auVar26._8_4_ = fVar19 * ((*(float *)(*local_90 + 8) - fVar27) - fVar31);
    fVar20 = (float)((ulong)param_3[7] >> 0x20);
    auVar26._12_4_ = fVar20 * ((*(float *)(*local_90 + 0xc) - fVar29) - fVar32);
    fVar17 = fVar17 * ((SUB84(local_a0,0) + fVar27) - fVar28);
    fVar18 = fVar18 * (((float)((ulong)local_a0 >> 0x20) + fVar29) - fVar30);
    fVar19 = fVar19 * ((SUB84(pauStack_98,0) + fVar27) - fVar31);
    fVar20 = fVar20 * (((float)((ulong)pauStack_98 >> 0x20) + fVar29) - fVar32);
    auVar16._4_4_ = fVar18;
    auVar16._0_4_ = fVar17;
    auVar16._8_4_ = fVar19;
    auVar16._12_4_ = fVar20;
    auVar23 = NEON_fmin(auVar26,auVar16,4);
    uVar21 = (undefined4)((ulong)param_3[5] >> 0x20);
    auVar3._4_4_ = fVar18;
    auVar3._0_4_ = fVar17;
    auVar3._8_4_ = fVar19;
    auVar3._12_4_ = fVar20;
    auVar16 = NEON_fmax(auVar26,auVar3,4);
    uVar11 = NEON_fmaxp(auVar23._0_8_,auVar23._0_8_,4);
    uVar11 = NEON_fmax(CONCAT44(auVar23._8_4_,auVar23._8_4_),uVar11,4);
    uVar22 = NEON_fminp(auVar16._0_8_,auVar16._0_8_,4);
    uVar22 = NEON_fmin(CONCAT44(auVar16._8_4_,auVar16._8_4_),uVar22,4);
    uVar11 = NEON_fmax(uVar11,uVar33,4);
    uVar22 = NEON_fmin(uVar22,CONCAT44(uVar21,uVar21),4);
    if ((float)uVar11 <= (float)uVar22) {
      uVar11 = *(undefined8 *)PTR_PTR_04372408;
      uVar8 = *(uint *)(local_90[2] + 4);
joined_r0x001d6728:
      while (uVar8 != 0) {
        local_e8[0] = uVar8;
        lVar9 = 0;
        if (*param_1 != 0) {
          lVar9 = *param_1 + (long)param_1;
        }
        local_110[4] = (undefined1 (*) [16])(lVar9 + (ulong)uVar8 * 0x30);
        auVar16 = *local_110[4];
        local_110[1] = auVar16._8_8_;
        local_110[0] = auVar16._0_8_;
        local_110[3] = *(undefined1 (**) [16])(local_110[4][1] + 8);
        local_110[2] = *(undefined1 (**) [16])local_110[4][1];
        local_b8 = *(uint *)(local_90[2] + 8);
        local_c0 = (undefined1 (*) [16])(lVar9 + (ulong)*(uint *)(local_90[2] + 8) * 0x30);
        pauStack_d8 = *(undefined1 (**) [16])(*local_c0 + 8);
        local_e0 = *(undefined1 (**) [16])*local_c0;
        auVar3 = local_c0[1];
        pauStack_c8 = auVar3._8_8_;
        local_d0 = auVar3._0_8_;
        fVar17 = (float)param_3[8];
        fVar18 = (float)((ulong)param_3[8] >> 0x20);
        fVar34 = (float)param_3[2];
        fVar36 = (float)((ulong)param_3[2] >> 0x20);
        fVar37 = (float)param_3[3];
        fVar38 = (float)((ulong)param_3[3] >> 0x20);
        uVar21 = (undefined4)((ulong)param_3[5] >> 0x20);
        uVar39 = CONCAT44(uVar21,uVar21);
        fVar20 = (float)param_3[6];
        auVar25._0_4_ = fVar20 * ((SUB84(local_110[2],0) + fVar17) - fVar34);
        fVar28 = (float)((ulong)param_3[6] >> 0x20);
        auVar25._4_4_ = fVar28 * (((float)((ulong)local_110[2] >> 0x20) + fVar18) - fVar36);
        fVar30 = (float)param_3[7];
        auVar25._8_4_ = fVar30 * ((SUB84(local_110[3],0) + fVar17) - fVar37);
        fVar32 = (float)((ulong)param_3[7] >> 0x20);
        auVar25._12_4_ = fVar32 * (((float)((ulong)local_110[3] >> 0x20) + fVar18) - fVar38);
        fVar19 = fVar20 * ((auVar16._0_4_ - fVar17) - fVar34);
        fVar27 = fVar28 * ((auVar16._4_4_ - fVar18) - fVar36);
        fVar29 = fVar30 * ((auVar16._8_4_ - fVar17) - fVar37);
        fVar31 = fVar32 * ((auVar16._12_4_ - fVar18) - fVar38);
        auVar23._4_4_ = fVar27;
        auVar23._0_4_ = fVar19;
        auVar23._8_4_ = fVar29;
        auVar23._12_4_ = fVar31;
        auVar23 = NEON_fmin(auVar23,auVar25,4);
        auVar4._4_4_ = fVar27;
        auVar4._0_4_ = fVar19;
        auVar4._8_4_ = fVar29;
        auVar4._12_4_ = fVar31;
        auVar26 = NEON_fmax(auVar4,auVar25,4);
        uVar22 = NEON_fmaxp(auVar23._0_8_,auVar23._0_8_,4);
        uVar22 = NEON_fmax(CONCAT44(auVar23._8_4_,auVar23._8_4_),uVar22,4);
        uVar40 = NEON_fminp(auVar26._0_8_,auVar26._0_8_,4);
        uVar35 = NEON_fmax(uVar22,uVar33,4);
        uVar22 = NEON_fmin(CONCAT44(auVar26._8_4_,auVar26._8_4_),uVar40,4);
        uVar40 = NEON_fmin(uVar22,uVar39,4);
        auVar24._0_4_ = fVar20 * ((SUB84(local_e0,0) - fVar17) - fVar34);
        auVar24._4_4_ = fVar28 * (((float)((ulong)local_e0 >> 0x20) - fVar18) - fVar36);
        auVar24._8_4_ = fVar30 * ((SUB84(pauStack_d8,0) - fVar17) - fVar37);
        auVar24._12_4_ = fVar32 * (((float)((ulong)pauStack_d8 >> 0x20) - fVar18) - fVar38);
        fVar19 = (float)uVar35;
        fVar20 = fVar20 * ((auVar3._0_4_ + fVar17) - fVar34);
        fVar28 = fVar28 * ((auVar3._4_4_ + fVar18) - fVar36);
        fVar30 = fVar30 * ((auVar3._8_4_ + fVar17) - fVar37);
        fVar32 = fVar32 * ((auVar3._12_4_ + fVar18) - fVar38);
        auVar5._4_4_ = fVar28;
        auVar5._0_4_ = fVar20;
        auVar5._8_4_ = fVar30;
        auVar5._12_4_ = fVar32;
        auVar23 = NEON_fmin(auVar24,auVar5,4);
        auVar6._4_4_ = fVar28;
        auVar6._0_4_ = fVar20;
        auVar6._8_4_ = fVar30;
        auVar6._12_4_ = fVar32;
        auVar26 = NEON_fmax(auVar24,auVar6,4);
        uVar22 = NEON_fmaxp(auVar23._0_8_,auVar23._0_8_,4);
        uVar35 = NEON_fmax(CONCAT44(auVar23._8_4_,auVar23._8_4_),uVar22,4);
        uVar22 = NEON_fminp(auVar26._0_8_,auVar26._0_8_,4);
        uVar22 = NEON_fmin(CONCAT44(auVar26._8_4_,auVar26._8_4_),uVar22,4);
        uVar35 = NEON_fmax(uVar35,uVar33,4);
        fVar17 = (float)uVar35;
        uVar22 = NEON_fmin(uVar22,uVar39,4);
        bVar1 = fVar19 <= (float)uVar40 | (fVar17 <= (float)uVar22) << 1;
        if (bVar1 == 1) {
          local_b0 = auVar16._0_8_;
          ppauVar12 = local_110 + 4;
          pauStack_a8 = auVar16._8_8_;
          local_a0 = local_110[2];
          pauStack_98 = local_110[3];
LAB_001d6738:
          local_90 = *ppauVar12;
          local_88 = *(uint *)(ppauVar12 + 1);
          uVar8 = *(uint *)(local_90[2] + 4);
        }
        else {
          if (bVar1 == 2) {
            local_b0 = local_e0;
            ppauVar12 = &local_c0;
            pauStack_a8 = pauStack_d8;
            local_a0 = auVar3._0_8_;
            pauStack_98 = auVar3._8_8_;
            goto LAB_001d6738;
          }
          if (bVar1 != 3) goto LAB_001d68dc;
          *(uint *)(param_3 + 9) = (uint)(fVar17 < fVar19);
          iVar15 = (int)param_2[1];
          uVar10 = *(uint *)((long)param_2 + 0xc);
          uVar8 = iVar15 + 1;
          if (iVar15 < (int)(uVar10 & 0x3fffffff)) {
            lVar9 = *param_2;
          }
          else {
            lVar9 = *param_2;
            if (0x3ffffffe < iVar15) {
              FUN_032bd0a8(uVar8);
              uVar10 = *(uint *)((long)param_2 + 0xc);
            }
            uVar10 = (uVar10 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar10) {
              uVar10 = 0x3fffffff;
            }
            uVar2 = uVar8;
            if ((int)uVar8 <= (int)uVar10) {
              uVar2 = uVar10;
            }
            lVar9 = FUN_032bd1d4(uVar11,uVar2,4,lVar9,iVar15,(uint *)((long)param_2 + 0xc));
            *param_2 = lVar9;
            iVar15 = (int)param_2[1];
          }
          *(uint *)(param_2 + 1) = uVar8;
          uVar13 = (ulong)(fVar17 < fVar19);
          *(uint *)(lVar9 + (long)iVar15 * 4) = local_e8[(ulong)(fVar17 >= fVar19) * 0xc];
          pauStack_a8 = local_110[uVar13 * 6 + 1];
          pauStack_98 = local_110[uVar13 * 6 + 3];
          local_a0 = local_110[uVar13 * 6 + 2];
          local_90 = local_110[uVar13 * 6 + 4];
          local_88 = local_e8[uVar13 * 0xc];
          local_b0 = local_110[uVar13 * 6];
          uVar8 = *(uint *)(local_90[2] + 4);
        }
      }
      local_110[0] = (undefined1 (*) [16])
                     CONCAT44(*(undefined4 *)((long)param_3 + 0x2c),
                              *(undefined4 *)((long)param_3 + 0x2c));
      puVar14 = (undefined8 *)*param_3;
      uVar8 = (**(code **)(*(long *)*puVar14 + 0x10))
                        ((long *)*puVar14,*(undefined4 *)(local_90[2] + 8),&local_b0,local_110);
      *(uint *)(puVar14 + 1) = *(uint *)(puVar14 + 1) | uVar8;
      param_3[5] = CONCAT44((int)local_110[0],(int)param_3[5]);
      param_3[4] = param_3[4];
LAB_001d68dc:
      if ((int)lVar7 < (int)param_2[1]) {
        uVar8 = (int)param_2[1] - 1;
        uVar13 = -(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar8 << 2;
        *(uint *)(param_2 + 1) = uVar8;
        local_88 = *(uint *)(*param_2 + uVar13);
        lVar9 = 0;
        if (*param_1 != 0) {
          lVar9 = *param_1 + (long)param_1;
        }
        local_90 = (undefined1 (*) [16])(lVar9 + (ulong)*(uint *)(*param_2 + uVar13) * 0x30);
        pauStack_a8 = *(undefined1 (**) [16])(*local_90 + 8);
        local_b0 = *(undefined1 (**) [16])*local_90;
        local_a0 = *(undefined1 (**) [16])local_90[1];
        pauStack_98 = *(undefined1 (**) [16])(local_90[1] + 8);
        uVar8 = *(uint *)(local_90[2] + 4);
        goto joined_r0x001d6728;
      }
    }
  }
  return;
}


