/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315d934; name: FUN_0315d934
 */


/* WARNING: Removing unreachable block (ram,0x0315dbdc) */
/* WARNING: Removing unreachable block (ram,0x0315db00) */
/* WARNING: Removing unreachable block (ram,0x0315da78) */
/* WARNING: Removing unreachable block (ram,0x0315d990) */
/* WARNING: Removing unreachable block (ram,0x0315da0c) */
/* WARNING: Removing unreachable block (ram,0x0315dcb0) */
/* WARNING: Removing unreachable block (ram,0x0315db70) */
/* WARNING: Removing unreachable block (ram,0x0315dd9c) */

void FUN_0315d934(long param_1,int *param_2,uint param_3,int *param_4,uint param_5,long *param_6)

{
  float *pfVar1;
  float *pfVar2;
  ushort *puVar3;
  long lVar4;
  ulong uVar5;
  ushort uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (0 < (int)param_3) {
    pfVar2 = (float *)*param_6;
    iVar7 = (int)((pfVar2[1] - *(float *)(param_1 + 0x1c)) * *(float *)(param_1 + 0x24));
    fVar9 = *pfVar2 * 253.0 + 0.5;
    fVar8 = 0.0;
    if (0.0 <= fVar9) {
      fVar8 = fVar9;
    }
    uVar6 = 0x100;
    if (pfVar2[1] <= *(float *)(param_1 + 0x1c) || iVar7 != 0) {
      uVar6 = (ushort)(iVar7 << 8);
    }
    puVar3 = (ushort *)(*(long *)(param_1 + 0x50) + (long)*param_2 * 2);
    uVar5 = (ulong)param_3;
    *puVar3 = uVar6 | (ushort)(int)fVar8;
    if (uVar5 != 1) {
      iVar7 = (int)((pfVar2[3] - *(float *)(param_1 + 0x1c)) * *(float *)(param_1 + 0x24));
      fVar9 = pfVar2[2] * 253.0 + 0.5;
      fVar8 = 0.0;
      if (0.0 <= fVar9) {
        fVar8 = fVar9;
      }
      uVar6 = 0x100;
      if (pfVar2[3] <= *(float *)(param_1 + 0x1c) || iVar7 != 0) {
        uVar6 = (ushort)(iVar7 << 8);
      }
      puVar3[1] = uVar6 | (ushort)(int)fVar8;
      if (uVar5 != 2) {
        iVar7 = (int)((pfVar2[5] - *(float *)(param_1 + 0x1c)) * *(float *)(param_1 + 0x24));
        fVar9 = pfVar2[4] * 253.0 + 0.5;
        fVar8 = 0.0;
        if (0.0 <= fVar9) {
          fVar8 = fVar9;
        }
        uVar6 = 0x100;
        if (pfVar2[5] <= *(float *)(param_1 + 0x1c) || iVar7 != 0) {
          uVar6 = (ushort)(iVar7 << 8);
        }
        puVar3[2] = uVar6 | (ushort)(int)fVar8;
        if (uVar5 != 3) {
          iVar7 = (int)((pfVar2[7] - *(float *)(param_1 + 0x1c)) * *(float *)(param_1 + 0x24));
          fVar9 = pfVar2[6] * 253.0 + 0.5;
          fVar8 = 0.0;
          if ((0.0 <= fVar9) && (fVar8 = fVar9, 253.0 < fVar9)) {
            fVar8 = 253.0;
          }
          if (*(float *)(param_1 + 0x1c) < pfVar2[7] && iVar7 == 0) {
            uVar6 = 0x100;
          }
          else {
            uVar6 = (ushort)(iVar7 << 8);
          }
          lVar4 = uVar5 - 4;
          puVar3[3] = uVar6 | (ushort)(int)fVar8;
          if (lVar4 != 0) {
            pfVar2 = pfVar2 + 9;
            puVar3 = puVar3 + 4;
            do {
              pfVar1 = pfVar2 + -1;
              fVar10 = *pfVar2;
              pfVar2 = pfVar2 + 2;
              fVar9 = *pfVar1 * 253.0 + 0.5;
              iVar7 = (int)((fVar10 - *(float *)(param_1 + 0x1c)) * *(float *)(param_1 + 0x24));
              fVar8 = 0.0;
              if (0.0 <= fVar9) {
                fVar8 = fVar9;
              }
              uVar6 = 0x100;
              if (fVar10 <= *(float *)(param_1 + 0x1c) || iVar7 != 0) {
                uVar6 = (ushort)(iVar7 << 8);
              }
              lVar4 = lVar4 + -1;
              *puVar3 = uVar6 | (ushort)(int)fVar8;
              puVar3 = puVar3 + 1;
            } while (lVar4 != 0);
          }
        }
      }
    }
  }
  if (0 < (int)param_5) {
    pfVar2 = (float *)(*param_6 + (long)(int)param_3 * 8);
    puVar3 = (ushort *)(*(long *)(param_1 + 0x50) + (long)*param_4 * 2);
    iVar7 = (int)((pfVar2[1] - *(float *)(param_1 + 0x1c)) * *(float *)(param_1 + 0x24));
    fVar9 = *pfVar2 * 253.0 + 0.5;
    fVar8 = 0.0;
    if (0.0 <= fVar9) {
      fVar8 = fVar9;
    }
    uVar6 = 0x100;
    if (pfVar2[1] <= *(float *)(param_1 + 0x1c) || iVar7 != 0) {
      uVar6 = (ushort)(iVar7 << 8);
    }
    *puVar3 = uVar6 | (ushort)(int)fVar8;
    if (param_5 != 1) {
      iVar7 = (int)((pfVar2[3] - *(float *)(param_1 + 0x1c)) * *(float *)(param_1 + 0x24));
      fVar9 = pfVar2[2] * 253.0 + 0.5;
      fVar8 = 0.0;
      if (0.0 <= fVar9) {
        fVar8 = fVar9;
      }
      uVar6 = 0x100;
      if (pfVar2[3] <= *(float *)(param_1 + 0x1c) || iVar7 != 0) {
        uVar6 = (ushort)(iVar7 << 8);
      }
      puVar3[1] = uVar6 | (ushort)(int)fVar8;
      if (param_5 != 2) {
        iVar7 = (int)((pfVar2[5] - *(float *)(param_1 + 0x1c)) * *(float *)(param_1 + 0x24));
        fVar9 = pfVar2[4] * 253.0 + 0.5;
        fVar8 = 0.0;
        if (0.0 <= fVar9) {
          fVar8 = fVar9;
        }
        uVar6 = 0x100;
        if (pfVar2[5] <= *(float *)(param_1 + 0x1c) || iVar7 != 0) {
          uVar6 = (ushort)(iVar7 << 8);
        }
        puVar3[2] = uVar6 | (ushort)(int)fVar8;
        if (param_5 != 3) {
          iVar7 = (int)((pfVar2[7] - *(float *)(param_1 + 0x1c)) * *(float *)(param_1 + 0x24));
          fVar9 = pfVar2[6] * 253.0 + 0.5;
          fVar8 = 0.0;
          if ((0.0 <= fVar9) && (fVar8 = fVar9, 253.0 < fVar9)) {
            fVar8 = 253.0;
          }
          if (*(float *)(param_1 + 0x1c) < pfVar2[7] && iVar7 == 0) {
            uVar6 = 0x100;
          }
          else {
            uVar6 = (ushort)(iVar7 << 8);
          }
          puVar3[3] = uVar6 | (ushort)(int)fVar8;
          if (param_5 != 4) {
            lVar4 = (ulong)param_5 - 4;
            pfVar2 = pfVar2 + 9;
            puVar3 = puVar3 + 4;
            do {
              pfVar1 = pfVar2 + -1;
              fVar10 = *pfVar2;
              pfVar2 = pfVar2 + 2;
              fVar9 = *pfVar1 * 253.0 + 0.5;
              iVar7 = (int)((fVar10 - *(float *)(param_1 + 0x1c)) * *(float *)(param_1 + 0x24));
              fVar8 = 0.0;
              if (0.0 <= fVar9) {
                fVar8 = fVar9;
              }
              uVar6 = 0x100;
              if (fVar10 <= *(float *)(param_1 + 0x1c) || iVar7 != 0) {
                uVar6 = (ushort)(iVar7 << 8);
              }
              lVar4 = lVar4 + -1;
              *puVar3 = uVar6 | (ushort)(int)fVar8;
              puVar3 = puVar3 + 1;
            } while (lVar4 != 0);
          }
        }
      }
    }
  }
  return;
}


