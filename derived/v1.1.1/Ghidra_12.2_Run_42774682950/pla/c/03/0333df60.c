/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333df60; name: FUN_0333df60
 */


void FUN_0333df60(undefined1 (*param_1) [16],undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long lVar16;
  undefined4 *puVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  auVar18 = *param_1;
  auVar19 = param_1[1];
  if (0 < (int)param_3) {
    uVar3 = CONCAT44(*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 1));
    auVar4._8_8_ = uVar3;
    auVar4._0_8_ = *param_2;
    auVar18 = NEON_fmin(auVar18,auVar4,4);
    auVar5._8_8_ = uVar3;
    auVar5._0_8_ = *param_2;
    auVar19 = NEON_fmax(auVar19,auVar5,4);
    if (param_3 != 1) {
      uVar3 = CONCAT44(*(undefined4 *)((long)param_2 + 0x14),*(undefined4 *)((long)param_2 + 0x14));
      auVar6._8_8_ = uVar3;
      auVar6._0_8_ = *(undefined8 *)((long)param_2 + 0xc);
      auVar18 = NEON_fmin(auVar18,auVar6,4);
      auVar7._8_8_ = uVar3;
      auVar7._0_8_ = *(undefined8 *)((long)param_2 + 0xc);
      auVar19 = NEON_fmax(auVar19,auVar7,4);
      if (param_3 != 2) {
        uVar3 = CONCAT44(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 4));
        auVar8._8_8_ = uVar3;
        auVar8._0_8_ = param_2[3];
        auVar18 = NEON_fmin(auVar18,auVar8,4);
        auVar9._8_8_ = uVar3;
        auVar9._0_8_ = param_2[3];
        auVar19 = NEON_fmax(auVar19,auVar9,4);
        if (param_3 != 3) {
          uVar3 = CONCAT44(*(undefined4 *)((long)param_2 + 0x2c),
                           *(undefined4 *)((long)param_2 + 0x2c));
          auVar10._8_8_ = uVar3;
          auVar10._0_8_ = *(undefined8 *)((long)param_2 + 0x24);
          auVar18 = NEON_fmin(auVar18,auVar10,4);
          auVar11._8_8_ = uVar3;
          auVar11._0_8_ = *(undefined8 *)((long)param_2 + 0x24);
          auVar19 = NEON_fmax(auVar19,auVar11,4);
          if (param_3 != 4) {
            uVar3 = CONCAT44(*(undefined4 *)(param_2 + 7),*(undefined4 *)(param_2 + 7));
            auVar12._8_8_ = uVar3;
            auVar12._0_8_ = param_2[6];
            auVar18 = NEON_fmin(auVar18,auVar12,4);
            auVar13._8_8_ = uVar3;
            auVar13._0_8_ = param_2[6];
            auVar19 = NEON_fmax(auVar19,auVar13,4);
            if (param_3 != 5) {
              lVar16 = (ulong)param_3 - 5;
              puVar17 = (undefined4 *)((long)param_2 + 0x44);
              do {
                uVar2 = *puVar17;
                lVar16 = lVar16 + -1;
                puVar1 = (undefined8 *)(puVar17 + -2);
                puVar17 = puVar17 + 3;
                uVar3 = CONCAT44(uVar2,uVar2);
                auVar14._8_8_ = uVar3;
                auVar14._0_8_ = *puVar1;
                auVar18 = NEON_fmin(auVar18,auVar14,4);
                auVar15._8_8_ = uVar3;
                auVar15._0_8_ = *puVar1;
                auVar19 = NEON_fmax(auVar19,auVar15,4);
              } while (lVar16 != 0);
            }
          }
        }
      }
    }
  }
  *(long *)(*param_1 + 8) = auVar18._8_8_;
  *(long *)*param_1 = auVar18._0_8_;
  *(long *)(param_1[1] + 8) = auVar19._8_8_;
  *(long *)param_1[1] = auVar19._0_8_;
  return;
}


