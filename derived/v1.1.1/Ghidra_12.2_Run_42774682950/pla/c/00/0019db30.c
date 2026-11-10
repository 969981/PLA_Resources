/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0019db30; name: FUN_0019db30
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0019db30(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  byte bVar8;
  undefined1 auVar9 [16];
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  long lVar16;
  long lVar17;
  undefined4 uVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 uVar21;
  ulong *puVar22;
  byte *pbVar23;
  ulong uVar24;
  int iVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  ulong uVar32;
  undefined8 uVar33;
  float fVar34;
  float fVar38;
  float fVar39;
  undefined1 auVar35 [16];
  float fVar40;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  undefined8 local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  ulong local_b8;
  ulong local_b0;
  byte *local_a8;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  byte *local_78;
  
  if ((int)param_1[1] != 0) {
    uStack_c8 = param_1[3];
    uVar31 = param_1[2];
    local_b8 = param_1[5];
    uVar32 = param_1[4];
    auVar36 = *(undefined1 (*) [16])(param_3 + 6);
    auVar42._0_4_ = (float)uVar31 - *(float *)(param_3 + 8);
    auVar42._4_4_ = (float)(uVar31 >> 0x20) - *(float *)((long)param_3 + 0x44);
    auVar42._8_4_ = (float)uStack_c8 - *(float *)(param_3 + 9);
    auVar42._12_4_ = (float)(uStack_c8 >> 0x20) - *(float *)((long)param_3 + 0x4c);
    auVar35._0_4_ = (float)uVar32 + *(float *)(param_3 + 8);
    auVar35._4_4_ = (float)(uVar32 >> 0x20) + *(float *)((long)param_3 + 0x44);
    auVar35._8_4_ = (float)local_b8 + *(float *)(param_3 + 9);
    auVar35._12_4_ = (float)(local_b8 >> 0x20) + *(float *)((long)param_3 + 0x4c);
    auVar42 = NEON_fmax(auVar42,auVar36,4);
    auVar35 = NEON_fmin(auVar35,auVar42,4);
    fVar34 = auVar36._0_4_ - auVar35._0_4_;
    fVar38 = auVar36._4_4_ - auVar35._4_4_;
    fVar39 = auVar36._8_4_ - auVar35._8_4_;
    fVar40 = auVar36._12_4_ - auVar35._12_4_;
    auVar36._0_4_ = fVar34 * fVar34;
    auVar36._4_4_ = fVar38 * fVar38;
    auVar36._8_4_ = fVar39 * fVar39;
    auVar36._12_4_ = fVar40 * fVar40;
    auVar35 = NEON_ext(auVar36,auVar36,8,1);
    if (auVar36._0_4_ + auVar36._4_4_ + auVar35._0_4_ <= (float)param_3[10]) {
      lVar16 = param_2[1];
      uVar20 = 0;
      auVar36 = *(undefined1 (*) [16])(PTR_DAT_04372370 + 0x1e0);
      uVar21 = *(undefined8 *)PTR_PTR_04372408;
      auVar35 = NEON_ext(auVar36,auVar36,8,1);
      auVar36 = NEON_ext(auVar35,auVar36,8,1);
      pbVar23 = (byte *)(*param_1 + (long)param_1);
      bVar8 = pbVar23[3];
joined_r0x0019dc00:
      while (uVar18 = (undefined4)uVar20, (char)bVar8 < '\0') {
        uVar20 = (long)(int)uVar18 + 1;
        local_e0 = auVar36._0_4_;
        fStack_dc = auVar36._4_4_;
        fStack_d8 = auVar36._8_4_;
        local_90 = (float)uVar32;
        local_a0 = (float)uVar31;
        fStack_8c = (float)(uVar32 >> 0x20);
        fStack_9c = (float)(uVar31 >> 0x20);
        fStack_88 = (float)local_b8;
        fStack_98 = (float)uStack_c8;
        local_b0._0_4_ = (int)uVar20;
        local_e0 = (local_90 - local_a0) * local_e0;
        fStack_dc = (fStack_8c - fStack_9c) * fStack_dc;
        fStack_d8 = (fStack_88 - fStack_98) * fStack_d8;
        uVar24 = (long)(int)uVar18 + (ulong)((uint)pbVar23[4] | (pbVar23[3] & 0x7f) << 8) * 2;
        local_80 = (int)uVar24;
        local_a8 = (byte *)((long)param_1 + uVar20 * 5 + *param_1);
        pbVar23 = (byte *)((long)param_1 + uVar24 * 5 + *param_1);
        local_78 = pbVar23;
        bVar10 = *local_a8 >> 4;
        bVar8 = *local_a8 & 0xf;
        bVar11 = local_a8[1] >> 4;
        bVar3 = local_a8[1] & 0xf;
        bVar12 = local_a8[2] >> 4;
        bVar4 = local_a8[2] & 0xf;
        bVar13 = *pbVar23 >> 4;
        bVar5 = *pbVar23 & 0xf;
        bVar14 = pbVar23[2] >> 4;
        bVar15 = pbVar23[1] >> 4;
        bVar6 = pbVar23[1] & 0xf;
        fVar41 = local_a0 + (float)(byte)(bVar10 * bVar10) * local_e0;
        fVar46 = fStack_9c + (float)(byte)(bVar11 * bVar11) * fStack_dc;
        local_d0 = CONCAT44(fVar46,fVar41);
        fVar47 = fStack_98 + (float)(byte)(bVar12 * bVar12) * fStack_d8;
        uStack_c8 = (ulong)(uint)fVar47;
        fVar48 = local_90 - (float)(byte)(bVar8 * bVar8) * local_e0;
        fVar49 = fStack_8c - (float)(byte)(bVar3 * bVar3) * fStack_dc;
        local_c0 = CONCAT44(fVar49,fVar48);
        fVar50 = fStack_88 - (float)(byte)(bVar4 * bVar4) * fStack_d8;
        bVar8 = pbVar23[2] & 0xf;
        local_b8 = (ulong)(uint)fVar50;
        uStack_94 = 0;
        local_a0 = local_a0 + (float)(byte)(bVar13 * bVar13) * local_e0;
        fStack_9c = fStack_9c + (float)(byte)(bVar15 * bVar15) * fStack_dc;
        uStack_84 = 0;
        fStack_98 = fStack_98 + (float)(byte)(bVar14 * bVar14) * fStack_d8;
        local_90 = local_90 - (float)(byte)(bVar5 * bVar5) * local_e0;
        fStack_8c = fStack_8c - (float)(byte)(bVar6 * bVar6) * fStack_dc;
        fStack_88 = fStack_88 - (float)(byte)(bVar8 * bVar8) * fStack_d8;
        auVar35 = *(undefined1 (*) [16])(param_3 + 6);
        fVar34 = *(float *)(param_3 + 8);
        fVar38 = *(float *)((long)param_3 + 0x44);
        fVar39 = *(float *)(param_3 + 9);
        fVar40 = *(float *)((long)param_3 + 0x4c);
        auVar43._0_4_ = fVar34 + fVar48;
        auVar43._4_4_ = fVar38 + fVar49;
        auVar43._8_4_ = fVar39 + fVar50;
        auVar43._12_4_ = fVar40 + 0.0;
        auVar37._0_4_ = fVar41 - fVar34;
        auVar37._4_4_ = fVar46 - fVar38;
        auVar37._8_4_ = fVar47 - fVar39;
        auVar37._12_4_ = 0.0 - fVar40;
        auVar42 = NEON_fmax(auVar37,auVar35,4);
        auVar42 = NEON_fmin(auVar43,auVar42,4);
        fVar41 = auVar35._0_4_ - auVar42._0_4_;
        fVar46 = auVar35._4_4_ - auVar42._4_4_;
        fVar47 = auVar35._8_4_ - auVar42._8_4_;
        fVar48 = auVar35._12_4_ - auVar42._12_4_;
        fVar41 = fVar41 * fVar41;
        fVar46 = fVar46 * fVar46;
        fVar47 = fVar47 * fVar47;
        fVar48 = fVar48 * fVar48;
        uVar31 = CONCAT44(fStack_9c,local_a0);
        uVar32 = CONCAT44(fStack_8c,local_90);
        auVar51._0_4_ = local_a0 - fVar34;
        auVar51._4_4_ = fStack_9c - fVar38;
        auVar51._8_4_ = fStack_98 - fVar39;
        auVar51._12_4_ = 0.0 - fVar40;
        auVar44._0_4_ = fVar34 + local_90;
        auVar44._4_4_ = fVar38 + fStack_8c;
        auVar44._8_4_ = fVar39 + fStack_88;
        auVar44._12_4_ = fVar40 + 0.0;
        auVar42 = NEON_fmax(auVar51,auVar35,4);
        auVar42 = NEON_fmin(auVar44,auVar42,4);
        auVar52._4_4_ = fVar46;
        auVar52._0_4_ = fVar41;
        auVar52._8_4_ = fVar47;
        auVar52._12_4_ = fVar48;
        auVar9._4_4_ = fVar46;
        auVar9._0_4_ = fVar41;
        auVar9._8_4_ = fVar47;
        auVar9._12_4_ = fVar48;
        auVar52 = NEON_ext(auVar52,auVar9,8,1);
        fVar34 = auVar35._0_4_ - auVar42._0_4_;
        fVar38 = auVar35._4_4_ - auVar42._4_4_;
        fVar39 = auVar35._8_4_ - auVar42._8_4_;
        fVar40 = auVar35._12_4_ - auVar42._12_4_;
        auVar45._0_4_ = fVar34 * fVar34;
        auVar45._4_4_ = fVar38 * fVar38;
        auVar45._8_4_ = fVar39 * fVar39;
        auVar45._12_4_ = fVar40 * fVar40;
        auVar35 = NEON_ext(auVar45,auVar45,8,1);
        fVar38 = fVar41 + fVar46 + auVar52._0_4_;
        fVar34 = auVar45._0_4_ + auVar45._4_4_ + auVar35._0_4_;
        bVar8 = fVar38 <= (float)param_3[10] | (fVar34 <= (float)param_3[10]) << 1;
        if (bVar8 == 1) {
          bVar8 = local_a8[3];
          pbVar23 = local_a8;
          uVar32 = local_c0;
          uVar31 = local_d0;
        }
        else if (bVar8 == 2) {
          uVar20 = uVar24 & 0xffffffff;
          local_b8 = (ulong)(uint)fStack_88;
          uStack_c8 = (ulong)(uint)fStack_98;
          bVar8 = pbVar23[3];
        }
        else {
          if (bVar8 != 3) goto LAB_0019e0ec;
          *(uint *)(param_3 + 0xb) = (uint)(fVar34 < fVar38);
          iVar25 = (int)param_2[1];
          uVar19 = *(uint *)((long)param_2 + 0xc);
          uVar31 = (ulong)(fVar34 >= fVar38);
          uVar1 = iVar25 + 1;
          if (iVar25 < (int)(uVar19 & 0x3fffffff)) {
            lVar17 = *param_2;
          }
          else {
            lVar17 = *param_2;
            if (0x3ffffffe < iVar25) {
              FUN_032bd0a8(uVar1);
              uVar19 = *(uint *)((long)param_2 + 0xc);
            }
            uVar19 = (uVar19 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar19) {
              uVar19 = 0x3fffffff;
            }
            uVar7 = uVar1;
            if ((int)uVar1 <= (int)uVar19) {
              uVar7 = uVar19;
            }
            lVar17 = FUN_032bd1d4(uVar21,uVar7,0x30,lVar17,iVar25,(uint *)((long)param_2 + 0xc));
            *param_2 = lVar17;
            iVar25 = (int)param_2[1];
          }
          *(uint *)(param_2 + 1) = uVar1;
          uVar32 = (&local_b0)[uVar31 * 6 + -4];
          puVar22 = (ulong *)(lVar17 + (long)iVar25 * 0x30);
          uVar24 = (ulong)(fVar34 < fVar38);
          puVar22[1] = (&local_b0)[uVar31 * 6 + -3];
          *puVar22 = uVar32;
          uVar32 = (&local_b0)[uVar31 * 6 + -2];
          puVar22[3] = (&local_b0)[uVar31 * 6 + -1];
          puVar22[2] = uVar32;
          *(int *)(puVar22 + 4) = (int)(&local_b0)[uVar31 * 6];
          uStack_c8 = (&local_b0)[uVar24 * 6 + -3];
          uVar31 = (&local_b0)[uVar24 * 6 + -4];
          local_b8 = (&local_b0)[uVar24 * 6 + -1];
          uVar32 = (&local_b0)[uVar24 * 6 + -2];
          uVar20 = (ulong)(uint)(&local_b0)[uVar24 * 6];
          pbVar23 = (byte *)(&local_b0)[uVar24 * 6 + 1];
          bVar8 = pbVar23[3];
        }
      }
      lVar17 = *param_3;
      lVar26 = *(long *)(lVar17 + 0xa8);
      if (lVar26 != 0) {
        lVar29 = *(long *)(lVar26 + 0x20);
        lVar2 = 0;
        if (lVar29 != 0) {
          lVar2 = lVar29 + lVar26 + 0x20;
        }
        lVar30 = *(long *)(lVar2 + 0x48);
        lVar29 = 0;
        if (lVar30 != 0) {
          lVar29 = lVar30 + lVar2 + 0x48;
        }
        uVar1 = uVar18 + 0x1f;
        if (-1 < (int)uVar18) {
          uVar1 = uVar18;
        }
        if ((*(uint *)(lVar26 + 0x28 +
                      (long)((int)uVar1 >> 5) * 4 +
                      (long)(*(int *)(lVar29 + 0x68) << 3) * 4 + *(long *)(lVar26 + 0x28)) &
            1 << (ulong)(uVar18 & 0x1f)) == 0) goto LAB_0019e0ec;
      }
      lVar30 = *(long *)(lVar17 + 0x50);
      lVar29 = (long)(param_1 + 8) + (ulong)CONCAT11(bVar8,pbVar23[4]) * 0x60 + param_1[8];
      lVar27 = *(long *)(lVar30 + 0x40);
      lVar26 = lVar27 + lVar30 + 0x40;
      lVar2 = 0;
      if (lVar27 != 0) {
        lVar2 = lVar26;
      }
      iVar25 = (int)(lVar29 - lVar2 >> 5) * -0x55555555;
      if ((*(int *)(lVar17 + 0x94) != iVar25) || (*(int *)(lVar17 + 0x98) != iVar25)) {
        lVar26 = lVar26 + (long)iVar25 * 0x60;
        *(long *)(lVar17 + 0x60) = lVar26;
        *(int *)(lVar17 + 0x94) = iVar25;
        *(int *)(lVar17 + 0x98) = iVar25;
        lVar27 = *(long *)(lVar30 + 0x70);
        lVar2 = 0;
        if (lVar27 != 0) {
          lVar2 = lVar27 + lVar30 + 0x70;
        }
        *(ulong *)(lVar17 + 0x70) = lVar2 + (ulong)*(uint *)(lVar26 + 0x48) * 4;
        lVar27 = *(long *)(lVar30 + 0x80);
        lVar2 = 0;
        if (lVar27 != 0) {
          lVar2 = lVar27 + lVar30 + 0x80;
        }
        *(ulong *)(lVar17 + 0x78) = lVar2 + (ulong)*(byte *)(lVar26 + 0x5b) * 0x80000;
        lVar27 = *(long *)(lVar30 + 0x60);
        lVar2 = 0;
        if (lVar27 != 0) {
          lVar2 = lVar27 + lVar30 + 0x60;
        }
        lVar2 = lVar2 + (ulong)*(uint *)(lVar26 + 0x4c) * 2;
        *(long *)(lVar17 + 0x80) = lVar2;
        lVar28 = *(long *)(lVar30 + 0x90);
        lVar27 = 0;
        if (lVar28 != 0) {
          lVar27 = lVar28 + lVar30 + 0x90;
        }
        *(ulong *)(lVar17 + 0x88) = lVar27 + (ulong)*(uint *)(lVar26 + 0x54) * 4;
        *(uint *)(lVar17 + 0x90) = (uint)*(byte *)(lVar26 + 0x58);
        lVar28 = *(long *)(lVar30 + 0x50);
        lVar27 = 0;
        if (lVar28 != 0) {
          lVar27 = lVar28 + lVar30 + 0x50;
        }
        *(ulong *)(lVar17 + 0x68) = lVar27 + (ulong)*(uint *)(lVar26 + 0x50) * 4;
        uVar33 = *(undefined8 *)(lVar26 + 0x30);
        *(undefined8 *)(lVar17 + 0x38) = *(undefined8 *)(lVar26 + 0x38);
        *(undefined8 *)(lVar17 + 0x30) = uVar33;
        uVar33 = *(undefined8 *)(lVar26 + 0x3c);
        *(ulong *)(lVar17 + 0x48) = (ulong)*(uint *)(lVar26 + 0x44);
        *(undefined8 *)(lVar17 + 0x40) = uVar33;
        *(ulong *)(lVar17 + 0x80) = lVar2 + (ulong)*(byte *)(lVar26 + 0x58) * -2;
      }
      FUN_0019e14c(lVar29,param_2,param_3);
LAB_0019e0ec:
      if ((int)lVar16 < (int)param_2[1]) {
        iVar25 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar25;
        puVar22 = (ulong *)(*param_2 + (long)iVar25 * 0x30);
        uVar20 = (ulong)(int)puVar22[4];
        uStack_c8 = puVar22[1];
        uVar31 = *puVar22;
        local_b8 = puVar22[3];
        uVar32 = puVar22[2];
        pbVar23 = (byte *)((long)param_1 + uVar20 * 5 + *param_1);
        bVar8 = pbVar23[3];
        goto joined_r0x0019dc00;
      }
    }
  }
  return;
}


