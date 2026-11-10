/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001d6028; name: FUN_001d6028
 */


void FUN_001d6028(long *param_1,long *param_2,undefined8 *param_3)

{
  byte bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 (**ppauVar10) [16];
  ulong uVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined1 auVar35 [16];
  undefined8 uVar36;
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
    lVar5 = param_2[1];
    lVar7 = 0;
    if (*param_1 != 0) {
      lVar7 = *param_1 + (long)param_1;
    }
    local_90 = (undefined1 (*) [16])(lVar7 + (ulong)local_88 * 0x30);
    pauStack_a8 = *(undefined1 (**) [16])(*local_90 + 8);
    local_b0 = *(undefined1 (**) [16])*local_90;
    pauStack_98 = *(undefined1 (**) [16])(local_90[1] + 8);
    local_a0 = *(undefined1 (**) [16])local_90[1];
    uVar33 = *(undefined8 *)(PTR_DAT_04372370 + 0x50);
    fVar25 = (float)param_3[2];
    fVar26 = (float)((ulong)param_3[2] >> 0x20);
    fVar27 = (float)param_3[3];
    fVar28 = (float)((ulong)param_3[3] >> 0x20);
    fVar15 = (float)param_3[6];
    auVar24._0_4_ = (*(float *)*local_90 - fVar25) * fVar15;
    fVar16 = (float)((ulong)param_3[6] >> 0x20);
    auVar24._4_4_ = (*(float *)(*local_90 + 4) - fVar26) * fVar16;
    fVar17 = (float)param_3[7];
    auVar24._8_4_ = (*(float *)(*local_90 + 8) - fVar27) * fVar17;
    fVar18 = (float)((ulong)param_3[7] >> 0x20);
    auVar24._12_4_ = (*(float *)(*local_90 + 0xc) - fVar28) * fVar18;
    fVar15 = fVar15 * (SUB84(local_a0,0) - fVar25);
    fVar16 = fVar16 * ((float)((ulong)local_a0 >> 0x20) - fVar26);
    fVar17 = fVar17 * (SUB84(pauStack_98,0) - fVar27);
    fVar18 = fVar18 * ((float)((ulong)pauStack_98 >> 0x20) - fVar28);
    auVar14._4_4_ = fVar16;
    auVar14._0_4_ = fVar15;
    auVar14._8_4_ = fVar17;
    auVar14._12_4_ = fVar18;
    auVar21 = NEON_fmin(auVar24,auVar14,4);
    uVar19 = (undefined4)((ulong)param_3[5] >> 0x20);
    auVar3._4_4_ = fVar16;
    auVar3._0_4_ = fVar15;
    auVar3._8_4_ = fVar17;
    auVar3._12_4_ = fVar18;
    auVar14 = NEON_fmax(auVar24,auVar3,4);
    uVar9 = NEON_fmaxp(auVar21._0_8_,auVar21._0_8_,4);
    uVar9 = NEON_fmax(CONCAT44(auVar21._8_4_,auVar21._8_4_),uVar9,4);
    uVar20 = NEON_fminp(auVar14._0_8_,auVar14._0_8_,4);
    uVar20 = NEON_fmin(CONCAT44(auVar14._8_4_,auVar14._8_4_),uVar20,4);
    uVar9 = NEON_fmax(uVar9,uVar33,4);
    uVar20 = NEON_fmin(uVar20,CONCAT44(uVar19,uVar19),4);
    if ((float)uVar9 <= (float)uVar20) {
      uVar9 = *(undefined8 *)PTR_PTR_04372408;
      uVar6 = *(uint *)(local_90[2] + 4);
joined_r0x001d6128:
      while (uVar6 != 0) {
        local_e8[0] = uVar6;
        lVar7 = 0;
        if (*param_1 != 0) {
          lVar7 = *param_1 + (long)param_1;
        }
        local_110[4] = (undefined1 (*) [16])(lVar7 + (ulong)uVar6 * 0x30);
        auVar14 = *local_110[4];
        local_110[1] = auVar14._8_8_;
        local_110[0] = auVar14._0_8_;
        local_110[3] = *(undefined1 (**) [16])(local_110[4][1] + 8);
        local_110[2] = *(undefined1 (**) [16])local_110[4][1];
        local_b8 = *(uint *)(local_90[2] + 8);
        local_c0 = (undefined1 (*) [16])(lVar7 + (ulong)*(uint *)(local_90[2] + 8) * 0x30);
        pauStack_d8 = *(undefined1 (**) [16])(*local_c0 + 8);
        local_e0 = *(undefined1 (**) [16])*local_c0;
        auVar3 = local_c0[1];
        pauStack_c8 = auVar3._8_8_;
        local_d0 = auVar3._0_8_;
        fVar15 = *(float *)(param_3 + 2);
        fVar16 = *(float *)((long)param_3 + 0x14);
        fVar17 = *(float *)(param_3 + 3);
        fVar18 = *(float *)((long)param_3 + 0x1c);
        fVar29 = (float)param_3[6];
        auVar23._0_4_ = (auVar14._0_4_ - fVar15) * fVar29;
        fVar30 = (float)((ulong)param_3[6] >> 0x20);
        auVar23._4_4_ = (auVar14._4_4_ - fVar16) * fVar30;
        fVar31 = (float)param_3[7];
        auVar23._8_4_ = (auVar14._8_4_ - fVar17) * fVar31;
        fVar32 = (float)((ulong)param_3[7] >> 0x20);
        auVar23._12_4_ = (auVar14._12_4_ - fVar18) * fVar32;
        fVar25 = fVar29 * (SUB84(local_110[2],0) - fVar15);
        fVar26 = fVar30 * ((float)((ulong)local_110[2] >> 0x20) - fVar16);
        fVar27 = fVar31 * (SUB84(local_110[3],0) - fVar17);
        fVar28 = fVar32 * ((float)((ulong)local_110[3] >> 0x20) - fVar18);
        auVar21._4_4_ = fVar26;
        auVar21._0_4_ = fVar25;
        auVar21._8_4_ = fVar27;
        auVar21._12_4_ = fVar28;
        auVar21 = NEON_fmin(auVar23,auVar21,4);
        uVar20 = NEON_fmaxp(auVar21._0_8_,auVar21._0_8_,4);
        auVar4._4_4_ = fVar26;
        auVar4._0_4_ = fVar25;
        auVar4._8_4_ = fVar27;
        auVar4._12_4_ = fVar28;
        auVar24 = NEON_fmax(auVar23,auVar4,4);
        uVar34 = NEON_fmax(CONCAT44(auVar21._8_4_,auVar21._8_4_),uVar20,4);
        uVar20 = NEON_fminp(auVar24._0_8_,auVar24._0_8_,4);
        uVar19 = (undefined4)((ulong)param_3[5] >> 0x20);
        uVar20 = NEON_fmin(CONCAT44(auVar24._8_4_,auVar24._8_4_),uVar20,4);
        uVar36 = NEON_fmax(uVar34,uVar33,4);
        uVar34 = NEON_fmin(uVar20,CONCAT44(uVar19,uVar19),4);
        auVar35._0_4_ = fVar29 * (SUB84(local_e0,0) - fVar15);
        auVar35._4_4_ = fVar30 * ((float)((ulong)local_e0 >> 0x20) - fVar16);
        auVar35._8_4_ = fVar31 * (SUB84(pauStack_d8,0) - fVar17);
        auVar35._12_4_ = fVar32 * ((float)((ulong)pauStack_d8 >> 0x20) - fVar18);
        fVar25 = (float)uVar36;
        auVar22._0_4_ = fVar29 * (auVar3._0_4_ - fVar15);
        auVar22._4_4_ = fVar30 * (auVar3._4_4_ - fVar16);
        auVar22._8_4_ = fVar31 * (auVar3._8_4_ - fVar17);
        auVar22._12_4_ = fVar32 * (auVar3._12_4_ - fVar18);
        auVar21 = NEON_fmin(auVar35,auVar22,4);
        uVar20 = NEON_fmaxp(auVar21._0_8_,auVar21._0_8_,4);
        auVar24 = NEON_fmax(auVar35,auVar22,4);
        uVar36 = NEON_fmax(CONCAT44(auVar21._8_4_,auVar21._8_4_),uVar20,4);
        uVar20 = NEON_fminp(auVar24._0_8_,auVar24._0_8_,4);
        uVar20 = NEON_fmin(CONCAT44(auVar24._8_4_,auVar24._8_4_),uVar20,4);
        uVar36 = NEON_fmax(uVar36,uVar33,4);
        fVar15 = (float)uVar36;
        uVar20 = NEON_fmin(uVar20,CONCAT44(uVar19,uVar19),4);
        bVar1 = fVar25 <= (float)uVar34 | (fVar15 <= (float)uVar20) << 1;
        if (bVar1 == 1) {
          local_b0 = auVar14._0_8_;
          ppauVar10 = local_110 + 4;
          pauStack_a8 = auVar14._8_8_;
          local_a0 = local_110[2];
          pauStack_98 = local_110[3];
LAB_001d6138:
          local_90 = *ppauVar10;
          local_88 = *(uint *)(ppauVar10 + 1);
          uVar6 = *(uint *)(local_90[2] + 4);
        }
        else {
          if (bVar1 == 2) {
            local_b0 = local_e0;
            ppauVar10 = &local_c0;
            pauStack_a8 = pauStack_d8;
            local_a0 = auVar3._0_8_;
            pauStack_98 = auVar3._8_8_;
            goto LAB_001d6138;
          }
          if (bVar1 != 3) goto LAB_001d62c4;
          *(uint *)(param_3 + 8) = (uint)(fVar15 < fVar25);
          iVar13 = (int)param_2[1];
          uVar8 = *(uint *)((long)param_2 + 0xc);
          uVar6 = iVar13 + 1;
          if (iVar13 < (int)(uVar8 & 0x3fffffff)) {
            lVar7 = *param_2;
          }
          else {
            lVar7 = *param_2;
            if (0x3ffffffe < iVar13) {
              FUN_032bd0a8(uVar6);
              uVar8 = *(uint *)((long)param_2 + 0xc);
            }
            uVar8 = (uVar8 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar8) {
              uVar8 = 0x3fffffff;
            }
            uVar2 = uVar6;
            if ((int)uVar6 <= (int)uVar8) {
              uVar2 = uVar8;
            }
            lVar7 = FUN_032bd1d4(uVar9,uVar2,4,lVar7,iVar13,(uint *)((long)param_2 + 0xc));
            *param_2 = lVar7;
            iVar13 = (int)param_2[1];
          }
          *(uint *)(param_2 + 1) = uVar6;
          uVar11 = (ulong)(fVar15 < fVar25);
          *(uint *)(lVar7 + (long)iVar13 * 4) = local_e8[(ulong)(fVar15 >= fVar25) * 0xc];
          pauStack_a8 = local_110[uVar11 * 6 + 1];
          pauStack_98 = local_110[uVar11 * 6 + 3];
          local_a0 = local_110[uVar11 * 6 + 2];
          local_90 = local_110[uVar11 * 6 + 4];
          local_88 = local_e8[uVar11 * 0xc];
          local_b0 = local_110[uVar11 * 6];
          uVar6 = *(uint *)(local_90[2] + 4);
        }
      }
      local_110[0] = (undefined1 (*) [16])
                     CONCAT44(*(undefined4 *)((long)param_3 + 0x2c),
                              *(undefined4 *)((long)param_3 + 0x2c));
      puVar12 = (undefined8 *)*param_3;
      uVar6 = (**(code **)(*(long *)*puVar12 + 0x10))
                        ((long *)*puVar12,*(undefined4 *)(local_90[2] + 8),&local_b0,local_110);
      *(uint *)(puVar12 + 1) = *(uint *)(puVar12 + 1) | uVar6;
      param_3[5] = CONCAT44((int)local_110[0],(int)param_3[5]);
      param_3[4] = param_3[4];
LAB_001d62c4:
      if ((int)lVar5 < (int)param_2[1]) {
        uVar6 = (int)param_2[1] - 1;
        uVar11 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2;
        *(uint *)(param_2 + 1) = uVar6;
        local_88 = *(uint *)(*param_2 + uVar11);
        lVar7 = 0;
        if (*param_1 != 0) {
          lVar7 = *param_1 + (long)param_1;
        }
        local_90 = (undefined1 (*) [16])(lVar7 + (ulong)*(uint *)(*param_2 + uVar11) * 0x30);
        pauStack_a8 = *(undefined1 (**) [16])(*local_90 + 8);
        local_b0 = *(undefined1 (**) [16])*local_90;
        local_a0 = *(undefined1 (**) [16])local_90[1];
        pauStack_98 = *(undefined1 (**) [16])(local_90[1] + 8);
        uVar6 = *(uint *)(local_90[2] + 4);
        goto joined_r0x001d6128;
      }
    }
  }
  return;
}


