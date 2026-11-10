/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00258c40; name: FUN_00258c40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00258c40(float param_1,undefined1 param_2 [16],float param_3,float param_4,float *param_5,
                 undefined8 param_6,undefined8 *param_7)

{
  float fVar1;
  float extraout_s0;
  float extraout_var;
  float extraout_var_00;
  float extraout_var_01;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar6 = param_2._12_4_;
  fVar4 = param_2._8_4_;
  fVar3 = param_2._4_4_;
  fVar2 = param_2._0_4_;
  fVar7 = 0.5;
  fVar8 = 0.0;
  fVar5 = 0.0;
  fVar10 = 0.0;
  param_1 = param_1 * 0.5;
  fVar1 = fVar2 * 0.5;
  FUN_00258590(param_6);
  fVar9 = extraout_s0;
  fVar11 = extraout_var;
  fVar12 = extraout_var_00;
  fVar13 = extraout_var_01;
  if (param_7 != (undefined8 *)0x0) {
    fVar18 = (float)param_7[2];
    fVar13 = (float)*param_7;
    fVar14 = (float)((ulong)*param_7 >> 0x20);
    fVar16 = (float)param_7[1];
    fVar15 = (float)((ulong)param_7[2] >> 0x20);
    fVar17 = (float)param_7[3];
    fVar9 = extraout_s0 * fVar13 + fVar2 * fVar14 + fVar7 * fVar16 + 0.0;
    fVar11 = extraout_var * fVar13 + fVar3 * fVar14 + fVar8 * fVar16 + 0.0;
    fVar12 = extraout_var_00 * fVar13 + fVar4 * fVar14 + fVar5 * fVar16 + 0.0;
    fVar13 = (float)((ulong)param_7[1] >> 0x20) +
             extraout_var_01 * fVar13 + fVar6 * fVar14 + fVar10 * fVar16;
    fVar2 = extraout_s0 * fVar18 + fVar2 * fVar15 + fVar7 * fVar17 + 0.0;
    fVar3 = extraout_var * fVar18 + fVar3 * fVar15 + fVar8 * fVar17 + 0.0;
    fVar4 = extraout_var_00 * fVar18 + fVar4 * fVar15 + fVar5 * fVar17 + 0.0;
    fVar6 = (float)((ulong)param_7[3] >> 0x20) +
            extraout_var_01 * fVar18 + fVar6 * fVar15 + fVar10 * fVar17;
  }
  fVar10 = (float)((ulong)_DAT_03889a80 >> 0x20);
  fVar14 = (float)((ulong)_DAT_03888d10 >> 0x20);
  fVar7 = (float)_DAT_03889a80 * fVar2 + fVar3 * 0.0 + (float)_DAT_03888d10 * fVar4 + 0.0;
  fVar8 = fVar10 * fVar2 + fVar3 * 1.0 + fVar14 * fVar4 + 0.0;
  fVar5 = (float)_UNK_03889a88 * fVar2 + fVar3 * 0.0 + (float)_UNK_03888d18 * fVar4 + 0.0;
  fVar6 = fVar6 + (param_1 + param_3) * fVar2 + (param_4 - fVar1) * fVar3 + fVar4 * 0.0;
  fVar2 = (float)_DAT_03889a80 * fVar9 + fVar11 * 0.0 + (float)_DAT_03888d10 * fVar12 + 0.0;
  fVar3 = fVar10 * fVar9 + fVar11 * 1.0 + fVar14 * fVar12 + 0.0;
  fVar4 = (float)_UNK_03889a88 * fVar9 + fVar11 * 0.0 + (float)_UNK_03888d18 * fVar12 + 0.0;
  fVar13 = fVar13 + (param_1 + param_3) * fVar9 + (param_4 - fVar1) * fVar11 + fVar12 * 0.0;
  fVar18 = -fVar1;
  fVar9 = -param_1;
  fVar11 = fVar13 + fVar2 * fVar9 + fVar3 * fVar1 + fVar4 * 0.0;
  fVar12 = fVar6 + fVar7 * fVar9 + fVar8 * fVar1 + fVar5 * 0.0;
  fVar10 = fVar13 + fVar2 * param_1 + fVar3 * fVar1 + fVar4 * 0.0;
  fVar1 = fVar6 + fVar7 * param_1 + fVar8 * fVar1 + fVar5 * 0.0;
  fVar14 = fVar13 + fVar2 * param_1 + fVar3 * fVar18 + fVar4 * 0.0;
  fVar16 = fVar6 + fVar7 * param_1 + fVar8 * fVar18 + fVar5 * 0.0;
  fVar13 = fVar13 + fVar2 * fVar9 + fVar3 * fVar18 + fVar4 * 0.0;
  fVar6 = fVar6 + fVar7 * fVar9 + fVar8 * fVar18 + fVar5 * 0.0;
  fVar9 = fVar11;
  if (fVar11 <= -3.4028235e+38) {
    fVar9 = -3.4028235e+38;
  }
  if (3.4028235e+38 < fVar11) {
    fVar11 = 3.4028235e+38;
  }
  fVar2 = fVar12;
  if (3.4028235e+38 < fVar12) {
    fVar2 = 3.4028235e+38;
  }
  if (fVar9 <= fVar10) {
    fVar9 = fVar10;
  }
  if (fVar12 <= fVar1) {
    fVar12 = fVar1;
  }
  if (fVar10 <= fVar11) {
    fVar11 = fVar10;
  }
  if (fVar1 <= fVar2) {
    fVar2 = fVar1;
  }
  if (fVar9 <= fVar14) {
    fVar9 = fVar14;
  }
  if (fVar12 <= fVar16) {
    fVar12 = fVar16;
  }
  if (fVar14 <= fVar11) {
    fVar11 = fVar14;
  }
  if (fVar16 <= fVar2) {
    fVar2 = fVar16;
  }
  if (fVar9 <= fVar13) {
    fVar9 = fVar13;
  }
  if (fVar12 <= fVar6) {
    fVar12 = fVar6;
  }
  if (fVar13 <= fVar11) {
    fVar11 = fVar13;
  }
  if (fVar6 <= fVar2) {
    fVar2 = fVar6;
  }
  param_5[2] = fVar9;
  param_5[3] = fVar2;
  *param_5 = fVar11;
  param_5[1] = fVar12;
  return;
}


