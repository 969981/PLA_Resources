/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018324c8; name: FUN_018324c8
 */


void FUN_018324c8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  undefined1 auVar10 [12];
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  float local_44;
  
  local_44 = 1.0;
  if (*(uint *)(param_3 + 0x18) != 0xffffffff) {
    local_44 = (float)(**(code **)(PTR_PTR_0437a4c8 + (ulong)*(uint *)(param_3 + 0x18) * 8))
                                (param_2);
  }
  local_70._0_4_ = 0x3f800000;
  pfVar1 = (float *)local_70;
  if (local_44 <= 1.0) {
    pfVar1 = &local_44;
  }
  local_60._0_8_ = (ulong)(uint)local_60._4_4_ << 0x20;
  pfVar2 = (float *)local_60;
  if (0.0 <= local_44) {
    pfVar2 = pfVar1;
  }
  fVar3 = *pfVar2;
  if (1.0 <= fVar3) {
    uVar6 = param_3[0xf];
    param_1[5] = param_3[0xd];
    param_1[7] = uVar6;
    uVar6 = param_3[0xb];
    param_1[1] = param_3[9];
    param_1[3] = uVar6;
    uVar6 = param_3[8];
    param_1[2] = param_3[10];
    *param_1 = uVar6;
    uVar6 = param_3[0xc];
    param_1[6] = param_3[0xe];
    param_1[4] = uVar6;
  }
  else {
    uVar12 = param_3[9];
    uVar6 = param_3[8];
    uVar14 = param_3[0xb];
    uVar13 = param_3[10];
    uVar5 = *(undefined1 *)(param_3 + 0xe);
    fVar19 = (float)param_3[2];
    fVar20 = (float)((ulong)param_3[2] >> 0x20);
    fVar21 = (float)param_3[3];
    fVar22 = (float)((ulong)param_3[3] >> 0x20);
    fVar15 = (float)*param_3;
    fVar16 = (float)((ulong)*param_3 >> 0x20);
    fVar17 = (float)param_3[1];
    fVar18 = (float)((ulong)param_3[1] >> 0x20);
    uVar4 = *(undefined4 *)((long)param_3 + 0x74);
    fVar7 = *(float *)((long)param_3 + 0x6c);
    fVar23 = *(float *)((long)param_3 + 0x2c);
    local_44 = fVar3;
    local_60 = FUN_009a7ff4(*(undefined4 *)(param_3 + 4),*(undefined4 *)((long)param_3 + 0x24),
                            *(undefined4 *)(param_3 + 5));
    local_70 = FUN_009a7ff4(*(undefined4 *)(param_3 + 0xc),*(undefined4 *)((long)param_3 + 100),
                            *(undefined4 *)(param_3 + 0xd));
    local_80 = FUN_009c6b1c(fVar3,local_60,local_70);
    auVar10 = FUN_0098fad4(local_80);
    fVar9 = auVar10._8_4_;
    fVar8 = auVar10._0_4_;
    fVar11 = auVar10._4_4_;
    if (((1.1920929e-07 < ABS(fVar8)) && (ABS(*(float *)((long)param_3 + 0x24)) <= 1.1920929e-07))
       && (ABS(*(float *)((long)param_3 + 100)) <= 1.1920929e-07)) {
      fVar8 = 0.0;
    }
    if (((1.1920929e-07 < ABS(fVar11)) && (ABS(*(float *)(param_3 + 4)) <= 1.1920929e-07)) &&
       (ABS(*(float *)(param_3 + 0xc)) <= 1.1920929e-07)) {
      fVar11 = 0.0;
    }
    if (((1.1920929e-07 < ABS(fVar9)) && (ABS(*(float *)(param_3 + 5)) <= 1.1920929e-07)) &&
       (ABS(*(float *)(param_3 + 0xd)) <= 1.1920929e-07)) {
      fVar9 = 0.0;
    }
    *(float *)(param_1 + 4) = fVar11;
    *(float *)((long)param_1 + 0x24) = fVar8;
    *(float *)(param_1 + 5) = fVar9;
    *(float *)((long)param_1 + 0x2c) = fVar23 + (fVar7 - fVar23) * fVar3;
    *(undefined1 *)(param_1 + 6) = uVar5;
    *(undefined1 *)((long)param_1 + 0x33) = local_60[2];
    *(undefined2 *)((long)param_1 + 0x31) = local_60._0_2_;
    *(undefined4 *)((long)param_1 + 0x34) = uVar4;
    param_1[1] = CONCAT44(fVar18 + ((float)((ulong)uVar12 >> 0x20) - fVar18) * fVar3,
                          fVar17 + ((float)uVar12 - fVar17) * fVar3);
    *param_1 = CONCAT44(fVar16 + ((float)((ulong)uVar6 >> 0x20) - fVar16) * fVar3,
                        fVar15 + ((float)uVar6 - fVar15) * fVar3);
    param_1[3] = CONCAT44(fVar22 + ((float)((ulong)uVar14 >> 0x20) - fVar22) * fVar3,
                          fVar21 + ((float)uVar14 - fVar21) * fVar3);
    param_1[2] = CONCAT44(fVar20 + ((float)((ulong)uVar13 >> 0x20) - fVar20) * fVar3,
                          fVar19 + ((float)uVar13 - fVar19) * fVar3);
  }
  return;
}


