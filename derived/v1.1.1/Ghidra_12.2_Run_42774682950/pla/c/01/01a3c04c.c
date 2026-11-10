/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a3c04c; name: FUN_01a3c04c
 */


void FUN_01a3c04c(long param_1,float *param_2)

{
  bool bVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_48;
  float local_44;
  
  if (*(char *)(param_1 + 0x380) == '\0') {
    fVar6 = 0.0;
    fVar7 = 0.0;
  }
  else {
    fVar7 = *(float *)(param_1 + 0x38c);
    fVar6 = *(float *)(param_1 + 0x390);
  }
  fVar4 = *param_2;
  fVar3 = fVar6;
  if ((0.0 < fVar4) && (fVar8 = 1.0 - fVar4, 0.0 < fVar8)) {
    if (fVar4 <= ABS(fVar7)) {
      if (param_2[1] == -NAN) {
        fVar3 = 1.0;
      }
      else {
        fVar3 = (float)(**(code **)(PTR_PTR_0437a4c8 + (ulong)(uint)param_2[1] * 8))
                                 ((ABS(fVar7) - fVar4) / fVar8);
        fVar4 = *param_2;
      }
      bVar1 = 0.0 <= fVar7;
      fVar7 = -fVar3;
      if (bVar1) {
        fVar7 = fVar3;
      }
    }
    else {
      fVar7 = 0.0;
    }
    if (fVar4 <= ABS(fVar6)) {
      if (param_2[1] == -NAN) {
        fVar4 = 1.0;
      }
      else {
        fVar4 = (float)(**(code **)(PTR_PTR_0437a4c8 + (ulong)(uint)param_2[1] * 8))
                                 ((ABS(fVar6) - fVar4) / fVar8);
      }
      fVar3 = -fVar4;
      if (0.0 <= fVar6) {
        fVar3 = fVar4;
      }
    }
    else {
      fVar3 = 0.0;
    }
  }
  if (1.1920929e-07 < fVar7 * fVar7) {
    fVar6 = *(float *)(param_1 + 0x434) + ABS(fVar7) * *(float *)(param_1 + 0x424);
    uVar5 = 0xbf800000;
    if (fVar7 <= 0.0) {
      uVar5 = 0x3f800000;
    }
    *(float *)(param_1 + 0x434) = fVar6;
    *(undefined4 *)(param_1 + 0x43c) = uVar5;
    local_48 = 1.0;
    local_44 = 0.0;
    pfVar2 = &local_48;
    if (fVar6 <= 1.0) {
      pfVar2 = (float *)(param_1 + 0x434);
    }
    if (fVar6 < 0.0) {
      pfVar2 = &local_44;
    }
    *(float *)(param_1 + 0x434) = ABS(fVar7) * *pfVar2;
  }
  else {
    fVar7 = *(float *)(param_1 + 0x434) - *(float *)(param_1 + 0x428);
    *(float *)(param_1 + 0x434) = fVar7;
    local_48 = 1.0;
    local_44 = 0.0;
    pfVar2 = &local_48;
    if (fVar7 <= 1.0) {
      pfVar2 = (float *)(param_1 + 0x434);
    }
    if (fVar7 < 0.0) {
      pfVar2 = &local_44;
    }
    *(float *)(param_1 + 0x434) = *pfVar2;
  }
  if (1.1920929e-07 < fVar3 * fVar3) {
    fVar7 = *(float *)(param_1 + 0x438) + ABS(fVar3) * *(float *)(param_1 + 0x42c);
    uVar5 = 0xbf800000;
    if (fVar3 <= 0.0) {
      uVar5 = 0x3f800000;
    }
    *(float *)(param_1 + 0x438) = fVar7;
    *(undefined4 *)(param_1 + 0x440) = uVar5;
    local_48 = 1.0;
    local_44 = 0.0;
    pfVar2 = &local_48;
    if (fVar7 <= 1.0) {
      pfVar2 = (float *)(param_1 + 0x438);
    }
    if (fVar7 < 0.0) {
      pfVar2 = &local_44;
    }
    *(float *)(param_1 + 0x438) = ABS(fVar3) * *pfVar2;
  }
  else {
    fVar7 = *(float *)(param_1 + 0x438) - *(float *)(param_1 + 0x430);
    *(float *)(param_1 + 0x438) = fVar7;
    local_48 = 1.0;
    local_44 = 0.0;
    pfVar2 = &local_48;
    if (fVar7 <= 1.0) {
      pfVar2 = (float *)(param_1 + 0x438);
    }
    if (fVar7 < 0.0) {
      pfVar2 = &local_44;
    }
    *(float *)(param_1 + 0x438) = *pfVar2;
  }
  return;
}


