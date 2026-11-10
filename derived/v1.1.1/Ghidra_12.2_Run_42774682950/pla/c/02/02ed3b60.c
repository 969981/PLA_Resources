/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed3b60; name: FUN_02ed3b60
 */


void FUN_02ed3b60(long *param_1,undefined8 param_2,uint param_3,undefined8 param_4,uint param_5,
                 undefined8 *param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  
  uVar9 = (uint)((ulong)param_4 >> 0x20);
  fVar8 = (float)param_4;
  uVar12 = *(uint *)(param_1 + 1);
  if (uVar12 != 0) {
    iVar15 = 0;
    lVar10 = *param_1;
    uVar21 = uVar12;
    do {
      uVar2 = iVar15 + (uVar21 >> 1);
      lVar17 = *(long *)(lVar10 + (long)(int)uVar2 * 8);
      if (*(float *)(lVar17 + 0x2a8) == (float)param_2) {
        uVar16 = *(uint *)(lVar17 + 0x2ac);
        uVar19 = (uint)((ulong)param_2 >> 0x20);
        uVar4 = *(uint *)(lVar17 + 0x2b0);
        if (uVar16 == uVar19 && uVar4 == param_3) {
          uVar21 = uVar12 - 1;
          if (uVar2 == 0) {
LAB_02ed3c10:
            if (uVar21 <= uVar2) {
              return;
            }
            uVar22 = (ulong)(uVar2 + 1);
            lVar20 = *(long *)(lVar10 + uVar22 * 8);
            if (*(float *)(lVar20 + 0x2a8) == fVar8) {
              uVar16 = *(uint *)(lVar20 + 0x2b0);
              if (*(char *)((long)param_1 + 0x12) == '\0') {
                if (uVar16 == param_5) {
                  if (*(uint *)(lVar20 + 0x2ac) <= uVar9) {
                    return;
                  }
                }
                else if (uVar16 <= param_5) {
                  return;
                }
              }
              else if (uVar16 == param_5) {
                if (uVar9 <= *(uint *)(lVar20 + 0x2ac)) {
                  return;
                }
              }
              else if (param_5 <= uVar16) {
                return;
              }
            }
            else if (*(float *)(lVar20 + 0x2a8) <= fVar8) {
              return;
            }
            if (uVar12 - 2 <= uVar2) goto LAB_02ed3df4;
            lVar23 = *(long *)(lVar10 + (ulong)(uVar2 + 2) * 8);
            if (*(float *)(lVar23 + 0x2a8) == fVar8) {
              bVar6 = param_5 <= *(uint *)(lVar23 + 0x2b0);
              bVar7 = *(uint *)(lVar23 + 0x2b0) == param_5;
              if (*(char *)((long)param_1 + 0x12) != '\0') goto LAB_02ed3ce0;
LAB_02ed3ca0:
              if (bVar7) {
                if (*(uint *)(lVar23 + 0x2ac) < uVar9) goto LAB_02ed3df4;
              }
              else if (!bVar6) goto LAB_02ed3df4;
            }
            else if (*(float *)(lVar23 + 0x2a8) < fVar8) goto LAB_02ed3df4;
          }
          else {
            uVar22 = (ulong)(uVar2 - 1);
            lVar20 = *(long *)(lVar10 + uVar22 * 8);
            if (*(float *)(lVar20 + 0x2a8) != fVar8) {
              if (*(float *)(lVar20 + 0x2a8) < fVar8) goto LAB_02ed3c74;
              goto LAB_02ed3c10;
            }
            uVar16 = *(uint *)(lVar20 + 0x2b0);
            if (*(char *)((long)param_1 + 0x12) == '\0') {
              if (uVar16 == param_5) {
                if (uVar9 <= *(uint *)(lVar20 + 0x2ac)) goto LAB_02ed3c10;
              }
              else if (uVar16 >= param_5) goto LAB_02ed3c10;
            }
            else if (uVar16 == param_5) {
              if (*(uint *)(lVar20 + 0x2ac) <= uVar9) goto LAB_02ed3c10;
            }
            else if (uVar16 < param_5) goto LAB_02ed3c10;
LAB_02ed3c74:
            if (uVar2 < 2) goto LAB_02ed3df4;
            lVar23 = *(long *)(lVar10 + (ulong)(uVar2 - 2) * 8);
            if (*(float *)(lVar23 + 0x2a8) == fVar8) {
              bVar6 = param_5 <= *(uint *)(lVar23 + 0x2b0);
              bVar7 = *(uint *)(lVar23 + 0x2b0) == param_5;
              if (*(char *)((long)param_1 + 0x12) != '\0') goto LAB_02ed3ca0;
LAB_02ed3ce0:
              if (bVar7) {
                if (uVar9 < *(uint *)(lVar23 + 0x2ac)) goto LAB_02ed3df4;
              }
              else if (bVar6) {
LAB_02ed3df4:
                *(long *)(lVar10 + uVar22 * 8) = lVar17;
                *(long *)(lVar10 + (long)(int)uVar2 * 8) = lVar20;
                return;
              }
            }
            else if (fVar8 < *(float *)(lVar23 + 0x2a8)) goto LAB_02ed3df4;
          }
          uVar16 = 0;
          goto LAB_02ed3cec;
        }
        bVar7 = param_3 < uVar4;
        if (uVar4 == param_3) {
          bVar7 = uVar19 < uVar16;
        }
        bVar6 = uVar4 < param_3;
        if (uVar4 == param_3) {
          bVar6 = uVar16 < uVar19;
        }
        if (*(char *)((long)param_1 + 0x12) != '\0') {
          bVar7 = bVar6;
        }
      }
      else {
        bVar7 = (float)param_2 < *(float *)(lVar17 + 0x2a8);
      }
      if (bVar7 != 0) {
        iVar15 = uVar2 + 1;
      }
      uVar21 = uVar21 - bVar7 >> 1;
    } while (uVar21 != 0);
  }
  return;
LAB_02ed3cec:
  do {
    uVar4 = uVar16 + (uVar12 >> 1);
    lVar17 = *(long *)(lVar10 + (long)(int)uVar4 * 8);
    if (*(float *)(lVar17 + 0x2a8) == fVar8) {
      uVar19 = *(uint *)(lVar17 + 0x2ac);
      uVar5 = *(uint *)(lVar17 + 0x2b0);
      if (uVar19 == uVar9 && uVar5 == param_5) break;
      bVar7 = param_5 < uVar5;
      if (uVar5 == param_5) {
        bVar7 = uVar9 < uVar19;
      }
      bVar6 = uVar5 < param_5;
      if (uVar5 == param_5) {
        bVar6 = uVar19 < uVar9;
      }
      if (*(char *)((long)param_1 + 0x12) != '\0') {
        bVar7 = bVar6;
      }
    }
    else {
      bVar7 = fVar8 < *(float *)(lVar17 + 0x2a8);
    }
    if (bVar7 != 0) {
      uVar16 = uVar4 + 1;
    }
    uVar12 = uVar12 - bVar7 >> 1;
    uVar4 = uVar16;
  } while (uVar12 != 0);
  if (lVar10 + (long)(int)uVar4 * 8 != 0) {
    uVar21 = uVar4 - (uVar2 < uVar4);
  }
  puVar11 = (undefined8 *)(lVar10 + (ulong)uVar2 * 8);
  puVar1 = (undefined8 *)(lVar10 + (ulong)uVar21 * 8);
  uVar18 = (ulong)uVar2;
  uVar22 = (ulong)uVar21;
  if (uVar21 < uVar2) {
    if (uVar18 != uVar22) {
      uVar22 = (uVar18 * 8 + uVar22 * -8) - 8;
      uVar12 = ((uint)(uVar22 >> 3) & 0x1fffffff) + 1;
      if ((uVar12 & 3) != 0) {
        lVar10 = -((ulong)uVar12 & 3);
        puVar14 = puVar11;
        do {
          puVar11 = puVar14 + -1;
          *puVar14 = *puVar11;
          bVar7 = lVar10 != -1;
          lVar10 = lVar10 + 1;
          puVar14 = puVar11;
        } while (bVar7);
      }
      if (0x17 < uVar22) {
        do {
          uVar3 = puVar11[-1];
          puVar11[-1] = puVar11[-2];
          *puVar11 = uVar3;
          puVar11[-2] = puVar11[-3];
          puVar14 = puVar11 + -4;
          puVar11[-3] = *puVar14;
          puVar11 = puVar14;
        } while (puVar1 != puVar14);
      }
    }
  }
  else if (uVar18 != uVar22) {
    puVar14 = puVar11 + 1;
    *puVar11 = *puVar14;
    if (puVar14 != puVar1) {
      puVar13 = puVar11 + 2;
      *puVar14 = *puVar13;
      if ((puVar13 != puVar1) && (*puVar13 = puVar11[3], puVar11 + 3 != puVar1)) {
        puVar11 = (undefined8 *)(lVar10 + uVar18 * 8 + 0x20);
        lVar10 = uVar22 * 8 + uVar18 * -8 + -0x18;
        do {
          puVar11[-1] = *puVar11;
          puVar11 = puVar11 + 1;
          lVar10 = lVar10 + -8;
        } while (lVar10 != 0);
      }
    }
  }
  *puVar1 = *param_6;
  return;
}


