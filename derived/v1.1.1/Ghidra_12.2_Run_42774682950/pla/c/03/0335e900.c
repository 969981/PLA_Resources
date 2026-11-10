/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0335e900; name: FUN_0335e900
 */


void FUN_0335e900(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  iVar8 = *(int *)(param_1 + 0xc);
  if (1 < iVar8) {
    lVar7 = 1;
    lVar9 = 0;
    puVar6 = param_1;
    do {
      puVar6 = puVar6 + 3;
      lVar1 = lVar9 + 1;
      if (lVar1 < iVar8) {
        puVar10 = param_1 + lVar9 * 3;
        puVar11 = puVar6;
        lVar9 = lVar7;
        do {
          lVar14 = puVar10[1];
          lVar12 = puVar11[1];
          if (*(int *)(lVar12 + 0x40) <= *(int *)(lVar14 + 0x40)) {
            if (*(int *)(lVar14 + 0x40) == *(int *)(lVar12 + 0x40)) {
              fVar17 = (float)*(undefined8 *)(lVar14 + 0x18);
              fVar18 = (float)((ulong)*(undefined8 *)(lVar14 + 0x18) >> 0x20);
              fVar15 = (float)*(undefined8 *)(lVar14 + 0x10);
              fVar16 = (float)((ulong)*(undefined8 *)(lVar14 + 0x10) >> 0x20);
              fVar15 = fVar15 * fVar15;
              fVar16 = fVar16 * fVar16;
              fVar17 = fVar17 * fVar17;
              fVar18 = fVar18 * fVar18;
              auVar19._4_4_ = fVar16;
              auVar19._0_4_ = fVar15;
              auVar19._8_4_ = fVar17;
              auVar19._12_4_ = fVar18;
              auVar21._4_4_ = fVar16;
              auVar21._0_4_ = fVar15;
              auVar21._8_4_ = fVar17;
              auVar21._12_4_ = fVar18;
              auVar19 = NEON_ext(auVar19,auVar21,8,1);
              auVar20._0_4_ = *(float *)(lVar12 + 0x10) * *(float *)(lVar12 + 0x10);
              auVar20._4_4_ = *(float *)(lVar12 + 0x14) * *(float *)(lVar12 + 0x14);
              auVar20._8_4_ = *(float *)(lVar12 + 0x18) * *(float *)(lVar12 + 0x18);
              auVar20._12_4_ = *(float *)(lVar12 + 0x1c) * *(float *)(lVar12 + 0x1c);
              auVar21 = NEON_ext(auVar20,auVar20,8,1);
              if (fVar15 + fVar16 + auVar19._0_4_ < auVar20._0_4_ + auVar20._4_4_ + auVar21._0_4_)
              goto LAB_0335e990;
            }
            uVar2 = *puVar10;
            uVar4 = puVar10[1];
            uVar13 = puVar10[2];
            uVar3 = puVar11[1];
            uVar5 = puVar11[2];
            *puVar10 = *puVar11;
            puVar10[1] = uVar3;
            puVar10[2] = uVar5;
            *puVar11 = uVar2;
            puVar11[1] = uVar4;
            puVar11[2] = uVar13;
            iVar8 = *(int *)(param_1 + 0xc);
          }
LAB_0335e990:
          lVar9 = lVar9 + 1;
          puVar11 = puVar11 + 3;
        } while (lVar9 < iVar8);
      }
      lVar7 = lVar7 + 1;
      lVar9 = lVar1;
    } while (lVar1 < iVar8 + -1);
  }
  return;
}


