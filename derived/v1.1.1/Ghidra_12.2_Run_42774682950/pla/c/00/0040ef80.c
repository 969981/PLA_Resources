/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040ef80; name: FUN_0040ef80
 */


void FUN_0040ef80(uint *param_1,uint *param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 (*pauVar7) [16];
  uint *puVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  if ((int)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("n >= 0","external/openssl/crypto/bn/bn_asm.c",0x4d,"nnopenssl_bn_sqr_words");
  }
  if (param_3 != 0) {
    uVar5 = param_3;
    if (3 < param_3) {
      do {
        *(ulong *)param_1 = (ulong)*param_2 * (ulong)*param_2;
        *(ulong *)(param_1 + 2) = (ulong)param_2[1] * (ulong)param_2[1];
        *(ulong *)(param_1 + 4) = (ulong)param_2[2] * (ulong)param_2[2];
        puVar4 = param_2 + 3;
        param_2 = param_2 + 4;
        uVar5 = uVar5 - 4;
        *(ulong *)(param_1 + 6) = (ulong)*puVar4 * (ulong)*puVar4;
        param_1 = param_1 + 8;
      } while (3 < uVar5);
      param_3 = param_3 & 3;
      if (param_3 == 0) {
        return;
      }
    }
    uVar2 = (ulong)(param_3 - 1);
    uVar1 = uVar2 + 1;
    if ((uVar1 < 0x10) || ((param_1 < param_2 + uVar2 + 1 && (param_2 < param_1 + uVar2 * 2 + 2))))
    {
      puVar3 = param_1;
      puVar4 = param_2;
    }
    else {
      uVar6 = uVar1 & 0x1fffffff0;
      puVar3 = param_1 + uVar6 * 2;
      puVar4 = param_2 + uVar6;
      param_3 = param_3 - (int)uVar6;
      pauVar7 = (undefined1 (*) [16])(param_2 + 8);
      puVar8 = param_1 + 0x10;
      uVar2 = uVar6;
      do {
        auVar9 = pauVar7[-2];
        auVar11 = pauVar7[-1];
        auVar14 = NEON_ext(auVar11,auVar11,8,1);
        auVar10 = NEON_umull(auVar11._0_8_,auVar11._0_8_,4);
        auVar13 = NEON_ext(auVar9,auVar9,8,1);
        auVar11 = *pauVar7;
        auVar12 = pauVar7[1];
        auVar9 = NEON_umull(auVar9._0_8_,auVar9._0_8_,4);
        auVar15 = NEON_ext(auVar11,auVar11,8,1);
        auVar11 = NEON_umull(auVar11._0_8_,auVar11._0_8_,4);
        auVar15 = NEON_umull(auVar15._0_8_,auVar15._0_8_,4);
        auVar16 = NEON_ext(auVar12,auVar12,8,1);
        auVar12 = NEON_umull(auVar12._0_8_,auVar12._0_8_,4);
        auVar16 = NEON_umull(auVar16._0_8_,auVar16._0_8_,4);
        auVar13 = NEON_umull(auVar13._0_8_,auVar13._0_8_,4);
        auVar14 = NEON_umull(auVar14._0_8_,auVar14._0_8_,4);
        puVar8[-0x10] = auVar9._0_4_;
        puVar8[-0xf] = auVar9._4_4_;
        puVar8[-0xe] = auVar9._8_4_;
        puVar8[-0xd] = auVar9._12_4_;
        puVar8[-0xc] = auVar13._0_4_;
        puVar8[-0xb] = auVar13._4_4_;
        puVar8[-10] = auVar13._8_4_;
        puVar8[-9] = auVar13._12_4_;
        uVar2 = uVar2 - 0x10;
        puVar8[-8] = auVar10._0_4_;
        puVar8[-7] = auVar10._4_4_;
        puVar8[-6] = auVar10._8_4_;
        puVar8[-5] = auVar10._12_4_;
        puVar8[-4] = auVar14._0_4_;
        puVar8[-3] = auVar14._4_4_;
        puVar8[-2] = auVar14._8_4_;
        puVar8[-1] = auVar14._12_4_;
        *puVar8 = auVar11._0_4_;
        puVar8[1] = auVar11._4_4_;
        puVar8[2] = auVar11._8_4_;
        puVar8[3] = auVar11._12_4_;
        puVar8[4] = auVar15._0_4_;
        puVar8[5] = auVar15._4_4_;
        puVar8[6] = auVar15._8_4_;
        puVar8[7] = auVar15._12_4_;
        puVar8[8] = auVar12._0_4_;
        puVar8[9] = auVar12._4_4_;
        puVar8[10] = auVar12._8_4_;
        puVar8[0xb] = auVar12._12_4_;
        puVar8[0xc] = auVar16._0_4_;
        puVar8[0xd] = auVar16._4_4_;
        puVar8[0xe] = auVar16._8_4_;
        puVar8[0xf] = auVar16._12_4_;
        pauVar7 = pauVar7 + 4;
        puVar8 = puVar8 + 0x20;
      } while (uVar2 != 0);
      if (uVar1 == uVar6) {
        return;
      }
    }
    uVar5 = param_3;
    if ((param_3 & 1) != 0) {
      *(ulong *)puVar3 = (ulong)*puVar4 * (ulong)*puVar4;
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 2;
      uVar5 = param_3 - 1;
    }
    if (param_3 != 1) {
      do {
        *(ulong *)puVar3 = (ulong)*puVar4 * (ulong)*puVar4;
        puVar8 = puVar4 + 1;
        puVar4 = puVar4 + 2;
        uVar5 = uVar5 - 2;
        *(ulong *)(puVar3 + 2) = (ulong)*puVar8 * (ulong)*puVar8;
        puVar3 = puVar3 + 4;
      } while (uVar5 != 0);
    }
  }
  return;
}


