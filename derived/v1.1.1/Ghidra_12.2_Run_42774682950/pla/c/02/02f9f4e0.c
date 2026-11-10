/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f9f4e0; name: FUN_02f9f4e0
 */


void FUN_02f9f4e0(ushort *param_1,int param_2,int param_3,long *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  float *pfVar3;
  long lVar4;
  ushort *puVar5;
  ushort uVar6;
  ushort *puVar7;
  long lVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort uVar11;
  ushort uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ushort *local_410 [64];
  ushort *local_210 [64];
  
  if (param_2 < 2) {
    return;
  }
  local_410[0] = param_1 + (param_2 + -1);
  lVar8 = 0;
  local_210[0] = param_1;
LAB_02f9f52c:
  lVar8 = (long)(int)lVar8;
LAB_02f9f540:
  do {
    puVar9 = local_410[0];
    do {
      local_410[0] = puVar9;
      uVar6 = param_1[(long)local_410[0] - (long)param_1 >> 2];
      puVar9 = local_410[0];
      puVar10 = param_1;
      do {
        lVar4 = 0;
        if (*param_4 != 0) {
          lVar4 = *param_4 + (long)param_4;
        }
        puVar1 = (undefined8 *)(lVar4 + (ulong)uVar6 * 0x20);
        fVar13 = ((float)*puVar1 + (float)puVar1[2]) * 0.5;
        fVar14 = ((float)((ulong)*puVar1 >> 0x20) + (float)((ulong)puVar1[2] >> 0x20)) * 0.5;
        fVar15 = ((float)puVar1[1] + (float)puVar1[3]) * 0.5;
        fVar16 = ((float)((ulong)puVar1[1] >> 0x20) + 0.0) * 0.5;
        if (param_3 == 1) {
          puVar10 = puVar10 + -1;
          do {
            puVar10 = puVar10 + 1;
            uVar11 = *puVar10;
            lVar2 = lVar4 + (ulong)uVar11 * 0x20;
          } while ((*(float *)(lVar2 + 0x14) + *(float *)(lVar2 + 4)) * 0.5 < fVar14);
        }
        else if (param_3 == 2) {
          puVar10 = puVar10 + -1;
          do {
            puVar10 = puVar10 + 1;
            uVar11 = *puVar10;
            lVar2 = lVar4 + (ulong)uVar11 * 0x20;
          } while ((*(float *)(lVar2 + 0x18) + *(float *)(lVar2 + 8)) * 0.5 < fVar15);
        }
        else if (param_3 == 3) {
          puVar10 = puVar10 + -1;
          do {
            puVar10 = puVar10 + 1;
            uVar11 = *puVar10;
          } while ((*(float *)(lVar4 + (ulong)uVar11 * 0x20 + 0xc) + 0.0) * 0.5 < fVar16);
        }
        else {
          puVar10 = puVar10 + -1;
          do {
            puVar10 = puVar10 + 1;
            uVar11 = *puVar10;
            pfVar3 = (float *)(lVar4 + (ulong)uVar11 * 0x20);
          } while ((pfVar3[4] + *pfVar3) * 0.5 < fVar13);
        }
        if (param_3 == 1) {
          puVar9 = puVar9 + 1;
          do {
            puVar9 = puVar9 + -1;
            uVar12 = *puVar9;
            lVar2 = lVar4 + (ulong)uVar12 * 0x20;
          } while (fVar14 < (*(float *)(lVar2 + 0x14) + *(float *)(lVar2 + 4)) * 0.5);
        }
        else if (param_3 == 2) {
          puVar9 = puVar9 + 1;
          do {
            puVar9 = puVar9 + -1;
            uVar12 = *puVar9;
            lVar2 = lVar4 + (ulong)uVar12 * 0x20;
          } while (fVar15 < (*(float *)(lVar2 + 0x18) + *(float *)(lVar2 + 8)) * 0.5);
        }
        else {
          puVar9 = puVar9 + 1;
          fVar13 = (float)((uint)fVar13 ^ ((uint)fVar13 ^ (uint)fVar16) & -(uint)(param_3 == 3));
          if (param_3 == 3) {
            do {
              puVar9 = puVar9 + -1;
              uVar12 = *puVar9;
            } while (fVar13 < (*(float *)(lVar4 + (ulong)uVar12 * 0x20 + 0xc) + 0.0) * 0.5);
          }
          else {
            do {
              puVar9 = puVar9 + -1;
              uVar12 = *puVar9;
              pfVar3 = (float *)(lVar4 + (ulong)uVar12 * 0x20);
            } while (fVar13 < (pfVar3[4] + *pfVar3) * 0.5);
          }
        }
        if (puVar10 <= puVar9) {
          if (puVar9 != puVar10) {
            *puVar9 = uVar11;
            *puVar10 = uVar12;
          }
          puVar9 = puVar9 + -1;
          puVar10 = puVar10 + 1;
        }
      } while (puVar10 <= puVar9);
      if (puVar9 <= param_1) {
        param_1 = puVar10;
        if (puVar10 < local_410[0]) goto LAB_02f9f540;
        if ((int)lVar8 < 1) {
          return;
        }
        lVar8 = (long)(int)lVar8 + -1;
        param_1 = local_210[lVar8];
        local_410[0] = local_410[lVar8];
        goto LAB_02f9f52c;
      }
    } while (local_410[0] <= puVar10);
    puVar5 = puVar9;
    puVar7 = param_1;
    if ((long)local_410[0] - (long)puVar10 <= (long)puVar9 - (long)param_1) {
      puVar5 = local_410[0];
      puVar7 = puVar10;
      local_410[0] = puVar9;
      puVar10 = param_1;
    }
    local_210[lVar8] = puVar10;
    local_410[lVar8] = local_410[0];
    param_1 = puVar7;
    local_410[0] = puVar5;
    lVar8 = lVar8 + 1;
  } while( true );
}


