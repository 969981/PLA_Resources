/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bc1b38; name: FUN_02bc1b38
 */


void FUN_02bc1b38(long *param_1,long *param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  fVar8 = (float)((ulong)param_2[3] >> 0x20);
  if (0.0 <= fVar8) {
    lVar4 = *(long *)(param_3 + 0x1c0);
    fVar7 = (float)param_2[3];
    fVar5 = (float)param_2[2];
    fVar6 = (float)((ulong)param_2[2] >> 0x20);
    if (*(char *)(param_3 + 0x243) != '\0') {
      auVar17._0_4_ = fVar5 * *(float *)(lVar4 + 0x120);
      auVar17._4_4_ = fVar6 * *(float *)(lVar4 + 0x124);
      auVar17._8_4_ = fVar7 * *(float *)(lVar4 + 0x128);
      auVar17._12_4_ = *(float *)(lVar4 + 300) * 1.0;
      auVar16 = NEON_ext(auVar17,auVar17,8,1);
      if ((((0.0 < fVar8 + auVar16._0_4_ + auVar17._0_4_ + auVar16._4_4_ + auVar17._4_4_) &&
           (auVar16._0_4_ = fVar5 * *(float *)(lVar4 + 0x130),
           auVar16._4_4_ = fVar6 * *(float *)(lVar4 + 0x134),
           auVar16._8_4_ = fVar7 * *(float *)(lVar4 + 0x138),
           auVar16._12_4_ = *(float *)(lVar4 + 0x13c) * 1.0, auVar17 = NEON_ext(auVar16,auVar16,8,1)
           , 0.0 < fVar8 + auVar17._0_4_ + auVar16._0_4_ + auVar17._4_4_ + auVar16._4_4_)) &&
          (auVar13._0_4_ = fVar5 * *(float *)(lVar4 + 0x140),
          auVar13._4_4_ = fVar6 * *(float *)(lVar4 + 0x144),
          auVar13._8_4_ = fVar7 * *(float *)(lVar4 + 0x148),
          auVar13._12_4_ = *(float *)(lVar4 + 0x14c) * 1.0, auVar17 = NEON_ext(auVar13,auVar13,8,1),
          0.0 < fVar8 + auVar17._0_4_ + auVar13._0_4_ + auVar17._4_4_ + auVar13._4_4_)) &&
         ((auVar14._0_4_ = fVar5 * *(float *)(lVar4 + 0x150),
          auVar14._4_4_ = fVar6 * *(float *)(lVar4 + 0x154),
          auVar14._8_4_ = fVar7 * *(float *)(lVar4 + 0x158),
          auVar14._12_4_ = *(float *)(lVar4 + 0x15c) * 1.0, auVar17 = NEON_ext(auVar14,auVar14,8,1),
          0.0 < fVar8 + auVar17._0_4_ + auVar14._0_4_ + auVar17._4_4_ + auVar14._4_4_ &&
          (auVar15._0_4_ = fVar5 * *(float *)(lVar4 + 0x160),
          auVar15._4_4_ = fVar6 * *(float *)(lVar4 + 0x164),
          auVar15._8_4_ = fVar7 * *(float *)(lVar4 + 0x168),
          auVar15._12_4_ = *(float *)(lVar4 + 0x16c) * 1.0, auVar17 = NEON_ext(auVar15,auVar15,8,1),
          0.0 < fVar8 + auVar17._0_4_ + auVar15._0_4_ + auVar17._4_4_ + auVar15._4_4_)))) {
        fVar9 = fVar5 * *(float *)(lVar4 + 0x170);
        fVar10 = fVar6 * *(float *)(lVar4 + 0x174);
        fVar11 = fVar7 * *(float *)(lVar4 + 0x178);
        fVar12 = *(float *)(lVar4 + 0x17c) * 1.0;
        auVar1._4_4_ = fVar10;
        auVar1._0_4_ = fVar9;
        auVar1._8_4_ = fVar11;
        auVar1._12_4_ = fVar12;
        auVar2._4_4_ = fVar10;
        auVar2._0_4_ = fVar9;
        auVar2._8_4_ = fVar11;
        auVar2._12_4_ = fVar12;
        auVar17 = NEON_ext(auVar1,auVar2,8,1);
        if (0.0 < fVar8 + auVar17._0_4_ + fVar9 + auVar17._4_4_ + fVar10) {
          *(float *)((long)param_2 + 0x24) =
               *(float *)(lVar4 + 0x38) +
               *(float *)(lVar4 + 8) * fVar5 + *(float *)(lVar4 + 0x18) * fVar6 +
               *(float *)(lVar4 + 0x28) * fVar7;
          goto LAB_02bc1b5c;
        }
      }
      uVar3 = 0;
      *(undefined1 *)(param_2 + 5) = 0;
      goto LAB_02bc1cd0;
    }
    *(undefined1 *)(param_2 + 5) = 1;
    *(float *)((long)param_2 + 0x24) =
         *(float *)(lVar4 + 0x38) +
         *(float *)(lVar4 + 8) * fVar5 + *(float *)(lVar4 + 0x18) * fVar6 +
         *(float *)(lVar4 + 0x28) * fVar7;
  }
  else {
LAB_02bc1b5c:
    *(undefined1 *)(param_2 + 5) = 1;
  }
  FUN_02bac564(*param_2,param_1[1],*(undefined8 *)(*param_1 + 0x138));
  *(undefined1 *)(param_3 + 0x241) = 1;
  uVar3 = (undefined1)param_2[5];
LAB_02bc1cd0:
  *(undefined1 *)(*param_2 + 0x279) = uVar3;
  return;
}


