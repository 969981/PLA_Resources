/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e334b0; name: FUN_02e334b0
 */


void FUN_02e334b0(float param_1,undefined4 param_2,float param_3,float param_4,float *param_5,
                 float *param_6,float *param_7,float *param_8,float *param_9,uint param_10)

{
  uint uVar1;
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
  
  fVar2 = 0.0;
  if (8 < param_10) {
    fVar5 = 0.0;
    fVar6 = 0.0;
    fVar7 = 0.0;
    fVar11 = 0.0;
    fVar4 = 0.0;
    goto LAB_02e33b7c;
  }
  fVar4 = (float)NEON_fminnm(param_1 * 0.45,param_2);
  switch(param_10) {
  case 0:
    if (param_3 * 0.025 < -37.0) {
      fVar11 = 0.0;
    }
    else {
      uVar1 = (uint)(param_3 * 696658.8 + 1.0653532e+09);
      fVar2 = (float)(uVar1 & 0x7fffff | 0x3f800000);
      fVar11 = (fVar2 * (fVar2 * 0.32518977 + 0.020805772) + 0.65304345) *
               (float)(uVar1 & 0xff800000);
    }
    param_1 = (fVar4 * 6.2831855) / param_1;
    fVar9 = sinf(param_1);
    fVar2 = cosf(param_1);
    fVar8 = fVar11 + -1.0;
    fVar5 = fVar11 + 1.0;
    fVar10 = fVar5 * fVar2;
    fVar4 = fVar5 - fVar8 * fVar2;
    fVar5 = fVar8 * fVar2 + fVar5;
    fVar2 = fVar11 * ((fVar8 - fVar10) + (fVar8 - fVar10));
    fVar9 = fVar9 * SQRT(fVar11) * 1.4142135;
    fVar7 = (fVar4 + fVar9) * fVar11;
    fVar11 = (fVar4 - fVar9) * fVar11;
    fVar6 = fVar5 + fVar9;
    goto LAB_02e33a64;
  case 1:
    param_1 = (fVar4 * 6.2831855) / param_1;
    fVar2 = cosf(param_1);
    uVar1 = (uint)(param_3 * 696658.8 + 1.0653532e+09);
    fVar11 = (float)(uVar1 & 0x7fffff | 0x3f800000);
    fVar4 = 0.0;
    if (-37.0 <= param_3 * 0.025) {
      fVar4 = (fVar11 * (fVar11 * 0.32518977 + 0.020805772) + 0.65304345) *
              (float)(uVar1 & 0xff800000);
    }
    fVar5 = sinf(param_1);
    fVar5 = fVar5 / (param_4 + param_4);
    fVar2 = fVar2 * -2.0;
    fVar11 = fVar4 * fVar5;
    fVar5 = fVar5 / fVar4;
    fVar7 = fVar11 + 1.0;
    fVar11 = 1.0 - fVar11;
    fVar6 = fVar5 + 1.0;
    fVar5 = 1.0 - fVar5;
    fVar4 = fVar2;
    break;
  case 2:
    if (param_3 * 0.025 < -37.0) {
      fVar11 = 0.0;
    }
    else {
      uVar1 = (uint)(param_3 * 696658.8 + 1.0653532e+09);
      fVar2 = (float)(uVar1 & 0x7fffff | 0x3f800000);
      fVar11 = (fVar2 * (fVar2 * 0.32518977 + 0.020805772) + 0.65304345) *
               (float)(uVar1 & 0xff800000);
    }
    param_1 = (fVar4 * 6.2831855) / param_1;
    fVar9 = sinf(param_1);
    fVar2 = cosf(param_1);
    fVar8 = fVar11 + -1.0;
    fVar5 = fVar11 + 1.0;
    fVar10 = fVar5 * fVar2;
    fVar4 = fVar8 * fVar2 + fVar5;
    fVar5 = fVar5 - fVar8 * fVar2;
    fVar2 = fVar11 * -2.0 * (fVar10 + fVar8);
    fVar9 = fVar9 * SQRT(fVar11) * 1.4142135;
    fVar7 = (fVar4 + fVar9) * fVar11;
    fVar11 = (fVar4 - fVar9) * fVar11;
    fVar6 = fVar5 + fVar9;
    goto LAB_02e33b70;
  case 3:
    fVar11 = tanf((fVar4 * 3.1415927) / param_1);
    fVar11 = 1.0 / fVar11;
    fVar4 = fVar11 * fVar11;
    fVar11 = fVar11 * 1.4142135;
    fVar5 = fVar4 + 1.0;
    fVar7 = 1.0 / (fVar5 + fVar11);
    fVar2 = fVar7 + fVar7;
    goto LAB_02e338bc;
  case 4:
    fVar11 = tanf((fVar4 * 3.1415927) / param_1);
    fVar4 = fVar11 * fVar11;
    fVar11 = fVar11 * 1.4142135;
    fVar5 = fVar4 + 1.0;
    fVar7 = 1.0 / (fVar5 + fVar11);
    fVar2 = fVar7 * -2.0;
LAB_02e338bc:
    fVar6 = 1.0;
    fVar5 = fVar7 * (fVar5 - fVar11);
    fVar11 = fVar7;
    fVar4 = fVar2 - fVar2 * fVar4;
    break;
  case 5:
    param_1 = (fVar4 * 6.2831855) / param_1;
    fVar4 = cosf(param_1);
    fVar7 = sinf(param_1);
    fVar7 = fVar7 / (param_4 + param_4);
    fVar6 = fVar7 + 1.0;
    fVar5 = 1.0 - fVar7;
    fVar11 = -fVar7;
    fVar4 = fVar4 * -2.0;
    break;
  case 6:
    param_1 = (fVar4 * 6.2831855) / param_1;
    fVar2 = cosf(param_1);
    fVar5 = sinf(param_1);
    fVar5 = fVar5 / (param_4 + param_4);
    fVar2 = fVar2 * -2.0;
    fVar6 = fVar5 + 1.0;
    fVar5 = 1.0 - fVar5;
    fVar7 = 1.0;
    fVar11 = 1.0;
    fVar4 = fVar2;
    break;
  case 7:
    if (param_3 * 0.025 < -37.0) {
      fVar11 = 0.0;
    }
    else {
      uVar1 = (uint)(param_3 * 696658.8 + 1.0653532e+09);
      fVar2 = (float)(uVar1 & 0x7fffff | 0x3f800000);
      fVar11 = (fVar2 * (fVar2 * 0.32518977 + 0.020805772) + 0.65304345) *
               (float)(uVar1 & 0xff800000);
    }
    param_1 = (fVar4 * 6.2831855) / param_1;
    fVar2 = sinf(param_1);
    fVar4 = cosf(param_1);
    fVar8 = fVar11 + -1.0;
    fVar9 = (fVar2 * (SQRT(fVar11) + SQRT(fVar11))) / (param_4 + param_4);
    fVar5 = fVar11 + 1.0;
    fVar10 = fVar5 * fVar4;
    fVar3 = fVar5 - fVar8 * fVar4;
    fVar2 = fVar11 * ((fVar8 - fVar10) + (fVar8 - fVar10));
    fVar5 = fVar8 * fVar4 + fVar5;
    fVar6 = fVar9 + fVar5;
    fVar7 = (fVar9 + fVar3) * fVar11;
    fVar11 = (fVar3 - fVar9) * fVar11;
LAB_02e33a64:
    fVar4 = (fVar10 + fVar8) * -2.0;
LAB_02e33b78:
    fVar5 = fVar5 - fVar9;
    break;
  case 8:
    if (param_3 * 0.025 < -37.0) {
      fVar11 = 0.0;
    }
    else {
      uVar1 = (uint)(param_3 * 696658.8 + 1.0653532e+09);
      fVar2 = (float)(uVar1 & 0x7fffff | 0x3f800000);
      fVar11 = (fVar2 * (fVar2 * 0.32518977 + 0.020805772) + 0.65304345) *
               (float)(uVar1 & 0xff800000);
    }
    param_1 = (fVar4 * 6.2831855) / param_1;
    fVar2 = sinf(param_1);
    fVar4 = cosf(param_1);
    fVar8 = fVar11 + -1.0;
    fVar9 = (fVar2 * (SQRT(fVar11) + SQRT(fVar11))) / (param_4 + param_4);
    fVar5 = fVar11 + 1.0;
    fVar10 = fVar5 * fVar4;
    fVar3 = fVar8 * fVar4 + fVar5;
    fVar5 = fVar5 - fVar8 * fVar4;
    fVar6 = fVar9 + fVar5;
    fVar7 = (fVar9 + fVar3) * fVar11;
    fVar2 = fVar11 * -2.0 * (fVar10 + fVar8);
    fVar11 = (fVar3 - fVar9) * fVar11;
LAB_02e33b70:
    fVar4 = (fVar8 - fVar10) + (fVar8 - fVar10);
    goto LAB_02e33b78;
  }
LAB_02e33b7c:
  fVar6 = 1.0 / fVar6;
  *param_5 = fVar7 * fVar6;
  *param_6 = fVar2 * fVar6;
  *param_7 = fVar11 * fVar6;
  *param_8 = fVar4 * fVar6;
  *param_9 = fVar5 * fVar6;
  return;
}


