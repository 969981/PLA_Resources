/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004285d0; name: FUN_004285d0
 */


void FUN_004285d0(ulong *param_1,ulong *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  long *plVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  
  if (param_3 != 0) {
    uVar6 = *param_1;
    uVar15 = param_1[1];
    uVar22 = param_1[2];
    uVar20 = param_1[3];
    uVar4 = param_1[4];
    uVar24 = param_1[5];
    uVar2 = param_1[6];
    uVar18 = param_1[7];
    do {
      uVar16 = (*param_2 & 0xff00ff00ff00ff00) >> 8 | (*param_2 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar33 = uVar16 >> 0x20 | uVar16 << 0x20;
      lVar1 = uVar18 + (uVar2 & (uVar4 ^ 0xffffffffffffffff) | uVar24 & uVar4) + uVar33 +
              ((uVar4 >> 0x12 | uVar4 << 0x2e) ^ (uVar4 >> 0xe | uVar4 << 0x32) ^
              (uVar4 >> 0x29 | uVar4 << 0x17)) + 0x428a2f98d728ae22;
      uVar16 = lVar1 + uVar20;
      uVar34 = ((uVar6 >> 0x22 | uVar6 << 0x1e) ^ (uVar6 >> 0x1c | uVar6 << 0x24) ^
               (uVar6 >> 0x27 | uVar6 << 0x19)) +
               (uVar22 & uVar6 ^ uVar15 & uVar6 ^ uVar22 & uVar15) + lVar1;
      uVar5 = (param_2[1] & 0xff00ff00ff00ff00) >> 8 | (param_2[1] & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar5 >> 0x20 | uVar5 << 0x20;
      lVar1 = uVar2 + uVar10 + (uVar16 & uVar4 | uVar24 & (uVar16 ^ 0xffffffffffffffff)) +
              ((uVar16 >> 0x12 | uVar16 << 0x2e) ^ (uVar16 >> 0xe | uVar16 << 0x32) ^
              (uVar16 >> 0x29 | uVar16 * 0x800000)) + 0x7137449123ef65cd;
      uVar5 = lVar1 + uVar22;
      uVar28 = ((uVar34 >> 0x22 | uVar34 * 0x40000000) ^ (uVar34 >> 0x1c | uVar34 << 0x24) ^
               (uVar34 >> 0x27 | uVar34 * 0x2000000)) +
               (uVar34 & uVar15 ^ uVar15 & uVar6 ^ uVar34 & uVar6) + lVar1;
      uVar30 = (param_2[2] & 0xff00ff00ff00ff00) >> 8 | (param_2[2] & 0xff00ff00ff00ff) << 8;
      uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
      uVar35 = uVar30 >> 0x20 | uVar30 << 0x20;
      lVar1 = uVar24 + uVar35 + (uVar5 & uVar16 | uVar4 & (uVar5 ^ 0xffffffffffffffff)) +
              ((uVar5 >> 0x12 | uVar5 << 0x2e) ^ (uVar5 >> 0xe | uVar5 << 0x32) ^
              (uVar5 >> 0x29 | uVar5 * 0x800000)) + -0x4a3f043013b2c4d1;
      uVar30 = lVar1 + uVar15;
      uVar29 = ((uVar28 >> 0x22 | uVar28 * 0x40000000) ^ (uVar28 >> 0x1c | uVar28 << 0x24) ^
               (uVar28 >> 0x27 | uVar28 * 0x2000000)) +
               (uVar28 & uVar6 ^ uVar34 & uVar6 ^ uVar28 & uVar34) + lVar1;
      uVar25 = (param_2[3] & 0xff00ff00ff00ff00) >> 8 | (param_2[3] & 0xff00ff00ff00ff) << 8;
      uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar25 >> 0x20 | uVar25 << 0x20;
      lVar1 = uVar4 + uVar11 + (uVar30 & uVar5 | uVar16 & (uVar30 ^ 0xffffffffffffffff)) +
              ((uVar30 >> 0x12 | uVar30 << 0x2e) ^ (uVar30 >> 0xe | uVar30 << 0x32) ^
              (uVar30 >> 0x29 | uVar30 * 0x800000)) + -0x164a245a7e762444;
      uVar25 = lVar1 + uVar6;
      uVar3 = ((uVar29 >> 0x22 | uVar29 * 0x40000000) ^ (uVar29 >> 0x1c | uVar29 << 0x24) ^
              (uVar29 >> 0x27 | uVar29 * 0x2000000)) +
              (uVar29 & uVar34 ^ uVar28 & uVar34 ^ uVar29 & uVar28) + lVar1;
      uVar31 = (param_2[4] & 0xff00ff00ff00ff00) >> 8 | (param_2[4] & 0xff00ff00ff00ff) << 8;
      uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar31 >> 0x20 | uVar31 << 0x20;
      lVar1 = uVar16 + uVar12 + (uVar25 & uVar30 | uVar5 & (uVar25 ^ 0xffffffffffffffff)) +
              ((uVar25 >> 0x12 | uVar25 << 0x2e) ^ (uVar25 >> 0xe | uVar25 << 0x32) ^
              (uVar25 >> 0x29 | uVar25 * 0x800000)) + 0x3956c25bf348b538;
      uVar34 = lVar1 + uVar34;
      uVar16 = (param_2[5] & 0xff00ff00ff00ff00) >> 8 | (param_2[5] & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar16 >> 0x20 | uVar16 << 0x20;
      uVar16 = ((uVar3 >> 0x22 | uVar3 * 0x40000000) ^ (uVar3 >> 0x1c | uVar3 << 0x24) ^
               (uVar3 >> 0x27 | uVar3 * 0x2000000)) +
               (uVar3 & uVar28 ^ uVar29 & uVar28 ^ uVar3 & uVar29) + lVar1;
      lVar1 = uVar5 + uVar13 + (uVar34 & uVar25 | uVar30 & (uVar34 ^ 0xffffffffffffffff)) +
              ((uVar34 >> 0x12 | uVar34 << 0x2e) ^ (uVar34 >> 0xe | uVar34 << 0x32) ^
              (uVar34 >> 0x29 | uVar34 * 0x800000)) + 0x59f111f1b605d019;
      uVar28 = lVar1 + uVar28;
      uVar5 = ((uVar16 >> 0x22 | uVar16 * 0x40000000) ^ (uVar16 >> 0x1c | uVar16 << 0x24) ^
              (uVar16 >> 0x27 | uVar16 * 0x2000000)) +
              (uVar16 & uVar29 ^ uVar3 & uVar29 ^ uVar16 & uVar3) + lVar1;
      uVar31 = (param_2[6] & 0xff00ff00ff00ff00) >> 8 | (param_2[6] & 0xff00ff00ff00ff) << 8;
      uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar31 >> 0x20 | uVar31 << 0x20;
      uVar31 = (param_2[7] & 0xff00ff00ff00ff00) >> 8 | (param_2[7] & 0xff00ff00ff00ff) << 8;
      uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
      uVar17 = uVar31 >> 0x20 | uVar31 << 0x20;
      lVar1 = uVar30 + uVar14 + (uVar28 & uVar34 | uVar25 & (uVar28 ^ 0xffffffffffffffff)) +
              ((uVar28 >> 0x12 | uVar28 << 0x2e) ^ (uVar28 >> 0xe | uVar28 << 0x32) ^
              (uVar28 >> 0x29 | uVar28 * 0x800000)) + -0x6dc07d5b50e6b065;
      uVar29 = lVar1 + uVar29;
      uVar30 = ((uVar5 >> 0x22 | uVar5 * 0x40000000) ^ (uVar5 >> 0x1c | uVar5 << 0x24) ^
               (uVar5 >> 0x27 | uVar5 * 0x2000000)) +
               (uVar5 & uVar3 ^ uVar16 & uVar3 ^ uVar5 & uVar16) + lVar1;
      lVar1 = uVar25 + uVar17 + (uVar29 & uVar28 | uVar34 & (uVar29 ^ 0xffffffffffffffff)) +
              ((uVar29 >> 0x12 | uVar29 << 0x2e) ^ (uVar29 >> 0xe | uVar29 << 0x32) ^
              (uVar29 >> 0x29 | uVar29 * 0x800000)) + -0x54e3a12a25927ee8;
      uVar3 = lVar1 + uVar3;
      uVar25 = ((uVar30 >> 0x22 | uVar30 * 0x40000000) ^ (uVar30 >> 0x1c | uVar30 << 0x24) ^
               (uVar30 >> 0x27 | uVar30 * 0x2000000)) +
               (uVar30 & uVar16 ^ uVar5 & uVar16 ^ uVar30 & uVar5) + lVar1;
      uVar31 = (param_2[8] & 0xff00ff00ff00ff00) >> 8 | (param_2[8] & 0xff00ff00ff00ff) << 8;
      uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
      uVar19 = uVar31 >> 0x20 | uVar31 << 0x20;
      lVar1 = uVar34 + uVar19 + (uVar3 & uVar29 | uVar28 & (uVar3 ^ 0xffffffffffffffff)) +
              ((uVar3 >> 0x12 | uVar3 << 0x2e) ^ (uVar3 >> 0xe | uVar3 << 0x32) ^
              (uVar3 >> 0x29 | uVar3 * 0x800000)) + -0x27f855675cfcfdbe;
      uVar16 = lVar1 + uVar16;
      uVar34 = (param_2[9] & 0xff00ff00ff00ff00) >> 8 | (param_2[9] & 0xff00ff00ff00ff) << 8;
      uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 | (uVar34 & 0xffff0000ffff) << 0x10;
      uVar21 = uVar34 >> 0x20 | uVar34 << 0x20;
      uVar34 = ((uVar25 >> 0x22 | uVar25 * 0x40000000) ^ (uVar25 >> 0x1c | uVar25 << 0x24) ^
               (uVar25 >> 0x27 | uVar25 * 0x2000000)) +
               (uVar25 & uVar5 ^ uVar30 & uVar5 ^ uVar25 & uVar30) + lVar1;
      lVar1 = uVar28 + uVar21 + (uVar16 & uVar3 | uVar29 & (uVar16 ^ 0xffffffffffffffff)) +
              ((uVar16 >> 0x12 | uVar16 << 0x2e) ^ (uVar16 >> 0xe | uVar16 << 0x32) ^
              (uVar16 >> 0x29 | uVar16 * 0x800000)) + 0x12835b0145706fbe;
      uVar5 = lVar1 + uVar5;
      uVar28 = ((uVar34 >> 0x22 | uVar34 * 0x40000000) ^ (uVar34 >> 0x1c | uVar34 << 0x24) ^
               (uVar34 >> 0x27 | uVar34 * 0x2000000)) +
               (uVar34 & uVar30 ^ uVar25 & uVar30 ^ uVar34 & uVar25) + lVar1;
      uVar31 = (param_2[10] & 0xff00ff00ff00ff00) >> 8 | (param_2[10] & 0xff00ff00ff00ff) << 8;
      uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
      uVar23 = uVar31 >> 0x20 | uVar31 << 0x20;
      lVar1 = uVar29 + uVar23 + (uVar5 & uVar16 | uVar3 & (uVar5 ^ 0xffffffffffffffff)) +
              ((uVar5 >> 0x12 | uVar5 << 0x2e) ^ (uVar5 >> 0xe | uVar5 << 0x32) ^
              (uVar5 >> 0x29 | uVar5 * 0x800000)) + 0x243185be4ee4b28c;
      uVar30 = lVar1 + uVar30;
      uVar29 = ((uVar28 >> 0x22 | uVar28 * 0x40000000) ^ (uVar28 >> 0x1c | uVar28 << 0x24) ^
               (uVar28 >> 0x27 | uVar28 * 0x2000000)) +
               (uVar28 & uVar25 ^ uVar34 & uVar25 ^ uVar28 & uVar34) + lVar1;
      uVar31 = (param_2[0xb] & 0xff00ff00ff00ff00) >> 8 | (param_2[0xb] & 0xff00ff00ff00ff) << 8;
      uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar31 >> 0x20 | uVar31 << 0x20;
      lVar1 = uVar3 + uVar7 + (uVar30 & uVar5 | uVar16 & (uVar30 ^ 0xffffffffffffffff)) +
              ((uVar30 >> 0x12 | uVar30 << 0x2e) ^ (uVar30 >> 0xe | uVar30 << 0x32) ^
              (uVar30 >> 0x29 | uVar30 * 0x800000)) + 0x550c7dc3d5ffb4e2;
      uVar25 = lVar1 + uVar25;
      uVar3 = ((uVar29 >> 0x22 | uVar29 * 0x40000000) ^ (uVar29 >> 0x1c | uVar29 << 0x24) ^
              (uVar29 >> 0x27 | uVar29 * 0x2000000)) +
              (uVar29 & uVar34 ^ uVar28 & uVar34 ^ uVar29 & uVar28) + lVar1;
      uVar31 = (param_2[0xc] & 0xff00ff00ff00ff00) >> 8 | (param_2[0xc] & 0xff00ff00ff00ff) << 8;
      uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar31 >> 0x20 | uVar31 << 0x20;
      lVar1 = uVar16 + uVar8 + (uVar25 & uVar30 | uVar5 & (uVar25 ^ 0xffffffffffffffff)) +
              ((uVar25 >> 0x12 | uVar25 << 0x2e) ^ (uVar25 >> 0xe | uVar25 << 0x32) ^
              (uVar25 >> 0x29 | uVar25 * 0x800000)) + 0x72be5d74f27b896f;
      uVar34 = lVar1 + uVar34;
      uVar31 = ((uVar3 >> 0x22 | uVar3 * 0x40000000) ^ (uVar3 >> 0x1c | uVar3 << 0x24) ^
               (uVar3 >> 0x27 | uVar3 * 0x2000000)) +
               (uVar3 & uVar28 ^ uVar29 & uVar28 ^ uVar3 & uVar29) + lVar1;
      uVar16 = (param_2[0xd] & 0xff00ff00ff00ff00) >> 8 | (param_2[0xd] & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar16 >> 0x20 | uVar16 << 0x20;
      lVar1 = uVar5 + uVar9 + (uVar34 & uVar25 | uVar30 & (uVar34 ^ 0xffffffffffffffff)) +
              ((uVar34 >> 0x12 | uVar34 << 0x2e) ^ (uVar34 >> 0xe | uVar34 << 0x32) ^
              (uVar34 >> 0x29 | uVar34 * 0x800000)) + -0x7f214e01c4e9694f;
      uVar28 = lVar1 + uVar28;
      uVar5 = ((uVar31 >> 0x22 | uVar31 * 0x40000000) ^ (uVar31 >> 0x1c | uVar31 << 0x24) ^
              (uVar31 >> 0x27 | uVar31 * 0x2000000)) +
              (uVar31 & uVar29 ^ uVar3 & uVar29 ^ uVar31 & uVar3) + lVar1;
      uVar16 = (param_2[0xe] & 0xff00ff00ff00ff00) >> 8 | (param_2[0xe] & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar26 = uVar16 >> 0x20 | uVar16 << 0x20;
      uVar16 = (param_2[0xf] & 0xff00ff00ff00ff00) >> 8 | (param_2[0xf] & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar27 = uVar16 >> 0x20 | uVar16 << 0x20;
      lVar1 = uVar30 + uVar26 + (uVar28 & uVar34 | uVar25 & (uVar28 ^ 0xffffffffffffffff)) +
              ((uVar28 >> 0x12 | uVar28 << 0x2e) ^ (uVar28 >> 0xe | uVar28 << 0x32) ^
              (uVar28 >> 0x29 | uVar28 * 0x800000)) + -0x6423f958da38edcb;
      uVar29 = lVar1 + uVar29;
      uVar30 = ((uVar5 >> 0x22 | uVar5 * 0x40000000) ^ (uVar5 >> 0x1c | uVar5 << 0x24) ^
               (uVar5 >> 0x27 | uVar5 * 0x2000000)) +
               (uVar5 & uVar3 ^ uVar31 & uVar3 ^ uVar5 & uVar31) + lVar1;
      lVar1 = uVar25 + uVar27 + (uVar29 & uVar28 | uVar34 & (uVar29 ^ 0xffffffffffffffff)) +
              ((uVar29 >> 0x12 | uVar29 << 0x2e) ^ (uVar29 >> 0xe | uVar29 << 0x32) ^
              (uVar29 >> 0x29 | uVar29 * 0x800000)) + -0x3e640e8b3096d96c;
      uVar3 = lVar1 + uVar3;
      uVar25 = ((uVar30 >> 0x22 | uVar30 * 0x40000000) ^ (uVar30 >> 0x1c | uVar30 << 0x24) ^
               (uVar30 >> 0x27 | uVar30 * 0x2000000)) + (uVar30 & (uVar5 ^ uVar31) ^ uVar5 & uVar31)
               + lVar1;
      uVar16 = 0x10;
      plVar32 = &DAT_03a04810;
      do {
        uVar33 = uVar21 + uVar33 +
                 ((uVar10 >> 1 | uVar10 << 0x3f) ^ uVar10 >> 7 ^ (uVar10 >> 8 | uVar10 << 0x38)) +
                 ((uVar26 >> 0x13 | uVar26 << 0x2d) ^ uVar26 >> 6 ^ (uVar26 >> 0x3d | uVar26 << 3));
        lVar1 = (uVar3 & uVar29 | uVar28 & (uVar3 ^ 0xffffffffffffffff)) + uVar34 +
                ((uVar3 >> 0x12 | uVar3 << 0x2e) ^ (uVar3 >> 0xe | uVar3 << 0x32) ^
                (uVar3 >> 0x29 | uVar3 << 0x17)) + plVar32[-0xf] + uVar33;
        uVar31 = lVar1 + uVar31;
        uVar34 = ((uVar25 >> 0x22 | uVar25 << 0x1e) ^ (uVar25 >> 0x1c | uVar25 << 0x24) ^
                 (uVar25 >> 0x27 | uVar25 << 0x19)) + ((uVar25 ^ uVar30) & uVar5 ^ uVar25 & uVar30)
                 + lVar1;
        uVar10 = uVar23 + uVar10 +
                 ((uVar35 >> 1 | uVar35 << 0x3f) ^ uVar35 >> 7 ^ (uVar35 >> 8 | uVar35 << 0x38)) +
                 ((uVar27 >> 0x13 | uVar27 << 0x2d) ^ uVar27 >> 6 ^ (uVar27 >> 0x3d | uVar27 << 3));
        lVar1 = (uVar31 & uVar3 | uVar29 & (uVar31 ^ 0xffffffffffffffff)) + uVar28 +
                ((uVar31 >> 0x12 | uVar31 << 0x2e) ^ (uVar31 >> 0xe | uVar31 << 0x32) ^
                (uVar31 >> 0x29 | uVar31 * 0x800000)) + plVar32[-0xe] + uVar10;
        uVar5 = lVar1 + uVar5;
        uVar28 = ((uVar34 >> 0x22 | uVar34 * 0x40000000) ^ (uVar34 >> 0x1c | uVar34 << 0x24) ^
                 (uVar34 >> 0x27 | uVar34 * 0x2000000)) +
                 (uVar34 & uVar30 ^ uVar25 & uVar30 ^ uVar34 & uVar25) + lVar1;
        uVar35 = uVar7 + uVar35 +
                 ((uVar11 >> 1 | uVar11 << 0x3f) ^ uVar11 >> 7 ^ (uVar11 >> 8 | uVar11 << 0x38)) +
                 ((uVar33 >> 0x13 | uVar33 << 0x2d) ^ uVar33 >> 6 ^ (uVar33 >> 0x3d | uVar33 * 8));
        lVar1 = (uVar5 & uVar31 | uVar3 & (uVar5 ^ 0xffffffffffffffff)) + uVar29 +
                ((uVar5 >> 0x12 | uVar5 << 0x2e) ^ (uVar5 >> 0xe | uVar5 << 0x32) ^
                (uVar5 >> 0x29 | uVar5 * 0x800000)) + plVar32[-0xd] + uVar35;
        uVar30 = lVar1 + uVar30;
        uVar29 = ((uVar28 >> 0x22 | uVar28 * 0x40000000) ^ (uVar28 >> 0x1c | uVar28 << 0x24) ^
                 (uVar28 >> 0x27 | uVar28 * 0x2000000)) +
                 (uVar28 & uVar25 ^ uVar34 & uVar25 ^ uVar28 & uVar34) + lVar1;
        uVar11 = uVar8 + uVar11 +
                 ((uVar12 >> 1 | uVar12 << 0x3f) ^ uVar12 >> 7 ^ (uVar12 >> 8 | uVar12 << 0x38)) +
                 ((uVar10 >> 0x13 | uVar10 << 0x2d) ^ uVar10 >> 6 ^ (uVar10 >> 0x3d | uVar10 * 8));
        lVar1 = (uVar30 & uVar5 | uVar31 & (uVar30 ^ 0xffffffffffffffff)) + uVar3 +
                ((uVar30 >> 0x12 | uVar30 << 0x2e) ^ (uVar30 >> 0xe | uVar30 << 0x32) ^
                (uVar30 >> 0x29 | uVar30 * 0x800000)) + plVar32[-0xc] + uVar11;
        uVar25 = lVar1 + uVar25;
        uVar3 = ((uVar29 >> 0x22 | uVar29 * 0x40000000) ^ (uVar29 >> 0x1c | uVar29 << 0x24) ^
                (uVar29 >> 0x27 | uVar29 * 0x2000000)) +
                (uVar29 & uVar34 ^ uVar28 & uVar34 ^ uVar29 & uVar28) + lVar1;
        uVar12 = uVar9 + uVar12 +
                 ((uVar13 >> 1 | uVar13 << 0x3f) ^ uVar13 >> 7 ^ (uVar13 >> 8 | uVar13 << 0x38)) +
                 ((uVar35 >> 0x13 | uVar35 << 0x2d) ^ uVar35 >> 6 ^ (uVar35 >> 0x3d | uVar35 * 8));
        lVar1 = (uVar25 & uVar30 | uVar5 & (uVar25 ^ 0xffffffffffffffff)) + uVar31 +
                ((uVar25 >> 0x12 | uVar25 << 0x2e) ^ (uVar25 >> 0xe | uVar25 << 0x32) ^
                (uVar25 >> 0x29 | uVar25 * 0x800000)) + plVar32[-0xb] + uVar12;
        uVar34 = lVar1 + uVar34;
        uVar31 = ((uVar3 >> 0x22 | uVar3 * 0x40000000) ^ (uVar3 >> 0x1c | uVar3 << 0x24) ^
                 (uVar3 >> 0x27 | uVar3 * 0x2000000)) +
                 (uVar3 & uVar28 ^ uVar29 & uVar28 ^ uVar3 & uVar29) + lVar1;
        uVar13 = uVar26 + uVar13 +
                 ((uVar14 >> 1 | uVar14 << 0x3f) ^ uVar14 >> 7 ^ (uVar14 >> 8 | uVar14 << 0x38)) +
                 ((uVar11 >> 0x13 | uVar11 << 0x2d) ^ uVar11 >> 6 ^ (uVar11 >> 0x3d | uVar11 * 8));
        lVar1 = (uVar34 & uVar25 | uVar30 & (uVar34 ^ 0xffffffffffffffff)) + uVar5 +
                ((uVar34 >> 0x12 | uVar34 << 0x2e) ^ (uVar34 >> 0xe | uVar34 << 0x32) ^
                (uVar34 >> 0x29 | uVar34 * 0x800000)) + plVar32[-10] + uVar13;
        uVar28 = lVar1 + uVar28;
        uVar5 = ((uVar31 >> 0x22 | uVar31 * 0x40000000) ^ (uVar31 >> 0x1c | uVar31 << 0x24) ^
                (uVar31 >> 0x27 | uVar31 * 0x2000000)) +
                (uVar31 & uVar29 ^ uVar3 & uVar29 ^ uVar31 & uVar3) + lVar1;
        uVar14 = uVar27 + uVar14 +
                 ((uVar17 >> 1 | uVar17 << 0x3f) ^ uVar17 >> 7 ^ (uVar17 >> 8 | uVar17 << 0x38)) +
                 ((uVar12 >> 0x13 | uVar12 << 0x2d) ^ uVar12 >> 6 ^ (uVar12 >> 0x3d | uVar12 * 8));
        lVar1 = (uVar28 & uVar34 | uVar25 & (uVar28 ^ 0xffffffffffffffff)) + uVar30 +
                ((uVar28 >> 0x12 | uVar28 << 0x2e) ^ (uVar28 >> 0xe | uVar28 << 0x32) ^
                (uVar28 >> 0x29 | uVar28 * 0x800000)) + plVar32[-9] + uVar14;
        uVar29 = lVar1 + uVar29;
        uVar30 = ((uVar5 >> 0x22 | uVar5 * 0x40000000) ^ (uVar5 >> 0x1c | uVar5 << 0x24) ^
                 (uVar5 >> 0x27 | uVar5 * 0x2000000)) +
                 (uVar5 & uVar3 ^ uVar31 & uVar3 ^ uVar5 & uVar31) + lVar1;
        uVar17 = uVar33 + uVar17 +
                 ((uVar19 >> 1 | uVar19 << 0x3f) ^ uVar19 >> 7 ^ (uVar19 >> 8 | uVar19 << 0x38)) +
                 ((uVar13 >> 0x13 | uVar13 << 0x2d) ^ uVar13 >> 6 ^ (uVar13 >> 0x3d | uVar13 * 8));
        lVar1 = (uVar29 & uVar28 | uVar34 & (uVar29 ^ 0xffffffffffffffff)) + uVar25 +
                ((uVar29 >> 0x12 | uVar29 << 0x2e) ^ (uVar29 >> 0xe | uVar29 << 0x32) ^
                (uVar29 >> 0x29 | uVar29 * 0x800000)) + plVar32[-8] + uVar17;
        uVar3 = lVar1 + uVar3;
        uVar25 = ((uVar30 >> 0x22 | uVar30 * 0x40000000) ^ (uVar30 >> 0x1c | uVar30 << 0x24) ^
                 (uVar30 >> 0x27 | uVar30 * 0x2000000)) +
                 (uVar30 & uVar31 ^ uVar5 & uVar31 ^ uVar30 & uVar5) + lVar1;
        uVar19 = uVar10 + uVar19 +
                 ((uVar21 >> 1 | uVar21 << 0x3f) ^ uVar21 >> 7 ^ (uVar21 >> 8 | uVar21 << 0x38)) +
                 ((uVar14 >> 0x13 | uVar14 << 0x2d) ^ uVar14 >> 6 ^ (uVar14 >> 0x3d | uVar14 * 8));
        lVar1 = (uVar3 & uVar29 | uVar28 & (uVar3 ^ 0xffffffffffffffff)) + uVar34 +
                ((uVar3 >> 0x12 | uVar3 << 0x2e) ^ (uVar3 >> 0xe | uVar3 << 0x32) ^
                (uVar3 >> 0x29 | uVar3 * 0x800000)) + plVar32[-7] + uVar19;
        uVar31 = lVar1 + uVar31;
        uVar34 = ((uVar25 >> 0x22 | uVar25 * 0x40000000) ^ (uVar25 >> 0x1c | uVar25 << 0x24) ^
                 (uVar25 >> 0x27 | uVar25 * 0x2000000)) +
                 (uVar25 & uVar5 ^ uVar30 & uVar5 ^ uVar25 & uVar30) + lVar1;
        uVar21 = uVar35 + uVar21 +
                 ((uVar23 >> 1 | uVar23 << 0x3f) ^ uVar23 >> 7 ^ (uVar23 >> 8 | uVar23 << 0x38)) +
                 ((uVar17 >> 0x13 | uVar17 << 0x2d) ^ uVar17 >> 6 ^ (uVar17 >> 0x3d | uVar17 * 8));
        lVar1 = (uVar31 & uVar3 | uVar29 & (uVar31 ^ 0xffffffffffffffff)) + uVar28 +
                ((uVar31 >> 0x12 | uVar31 << 0x2e) ^ (uVar31 >> 0xe | uVar31 << 0x32) ^
                (uVar31 >> 0x29 | uVar31 * 0x800000)) + plVar32[-6] + uVar21;
        uVar5 = lVar1 + uVar5;
        uVar28 = ((uVar34 >> 0x22 | uVar34 * 0x40000000) ^ (uVar34 >> 0x1c | uVar34 << 0x24) ^
                 (uVar34 >> 0x27 | uVar34 * 0x2000000)) +
                 (uVar34 & uVar30 ^ uVar25 & uVar30 ^ uVar34 & uVar25) + lVar1;
        uVar23 = uVar11 + uVar23 +
                 ((uVar7 >> 1 | uVar7 << 0x3f) ^ uVar7 >> 7 ^ (uVar7 >> 8 | uVar7 << 0x38)) +
                 ((uVar19 >> 0x13 | uVar19 << 0x2d) ^ uVar19 >> 6 ^ (uVar19 >> 0x3d | uVar19 * 8));
        lVar1 = (uVar5 & uVar31 | uVar3 & (uVar5 ^ 0xffffffffffffffff)) + uVar29 +
                ((uVar5 >> 0x12 | uVar5 << 0x2e) ^ (uVar5 >> 0xe | uVar5 << 0x32) ^
                (uVar5 >> 0x29 | uVar5 * 0x800000)) + plVar32[-5] + uVar23;
        uVar30 = lVar1 + uVar30;
        uVar29 = ((uVar28 >> 0x22 | uVar28 * 0x40000000) ^ (uVar28 >> 0x1c | uVar28 << 0x24) ^
                 (uVar28 >> 0x27 | uVar28 * 0x2000000)) +
                 (uVar28 & uVar25 ^ uVar34 & uVar25 ^ uVar28 & uVar34) + lVar1;
        uVar7 = uVar12 + uVar7 +
                ((uVar8 >> 1 | uVar8 << 0x3f) ^ uVar8 >> 7 ^ (uVar8 >> 8 | uVar8 << 0x38)) +
                ((uVar21 >> 0x13 | uVar21 << 0x2d) ^ uVar21 >> 6 ^ (uVar21 >> 0x3d | uVar21 * 8));
        lVar1 = (uVar30 & uVar5 | uVar31 & (uVar30 ^ 0xffffffffffffffff)) + uVar3 +
                ((uVar30 >> 0x12 | uVar30 << 0x2e) ^ (uVar30 >> 0xe | uVar30 << 0x32) ^
                (uVar30 >> 0x29 | uVar30 * 0x800000)) + plVar32[-4] + uVar7;
        uVar25 = lVar1 + uVar25;
        uVar3 = ((uVar29 >> 0x22 | uVar29 * 0x40000000) ^ (uVar29 >> 0x1c | uVar29 << 0x24) ^
                (uVar29 >> 0x27 | uVar29 * 0x2000000)) +
                (uVar29 & uVar34 ^ uVar28 & uVar34 ^ uVar29 & uVar28) + lVar1;
        uVar8 = uVar13 + uVar8 +
                ((uVar9 >> 1 | uVar9 << 0x3f) ^ uVar9 >> 7 ^ (uVar9 >> 8 | uVar9 << 0x38)) +
                ((uVar23 >> 0x13 | uVar23 << 0x2d) ^ uVar23 >> 6 ^ (uVar23 >> 0x3d | uVar23 * 8));
        lVar1 = (uVar25 & uVar30 | uVar5 & (uVar25 ^ 0xffffffffffffffff)) + uVar31 +
                ((uVar25 >> 0x12 | uVar25 << 0x2e) ^ (uVar25 >> 0xe | uVar25 << 0x32) ^
                (uVar25 >> 0x29 | uVar25 * 0x800000)) + plVar32[-3] + uVar8;
        uVar34 = lVar1 + uVar34;
        uVar31 = ((uVar3 >> 0x22 | uVar3 * 0x40000000) ^ (uVar3 >> 0x1c | uVar3 << 0x24) ^
                 (uVar3 >> 0x27 | uVar3 * 0x2000000)) +
                 (uVar3 & uVar28 ^ uVar29 & uVar28 ^ uVar3 & uVar29) + lVar1;
        uVar9 = uVar14 + uVar9 +
                ((uVar26 >> 1 | uVar26 << 0x3f) ^ uVar26 >> 7 ^ (uVar26 >> 8 | uVar26 << 0x38)) +
                ((uVar7 >> 0x13 | uVar7 << 0x2d) ^ uVar7 >> 6 ^ (uVar7 >> 0x3d | uVar7 * 8));
        lVar1 = (uVar34 & uVar25 | uVar30 & (uVar34 ^ 0xffffffffffffffff)) + uVar5 +
                ((uVar34 >> 0x12 | uVar34 << 0x2e) ^ (uVar34 >> 0xe | uVar34 << 0x32) ^
                (uVar34 >> 0x29 | uVar34 * 0x800000)) + plVar32[-2] + uVar9;
        uVar28 = lVar1 + uVar28;
        uVar5 = ((uVar31 >> 0x22 | uVar31 * 0x40000000) ^ (uVar31 >> 0x1c | uVar31 << 0x24) ^
                (uVar31 >> 0x27 | uVar31 * 0x2000000)) +
                (uVar31 & uVar29 ^ uVar3 & uVar29 ^ uVar31 & uVar3) + lVar1;
        uVar26 = uVar17 + uVar26 +
                 ((uVar27 >> 1 | uVar27 << 0x3f) ^ uVar27 >> 7 ^ (uVar27 >> 8 | uVar27 << 0x38)) +
                 ((uVar8 >> 0x13 | uVar8 << 0x2d) ^ uVar8 >> 6 ^ (uVar8 >> 0x3d | uVar8 * 8));
        lVar1 = (uVar28 & uVar34 | uVar25 & (uVar28 ^ 0xffffffffffffffff)) + uVar30 +
                ((uVar28 >> 0x12 | uVar28 << 0x2e) ^ (uVar28 >> 0xe | uVar28 << 0x32) ^
                (uVar28 >> 0x29 | uVar28 * 0x800000)) + plVar32[-1] + uVar26;
        uVar29 = lVar1 + uVar29;
        uVar30 = ((uVar5 >> 0x22 | uVar5 * 0x40000000) ^ (uVar5 >> 0x1c | uVar5 << 0x24) ^
                 (uVar5 >> 0x27 | uVar5 * 0x2000000)) +
                 (uVar5 & uVar3 ^ uVar31 & uVar3 ^ uVar5 & uVar31) + lVar1;
        uVar27 = uVar19 + uVar27 +
                 ((uVar33 >> 1 | uVar33 << 0x3f) ^ uVar33 >> 7 ^ (uVar33 >> 8 | uVar33 << 0x38)) +
                 ((uVar9 >> 0x13 | uVar9 << 0x2d) ^ uVar9 >> 6 ^ (uVar9 >> 0x3d | uVar9 * 8));
        lVar1 = (uVar29 & uVar28 | uVar34 & (uVar29 ^ 0xffffffffffffffff)) + uVar25 +
                ((uVar29 >> 0x12 | uVar29 << 0x2e) ^ (uVar29 >> 0xe | uVar29 << 0x32) ^
                (uVar29 >> 0x29 | uVar29 * 0x800000)) + *plVar32 + uVar27;
        uVar3 = lVar1 + uVar3;
        uVar25 = ((uVar30 >> 0x22 | uVar30 * 0x40000000) ^ (uVar30 >> 0x1c | uVar30 << 0x24) ^
                 (uVar30 >> 0x27 | uVar30 * 0x2000000)) +
                 (uVar30 & (uVar5 ^ uVar31) ^ uVar5 & uVar31) + lVar1;
        uVar16 = uVar16 + 0x10;
        plVar32 = plVar32 + 0x10;
      } while (uVar16 < 0x50);
      uVar6 = uVar25 + uVar6;
      uVar15 = uVar30 + uVar15;
      *param_1 = uVar6;
      param_1[1] = uVar15;
      uVar22 = uVar5 + uVar22;
      uVar20 = uVar31 + uVar20;
      param_1[2] = uVar22;
      param_1[3] = uVar20;
      uVar4 = uVar3 + uVar4;
      uVar24 = uVar29 + uVar24;
      param_1[4] = uVar4;
      param_1[5] = uVar24;
      param_3 = param_3 + -1;
      uVar2 = uVar28 + uVar2;
      uVar18 = uVar34 + uVar18;
      param_2 = param_2 + 0x10;
      param_1[6] = uVar2;
      param_1[7] = uVar18;
    } while (param_3 != 0);
  }
  return;
}


