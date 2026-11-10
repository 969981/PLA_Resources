/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001b6b00; name: FUN_001b6b00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_001b6b00(long param_1)

{
  char cVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar7;
  undefined1 auVar5 [12];
  undefined1 auVar6 [16];
  undefined1 auVar9 [12];
  undefined8 uVar8;
  undefined1 auVar10 [16];
  int iVar11;
  int iVar15;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar16;
  float fVar20;
  float fVar21;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uVar22;
  float fVar24;
  undefined1 auVar23 [16];
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  lVar2 = *(long *)(param_1 + 0x18);
  iVar11 = *(int *)(lVar2 + 0x1f0);
  if (iVar11 == 3) {
    FUN_0335f970(&local_50,*(undefined8 *)(lVar2 + 0x30));
    uVar8 = NEON_fminp(CONCAT44(fStack_34,fStack_44),CONCAT44(fStack_34,fStack_44),4);
    uVar8 = NEON_fmin(CONCAT44(fStack_24,fStack_24),uVar8,4);
    cVar1 = PTR_DAT_04372398
            [(-(uint)(fStack_34 <= (float)((ulong)uVar8 >> 0x20)) & 2) +
             (uint)(fStack_44 <= (float)uVar8) | -(uint)(fStack_24 <= (float)uVar8) & 4];
    fVar3 = *(float *)(PTR_DAT_04372370 + (long)cVar1 * 0x10 + 0x200);
    fVar4 = *(float *)(PTR_DAT_04372370 + (long)cVar1 * 0x10 + 0x204);
    fVar7 = *(float *)(PTR_DAT_04372370 + (long)cVar1 * 0x10 + 0x208);
    auVar5._0_4_ = local_30 * fVar7 + local_50 * fVar3 + fStack_40 * fVar4;
    auVar5._4_4_ = fStack_2c * fVar7 + fStack_4c * fVar3 + fStack_3c * fVar4;
    auVar5._8_4_ = fStack_28 * fVar7 + fStack_48 * fVar3 + fStack_38 * fVar4;
  }
  else if (iVar11 == 2) {
    auVar5 = SUB1612(*(undefined1 (*) [16])(lVar2 + 0x120),0);
  }
  else if (iVar11 == 1) {
    auVar10 = *(undefined1 (*) [16])(lVar2 + 0x110);
    fVar4 = auVar10._0_4_ * auVar10._0_4_;
    fVar7 = auVar10._4_4_ * auVar10._4_4_;
    auVar12._0_12_ = auVar10._0_12_;
    auVar12._12_4_ = 0;
    auVar13._8_8_ = _UNK_03889038;
    auVar13._0_8_ = _DAT_03889030;
    auVar17._8_8_ = _UNK_03889f18;
    auVar17._0_8_ = _DAT_03889f10;
    auVar10 = a64_TBL(ZEXT816(0),auVar12,auVar13);
    auVar13 = a64_TBL(ZEXT816(0),auVar12,auVar17);
    fVar24 = auVar13._0_4_;
    auVar18._0_4_ = fVar24 * fVar24;
    auVar18._4_4_ = auVar13._4_4_ * auVar13._4_4_;
    auVar18._8_4_ = auVar13._8_4_ * auVar13._8_4_;
    auVar18._12_4_ = auVar13._12_4_ * auVar13._12_4_;
    auVar23 = NEON_ext(auVar18,auVar18,8,1);
    fVar3 = auVar23._0_4_ + auVar23._4_4_;
    auVar23._4_12_ = auVar10._4_12_;
    auVar23._0_4_ = -auVar10._0_4_;
    auVar14._4_12_ = auVar13._4_12_;
    auVar14._0_4_ = -fVar24;
    auVar19._0_8_ =
         CONCAT44(-(uint)(fVar4 + fVar7 < auVar18._0_4_ + auVar18._4_4_ + fVar3),
                  -(uint)(fVar4 + fVar7 < auVar18._0_4_ + auVar18._4_4_ + fVar3));
    auVar19._8_8_ = auVar19._0_8_;
    auVar23 = auVar23 ^ (auVar23 ^ auVar14) & auVar19;
    fVar16 = auVar23._0_4_;
    fVar20 = auVar23._4_4_;
    fVar21 = auVar23._8_4_;
    fVar3 = fVar16 * fVar16 + fVar20 * fVar20 + fVar21 * fVar21;
    fVar7 = fVar16 * fVar16 + fVar20 * fVar20 + fVar21 * fVar21;
    uVar8 = CONCAT44(fVar7,fVar3);
    uVar22 = NEON_frsqrte(uVar8,4);
    fVar4 = (float)uVar22;
    fVar24 = (float)((ulong)uVar22 >> 0x20);
    uVar22 = NEON_frsqrts(uVar8,CONCAT44(fVar24 * fVar24,fVar4 * fVar4),4);
    fVar4 = fVar4 * (float)uVar22;
    fVar24 = fVar24 * (float)((ulong)uVar22 >> 0x20);
    auVar10._0_8_ = CONCAT44(-(uint)(0.0 < fVar7),-(uint)(0.0 < fVar3));
    iVar11 = -(uint)(fVar3 <= 0.0);
    iVar15 = -(uint)(fVar7 <= 0.0);
    auVar10._8_8_ = auVar10._0_8_;
    uVar8 = NEON_frsqrts(uVar8,CONCAT44(fVar24 * fVar24,fVar4 * fVar4),4);
    fVar4 = (float)uVar8 * fVar4;
    fVar24 = (float)((ulong)uVar8 >> 0x20) * fVar24;
    fVar3 = (float)CONCAT13((byte)((uint)fVar4 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                            CONCAT12((byte)((uint)fVar4 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10),
                                     CONCAT11((byte)((uint)fVar4 >> 8) & ~(byte)((uint)iVar11 >> 8),
                                              SUB41(fVar4,0) & ~(byte)iVar11)));
    auVar9._0_4_ = fVar16 * fVar3;
    auVar9._4_4_ = fVar20 * (float)(CONCAT17((byte)((uint)fVar24 >> 0x18) &
                                             ~(byte)((uint)iVar15 >> 0x18),
                                             CONCAT16((byte)((uint)fVar24 >> 0x10) &
                                                      ~(byte)((uint)iVar15 >> 0x10),
                                                      CONCAT15((byte)((uint)fVar24 >> 8) &
                                                               ~(byte)((uint)iVar15 >> 8),
                                                               CONCAT14(SUB41(fVar24,0) &
                                                                        ~(byte)iVar15,fVar3)))) >>
                                   0x20);
    auVar9._8_4_ = fVar21 * fVar3;
    auVar5 = auVar23._0_12_ ^ (auVar23._0_12_ ^ auVar9) & auVar10._0_12_;
  }
  else {
    auVar5 = SUB1612(ZEXT816(0),0);
  }
  auVar6._12_4_ = 0;
  auVar6._0_12_ = auVar5;
  return auVar6;
}


