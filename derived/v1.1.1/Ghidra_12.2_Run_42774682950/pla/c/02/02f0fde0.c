/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0fde0; name: FUN_02f0fde0
 */


undefined4 FUN_02f0fde0(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  float *pfVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if (*(uint *)(param_2 + 0x10) == 0) {
    return 0x501502f9;
  }
  plVar5 = *(long **)(param_2 + 8);
  uVar12 = 0x501502f9;
  plVar1 = plVar5 + *(uint *)(param_2 + 0x10);
  uVar2 = *(uint *)(DAT_0440a140 + 0x38);
  do {
    if (uVar2 != 0) {
      uVar4 = 0;
      uVar6 = (uint)*plVar5;
      if (uVar2 != 0) {
        uVar4 = uVar6 / uVar2;
      }
      for (plVar9 = *(long **)(*(long *)(DAT_0440a140 + 0x30) + (ulong)(uVar6 - uVar4 * uVar2) * 8);
          plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        if (plVar9[1] == *plVar5) {
          if ((2 < *(uint *)(plVar9[2] + 0x40)) &&
             (lVar11 = *(long *)(*(long *)(plVar9[2] + 0x38) + 0x10), lVar11 != 0)) {
            uVar3 = *(ushort *)(param_1 + 3);
            if ((ulong)uVar3 != 0) {
              lVar7 = *param_1;
              fVar14 = *(float *)(lVar11 + 0x7c) - *(float *)(lVar7 + 0x1c);
              fVar13 = *(float *)(lVar11 + 0x78) - *(float *)(lVar7 + 0x18);
              fVar15 = *(float *)(lVar11 + 0x80) - *(float *)(lVar7 + 0x20);
              uVar12 = NEON_fminnm(uVar12,SQRT(fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15)
                                          / *(float *)(lVar11 + 0x84));
              if (uVar3 != 1) {
                lVar10 = (ulong)uVar3 - 1;
                pfVar8 = (float *)(lVar7 + 0x48);
                do {
                  fVar14 = *(float *)(lVar11 + 0x7c) - pfVar8[-1];
                  fVar15 = *(float *)(lVar11 + 0x80) - *pfVar8;
                  fVar13 = *(float *)(lVar11 + 0x78) - pfVar8[-2];
                  uVar12 = NEON_fminnm(uVar12,SQRT(fVar13 * fVar13 + fVar14 * fVar14 +
                                                   fVar15 * fVar15) *
                                              (1.0 / *(float *)(lVar11 + 0x84)));
                  lVar10 = lVar10 + -1;
                  pfVar8 = pfVar8 + 10;
                } while (lVar10 != 0);
              }
            }
          }
          break;
        }
      }
    }
    plVar5 = plVar5 + 1;
    if (plVar5 == plVar1) {
      return uVar12;
    }
  } while( true );
}


