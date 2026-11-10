/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00451270; name: FUN_00451270
 */


void FUN_00451270(uint *param_1,uint *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  uint uVar28;
  int iVar29;
  ulong uVar30;
  ulong uVar31;
  uint local_a0 [4];
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  
  if (param_3 != 0) {
    uVar8 = *param_1;
    uVar7 = param_1[1];
    uVar10 = param_1[4];
    uVar24 = param_1[5];
    uVar17 = param_1[6];
    uVar19 = param_1[7];
    uVar26 = param_1[2];
    uVar21 = param_1[3];
    do {
      uVar13 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
      local_a0[0] = uVar13 >> 0x10 | uVar13 << 0x10;
      iVar1 = uVar19 + ((uVar10 >> 6 | uVar10 << 0x1a) ^ (uVar10 >> 0xb | uVar10 << 0x15) ^
                       (uVar10 >> 0x19 | uVar10 << 7)) +
              (uVar17 & (uVar10 ^ 0xffffffff) | uVar24 & uVar10) + local_a0[0] + 0x428a2f98;
      uVar13 = iVar1 + uVar21;
      uVar22 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
      local_a0[1] = uVar22 >> 0x10 | uVar22 << 0x10;
      uVar28 = (uVar26 & uVar8 ^ uVar7 & uVar8 ^ uVar26 & uVar7) +
               ((uVar8 >> 2 | uVar8 << 0x1e) ^ (uVar8 >> 0xd | uVar8 << 0x13) ^
               (uVar8 >> 0x16 | uVar8 << 10)) + iVar1;
      iVar1 = uVar17 + (uVar13 & uVar10 | uVar24 & (uVar13 ^ 0xffffffff)) + local_a0[1] +
              ((uVar13 >> 6 | uVar13 * 0x4000000) ^ (uVar13 >> 0xb | uVar13 * 0x200000) ^
              (uVar13 >> 0x19 | uVar13 * 0x80)) + 0x71374491;
      uVar22 = iVar1 + uVar26;
      uVar23 = (param_2[2] & 0xff00ff00) >> 8 | (param_2[2] & 0xff00ff) << 8;
      local_a0[2] = uVar23 >> 0x10 | uVar23 << 0x10;
      uVar12 = ((uVar28 >> 2 | uVar28 * 0x40000000) ^ (uVar28 >> 0xd | uVar28 * 0x80000) ^
               (uVar28 >> 0x16 | uVar28 * 0x400)) +
               (uVar28 & uVar7 ^ uVar7 & uVar8 ^ uVar28 & uVar8) + iVar1;
      uVar23 = (param_2[3] & 0xff00ff00) >> 8 | (param_2[3] & 0xff00ff) << 8;
      local_a0[3] = uVar23 >> 0x10 | uVar23 << 0x10;
      iVar1 = uVar24 + local_a0[2] + (uVar22 & uVar13 | uVar10 & (uVar22 ^ 0xffffffff)) +
              ((uVar22 >> 6 | uVar22 * 0x4000000) ^ (uVar22 >> 0xb | uVar22 * 0x200000) ^
              (uVar22 >> 0x19 | uVar22 * 0x80)) + -0x4a3f0431;
      uVar23 = iVar1 + uVar7;
      uVar9 = ((uVar12 >> 2 | uVar12 * 0x40000000) ^ (uVar12 >> 0xd | uVar12 * 0x80000) ^
              (uVar12 >> 0x16 | uVar12 * 0x400)) +
              (uVar12 & uVar8 ^ uVar28 & uVar8 ^ uVar12 & uVar28) + iVar1;
      uVar11 = (param_2[4] & 0xff00ff00) >> 8 | (param_2[4] & 0xff00ff) << 8;
      local_90 = uVar11 >> 0x10 | uVar11 << 0x10;
      iVar1 = uVar10 + local_a0[3] + (uVar23 & uVar22 | uVar13 & (uVar23 ^ 0xffffffff)) +
              ((uVar23 >> 6 | uVar23 * 0x4000000) ^ (uVar23 >> 0xb | uVar23 * 0x200000) ^
              (uVar23 >> 0x19 | uVar23 * 0x80)) + -0x164a245b;
      uVar11 = iVar1 + uVar8;
      iVar2 = uVar13 + local_90 + (uVar11 & uVar23 | uVar22 & (uVar11 ^ 0xffffffff)) +
              ((uVar11 >> 6 | uVar11 * 0x4000000) ^ (uVar11 >> 0xb | uVar11 * 0x200000) ^
              (uVar11 >> 0x19 | uVar11 * 0x80)) + 0x3956c25b;
      uVar13 = ((uVar9 >> 2 | uVar9 * 0x40000000) ^ (uVar9 >> 0xd | uVar9 * 0x80000) ^
               (uVar9 >> 0x16 | uVar9 * 0x400)) +
               (uVar9 & uVar28 ^ uVar12 & uVar28 ^ uVar9 & uVar12) + iVar1;
      uVar28 = iVar2 + uVar28;
      uVar25 = (param_2[5] & 0xff00ff00) >> 8 | (param_2[5] & 0xff00ff) << 8;
      local_8c = uVar25 >> 0x10 | uVar25 << 0x10;
      uVar25 = ((uVar13 >> 2 | uVar13 * 0x40000000) ^ (uVar13 >> 0xd | uVar13 * 0x80000) ^
               (uVar13 >> 0x16 | uVar13 * 0x400)) +
               (uVar13 & uVar12 ^ uVar9 & uVar12 ^ uVar13 & uVar9) + iVar2;
      uVar6 = (param_2[6] & 0xff00ff00) >> 8 | (param_2[6] & 0xff00ff) << 8;
      local_88 = uVar6 >> 0x10 | uVar6 << 0x10;
      iVar1 = uVar22 + local_8c + (uVar28 & uVar11 | uVar23 & (uVar28 ^ 0xffffffff)) +
              ((uVar28 >> 6 | uVar28 * 0x4000000) ^ (uVar28 >> 0xb | uVar28 * 0x200000) ^
              (uVar28 >> 0x19 | uVar28 * 0x80)) + 0x59f111f1;
      uVar12 = iVar1 + uVar12;
      uVar22 = ((uVar25 >> 2 | uVar25 * 0x40000000) ^ (uVar25 >> 0xd | uVar25 * 0x80000) ^
               (uVar25 >> 0x16 | uVar25 * 0x400)) +
               (uVar25 & uVar9 ^ uVar13 & uVar9 ^ uVar25 & uVar13) + iVar1;
      uVar6 = (param_2[7] & 0xff00ff00) >> 8 | (param_2[7] & 0xff00ff) << 8;
      local_84 = uVar6 >> 0x10 | uVar6 << 0x10;
      iVar1 = uVar23 + local_88 + (uVar12 & uVar28 | uVar11 & (uVar12 ^ 0xffffffff)) +
              ((uVar12 >> 6 | uVar12 * 0x4000000) ^ (uVar12 >> 0xb | uVar12 * 0x200000) ^
              (uVar12 >> 0x19 | uVar12 * 0x80)) + -0x6dc07d5c;
      uVar9 = iVar1 + uVar9;
      uVar23 = ((uVar22 >> 2 | uVar22 * 0x40000000) ^ (uVar22 >> 0xd | uVar22 * 0x80000) ^
               (uVar22 >> 0x16 | uVar22 * 0x400)) +
               (uVar22 & uVar13 ^ uVar25 & uVar13 ^ uVar22 & uVar25) + iVar1;
      uVar6 = (param_2[8] & 0xff00ff00) >> 8 | (param_2[8] & 0xff00ff) << 8;
      local_80 = uVar6 >> 0x10 | uVar6 << 0x10;
      iVar1 = uVar11 + local_84 + (uVar9 & uVar12 | uVar28 & (uVar9 ^ 0xffffffff)) +
              ((uVar9 >> 6 | uVar9 * 0x4000000) ^ (uVar9 >> 0xb | uVar9 * 0x200000) ^
              (uVar9 >> 0x19 | uVar9 * 0x80)) + -0x54e3a12b;
      uVar13 = iVar1 + uVar13;
      uVar11 = (param_2[9] & 0xff00ff00) >> 8 | (param_2[9] & 0xff00ff) << 8;
      uStack_7c = uVar11 >> 0x10 | uVar11 << 0x10;
      uVar11 = ((uVar23 >> 2 | uVar23 * 0x40000000) ^ (uVar23 >> 0xd | uVar23 * 0x80000) ^
               (uVar23 >> 0x16 | uVar23 * 0x400)) +
               (uVar23 & uVar25 ^ uVar22 & uVar25 ^ uVar23 & uVar22) + iVar1;
      iVar1 = uVar28 + local_80 + (uVar13 & uVar9 | uVar12 & (uVar13 ^ 0xffffffff)) +
              ((uVar13 >> 6 | uVar13 * 0x4000000) ^ (uVar13 >> 0xb | uVar13 * 0x200000) ^
              (uVar13 >> 0x19 | uVar13 * 0x80)) + -0x27f85568;
      uVar25 = iVar1 + uVar25;
      uVar28 = ((uVar11 >> 2 | uVar11 * 0x40000000) ^ (uVar11 >> 0xd | uVar11 * 0x80000) ^
               (uVar11 >> 0x16 | uVar11 * 0x400)) +
               (uVar11 & uVar22 ^ uVar23 & uVar22 ^ uVar11 & uVar23) + iVar1;
      iVar1 = uStack_7c + uVar12 + (uVar25 & uVar13 | uVar9 & (uVar25 ^ 0xffffffff)) +
              ((uVar25 >> 6 | uVar25 * 0x4000000) ^ (uVar25 >> 0xb | uVar25 * 0x200000) ^
              (uVar25 >> 0x19 | uVar25 * 0x80)) + 0x12835b01;
      uVar22 = iVar1 + uVar22;
      uVar12 = (param_2[10] & 0xff00ff00) >> 8 | (param_2[10] & 0xff00ff) << 8;
      local_78 = uVar12 >> 0x10 | uVar12 << 0x10;
      uVar12 = ((uVar28 >> 2 | uVar28 * 0x40000000) ^ (uVar28 >> 0xd | uVar28 * 0x80000) ^
               (uVar28 >> 0x16 | uVar28 * 0x400)) +
               (uVar28 & uVar23 ^ uVar11 & uVar23 ^ uVar28 & uVar11) + iVar1;
      iVar1 = local_78 + uVar9 + (uVar22 & uVar25 | uVar13 & (uVar22 ^ 0xffffffff)) +
              ((uVar22 >> 6 | uVar22 * 0x4000000) ^ (uVar22 >> 0xb | uVar22 * 0x200000) ^
              (uVar22 >> 0x19 | uVar22 * 0x80)) + 0x243185be;
      uVar23 = iVar1 + uVar23;
      uVar9 = ((uVar12 >> 2 | uVar12 * 0x40000000) ^ (uVar12 >> 0xd | uVar12 * 0x80000) ^
              (uVar12 >> 0x16 | uVar12 * 0x400)) +
              (uVar12 & uVar11 ^ uVar28 & uVar11 ^ uVar12 & uVar28) + iVar1;
      uVar6 = (param_2[0xb] & 0xff00ff00) >> 8 | (param_2[0xb] & 0xff00ff) << 8;
      local_74 = uVar6 >> 0x10 | uVar6 << 0x10;
      iVar1 = local_74 + uVar13 + (uVar23 & uVar22 | uVar25 & (uVar23 ^ 0xffffffff)) +
              ((uVar23 >> 6 | uVar23 * 0x4000000) ^ (uVar23 >> 0xb | uVar23 * 0x200000) ^
              (uVar23 >> 0x19 | uVar23 * 0x80)) + 0x550c7dc3;
      uVar11 = iVar1 + uVar11;
      uVar13 = ((uVar9 >> 2 | uVar9 * 0x40000000) ^ (uVar9 >> 0xd | uVar9 * 0x80000) ^
               (uVar9 >> 0x16 | uVar9 * 0x400)) +
               (uVar9 & uVar28 ^ uVar12 & uVar28 ^ uVar9 & uVar12) + iVar1;
      uVar6 = (param_2[0xc] & 0xff00ff00) >> 8 | (param_2[0xc] & 0xff00ff) << 8;
      local_70 = uVar6 >> 0x10 | uVar6 << 0x10;
      iVar1 = local_70 + uVar25 + (uVar11 & uVar23 | uVar22 & (uVar11 ^ 0xffffffff)) +
              ((uVar11 >> 6 | uVar11 * 0x4000000) ^ (uVar11 >> 0xb | uVar11 * 0x200000) ^
              (uVar11 >> 0x19 | uVar11 * 0x80)) + 0x72be5d74;
      uVar28 = iVar1 + uVar28;
      uVar25 = ((uVar13 >> 2 | uVar13 * 0x40000000) ^ (uVar13 >> 0xd | uVar13 * 0x80000) ^
               (uVar13 >> 0x16 | uVar13 * 0x400)) +
               (uVar13 & uVar12 ^ uVar9 & uVar12 ^ uVar13 & uVar9) + iVar1;
      uVar6 = (param_2[0xd] & 0xff00ff00) >> 8 | (param_2[0xd] & 0xff00ff) << 8;
      local_6c = uVar6 >> 0x10 | uVar6 << 0x10;
      iVar1 = local_6c + uVar22 + (uVar28 & uVar11 | uVar23 & (uVar28 ^ 0xffffffff)) +
              ((uVar28 >> 6 | uVar28 * 0x4000000) ^ (uVar28 >> 0xb | uVar28 * 0x200000) ^
              (uVar28 >> 0x19 | uVar28 * 0x80)) + -0x7f214e02;
      uVar12 = iVar1 + uVar12;
      uVar22 = ((uVar25 >> 2 | uVar25 * 0x40000000) ^ (uVar25 >> 0xd | uVar25 * 0x80000) ^
               (uVar25 >> 0x16 | uVar25 * 0x400)) +
               (uVar25 & uVar9 ^ uVar13 & uVar9 ^ uVar25 & uVar13) + iVar1;
      uVar6 = (param_2[0xe] & 0xff00ff00) >> 8 | (param_2[0xe] & 0xff00ff) << 8;
      local_68 = uVar6 >> 0x10 | uVar6 << 0x10;
      iVar1 = local_68 + uVar23 + (uVar12 & uVar28 | uVar11 & (uVar12 ^ 0xffffffff)) +
              ((uVar12 >> 6 | uVar12 * 0x4000000) ^ (uVar12 >> 0xb | uVar12 * 0x200000) ^
              (uVar12 >> 0x19 | uVar12 * 0x80)) + -0x6423f959;
      uVar9 = iVar1 + uVar9;
      uVar23 = ((uVar22 >> 2 | uVar22 * 0x40000000) ^ (uVar22 >> 0xd | uVar22 * 0x80000) ^
               (uVar22 >> 0x16 | uVar22 * 0x400)) +
               (uVar22 & uVar13 ^ uVar25 & uVar13 ^ uVar22 & uVar25) + iVar1;
      uVar6 = (param_2[0xf] & 0xff00ff00) >> 8 | (param_2[0xf] & 0xff00ff) << 8;
      local_64 = uVar6 >> 0x10 | uVar6 << 0x10;
      iVar1 = local_64 + uVar11 + (uVar9 & uVar12 | uVar28 & (uVar9 ^ 0xffffffff)) +
              ((uVar9 >> 6 | uVar9 * 0x4000000) ^ (uVar9 >> 0xb | uVar9 * 0x200000) ^
              (uVar9 >> 0x19 | uVar9 * 0x80)) + -0x3e640e8c;
      uVar13 = iVar1 + uVar13;
      uVar11 = ((uVar23 >> 2 | uVar23 * 0x40000000) ^ (uVar23 >> 0xd | uVar23 * 0x80000) ^
               (uVar23 >> 0x16 | uVar23 * 0x400)) + (uVar23 & (uVar22 ^ uVar25) ^ uVar22 & uVar25) +
               iVar1;
      piVar18 = &DAT_03a0c430;
      uVar30 = 0x12;
      do {
        iVar29 = (int)uVar30;
        uVar14 = (ulong)(iVar29 - 1) & 9;
        uVar15 = (ulong)(iVar29 + 0xc) & 0xe;
        uVar3 = iVar29 - 2U & 8;
        uVar6 = local_a0[uVar15];
        uVar4 = local_a0[uVar14];
        iVar1 = piVar18[-7];
        iVar2 = piVar18[-6];
        uVar20 = uVar30 & 10;
        uVar31 = (ulong)(iVar29 + 0xd) & 0xf;
        uVar6 = local_a0[uVar3] + local_a0[(ulong)(iVar29 + 7) & 9] +
                ((uVar4 >> 0x12 | uVar4 << 0xe) ^ uVar4 >> 3 ^ (uVar4 >> 7 | uVar4 << 0x19)) +
                ((uVar6 >> 0x13 | uVar6 << 0xd) ^ uVar6 >> 10 ^ (uVar6 >> 0x11 | uVar6 << 0xf));
        local_a0[uVar3] = uVar6;
        iVar1 = ((uVar13 >> 6 | uVar13 << 0x1a) ^ (uVar13 >> 0xb | uVar13 << 0x15) ^
                (uVar13 >> 0x19 | uVar13 << 7)) + uVar28 +
                (uVar12 & (uVar13 ^ 0xffffffff) | uVar9 & uVar13) + iVar1 + uVar6;
        uVar25 = iVar1 + uVar25;
        uVar28 = ((uVar11 >> 2 | uVar11 << 0x1e) ^ (uVar11 >> 0xd | uVar11 << 0x13) ^
                 (uVar11 >> 0x16 | uVar11 << 10)) + ((uVar11 ^ uVar23) & uVar22 ^ uVar11 & uVar23) +
                 iVar1;
        uVar6 = local_a0[uVar20];
        uVar5 = local_a0[uVar31];
        uVar6 = local_a0[uVar30 + 8 & 10] + uVar4 +
                ((uVar6 >> 0x12 | uVar6 << 0xe) ^ uVar6 >> 3 ^ (uVar6 >> 7 | uVar6 << 0x19)) +
                ((uVar5 >> 0x13 | uVar5 << 0xd) ^ uVar5 >> 10 ^ (uVar5 >> 0x11 | uVar5 << 0xf));
        iVar1 = iVar2 + uVar12 + (uVar25 & uVar13 | uVar9 & (uVar25 ^ 0xffffffff)) +
                ((uVar25 >> 6 | uVar25 * 0x4000000) ^ (uVar25 >> 0xb | uVar25 * 0x200000) ^
                (uVar25 >> 0x19 | uVar25 * 0x80)) + uVar6;
        local_a0[uVar14] = uVar6;
        uVar22 = iVar1 + uVar22;
        uVar12 = ((uVar28 >> 2 | uVar28 * 0x40000000) ^ (uVar28 >> 0xd | uVar28 * 0x80000) ^
                 (uVar28 >> 0x16 | uVar28 * 0x400)) +
                 (uVar28 & uVar23 ^ uVar11 & uVar23 ^ uVar28 & uVar11) + iVar1;
        uVar6 = local_a0[uVar3 | 3];
        uVar16 = (ulong)(iVar29 + 0xe) & 8;
        uVar4 = local_a0[uVar16];
        uVar6 = local_a0[uVar20] + local_a0[(ulong)(iVar29 + 9) & 0xb] +
                ((uVar6 >> 0x12 | uVar6 << 0xe) ^ uVar6 >> 3 ^ (uVar6 >> 7 | uVar6 << 0x19)) +
                ((uVar4 >> 0x13 | uVar4 << 0xd) ^ uVar4 >> 10 ^ (uVar4 >> 0x11 | uVar4 << 0xf));
        iVar1 = piVar18[-5];
        iVar2 = piVar18[-4];
        local_a0[uVar20] = uVar6;
        uVar4 = local_a0[uVar14];
        uVar14 = uVar30 + 6;
        uVar27 = (ulong)(iVar29 + 2) & 0xc;
        iVar1 = iVar1 + uVar9 + uVar6 + (uVar22 & uVar25 | uVar13 & (uVar22 ^ 0xffffffff)) +
                ((uVar22 >> 6 | uVar22 * 0x4000000) ^ (uVar22 >> 0xb | uVar22 * 0x200000) ^
                (uVar22 >> 0x19 | uVar22 * 0x80));
        uVar23 = iVar1 + uVar23;
        uVar9 = ((uVar12 >> 2 | uVar12 * 0x40000000) ^ (uVar12 >> 0xd | uVar12 * 0x80000) ^
                (uVar12 >> 0x16 | uVar12 * 0x400)) +
                (uVar12 & uVar11 ^ uVar28 & uVar11 ^ uVar12 & uVar28) + iVar1;
        uVar6 = local_a0[uVar27];
        uVar20 = (ulong)(iVar29 + 1) & 0xb;
        uVar6 = local_a0[uVar20] + local_a0[(ulong)(iVar29 + 10) & 0xc] +
                ((uVar6 >> 0x12 | uVar6 << 0xe) ^ uVar6 >> 3 ^ (uVar6 >> 7 | uVar6 << 0x19)) +
                ((uVar4 >> 0x13 | uVar4 << 0xd) ^ uVar4 >> 10 ^ (uVar4 >> 0x11 | uVar4 << 0xf));
        local_a0[uVar20] = uVar6;
        iVar1 = iVar2 + uVar13 + uVar6 + (uVar23 & uVar22 | uVar25 & (uVar23 ^ 0xffffffff)) +
                ((uVar23 >> 6 | uVar23 * 0x4000000) ^ (uVar23 >> 0xb | uVar23 * 0x200000) ^
                (uVar23 >> 0x19 | uVar23 * 0x80));
        uVar6 = local_a0[uVar3 | 5];
        uVar4 = local_a0[(ulong)(iVar29 + 0x10) & 10];
        uVar13 = ((uVar9 >> 2 | uVar9 * 0x40000000) ^ (uVar9 >> 0xd | uVar9 * 0x80000) ^
                 (uVar9 >> 0x16 | uVar9 * 0x400)) +
                 (uVar9 & uVar28 ^ uVar12 & uVar28 ^ uVar9 & uVar12) + iVar1;
        uVar11 = iVar1 + uVar11;
        iVar1 = piVar18[-3];
        iVar2 = piVar18[-2];
        uVar6 = local_a0[uVar27] + local_a0[(ulong)(iVar29 + 0xb) & 0xd] +
                ((uVar6 >> 0x12 | uVar6 << 0xe) ^ uVar6 >> 3 ^ (uVar6 >> 7 | uVar6 << 0x19)) +
                ((uVar4 >> 0x13 | uVar4 << 0xd) ^ uVar4 >> 10 ^ (uVar4 >> 0x11 | uVar4 << 0xf));
        local_a0[uVar27] = uVar6;
        iVar1 = iVar1 + uVar25 + uVar6 + (uVar11 & uVar23 | uVar22 & (uVar11 ^ 0xffffffff)) +
                ((uVar11 >> 6 | uVar11 * 0x4000000) ^ (uVar11 >> 0xb | uVar11 * 0x200000) ^
                (uVar11 >> 0x19 | uVar11 * 0x80));
        uVar28 = iVar1 + uVar28;
        uVar25 = ((uVar13 >> 2 | uVar13 * 0x40000000) ^ (uVar13 >> 0xd | uVar13 * 0x80000) ^
                 (uVar13 >> 0x16 | uVar13 * 0x400)) +
                 (uVar13 & uVar12 ^ uVar9 & uVar12 ^ uVar13 & uVar9) + iVar1;
        uVar27 = (ulong)(iVar29 + 4) & 0xe;
        uVar6 = local_a0[uVar27];
        uVar4 = local_a0[(ulong)(iVar29 + 0x11) & 0xb];
        uVar20 = (ulong)(iVar29 + 3) & 0xd;
        uVar6 = local_a0[uVar20] + local_a0[uVar15] +
                ((uVar6 >> 0x12 | uVar6 << 0xe) ^ uVar6 >> 3 ^ (uVar6 >> 7 | uVar6 << 0x19)) +
                ((uVar4 >> 0x13 | uVar4 << 0xd) ^ uVar4 >> 10 ^ (uVar4 >> 0x11 | uVar4 << 0xf));
        local_a0[uVar20] = uVar6;
        iVar1 = iVar2 + uVar22 + uVar6 + (uVar28 & uVar11 | uVar23 & (uVar28 ^ 0xffffffff)) +
                ((uVar28 >> 6 | uVar28 * 0x4000000) ^ (uVar28 >> 0xb | uVar28 * 0x200000) ^
                (uVar28 >> 0x19 | uVar28 * 0x80));
        uVar6 = local_a0[uVar3 | 7];
        uVar12 = iVar1 + uVar12;
        uVar22 = ((uVar25 >> 2 | uVar25 * 0x40000000) ^ (uVar25 >> 0xd | uVar25 * 0x80000) ^
                 (uVar25 >> 0x16 | uVar25 * 0x400)) +
                 (uVar25 & uVar9 ^ uVar13 & uVar9 ^ uVar25 & uVar13) + iVar1;
        uVar3 = local_a0[(ulong)(iVar29 + 0x12) & 0xc];
        iVar1 = piVar18[-1];
        uVar6 = local_a0[uVar27] + local_a0[uVar31] +
                ((uVar6 >> 0x12 | uVar6 << 0xe) ^ uVar6 >> 3 ^ (uVar6 >> 7 | uVar6 << 0x19)) +
                ((uVar3 >> 0x13 | uVar3 << 0xd) ^ uVar3 >> 10 ^ (uVar3 >> 0x11 | uVar3 << 0xf));
        local_a0[uVar27] = uVar6;
        uVar20 = (ulong)(iVar29 + 5) & 0xf;
        uVar3 = local_a0[uVar14 & 8];
        iVar1 = iVar1 + uVar23 + uVar6 + (uVar12 & uVar28 | uVar11 & (uVar12 ^ 0xffffffff)) +
                ((uVar12 >> 6 | uVar12 * 0x4000000) ^ (uVar12 >> 0xb | uVar12 * 0x200000) ^
                (uVar12 >> 0x19 | uVar12 * 0x80));
        uVar9 = iVar1 + uVar9;
        uVar23 = ((uVar22 >> 2 | uVar22 * 0x40000000) ^ (uVar22 >> 0xd | uVar22 * 0x80000) ^
                 (uVar22 >> 0x16 | uVar22 * 0x400)) +
                 (uVar22 & uVar13 ^ uVar25 & uVar13 ^ uVar22 & uVar25) + iVar1;
        uVar6 = local_a0[(ulong)(iVar29 + 0x13) & 0xd];
        iVar1 = *piVar18;
        uVar6 = local_a0[uVar20] + local_a0[uVar16] +
                ((uVar3 >> 0x12 | uVar3 << 0xe) ^ uVar3 >> 3 ^ (uVar3 >> 7 | uVar3 << 0x19)) +
                ((uVar6 >> 0x13 | uVar6 << 0xd) ^ uVar6 >> 10 ^ (uVar6 >> 0x11 | uVar6 << 0xf));
        local_a0[uVar20] = uVar6;
        iVar1 = iVar1 + uVar11 + uVar6 + (uVar9 & uVar12 | uVar28 & (uVar9 ^ 0xffffffff)) +
                ((uVar9 >> 6 | uVar9 * 0x4000000) ^ (uVar9 >> 0xb | uVar9 * 0x200000) ^
                (uVar9 >> 0x19 | uVar9 * 0x80));
        uVar13 = iVar1 + uVar13;
        uVar11 = ((uVar23 >> 2 | uVar23 * 0x40000000) ^ (uVar23 >> 0xd | uVar23 * 0x80000) ^
                 (uVar23 >> 0x16 | uVar23 * 0x400)) + (uVar23 & (uVar22 ^ uVar25) ^ uVar22 & uVar25)
                 + iVar1;
        piVar18 = piVar18 + 8;
        uVar30 = uVar30 + 8;
      } while (uVar14 < 0x40);
      uVar8 = uVar11 + uVar8;
      uVar7 = uVar23 + uVar7;
      *param_1 = uVar8;
      param_1[1] = uVar7;
      uVar26 = uVar22 + uVar26;
      uVar21 = uVar25 + uVar21;
      param_1[2] = uVar26;
      param_1[3] = uVar21;
      param_3 = param_3 + -1;
      uVar10 = uVar13 + uVar10;
      uVar24 = uVar9 + uVar24;
      param_1[4] = uVar10;
      param_1[5] = uVar24;
      param_2 = param_2 + 0x10;
      uVar17 = uVar12 + uVar17;
      uVar19 = uVar28 + uVar19;
      param_1[6] = uVar17;
      param_1[7] = uVar19;
    } while (param_3 != 0);
  }
  return;
}


