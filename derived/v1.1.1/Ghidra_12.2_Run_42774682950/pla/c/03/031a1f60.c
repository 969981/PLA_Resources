/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a1f60; name: FUN_031a1f60
 */


void FUN_031a1f60(float *param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  plVar1 = (long *)(*(long *)(param_1 + 0x1a) + (long)param_2 * 8);
  fVar6 = param_1[0x18];
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  fVar5 = *param_1;
  fVar7 = *(float *)(lVar2 + 0x20);
  uVar4 = (uint)(fVar6 <= fVar5);
  if (fVar5 < fVar7) {
    uVar4 = 0xffffffff;
  }
  if (uVar4 == 0xffffffff) {
    fVar11 = *(float *)(lVar2 + 8);
    fVar9 = *(float *)(lVar2 + 0xc);
    fVar16 = fVar7 - fVar11;
    fVar14 = *(float *)(lVar3 + 8);
    fVar12 = *(float *)(lVar3 + 0xc);
    fVar10 = *(float *)(lVar2 + 0x18);
    fVar13 = *(float *)(lVar3 + 0x18);
    fVar15 = fVar7 - fVar14;
    fVar8 = param_1[1];
    uVar4 = (uint)(fVar12 + fVar13 * fVar15 <= fVar8);
    if (fVar8 < fVar9 + fVar10 * fVar16) {
      uVar4 = 0xffffffff;
    }
    if (uVar4 == 0xffffffff) {
      fVar15 = -((fVar11 - fVar5) + fVar10 * (fVar9 - fVar8)) / (fVar10 * fVar10 + 1.0);
      fVar7 = fVar6 - fVar11;
      if (fVar15 <= fVar6 - fVar11) {
        fVar7 = fVar15;
      }
      if (fVar16 <= fVar15) {
        fVar16 = fVar7;
      }
      goto LAB_031a2124;
    }
    if (uVar4 == 1) {
      fVar16 = -((fVar14 - fVar5) + fVar13 * (fVar12 - fVar8)) / (fVar13 * fVar13 + 1.0);
      fVar7 = fVar6 - fVar14;
      if (fVar16 <= fVar6 - fVar14) {
        fVar7 = fVar16;
      }
      if (fVar15 <= fVar16) {
        fVar15 = fVar7;
      }
      fVar14 = fVar14 + fVar15;
      goto LAB_031a2194;
    }
    fVar5 = (fVar7 - fVar5) * (fVar7 - fVar5) + (fVar8 - fVar8) * (fVar8 - fVar8);
    if (param_1[4] <= fVar5) {
      return;
    }
    param_1[2] = fVar7;
LAB_031a2008:
    param_1[3] = fVar8;
  }
  else {
    if (uVar4 == 1) {
      fVar11 = *(float *)(lVar2 + 8);
      fVar9 = *(float *)(lVar2 + 0xc);
      fVar15 = fVar6 - fVar11;
      fVar14 = *(float *)(lVar3 + 8);
      fVar12 = *(float *)(lVar3 + 0xc);
      fVar10 = *(float *)(lVar2 + 0x18);
      fVar13 = *(float *)(lVar3 + 0x18);
      fVar16 = fVar6 - fVar14;
      fVar8 = param_1[1];
      uVar4 = (uint)(fVar12 + fVar13 * fVar16 <= fVar8);
      if (fVar8 < fVar9 + fVar10 * fVar15) {
        uVar4 = 0xffffffff;
      }
      if (uVar4 == 0xffffffff) {
        fVar6 = -((fVar11 - fVar5) + fVar10 * (fVar9 - fVar8)) / (fVar10 * fVar10 + 1.0);
        if (fVar6 <= fVar15) {
          fVar15 = fVar6;
        }
        fVar16 = fVar7 - fVar11;
        if (fVar7 - fVar11 <= fVar6) {
          fVar16 = fVar15;
        }
        goto LAB_031a2124;
      }
      if (uVar4 != 1) {
        fVar5 = (fVar6 - fVar5) * (fVar6 - fVar5) + (fVar8 - fVar8) * (fVar8 - fVar8);
        if (param_1[4] <= fVar5) {
          return;
        }
        param_1[2] = fVar6;
        goto LAB_031a2008;
      }
      fVar6 = -((fVar14 - fVar5) + fVar13 * (fVar12 - fVar8)) / (fVar13 * fVar13 + 1.0);
      if (fVar6 <= fVar16) {
        fVar16 = fVar6;
      }
      fVar15 = fVar7 - fVar14;
      if (fVar7 - fVar14 <= fVar6) {
        fVar15 = fVar16;
      }
LAB_031a2214:
      fVar14 = fVar14 + fVar15;
LAB_031a2194:
      fVar12 = fVar12 + fVar13 * fVar15;
    }
    else {
      fVar11 = *(float *)(lVar2 + 8);
      fVar9 = *(float *)(lVar2 + 0xc);
      fVar10 = *(float *)(lVar2 + 0x18);
      fVar14 = *(float *)(lVar3 + 8);
      fVar12 = *(float *)(lVar3 + 0xc);
      fVar13 = *(float *)(lVar3 + 0x18);
      fVar8 = param_1[1];
      uVar4 = (uint)(fVar12 + fVar13 * (fVar5 - fVar14) <= fVar8);
      if (fVar8 < fVar9 + fVar10 * (fVar5 - fVar11)) {
        uVar4 = 0xffffffff;
      }
      if (uVar4 != 0xffffffff) {
        if (uVar4 != 1) {
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)param_1;
          param_1[4] = 0.0;
          goto LAB_031a2010;
        }
        fVar9 = -((fVar14 - fVar5) + fVar13 * (fVar12 - fVar8)) / (fVar13 * fVar13 + 1.0);
        fVar16 = fVar6 - fVar14;
        if (fVar9 <= fVar6 - fVar14) {
          fVar16 = fVar9;
        }
        fVar15 = fVar7 - fVar14;
        if (fVar7 - fVar14 <= fVar9) {
          fVar15 = fVar16;
        }
        goto LAB_031a2214;
      }
      fVar14 = -((fVar11 - fVar5) + fVar10 * (fVar9 - fVar8)) / (fVar10 * fVar10 + 1.0);
      fVar15 = fVar6 - fVar11;
      if (fVar14 <= fVar6 - fVar11) {
        fVar15 = fVar14;
      }
      fVar16 = fVar7 - fVar11;
      if (fVar7 - fVar11 <= fVar14) {
        fVar16 = fVar15;
      }
LAB_031a2124:
      fVar14 = fVar11 + fVar16;
      fVar12 = fVar9 + fVar10 * fVar16;
    }
    fVar5 = (fVar14 - fVar5) * (fVar14 - fVar5) + (fVar12 - fVar8) * (fVar12 - fVar8);
    if (param_1[4] <= fVar5) {
      return;
    }
    param_1[2] = fVar14;
    param_1[3] = fVar12;
  }
  param_1[4] = fVar5;
LAB_031a2010:
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}


