/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4aaa4; name: FUN_02e4aaa4
 */


void FUN_02e4aaa4(long param_1,long param_2)

{
  undefined1 (*pauVar1) [16];
  ulong uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 (*pauVar7) [16];
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 (*pauVar11) [16];
  ulong uVar12;
  undefined4 uVar13;
  float *pfVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float local_84 [17];
  
  uVar3 = *(uint *)(param_2 + 0x44);
  if (0 < (int)uVar3) {
    lVar10 = param_2 + 0xb0;
    pfVar14 = local_84;
    lVar15 = (long)(int)uVar3;
    do {
      fVar16 = (float)FUN_02e4a0cc(param_1,lVar10);
      lVar15 = lVar15 + -1;
      lVar10 = lVar10 + 0x30;
      *pfVar14 = fVar16;
      pfVar14 = pfVar14 + 1;
    } while (lVar15 != 0);
  }
  if ((int)(uVar3 - 1) < 1) {
    uVar5 = 0;
    uVar13 = 1;
  }
  else {
    fVar16 = -3.4028235e+38;
    uVar5 = 0;
    pauVar7 = (undefined1 (*) [16])(param_2 + 0xf0);
    uVar8 = 1;
    uVar13 = 1;
    uVar9 = 0;
    do {
      uVar2 = uVar9 + 1;
      if ((long)uVar2 < (long)(int)uVar3) {
        lVar10 = param_2 + uVar9 * 0x30;
        pauVar11 = pauVar7;
        uVar12 = uVar8;
        fVar17 = fVar16;
        uVar6 = uVar5;
        do {
          pauVar1 = pauVar11 + -1;
          auVar18 = *pauVar11;
          pauVar11 = pauVar11 + 3;
          auVar19 = NEON_fmax(*(undefined1 (*) [16])(lVar10 + 0xc0),auVar18,4);
          auVar18 = NEON_fmin(*(undefined1 (*) [16])(lVar10 + 0xb0),*pauVar1,4);
          fVar21 = (auVar19._0_4_ - auVar18._0_4_) * 0.5;
          fVar20 = (auVar19._4_4_ - auVar18._4_4_) * 0.5;
          fVar16 = (auVar19._8_4_ - auVar18._8_4_) * 0.5;
          fVar16 = fVar21 * fVar21 + fVar20 * fVar20 + fVar16 * fVar16;
          fVar16 = (fVar16 * *(float *)(param_1 + 0x10) * SQRT(fVar16) - local_84[uVar9]) -
                   local_84[uVar12];
          uVar5 = (int)uVar9;
          uVar4 = (int)uVar12;
          if (fVar16 <= fVar17) {
            uVar5 = uVar6;
            uVar4 = uVar13;
          }
          uVar13 = uVar4;
          uVar12 = uVar12 + 1;
          fVar17 = fVar16;
          uVar6 = uVar5;
        } while (uVar3 != uVar12);
      }
      uVar8 = uVar8 + 1;
      pauVar7 = pauVar7 + 3;
      uVar9 = uVar2;
    } while (uVar2 != uVar3 - 1);
  }
  FUN_02e4ac28(param_1,uVar5,0,param_2);
  FUN_02e4ac28(param_1,uVar13,1,param_2);
  return;
}


