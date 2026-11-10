/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e61898; name: FUN_02e61898
 */


void FUN_02e61898(long param_1,float *param_2,long *param_3)

{
  uint uVar1;
  ulong uVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  iVar6 = (int)((float)*(uint *)(param_3 + 1) * 0.2);
  if (0 < iVar6) {
    fVar10 = 0.0;
    iVar5 = 0;
    iVar7 = 0;
    do {
      DAT_0440a190 = DAT_0440a190 * 0x5851f42d4c957f2d + 1;
      uVar2 = (ulong)(uint)(int)((float)((*(uint *)(param_3 + 1) - 1) *
                                        (uint)((ulong)DAT_0440a190 >> 0x21)) * 4.656613e-10);
      uVar1 = *(uint *)(*param_3 + uVar2 * 0x50 + 0x40);
      uVar8 = (ulong)uVar1;
      if (uVar1 != 0) {
        fVar13 = param_2[1];
        fVar14 = param_2[2];
        fVar11 = *param_2;
        pfVar3 = *(float **)(*param_3 + uVar2 * 0x50 + 0x38);
        pfVar9 = *(float **)(pfVar3 + 6);
        if (pfVar9 != (float *)0x0) goto LAB_02e619b8;
        do {
          fVar11 = *pfVar3 - fVar11;
          fVar13 = pfVar3[1] - fVar13;
          fVar14 = pfVar3[2] - fVar14;
          fVar12 = fVar11 * fVar11 + fVar13 * fVar13 + fVar14 * fVar14;
          pfVar4 = pfVar3;
          fVar13 = pfVar3[1];
          fVar14 = pfVar3[2];
          fVar11 = *pfVar3;
          while( true ) {
            fVar10 = SQRT(fVar12) + fVar10;
            uVar8 = uVar8 - 1;
            pfVar3 = pfVar4 + 8;
            if (uVar8 == 0) {
              iVar5 = iVar5 + uVar1;
              goto LAB_02e61900;
            }
            pfVar9 = *(float **)(pfVar4 + 0xe);
            if (pfVar9 == (float *)0x0) break;
LAB_02e619b8:
            fVar11 = *pfVar9 - fVar11;
            fVar13 = pfVar9[1] - fVar13;
            fVar14 = pfVar9[2] - fVar14;
            fVar12 = fVar11 * fVar11 + fVar13 * fVar13 + fVar14 * fVar14;
            pfVar4 = pfVar3;
            fVar13 = pfVar9[1];
            fVar14 = pfVar9[2];
            fVar11 = *pfVar9;
          }
        } while( true );
      }
LAB_02e61900:
      iVar7 = iVar7 + 1;
    } while (iVar7 != iVar6);
    if (0 < iVar5) {
      *(float *)(param_1 + 0x24) = fVar10 / (float)iVar5;
    }
  }
  return;
}


