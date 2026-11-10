/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030df690; name: FUN_030df690
 */


/* WARNING: Removing unreachable block (ram,0x030df748) */

void FUN_030df690(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                 uint param_7,long param_8)

{
  ulong uVar1;
  long lVar2;
  float *pfVar3;
  long lVar4;
  float *pfVar5;
  uint uVar6;
  float *pfVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_b0 [8];
  
  uVar6 = 0;
  uVar1 = (ulong)param_7;
  uVar10 = uVar1 & 3;
  local_b0[0] = 0.0;
  local_b0[1] = 0.0;
  local_b0[2] = 0.0;
  local_b0[3] = 0.0;
  local_b0[4] = 0.0;
  local_b0[5] = 0.0;
  do {
    fVar11 = 0.0;
    if (0 < (int)param_7) {
      if (uVar1 - 1 < 3) {
        lVar2 = 0;
      }
      else {
        lVar2 = 0;
        pfVar3 = (float *)(param_8 + 8);
        pfVar5 = local_b0 + 2;
        do {
          lVar2 = lVar2 + 4;
          fVar11 = pfVar5[-2];
          fVar13 = pfVar5[-1];
          pfVar3[-1] = fVar13 + pfVar3[-1];
          pfVar3[-2] = fVar11 + pfVar3[-2];
          pfVar5[-2] = fVar11 * 0.7;
          fVar11 = *pfVar5;
          fVar12 = pfVar5[1];
          pfVar5[-1] = fVar13 * 0.7;
          *pfVar3 = fVar11 + *pfVar3;
          pfVar3[1] = fVar12 + pfVar3[1];
          pfVar3 = pfVar3 + 4;
          *pfVar5 = fVar11 * 0.7;
          pfVar5[1] = fVar12 * 0.7;
          pfVar5 = pfVar5 + 4;
        } while (uVar1 - uVar10 != lVar2);
      }
      if ((param_7 & 3) != 0) {
        pfVar3 = (float *)(param_8 + lVar2 * 4);
        pfVar5 = local_b0 + lVar2;
        uVar9 = uVar10;
        do {
          fVar11 = *pfVar5;
          uVar9 = uVar9 - 1;
          *pfVar3 = fVar11 + *pfVar3;
          *pfVar5 = fVar11 * 0.7;
          pfVar3 = pfVar3 + 1;
          pfVar5 = pfVar5 + 1;
        } while (uVar9 != 0);
      }
      uVar9 = 0;
      lVar2 = 0;
      pfVar3 = (float *)(param_1 + 8);
      fVar13 = 0.0;
      do {
        fVar11 = *(float *)(param_1 + (lVar2 + uVar9) * 4);
        if (uVar1 - 1 < 3) {
          lVar4 = 0;
          fVar12 = 0.0;
        }
        else {
          fVar12 = 0.0;
          lVar4 = 0;
          pfVar5 = (float *)(param_8 + 8);
          pfVar7 = pfVar3;
          do {
            lVar4 = lVar4 + 4;
            fVar12 = fVar12 + pfVar7[-2] * pfVar5[-2] + pfVar7[-1] * pfVar5[-1] + *pfVar7 * *pfVar5
                     + pfVar7[1] * pfVar5[1];
            pfVar5 = pfVar5 + 4;
            pfVar7 = pfVar7 + 4;
          } while (uVar1 - uVar10 != lVar4);
        }
        if ((param_7 & 3) != 0) {
          pfVar5 = (float *)(param_1 + (lVar4 + lVar2) * 4);
          pfVar7 = (float *)(param_8 + lVar4 * 4);
          uVar8 = uVar10;
          do {
            uVar8 = uVar8 - 1;
            fVar12 = fVar12 + *pfVar5 * *pfVar7;
            pfVar5 = pfVar5 + 1;
            pfVar7 = pfVar7 + 1;
          } while (uVar8 != 0);
        }
        lVar4 = uVar9 * 4;
        fVar14 = fVar11 + 1e-06;
        lVar2 = lVar2 + (int)param_7;
        fVar12 = fVar11 * *(float *)(param_8 + lVar4) - fVar12;
        fVar17 = (*(float *)(param_2 + lVar4) + fVar12) / fVar14;
        if (*(char *)(param_4 + uVar9) != '\0') {
          fVar11 = *(float *)(param_5 + lVar4);
          fVar15 = fVar11;
          if (fVar11 == fVar17 || fVar17 > fVar11) {
            fVar15 = fVar17;
          }
          fVar16 = fVar11;
          if (fVar17 <= fVar11) {
            fVar16 = fVar17;
          }
          fVar17 = fVar15;
          if (*(float *)(param_6 + lVar4) <= 0.0) {
            fVar17 = fVar16;
          }
          if (*(char *)(param_4 + uVar9) == '\x03') {
            fVar14 = (fVar12 + *(float *)(param_3 + uVar9 * 4)) / fVar14;
            if (fVar14 <= fVar11) {
              fVar11 = fVar14;
            }
            fVar17 = fVar17 * 0.5 + fVar11 * 0.5;
          }
        }
        local_b0[uVar9] = local_b0[uVar9] + (fVar17 - *(float *)(param_8 + lVar4));
        fVar11 = (float)FUN_032c8ef0();
        fVar12 = (float)FUN_032c8ef0(fVar17);
        uVar9 = uVar9 + 1;
        *(float *)(param_8 + lVar4) = fVar17;
        fVar11 = fVar11 / (fVar12 + 1e-06);
        pfVar3 = (float *)((long)pfVar3 +
                          (-(ulong)(param_7 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_7 << 2));
        if (fVar11 <= fVar13) {
          fVar11 = fVar13;
        }
        fVar13 = fVar11;
      } while (uVar9 != uVar1);
    }
    uVar6 = uVar6 + 1;
  } while ((uVar6 < 10) || ((uVar6 < 0x32 && (0.0005 < fVar11))));
  return;
}


