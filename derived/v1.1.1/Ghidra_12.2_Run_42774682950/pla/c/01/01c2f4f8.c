/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c2f4f8; name: FUN_01c2f4f8
 */


undefined1  [16] FUN_01c2f4f8(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  undefined *puVar6;
  float *pfVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float local_28;
  float local_24;
  
  uVar11 = 0;
  uVar14 = 0;
  if (*(char *)(param_1 + 0x2a8) == '\0') goto LAB_01c2f518;
  fVar10 = *(float *)(param_1 + 0x324) + *(float *)(param_1 + 800);
  fVar8 = *(float *)(param_1 + 0x32c) + *(float *)(param_1 + 0x328);
  pfVar7 = &local_28;
  if (fVar10 <= 1.0) {
    pfVar7 = (float *)(param_1 + 800);
  }
  pfVar1 = (float *)(param_1 + 0x328);
  *(float *)(param_1 + 800) = fVar10;
  *(float *)(param_1 + 0x328) = fVar8;
  local_24 = 0.0;
  local_28 = 1.0;
  if (fVar10 < 0.0) {
    pfVar7 = &local_24;
  }
  fVar10 = *pfVar7;
  *(float *)(param_1 + 800) = fVar10;
  local_28 = 1.0;
  pfVar7 = &local_28;
  if (fVar8 <= 1.0) {
    pfVar7 = pfVar1;
  }
  local_24 = 0.0;
  pfVar2 = &local_24;
  if (0.0 <= fVar8) {
    pfVar2 = pfVar7;
  }
  *(float *)(param_1 + 0x328) = *pfVar2;
  if (*(int *)(param_1 + 0x338) == 0) {
LAB_01c2f5bc:
    cVar4 = *(char *)(param_1 + 0x330);
  }
  else {
    uVar5 = *(int *)(param_1 + 0x338) - 1;
    *(uint *)(param_1 + 0x338) = uVar5;
    uVar3 = *(uint *)(param_1 + 0x2c0);
    *(ulong *)(param_1 + 0x2b8) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x2b8) >> 0x20) -
                  (float)((ulong)*(undefined8 *)(param_1 + 0x348) >> 0x20),
                  (float)*(undefined8 *)(param_1 + 0x2b8) - (float)*(undefined8 *)(param_1 + 0x348))
    ;
    *(ulong *)(param_1 + 0x2b0) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x2b0) >> 0x20) -
                  (float)((ulong)*(undefined8 *)(param_1 + 0x340) >> 0x20),
                  (float)*(undefined8 *)(param_1 + 0x2b0) - (float)*(undefined8 *)(param_1 + 0x340))
    ;
    if (uVar3 < uVar5) goto LAB_01c2f5bc;
    if (uVar3 != 0) {
      *(uint *)(param_1 + 0x2c4) = uVar3;
    }
    else {
      *(undefined8 *)(param_1 + 0x2f8) = 0;
      fVar10 = 1.0;
      *(undefined8 *)(param_1 + 0x2f0) = 0;
      *(undefined8 *)(param_1 + 0x2e8) = 0;
      *(undefined8 *)(param_1 + 0x2e0) = 0;
      *(undefined4 *)(param_1 + 800) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x338) = 0;
      *(undefined1 *)(param_1 + 0x2a8) = 0;
      *(undefined8 *)(param_1 + 0x329) = 0;
      *(undefined8 *)(param_1 + 0x324) = 0;
      *(uint *)(param_1 + 0x200) = *(uint *)(param_1 + 0x200) & 0xfffffffd;
    }
    *(uint *)(param_1 + 0x334) = (uint)(uVar3 != 0);
    cVar4 = *(char *)(param_1 + 0x330);
  }
  if ((cVar4 == '\0') && (*(float *)(param_1 + 0x2d0) <= fVar10)) {
    FUN_01c2fbf0(param_1);
    fVar10 = *(float *)(param_1 + 800);
  }
  if (1.0 <= fVar10) {
    if ((*(int *)(param_1 + 0x334) == 2) && (*(char *)(param_1 + 0x330) == '\0')) {
      *(undefined8 *)(param_1 + 0x2f8) = 0;
      uVar11 = 0;
      uVar14 = 0;
      *(undefined8 *)(param_1 + 0x2f0) = 0;
      *(undefined8 *)(param_1 + 0x2e8) = 0;
      *(undefined8 *)(param_1 + 0x2e0) = 0;
      *(undefined4 *)(param_1 + 800) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x338) = 0;
      *(undefined1 *)(param_1 + 0x2a8) = 0;
      *(undefined8 *)(param_1 + 0x329) = 0;
      *(undefined8 *)(param_1 + 0x324) = 0;
      *(uint *)(param_1 + 0x200) = *(uint *)(param_1 + 0x200) & 0xfffffffd;
      *(undefined4 *)(param_1 + 0x334) = 0;
      goto LAB_01c2f518;
    }
    *(undefined4 *)(param_1 + 0x324) = *(undefined4 *)(param_1 + 0x32c);
    fVar10 = *(float *)(param_1 + 0x328);
    *(float *)(param_1 + 800) = fVar10;
    *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_1 + 0x310);
    *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_1 + 0x300);
    *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_1 + 0x308);
    *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_1 + 0x318);
    *(undefined1 *)(param_1 + 0x330) = 0;
    pfVar1[0] = 0.0;
    pfVar1[1] = 0.0;
  }
  puVar6 = PTR_PTR_0437a4c8;
  fVar8 = (float)(**(code **)(PTR_PTR_0437a4c8 + 0x18))(fVar10);
  fVar10 = (float)*(undefined8 *)(param_1 + 0x2e0);
  fVar12 = (float)((ulong)*(undefined8 *)(param_1 + 0x2e0) >> 0x20);
  fVar13 = (float)*(undefined8 *)(param_1 + 0x2e8);
  fVar15 = (float)((ulong)*(undefined8 *)(param_1 + 0x2e8) >> 0x20);
  fVar10 = fVar10 + ((float)*(undefined8 *)(param_1 + 0x2f0) - fVar10) * fVar8;
  fVar12 = fVar12 + ((float)((ulong)*(undefined8 *)(param_1 + 0x2f0) >> 0x20) - fVar12) * fVar8;
  uVar11 = CONCAT44(fVar12,fVar10);
  fVar13 = fVar13 + ((float)*(undefined8 *)(param_1 + 0x2f8) - fVar13) * fVar8;
  fVar15 = fVar15 + ((float)((ulong)*(undefined8 *)(param_1 + 0x2f8) >> 0x20) - fVar15) * fVar8;
  uVar14 = CONCAT44(fVar15,fVar13);
  if (*(char *)(param_1 + 0x330) != '\0') {
    fVar8 = (float)(**(code **)(puVar6 + 0x18))(*(undefined4 *)(param_1 + 0x328));
    uVar11 = CONCAT44(fVar12 + ((float)((ulong)*(undefined8 *)(param_1 + 0x310) >> 0x20) -
                               (float)((ulong)*(undefined8 *)(param_1 + 0x300) >> 0x20)) * fVar8,
                      fVar10 + ((float)*(undefined8 *)(param_1 + 0x310) -
                               (float)*(undefined8 *)(param_1 + 0x300)) * fVar8);
    uVar14 = CONCAT44(fVar15 + ((float)((ulong)*(undefined8 *)(param_1 + 0x318) >> 0x20) -
                               (float)((ulong)*(undefined8 *)(param_1 + 0x308) >> 0x20)) * fVar8,
                      fVar13 + ((float)*(undefined8 *)(param_1 + 0x318) -
                               (float)*(undefined8 *)(param_1 + 0x308)) * fVar8);
  }
LAB_01c2f518:
  auVar9._8_8_ = uVar14;
  auVar9._0_8_ = uVar11;
  return auVar9;
}


