/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00410a00; name: FUN_00410a00
 */


undefined8 FUN_00410a00(ulong *param_1,ulong *param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  ulong uVar16;
  uint *puVar17;
  ulong uVar18;
  undefined1 (*pauVar19) [16];
  ulong uVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  undefined1 auVar25 [16];
  uint uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  
  if ((int)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("n >= 0","external/openssl/crypto/bn/bn_shift.c",0xe0,
                  "nnopenssl_bn_rshift_fixed_top");
  }
  iVar27 = (int)param_2[1];
  uVar4 = param_3 >> 5;
  uVar20 = (ulong)uVar4;
  iVar7 = iVar27 - uVar4;
  if (iVar7 == 0 || iVar27 < (int)uVar4) {
    FUN_0040c6b0(param_1,0);
    return 1;
  }
  if ((param_1 != param_2) && (lVar11 = FUN_0040c660(param_1,iVar7), lVar11 == 0)) {
    return 0;
  }
  uVar14 = *param_2;
  puVar1 = (uint *)(uVar14 + (ulong)uVar4 * 4);
  uVar12 = *param_1;
  uVar26 = *puVar1;
  uVar2 = param_3 & 0x1f;
  if (iVar7 < 2) {
    uVar13 = 0;
  }
  else {
    param_3 = -param_3;
    uVar3 = param_3 & 0x1f;
    uVar5 = -uVar3;
    uVar6 = uVar5 | uVar5 >> 8;
    uVar4 = iVar27 + ~uVar4;
    uVar13 = (ulong)uVar4;
    if ((uVar4 < 0x10) ||
       ((lVar11 = uVar14 + uVar20 * 4, uVar12 < uVar14 + (uVar20 + uVar13) * 4 + 4 &&
        (lVar11 + 4U < uVar12 + uVar13 * 4)))) {
      uVar16 = 0;
      uVar18 = 0xffffffffffffffff;
    }
    else {
      uVar16 = uVar13 & 0xfffffff0;
      iVar27 = -uVar2;
      iVar28 = -uVar2;
      iVar29 = -uVar2;
      iVar30 = -uVar2;
      auVar25._4_4_ = uVar26;
      auVar25._0_4_ = uVar26;
      auVar25._8_4_ = uVar26;
      auVar25._12_4_ = uVar26;
      pauVar19 = (undefined1 (*) [16])(lVar11 + 0x24);
      pbVar15 = (byte *)(uVar12 + 0x20);
      uVar18 = uVar16;
      do {
        auVar38 = pauVar19[-2];
        auVar9 = pauVar19[-1];
        auVar35._8_4_ = uVar3;
        auVar35._0_8_ = CONCAT44(param_3,param_3) & 0x1f0000001f;
        auVar35._12_4_ = uVar3;
        auVar34 = NEON_ushl(auVar9,auVar35,4);
        auVar25 = NEON_ext(auVar25,auVar38,0xc,1);
        auVar35 = *pauVar19;
        auVar31._8_4_ = uVar3;
        auVar31._0_8_ = CONCAT44(param_3,param_3) & 0x1f0000001f;
        auVar31._12_4_ = uVar3;
        auVar36 = NEON_ushl(auVar35,auVar31,4);
        auVar33._4_4_ = iVar28;
        auVar33._0_4_ = iVar27;
        auVar33._8_4_ = iVar29;
        auVar33._12_4_ = iVar30;
        auVar37 = NEON_ushl(auVar25,auVar33,4);
        auVar25 = NEON_ext(auVar38,auVar9,0xc,1);
        auVar32._8_4_ = uVar3;
        auVar32._0_8_ = CONCAT44(param_3,param_3) & 0x1f0000001f;
        auVar32._12_4_ = uVar3;
        auVar33 = NEON_ushl(auVar38,auVar32,4);
        bVar21 = (byte)uVar6;
        bVar22 = (byte)(uVar6 >> 8);
        bVar23 = (byte)(uVar6 >> 0x10);
        bVar24 = (byte)(uVar5 >> 0x18);
        auVar8._4_4_ = iVar28;
        auVar8._0_4_ = iVar27;
        auVar8._8_4_ = iVar29;
        auVar8._12_4_ = iVar30;
        auVar31 = NEON_ushl(auVar25,auVar8,4);
        auVar25 = NEON_ext(auVar9,auVar35,0xc,1);
        auVar9._4_4_ = iVar28;
        auVar9._0_4_ = iVar27;
        auVar9._8_4_ = iVar29;
        auVar9._12_4_ = iVar30;
        auVar32 = NEON_ushl(auVar25,auVar9,4);
        auVar25 = pauVar19[1];
        auVar35 = NEON_ext(auVar35,auVar25,0xc,1);
        auVar38._8_4_ = uVar3;
        auVar38._0_8_ = CONCAT44(param_3,param_3) & 0x1f0000001f;
        auVar38._12_4_ = uVar3;
        auVar38 = NEON_ushl(auVar25,auVar38,4);
        pauVar19 = pauVar19 + 4;
        uVar18 = uVar18 - 0x10;
        auVar10._4_4_ = iVar28;
        auVar10._0_4_ = iVar27;
        auVar10._8_4_ = iVar29;
        auVar10._12_4_ = iVar30;
        auVar35 = NEON_ushl(auVar35,auVar10,4);
        pbVar15[-0x18] = auVar33[8] & bVar21 | auVar37[8];
        pbVar15[-0x17] = auVar33[9] & bVar22 | auVar37[9];
        pbVar15[-0x16] = auVar33[10] & bVar23 | auVar37[10];
        pbVar15[-0x15] = auVar33[0xb] & bVar24 | auVar37[0xb];
        pbVar15[-0x14] = auVar33[0xc] & bVar21 | auVar37[0xc];
        pbVar15[-0x13] = auVar33[0xd] & bVar22 | auVar37[0xd];
        pbVar15[-0x12] = auVar33[0xe] & bVar23 | auVar37[0xe];
        pbVar15[-0x11] = auVar33[0xf] & bVar24 | auVar37[0xf];
        pbVar15[-0x20] = auVar33[0] & bVar21 | auVar37[0];
        pbVar15[-0x1f] = auVar33[1] & bVar22 | auVar37[1];
        pbVar15[-0x1e] = auVar33[2] & bVar23 | auVar37[2];
        pbVar15[-0x1d] = auVar33[3] & bVar24 | auVar37[3];
        pbVar15[-0x1c] = auVar33[4] & bVar21 | auVar37[4];
        pbVar15[-0x1b] = auVar33[5] & bVar22 | auVar37[5];
        pbVar15[-0x1a] = auVar33[6] & bVar23 | auVar37[6];
        pbVar15[-0x19] = auVar33[7] & bVar24 | auVar37[7];
        pbVar15[-8] = auVar34[8] & bVar21 | auVar31[8];
        pbVar15[-7] = auVar34[9] & bVar22 | auVar31[9];
        pbVar15[-6] = auVar34[10] & bVar23 | auVar31[10];
        pbVar15[-5] = auVar34[0xb] & bVar24 | auVar31[0xb];
        pbVar15[-4] = auVar34[0xc] & bVar21 | auVar31[0xc];
        pbVar15[-3] = auVar34[0xd] & bVar22 | auVar31[0xd];
        pbVar15[-2] = auVar34[0xe] & bVar23 | auVar31[0xe];
        pbVar15[-1] = auVar34[0xf] & bVar24 | auVar31[0xf];
        pbVar15[-0x10] = auVar34[0] & bVar21 | auVar31[0];
        pbVar15[-0xf] = auVar34[1] & bVar22 | auVar31[1];
        pbVar15[-0xe] = auVar34[2] & bVar23 | auVar31[2];
        pbVar15[-0xd] = auVar34[3] & bVar24 | auVar31[3];
        pbVar15[-0xc] = auVar34[4] & bVar21 | auVar31[4];
        pbVar15[-0xb] = auVar34[5] & bVar22 | auVar31[5];
        pbVar15[-10] = auVar34[6] & bVar23 | auVar31[6];
        pbVar15[-9] = auVar34[7] & bVar24 | auVar31[7];
        pbVar15[8] = auVar36[8] & bVar21 | auVar32[8];
        pbVar15[9] = auVar36[9] & bVar22 | auVar32[9];
        pbVar15[10] = auVar36[10] & bVar23 | auVar32[10];
        pbVar15[0xb] = auVar36[0xb] & bVar24 | auVar32[0xb];
        pbVar15[0xc] = auVar36[0xc] & bVar21 | auVar32[0xc];
        pbVar15[0xd] = auVar36[0xd] & bVar22 | auVar32[0xd];
        pbVar15[0xe] = auVar36[0xe] & bVar23 | auVar32[0xe];
        pbVar15[0xf] = auVar36[0xf] & bVar24 | auVar32[0xf];
        *pbVar15 = auVar36[0] & bVar21 | auVar32[0];
        pbVar15[1] = auVar36[1] & bVar22 | auVar32[1];
        pbVar15[2] = auVar36[2] & bVar23 | auVar32[2];
        pbVar15[3] = auVar36[3] & bVar24 | auVar32[3];
        pbVar15[4] = auVar36[4] & bVar21 | auVar32[4];
        pbVar15[5] = auVar36[5] & bVar22 | auVar32[5];
        pbVar15[6] = auVar36[6] & bVar23 | auVar32[6];
        pbVar15[7] = auVar36[7] & bVar24 | auVar32[7];
        pbVar15[0x18] = auVar38[8] & bVar21 | auVar35[8];
        pbVar15[0x19] = auVar38[9] & bVar22 | auVar35[9];
        pbVar15[0x1a] = auVar38[10] & bVar23 | auVar35[10];
        pbVar15[0x1b] = auVar38[0xb] & bVar24 | auVar35[0xb];
        pbVar15[0x1c] = auVar38[0xc] & bVar21 | auVar35[0xc];
        pbVar15[0x1d] = auVar38[0xd] & bVar22 | auVar35[0xd];
        pbVar15[0x1e] = auVar38[0xe] & bVar23 | auVar35[0xe];
        pbVar15[0x1f] = auVar38[0xf] & bVar24 | auVar35[0xf];
        pbVar15[0x10] = auVar38[0] & bVar21 | auVar35[0];
        pbVar15[0x11] = auVar38[1] & bVar22 | auVar35[1];
        pbVar15[0x12] = auVar38[2] & bVar23 | auVar35[2];
        pbVar15[0x13] = auVar38[3] & bVar24 | auVar35[3];
        pbVar15[0x14] = auVar38[4] & bVar21 | auVar35[4];
        pbVar15[0x15] = auVar38[5] & bVar22 | auVar35[5];
        pbVar15[0x16] = auVar38[6] & bVar23 | auVar35[6];
        pbVar15[0x17] = auVar38[7] & bVar24 | auVar35[7];
        pbVar15 = pbVar15 + 0x40;
      } while (uVar18 != 0);
      uVar26 = auVar25._12_4_;
      if (uVar16 == uVar13) goto LAB_00410bf8;
      uVar18 = ~uVar16;
    }
    if ((uVar4 & 1) != 0) {
      uVar4 = puVar1[uVar16 | 1];
      *(uint *)(uVar12 + uVar16 * 4) = uVar4 << (ulong)uVar3 & uVar6 | uVar26 >> (ulong)uVar2;
      uVar16 = uVar16 | 1;
      uVar26 = uVar4;
    }
    if (uVar18 + uVar13 != 0) {
      lVar11 = uVar13 - uVar16;
      puVar17 = (uint *)(uVar12 + uVar16 * 4 + 4);
      puVar1 = (uint *)(uVar14 + (uVar16 + uVar20) * 4);
      do {
        uVar4 = puVar1[1];
        puVar17[-1] = uVar4 << (ulong)uVar3 & uVar6 | uVar26 >> (ulong)uVar2;
        uVar26 = puVar1[2];
        *puVar17 = uVar26 << (ulong)uVar3 & uVar6 | uVar4 >> (ulong)uVar2;
        lVar11 = lVar11 + -2;
        puVar17 = puVar17 + 2;
        puVar1 = puVar1 + 2;
      } while (lVar11 != 0);
    }
  }
LAB_00410bf8:
  *(uint *)(uVar12 + uVar13 * 4) = uVar26 >> (ulong)uVar2;
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(int *)(param_1 + 1) = iVar7;
  return 1;
}


