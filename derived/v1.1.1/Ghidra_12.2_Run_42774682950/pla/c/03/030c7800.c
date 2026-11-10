/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030c7800; name: FUN_030c7800
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030c7800(double *param_1,undefined1 (*param_2) [16],float *param_3,float *param_4,
                 undefined8 *param_5)

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
  float fVar11;
  undefined1 auVar10 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar4 = param_3[3];
  fVar5 = (float)*param_5;
  fVar6 = (float)((ulong)*param_5 >> 0x20);
  *param_1 = *param_1 + (double)(fVar5 * *param_3);
  param_1[1] = param_1[1] + (double)(fVar6 * fVar1);
  auVar10._8_8_ = _UNK_038890f8;
  auVar10._0_8_ = _DAT_038890f0;
  auVar13._8_8_ = _UNK_03888e28;
  auVar13._0_8_ = _DAT_03888e20;
  param_1[2] = param_1[2] + (double)(fVar5 * fVar2);
  param_1[3] = param_1[3] + (double)(fVar6 * fVar4);
  fVar1 = (float)*param_5 * 0.5;
  auVar3._0_4_ = *param_4 * fVar1;
  auVar3._4_4_ = param_4[1] * (float)((ulong)*param_5 >> 0x20) * 0.5;
  auVar3._8_4_ = param_4[2] * fVar1;
  auVar3._12_4_ = 0x3f800000;
  auVar10 = a64_TBL(ZEXT816(0),*param_2,auVar10);
  auVar8 = a64_TBL(ZEXT816(0),*param_2,auVar13);
  auVar12._8_8_ = _UNK_03888d78;
  auVar12._0_8_ = _DAT_03888d70;
  auVar14._8_8_ = _UNK_03889108;
  auVar14._0_8_ = _DAT_03889100;
  auVar13 = a64_TBL(ZEXT816(0),auVar3,auVar12);
  auVar3 = a64_TBL(ZEXT816(0),auVar3,auVar14);
  auVar15._0_4_ = auVar8._0_4_ * auVar3._0_4_ - auVar10._0_4_ * auVar13._0_4_;
  auVar15._4_4_ = auVar8._4_4_ * auVar3._4_4_ - auVar10._4_4_ * auVar13._4_4_;
  auVar15._8_4_ = auVar8._8_4_ * auVar3._8_4_ - auVar10._8_4_ * auVar13._8_4_;
  auVar15._12_4_ = auVar8._12_4_ * auVar3._12_4_ - auVar10._12_4_ * auVar13._12_4_;
  auVar16._8_4_ = (int)_UNK_038895d8;
  auVar16._0_8_ = _DAT_038895d0;
  auVar16._12_4_ = (int)((ulong)_UNK_038895d8 >> 0x20);
  auVar16 = a64_TBL(ZEXT816(0),auVar15,auVar16);
  fVar6 = auVar16._12_4_ - (auVar8._12_4_ * auVar13._12_4_ + auVar10._12_4_ * auVar3._12_4_);
  fVar2 = -(auVar16._0_4_ - (auVar8._0_4_ * auVar13._0_4_ + auVar10._0_4_ * auVar3._0_4_));
  fVar4 = -(auVar16._4_4_ - (auVar8._4_4_ * auVar13._4_4_ + auVar10._4_4_ * auVar3._4_4_));
  fVar5 = -(auVar16._8_4_ - (auVar8._8_4_ * auVar13._8_4_ + auVar10._8_4_ * auVar3._8_4_));
  auVar8._0_4_ = fVar2 * fVar2;
  auVar8._4_4_ = fVar4 * fVar4;
  auVar8._8_4_ = fVar5 * fVar5;
  auVar8._12_4_ = fVar6 * fVar6;
  auVar16 = NEON_ext(auVar8,auVar8,8,1);
  fVar1 = auVar16._0_4_ + auVar16._4_4_;
  uVar7 = CONCAT44(auVar8._0_4_ + auVar8._4_4_ + fVar1,auVar8._0_4_ + auVar8._4_4_ + fVar1);
  uVar9 = NEON_frsqrte(uVar7,4);
  fVar1 = (float)uVar9;
  fVar11 = (float)((ulong)uVar9 >> 0x20);
  uVar9 = NEON_frsqrts(uVar7,CONCAT44(fVar11 * fVar11,fVar1 * fVar1),4);
  fVar1 = fVar1 * (float)uVar9;
  fVar11 = fVar11 * (float)((ulong)uVar9 >> 0x20);
  uVar7 = NEON_frsqrts(uVar7,CONCAT44(fVar11 * fVar11,fVar1 * fVar1),4);
  fVar1 = (float)uVar7 * fVar1;
  fVar11 = (float)((ulong)uVar7 >> 0x20) * fVar11;
  *(float *)(*param_2 + 8) = fVar5 * fVar1;
  *(float *)(*param_2 + 0xc) = fVar6 * fVar11;
  *(float *)*param_2 = fVar2 * fVar1;
  *(float *)(*param_2 + 4) = fVar4 * fVar11;
  return;
}


