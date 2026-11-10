/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0190296c; name: FUN_0190296c
 */


void FUN_0190296c(long param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  if (*(char *)(param_1 + 8) != '\0') {
    if (*(char *)(param_1 + 0x84) == '\0') {
      fVar8 = 0.0;
      fVar9 = 0.0;
    }
    else {
      fVar8 = *(float *)(param_1 + 0x88);
      fVar9 = *(float *)(param_1 + 0x8c);
    }
    fVar8 = fVar8 * fVar8;
    fVar9 = fVar9 * fVar9;
    auVar10._4_4_ = fVar9;
    auVar10._0_4_ = fVar8;
    auVar10._8_8_ = 0;
    auVar3._4_4_ = fVar9;
    auVar3._0_4_ = fVar8;
    auVar3._8_8_ = 0;
    auVar10 = NEON_ext(auVar10,auVar3,8,1);
    if (auVar10._0_4_ + fVar8 + auVar10._4_4_ + fVar9 <= 0.0001) {
      fVar8 = *(float *)(param_1 + 0x60);
      local_34 = fVar8;
      *(undefined4 *)(param_1 + 0x74) = 0;
      if (0.0 < *(float *)(param_1 + 0x80)) {
        local_38 = *(float *)(param_1 + 0x80) + *(float *)(param_1 + 0x7c);
        pfVar5 = &local_40;
        if (local_38 <= 1.0) {
          pfVar5 = &local_38;
        }
        local_40 = 1.0;
        local_3c = 0.0;
        if (local_38 < 0.0) {
          pfVar5 = &local_3c;
        }
        fVar9 = *pfVar5;
        *(float *)(param_1 + 0x7c) = fVar9;
        fVar9 = (float)FUN_01832cc8(fVar9,*(undefined4 *)(param_1 + 0x70));
        local_3c = 1.0;
        local_38 = 0.0;
        local_34 = fVar9 * *(float *)(param_1 + 0x68) + fVar8;
        pfVar5 = &local_3c;
        if (local_34 <= 1.0) {
          pfVar5 = &local_34;
        }
        if (local_34 < 0.0) {
          pfVar5 = &local_38;
        }
        fVar8 = *pfVar5;
      }
      pfVar5 = (float *)(param_1 + 100);
      *(float *)(param_1 + 0x38) = fVar8;
    }
    else {
      fVar8 = (float)*param_2 - *(float *)(param_1 + 0x20);
      fVar9 = (float)((ulong)*param_2 >> 0x20) - *(float *)(param_1 + 0x24);
      fVar6 = (float)param_2[1] - *(float *)(param_1 + 0x28);
      fVar7 = (float)((ulong)param_2[1] >> 0x20) - *(float *)(param_1 + 0x2c);
      fVar8 = fVar8 * fVar8;
      fVar9 = fVar9 * fVar9;
      fVar6 = fVar6 * fVar6;
      fVar7 = fVar7 * fVar7;
      auVar1._4_4_ = fVar9;
      auVar1._0_4_ = fVar8;
      auVar1._8_4_ = fVar6;
      auVar1._12_4_ = fVar7;
      auVar2._4_4_ = fVar9;
      auVar2._0_4_ = fVar8;
      auVar2._8_4_ = fVar6;
      auVar2._12_4_ = fVar7;
      auVar10 = NEON_ext(auVar1,auVar2,8,1);
      local_34 = SQRT(auVar10._0_4_ + fVar8 + auVar10._4_4_ + fVar9);
      fVar8 = *(float *)(param_1 + 0x48);
      fVar9 = *(float *)(param_1 + 0x4c);
      pfVar5 = (float *)(param_1 + 0x4c);
      if (local_34 <= fVar9) {
        pfVar5 = &local_34;
      }
      pfVar4 = (float *)(param_1 + 0x48);
      if (fVar8 <= local_34) {
        pfVar4 = pfVar5;
      }
      fVar9 = fVar9 - fVar8;
      fVar6 = *pfVar4;
      *(float *)(param_1 + 0x3c) = fVar6;
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      else {
        fVar9 = (fVar6 - fVar8) / fVar9;
      }
      fVar8 = *(float *)(param_1 + 0x40) +
              fVar9 * (*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x40));
      local_34 = fVar8;
      *(undefined4 *)(param_1 + 0x7c) = 0;
      if (0.0 < *(float *)(param_1 + 0x78)) {
        local_38 = *(float *)(param_1 + 0x78) + *(float *)(param_1 + 0x74);
        pfVar5 = &local_40;
        if (local_38 <= 1.0) {
          pfVar5 = &local_38;
        }
        local_40 = 1.0;
        local_3c = 0.0;
        if (local_38 < 0.0) {
          pfVar5 = &local_3c;
        }
        fVar9 = *pfVar5;
        *(float *)(param_1 + 0x74) = fVar9;
        fVar9 = (float)FUN_01832cc8(fVar9,*(undefined4 *)(param_1 + 0x5c));
        local_3c = 1.0;
        local_38 = 0.0;
        local_34 = fVar8 + fVar9 * *(float *)(param_1 + 0x54);
        pfVar5 = &local_3c;
        if (local_34 <= 1.0) {
          pfVar5 = &local_34;
        }
        if (local_34 < 0.0) {
          pfVar5 = &local_38;
        }
        fVar8 = *pfVar5;
      }
      *(float *)(param_1 + 0x38) = fVar8;
      pfVar5 = (float *)(param_1 + 0x50);
    }
    fVar6 = *(float *)(param_1 + 0x30);
    fVar9 = *pfVar5;
    *(float *)(param_1 + 0x34) = fVar9;
    if (1e-05 <= ABS(fVar8 - fVar6)) {
      fVar8 = fVar6 + (fVar8 - fVar6) * fVar9;
    }
    *(float *)(param_1 + 0x30) = fVar8;
    *(float *)(param_1 + 0x18) =
         *(float *)(param_1 + 0x18) +
         ((float)*(undefined8 *)(param_1 + 0x28) - *(float *)(param_1 + 0x18)) * fVar8;
    *(float *)(param_1 + 0x1c) =
         *(float *)(param_1 + 0x1c) +
         ((float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) - *(float *)(param_1 + 0x1c)) *
         fVar8;
    *(float *)(param_1 + 0x10) =
         *(float *)(param_1 + 0x10) +
         ((float)*(undefined8 *)(param_1 + 0x20) - *(float *)(param_1 + 0x10)) * fVar8;
    *(float *)(param_1 + 0x14) =
         *(float *)(param_1 + 0x14) +
         ((float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) - *(float *)(param_1 + 0x14)) *
         fVar8;
  }
  return;
}


