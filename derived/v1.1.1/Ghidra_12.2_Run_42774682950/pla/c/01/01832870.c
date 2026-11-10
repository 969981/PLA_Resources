/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01832870; name: FUN_01832870
 */


void FUN_01832870(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4)

{
  undefined4 uVar1;
  float fVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  float *pfVar6;
  float fVar8;
  undefined1 auVar7 [12];
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  float local_74;
  
  uVar15 = param_2[1];
  uVar11 = *param_2;
  uVar16 = param_2[3];
  uVar12 = param_2[2];
  uVar5 = *(undefined2 *)((long)param_3 + 0x31);
  uVar3 = *(undefined1 *)((long)param_3 + 0x33);
  fVar27 = *(float *)(param_2 + 5);
  fVar9 = *(float *)((long)param_2 + 0x2c);
  uVar4 = *(undefined1 *)(param_3 + 6);
  fVar24 = *(float *)(param_2 + 4);
  fVar26 = *(float *)((long)param_2 + 0x24);
  uVar17 = param_3[1];
  uVar13 = *param_3;
  uVar18 = param_3[3];
  uVar14 = param_3[2];
  fVar25 = *(float *)(param_3 + 4);
  fVar22 = *(float *)((long)param_3 + 0x24);
  local_74 = 1.0;
  fVar23 = *(float *)(param_3 + 5);
  fVar28 = *(float *)((long)param_3 + 0x2c);
  uVar1 = *(undefined4 *)((long)param_3 + 0x34);
  if (param_4 != 0xffffffff) {
    local_74 = (float)(**(code **)(PTR_PTR_0437a4c8 + (ulong)param_4 * 8))();
  }
  local_a0._0_4_ = 0x3f800000;
  pfVar6 = (float *)local_a0;
  if (local_74 <= 1.0) {
    pfVar6 = &local_74;
  }
  local_90._0_8_ = (ulong)(uint)local_90._4_4_ << 0x20;
  if (local_74 < 0.0) {
    pfVar6 = (float *)local_90;
  }
  fVar2 = *pfVar6;
  if (1.0 <= fVar2) {
    *(undefined1 *)((long)param_1 + 0x33) = uVar3;
    *(undefined2 *)((long)param_1 + 0x31) = uVar5;
  }
  else {
    local_74 = fVar2;
    local_90 = FUN_009a7ff4(fVar24,fVar26,fVar27);
    local_a0 = FUN_009a7ff4(fVar25,fVar22,fVar23);
    local_b0 = FUN_009c6b1c(fVar2,local_90,local_a0);
    auVar7 = FUN_0098fad4(local_b0);
    fVar8 = auVar7._8_4_;
    fVar19 = auVar7._0_4_;
    fVar10 = ABS(fVar22);
    fVar22 = fVar19;
    if (((fVar10 <= 1.1920929e-07) && (ABS(fVar26) <= 1.1920929e-07)) &&
       (1.1920929e-07 < ABS(fVar19))) {
      fVar22 = 0.0;
    }
    fVar26 = ABS(fVar25);
    fVar29 = (float)uVar12;
    fVar30 = (float)((ulong)uVar12 >> 0x20);
    fVar31 = (float)uVar16;
    fVar32 = (float)((ulong)uVar16 >> 0x20);
    fVar25 = auVar7._4_4_;
    fVar19 = (float)uVar11;
    fVar10 = (float)((ulong)uVar11 >> 0x20);
    fVar20 = (float)uVar15;
    fVar21 = (float)((ulong)uVar15 >> 0x20);
    if (((fVar26 <= 1.1920929e-07) && (ABS(fVar24) <= 1.1920929e-07)) &&
       (1.1920929e-07 < ABS(fVar25))) {
      fVar25 = 0.0;
    }
    fVar24 = ABS(fVar23);
    fVar23 = fVar8;
    if (((fVar24 <= 1.1920929e-07) && (ABS(fVar27) <= 1.1920929e-07)) &&
       (1.1920929e-07 < ABS(fVar8))) {
      fVar23 = 0.0;
    }
    uVar14 = CONCAT44(fVar30 + ((float)((ulong)uVar14 >> 0x20) - fVar30) * fVar2,
                      fVar29 + ((float)uVar14 - fVar29) * fVar2);
    uVar18 = CONCAT44(fVar32 + ((float)((ulong)uVar18 >> 0x20) - fVar32) * fVar2,
                      fVar31 + ((float)uVar18 - fVar31) * fVar2);
    fVar28 = fVar9 + (fVar28 - fVar9) * fVar2;
    uVar13 = CONCAT44(fVar10 + ((float)((ulong)uVar13 >> 0x20) - fVar10) * fVar2,
                      fVar19 + ((float)uVar13 - fVar19) * fVar2);
    uVar17 = CONCAT44(fVar21 + ((float)((ulong)uVar17 >> 0x20) - fVar21) * fVar2,
                      fVar20 + ((float)uVar17 - fVar20) * fVar2);
  }
  *(float *)((long)param_1 + 0x24) = fVar22;
  *(float *)(param_1 + 5) = fVar23;
  *(float *)((long)param_1 + 0x2c) = fVar28;
  *(float *)(param_1 + 4) = fVar25;
  *(undefined1 *)(param_1 + 6) = uVar4;
  *(undefined4 *)((long)param_1 + 0x34) = uVar1;
  param_1[1] = uVar17;
  *param_1 = uVar13;
  param_1[3] = uVar18;
  param_1[2] = uVar14;
  return;
}


