/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fcab70; name: FUN_02fcab70
 */


void FUN_02fcab70(uint *param_1,int param_2,int param_3,long *param_4)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  float *pfVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint *local_410 [64];
  uint *local_210 [64];
  
  if (param_2 < 2) {
    return;
  }
  local_410[0] = param_1 + (param_2 + -1);
  lVar6 = 0;
  local_210[0] = param_1;
LAB_02fcabbc:
  lVar6 = (long)(int)lVar6;
LAB_02fcabd0:
  do {
    puVar7 = local_410[0];
    do {
      local_410[0] = puVar7;
      uVar3 = param_1[(long)local_410[0] - (long)param_1 >> 3];
      puVar7 = local_410[0];
      puVar8 = param_1;
      do {
        lVar1 = 0;
        if (*param_4 != 0) {
          lVar1 = *param_4 + (long)param_4;
        }
        puVar10 = (undefined8 *)(lVar1 + (ulong)uVar3 * 0x30);
        fVar13 = ((float)*puVar10 + (float)puVar10[2]) * 0.5;
        fVar14 = ((float)((ulong)*puVar10 >> 0x20) + (float)((ulong)puVar10[2] >> 0x20)) * 0.5;
        fVar15 = ((float)puVar10[1] + (float)puVar10[3]) * 0.5;
        fVar16 = ((float)((ulong)puVar10[1] >> 0x20) + (float)((ulong)puVar10[3] >> 0x20)) * 0.5;
        if (param_3 == 1) {
          puVar8 = puVar8 + -1;
          do {
            puVar8 = puVar8 + 1;
            uVar9 = *puVar8;
            lVar12 = lVar1 + (ulong)uVar9 * 0x30;
          } while ((*(float *)(lVar12 + 4) + *(float *)(lVar12 + 0x14)) * 0.5 < fVar14);
        }
        else if (param_3 == 2) {
          puVar8 = puVar8 + -1;
          do {
            puVar8 = puVar8 + 1;
            uVar9 = *puVar8;
            lVar12 = lVar1 + (ulong)uVar9 * 0x30;
          } while ((*(float *)(lVar12 + 8) + *(float *)(lVar12 + 0x18)) * 0.5 < fVar15);
        }
        else if (param_3 == 3) {
          puVar8 = puVar8 + -1;
          do {
            puVar8 = puVar8 + 1;
            uVar9 = *puVar8;
            lVar12 = lVar1 + (ulong)uVar9 * 0x30;
          } while ((*(float *)(lVar12 + 0xc) + *(float *)(lVar12 + 0x1c)) * 0.5 < fVar16);
        }
        else {
          puVar8 = puVar8 + -1;
          do {
            puVar8 = puVar8 + 1;
            uVar9 = *puVar8;
            pfVar5 = (float *)(lVar1 + (ulong)uVar9 * 0x30);
          } while ((*pfVar5 + pfVar5[4]) * 0.5 < fVar13);
        }
        if (param_3 == 1) {
          puVar7 = puVar7 + 1;
          do {
            puVar7 = puVar7 + -1;
            uVar11 = *puVar7;
            lVar12 = lVar1 + (ulong)uVar11 * 0x30;
          } while (fVar14 < (*(float *)(lVar12 + 4) + *(float *)(lVar12 + 0x14)) * 0.5);
        }
        else if (param_3 == 2) {
          puVar7 = puVar7 + 1;
          do {
            puVar7 = puVar7 + -1;
            uVar11 = *puVar7;
            lVar12 = lVar1 + (ulong)uVar11 * 0x30;
          } while (fVar15 < (*(float *)(lVar12 + 8) + *(float *)(lVar12 + 0x18)) * 0.5);
        }
        else {
          puVar7 = puVar7 + 1;
          fVar13 = (float)((uint)fVar13 ^ ((uint)fVar13 ^ (uint)fVar16) & -(uint)(param_3 == 3));
          if (param_3 == 3) {
            do {
              puVar7 = puVar7 + -1;
              uVar11 = *puVar7;
              lVar12 = lVar1 + (ulong)uVar11 * 0x30;
            } while (fVar13 < (*(float *)(lVar12 + 0xc) + *(float *)(lVar12 + 0x1c)) * 0.5);
          }
          else {
            do {
              puVar7 = puVar7 + -1;
              uVar11 = *puVar7;
              pfVar5 = (float *)(lVar1 + (ulong)uVar11 * 0x30);
            } while (fVar13 < (*pfVar5 + pfVar5[4]) * 0.5);
          }
        }
        if (puVar8 <= puVar7) {
          if (puVar7 != puVar8) {
            *puVar7 = uVar9;
            *puVar8 = uVar11;
          }
          puVar7 = puVar7 + -1;
          puVar8 = puVar8 + 1;
        }
      } while (puVar8 <= puVar7);
      if (puVar7 <= param_1) {
        param_1 = puVar8;
        if (puVar8 < local_410[0]) goto LAB_02fcabd0;
        if ((int)lVar6 < 1) {
          return;
        }
        lVar6 = (long)(int)lVar6 + -1;
        param_1 = local_210[lVar6];
        local_410[0] = local_410[lVar6];
        goto LAB_02fcabbc;
      }
    } while (local_410[0] <= puVar8);
    puVar2 = puVar7;
    puVar4 = param_1;
    if ((long)local_410[0] - (long)puVar8 <= (long)puVar7 - (long)param_1) {
      puVar2 = local_410[0];
      puVar4 = puVar8;
      local_410[0] = puVar7;
      puVar8 = param_1;
    }
    local_210[lVar6] = puVar8;
    local_410[lVar6] = local_410[0];
    param_1 = puVar4;
    local_410[0] = puVar2;
    lVar6 = lVar6 + 1;
  } while( true );
}


