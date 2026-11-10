/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0289bbdc; name: FUN_0289bbdc
 */


void FUN_0289bbdc(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar4;
  float fVar5;
  undefined1 auVar3 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar12;
  float fVar13;
  undefined8 uVar10;
  float fVar14;
  undefined1 auVar11 [16];
  int iVar15;
  int iVar19;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  float fVar23;
  
  if (*(int *)(param_1 + 0x68) != 2) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x70);
  if (*(int *)(lVar1 + 400) == 0) {
    lVar2 = *(long *)(param_1 + 0x170);
    if (*(long *)(lVar2 + 0x100) == 0) {
      auVar3._8_8_ = DAT_0388a148;
      auVar3._0_8_ = DAT_0388a140;
    }
    else {
      auVar3 = *(undefined1 (*) [16])(*(long *)(lVar2 + 0x100) + 0x40);
    }
    fVar9 = auVar3._0_4_;
    fVar6 = *(float *)(lVar1 + 0x1c0) * fVar9;
    fVar4 = auVar3._4_4_;
    fVar12 = *(float *)(lVar1 + 0x1c4) * fVar4;
    fVar5 = auVar3._8_4_;
    fVar14 = *(float *)(lVar1 + 0x1c8) * fVar5;
    fVar7 = fVar6 + fVar12 + fVar14;
    fVar14 = fVar6 + fVar12 + fVar14;
    fVar6 = *(float *)(lVar1 + 0x1c0) - fVar9 * fVar7;
    fVar12 = *(float *)(lVar1 + 0x1c4) - fVar4 * fVar14;
    fVar7 = *(float *)(lVar1 + 0x1c8) - fVar5 * fVar7;
    fVar8 = fVar6 * fVar6 + fVar12 * fVar12 + fVar7 * fVar7;
    fVar13 = fVar6 * fVar6 + fVar12 * fVar12 + fVar7 * fVar7;
    uVar10 = CONCAT44(fVar13,fVar8);
    uVar22 = NEON_frsqrte(uVar10,4);
    fVar20 = (float)uVar22;
    fVar23 = (float)((ulong)uVar22 >> 0x20);
    uVar22 = NEON_frsqrts(uVar10,CONCAT44(fVar23 * fVar23,fVar20 * fVar20),4);
    fVar20 = fVar20 * (float)uVar22;
    fVar23 = fVar23 * (float)((ulong)uVar22 >> 0x20);
    iVar15 = -(uint)(fVar8 <= 0.0);
    iVar19 = -(uint)(fVar13 <= 0.0);
    uVar10 = NEON_frsqrts(uVar10,CONCAT44(fVar23 * fVar23,fVar20 * fVar20),4);
    fVar20 = (float)uVar10 * fVar20;
    fVar23 = (float)((ulong)uVar10 >> 0x20) * fVar23;
    fVar8 = (float)CONCAT13((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                            CONCAT12((byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10),
                                     CONCAT11((byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar15 >> 8)
                                              ,SUB41(fVar20,0) & ~(byte)iVar15)));
    fVar6 = fVar6 * fVar8;
    fVar20 = (float)(CONCAT17((byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                              CONCAT16((byte)((uint)fVar23 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10),
                                       CONCAT15((byte)((uint)fVar23 >> 8) &
                                                ~(byte)((uint)iVar19 >> 8),
                                                CONCAT14(SUB41(fVar23,0) & ~(byte)iVar19,fVar8))))
                    >> 0x20);
    fVar12 = fVar12 * fVar20;
    auVar18._0_8_ = CONCAT44(fVar12,fVar6);
    auVar18._8_4_ = fVar7 * fVar8;
    auVar18._12_4_ = (*(float *)(lVar1 + 0x1cc) - auVar3._12_4_ * fVar14) * fVar20;
    auVar11 = NEON_ext(auVar3,auVar3,4,1);
    auVar16 = NEON_ext(auVar18,auVar18,4,1);
    auVar17._0_4_ = fVar9 * auVar16._0_4_ - auVar11._0_4_ * fVar6;
    auVar17._4_4_ = fVar4 * auVar16._4_4_ - auVar11._4_4_ * fVar12;
    auVar17._8_4_ = fVar5 * fVar6 - fVar9 * auVar18._8_4_;
    auVar17._12_4_ = auVar3._12_4_ * fVar12 - fVar4 * auVar18._12_4_;
    auVar3 = NEON_ext(auVar17,auVar17,4,1);
    *(ulong *)(param_1 + 0x1b8) = (ulong)(uint)auVar18._8_4_;
    *(undefined8 *)(param_1 + 0x1b0) = auVar18._0_8_;
    *(ulong *)(param_1 + 0x1c8) = (ulong)(uint)auVar17._0_4_;
    *(long *)(param_1 + 0x1c0) = auVar3._0_8_;
    uVar21 = 0;
    fVar9 = 0.0;
    if (lVar2 != 0) {
      if (*(char *)(lVar2 + 0xf8) != '\0') {
        fVar9 = *(float *)(lVar2 + 0x90);
        fVar4 = *(float *)(lVar2 + 0x94);
        fVar5 = *(float *)(lVar2 + 0x98);
        fVar7 = *(float *)(lVar2 + 0x9c);
        auVar16._0_4_ = fVar6 * fVar9;
        auVar16._4_4_ = fVar12 * fVar4;
        auVar16._8_4_ = auVar18._8_4_ * fVar5;
        auVar16._12_4_ = auVar18._12_4_ * fVar7;
        auVar18 = NEON_ext(auVar16,auVar16,8,1);
        *(float *)(param_1 + 0x1d0) = auVar16._0_4_ + auVar16._4_4_ + auVar18._0_4_;
        auVar11._0_4_ = auVar3._0_4_ * fVar9;
        auVar11._4_4_ = auVar3._4_4_ * fVar4;
        auVar11._8_4_ = auVar17._0_4_ * fVar5;
        auVar11._12_4_ = auVar17._4_4_ * fVar7;
        auVar3 = NEON_ext(auVar11,auVar11,8,1);
        fVar9 = auVar3._0_4_ + auVar11._0_4_ + auVar11._4_4_;
        goto LAB_0289bd1c;
      }
      uVar21 = *(undefined4 *)(lVar2 + 0xa8);
    }
    *(undefined4 *)(param_1 + 0x1d0) = uVar21;
  }
  else {
    fVar9 = 0.0;
    uVar10 = *(undefined8 *)PTR_DAT_0437a0f8;
    uVar22 = *(undefined8 *)(PTR_DAT_0437a0f8 + 8);
    *(undefined4 *)(param_1 + 0x1d0) = 0;
    *(undefined8 *)(param_1 + 0x1b0) = uVar10;
    *(undefined8 *)(param_1 + 0x1b8) = uVar22;
    *(undefined8 *)(param_1 + 0x1c0) = uVar10;
    *(undefined8 *)(param_1 + 0x1c8) = uVar22;
  }
LAB_0289bd1c:
  *(float *)(param_1 + 0x1d4) = fVar9;
  return;
}


