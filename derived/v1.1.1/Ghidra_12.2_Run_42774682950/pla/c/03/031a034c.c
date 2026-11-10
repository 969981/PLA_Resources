/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a034c; name: FUN_031a034c
 */


undefined8 FUN_031a034c(long param_1)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined4 *puVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  int iVar11;
  undefined4 *puVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  
  iVar3 = *(int *)(param_1 + 0x58);
  iVar11 = *(int *)(param_1 + 0x28);
  if (iVar3 == 0) {
    if (iVar11 == *(int *)(param_1 + 0x48)) {
      return 0;
    }
    *(int *)(param_1 + 0x28) = iVar11 + 1;
    pfVar1 = (float *)(*(long *)(param_1 + 0x40) + (long)iVar11 * 8);
    fVar16 = *pfVar1;
    fVar15 = *(float *)(param_1 + 0x60);
    if (*(float *)(param_1 + 0x60) <= fVar16) {
      fVar15 = fVar16;
    }
    *(float *)(param_1 + 0x60) = fVar15;
    fVar15 = pfVar1[1];
LAB_031a0398:
    iVar3 = *(int *)(*(long *)(param_1 + 0x30) + (long)(int)fVar15 * 0xc);
    if (iVar3 == 1) {
      FUN_031a0940();
    }
    else if (iVar3 == 2) {
      FUN_031a113c();
    }
    else if (iVar3 == 3) {
      FUN_031a16c0();
    }
  }
  else {
    plVar9 = *(long **)(param_1 + 0x50);
    lVar14 = *plVar9;
    if (iVar11 == *(int *)(param_1 + 0x48)) {
      if (iVar3 + -1 == 0) {
        *(undefined4 *)(param_1 + 0x58) = 0;
      }
      else {
        puVar7 = (undefined4 *)plVar9[iVar3 + -1];
        fVar15 = (float)puVar7[1];
        fVar16 = *(float *)(lVar14 + 4);
        *plVar9 = (long)puVar7;
        *puVar7 = 0;
        iVar3 = *(int *)(param_1 + 0x58) + -1;
        *(int *)(param_1 + 0x58) = iVar3;
        if (fVar16 <= fVar15) {
          if (iVar3 < 3) {
            uVar10 = 1;
            if (1 < iVar3) goto LAB_031a0600;
          }
          else {
            uVar8 = 2;
            if (*(float *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 4) <
                *(float *)(*(long *)(*(long *)(param_1 + 0x50) + 0x10) + 4)) {
              uVar8 = 1;
            }
            uVar10 = (ulong)uVar8;
            if ((int)uVar8 < iVar3) {
LAB_031a0600:
              iVar11 = 0;
              do {
                lVar13 = *(long *)(param_1 + 0x50);
                iVar5 = (int)uVar10;
                lVar6 = *(long *)(lVar13 + (long)iVar5 * 8);
                puVar7 = *(undefined4 **)(lVar13 + (long)iVar11 * 8);
                if ((float)puVar7[1] <= *(float *)(lVar6 + 4)) break;
                *(long *)(lVar13 + (long)iVar11 * 8) = lVar6;
                *(undefined4 **)(lVar13 + (long)iVar5 * 8) = puVar7;
                puVar12 = *(undefined4 **)(lVar13 + (long)iVar11 * 8);
                uVar4 = *puVar12;
                *puVar12 = *puVar7;
                *puVar7 = uVar4;
                uVar10 = (long)(iVar5 << 1) | 1;
                lVar13 = (long)(iVar5 << 1) + 2;
                uVar8 = (uint)lVar13;
                if ((int)uVar8 < *(int *)(param_1 + 0x58)) {
                  uVar2 = (uint)uVar10;
                  if (*(float *)(*(long *)(*(long *)(param_1 + 0x50) + lVar13 * 8) + 4) <=
                      *(float *)(*(long *)(*(long *)(param_1 + 0x50) + uVar10 * 8) + 4)) {
                    uVar2 = uVar8;
                  }
                  uVar10 = (ulong)uVar2;
                }
                iVar11 = iVar5;
              } while ((int)uVar10 < iVar3);
            }
          }
        }
      }
      fVar15 = *(float *)(param_1 + 0x60);
      if (*(float *)(param_1 + 0x60) <= *(float *)(lVar14 + 4)) {
        fVar15 = *(float *)(lVar14 + 4);
      }
      *(float *)(param_1 + 0x60) = fVar15;
      FUN_031a070c(param_1,lVar14);
      lVar13 = tpidr_el0;
      lVar6 = *(long *)(lVar13 + 0x38d490);
      if (lVar6 == 0) {
LAB_031a0684:
        lVar6 = FUN_0333d16c(0,1);
        *(long *)(lVar13 + 0x38d490) = lVar6;
      }
    }
    else {
      pfVar1 = (float *)(*(long *)(param_1 + 0x40) + (long)iVar11 * 8);
      fVar15 = *(float *)(lVar14 + 4);
      if (*pfVar1 <= fVar15) {
        *(int *)(param_1 + 0x28) = iVar11 + 1;
        fVar15 = *(float *)(param_1 + 0x60);
        if (*(float *)(param_1 + 0x60) <= *pfVar1) {
          fVar15 = *pfVar1;
        }
        *(float *)(param_1 + 0x60) = fVar15;
        fVar15 = pfVar1[1];
        goto LAB_031a0398;
      }
      if (iVar3 + -1 == 0) {
        *(undefined4 *)(param_1 + 0x58) = 0;
      }
      else {
        puVar7 = (undefined4 *)plVar9[iVar3 + -1];
        fVar16 = (float)puVar7[1];
        *plVar9 = (long)puVar7;
        *puVar7 = 0;
        iVar3 = *(int *)(param_1 + 0x58) + -1;
        *(int *)(param_1 + 0x58) = iVar3;
        if (fVar15 <= fVar16) {
          if (iVar3 < 3) {
            uVar10 = 1;
            if (1 < iVar3) goto LAB_031a04d4;
          }
          else {
            uVar8 = 2;
            if (*(float *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 4) <
                *(float *)(*(long *)(*(long *)(param_1 + 0x50) + 0x10) + 4)) {
              uVar8 = 1;
            }
            uVar10 = (ulong)uVar8;
            if ((int)uVar8 < iVar3) {
LAB_031a04d4:
              iVar11 = 0;
              do {
                lVar13 = *(long *)(param_1 + 0x50);
                iVar5 = (int)uVar10;
                lVar6 = *(long *)(lVar13 + (long)iVar5 * 8);
                puVar7 = *(undefined4 **)(lVar13 + (long)iVar11 * 8);
                if ((float)puVar7[1] <= *(float *)(lVar6 + 4)) break;
                *(long *)(lVar13 + (long)iVar11 * 8) = lVar6;
                *(undefined4 **)(lVar13 + (long)iVar5 * 8) = puVar7;
                puVar12 = *(undefined4 **)(lVar13 + (long)iVar11 * 8);
                uVar4 = *puVar12;
                *puVar12 = *puVar7;
                *puVar7 = uVar4;
                uVar10 = (long)(iVar5 << 1) | 1;
                lVar13 = (long)(iVar5 << 1) + 2;
                uVar8 = (uint)lVar13;
                if ((int)uVar8 < *(int *)(param_1 + 0x58)) {
                  uVar2 = (uint)uVar10;
                  if (*(float *)(*(long *)(*(long *)(param_1 + 0x50) + lVar13 * 8) + 4) <=
                      *(float *)(*(long *)(*(long *)(param_1 + 0x50) + uVar10 * 8) + 4)) {
                    uVar2 = uVar8;
                  }
                  uVar10 = (ulong)uVar2;
                }
                iVar11 = iVar5;
              } while ((int)uVar10 < iVar3);
            }
          }
        }
      }
      fVar15 = *(float *)(param_1 + 0x60);
      if (*(float *)(param_1 + 0x60) <= *(float *)(lVar14 + 4)) {
        fVar15 = *(float *)(lVar14 + 4);
      }
      *(float *)(param_1 + 0x60) = fVar15;
      FUN_031a070c(param_1,lVar14);
      lVar13 = tpidr_el0;
      lVar6 = *(long *)(lVar13 + 0x38d490);
      if (lVar6 == 0) goto LAB_031a0684;
    }
    plVar9 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
    (**(code **)(*plVar9 + 0x18))(plVar9,lVar14,0x28);
  }
  return 1;
}


