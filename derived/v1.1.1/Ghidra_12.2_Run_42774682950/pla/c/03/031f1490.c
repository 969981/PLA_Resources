/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f1490; name: FUN_031f1490
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031f1490(long *param_1,float *param_2,undefined1 (*param_3) [16])

{
  float fVar1;
  float fVar2;
  float fVar4;
  float fVar5;
  undefined1 auVar3 [16];
  float fVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  float fVar12;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  auVar3._0_4_ = -*param_2;
  auVar3._4_4_ = -param_2[1];
  auVar3._8_4_ = -param_2[2];
  auVar3._12_4_ = param_2[3];
  auVar11._8_8_ = _UNK_038890f8;
  auVar11._0_8_ = _DAT_038890f0;
  auVar10._8_8_ = _UNK_03888e28;
  auVar10._0_8_ = _DAT_03888e20;
  auVar13._8_8_ = _UNK_03888d78;
  auVar13._0_8_ = _DAT_03888d70;
  auVar15._8_8_ = _UNK_03889108;
  auVar15._0_8_ = _DAT_03889100;
  auVar8 = a64_TBL(ZEXT816(0),auVar3,auVar11);
  auVar3 = a64_TBL(ZEXT816(0),auVar3,auVar10);
  auVar14 = a64_TBL(ZEXT816(0),*param_3,auVar13);
  auVar11 = a64_TBL(ZEXT816(0),*param_3,auVar15);
  auVar16._0_4_ = auVar3._0_4_ * auVar11._0_4_ - auVar8._0_4_ * auVar14._0_4_;
  auVar16._4_4_ = auVar3._4_4_ * auVar11._4_4_ - auVar8._4_4_ * auVar14._4_4_;
  auVar16._8_4_ = auVar3._8_4_ * auVar11._8_4_ - auVar8._8_4_ * auVar14._8_4_;
  auVar16._12_4_ = auVar3._12_4_ * auVar11._12_4_ - auVar8._12_4_ * auVar14._12_4_;
  auVar17._8_4_ = (int)_UNK_038895d8;
  auVar17._0_8_ = _DAT_038895d0;
  auVar17._12_4_ = (int)((ulong)_UNK_038895d8 >> 0x20);
  auVar17 = a64_TBL(ZEXT816(0),auVar16,auVar17);
  fVar6 = auVar17._12_4_ - (auVar3._12_4_ * auVar14._12_4_ + auVar8._12_4_ * auVar11._12_4_);
  fVar2 = -(auVar17._0_4_ - (auVar3._0_4_ * auVar14._0_4_ + auVar8._0_4_ * auVar11._0_4_));
  fVar4 = -(auVar17._4_4_ - (auVar3._4_4_ * auVar14._4_4_ + auVar8._4_4_ * auVar11._4_4_));
  fVar5 = -(auVar17._8_4_ - (auVar3._8_4_ * auVar14._8_4_ + auVar8._8_4_ * auVar11._8_4_));
  auVar14._0_4_ = fVar2 * fVar2;
  auVar14._4_4_ = fVar4 * fVar4;
  auVar14._8_4_ = fVar5 * fVar5;
  auVar14._12_4_ = fVar6 * fVar6;
  auVar17 = NEON_ext(auVar14,auVar14,8,1);
  fVar1 = auVar17._0_4_ + auVar17._4_4_;
  uVar7 = CONCAT44(auVar14._0_4_ + auVar14._4_4_ + fVar1,auVar14._0_4_ + auVar14._4_4_ + fVar1);
  uVar9 = NEON_frsqrte(uVar7,4);
  fVar1 = (float)uVar9;
  fVar12 = (float)((ulong)uVar9 >> 0x20);
  uVar9 = NEON_frsqrts(uVar7,CONCAT44(fVar12 * fVar12,fVar1 * fVar1),4);
  fVar1 = fVar1 * (float)uVar9;
  fVar12 = fVar12 * (float)((ulong)uVar9 >> 0x20);
  uVar7 = NEON_frsqrts(uVar7,CONCAT44(fVar12 * fVar12,fVar1 * fVar1),4);
  fVar1 = (float)uVar7 * fVar1;
  fVar12 = (float)((ulong)uVar7 >> 0x20) * fVar12;
  auVar8._0_8_ = CONCAT44(fVar4 * fVar12,fVar2 * fVar1);
  auVar8._8_4_ = fVar5 * fVar1;
  auVar8._12_4_ = fVar6 * fVar12;
  uStack_28 = auVar8._8_8_;
  local_30 = auVar8._0_8_;
  FUN_032cad10(&local_30);
  (**(code **)(*param_1 + 0x50))(param_1,&local_50);
  uVar7 = NEON_fmax(CONCAT44(local_50 * local_50 + fStack_4c * fStack_4c + fStack_48 * fStack_48,
                             local_50 * local_50 + fStack_4c * fStack_4c + fStack_48 * fStack_48),
                    CONCAT44(fStack_40 * fStack_40 + fStack_3c * fStack_3c + fStack_38 * fStack_38,
                             fStack_40 * fStack_40 + fStack_3c * fStack_3c + fStack_38 * fStack_38),
                    4);
  uVar9 = NEON_frsqrte(uVar7,4);
  fVar1 = (float)uVar9;
  fVar2 = (float)((ulong)uVar9 >> 0x20);
  uVar9 = NEON_frsqrts(uVar7,CONCAT44(fVar2 * fVar2,fVar1 * fVar1),4);
  fVar1 = fVar1 * (float)uVar9;
  fVar2 = fVar2 * (float)((ulong)uVar9 >> 0x20);
  NEON_frsqrts(uVar7,CONCAT44(fVar2 * fVar2,fVar1 * fVar1),4);
  return;
}


