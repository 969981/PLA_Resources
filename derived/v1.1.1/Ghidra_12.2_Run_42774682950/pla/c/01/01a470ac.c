/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a470ac; name: FUN_01a470ac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a470ac(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar9;
  undefined1 auVar8 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int iVar13;
  int iVar15;
  int iVar16;
  undefined1 auVar14 [16];
  int iVar17;
  undefined1 local_70 [16];
  undefined1 local_60 [64];
  
  uVar1 = param_3[7];
  param_1[5] = param_3[5];
  param_1[7] = uVar1;
  uVar1 = param_3[3];
  param_1[1] = param_3[1];
  param_1[3] = uVar1;
  uVar1 = *param_3;
  param_1[2] = param_3[2];
  *param_1 = uVar1;
  uVar1 = param_3[4];
  param_1[6] = param_3[6];
  param_1[4] = uVar1;
  local_70 = (**(code **)(*param_2 + 0x138))();
  FUN_01831870(local_60,param_1,local_70);
  uVar1 = _DAT_03889860;
  fVar3 = local_60._0_4_ - local_60._16_4_;
  fVar4 = local_60._4_4_ - local_60._20_4_;
  fVar5 = local_60._8_4_ - local_60._24_4_;
  fVar6 = local_60._12_4_ - local_60._28_4_;
  auVar11._0_4_ = fVar3 * fVar3;
  auVar11._4_4_ = fVar4 * fVar4;
  auVar11._8_4_ = fVar5 * fVar5;
  auVar11._12_4_ = fVar6 * fVar6;
  auVar10 = NEON_ext(auVar11,auVar11,8,1);
  fVar7 = auVar10._0_4_ + auVar11._0_4_;
  fVar9 = auVar10._4_4_ + auVar11._4_4_;
  fVar2 = fVar7 + fVar9;
  fVar7 = fVar7 + fVar9;
  if ((fVar2 != 0.0) &&
     (auVar10._8_8_ = CONCAT44(fVar7,fVar2), auVar10._0_8_ = CONCAT44(fVar7,fVar2),
     2.0 <= SQRT(fVar2))) {
    auVar11 = NEON_frsqrte(auVar10,4);
    auVar14._0_4_ = auVar11._0_4_ * fVar2;
    auVar14._4_4_ = auVar11._4_4_ * fVar7;
    auVar14._8_4_ = auVar11._8_4_ * fVar2;
    auVar14._12_4_ = auVar11._12_4_ * fVar7;
    auVar10 = NEON_frsqrts(auVar11,auVar14,4);
    auVar12._0_4_ = auVar11._0_4_ * auVar10._0_4_;
    auVar12._4_4_ = auVar11._4_4_ * auVar10._4_4_;
    auVar12._8_4_ = auVar11._8_4_ * auVar10._8_4_;
    auVar12._12_4_ = auVar11._12_4_ * auVar10._12_4_;
    iVar13 = -(uint)(fVar2 == 0.0);
    iVar15 = -(uint)(fVar7 == 0.0);
    iVar16 = -(uint)(fVar2 == 0.0);
    iVar17 = -(uint)(fVar7 == 0.0);
    auVar8._0_4_ = fVar2 * auVar12._0_4_;
    auVar8._4_4_ = fVar7 * auVar12._4_4_;
    auVar8._8_4_ = fVar2 * auVar12._8_4_;
    auVar8._12_4_ = fVar7 * auVar12._12_4_;
    auVar11 = NEON_frsqrts(auVar12,auVar8,4);
    fVar3 = fVar3 * auVar12._0_4_ * auVar11._0_4_;
    fVar4 = fVar4 * auVar12._4_4_ * auVar11._4_4_;
    fVar5 = fVar5 * auVar12._8_4_ * auVar11._8_4_;
    fVar6 = fVar6 * auVar12._12_4_ * auVar11._12_4_;
    fVar3 = fVar3 + fVar3;
    fVar4 = fVar4 + fVar4;
    fVar5 = fVar5 + fVar5;
    fVar6 = fVar6 + fVar6;
    fVar2 = (float)CONCAT13((byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                            CONCAT12((byte)((uint)fVar3 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10),
                                     CONCAT11((byte)((uint)fVar3 >> 8) & ~(byte)((uint)iVar13 >> 8),
                                              SUB41(fVar3,0) & ~(byte)iVar13)));
    fVar7 = (float)CONCAT13((byte)((uint)fVar5 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                            CONCAT12((byte)((uint)fVar5 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                                     CONCAT11((byte)((uint)fVar5 >> 8) & ~(byte)((uint)iVar16 >> 8),
                                              SUB41(fVar5,0) & ~(byte)iVar16)));
    param_1[3] = _UNK_03889868;
    param_1[2] = uVar1;
    auVar11 = (**(code **)(*param_2 + 0x138))(param_2);
    param_1[1] = CONCAT44((local_60._28_4_ +
                          (float)(CONCAT17((byte)((uint)fVar6 >> 0x18) &
                                           ~(byte)((uint)iVar17 >> 0x18),
                                           CONCAT16((byte)((uint)fVar6 >> 0x10) &
                                                    ~(byte)((uint)iVar17 >> 0x10),
                                                    CONCAT15((byte)((uint)fVar6 >> 8) &
                                                             ~(byte)((uint)iVar17 >> 8),
                                                             CONCAT14(SUB41(fVar6,0) & ~(byte)iVar17
                                                                      ,fVar7)))) >> 0x20)) -
                          auVar11._12_4_,(local_60._24_4_ + fVar7) - auVar11._8_4_);
    *param_1 = CONCAT44((local_60._20_4_ +
                        (float)(CONCAT17((byte)((uint)fVar4 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18)
                                         ,CONCAT16((byte)((uint)fVar4 >> 0x10) &
                                                   ~(byte)((uint)iVar15 >> 0x10),
                                                   CONCAT15((byte)((uint)fVar4 >> 8) &
                                                            ~(byte)((uint)iVar15 >> 8),
                                                            CONCAT14(SUB41(fVar4,0) & ~(byte)iVar15,
                                                                     fVar2)))) >> 0x20)) -
                        auVar11._4_4_,(local_60._16_4_ + fVar2) - auVar11._0_4_);
  }
  return;
}


