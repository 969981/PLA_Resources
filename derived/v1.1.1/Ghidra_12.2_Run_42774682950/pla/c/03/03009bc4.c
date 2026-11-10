/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03009bc4; name: FUN_03009bc4
 */


/* WARNING: Removing unreachable block (ram,0x03009d60) */

void FUN_03009bc4(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_48 [2];
  
  fVar5 = *(float *)(param_1 + 8);
  fVar1 = *(float *)(param_1 + 0xc);
  *(undefined2 *)(param_1 + 3) = 0;
  if (fVar5 == fVar1) {
    *(float *)(param_1 + 0x10) = fVar5;
    if (3.1414928 <= fVar5) {
      fVar1 = 3.7699115;
    }
    else {
      fVar1 = 0.01;
      if (0.01 < fVar5) {
        fVar1 = sinf(fVar5);
        fVar5 = cosf(fVar5);
        fVar5 = (float)FUN_032c8ed0(2.0 / (fVar5 + 1.0));
        fVar1 = fVar1 * fVar5;
      }
    }
    *(float *)(param_1 + 0x18) = fVar1;
    *(float *)(param_1 + 0x1c) = fVar1;
    *(float *)(param_1 + 0x14) = fVar1;
    *(undefined1 *)(param_1 + 4) = 1;
    fVar1 = (float)FUN_032c8ef0();
    if (fVar1 <= 1.1920929e-07) {
      *(undefined8 *)(param_1 + 0x20) = 0x3f8000003f800000;
    }
    else {
      *(float *)(param_1 + 0x20) = 1.0 / *(float *)(param_1 + 0x14);
      *(float *)(param_1 + 0x24) = 1.0 / *(float *)(param_1 + 0x18);
    }
  }
  else {
    *(undefined1 *)(param_1 + 3) = 1;
    local_48[0] = fVar5;
    local_48[1] = fVar1;
    fVar4 = local_48[fVar5 <= fVar1];
    fVar6 = local_48[fVar1 < fVar5] + local_48[fVar1 < fVar5];
    if (fVar6 < fVar4) {
      *(float *)(param_1 + 0x10) = fVar4;
      if (3.1414928 <= fVar4) {
        fVar2 = 3.7699115;
      }
      else {
        fVar2 = 0.01;
        if (0.01 < fVar4) {
          fVar2 = sinf(fVar4);
          fVar3 = cosf(fVar4);
          fVar3 = (float)FUN_032c8ed0(2.0 / (fVar3 + 1.0));
          fVar2 = fVar2 * fVar3;
        }
      }
      *(undefined1 *)(param_1 + 4) = 1;
      *(float *)(param_1 + 0x1c) = fVar2;
      fVar2 = fVar4 / (fVar6 + 1.1920929e-07);
      fVar3 = fVar2 + -1.0;
      fVar6 = 0.0;
      if (1.0 <= fVar2) {
        fVar6 = fVar3 + fVar3;
      }
      fVar4 = fVar4 * 1.1;
      fVar2 = 0.2;
      if (fVar4 <= 0.0) {
        fVar2 = -0.2;
      }
      local_48[fVar5 <= fVar1] = fVar4 + ((fVar4 * 1.2 + fVar2) - fVar4) * fVar6;
    }
    fVar1 = local_48[0];
    if (3.1414928 <= local_48[0]) {
      fVar5 = 3.7699115;
    }
    else {
      fVar5 = 0.01;
      if (0.01 < local_48[0]) {
        fVar5 = sinf(local_48[0]);
        fVar1 = cosf(fVar1);
        fVar1 = (float)FUN_032c8ed0(2.0 / (fVar1 + 1.0));
        fVar5 = fVar5 * fVar1;
      }
    }
    fVar1 = local_48[1];
    *(float *)(param_1 + 0x14) = fVar5;
    if (3.1414928 <= local_48[1]) {
      fVar4 = 3.7699115;
    }
    else {
      fVar4 = 0.01;
      if (0.01 < local_48[1]) {
        fVar4 = sinf(local_48[1]);
        fVar1 = cosf(fVar1);
        fVar1 = (float)FUN_032c8ed0(2.0 / (fVar1 + 1.0));
        fVar4 = fVar4 * fVar1;
        fVar5 = *(float *)(param_1 + 0x14);
      }
    }
    *(float *)(param_1 + 0x18) = fVar4;
    *(float *)(param_1 + 0x20) = 1.0 / fVar5;
    *(float *)(param_1 + 0x24) = 1.0 / fVar4;
  }
  return;
}


