/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0113d3c0; name: FUN_0113d3c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0113d3c0(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar14 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  lVar7 = *(long *)(param_1 + 0x70);
  if (lVar7 == -0x43fca454de3f6365) {
    fVar9 = (float)*(undefined8 *)(param_1 + 0xc0) + (float)_DAT_0388a4c0;
    fVar10 = (float)((ulong)*(undefined8 *)(param_1 + 0xc0) >> 0x20) +
             (float)((ulong)_DAT_0388a4c0 >> 0x20);
    fVar11 = (float)*(undefined8 *)(param_1 + 200) + (float)_UNK_0388a4c8;
    fVar12 = (float)((ulong)*(undefined8 *)(param_1 + 200) >> 0x20) +
             (float)((ulong)_UNK_0388a4c8 >> 0x20);
    fVar9 = fVar9 * fVar9;
    fVar10 = fVar10 * fVar10;
    fVar11 = fVar11 * fVar11;
    fVar12 = fVar12 * fVar12;
    auVar18._4_4_ = fVar10;
    auVar18._0_4_ = fVar9;
    auVar18._8_4_ = fVar11;
    auVar18._12_4_ = fVar12;
    auVar5._4_4_ = fVar10;
    auVar5._0_4_ = fVar9;
    auVar5._8_4_ = fVar11;
    auVar5._12_4_ = fVar12;
    auVar18 = NEON_ext(auVar18,auVar5,8,1);
    if (0.25 < auVar18._0_4_ + fVar9 + auVar18._4_4_ + fVar10) {
      return;
    }
    puVar8 = &UNK_03a79160;
  }
  else if (lVar7 == -0x3b090b82d52cf399) {
    fVar9 = (float)*(undefined8 *)(param_1 + 0xc0) + (float)_DAT_03889460;
    fVar10 = (float)((ulong)*(undefined8 *)(param_1 + 0xc0) >> 0x20) +
             (float)((ulong)_DAT_03889460 >> 0x20);
    fVar11 = (float)*(undefined8 *)(param_1 + 200) + (float)_UNK_03889468;
    fVar12 = (float)((ulong)*(undefined8 *)(param_1 + 200) >> 0x20) +
             (float)((ulong)_UNK_03889468 >> 0x20);
    fVar9 = fVar9 * fVar9;
    fVar10 = fVar10 * fVar10;
    fVar11 = fVar11 * fVar11;
    fVar12 = fVar12 * fVar12;
    auVar3._4_4_ = fVar10;
    auVar3._0_4_ = fVar9;
    auVar3._8_4_ = fVar11;
    auVar3._12_4_ = fVar12;
    auVar4._4_4_ = fVar10;
    auVar4._0_4_ = fVar9;
    auVar4._8_4_ = fVar11;
    auVar4._12_4_ = fVar12;
    auVar18 = NEON_ext(auVar3,auVar4,8,1);
    if (0.25 < auVar18._0_4_ + fVar9 + auVar18._4_4_ + fVar10) {
      return;
    }
    puVar8 = &UNK_03a79130;
  }
  else {
    if (lVar7 != -0x1c4411fb859ba796) {
      return;
    }
    fVar11 = (float)*(undefined8 *)(param_1 + 200);
    fVar12 = (float)((ulong)*(undefined8 *)(param_1 + 200) >> 0x20);
    fVar9 = (float)*(undefined8 *)(param_1 + 0xc0);
    fVar10 = (float)((ulong)*(undefined8 *)(param_1 + 0xc0) >> 0x20);
    fVar13 = fVar9 + (float)_DAT_03889390;
    fVar15 = fVar10 + (float)((ulong)_DAT_03889390 >> 0x20);
    fVar16 = fVar11 + (float)_UNK_03889398;
    fVar17 = fVar12 + (float)((ulong)_UNK_03889398 >> 0x20);
    auVar14._0_4_ = fVar13 * fVar13;
    auVar14._4_4_ = fVar15 * fVar15;
    auVar14._8_4_ = fVar16 * fVar16;
    auVar14._12_4_ = fVar17 * fVar17;
    auVar18 = NEON_ext(auVar14,auVar14,8,1);
    if (auVar18._0_4_ + auVar14._0_4_ + auVar18._4_4_ + auVar14._4_4_ <= 0.25) {
      puVar8 = &UNK_03a79070;
    }
    else {
      fVar13 = fVar9 + (float)_DAT_03888fe0;
      fVar15 = fVar10 + (float)((ulong)_DAT_03888fe0 >> 0x20);
      fVar16 = fVar11 + (float)_UNK_03888fe8;
      fVar17 = fVar12 + (float)((ulong)_UNK_03888fe8 >> 0x20);
      auVar19._0_4_ = fVar13 * fVar13;
      auVar19._4_4_ = fVar15 * fVar15;
      auVar19._8_4_ = fVar16 * fVar16;
      auVar19._12_4_ = fVar17 * fVar17;
      auVar18 = NEON_ext(auVar19,auVar19,8,1);
      if (auVar18._0_4_ + auVar19._0_4_ + auVar18._4_4_ + auVar19._4_4_ <= 4.0) {
        puVar8 = &UNK_03a790a0;
      }
      else {
        fVar13 = fVar9 + (float)_DAT_038890b0;
        fVar15 = fVar10 + (float)((ulong)_DAT_038890b0 >> 0x20);
        fVar16 = fVar11 + (float)_UNK_038890b8;
        fVar17 = fVar12 + (float)((ulong)_UNK_038890b8 >> 0x20);
        auVar20._0_4_ = fVar13 * fVar13;
        auVar20._4_4_ = fVar15 * fVar15;
        auVar20._8_4_ = fVar16 * fVar16;
        auVar20._12_4_ = fVar17 * fVar17;
        auVar18 = NEON_ext(auVar20,auVar20,8,1);
        if (auVar18._0_4_ + auVar20._0_4_ + auVar18._4_4_ + auVar20._4_4_ <= 0.25) {
          puVar8 = &UNK_03a790d0;
        }
        else {
          fVar9 = fVar9 + (float)_DAT_03889660;
          fVar10 = fVar10 + (float)((ulong)_DAT_03889660 >> 0x20);
          fVar11 = fVar11 + (float)_UNK_03889668;
          fVar12 = fVar12 + (float)((ulong)_UNK_03889668 >> 0x20);
          fVar9 = fVar9 * fVar9;
          fVar10 = fVar10 * fVar10;
          fVar11 = fVar11 * fVar11;
          fVar12 = fVar12 * fVar12;
          auVar1._4_4_ = fVar10;
          auVar1._0_4_ = fVar9;
          auVar1._8_4_ = fVar11;
          auVar1._12_4_ = fVar12;
          auVar2._4_4_ = fVar10;
          auVar2._0_4_ = fVar9;
          auVar2._8_4_ = fVar11;
          auVar2._12_4_ = fVar12;
          auVar18 = NEON_ext(auVar1,auVar2,8,1);
          if (0.25 < auVar18._0_4_ + fVar9 + auVar18._4_4_ + fVar10) {
            return;
          }
          puVar8 = &UNK_03a79100;
        }
      }
    }
  }
  uVar6 = *(undefined8 *)(puVar8 + 0x10);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(puVar8 + 0x18);
  *(undefined8 *)(param_1 + 0xc0) = uVar6;
  return;
}


