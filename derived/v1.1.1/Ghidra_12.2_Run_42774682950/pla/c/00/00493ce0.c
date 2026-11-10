/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00493ce0; name: FUN_00493ce0
 */


void FUN_00493ce0(uint *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  ulong uVar21;
  uint uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  uVar11 = param_1[0xf] >> 0x1c;
  uVar22 = (uint)((ulong)*(undefined8 *)(param_1 + 0xb) >> 0x20);
  uVar20 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 9);
  uVar1 = param_1[8] + uVar11;
  param_1[0xf] = (param_1[0xf] & 0xfffffff) + (param_1[0xe] >> 0x1c);
  param_1[0xe] = (param_1[0xe] & 0xfffffff) + (param_1[0xd] >> 0x1c);
  auVar23 = NEON_ext(ZEXT416(uVar1),ZEXT416(uVar1),4,1);
  auVar24._12_4_ = uVar22;
  auVar24._0_12_ = *(undefined1 (*) [12])(param_1 + 9);
  auVar24 = NEON_ext(auVar23,auVar24,0xc,1);
  param_1[0xd] = (param_1[0xd] & 0xfffffff) + (uVar22 >> 0x1c);
  uVar17 = param_1[5];
  uVar18 = param_1[3];
  uVar16 = *param_1;
  uVar19 = param_1[1];
  *(ulong *)(param_1 + 0xb) =
       CONCAT44((uVar22 & 0xfffffff) + (auVar24._12_4_ >> 0x1c),
                ((uint)*(undefined8 *)(param_1 + 0xb) & 0xfffffff) + (auVar24._8_4_ >> 0x1c));
  *(ulong *)(param_1 + 9) =
       CONCAT44(((uint)((ulong)uVar20 >> 0x20) & 0xfffffff) + (auVar24._4_4_ >> 0x1c),
                ((uint)uVar20 & 0xfffffff) + (auVar24._0_4_ >> 0x1c));
  lVar2 = ((ulong)uVar16 & 0xfffffff) + (ulong)uVar11 + -0xfffffff;
  *param_1 = (uint)lVar2 & 0xfffffff;
  lVar2 = ((ulong)uVar19 & 0xfffffff) + (ulong)(uVar16 >> 0x1c) + (lVar2 >> 0x1c) + -0xfffffff;
  param_1[1] = (uint)lVar2 & 0xfffffff;
  lVar2 = ((ulong)param_1[2] & 0xfffffff) + (ulong)(uVar19 >> 0x1c) + (lVar2 >> 0x1c) + -0xfffffff;
  lVar3 = ((ulong)uVar18 & 0xfffffff) + (ulong)(param_1[2] >> 0x1c) + (lVar2 >> 0x1c) + -0xfffffff;
  uVar16 = (uint)lVar3 & 0xfffffff;
  param_1[2] = (uint)lVar2 & 0xfffffff;
  param_1[3] = uVar16;
  lVar2 = ((ulong)param_1[4] & 0xfffffff) + (ulong)(uVar18 >> 0x1c) + (lVar3 >> 0x1c) + -0xfffffff;
  uVar18 = (uint)lVar2 & 0xfffffff;
  lVar2 = ((ulong)uVar17 & 0xfffffff) + (ulong)(param_1[4] >> 0x1c) + (lVar2 >> 0x1c) + -0xfffffff;
  uVar19 = (uint)lVar2 & 0xfffffff;
  param_1[4] = uVar18;
  param_1[5] = uVar19;
  lVar2 = ((ulong)param_1[6] & 0xfffffff) + (ulong)(uVar17 >> 0x1c) + (lVar2 >> 0x1c) + -0xfffffff;
  uVar17 = (uint)lVar2 & 0xfffffff;
  lVar2 = ((ulong)param_1[7] & 0xfffffff) + (ulong)(param_1[6] >> 0x1c) + (lVar2 >> 0x1c) +
          -0xfffffff;
  uVar11 = (uint)lVar2 & 0xfffffff;
  lVar2 = (ulong)((uVar1 & 0xfffffff) + (param_1[7] >> 0x1c)) + (lVar2 >> 0x1c) + -0xffffffe;
  uVar1 = (uint)lVar2 & 0xfffffff;
  lVar2 = (ulong)param_1[9] + (lVar2 >> 0x1c) + -0xfffffff;
  uVar22 = (uint)lVar2 & 0xfffffff;
  lVar2 = (ulong)param_1[10] + (lVar2 >> 0x1c) + -0xfffffff;
  uVar12 = (uint)lVar2 & 0xfffffff;
  lVar2 = (ulong)param_1[0xb] + (lVar2 >> 0x1c) + -0xfffffff;
  uVar13 = (uint)lVar2 & 0xfffffff;
  lVar2 = (ulong)param_1[0xc] + (lVar2 >> 0x1c) + -0xfffffff;
  uVar14 = (uint)lVar2 & 0xfffffff;
  lVar2 = (ulong)param_1[0xd] + (lVar2 >> 0x1c) + -0xfffffff;
  uVar15 = (uint)lVar2 & 0xfffffff;
  lVar2 = (ulong)param_1[0xe] + (lVar2 >> 0x1c) + -0xfffffff;
  param_1[0xe] = (uint)lVar2 & 0xfffffff;
  uVar4 = ((ulong)param_1[0xf] + (lVar2 >> 0x1c)) - 0xfffffff;
  param_1[0xf] = (uint)uVar4 & 0xfffffff;
  param_1[6] = uVar17;
  param_1[7] = uVar11;
  param_1[8] = uVar1;
  param_1[9] = uVar22;
  param_1[10] = uVar12;
  param_1[0xb] = uVar13;
  param_1[0xc] = uVar14;
  param_1[0xd] = uVar15;
  if (1 < ((long)uVar4 >> 0x1c) + 1U) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("scarry == 0 || scarry == -1","external/openssl/crypto/ec/curve448/f_generic.c",
                  0x7d,"nnopenssl_gf_strong_reduce");
  }
  uVar21 = uVar4 >> 0x1c & 0xfffffff;
  uVar5 = (ulong)param_1[1] + (uVar21 + *param_1 >> 0x1c) + uVar21;
  *param_1 = (uint)(uVar21 + *param_1) & 0xfffffff;
  param_1[1] = (uint)uVar5 & 0xfffffff;
  uVar5 = (ulong)param_1[2] + (uVar5 >> 0x1c) + uVar21;
  uVar6 = (ulong)uVar16 + (uVar5 >> 0x1c) + uVar21;
  uVar7 = (ulong)uVar18 + (uVar6 >> 0x1c) + uVar21;
  uVar8 = (ulong)uVar19 + (uVar7 >> 0x1c) + uVar21;
  uVar9 = (ulong)uVar17 + (uVar8 >> 0x1c) + uVar21;
  uVar10 = (ulong)uVar11 + (uVar9 >> 0x1c) + uVar21;
  param_1[6] = (uint)uVar9 & 0xfffffff;
  param_1[7] = (uint)uVar10 & 0xfffffff;
  uVar9 = (ulong)uVar1 + (uVar10 >> 0x1c) + ((long)uVar4 >> 0x1c & 0xffffffeU);
  param_1[8] = (uint)uVar9 & 0xfffffff;
  uVar9 = (ulong)uVar22 + (uVar9 >> 0x1c) + uVar21;
  uVar10 = (ulong)uVar12 + (uVar9 >> 0x1c) + uVar21;
  param_1[9] = (uint)uVar9 & 0xfffffff;
  param_1[10] = (uint)uVar10 & 0xfffffff;
  uVar9 = (ulong)uVar13 + (uVar10 >> 0x1c) + uVar21;
  uVar10 = (ulong)uVar14 + (uVar9 >> 0x1c) + uVar21;
  param_1[0xb] = (uint)uVar9 & 0xfffffff;
  param_1[0xc] = (uint)uVar10 & 0xfffffff;
  uVar9 = (ulong)uVar15 + (uVar10 >> 0x1c) + uVar21;
  param_1[0xd] = (uint)uVar9 & 0xfffffff;
  param_1[2] = (uint)uVar5 & 0xfffffff;
  param_1[3] = (uint)uVar6 & 0xfffffff;
  uVar5 = (ulong)param_1[0xe] + (uVar9 >> 0x1c) + uVar21;
  param_1[0xe] = (uint)uVar5 & 0xfffffff;
  uVar21 = (ulong)param_1[0xf] + (uVar5 >> 0x1c) + uVar21;
  param_1[0xf] = (uint)uVar21 & 0xfffffff;
  param_1[4] = (uint)uVar7 & 0xfffffff;
  param_1[5] = (uint)uVar8 & 0xfffffff;
  if (uVar21 >> 0x1d != 0 || (int)(uVar21 >> 0x1c) + (int)(uVar4 >> 0x1c) != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("carry < 2 && ((word_t)carry + scarry_0) == 0",
                  "external/openssl/crypto/ec/curve448/f_generic.c",0x8a,
                  "nnopenssl_gf_strong_reduce");
  }
  return;
}


