/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0fb64; name: FUN_02f0fb64
 */


void FUN_02f0fb64(float *param_1,undefined1 param_2 [16],float param_3,long *param_4,long param_5,
                 float *param_6)

{
  long *plVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  float *pfVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  *param_6 = 0.0;
  fVar14 = (float)FUN_02ed6dc0();
  *param_1 = 50.0;
  param_1[3] = fVar14;
  param_1[4] = param_3;
  fVar15 = 0.0;
  if (0.0 <= fVar14) {
    fVar15 = fVar14;
  }
  fVar16 = 100.0;
  if (fVar15 <= 100.0) {
    fVar16 = fVar15;
  }
  if ((~(uint)fVar16 & 0x7f800000) != 0) {
    *param_1 = fVar16;
  }
  uVar5 = (**(code **)(*param_4 + 0x108))(param_4,param_6);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (*(int *)(param_5 + 0x40) == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = **(long **)(param_5 + 0x38);
  }
  *param_6 = *param_6 * *(float *)(lVar13 + 0x50);
  if (param_3 == 0.0) {
    return;
  }
  if (((*(uint *)(param_5 + 0x40) < 2) ||
      (lVar6 = *(long *)(*(long *)(param_5 + 0x38) + 8), lVar6 == 0)) &&
     (lVar6 = DAT_0440a410, DAT_0440a410 == 0)) {
    FUN_02e43d1c();
    uVar2 = *(uint *)(DAT_0440a410 + 0xb0);
    lVar6 = DAT_0440a410;
  }
  else {
    uVar2 = *(uint *)(lVar6 + 0xb0);
  }
  if (uVar2 == 0) {
    fVar15 = 1e+10;
  }
  else {
    plVar7 = *(long **)(lVar6 + 0xa8);
    fVar15 = 1e+10;
    plVar1 = plVar7 + uVar2;
    uVar2 = *(uint *)(DAT_0440a140 + 0x38);
    do {
      if (uVar2 != 0) {
        uVar4 = 0;
        uVar8 = (uint)*plVar7;
        if (uVar2 != 0) {
          uVar4 = uVar8 / uVar2;
        }
        for (plVar11 = *(long **)(*(long *)(DAT_0440a140 + 0x30) +
                                 (ulong)(uVar8 - uVar4 * uVar2) * 8); plVar11 != (long *)0x0;
            plVar11 = (long *)*plVar11) {
          if (plVar11[1] == *plVar7) {
            if ((2 < *(uint *)(plVar11[2] + 0x40)) &&
               (lVar6 = *(long *)(*(long *)(plVar11[2] + 0x38) + 0x10), lVar6 != 0)) {
              uVar3 = *(ushort *)(lVar13 + 0x38);
              if ((ulong)uVar3 != 0) {
                lVar9 = *(long *)(lVar13 + 0x20);
                fVar17 = *(float *)(lVar6 + 0x7c) - *(float *)(lVar9 + 0x1c);
                fVar16 = *(float *)(lVar6 + 0x78) - *(float *)(lVar9 + 0x18);
                fVar18 = *(float *)(lVar6 + 0x80) - *(float *)(lVar9 + 0x20);
                fVar15 = (float)NEON_fminnm(fVar15,SQRT(fVar16 * fVar16 + fVar17 * fVar17 +
                                                        fVar18 * fVar18) / *(float *)(lVar6 + 0x84))
                ;
                if (uVar3 != 1) {
                  lVar12 = (ulong)uVar3 - 1;
                  pfVar10 = (float *)(lVar9 + 0x48);
                  do {
                    fVar17 = *(float *)(lVar6 + 0x7c) - pfVar10[-1];
                    fVar18 = *(float *)(lVar6 + 0x80) - *pfVar10;
                    fVar16 = *(float *)(lVar6 + 0x78) - pfVar10[-2];
                    fVar15 = (float)NEON_fminnm(fVar15,SQRT(fVar16 * fVar16 + fVar17 * fVar17 +
                                                            fVar18 * fVar18) *
                                                       (1.0 / *(float *)(lVar6 + 0x84)));
                    lVar12 = lVar12 + -1;
                    pfVar10 = pfVar10 + 10;
                  } while (lVar12 != 0);
                }
              }
            }
            break;
          }
        }
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar1);
  }
  if (fVar15 < *param_6) {
    param_3 = (fVar15 * param_3) / *param_6;
  }
  fVar15 = 0.0;
  if (0.0 <= param_3 + fVar14) {
    fVar15 = param_3 + fVar14;
  }
  if (100.0 < fVar15) {
    fVar15 = 100.0;
  }
  if ((~(uint)fVar15 & 0x7f800000) != 0) {
    *param_1 = fVar15;
  }
  return;
}


