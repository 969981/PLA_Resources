/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03150c6c; name: FUN_03150c6c
 */


void FUN_03150c6c(float param_1,long param_2,long param_3,long param_4)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 local_80 [16];
  
  lVar7 = *(long *)(param_2 + 0x38);
  if ('\0' < *(char *)(lVar7 + 0x30)) {
    lVar10 = 0;
    lVar11 = 0;
    lVar12 = 0xb0;
    do {
      lVar8 = *(long *)(param_2 + 0x90);
      pfVar1 = (float *)(lVar8 + lVar12);
      lVar7 = (long)*(char *)(*(long *)(lVar7 + 0xa0) + lVar10 + 0x24);
      fVar13 = 0.0;
      if (*(long *)(pfVar1 + -0x22) != -1) {
        plVar9 = *(long **)(param_2 + 0x28);
        lVar6 = (**(code **)(*plVar9 + 0x80))(plVar9);
        lVar6 = (**(code **)(*plVar9 + 0x100))(plVar9,*(undefined4 *)(lVar6 + 0x80));
        fVar13 = 0.0;
        if (*(int *)(lVar6 + 0x4c) == 0) {
          fVar13 = *(float *)(param_2 + lVar7 * 0x24 + 0xa8);
        }
      }
      lVar6 = param_2 + lVar7 * 0x24;
      pfVar1[3] = fVar13;
      pfVar1[4] = *(float *)(lVar6 + 0xac);
      pfVar1[6] = *(float *)(lVar6 + 0xa4);
      pfVar1[5] = *(float *)(param_2 + lVar7 * 0x24 + 0xa0);
      uVar5 = (**(code **)(**(long **)(param_2 + 0x28) + 0x80))
                        (*(long **)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x20));
      FUN_032cc384(local_80,uVar5,*(long *)(param_2 + 0x38) + 0x50);
      if (*(char *)(*(long *)(param_2 + 0xf0) + lVar11) == '\0') {
        fVar13 = (float)*(undefined8 *)(param_4 + 0xe0) * local_80._0_4_;
        fVar14 = (float)((ulong)*(undefined8 *)(param_4 + 0xe0) >> 0x20) * local_80._4_4_;
        fVar15 = (float)*(undefined8 *)(param_4 + 0xe8) * local_80._8_4_;
        fVar16 = (float)((ulong)*(undefined8 *)(param_4 + 0xe8) >> 0x20) * local_80._12_4_;
        auVar18._4_4_ = fVar14;
        auVar18._0_4_ = fVar13;
        auVar18._8_4_ = fVar15;
        auVar18._12_4_ = fVar16;
        auVar2._4_4_ = fVar14;
        auVar2._0_4_ = fVar13;
        auVar2._8_4_ = fVar15;
        auVar2._12_4_ = fVar16;
        auVar18 = NEON_ext(auVar18,auVar2,8,1);
        fVar13 = fVar13 + fVar14 + auVar18._0_4_;
        if (*(long *)(param_3 + lVar7 * 8) != -1) {
          lVar7 = *(long *)(param_4 + lVar7 * 0x60 + 0x30);
          fVar14 = local_80._0_4_ * *(float *)(lVar7 + 0x10);
          fVar15 = local_80._4_4_ * *(float *)(lVar7 + 0x14);
          fVar16 = local_80._8_4_ * *(float *)(lVar7 + 0x18);
          fVar17 = local_80._12_4_ * *(float *)(lVar7 + 0x1c);
          auVar3._4_4_ = fVar15;
          auVar3._0_4_ = fVar14;
          auVar3._8_4_ = fVar16;
          auVar3._12_4_ = fVar17;
          auVar4._4_4_ = fVar15;
          auVar4._0_4_ = fVar14;
          auVar4._8_4_ = fVar16;
          auVar4._12_4_ = fVar17;
          auVar18 = NEON_ext(auVar3,auVar4,8,1);
          fVar13 = fVar13 - (fVar14 + fVar15 + auVar18._0_4_);
        }
        pfVar1[1] = fVar13 / *(float *)(*(long *)(*(long *)(param_2 + 0x38) + 0xa0) + lVar10);
        fVar13 = (fVar13 + pfVar1[5]) /
                 *(float *)(*(long *)(*(long *)(param_2 + 0x38) + 0xa0) + lVar10);
        *pfVar1 = fVar13;
        pfVar1[2] = pfVar1[2] + fVar13 * param_1;
      }
      else {
        *(undefined8 *)(lVar8 + lVar12) = 0;
      }
      lVar7 = *(long *)(param_2 + 0x38);
      lVar11 = lVar11 + 1;
      lVar12 = lVar12 + 0xd0;
      lVar10 = lVar10 + 0x28;
    } while (lVar11 < *(char *)(lVar7 + 0x30));
  }
  return;
}


