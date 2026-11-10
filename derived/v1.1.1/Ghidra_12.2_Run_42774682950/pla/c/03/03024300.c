/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03024300; name: FUN_03024300
 */


/* WARNING: Removing unreachable block (ram,0x03024460) */

void FUN_03024300(long param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  switch(*(undefined1 *)(param_1 + 0x18)) {
  case 1:
    fVar1 = param_2[6];
    fVar5 = param_2[7];
    fVar6 = *(float *)(*(long *)(param_2 + 2) + 0xc) * *(float *)(param_1 + 0x30);
    fVar7 = fVar5 * *(float *)(param_1 + 0x2c) * *(float *)(*(long *)(param_2 + 2) + 0xc);
    fVar4 = fVar5 - fVar7;
    fVar3 = (float)FUN_032c8ef0(fVar4);
    fVar2 = fVar5;
    if (fVar6 < fVar3) {
      if (fVar4 <= 0.0) {
        fVar6 = -fVar6;
      }
      fVar2 = fVar7 + fVar6;
    }
    fVar5 = (float)FUN_032c8ef0(fVar5);
    fVar3 = param_2[5];
    fVar6 = fVar5 - fVar3;
    if (fVar2 <= fVar5 - fVar3) {
      fVar6 = fVar2;
    }
    fVar4 = -fVar5 - fVar3;
    if (-fVar5 - fVar3 <= fVar2) {
      fVar4 = fVar6;
    }
    fVar1 = *(float *)(*(long *)(param_2 + 2) + 0x10) * (fVar1 + fVar4);
    break;
  case 2:
    if (*(char *)(param_1 + 0x30) == '\0') {
      fVar1 = *(float *)(param_1 + 0x2c);
    }
    else {
      fVar1 = (param_2[6] + param_2[7]) * *(float *)(*(long *)(param_2 + 2) + 0x10);
    }
    fVar3 = param_2[5];
    break;
  case 3:
    fVar3 = param_2[6] + param_2[7];
    fVar6 = **(float **)(param_2 + 2);
    fVar2 = (1.0 / *param_2) * fVar6 * fVar6 * *(float *)(param_1 + 0x24);
    fVar5 = (1.0 / *param_2) * fVar6 * *(float *)(param_1 + 0x28);
    fVar6 = fVar2;
    if (1.0 < fVar2) {
      fVar6 = 1.0;
    }
    fVar1 = 0.0;
    fVar4 = 0.0;
    if (0.0 <= fVar2) {
      fVar4 = fVar6;
    }
    fVar6 = 0.0;
    if (0.0 <= fVar5) {
      fVar6 = fVar5;
    }
    goto LAB_030243f4;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x0302449c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x28))(param_1,param_2,param_3);
    return;
  default:
    goto switchD_0302434c_default;
  }
  fVar4 = *(float *)(param_1 + 0x24);
  fVar6 = *(float *)(param_1 + 0x28);
LAB_030243f4:
  fVar2 = *(float *)(param_1 + 0x1c);
  fVar5 = *(float *)(param_1 + 0x20);
  *param_3 = fVar3;
  param_3[1] = fVar1;
  param_3[2] = fVar5;
  param_3[3] = fVar2;
  param_3[4] = fVar4;
  param_3[5] = fVar6;
switchD_0302434c_default:
  return;
}


