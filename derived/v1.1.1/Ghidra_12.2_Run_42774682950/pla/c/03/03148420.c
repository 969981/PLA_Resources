/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03148420; name: FUN_03148420
 */


void FUN_03148420(long param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [12],long *param_4)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar18;
  undefined1 auVar17 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  float local_50;
  float fStack_4c;
  undefined8 uStack_48;
  
  if (*(int *)(param_1 + 0x58) == 0) {
    if (*(long *)(param_1 + 0x48) != -1) {
      auVar8 = *param_2;
      fVar3 = *(float *)(param_1 + 0x6c);
      local_50 = auVar8._0_4_ * fVar3;
      fStack_4c = auVar8._4_4_ * fVar3;
      uStack_48 = CONCAT44(auVar8._12_4_ * fVar3,auVar8._8_4_ * fVar3);
      (**(code **)(*param_4 + 0x1b0))(param_4,*(long *)(param_1 + 0x48),&local_50,0);
    }
  }
  else {
    uVar2 = FUN_03148294(param_1,param_4);
    iVar1 = (**(code **)(*param_4 + 0x100))(param_4,uVar2);
    if (iVar1 != 0) {
      fVar3 = *(float *)(param_1 + 0x70);
      local_50 = *(float *)*param_2 * fVar3 + *(float *)param_3[8];
      fStack_4c = *(float *)(*param_2 + 4) * fVar3 + 0.5 + *(float *)(param_3[8] + 4);
      uStack_48 = CONCAT44(*(float *)(*param_2 + 0xc) * fVar3 + *(float *)param_3[9],
                           *(float *)(*param_2 + 8) * fVar3 + *(float *)(param_3[8] + 8));
      fVar5 = (float)*(undefined8 *)(*param_3 + 8);
      fVar6 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
      uVar7 = *(undefined8 *)*param_3;
      fVar3 = (float)uVar7;
      fVar4 = (float)((ulong)uVar7 >> 0x20);
      auVar8._12_4_ = fVar6;
      auVar8._0_12_ = *param_3;
      auVar17._12_4_ = fVar6;
      auVar17._0_12_ = *param_3;
      auVar8 = NEON_ext(auVar8,auVar17,8,1);
      fVar11 = auVar8._4_4_ * auVar8._4_4_;
      uVar7 = NEON_ext(uVar7,auVar8._0_8_,4,1);
      fVar10 = fVar11 + -0.5;
      fVar11 = fVar11 + -0.5;
      auVar8 = *(undefined1 (*) [16])(param_3[9] + 4);
      fVar12 = auVar8._0_4_;
      fVar13 = auVar8._4_4_;
      fVar14 = auVar8._8_4_;
      fVar15 = fVar3 * fVar12 + fVar4 * fVar13 + fVar5 * fVar14;
      fVar18 = fVar3 * fVar12 + fVar4 * fVar13 + fVar5 * fVar14;
      auVar17 = NEON_ext(auVar8,auVar8,8,1);
      uVar16 = NEON_ext(auVar8._0_8_,auVar17._0_8_,4,1);
      auVar9._0_4_ = fVar3 * (float)uVar16 - fVar12 * (float)uVar7;
      auVar9._4_4_ = fVar4 * (float)((ulong)uVar16 >> 0x20) - fVar13 * (float)((ulong)uVar7 >> 0x20)
      ;
      auVar9._8_4_ = fVar5 * fVar12 - fVar14 * fVar3;
      auVar9._12_4_ = fVar6 * fVar13 - auVar8._12_4_ * fVar4;
      auVar17 = NEON_ext(auVar9,auVar9,4,1);
      fVar3 = fVar12 * fVar10 + fVar3 * fVar15 + auVar17._0_4_ * fVar6;
      fVar4 = fVar13 * fVar11 + fVar4 * fVar18 + auVar17._4_4_ * fVar6;
      fVar5 = fVar14 * fVar10 + fVar5 * fVar15 + auVar9._0_4_ * fVar6;
      fVar6 = auVar8._12_4_ * fVar11 + fVar6 * fVar18 + auVar9._4_4_ * fVar6;
      uStack_58 = CONCAT44(fVar6 + fVar6,fVar5 + fVar5);
      local_60 = CONCAT44(fVar4 + fVar4,fVar3 + fVar3);
      (**(code **)(*param_4 + 400))(param_4,uVar2,&local_50,&local_60,0);
    }
  }
  return;
}


