/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01904754; name: FUN_01904754
 */


void FUN_01904754(long param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  undefined1 auVar4 [16];
  char cVar5;
  int iVar6;
  int *piVar7;
  float *pfVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float local_6c;
  float fStack_68;
  float local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  uint local_40;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar28 = *param_3;
    local_40 = local_40 & 0xffffff00;
    local_50 = 0;
    local_48 = 0;
    fVar13 = (float)((ulong)uVar28 >> 0x20);
    local_60 = 0;
    local_58 = 0;
    fVar14 = *(float *)(param_1 + 0xd0);
    if (fVar13 < 0.0) {
      cVar5 = *(char *)(param_1 + 0x158);
      bVar9 = fVar14 <= ABS(fVar13) && cVar5 == '\0';
    }
    else {
      cVar5 = *(char *)(param_1 + 0x158);
      bVar9 = false;
    }
    lVar1 = 0xdc;
    if ((*(byte *)(param_1 + 0xb0) & bVar9) != 0) {
      lVar1 = 0xd8;
    }
    if (cVar5 != '\0') {
      lVar1 = 0x15c;
    }
    fVar32 = *(float *)(param_1 + lVar1);
    fVar33 = *(float *)(param_2 + 0x30);
    if ((*(byte *)(param_1 + 0xb0) & bVar9) == 0) {
      piVar7 = (int *)(param_1 + 0xe4);
      iVar6 = *piVar7;
      iVar3 = iVar6 + -1;
      *piVar7 = iVar3;
      if (iVar6 < 1) {
        iVar6 = 0;
      }
      else {
        piVar2 = (int *)(param_1 + 0xe0);
        if (iVar3 <= *(int *)(param_1 + 0xe0)) {
          piVar2 = piVar7;
        }
        iVar6 = *piVar2;
      }
      uVar15 = 0;
      uVar16 = 0;
      fVar14 = 0.0;
      *(int *)(param_1 + 0xe4) = iVar6;
      *(undefined4 *)(param_1 + 0xe8) = 0;
    }
    else if (*(int *)(param_1 + 0xe4) < *(int *)(param_1 + 0xe0)) {
      *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
      *(undefined4 *)(param_1 + 0xe8) = 0;
      uVar15 = 0;
      uVar16 = 0;
      fVar14 = 0.0;
    }
    else {
      local_64 = *(float *)(param_1 + 0xd4) - fVar14;
      if (local_64 <= 0.0) {
        local_64 = 0.0;
      }
      else {
        local_64 = (ABS(fVar13) - fVar14) / local_64;
      }
      local_6c = 1.0;
      fStack_68 = 0.0;
      pfVar8 = &local_6c;
      if (local_64 <= 1.0) {
        pfVar8 = &local_64;
      }
      if (local_64 < 0.0) {
        pfVar8 = &fStack_68;
      }
      fVar14 = (float)(**(code **)(PTR_PTR_0437a4c8 + 0x80))(*pfVar8);
      uVar16 = *(undefined8 *)(param_1 + 200);
      uVar15 = *(undefined8 *)(param_1 + 0xc0);
      *(float *)(param_1 + 0xe8) = fVar14;
    }
    fVar29 = (float)uVar15 * fVar14;
    fVar30 = (float)((ulong)uVar15 >> 0x20) * fVar14;
    uVar15 = CONCAT44(fVar30,fVar29);
    fVar31 = (float)uVar16 * fVar14;
    fVar14 = (float)((ulong)uVar16 >> 0x20) * fVar14;
    uVar16 = CONCAT44(fVar14,fVar31);
    fVar13 = (float)*(undefined8 *)(param_1 + 0xf0);
    fVar29 = fVar29 - fVar13;
    fVar10 = (float)((ulong)*(undefined8 *)(param_1 + 0xf0) >> 0x20);
    fVar30 = fVar30 - fVar10;
    fVar12 = (float)*(undefined8 *)(param_1 + 0xf8);
    fVar31 = fVar31 - fVar12;
    fVar11 = (float)((ulong)*(undefined8 *)(param_1 + 0xf8) >> 0x20);
    fVar14 = fVar14 - fVar11;
    fVar18 = fVar29 * fVar29;
    fVar20 = fVar30 * fVar30;
    auVar23._4_4_ = fVar20;
    auVar23._0_4_ = fVar18;
    auVar23._8_4_ = fVar31 * fVar31;
    auVar23._12_4_ = fVar14 * fVar14;
    auVar4._4_4_ = fVar20;
    auVar4._0_4_ = fVar18;
    auVar4._8_4_ = fVar31 * fVar31;
    auVar4._12_4_ = fVar14 * fVar14;
    auVar23 = NEON_ext(auVar23,auVar4,8,1);
    if (1e-05 <= ABS(SQRT(auVar23._0_4_ + fVar18 + auVar23._4_4_ + fVar20))) {
      fVar32 = fVar32 * fVar33;
      uVar15 = CONCAT44(fVar10 + fVar30 * fVar32,fVar13 + fVar29 * fVar32);
      uVar16 = CONCAT44(fVar11 + fVar14 * fVar32,fVar12 + fVar31 * fVar32);
    }
    fVar14 = *(float *)(param_1 + 0x30);
    fVar13 = (float)uVar28;
    *(undefined8 *)(param_1 + 0xf8) = uVar16;
    *(undefined8 *)(param_1 + 0xf0) = uVar15;
    if (fVar13 < 0.0) {
      cVar5 = *(char *)(param_1 + 0x158);
      bVar9 = fVar14 <= ABS(fVar13) && cVar5 == '\0';
    }
    else {
      cVar5 = *(char *)(param_1 + 0x158);
      bVar9 = false;
    }
    lVar1 = 0x3c;
    if ((bVar9 & *(byte *)(param_1 + 0x10)) != 0) {
      lVar1 = 0x38;
    }
    if (cVar5 != '\0') {
      lVar1 = 0x15c;
    }
    fVar32 = *(float *)(param_1 + lVar1);
    fVar33 = *(float *)(param_2 + 0x30);
    if ((bVar9 & *(byte *)(param_1 + 0x10)) == 0) {
      piVar7 = (int *)(param_1 + 0x44);
      iVar6 = *piVar7;
      iVar3 = iVar6 + -1;
      *piVar7 = iVar3;
      if (iVar6 < 1) {
        iVar6 = 0;
      }
      else {
        piVar2 = (int *)(param_1 + 0x40);
        if (iVar3 <= *(int *)(param_1 + 0x40)) {
          piVar2 = piVar7;
        }
        iVar6 = *piVar2;
      }
      uVar28 = 0;
      uVar17 = 0;
      fVar14 = 0.0;
      *(int *)(param_1 + 0x44) = iVar6;
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    else if (*(int *)(param_1 + 0x44) < *(int *)(param_1 + 0x40)) {
      uVar17 = *(undefined8 *)(param_1 + 0x28);
      uVar28 = *(undefined8 *)(param_1 + 0x20);
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
      *(undefined4 *)(param_1 + 0x48) = 0;
      fVar14 = 0.0;
    }
    else {
      local_64 = *(float *)(param_1 + 0x34) - fVar14;
      if (local_64 <= 0.0) {
        local_64 = 0.0;
      }
      else {
        local_64 = (ABS(fVar13) - fVar14) / local_64;
      }
      local_6c = 1.0;
      fStack_68 = 0.0;
      pfVar8 = &local_6c;
      if (local_64 <= 1.0) {
        pfVar8 = &local_64;
      }
      if (local_64 < 0.0) {
        pfVar8 = &fStack_68;
      }
      fVar14 = (float)(**(code **)(PTR_PTR_0437a4c8 + 0x80))(*pfVar8);
      uVar17 = *(undefined8 *)(param_1 + 0x28);
      uVar28 = *(undefined8 *)(param_1 + 0x20);
      *(float *)(param_1 + 0x48) = fVar14;
    }
    fVar19 = (float)uVar28 * fVar14;
    fVar21 = (float)((ulong)uVar28 >> 0x20) * fVar14;
    fVar22 = (float)uVar17 * fVar14;
    fVar14 = (float)((ulong)uVar17 >> 0x20) * fVar14;
    fVar10 = (float)*(undefined8 *)(param_1 + 0x50);
    fVar30 = fVar19 - fVar10;
    fVar12 = (float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20);
    fVar31 = fVar21 - fVar12;
    fVar11 = (float)*(undefined8 *)(param_1 + 0x58);
    fVar18 = fVar22 - fVar11;
    fVar29 = (float)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20);
    fVar20 = fVar14 - fVar29;
    auVar24._0_4_ = fVar30 * fVar30;
    auVar24._4_4_ = fVar31 * fVar31;
    auVar24._8_4_ = fVar18 * fVar18;
    auVar24._12_4_ = fVar20 * fVar20;
    auVar23 = NEON_ext(auVar24,auVar24,8,1);
    if (1e-05 <= ABS(SQRT(auVar23._0_4_ + auVar24._0_4_ + auVar23._4_4_ + auVar24._4_4_))) {
      fVar32 = fVar32 * fVar33;
      fVar19 = fVar10 + fVar30 * fVar32;
      fVar21 = fVar12 + fVar31 * fVar32;
      fVar22 = fVar11 + fVar18 * fVar32;
      fVar14 = fVar29 + fVar20 * fVar32;
    }
    fVar32 = *(float *)(param_1 + 0x80);
    uVar28 = 0;
    uVar17 = 0;
    *(ulong *)(param_1 + 0x58) = CONCAT44(fVar14,fVar22);
    *(ulong *)(param_1 + 0x50) = CONCAT44(fVar21,fVar19);
    if (0.0 < fVar13) {
      cVar5 = *(char *)(param_1 + 0x158);
      bVar9 = fVar32 <= ABS(fVar13) && cVar5 == '\0';
    }
    else {
      cVar5 = *(char *)(param_1 + 0x158);
      bVar9 = false;
    }
    lVar1 = 0x8c;
    if ((bVar9 & *(byte *)(param_1 + 0x60)) != 0) {
      lVar1 = 0x88;
    }
    if (cVar5 != '\0') {
      lVar1 = 0x15c;
    }
    auVar25._0_8_ = CONCAT44((float)((ulong)uVar15 >> 0x20) + 0.0,(float)uVar15 + 0.0);
    auVar25._8_4_ = (float)uVar16 + 0.0;
    auVar25._12_4_ = (float)((ulong)uVar16 >> 0x20) + 0.0;
    fVar33 = *(float *)(param_1 + lVar1);
    auVar26._0_8_ = CONCAT44(0.0 - fVar21,0.0 - fVar19);
    auVar26._8_4_ = 0.0 - fVar22;
    auVar26._12_4_ = 0.0 - fVar14;
    fVar14 = *(float *)(param_2 + 0x30);
    if ((bVar9 & *(byte *)(param_1 + 0x60)) == 0) {
      piVar7 = (int *)(param_1 + 0x94);
      iVar6 = *piVar7;
      iVar3 = iVar6 + -1;
      *piVar7 = iVar3;
      if (iVar6 < 1) {
        iVar6 = 0;
      }
      else {
        piVar2 = (int *)(param_1 + 0x90);
        if (iVar3 <= *(int *)(param_1 + 0x90)) {
          piVar2 = piVar7;
        }
        iVar6 = *piVar2;
      }
      fVar13 = 0.0;
      *(int *)(param_1 + 0x94) = iVar6;
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
    else if (*(int *)(param_1 + 0x94) < *(int *)(param_1 + 0x90)) {
      uVar17 = *(undefined8 *)(param_1 + 0x78);
      uVar28 = *(undefined8 *)(param_1 + 0x70);
      *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
      *(undefined4 *)(param_1 + 0x98) = 0;
      fVar13 = 0.0;
    }
    else {
      local_64 = *(float *)(param_1 + 0x84) - fVar32;
      if (local_64 <= 0.0) {
        local_64 = 0.0;
      }
      else {
        local_64 = (ABS(fVar13) - fVar32) / local_64;
      }
      local_6c = 1.0;
      fStack_68 = 0.0;
      pfVar8 = &local_6c;
      if (local_64 <= 1.0) {
        pfVar8 = &local_64;
      }
      if (local_64 < 0.0) {
        pfVar8 = &fStack_68;
      }
      fVar13 = (float)(**(code **)(PTR_PTR_0437a4c8 + 0x80))(*pfVar8);
      *(float *)(param_1 + 0x98) = fVar13;
      uVar17 = *(undefined8 *)(param_1 + 0x78);
      uVar28 = *(undefined8 *)(param_1 + 0x70);
      auVar26._8_8_ = auVar26._8_8_;
      auVar25._8_8_ = auVar25._8_8_;
    }
    fVar32 = (float)uVar28 * fVar13;
    fVar10 = (float)((ulong)uVar28 >> 0x20) * fVar13;
    uVar28 = CONCAT44(fVar10,fVar32);
    fVar12 = (float)uVar17 * fVar13;
    fVar13 = (float)((ulong)uVar17 >> 0x20) * fVar13;
    uVar15 = CONCAT44(fVar13,fVar12);
    fVar11 = (float)*(undefined8 *)(param_1 + 0xa0);
    fVar32 = fVar32 - fVar11;
    fVar29 = (float)((ulong)*(undefined8 *)(param_1 + 0xa0) >> 0x20);
    fVar10 = fVar10 - fVar29;
    fVar30 = (float)*(undefined8 *)(param_1 + 0xa8);
    fVar12 = fVar12 - fVar30;
    fVar31 = (float)((ulong)*(undefined8 *)(param_1 + 0xa8) >> 0x20);
    fVar13 = fVar13 - fVar31;
    auVar27._0_4_ = fVar32 * fVar32;
    auVar27._4_4_ = fVar10 * fVar10;
    auVar27._8_4_ = fVar12 * fVar12;
    auVar27._12_4_ = fVar13 * fVar13;
    auVar23 = NEON_ext(auVar27,auVar27,8,1);
    if (1e-05 <= ABS(SQRT(auVar23._0_4_ + auVar27._0_4_ + auVar23._4_4_ + auVar27._4_4_))) {
      fVar33 = fVar33 * fVar14;
      uVar28 = CONCAT44(fVar29 + fVar10 * fVar33,fVar11 + fVar32 * fVar33);
      uVar15 = CONCAT44(fVar31 + fVar13 * fVar33,fVar30 + fVar12 * fVar33);
    }
    *(undefined8 *)(param_1 + 0xa8) = uVar15;
    *(undefined8 *)(param_1 + 0xa0) = uVar28;
    *(ulong *)(param_1 + 0x108) =
         CONCAT44(auVar25._12_4_ + auVar26._12_4_ + (float)((ulong)uVar15 >> 0x20),
                  auVar25._8_4_ + auVar26._8_4_ + (float)uVar15);
    *(ulong *)(param_1 + 0x100) =
         CONCAT44(auVar25._4_4_ + auVar26._4_4_ + (float)((ulong)uVar28 >> 0x20),
                  auVar25._0_4_ + auVar26._0_4_ + (float)uVar28);
    *(undefined8 *)(param_1 + 0x118) = local_58;
    *(undefined8 *)(param_1 + 0x128) = local_48;
    *(undefined8 *)(param_1 + 0x110) = local_60;
    *(uint *)(param_1 + 0x130) = local_40;
    *(undefined8 *)(param_1 + 0x120) = local_50;
    *(undefined4 *)(param_1 + 0x134) = 0;
  }
  return;
}


