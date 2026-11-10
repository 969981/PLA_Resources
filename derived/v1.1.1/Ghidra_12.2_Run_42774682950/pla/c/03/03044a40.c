/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03044a40; name: FUN_03044a40
 */


void FUN_03044a40(long param_1,undefined8 *param_2,undefined1 (*param_3) [12],
                 undefined1 (*param_4) [16],undefined8 param_5,undefined8 *param_6)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined1 auVar14 [16];
  
  fVar8 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
  uVar3 = *(undefined8 *)*param_3;
  fVar9 = (float)((ulong)uVar3 >> 0x20);
  auVar10._12_4_ = fVar8;
  auVar10._0_12_ = *param_3;
  auVar12._12_4_ = fVar8;
  auVar12._0_12_ = *param_3;
  auVar12 = NEON_ext(auVar10,auVar12,8,1);
  auVar10 = *param_4;
  auVar14 = NEON_ext(auVar10,auVar10,8,1);
  uVar11 = NEON_ext(uVar3,auVar12._0_8_,4,1);
  uVar13 = NEON_ext(auVar10._0_8_,auVar14._0_8_,4,1);
  fVar5 = (float)uVar3 * (float)uVar13 - auVar10._0_4_ * (float)uVar11;
  fVar6 = fVar9 * (float)((ulong)uVar13 >> 0x20) - auVar10._4_4_ * (float)((ulong)uVar11 >> 0x20);
  fVar7 = (float)*(undefined8 *)(*param_3 + 8) * auVar10._0_4_ - auVar10._8_4_ * (float)uVar3;
  fVar9 = fVar8 * auVar10._4_4_ - auVar10._12_4_ * fVar9;
  auVar14._4_4_ = fVar6;
  auVar14._0_4_ = fVar5;
  auVar14._8_4_ = fVar7;
  auVar14._12_4_ = fVar9;
  auVar2._4_4_ = fVar6;
  auVar2._0_4_ = fVar5;
  auVar2._8_4_ = fVar7;
  auVar2._12_4_ = fVar9;
  auVar10 = NEON_ext(auVar14,auVar2,4,1);
  if (ABS((float)*param_2 * auVar10._0_4_ + (float)((ulong)*param_2 >> 0x20) * auVar10._4_4_ +
          (float)param_2[1] * fVar5) < 1.1920929e-07) {
    *(undefined4 *)(param_2 + 9) = 1;
    *(undefined4 *)param_3[6] = 1;
    *(undefined4 *)(param_4[4] + 8) = 1;
    iVar1 = *(int *)(param_1 + 8);
    FUN_03044930(param_2,param_3,param_5,param_6);
    iVar4 = *(int *)(param_1 + 8);
    if (iVar1 == iVar4) {
      FUN_03044930(param_2,param_4,param_6,param_6);
      iVar4 = *(int *)(param_1 + 8);
    }
    if (iVar1 == iVar4) {
      FUN_03044930(param_3,param_4,param_6,param_6);
      return;
    }
  }
  else {
    *param_6 = 0;
    param_6[1] = 0;
  }
  return;
}


