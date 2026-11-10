/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031de730; name: FUN_031de730
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_031de730(float param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 long *param_6,long *param_7)

{
  int iVar1;
  float fVar2;
  ulong uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float unaff_w25;
  float unaff_w27;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float local_a0;
  float fStack_9c;
  
  bVar4 = param_2 == param_3;
  if (!bVar4) {
    unaff_w27 = *param_2;
    unaff_w25 = param_2[1];
    unaff_s12 = unaff_w27;
    unaff_s13 = unaff_w25;
  }
  uVar3 = (long)param_4 - (long)param_5;
  if (uVar3 != 0) {
    fStack_9c = 1.0 - param_4[1];
    local_a0 = 1.0 - *param_4;
    unaff_s11 = fStack_9c;
    unaff_s10 = local_a0;
  }
  iVar1 = (int)((ulong)((long)param_3 - (long)param_2) >> 3) + (int)(uVar3 >> 2) + 2;
  if ((int)(*(uint *)((long)param_6 + 0xc) & 0x3fffffff) < iVar1) {
    lVar7 = FUN_031e0094(PTR_PTR_0434a090,iVar1,*param_6,(int)param_6[1]);
    *param_6 = lVar7;
  }
  iVar1 = (int)((ulong)((long)param_3 - (long)param_2) >> 2) + (int)(uVar3 >> 3) + 2;
  if ((int)(*(uint *)((long)param_7 + 0xc) & 0x3fffffff) < iVar1) {
    lVar7 = FUN_031e0094(PTR_PTR_0434a090,iVar1,*param_7,(int)param_7[1]);
    *param_7 = lVar7;
  }
  fVar9 = 0.0;
  if ((param_2 != param_3) && (unaff_s13 <= param_1)) {
    fVar9 = 0.0;
    pfVar12 = param_2;
    unaff_w27 = unaff_s12;
    unaff_w25 = unaff_s13;
    do {
      lVar7 = param_6[1];
      *(int *)(param_6 + 1) = (int)lVar7 + 1;
      pfVar13 = (float *)(*param_6 + (long)(int)lVar7 * 0x10);
      bVar4 = param_3 + -2 == pfVar12;
      *pfVar13 = unaff_w27;
      pfVar13[1] = unaff_w25;
      pfVar13[2] = fVar9;
      pfVar13[3] = -NAN;
      param_2 = pfVar12 + 2;
      unaff_w27 = *param_2;
      unaff_w25 = pfVar12[3];
      fVar9 = (float)((int)fVar9 + 1);
      if (bVar4) break;
      pfVar12 = param_2;
    } while (unaff_w25 <= param_1);
  }
  bVar5 = param_4 != param_5;
  fVar8 = 0.0;
  if (unaff_s10 <= param_1) {
    if (param_4 != param_5) {
      fVar8 = 0.0;
      pfVar12 = param_4;
      fStack_9c = unaff_s11;
      local_a0 = unaff_s10;
      do {
        lVar7 = param_7[1];
        *(int *)(param_7 + 1) = (int)lVar7 + 1;
        pfVar13 = (float *)(*param_7 + (long)(int)lVar7 * 0x10);
        bVar5 = param_5 + 2 != pfVar12;
        *pfVar13 = fStack_9c;
        pfVar13[1] = local_a0;
        pfVar13[2] = fVar8;
        pfVar13[3] = -NAN;
        param_4 = pfVar12 + -2;
        local_a0 = 1.0 - *param_4;
        fStack_9c = 1.0 - pfVar12[-1];
        fVar8 = (float)((int)fVar8 + 1);
        bVar6 = param_5 + 2 != pfVar12;
        pfVar12 = param_4;
      } while (local_a0 <= param_1 && bVar6);
      unaff_s11 = fStack_9c;
      unaff_s10 = local_a0;
    }
  }
  if ((bVar4) || (!bVar5)) {
joined_r0x031dee48:
    pfVar13 = param_4;
    if (param_2 != param_3) {
      pfVar12 = (float *)(*param_6 + (long)(int)param_6[1] * 0x10);
      *(int *)(param_6 + 1) = (int)param_6[1] + 1;
      *pfVar12 = unaff_w27;
      pfVar12[1] = unaff_w25;
      pfVar12[2] = fVar9;
      pfVar12[3] = -NAN;
      while (param_2 = param_2 + 2, param_2 != param_3) {
        fVar9 = (float)((int)fVar9 + 1);
        lVar7 = param_6[1];
        fVar14 = *param_2;
        fVar15 = param_2[1];
        *(int *)(param_6 + 1) = (int)lVar7 + 1;
        pfVar12 = (float *)(*param_6 + (long)(int)lVar7 * 0x10);
        pfVar12[2] = fVar9;
        pfVar12[3] = -NAN;
        *pfVar12 = fVar14;
        pfVar12[1] = fVar15;
      }
    }
joined_r0x031dee5c:
    if (pfVar13 != param_5) {
      pfVar12 = (float *)(*param_7 + (long)(int)param_7[1] * 0x10);
      *(int *)(param_7 + 1) = (int)param_7[1] + 1;
      *pfVar12 = fStack_9c;
      pfVar12[1] = local_a0;
      pfVar12[2] = fVar8;
      pfVar12[3] = -NAN;
      while (pfVar13 = pfVar13 + -2, pfVar13 != param_5) {
        fVar8 = (float)((int)fVar8 + 1);
        lVar7 = param_7[1];
        fVar9 = *pfVar13;
        fVar14 = pfVar13[1];
        *(int *)(param_7 + 1) = (int)lVar7 + 1;
        pfVar12 = (float *)(*param_7 + (long)(int)lVar7 * 0x10);
        pfVar12[2] = fVar8;
        pfVar12[3] = -NAN;
        *pfVar12 = 1.0 - fVar14;
        pfVar12[1] = 1.0 - fVar9;
      }
    }
    return;
  }
  fVar14 = -param_1;
  if ((unaff_w27 <= fVar14) && (unaff_s11 <= fVar14)) {
    lVar7 = param_6[1];
    *(int *)(param_6 + 1) = (int)lVar7 + 1;
    pfVar12 = (float *)(*param_6 + (long)(int)lVar7 * 0x10);
    *pfVar12 = unaff_w27;
    pfVar12[1] = 0.0;
    pfVar12[2] = fVar9;
    pfVar12[3] = -NAN;
    lVar7 = param_7[1];
    *(int *)(param_7 + 1) = (int)lVar7 + 1;
    pfVar12 = (float *)(*param_7 + (long)(int)lVar7 * 0x10);
    *pfVar12 = unaff_s11;
    unaff_s11 = 0.0;
    fStack_9c = 0.0;
    unaff_w27 = 0.0;
    pfVar12[1] = 0.0;
    pfVar12[2] = fVar8;
    pfVar12[3] = -NAN;
  }
  fVar15 = param_1 + 1.0;
  uVar10 = (uint)(param_1 < unaff_w27 - unaff_s11);
  if (unaff_w27 - unaff_s11 < fVar14) {
    uVar10 = 0xffffffff;
  }
  pfVar12 = param_2;
  pfVar13 = param_4;
LAB_031deab4:
  do {
    param_2 = pfVar12;
    while( true ) {
      param_4 = pfVar13;
      if (uVar10 != 0xffffffff) break;
      if (fVar15 < fStack_9c) goto joined_r0x031dee48;
      pfVar12 = (float *)(*param_6 + (long)(int)param_6[1] * 0x10);
      *(int *)(param_6 + 1) = (int)param_6[1] + 1;
      *pfVar12 = unaff_w27;
      if (fStack_9c + param_1 < unaff_w25) {
        uVar10 = 0;
        pfVar12[1] = fStack_9c;
        pfVar12[2] = fVar9;
        pfVar12[3] = -NAN;
        unaff_w27 = fStack_9c;
        break;
      }
      pfVar12[1] = unaff_w25;
      pfVar12[2] = fVar9;
      pfVar12[3] = -NAN;
      if (param_2 + 2 == param_3) goto joined_r0x031dee5c;
      unaff_w27 = param_2[2];
      unaff_w25 = param_2[3];
      fVar9 = (float)((int)fVar9 + 1);
      uVar10 = (uint)(param_1 < unaff_w27 - fStack_9c);
      if (unaff_w27 - fStack_9c < fVar14) {
        uVar10 = 0xffffffff;
      }
      param_2 = param_2 + 2;
    }
    pfVar12 = param_2;
    if (uVar10 == 1) {
      if (fVar15 < unaff_w27) goto joined_r0x031dee48;
      lVar7 = param_7[1];
      *(int *)(param_7 + 1) = (int)lVar7 + 1;
      pfVar11 = (float *)(*param_7 + (long)(int)lVar7 * 0x10);
      *pfVar11 = fStack_9c;
      if (unaff_w27 + param_1 < unaff_s10) {
        uVar10 = 0;
        pfVar11[1] = unaff_w27;
        pfVar11[2] = fVar8;
        pfVar11[3] = -NAN;
        fStack_9c = unaff_w27;
      }
      else {
        pfVar11[1] = unaff_s10;
        pfVar11[2] = fVar8;
        pfVar11[3] = -NAN;
        if (pfVar13 + -2 == param_5) {
LAB_031dee2c:
          fVar8 = (float)((int)fVar8 + 1);
          param_4 = param_5;
          goto joined_r0x031dee48;
        }
        fStack_9c = 1.0 - pfVar13[-1];
        unaff_s10 = 1.0 - pfVar13[-2];
        uVar10 = (uint)(param_1 < unaff_w27 - fStack_9c);
        if (unaff_w27 - fStack_9c < fVar14) {
          uVar10 = 0xffffffff;
        }
        pfVar13 = pfVar13 + -2;
        local_a0 = unaff_s10;
        fVar8 = (float)((int)fVar8 + 1);
      }
      goto LAB_031deab4;
    }
    if ((fVar15 < unaff_s10) && (fVar15 < unaff_w25)) {
      fVar15 = *(float *)(param_6 + 1);
      fVar14 = *(float *)(param_7 + 1);
      *(int *)(param_6 + 1) = (int)fVar15 + 1;
      pfVar12 = (float *)(*param_6 + (long)(int)fVar15 * 0x10);
      *pfVar12 = unaff_w27;
      pfVar12[2] = fVar9;
      pfVar12[3] = fVar14;
      unaff_w27 = 1.0;
      pfVar12[1] = 1.0;
      pfVar12 = (float *)(*param_7 + (long)(int)param_7[1] * 0x10);
      *(int *)(param_7 + 1) = (int)param_7[1] + 1;
      *pfVar12 = fStack_9c;
      pfVar12[1] = 1.0;
      fStack_9c = 1.0;
      pfVar12[2] = fVar8;
      pfVar12[3] = fVar15;
      goto joined_r0x031dee48;
    }
    uVar10 = (uint)(param_1 < unaff_w25 - unaff_s10);
    if (unaff_w25 - unaff_s10 < fVar14) {
      uVar10 = 0xffffffff;
    }
    if (uVar10 == 0xffffffff) {
      fVar2 = *(float *)(param_6 + 1);
      fVar16 = *(float *)(param_7 + 1);
      *(int *)(param_6 + 1) = (int)fVar2 + 1;
      pfVar12 = (float *)(*param_6 + (long)(int)fVar2 * 0x10);
      *pfVar12 = unaff_w27;
      pfVar12[1] = unaff_w25;
      pfVar12[2] = fVar9;
      pfVar12[3] = fVar16;
      pfVar12 = (float *)(*param_7 + (long)(int)param_7[1] * 0x10);
      *(int *)(param_7 + 1) = (int)param_7[1] + 1;
      *pfVar12 = fStack_9c;
      pfVar12[1] = unaff_w25;
      pfVar12[2] = fVar8;
      pfVar12[3] = fVar2;
      fStack_9c = unaff_w25;
      if (param_2 + 2 == param_3) goto joined_r0x031dee5c;
      fVar9 = (float)((int)fVar9 + 1);
      uVar10 = (uint)(unaff_w25 + param_1 < param_2[2]);
      pfVar12 = param_2 + 2;
      unaff_w27 = param_2[2];
      unaff_w25 = param_2[3];
    }
    else if (uVar10 == 1) {
      fVar2 = *(float *)(param_6 + 1);
      fVar16 = *(float *)(param_7 + 1);
      *(int *)(param_6 + 1) = (int)fVar2 + 1;
      pfVar11 = (float *)(*param_6 + (long)(int)fVar2 * 0x10);
      *pfVar11 = unaff_w27;
      pfVar11[1] = unaff_s10;
      pfVar11[2] = fVar9;
      pfVar11[3] = fVar16;
      pfVar11 = (float *)(*param_7 + (long)(int)param_7[1] * 0x10);
      *(int *)(param_7 + 1) = (int)param_7[1] + 1;
      *pfVar11 = fStack_9c;
      pfVar11[1] = unaff_s10;
      pfVar11[2] = fVar8;
      pfVar11[3] = fVar2;
      unaff_w27 = local_a0;
      if (pfVar13 + -2 == param_5) goto LAB_031dee2c;
      fStack_9c = 1.0 - pfVar13[-1];
      fVar16 = unaff_s10 + param_1;
      unaff_s10 = 1.0 - pfVar13[-2];
      uVar10 = -(uint)(fVar16 < fStack_9c);
      pfVar13 = pfVar13 + -2;
      local_a0 = unaff_s10;
      fVar8 = (float)((int)fVar8 + 1);
    }
    else {
      fVar2 = *(float *)(param_6 + 1);
      fVar16 = *(float *)(param_7 + 1);
      *(int *)(param_6 + 1) = (int)fVar2 + 1;
      pfVar12 = (float *)(*param_6 + (long)(int)fVar2 * 0x10);
      *pfVar12 = unaff_w27;
      pfVar12[1] = unaff_w25;
      pfVar12[2] = fVar9;
      pfVar12[3] = fVar16;
      pfVar11 = (float *)(*param_7 + (long)(int)param_7[1] * 0x10);
      *(int *)(param_7 + 1) = (int)param_7[1] + 1;
      pfVar12 = param_2 + 2;
      fVar9 = (float)((int)fVar9 + 1);
      *pfVar11 = fStack_9c;
      pfVar11[1] = unaff_s10;
      pfVar11[2] = fVar8;
      pfVar11[3] = fVar2;
      fVar8 = (float)((int)fVar8 + 1);
      pfVar11 = pfVar13 + -2;
      if (pfVar12 != param_3) {
        unaff_w27 = param_2[2];
        unaff_w25 = param_2[3];
      }
      param_2 = pfVar12;
      param_4 = param_5;
      if (pfVar11 == param_5) goto joined_r0x031dee48;
      fStack_9c = 1.0 - pfVar13[-1];
      unaff_s10 = 1.0 - pfVar13[-2];
      pfVar13 = pfVar11;
      local_a0 = unaff_s10;
      if (pfVar12 == param_3) goto joined_r0x031dee5c;
      uVar10 = (uint)(param_1 < unaff_w27 - fStack_9c);
      if (unaff_w27 - fStack_9c < fVar14) {
        uVar10 = 0xffffffff;
      }
    }
  } while( true );
}


