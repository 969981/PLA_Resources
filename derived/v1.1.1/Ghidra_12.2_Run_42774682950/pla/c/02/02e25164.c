/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e25164; name: FUN_02e25164
 */


void FUN_02e25164(long *param_1,undefined4 *param_2,float *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  lVar11 = *param_1;
  fVar13 = *(float *)(param_1[1] + (ulong)param_5 * 4);
  puVar10 = (undefined8 *)(lVar11 + (ulong)param_5 * 0x18);
  uVar9 = *(uint *)((long)puVar10 + 0xc);
  if (param_4 != 0) {
    uVar4 = *(uint *)(param_1 + 3);
    fVar16 = (float)uVar4;
    fVar17 = (float)(uVar4 >> 1);
    fVar15 = *(float *)(param_1 + 2);
    lVar11 = *(long *)*puVar10;
    do {
      uVar1 = param_4;
      if (uVar4 - uVar9 <= param_4) {
        uVar1 = uVar4 - uVar9;
      }
      uVar8 = uVar9;
      if (uVar1 != 0) {
        uVar8 = 0;
        puVar6 = param_2;
        pfVar7 = param_3;
        do {
          fVar14 = fVar13 + fVar15;
          fVar18 = fVar14 + fVar17;
          if (fVar16 <= fVar14) {
            fVar14 = fVar14 - fVar16;
          }
          if (fVar16 <= fVar18) {
            fVar18 = fVar18 - fVar16;
          }
          fVar20 = (float)(uVar9 + uVar8);
          fVar13 = fVar14 + fVar16;
          if (0.0 <= fVar14) {
            fVar13 = fVar14;
          }
          fVar19 = fVar20 - fVar13;
          fVar14 = fVar18 + fVar16;
          if (0.0 <= fVar18) {
            fVar14 = fVar18;
          }
          uVar2 = 0;
          if ((int)uVar4 <= (int)fVar19) {
            uVar2 = uVar4;
          }
          iVar5 = (int)fVar19 - uVar2;
          iVar12 = (int)(fVar20 - fVar14);
          uVar2 = 0;
          if ((int)uVar4 <= iVar12) {
            uVar2 = uVar4;
          }
          iVar12 = iVar12 - uVar2;
          fVar19 = fVar19 - (float)(int)fVar19;
          iVar5 = (uVar4 & iVar5 >> 0x1f) + iVar5;
          iVar12 = (uVar4 & iVar12 >> 0x1f) + iVar12;
          iVar3 = 0;
          if (iVar5 + 1 < (int)uVar4) {
            iVar3 = iVar5 + 1;
          }
          fVar14 = *(float *)(lVar11 + (long)iVar3 * 4);
          iVar3 = 0;
          if (iVar12 + 1 < (int)uVar4) {
            iVar3 = iVar12 + 1;
          }
          fVar21 = *(float *)(lVar11 + (long)iVar3 * 4);
          fVar18 = *(float *)(lVar11 + (long)iVar5 * 4);
          fVar20 = *(float *)(lVar11 + (long)iVar12 * 4);
          param_2 = puVar6 + 1;
          *(undefined4 *)(lVar11 + (ulong)(uVar9 + uVar8) * 4) = *puVar6;
          fVar18 = fVar19 * fVar14 + fVar18 * (1.0 - fVar19);
          fVar14 = ABS(fVar13 - fVar17) * (1.0 / fVar17);
          uVar8 = uVar8 + 1;
          param_3 = pfVar7 + 1;
          *pfVar7 = (fVar18 - fVar18 * fVar14) +
                    fVar14 * (fVar19 * fVar21 + fVar20 * (1.0 - fVar19));
          puVar6 = param_2;
          pfVar7 = param_3;
        } while (uVar8 < uVar1);
        uVar8 = uVar9 + uVar8;
      }
      uVar9 = 0;
      if (uVar8 != uVar4) {
        uVar9 = uVar8;
      }
      param_4 = param_4 - uVar1;
    } while (param_4 != 0);
    lVar11 = *param_1;
  }
  *(uint *)(lVar11 + (ulong)param_5 * 0x18 + 0xc) = uVar9;
  *(float *)(param_1[1] + (ulong)param_5 * 4) = fVar13;
  return;
}


