/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ca06c; name: FUN_032ca06c
 */


void FUN_032ca06c(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  undefined8 uVar11;
  undefined8 local_30;
  float fStack_28;
  float fStack_24;
  
  FUN_032caa90(&local_30);
  auVar9._8_4_ = fStack_28;
  auVar9._0_8_ = local_30;
  auVar8._8_4_ = fStack_28;
  auVar8._0_8_ = local_30;
  fVar3 = (float)local_30;
  fVar4 = (float)((ulong)local_30 >> 0x20);
  fVar5 = fVar3 + fVar3;
  fVar7 = fVar4 + fVar4;
  fStack_28 = fStack_28 + fStack_28;
  auVar8._12_4_ = fStack_24;
  auVar9._12_4_ = fStack_24;
  auVar8 = NEON_ext(auVar8,auVar9,8,1);
  auVar1._4_4_ = fVar7;
  auVar1._0_4_ = fVar5;
  auVar1._8_4_ = fStack_28;
  auVar1._12_4_ = fStack_24 + fStack_24;
  auVar2._4_4_ = fVar7;
  auVar2._0_4_ = fVar5;
  auVar2._8_4_ = fStack_28;
  auVar2._12_4_ = fStack_24 + fStack_24;
  auVar9 = NEON_ext(auVar1,auVar2,8,1);
  fVar6 = auVar8._0_4_ * auVar9._0_4_;
  uVar11 = NEON_fmov(0x3f800000,4);
  fVar10 = (float)uVar11;
  param_1[1] = (ulong)(uint)(fStack_28 * fVar3 - fVar7 * fStack_24);
  *param_1 = CONCAT44(fVar7 * fVar3 + fStack_28 * fStack_24,fVar10 - (fVar7 * fVar4 + fVar6));
  param_1[3] = (ulong)(uint)(fStack_28 * fVar4 + fVar5 * fStack_24);
  param_1[2] = CONCAT44(fVar10 - (fVar5 * fVar3 + fVar6),fVar7 * fVar3 - fStack_28 * fStack_24);
  param_1[5] = (ulong)(uint)(fVar10 - (fVar5 * fVar3 + fVar7 * fVar4));
  param_1[4] = CONCAT44(fStack_28 * fVar4 - fVar5 * fStack_24,fStack_28 * fVar3 + fVar7 * fStack_24)
  ;
  return;
}


