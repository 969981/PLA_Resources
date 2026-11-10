/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0319f8d4; name: FUN_0319f8d4
 */


void FUN_0319f8d4(undefined4 param_1,undefined4 param_2,undefined4 *param_3,long *param_4,
                 long *param_5)

{
  float *pfVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  float *pfVar6;
  undefined4 *puVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  byte bVar15;
  uint uVar16;
  float *pfVar17;
  ulong uVar18;
  long *plVar19;
  undefined *puVar20;
  long lVar21;
  int iVar22;
  uint uVar23;
  int *piVar24;
  long lVar25;
  byte *pbVar26;
  int iVar27;
  ulong uVar28;
  int *piVar29;
  byte *pbVar30;
  undefined4 *puVar31;
  long lVar32;
  long lVar33;
  int *piVar34;
  long lVar35;
  float fVar36;
  float fVar37;
  int iVar38;
  int iVar39;
  long lVar40;
  uint uVar41;
  long lVar42;
  undefined8 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined8 local_84;
  undefined8 local_7c;
  int local_74;
  undefined2 local_64;
  undefined1 local_62;
  
  param_3[4] = 0x7f7fffee;
  *param_3 = param_1;
  param_3[1] = param_2;
  *(undefined1 *)(param_3 + 5) = 0;
  *(undefined8 *)(param_3 + 6) = 0;
  *(undefined8 *)(param_3 + 8) = 0x8000000000000000;
  *(undefined8 *)(param_3 + 0xc) = 0;
  *(undefined8 *)(param_3 + 0xe) = 0x8000000000000000;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x12) = 0x8000000000000000;
  *(undefined8 *)(param_3 + 0x14) = 0;
  *(undefined8 *)(param_3 + 0x16) = 0x8000000000000000;
  *(undefined8 *)(param_3 + 0x1a) = 0;
  *(undefined8 *)(param_3 + 0x1c) = 0x8000000000000000;
  puVar20 = PTR_PTR_0434a090;
  if (param_4 == param_5) goto LAB_0319fe34;
  uVar41 = *(uint *)(param_4 + 1);
  plVar19 = param_4;
  while (plVar19 + 2 != param_5) {
    uVar41 = (int)plVar19[3] + uVar41;
    plVar19 = plVar19 + 2;
  }
  puVar2 = param_3 + 0x13;
  if ((int)uVar41 < 1) {
    uVar23 = 0;
  }
  else {
    if ((int)uVar41 < 0x40000000) {
      uVar23 = 0;
    }
    else {
      FUN_032bd0a8(uVar41);
      uVar23 = (*puVar2 & 0x3fffffff) * 2;
      if (0x3ffffffe < uVar23) {
        uVar23 = 0x3fffffff;
      }
    }
    uVar16 = uVar41;
    if ((int)uVar41 <= (int)uVar23) {
      uVar16 = uVar23;
    }
    uVar43 = FUN_032bd1d4(puVar20,uVar16,8,0,0,puVar2);
    uVar23 = param_3[0xf];
    *(undefined8 *)(param_3 + 0x10) = uVar43;
  }
  puVar3 = param_3 + 0xf;
  puVar4 = param_3 + 9;
  if ((int)(uVar23 & 0x3fffffff) < (int)uVar41) {
    uVar43 = *(undefined8 *)(param_3 + 0xc);
    uVar11 = param_3[0xe];
    if (0x3fffffff < (int)uVar41) {
      FUN_032bd0a8(uVar41);
      uVar23 = *puVar3;
    }
    uVar23 = (uVar23 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar23) {
      uVar23 = 0x3fffffff;
    }
    uVar16 = uVar41;
    if ((int)uVar41 <= (int)uVar23) {
      uVar16 = uVar23;
    }
    uVar43 = FUN_032bd1d4(puVar20,uVar16,0xc,uVar43,uVar11,puVar3);
    *(undefined8 *)(param_3 + 0xc) = uVar43;
  }
  uVar23 = *puVar4;
  puVar5 = param_3 + 0x1d;
  if ((int)(uVar23 & 0x3fffffff) < (int)uVar41) {
    uVar43 = *(undefined8 *)(param_3 + 6);
    uVar11 = param_3[8];
    if (0x3fffffff < (int)uVar41) {
      FUN_032bd0a8(uVar41);
      uVar23 = *puVar4;
    }
    uVar23 = (uVar23 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar23) {
      uVar23 = 0x3fffffff;
    }
    uVar16 = uVar41;
    if ((int)uVar41 <= (int)uVar23) {
      uVar16 = uVar23;
    }
    uVar43 = FUN_032bd1d4(PTR_PTR_0434a080,uVar16,0x38,uVar43,uVar11,puVar4);
    *(undefined8 *)(param_3 + 6) = uVar43;
  }
  uVar23 = *puVar5;
  if ((int)(uVar23 & 0x3fffffff) < (int)uVar41) {
    uVar43 = *(undefined8 *)(param_3 + 0x1a);
    uVar11 = param_3[0x1c];
    if (0x3fffffff < (int)uVar41) {
      FUN_032bd0a8(uVar41);
      uVar23 = *puVar5;
    }
    uVar23 = (uVar23 & 0x3fffffff) * 2;
    if (uVar23 < 0x3fffffff) {
      if ((int)uVar41 <= (int)uVar23) {
LAB_0319ff98:
        uVar41 = uVar23;
      }
    }
    else {
      uVar23 = 0x3fffffff;
      if ((int)uVar41 < 0x40000000) goto LAB_0319ff98;
    }
    uVar43 = FUN_032bd1d4(puVar20,uVar41,8,uVar43,uVar11,puVar5);
    *(undefined8 *)(param_3 + 0x1a) = uVar43;
  }
  iVar22 = 0;
  do {
    uVar41 = *(uint *)(param_4 + 1);
    if (0 < (int)uVar41) {
      lVar25 = 0;
      uVar28 = 0;
      iVar38 = 0;
      iVar27 = uVar41 - 1;
      do {
        lVar32 = *param_4;
        pfVar1 = (float *)(lVar32 + (long)iVar27 * 8);
        pfVar6 = (float *)(lVar32 + lVar25);
        fVar45 = *pfVar6;
        fVar44 = *pfVar1;
        if (fVar44 - fVar45 != 0.0) {
          iVar39 = param_3[8];
          uVar8 = uVar28;
          pfVar17 = pfVar6;
          uVar18 = (long)iVar27;
          if (fVar44 >= fVar45) {
            uVar8 = (long)iVar27;
            pfVar17 = pfVar1;
            pfVar1 = pfVar6;
            uVar18 = uVar28;
          }
          fVar12 = *pfVar17;
          fVar13 = *(float *)(lVar32 + uVar18 * 8 + 4);
          fVar14 = *pfVar1;
          fVar37 = *(float *)(lVar32 + uVar8 * 8 + 4);
          fVar46 = fVar12 - fVar14;
          if ((fVar46 == 0.0) ||
             (fVar46 = (fVar37 - fVar13) / fVar46, fVar36 = fVar13, 10000.0 < ABS(fVar46))) {
            fVar46 = 0.0;
            fVar36 = fVar37;
            if (fVar44 < fVar45 == fVar37 <= fVar13) {
              fVar36 = fVar13;
            }
            fVar37 = fVar36;
          }
          piVar34 = (int *)(*(long *)(param_3 + 6) + (long)iVar39 * 0x38);
          *piVar34 = iVar39;
          *(bool *)(piVar34 + 1) = fVar44 < fVar45;
          piVar34[2] = (int)fVar14;
          piVar34[3] = (int)fVar36;
          piVar34[4] = (int)fVar12;
          piVar34[5] = (int)fVar37;
          piVar34[6] = (int)fVar46;
          *(undefined1 *)((long)piVar34 + 7) = local_62;
          *(undefined2 *)((long)piVar34 + 5) = local_64;
          iVar38 = iVar38 + 1;
          *(undefined8 *)(piVar34 + 7) = local_84;
          piVar34[0xb] = local_74;
          *(undefined8 *)(piVar34 + 9) = local_7c;
          piVar34[0xc] = 0;
          piVar34[0xd] = 0;
          param_3[8] = iVar39 + 1;
        }
        iVar27 = (int)uVar28;
        uVar28 = uVar28 + 1;
        lVar25 = lVar25 + 8;
      } while (uVar41 != uVar28);
      iVar27 = iVar38 + iVar22;
      if (iVar38 < 1) {
        iVar22 = iVar27;
      }
      else {
        iVar39 = iVar22;
        do {
          lVar25 = *(long *)(param_3 + 6);
          iVar10 = param_3[0x12];
          uVar23 = param_3[0x13];
          uVar41 = iVar10 + 1;
          iVar9 = iVar22;
          if (iVar39 + 1 != iVar27) {
            iVar9 = iVar39 + 1;
          }
          if (iVar10 < (int)(uVar23 & 0x3fffffff)) {
            lVar32 = *(long *)(param_3 + 0x10);
          }
          else {
            uVar43 = *(undefined8 *)(param_3 + 0x10);
            if (0x3ffffffe < iVar10) {
              FUN_032bd0a8(uVar41);
              uVar23 = *puVar2;
            }
            uVar23 = (uVar23 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar23) {
              uVar23 = 0x3fffffff;
            }
            uVar16 = uVar41;
            if ((int)uVar41 <= (int)uVar23) {
              uVar16 = uVar23;
            }
            lVar32 = FUN_032bd1d4(puVar20,uVar16,8,uVar43,iVar10,puVar2);
            *(long *)(param_3 + 0x10) = lVar32;
          }
          puVar7 = (undefined4 *)(lVar32 + (long)iVar10 * 8);
          param_3[0x12] = uVar41;
          puVar7[1] = param_3[0xe];
          iVar10 = param_3[0xe];
          uVar23 = param_3[0xf];
          lVar42 = (long)iVar10;
          uVar41 = iVar10 + 1;
          lVar40 = (long)iVar39;
          lVar32 = (long)iVar9;
          if (iVar10 < (int)(uVar23 & 0x3fffffff)) {
            lVar21 = *(long *)(param_3 + 0xc);
          }
          else {
            uVar43 = *(undefined8 *)(param_3 + 0xc);
            if (0x3ffffffe < iVar10) {
              FUN_032bd0a8(uVar41);
              uVar23 = *puVar3;
            }
            uVar23 = (uVar23 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar23) {
              uVar23 = 0x3fffffff;
            }
            uVar16 = uVar41;
            if ((int)uVar41 <= (int)uVar23) {
              uVar16 = uVar23;
            }
            lVar21 = FUN_032bd1d4(puVar20,uVar16,0xc,uVar43,iVar10,puVar3);
            *(long *)(param_3 + 0xc) = lVar21;
          }
          param_3[0xe] = uVar41;
          pbVar26 = (byte *)(lVar25 + lVar32 * 0x38 + 4);
          bVar15 = *pbVar26;
          puVar31 = (undefined4 *)(lVar21 + lVar42 * 0xc);
          pbVar30 = (byte *)(lVar25 + lVar40 * 0x38 + 4);
          if (bVar15 == *pbVar30) {
            if (bVar15 == 0) {
              lVar25 = lVar25 + lVar32 * 0x38;
              *(undefined4 **)(lVar25 + 0x28) = puVar31;
              lVar21 = lVar21 + lVar42 * 0xc;
              *puVar31 = 1;
              *(int *)(lVar21 + 4) = iVar9;
              *(int *)(lVar21 + 8) = iVar39;
            }
            else {
              lVar25 = lVar25 + lVar40 * 0x38;
              *(undefined4 **)(lVar25 + 0x28) = puVar31;
              lVar21 = lVar21 + lVar42 * 0xc;
              *puVar31 = 1;
              *(int *)(lVar21 + 4) = iVar39;
              *(int *)(lVar21 + 8) = iVar9;
            }
LAB_0319fc60:
            puVar31 = (undefined4 *)(lVar25 + 0x10);
          }
          else {
            piVar29 = (int *)(lVar25 + (long)iVar39 * 0x38);
            piVar34 = (int *)(lVar25 + (long)iVar9 * 0x38);
            if (bVar15 == 0) {
              lVar33 = lVar25 + lVar40 * 0x38;
              *(undefined4 **)(lVar33 + 0x28) = puVar31;
              lVar35 = lVar25 + lVar32 * 0x38;
              *(undefined4 **)(lVar35 + 0x28) = puVar31;
              *puVar31 = 3;
              fVar44 = *(float *)(lVar33 + 0x14);
              fVar45 = *(float *)(lVar35 + 0x14);
              if (fVar44 == fVar45) {
                fVar44 = *(float *)(lVar25 + lVar40 * 0x38 + 0x18);
                fVar45 = *(float *)(lVar25 + lVar32 * 0x38 + 0x18);
                if (fVar44 != fVar45) {
                  piVar24 = (int *)(lVar21 + lVar42 * 0xc + 4);
                  if (fVar44 <= fVar45) goto LAB_0319fe0c;
                  goto LAB_0319fd34;
                }
                if (*pbVar30 != *pbVar26) {
                  piVar24 = (int *)(lVar21 + lVar42 * 0xc + 4);
                  if (*pbVar26 <= *pbVar30) goto LAB_0319fe0c;
                  goto LAB_0319fd34;
                }
                piVar24 = (int *)(lVar21 + lVar42 * 0xc + 4);
                if (*piVar29 < *piVar34) goto LAB_0319fd34;
LAB_0319fe0c:
                *piVar24 = iVar9;
              }
              else {
                piVar24 = (int *)(lVar21 + lVar42 * 0xc + 4);
                if (fVar45 <= fVar44) goto LAB_0319fe0c;
LAB_0319fd34:
                *piVar24 = iVar39;
                iVar39 = iVar9;
              }
              *(int *)(lVar21 + lVar42 * 0xc + 8) = iVar39;
              lVar25 = lVar25 + lVar32 * 0x38;
              goto LAB_0319fc60;
            }
            *puVar31 = 2;
            fVar44 = *(float *)(lVar25 + lVar40 * 0x38 + 0xc);
            fVar45 = *(float *)(lVar25 + lVar32 * 0x38 + 0xc);
            if (fVar44 == fVar45) {
              fVar44 = *(float *)(lVar25 + lVar40 * 0x38 + 0x18);
              fVar45 = *(float *)(lVar25 + lVar32 * 0x38 + 0x18);
              if (fVar44 != fVar45) goto LAB_0319fcbc;
              if (*pbVar30 == *pbVar26) {
                piVar24 = (int *)(lVar21 + lVar42 * 0xc + 4);
                if (*piVar34 <= *piVar29) goto LAB_0319fccc;
                goto LAB_0319fe00;
              }
              piVar24 = (int *)(lVar21 + lVar42 * 0xc + 4);
              if (*pbVar30 < *pbVar26) goto LAB_0319fe00;
LAB_0319fccc:
              *piVar24 = iVar9;
            }
            else {
LAB_0319fcbc:
              piVar24 = (int *)(lVar21 + lVar42 * 0xc + 4);
              if (fVar45 <= fVar44) goto LAB_0319fccc;
LAB_0319fe00:
              *piVar24 = iVar39;
              iVar39 = iVar9;
            }
            *(int *)(lVar21 + lVar42 * 0xc + 8) = iVar39;
            puVar31 = (undefined4 *)(lVar25 + lVar32 * 0x38 + 8);
          }
          iVar38 = iVar38 + -1;
          *puVar7 = *puVar31;
          iVar39 = iVar9;
        } while (iVar38 != 0);
        iVar22 = iVar27;
      }
    }
    param_4 = param_4 + 2;
  } while (param_4 != param_5);
LAB_0319fe34:
  if ((int)param_3[0x12] < 2) {
    return;
  }
  FUN_031a22a0(*(undefined8 *)(param_3 + 0x10),0,param_3[0x12] + -1);
  return;
}


