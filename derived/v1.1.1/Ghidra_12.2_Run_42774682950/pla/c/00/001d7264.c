/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001d7264; name: FUN_001d7264
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001d7264(long *param_1,long *param_2,undefined8 *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long lVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined1 (*pauVar13) [16];
  ulong uVar14;
  float *pfVar15;
  undefined1 (*pauVar16) [16];
  undefined4 *puVar17;
  int iVar18;
  float extraout_s0;
  float extraout_var;
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 (*local_100 [5]) [16];
  uint local_d8 [2];
  undefined1 (*local_d0) [16];
  undefined1 (*pauStack_c8) [16];
  undefined1 (*local_c0) [16];
  undefined1 (*pauStack_b8) [16];
  undefined1 (*local_b0) [16];
  uint local_a8;
  undefined1 (*local_a0) [16];
  undefined1 (*pauStack_98) [16];
  undefined1 (*local_90) [16];
  undefined1 (*pauStack_88) [16];
  undefined1 (*local_80) [16];
  uint local_78;
  
  local_78 = *(uint *)((long)param_1 + 0x1c);
  if (local_78 != 0) {
    lVar8 = param_2[1];
    lVar9 = 0;
    if (*param_1 != 0) {
      lVar9 = *param_1 + (long)param_1;
    }
    local_80 = (undefined1 (*) [16])(lVar9 + (ulong)local_78 * 0x30);
    auVar19 = *local_80;
    pauStack_98 = auVar19._8_8_;
    local_a0 = auVar19._0_8_;
    pauStack_88 = *(undefined1 (**) [16])(local_80[1] + 8);
    uVar22 = SUB84(pauStack_88,0);
    uVar23 = (undefined4)((ulong)pauStack_88 >> 0x20);
    local_90 = *(undefined1 (**) [16])local_80[1];
    uVar20 = SUB84(local_90,0);
    uVar21 = (undefined4)((ulong)local_90 >> 0x20);
    pfVar15 = (float *)(param_3 + 4);
    pauVar16 = (undefined1 (*) [16])(param_3 + 2);
    fVar27 = (float)((ulong)param_3[3] >> 0x20);
    auVar29._12_4_ = fVar27;
    auVar29._0_12_ = *(undefined1 (*) [12])*pauVar16;
    auVar29 = NEON_fmax(auVar19,auVar29,4);
    auVar30._12_4_ = uVar23;
    auVar30._0_12_ = *(undefined1 (*) [12])local_80[1];
    auVar30 = NEON_fmin(auVar30,auVar29,4);
    fVar24 = (float)*(undefined8 *)*pauVar16 - auVar30._0_4_;
    fVar25 = (float)((ulong)*(undefined8 *)*pauVar16 >> 0x20) - auVar30._4_4_;
    fVar26 = (float)param_3[3] - auVar30._8_4_;
    fVar27 = fVar27 - auVar30._12_4_;
    fVar24 = fVar24 * fVar24;
    fVar25 = fVar25 * fVar25;
    fVar26 = fVar26 * fVar26;
    fVar27 = fVar27 * fVar27;
    auVar33._4_4_ = fVar25;
    auVar33._0_4_ = fVar24;
    auVar33._8_4_ = fVar26;
    auVar33._12_4_ = fVar27;
    auVar6._4_4_ = fVar25;
    auVar6._0_4_ = fVar24;
    auVar6._8_4_ = fVar26;
    auVar6._12_4_ = fVar27;
    auVar30 = NEON_ext(auVar33,auVar6,8,1);
    if (fVar24 + fVar25 + auVar30._0_4_ <= (float)*(undefined8 *)pfVar15) {
      uVar12 = *(undefined8 *)PTR_PTR_04372408;
      uVar3 = *(uint *)(local_80[2] + 4);
joined_r0x001d7338:
      do {
        uVar11 = uVar3;
        if (uVar3 == 0) goto LAB_001d752c;
LAB_001d733c:
        local_d8[0] = uVar11;
        lVar9 = 0;
        if (*param_1 != 0) {
          lVar9 = *param_1 + (long)param_1;
        }
        pauVar13 = (undefined1 (*) [16])(lVar9 + (ulong)uVar11 * 0x30);
        local_100[4] = pauVar13;
        auVar19 = *pauVar13;
        local_100[1] = auVar19._8_8_;
        local_100[0] = auVar19._0_8_;
        local_100[3] = *(undefined1 (**) [16])(pauVar13[1] + 8);
        uVar22 = SUB84(local_100[3],0);
        uVar23 = (undefined4)((ulong)local_100[3] >> 0x20);
        local_100[2] = *(undefined1 (**) [16])pauVar13[1];
        uVar20 = SUB84(local_100[2],0);
        uVar21 = (undefined4)((ulong)local_100[2] >> 0x20);
        local_a8 = *(uint *)(local_80[2] + 8);
        local_b0 = (undefined1 (*) [16])(lVar9 + (ulong)local_a8 * 0x30);
        pauStack_c8 = *(undefined1 (**) [16])(*local_b0 + 8);
        local_d0 = *(undefined1 (**) [16])*local_b0;
        pauStack_b8 = *(undefined1 (**) [16])(local_b0[1] + 8);
        uVar28 = (undefined4)((ulong)pauStack_b8 >> 0x20);
        local_c0 = *(undefined1 (**) [16])local_b0[1];
        auVar30 = *(undefined1 (*) [16])(param_3 + 2);
        auVar29 = NEON_fmax(auVar19,auVar30,4);
        auVar4._12_4_ = uVar23;
        auVar4._0_12_ = *(undefined1 (*) [12])pauVar13[1];
        auVar29 = NEON_fmin(auVar4,auVar29,4);
        auVar33 = NEON_fmax(*local_b0,auVar30,4);
        fVar24 = auVar30._0_4_ - auVar29._0_4_;
        fVar25 = auVar30._4_4_ - auVar29._4_4_;
        fVar26 = auVar30._8_4_ - auVar29._8_4_;
        fVar27 = auVar30._12_4_ - auVar29._12_4_;
        auVar7._12_4_ = uVar28;
        auVar7._0_12_ = *(undefined1 (*) [12])local_b0[1];
        auVar33 = NEON_fmin(auVar7,auVar33,4);
        auVar32._0_4_ = fVar24 * fVar24;
        auVar32._4_4_ = fVar25 * fVar25;
        auVar32._8_4_ = fVar26 * fVar26;
        auVar32._12_4_ = fVar27 * fVar27;
        auVar29 = NEON_ext(auVar32,auVar32,8,1);
        fVar24 = auVar30._0_4_ - auVar33._0_4_;
        fVar25 = auVar30._4_4_ - auVar33._4_4_;
        fVar26 = auVar30._8_4_ - auVar33._8_4_;
        fVar27 = auVar30._12_4_ - auVar33._12_4_;
        auVar31._0_4_ = fVar24 * fVar24;
        auVar31._4_4_ = fVar25 * fVar25;
        auVar31._8_4_ = fVar26 * fVar26;
        auVar31._12_4_ = fVar27 * fVar27;
        fVar25 = auVar32._0_4_ + auVar32._4_4_ + auVar29._0_4_;
        auVar30 = NEON_ext(auVar31,auVar31,8,1);
        fVar24 = auVar31._0_4_ + auVar31._4_4_ + auVar30._0_4_;
        bVar1 = fVar25 <= (float)param_3[4] | (fVar24 <= (float)param_3[4]) << 1;
        if (bVar1 == 1) {
          local_a0 = auVar19._0_8_;
          pauStack_98 = auVar19._8_8_;
          local_90 = local_100[2];
          pauStack_88 = local_100[3];
LAB_001d7450:
          uVar3 = *(uint *)(pauVar13[2] + 4);
          local_78 = uVar11;
          local_80 = pauVar13;
          goto joined_r0x001d7338;
        }
        if (bVar1 == 2) {
          local_a0 = *(undefined1 (**) [16])*local_b0;
          pauVar13 = local_b0;
          auVar19 = *local_b0;
          uVar20 = (int)local_c0;
          uVar21 = (int)((ulong)local_c0 >> 0x20);
          uVar22 = (int)pauStack_b8;
          uVar23 = uVar28;
          uVar11 = local_a8;
          pauStack_98 = *(undefined1 (**) [16])(*local_b0 + 8);
          local_90 = local_c0;
          pauStack_88 = pauStack_b8;
          goto LAB_001d7450;
        }
        if (bVar1 != 3) {
LAB_001d7584:
          while( true ) {
            if ((int)param_2[1] <= (int)lVar8) {
              return;
            }
            uVar3 = (int)param_2[1] - 1;
            uVar14 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2;
            *(uint *)(param_2 + 1) = uVar3;
            local_78 = *(uint *)(*param_2 + uVar14);
            lVar9 = 0;
            if (*param_1 != 0) {
              lVar9 = *param_1 + (long)param_1;
            }
            local_80 = (undefined1 (*) [16])(lVar9 + (ulong)*(uint *)(*param_2 + uVar14) * 0x30);
            auVar19 = *local_80;
            pauStack_98 = auVar19._8_8_;
            local_a0 = auVar19._0_8_;
            pauStack_88 = *(undefined1 (**) [16])(local_80[1] + 8);
            uVar22 = SUB84(pauStack_88,0);
            uVar23 = (undefined4)((ulong)pauStack_88 >> 0x20);
            local_90 = *(undefined1 (**) [16])local_80[1];
            uVar20 = SUB84(local_90,0);
            uVar21 = (undefined4)((ulong)local_90 >> 0x20);
            uVar11 = *(uint *)(local_80[2] + 4);
            if (uVar11 != 0) break;
LAB_001d752c:
            local_100[0] = *(undefined1 (**) [16])*pauVar16;
            local_100[1] = (undefined1 (*) [16])param_3[3];
            puVar17 = (undefined4 *)*param_3;
            plVar10 = *(long **)(puVar17 + 8);
            if (plVar10 == (long *)0x0) goto LAB_001d75e0;
            (**(code **)(*plVar10 + 0x10))
                      (plVar10,*(undefined4 *)(local_80[2] + 8),&local_a0,pauVar16,local_100,pfVar15
                      );
            fVar24 = extraout_s0;
            fVar25 = extraout_var;
            if (extraout_s0 < (float)*(undefined8 *)pfVar15) goto LAB_001d756c;
          }
          goto LAB_001d733c;
        }
        *(uint *)(param_3 + 5) = (uint)(fVar24 < fVar25);
        iVar18 = (int)param_2[1];
        uVar11 = *(uint *)((long)param_2 + 0xc);
        uVar3 = iVar18 + 1;
        if (iVar18 < (int)(uVar11 & 0x3fffffff)) {
          lVar9 = *param_2;
        }
        else {
          lVar9 = *param_2;
          if (0x3ffffffe < iVar18) {
            FUN_032bd0a8(uVar3);
            uVar11 = *(uint *)((long)param_2 + 0xc);
          }
          uVar11 = (uVar11 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar11) {
            uVar11 = 0x3fffffff;
          }
          uVar2 = uVar3;
          if ((int)uVar3 <= (int)uVar11) {
            uVar2 = uVar11;
          }
          lVar9 = FUN_032bd1d4(uVar12,uVar2,4,lVar9,iVar18,(uint *)((long)param_2 + 0xc));
          *param_2 = lVar9;
          iVar18 = (int)param_2[1];
        }
        *(uint *)(param_2 + 1) = uVar3;
        uVar14 = (ulong)(fVar24 < fVar25);
        *(uint *)(lVar9 + (long)iVar18 * 4) = local_d8[(ulong)(fVar24 >= fVar25) * 0xc];
        auVar19._8_8_ = local_100[uVar14 * 6 + 1];
        auVar19._0_8_ = local_100[uVar14 * 6];
        pauStack_88 = local_100[uVar14 * 6 + 3];
        uVar22 = SUB84(pauStack_88,0);
        uVar23 = (undefined4)((ulong)pauStack_88 >> 0x20);
        local_90 = local_100[uVar14 * 6 + 2];
        uVar20 = SUB84(local_90,0);
        uVar21 = (undefined4)((ulong)local_90 >> 0x20);
        local_a0 = auVar19._0_8_;
        uVar3 = *(uint *)(local_100[uVar14 * 6 + 4][2] + 4);
        local_78 = local_d8[uVar14 * 0xc];
        local_80 = local_100[uVar14 * 6 + 4];
        pauStack_98 = auVar19._8_8_;
      } while( true );
    }
  }
  return;
LAB_001d75e0:
  auVar30 = NEON_fmax(*pauVar16,auVar19,4);
  auVar5._4_4_ = uVar21;
  auVar5._0_4_ = uVar20;
  auVar5._8_4_ = uVar22;
  auVar5._12_4_ = uVar23;
  auVar30 = NEON_fmin(auVar30,auVar5,4);
  local_100[1] = auVar30._8_8_;
  local_100[0] = auVar30._0_8_;
  fVar26 = auVar30._0_4_ - (float)*(undefined8 *)*pauVar16;
  fVar27 = auVar30._4_4_ - (float)((ulong)*(undefined8 *)*pauVar16 >> 0x20);
  fVar25 = auVar30._8_4_ - (float)param_3[3];
  fVar26 = fVar26 * fVar26;
  fVar27 = fVar27 * fVar27;
  fVar25 = fVar25 * fVar25;
  fVar24 = fVar26 + fVar27 + fVar25;
  fVar25 = fVar26 + fVar27 + fVar25;
  if (fVar24 < (float)*(undefined8 *)pfVar15) {
LAB_001d756c:
    *pfVar15 = fVar24;
    *(float *)((long)param_3 + 0x24) = fVar25;
    *(undefined1 (**) [16])(puVar17 + 6) = local_100[1];
    *(undefined1 (**) [16])(puVar17 + 4) = local_100[0];
    *puVar17 = *(undefined4 *)(local_80[2] + 8);
  }
  goto LAB_001d7584;
}


