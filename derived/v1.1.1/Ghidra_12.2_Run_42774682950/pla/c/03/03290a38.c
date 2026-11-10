/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03290a38; name: FUN_03290a38
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03290a38(int *param_1,undefined8 *param_2,undefined1 (*param_3) [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar6;
  undefined1 auVar5 [16];
  float fVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  
  FUN_03290788();
  auVar5 = *param_3;
  fVar1 = auVar5._0_4_ * (float)*param_2;
  fVar3 = auVar5._4_4_ * (float)((ulong)*param_2 >> 0x20);
  fVar4 = auVar5._8_4_ * (float)param_2[1];
  fVar7 = fVar1 + fVar3 + fVar4;
  fVar2 = -fVar7;
  fVar1 = -(fVar1 + fVar3 + fVar4);
  if (*param_1 == 1) {
    auVar9._8_8_ = _UNK_03889f28;
    auVar9._0_8_ = _DAT_03889f20;
  }
  else {
    if (*param_1 != 0) goto LAB_03290aa4;
    auVar9._8_8_ = _UNK_03889f38;
    auVar9._0_8_ = _DAT_03889f30;
  }
  auVar5 = a64_TBL(ZEXT816(0),auVar5,auVar9);
LAB_03290aa4:
  auVar9 = NEON_ext(auVar5,auVar5,8,1);
  uVar29 = NEON_fmov(0x40400000,4);
  uVar8 = CONCAT44(auVar9._0_4_,auVar9._0_4_);
  fVar3 = auVar5._0_4_;
  fVar6 = auVar5._4_4_;
  fVar16 = fVar6 * fVar6;
  fVar28 = (float)uVar29;
  fVar10 = (float)*(undefined8 *)(param_1 + 0xc);
  fVar11 = (float)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20);
  fVar32 = fVar11 * fVar3;
  fVar12 = (float)*(undefined8 *)(param_1 + 0xe);
  fVar33 = fVar12 * fVar3;
  fVar4 = (float)*(undefined8 *)(param_1 + 4);
  uVar26 = NEON_frecpe(uVar8,4);
  uVar30 = NEON_fmov(0xc0400000,4);
  fVar13 = (float)*(undefined8 *)(param_1 + 0x10);
  fVar14 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  fVar15 = (float)*(undefined8 *)(param_1 + 0x12);
  fVar34 = fVar15 * fVar6;
  fVar21 = (float)*(undefined8 *)(param_1 + 8);
  fVar22 = (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  fVar17 = fVar6 * (fVar3 + fVar3);
  fVar18 = (float)*(undefined8 *)(param_1 + 6);
  fVar19 = (float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  fVar23 = fVar32 + fVar4 * fVar6;
  fVar24 = fVar32 + (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20) * fVar6;
  uVar29 = NEON_frecps(uVar8,uVar26,4);
  fVar31 = fVar10 * fVar3 + fVar13 * fVar6;
  fVar25 = (float)uVar26 * (float)uVar29;
  fVar27 = (float)((ulong)uVar26 >> 0x20) * (float)((ulong)uVar29 >> 0x20);
  uVar8 = NEON_frecps(uVar8,CONCAT44(fVar27,fVar25),4);
  fVar20 = (float)*(undefined8 *)(param_1 + 2) * fVar2;
  fVar4 = fVar14 * fVar6 * fVar6 + fVar3 * fVar32 + fVar17 * fVar4;
  fVar25 = fVar25 * (float)uVar8;
  fVar27 = fVar27 * (float)((ulong)uVar8 >> 0x20);
  fVar32 = fVar25 * fVar25;
  *(ulong *)(param_1 + 0x14) = CONCAT44(fVar27 * fVar19,fVar25 * fVar18);
  *(ulong *)(param_1 + 0x16) =
       CONCAT44((fVar1 * fVar14 + fVar34 + fVar22 * fVar3) * -(fVar27 * fVar27),
                (fVar2 * fVar14 + fVar34 + fVar21 * fVar3) * -fVar32);
  *(ulong *)(param_1 + 0x18) =
       CONCAT44(fVar27 * fVar27 * fVar27 *
                (fVar3 * fVar33 + fVar6 * (fVar3 + fVar3) * fVar19 + fVar22 * fVar16 +
                (fVar1 * fVar10 + fVar24 + fVar24) * fVar1),
                fVar25 * fVar32 *
                (fVar3 * fVar33 + fVar17 * fVar18 + fVar21 * fVar16 +
                (fVar2 * fVar10 + fVar23 + fVar23) * fVar2));
  *(ulong *)(param_1 + 0x1e) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x20) * fVar27,fVar12 * fVar25);
  *(ulong *)(param_1 + 0x1c) = CONCAT44(fVar11 * fVar27,fVar10 * fVar25);
  param_1[0x22] = (int)(fVar25 * fVar15);
  param_1[0x23] = (int)(fVar27 * (float)((ulong)*(undefined8 *)(param_1 + 0x12) >> 0x20));
  param_1[0x20] = (int)(fVar25 * fVar13);
  param_1[0x21] = (int)(fVar27 * fVar14);
  *(ulong *)(param_1 + 0x26) =
       CONCAT44(0x40000000,
                -(fVar32 * fVar32 *
                 (fVar7 * fVar7 * (fVar20 + fVar28 * fVar31) +
                 fVar7 * (float)uVar30 * fVar4 +
                 fVar16 * fVar34 +
                 fVar3 * fVar3 * fVar33 + fVar28 * fVar3 * fVar3 * fVar6 * fVar18 +
                 fVar28 * fVar3 * fVar16 * fVar21)));
  *(ulong *)(param_1 + 0x24) =
       CONCAT44(fVar25 * fVar32 * (fVar4 + (fVar20 + fVar31 + fVar31) * fVar2),
                (fVar31 + fVar20) * -fVar32);
  return;
}


