/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e49f44; name: FUN_02e49f44
 */


undefined4 FUN_02e49f44(long param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  bool bVar5;
  undefined4 unaff_w20;
  undefined1 (*pauVar6) [16];
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  iVar1 = *(int *)param_3[0x28];
  if (0 < iVar1) {
    auVar3 = *param_2;
    auVar11 = *param_2;
    auVar2 = param_2[1];
    fVar16 = *(float *)(param_1 + 0x10);
    fVar8 = (float)FUN_02e4a0cc(param_1,param_3);
    if (iVar1 == 1) {
      unaff_w20 = 0;
    }
    else {
      auVar11 = NEON_fmin(auVar11,*param_3,4);
      auVar12 = NEON_fmax(auVar2,param_3[1],4);
      fVar13 = (auVar12._0_4_ - auVar11._0_4_) * 0.5;
      fVar14 = (auVar12._4_4_ - auVar11._4_4_) * 0.5;
      fVar9 = (auVar12._8_4_ - auVar11._8_4_) * 0.5;
      fVar9 = fVar13 * fVar13 + fVar14 * fVar14 + fVar9 * fVar9;
      fVar9 = fVar9 * fVar16 * SQRT(fVar9) - fVar8;
      unaff_w20 = 0;
      lVar7 = 1;
      do {
        pauVar6 = param_3 + 2;
        fVar10 = (float)FUN_02e4a0cc(param_1,pauVar6);
        auVar11 = NEON_fmin(auVar3,*pauVar6,4);
        auVar12 = NEON_fmax(auVar2,param_3[3],4);
        fVar15 = (auVar12._0_4_ - auVar11._0_4_) * 0.5;
        fVar14 = (auVar12._4_4_ - auVar11._4_4_) * 0.5;
        fVar13 = (auVar12._8_4_ - auVar11._8_4_) * 0.5;
        fVar13 = fVar15 * fVar15 + fVar14 * fVar14 + fVar13 * fVar13;
        fVar15 = fVar13 * fVar16 * SQRT(fVar13) - fVar10;
        fVar14 = fVar15;
        fVar13 = fVar10;
        uVar4 = (int)lVar7;
        if (fVar8 <= fVar10 || fVar15 != fVar9) {
          fVar14 = fVar9;
          fVar13 = fVar8;
          uVar4 = unaff_w20;
        }
        bVar5 = fVar15 < fVar9;
        unaff_w20 = uVar4;
        fVar9 = fVar14;
        fVar8 = fVar13;
        if (bVar5) {
          unaff_w20 = (int)lVar7;
          fVar9 = fVar15;
          fVar8 = fVar10;
        }
        lVar7 = lVar7 + 1;
        param_3 = pauVar6;
      } while (iVar1 != lVar7);
    }
  }
  return unaff_w20;
}


