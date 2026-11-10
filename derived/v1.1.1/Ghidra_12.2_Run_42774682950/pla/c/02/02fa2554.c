/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fa2554; name: FUN_02fa2554
 */


void FUN_02fa2554(undefined1 (*param_1) [16],float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar4;
  float fVar5;
  undefined1 auVar3 [16];
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  auVar3 = *param_1;
  fVar10 = auVar3._0_4_;
  auVar7._0_4_ = fVar10 + fVar10;
  fVar4 = auVar3._4_4_;
  auVar7._4_4_ = fVar4 + fVar4;
  auVar7._8_4_ = auVar3._8_4_ + auVar3._8_4_;
  fVar5 = auVar3._12_4_;
  auVar7._12_4_ = fVar5 + fVar5;
  auVar3 = NEON_ext(auVar3,auVar3,8,1);
  auVar8 = NEON_ext(auVar7,auVar7,8,1);
  fVar1 = auVar3._0_4_ * auVar8._0_4_;
  fVar15 = auVar7._4_4_ * fVar10 + auVar7._8_4_ * fVar5;
  fVar16 = auVar7._8_4_ * fVar10 - auVar7._4_4_ * fVar5;
  fVar13 = auVar7._4_4_ * fVar10 - auVar7._8_4_ * fVar5;
  fVar14 = auVar7._8_4_ * fVar4 + auVar7._0_4_ * fVar5;
  fVar11 = auVar7._8_4_ * fVar4 - auVar7._0_4_ * fVar5;
  uVar12 = NEON_fmov(0x3f800000,4);
  fVar6 = (float)uVar12;
  fVar2 = fVar6 - (auVar7._0_4_ * fVar10 + fVar1);
  fVar9 = fVar6 - (auVar7._0_4_ * fVar10 + auVar7._4_4_ * fVar4);
  fVar6 = fVar6 - (auVar7._4_4_ * fVar4 + fVar1);
  fVar1 = auVar7._8_4_ * fVar10 + auVar7._4_4_ * fVar5;
  *(ulong *)(param_2 + 2) = (ulong)(uint)fVar16;
  *(ulong *)param_2 = CONCAT44(fVar15,fVar6);
  *(ulong *)(param_2 + 6) = (ulong)(uint)fVar14;
  *(ulong *)(param_2 + 4) = CONCAT44(fVar2,fVar13);
  *(ulong *)(param_2 + 10) = (ulong)(uint)fVar9;
  *(ulong *)(param_2 + 8) = CONCAT44(fVar11,fVar1);
  fVar10 = *(float *)param_1[2];
  param_2[2] = fVar16 * fVar10;
  param_2[3] = fVar10 * 0.0;
  *param_2 = fVar6 * fVar10;
  param_2[1] = fVar15 * fVar10;
  fVar10 = *(float *)(param_1[2] + 4);
  param_2[6] = fVar14 * fVar10;
  param_2[7] = fVar10 * 0.0;
  param_2[4] = fVar13 * fVar10;
  param_2[5] = fVar2 * fVar10;
  fVar10 = *(float *)(param_1[2] + 8);
  param_2[10] = fVar9 * fVar10;
  param_2[0xb] = fVar10 * 0.0;
  param_2[8] = fVar1 * fVar10;
  param_2[9] = fVar11 * fVar10;
  uVar12 = *(undefined8 *)param_1[1];
  *(ulong *)(param_2 + 0xe) =
       CONCAT44(*(undefined4 *)(param_1[1] + 8),*(undefined4 *)(param_1[1] + 8));
  *(undefined8 *)(param_2 + 0xc) = uVar12;
  return;
}


