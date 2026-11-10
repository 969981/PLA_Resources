/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00434320; name: FUN_00434320
 */


bool FUN_00434320(undefined8 param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  uint *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 (*pauVar16) [16];
  ulong uVar17;
  uint uVar18;
  uint5 uVar19;
  uint uVar22;
  uint uVar23;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  uint uVar24;
  uint5 uVar25;
  uint5 uVar26;
  undefined1 auVar27 [16];
  uint5 uVar28;
  uint5 uVar29;
  uint5 uVar30;
  
  FUN_0040e090(param_4);
  plVar8 = (long *)FUN_0040e240(param_4);
  if ((plVar8 == (long *)0x0) || (lVar9 = FUN_0040c660(plVar8,(int)param_2[1] << 1), lVar9 == 0)) {
    bVar6 = false;
    goto LAB_00434734;
  }
  uVar11 = (uint)param_2[1];
  if (0 < (int)uVar11) {
    uVar13 = *param_2;
    uVar10 = (ulong)(int)uVar11;
    lVar9 = *plVar8;
    uVar15 = uVar10;
    if (uVar11 < 4) {
LAB_004345a4:
      puVar12 = (uint *)(lVar9 + (long)(int)(uVar11 * 2 + -2) * 4 + 4);
      do {
        lVar9 = uVar15 * 4;
        uVar15 = uVar15 - 1;
        uVar11 = *(uint *)((uVar13 - 4) + lVar9);
        *puVar12 = uVar11 >> 0xe & 0x10 | uVar11 >> 0x10 & 1 | uVar11 >> 0xd & 0x40 |
                   uVar11 >> 0xf & 4 |
                   (uVar11 >> 0x16 & 0x10 | uVar11 >> 0x18 & 1 | uVar11 >> 0x15 & 0x40 |
                   uVar11 >> 0x17 & 4) << 0x10 |
                   (uVar11 >> 0x1a & 0x10 | uVar11 >> 0x1c & 1 | uVar11 >> 0x19 & 0x40 |
                   uVar11 >> 0x1b & 4) << 0x18 |
                   (uVar11 >> 0x12 & 0x10 | uVar11 >> 0x14 & 1 | uVar11 >> 0x11 & 0x40 |
                   uVar11 >> 0x13 & 4) << 8;
        uVar11 = *(uint *)((uVar13 - 4) + lVar9);
        puVar12[-1] = (uVar11 >> 2 & 1) << 4 | (uVar11 >> 3 & 1) << 6 |
                      uVar11 & 1 | (uVar11 >> 1 & 1) << 2 |
                      (uVar11 >> 6 & 0x10 | uVar11 >> 8 & 1 | uVar11 >> 5 & 0x40 | uVar11 >> 7 & 4)
                      << 0x10 | (uVar11 >> 10 & 0x10 | uVar11 >> 0xc & 1 | uVar11 >> 9 & 0x40 |
                                uVar11 >> 0xb & 4) << 0x18 |
                      (uVar11 >> 2 & 0x10 | uVar11 >> 4 & 1 | uVar11 >> 1 & 0x40 | uVar11 >> 3 & 4)
                      << 8;
        puVar12 = puVar12 + -2;
      } while (0 < (long)uVar15);
    }
    else {
      iVar7 = uVar11 * 2 + -2;
      pauVar16 = (undefined1 (*) [16])(uVar13 + uVar10 * 4);
      if (((undefined1 (*) [16])(lVar9 + ((long)iVar7 + 2 + uVar10 * -2) * 4) < pauVar16) &&
         (uVar13 < (ulong)(lVar9 + ((long)iVar7 + 2) * 4))) goto LAB_004345a4;
      uVar14 = uVar10 & 0xfffffffffffffffc;
      uVar15 = uVar10 - uVar14;
      uVar11 = uVar11 - (int)uVar14;
      uVar17 = uVar14;
      do {
        pauVar16 = pauVar16 + -1;
        auVar20 = NEON_rev64(*pauVar16,4);
        auVar21 = NEON_ext(auVar20,auVar20,8,1);
        uVar18 = auVar21._0_4_;
        bVar2 = auVar21[3];
        uVar22 = auVar21._4_4_;
        bVar3 = auVar21[7];
        uVar23 = auVar21._8_4_;
        bVar4 = auVar21[0xb];
        uVar24 = auVar21._12_4_;
        bVar5 = auVar21[0xf];
        uVar28 = CONCAT14(bVar3 >> 2,(uint)(bVar2 >> 2 & 0x10)) & 0x10ffffffff;
        uVar25 = CONCAT14(bVar3 >> 1,(uint)(bVar2 >> 1 & 0x40)) & 0x40ffffffff;
        uVar29 = CONCAT14(auVar21[6],(uint)(auVar21[2] & 1)) & 0x1ffffffff;
        uVar26 = CONCAT14((char)(uVar22 >> 0x15),(uint)((byte)(uVar18 >> 0x15) & 0x40)) &
                 0x40ffffffff;
        uVar30 = CONCAT14(auVar21[5],(uint)(auVar21[1] & 1)) & 0x1ffffffff;
        uVar19 = CONCAT14(auVar21[4],(uint)(auVar21[0] & 1)) & 0x1ffffffff;
        auVar27[0] = (byte)((uVar18 & 0x3fffffc4) << 2) | (byte)uVar19 |
                     (byte)((uVar18 & 0x1fffffe8) << 3) | (byte)((uVar18 & 0x7fffff82) << 1);
        auVar27[4] = (byte)((uVar22 & 0x3fffffc4) << 2) | (byte)(uVar19 >> 0x20) |
                     (byte)((uVar22 & 0x1fffffe8) << 3) | (byte)((uVar22 & 0x7fffff82) << 1);
        auVar27[8] = (byte)((uVar23 & 0x3fffffc4) << 2) | auVar21[8] & 1 |
                     (byte)((uVar23 & 0x1fffffe8) << 3) | (byte)((uVar23 & 0x7fffff82) << 1);
        auVar27[0xc] = (byte)((uVar24 & 0x3fffffc4) << 2) | auVar21[0xc] & 1 |
                       (byte)((uVar24 & 0x1fffffe8) << 3) | (byte)((uVar24 & 0x7fffff82) << 1);
        auVar27[1] = (byte)(uVar18 >> 2) & 0x10 | (byte)(uVar18 >> 4) & 1 |
                     (byte)(uVar18 >> 1) & 0x40 | (byte)(uVar18 >> 3) & 4;
        auVar27[2] = (byte)(uVar18 >> 6) & 0x10 | (byte)uVar30 | (byte)(uVar18 >> 5) & 0x40 |
                     (byte)(uVar18 >> 7) & 4;
        auVar27[3] = (byte)(uVar18 >> 10) & 0x10 | (byte)(uVar18 >> 0xc) & 1 |
                     (byte)(uVar18 >> 9) & 0x40 | (byte)(uVar18 >> 0xb) & 4;
        auVar27[5] = (byte)(uVar22 >> 2) & 0x10 | (byte)(uVar22 >> 4) & 1 |
                     (byte)(uVar22 >> 1) & 0x40 | (byte)(uVar22 >> 3) & 4;
        auVar27[6] = (byte)(uVar22 >> 6) & 0x10 | (byte)(uVar30 >> 0x20) |
                     (byte)(uVar22 >> 5) & 0x40 | (byte)(uVar22 >> 7) & 4;
        auVar27[7] = (byte)(uVar22 >> 10) & 0x10 | (byte)(uVar22 >> 0xc) & 1 |
                     (byte)(uVar22 >> 9) & 0x40 | (byte)(uVar22 >> 0xb) & 4;
        auVar27[9] = (byte)(uVar23 >> 2) & 0x10 | (byte)(uVar23 >> 4) & 1 |
                     (byte)(uVar23 >> 1) & 0x40 | (byte)(uVar23 >> 3) & 4;
        auVar27[10] = (byte)(uVar23 >> 6) & 0x10 | auVar21[9] & 1 | (byte)(uVar23 >> 5) & 0x40 |
                      (byte)(uVar23 >> 7) & 4;
        auVar27[0xb] = (byte)(uVar23 >> 10) & 0x10 | (byte)(uVar23 >> 0xc) & 1 |
                       (byte)(uVar23 >> 9) & 0x40 | (byte)(uVar23 >> 0xb) & 4;
        auVar27[0xd] = (byte)(uVar24 >> 2) & 0x10 | (byte)(uVar24 >> 4) & 1 |
                       (byte)(uVar24 >> 1) & 0x40 | (byte)(uVar24 >> 3) & 4;
        auVar27[0xe] = (byte)(uVar24 >> 6) & 0x10 | auVar21[0xd] & 1 | (byte)(uVar24 >> 5) & 0x40 |
                       (byte)(uVar24 >> 7) & 4;
        auVar27[0xf] = (byte)(uVar24 >> 10) & 0x10 | (byte)(uVar24 >> 0xc) & 1 |
                       (byte)(uVar24 >> 9) & 0x40 | (byte)(uVar24 >> 0xb) & 4;
        auVar20 = NEON_rev64(auVar27,4);
        auVar27 = NEON_ext(auVar20,auVar20,8,1);
        auVar20[1] = (byte)(uVar18 >> 0x12) & 0x10 | (byte)(uVar18 >> 0x14) & 1 |
                     (byte)(uVar18 >> 0x11) & 0x40 | (byte)(uVar18 >> 0x13) & 4;
        auVar20[0] = (byte)(uVar18 >> 0xe) & 0x10 | (byte)uVar29 | (byte)(uVar18 >> 0xd) & 0x40 |
                     (byte)(uVar18 >> 0xf) & 4;
        auVar20[2] = (byte)(uVar18 >> 0x16) & 0x10 | bVar2 & 1 | (byte)uVar26 |
                     (byte)(uVar18 >> 0x17) & 4;
        auVar20[3] = (byte)uVar28 | bVar2 >> 4 & 1 | (byte)uVar25 | bVar2 >> 3 & 4;
        auVar20[4] = (byte)(uVar22 >> 0xe) & 0x10 | (byte)(uVar29 >> 0x20) |
                     (byte)(uVar22 >> 0xd) & 0x40 | (byte)(uVar22 >> 0xf) & 4;
        auVar20[5] = (byte)(uVar22 >> 0x12) & 0x10 | (byte)(uVar22 >> 0x14) & 1 |
                     (byte)(uVar22 >> 0x11) & 0x40 | (byte)(uVar22 >> 0x13) & 4;
        auVar20[6] = (byte)(uVar22 >> 0x16) & 0x10 | bVar3 & 1 | (byte)(uVar26 >> 0x20) |
                     (byte)(uVar22 >> 0x17) & 4;
        auVar20[7] = (byte)(uVar28 >> 0x20) | bVar3 >> 4 & 1 | (byte)(uVar25 >> 0x20) |
                     bVar3 >> 3 & 4;
        auVar20[8] = (byte)(uVar23 >> 0xe) & 0x10 | auVar21[10] & 1 | (byte)(uVar23 >> 0xd) & 0x40 |
                     (byte)(uVar23 >> 0xf) & 4;
        auVar20[9] = (byte)(uVar23 >> 0x12) & 0x10 | (byte)(uVar23 >> 0x14) & 1 |
                     (byte)(uVar23 >> 0x11) & 0x40 | (byte)(uVar23 >> 0x13) & 4;
        auVar20[10] = (byte)(uVar23 >> 0x16) & 0x10 | bVar4 & 1 | (byte)(uVar23 >> 0x15) & 0x40 |
                      (byte)(uVar23 >> 0x17) & 4;
        auVar20[0xb] = bVar4 >> 2 & 0x10 | bVar4 >> 4 & 1 | bVar4 >> 1 & 0x40 | bVar4 >> 3 & 4;
        auVar20[0xc] = (byte)(uVar24 >> 0xe) & 0x10 | auVar21[0xe] & 1 |
                       (byte)(uVar24 >> 0xd) & 0x40 | (byte)(uVar24 >> 0xf) & 4;
        auVar20[0xd] = (byte)(uVar24 >> 0x12) & 0x10 | (byte)(uVar24 >> 0x14) & 1 |
                       (byte)(uVar24 >> 0x11) & 0x40 | (byte)(uVar24 >> 0x13) & 4;
        auVar20[0xe] = (byte)(uVar24 >> 0x16) & 0x10 | bVar5 & 1 | (byte)(uVar24 >> 0x15) & 0x40 |
                       (byte)(uVar24 >> 0x17) & 4;
        auVar20[0xf] = bVar5 >> 2 & 0x10 | bVar5 >> 4 & 1 | bVar5 >> 1 & 0x40 | bVar5 >> 3 & 4;
        auVar20 = NEON_rev64(auVar20,4);
        auVar20 = NEON_ext(auVar20,auVar20,8,1);
        puVar1 = (undefined4 *)(lVar9 + -0x18 + (long)iVar7 * 4);
        iVar7 = iVar7 + -8;
        uVar17 = uVar17 - 4;
        *puVar1 = auVar27._0_4_;
        puVar1[1] = auVar20._0_4_;
        puVar1[2] = auVar27._4_4_;
        puVar1[3] = auVar20._4_4_;
        puVar1[4] = auVar27._8_4_;
        puVar1[5] = auVar20._8_4_;
        puVar1[6] = auVar27._12_4_;
        puVar1[7] = auVar20._12_4_;
      } while (uVar17 != 0);
      if (uVar14 != uVar10) goto LAB_004345a4;
    }
    uVar11 = (uint)param_2[1];
  }
  *(uint *)(plVar8 + 1) = uVar11 << 1;
  FUN_0040c8f0(plVar8);
  iVar7 = FUN_00433be0(param_1,plVar8,param_3);
  bVar6 = iVar7 != 0;
LAB_00434734:
  FUN_0040e1b0(param_4);
  return bVar6;
}


