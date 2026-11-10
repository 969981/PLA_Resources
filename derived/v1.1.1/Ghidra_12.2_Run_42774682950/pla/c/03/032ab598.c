/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ab598; name: FUN_032ab598
 */


void FUN_032ab598(undefined1 param_1 [16],undefined1 param_2 [16],long *param_3,long *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  if (*param_4 != 0) {
    param_4[1] = 0;
    *(undefined4 *)(param_4 + 2) = 0;
  }
  auVar22 = NEON_fmov(0x3f800000,4);
  uVar3 = 0;
  do {
    if (*(uint *)((long)param_4 + 0xc) <= uVar3) {
      if (*param_4 == 0) {
        return;
      }
      iVar2 = FUN_0332c1f8(*param_4,param_4);
      if (iVar2 < 0) {
        return;
      }
      uVar3 = *(uint *)(param_4 + 1);
    }
    uVar4 = (ulong)(int)(uVar3 << 5);
    auVar6 = NEON_fminnm(*(undefined1 (*) [16])
                          (*param_3 +
                          (-(ulong)((uVar3 & 0x7ffffff) >> 0x1a) & 0xfffffffc00000000 |
                          (ulong)(uVar3 << 5) << 2)),auVar22,4);
    auVar6 = NEON_fmax(auVar6,ZEXT816(0),4);
    auVar15._0_8_ = CONCAT44((int)(auVar6._4_4_ * 255.0 + 0.5),(int)(auVar6._0_4_ * 255.0 + 0.5));
    auVar15._8_4_ = (int)(auVar6._8_4_ * 255.0 + 0.5);
    auVar15._12_4_ = (int)(auVar6._12_4_ * 255.0 + 0.5);
    auVar6._8_8_ = param_2._8_8_;
    auVar6._0_8_ = NEON_sqxtn(param_2._0_8_,auVar15,4);
    auVar13 = NEON_sqxtn2(auVar6,auVar15,4);
    uVar5 = NEON_sqxtun(auVar15._0_8_,auVar13,2);
    puVar1 = (undefined1 *)(param_3[1] + uVar4);
    *puVar1 = (char)uVar5;
    puVar1[1] = (char)((ulong)uVar5 >> 8);
    puVar1[2] = (char)((ulong)uVar5 >> 0x10);
    puVar1[3] = (char)((ulong)uVar5 >> 0x18);
    auVar6 = NEON_fminnm(*(undefined1 (*) [16])(*param_3 + (uVar4 | 4) * 4),auVar22,4);
    auVar6 = NEON_fmax(auVar6,ZEXT816(0),4);
    auVar7._0_8_ = CONCAT44((int)(auVar6._4_4_ * 255.0 + 0.5),(int)(auVar6._0_4_ * 255.0 + 0.5));
    auVar7._8_4_ = (int)(auVar6._8_4_ * 255.0 + 0.5);
    auVar7._12_4_ = (int)(auVar6._12_4_ * 255.0 + 0.5);
    auVar14._8_8_ = auVar13._8_8_;
    auVar14._0_8_ = NEON_sqxtn(auVar13._0_8_,auVar7,4);
    auVar15 = NEON_sqxtn2(auVar14,auVar7,4);
    uVar5 = NEON_sqxtun(auVar7._0_8_,auVar15,2);
    puVar1 = (undefined1 *)(param_3[1] + (uVar4 | 4));
    *puVar1 = (char)uVar5;
    puVar1[1] = (char)((ulong)uVar5 >> 8);
    puVar1[2] = (char)((ulong)uVar5 >> 0x10);
    puVar1[3] = (char)((ulong)uVar5 >> 0x18);
    auVar6 = NEON_fminnm(*(undefined1 (*) [16])(*param_3 + (uVar4 | 8) * 4),auVar22,4);
    auVar6 = NEON_fmax(auVar6,ZEXT816(0),4);
    auVar13._0_8_ = CONCAT44((int)(auVar6._4_4_ * 255.0 + 0.5),(int)(auVar6._0_4_ * 255.0 + 0.5));
    auVar13._8_4_ = (int)(auVar6._8_4_ * 255.0 + 0.5);
    auVar13._12_4_ = (int)(auVar6._12_4_ * 255.0 + 0.5);
    auVar16._8_8_ = auVar15._8_8_;
    auVar16._0_8_ = NEON_sqxtn(auVar15._0_8_,auVar13,4);
    auVar15 = NEON_sqxtn2(auVar16,auVar13,4);
    uVar5 = NEON_sqxtun(auVar13._0_8_,auVar15,2);
    puVar1 = (undefined1 *)(param_3[1] + (uVar4 | 8));
    *puVar1 = (char)uVar5;
    puVar1[1] = (char)((ulong)uVar5 >> 8);
    puVar1[2] = (char)((ulong)uVar5 >> 0x10);
    puVar1[3] = (char)((ulong)uVar5 >> 0x18);
    auVar6 = NEON_fminnm(*(undefined1 (*) [16])(*param_3 + (uVar4 | 0xc) * 4),auVar22,4);
    auVar6 = NEON_fmax(auVar6,ZEXT816(0),4);
    auVar8._0_8_ = CONCAT44((int)(auVar6._4_4_ * 255.0 + 0.5),(int)(auVar6._0_4_ * 255.0 + 0.5));
    auVar8._8_4_ = (int)(auVar6._8_4_ * 255.0 + 0.5);
    auVar8._12_4_ = (int)(auVar6._12_4_ * 255.0 + 0.5);
    auVar17._8_8_ = auVar15._8_8_;
    auVar17._0_8_ = NEON_sqxtn(auVar15._0_8_,auVar8,4);
    auVar15 = NEON_sqxtn2(auVar17,auVar8,4);
    uVar5 = NEON_sqxtun(auVar8._0_8_,auVar15,2);
    puVar1 = (undefined1 *)(param_3[1] + (uVar4 | 0xc));
    *puVar1 = (char)uVar5;
    puVar1[1] = (char)((ulong)uVar5 >> 8);
    puVar1[2] = (char)((ulong)uVar5 >> 0x10);
    puVar1[3] = (char)((ulong)uVar5 >> 0x18);
    auVar6 = NEON_fminnm(*(undefined1 (*) [16])(*param_3 + (uVar4 | 0x10) * 4),auVar22,4);
    auVar6 = NEON_fmax(auVar6,ZEXT816(0),4);
    auVar9._0_8_ = CONCAT44((int)(auVar6._4_4_ * 255.0 + 0.5),(int)(auVar6._0_4_ * 255.0 + 0.5));
    auVar9._8_4_ = (int)(auVar6._8_4_ * 255.0 + 0.5);
    auVar9._12_4_ = (int)(auVar6._12_4_ * 255.0 + 0.5);
    auVar18._8_8_ = auVar15._8_8_;
    auVar18._0_8_ = NEON_sqxtn(auVar15._0_8_,auVar9,4);
    auVar15 = NEON_sqxtn2(auVar18,auVar9,4);
    uVar5 = NEON_sqxtun(auVar9._0_8_,auVar15,2);
    puVar1 = (undefined1 *)(param_3[1] + (uVar4 | 0x10));
    *puVar1 = (char)uVar5;
    puVar1[1] = (char)((ulong)uVar5 >> 8);
    puVar1[2] = (char)((ulong)uVar5 >> 0x10);
    puVar1[3] = (char)((ulong)uVar5 >> 0x18);
    auVar6 = NEON_fminnm(*(undefined1 (*) [16])(*param_3 + (uVar4 | 0x14) * 4),auVar22,4);
    auVar6 = NEON_fmax(auVar6,ZEXT816(0),4);
    auVar10._0_8_ = CONCAT44((int)(auVar6._4_4_ * 255.0 + 0.5),(int)(auVar6._0_4_ * 255.0 + 0.5));
    auVar10._8_4_ = (int)(auVar6._8_4_ * 255.0 + 0.5);
    auVar10._12_4_ = (int)(auVar6._12_4_ * 255.0 + 0.5);
    auVar19._8_8_ = auVar15._8_8_;
    auVar19._0_8_ = NEON_sqxtn(auVar15._0_8_,auVar10,4);
    auVar15 = NEON_sqxtn2(auVar19,auVar10,4);
    uVar5 = NEON_sqxtun(auVar10._0_8_,auVar15,2);
    puVar1 = (undefined1 *)(param_3[1] + (uVar4 | 0x14));
    *puVar1 = (char)uVar5;
    puVar1[1] = (char)((ulong)uVar5 >> 8);
    puVar1[2] = (char)((ulong)uVar5 >> 0x10);
    puVar1[3] = (char)((ulong)uVar5 >> 0x18);
    auVar6 = NEON_fminnm(*(undefined1 (*) [16])(*param_3 + (uVar4 | 0x18) * 4),auVar22,4);
    auVar6 = NEON_fmax(auVar6,ZEXT816(0),4);
    auVar11._0_8_ = CONCAT44((int)(auVar6._4_4_ * 255.0 + 0.5),(int)(auVar6._0_4_ * 255.0 + 0.5));
    auVar11._8_4_ = (int)(auVar6._8_4_ * 255.0 + 0.5);
    auVar11._12_4_ = (int)(auVar6._12_4_ * 255.0 + 0.5);
    auVar20._8_8_ = auVar15._8_8_;
    auVar20._0_8_ = NEON_sqxtn(auVar15._0_8_,auVar11,4);
    auVar15 = NEON_sqxtn2(auVar20,auVar11,4);
    uVar5 = NEON_sqxtun(auVar11._0_8_,auVar15,2);
    puVar1 = (undefined1 *)(param_3[1] + (uVar4 | 0x18));
    *puVar1 = (char)uVar5;
    puVar1[1] = (char)((ulong)uVar5 >> 8);
    puVar1[2] = (char)((ulong)uVar5 >> 0x10);
    puVar1[3] = (char)((ulong)uVar5 >> 0x18);
    auVar6 = NEON_fminnm(*(undefined1 (*) [16])(*param_3 + (uVar4 | 0x1c) * 4),auVar22,4);
    auVar6 = NEON_fmax(auVar6,ZEXT816(0),4);
    auVar12._0_8_ = CONCAT44((int)(auVar6._4_4_ * 255.0 + 0.5),(int)(auVar6._0_4_ * 255.0 + 0.5));
    auVar12._8_4_ = (int)(auVar6._8_4_ * 255.0 + 0.5);
    auVar12._12_4_ = (int)(auVar6._12_4_ * 255.0 + 0.5);
    auVar21._8_8_ = auVar15._8_8_;
    auVar21._0_8_ = NEON_sqxtn(auVar15._0_8_,auVar12,4);
    param_2 = NEON_sqxtn2(auVar21,auVar12,4);
    uVar5 = NEON_sqxtun(auVar12._0_8_,param_2,2);
    puVar1 = (undefined1 *)(param_3[1] + (uVar4 | 0x1c));
    *puVar1 = (char)uVar5;
    puVar1[1] = (char)((ulong)uVar5 >> 8);
    puVar1[2] = (char)((ulong)uVar5 >> 0x10);
    puVar1[3] = (char)((ulong)uVar5 >> 0x18);
    uVar3 = uVar3 + 1;
  } while( true );
}


