/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031dee70; name: FUN_031dee70
 */


void FUN_031dee70(float param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 long *param_6,long *param_7)

{
  int iVar1;
  float fVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  float unaff_w25;
  float unaff_w26;
  float unaff_w27;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float local_94;
  
  if (param_2 != param_3) {
    unaff_w27 = *param_2;
    unaff_w26 = param_2[1];
    unaff_s12 = unaff_w27;
    unaff_s10 = unaff_w26;
  }
  uVar3 = (long)param_4 - (long)param_5;
  if (uVar3 != 0) {
    unaff_w25 = 1.0 - param_4[1];
    local_94 = 1.0 - *param_4;
    unaff_s13 = unaff_w25;
    unaff_s11 = local_94;
  }
  iVar1 = (int)(uVar3 >> 2) + (int)((ulong)((long)param_3 - (long)param_2) >> 3);
  if ((int)(*(uint *)((long)param_6 + 0xc) & 0x3fffffff) < iVar1) {
    lVar4 = FUN_031e0094(PTR_PTR_0434a090,iVar1,*param_6,(int)param_6[1]);
    *param_6 = lVar4;
  }
  iVar1 = (int)(uVar3 >> 3) + (int)((ulong)((long)param_3 - (long)param_2) >> 2);
  if ((int)(*(uint *)((long)param_7 + 0xc) & 0x3fffffff) < iVar1) {
    lVar4 = FUN_031e0094(PTR_PTR_0434a090,iVar1,*param_7,(int)param_7[1]);
    *param_7 = lVar4;
  }
  if ((param_2 == param_3) || (param_4 == param_5)) {
    fVar5 = 0.0;
    fVar10 = 0.0;
  }
  else {
    fVar9 = -param_1;
    fVar10 = 0.0;
    uVar6 = (uint)(param_1 < unaff_s12 - unaff_s13);
    if (unaff_s12 - unaff_s13 < fVar9) {
      uVar6 = 0xffffffff;
    }
    pfVar8 = param_2;
    fVar5 = 0.0;
LAB_031defb4:
    param_2 = pfVar8;
    while (uVar6 == 0xffffffff) {
      pfVar8 = (float *)(*param_6 + (long)(int)param_6[1] * 0x10);
      *(int *)(param_6 + 1) = (int)param_6[1] + 1;
      *pfVar8 = unaff_w27;
      if (unaff_w25 + param_1 < unaff_s10) {
        uVar6 = 0;
        pfVar8[1] = unaff_w25;
        pfVar8[2] = fVar10;
        pfVar8[3] = -NAN;
        unaff_w27 = unaff_w25;
        break;
      }
      pfVar8[1] = unaff_s10;
      pfVar7 = param_2 + 2;
      pfVar8[2] = fVar10;
      pfVar8[3] = -NAN;
      if (pfVar7 == param_3) goto joined_r0x031df41c;
      unaff_w27 = param_2[2];
      unaff_w26 = param_2[3];
      fVar10 = (float)((int)fVar10 + 1);
      uVar6 = (uint)(param_1 < unaff_w27 - unaff_w25);
      param_2 = pfVar7;
      unaff_s10 = unaff_w26;
      if (unaff_w27 - unaff_w25 < fVar9) {
        uVar6 = 0xffffffff;
      }
    }
    pfVar8 = param_2;
    if (uVar6 != 1) {
      uVar6 = (uint)(param_1 < unaff_s10 - unaff_s11);
      if (unaff_s10 - unaff_s11 < fVar9) {
        uVar6 = 0xffffffff;
      }
      if (uVar6 == 0xffffffff) {
        fVar2 = *(float *)(param_6 + 1);
        fVar11 = *(float *)(param_7 + 1);
        *(int *)(param_6 + 1) = (int)fVar2 + 1;
        pfVar8 = (float *)(*param_6 + (long)(int)fVar2 * 0x10);
        *pfVar8 = unaff_w27;
        pfVar8[1] = unaff_s10;
        pfVar8[2] = fVar10;
        pfVar8[3] = fVar11;
        pfVar8 = (float *)(*param_7 + (long)(int)param_7[1] * 0x10);
        *(int *)(param_7 + 1) = (int)param_7[1] + 1;
        *pfVar8 = unaff_w25;
        pfVar8[1] = unaff_s10;
        pfVar8[2] = fVar5;
        pfVar8[3] = fVar2;
        unaff_w25 = unaff_w26;
        if (param_2 + 2 == param_3) goto joined_r0x031df41c;
        fVar10 = (float)((int)fVar10 + 1);
        uVar6 = (uint)(unaff_s10 + param_1 < param_2[2]);
        pfVar8 = param_2 + 2;
        unaff_w27 = param_2[2];
        unaff_w26 = param_2[3];
        unaff_s10 = param_2[3];
      }
      else if (uVar6 == 1) {
        fVar2 = *(float *)(param_6 + 1);
        fVar11 = *(float *)(param_7 + 1);
        *(int *)(param_6 + 1) = (int)fVar2 + 1;
        pfVar7 = (float *)(*param_6 + (long)(int)fVar2 * 0x10);
        *pfVar7 = unaff_w27;
        pfVar7[1] = unaff_s11;
        pfVar7[2] = fVar10;
        pfVar7[3] = fVar11;
        pfVar7 = (float *)(*param_7 + (long)(int)param_7[1] * 0x10);
        *(int *)(param_7 + 1) = (int)param_7[1] + 1;
        *pfVar7 = unaff_w25;
        pfVar7[1] = unaff_s11;
        pfVar7[2] = fVar5;
        pfVar7[3] = fVar2;
        unaff_w27 = local_94;
        if (param_4 + -2 == param_5) goto joined_r0x031df3e8;
        unaff_w25 = 1.0 - param_4[-1];
        fVar11 = unaff_s11 + param_1;
        unaff_s11 = 1.0 - param_4[-2];
        uVar6 = -(uint)(fVar11 < unaff_w25);
        local_94 = unaff_s11;
        fVar5 = (float)((int)fVar5 + 1);
        param_4 = param_4 + -2;
      }
      else {
        fVar2 = *(float *)(param_6 + 1);
        fVar11 = *(float *)(param_7 + 1);
        *(int *)(param_6 + 1) = (int)fVar2 + 1;
        pfVar8 = (float *)(*param_6 + (long)(int)fVar2 * 0x10);
        *pfVar8 = unaff_w27;
        pfVar8[1] = unaff_s10;
        pfVar8[2] = fVar10;
        pfVar8[3] = fVar11;
        pfVar7 = (float *)(*param_7 + (long)(int)param_7[1] * 0x10);
        *(int *)(param_7 + 1) = (int)param_7[1] + 1;
        pfVar8 = param_2 + 2;
        fVar10 = (float)((int)fVar10 + 1);
        *pfVar7 = unaff_w25;
        pfVar7[1] = unaff_s11;
        pfVar7[2] = fVar5;
        pfVar7[3] = fVar2;
        fVar11 = (float)((int)fVar5 + 1);
        pfVar7 = param_4 + -2;
        if (pfVar8 != param_3) {
          unaff_w27 = param_2[2];
          unaff_w26 = param_2[3];
          unaff_s10 = unaff_w26;
        }
        param_2 = pfVar8;
        if (pfVar7 == param_5) goto joined_r0x031df3e8;
        unaff_w25 = 1.0 - param_4[-1];
        unaff_s11 = 1.0 - param_4[-2];
        fVar5 = fVar11;
        param_4 = pfVar7;
        local_94 = unaff_s11;
        if (pfVar8 == param_3) goto joined_r0x031df41c;
        uVar6 = (uint)(param_1 < unaff_w27 - unaff_w25);
        if (unaff_w27 - unaff_w25 < fVar9) {
          uVar6 = 0xffffffff;
        }
      }
      goto LAB_031defb4;
    }
    lVar4 = param_7[1];
    *(int *)(param_7 + 1) = (int)lVar4 + 1;
    pfVar7 = (float *)(*param_7 + (long)(int)lVar4 * 0x10);
    *pfVar7 = unaff_w25;
    if (unaff_w27 + param_1 < unaff_s11) {
      uVar6 = 0;
      pfVar7[1] = unaff_w27;
      pfVar7[2] = fVar5;
      pfVar7[3] = -NAN;
      unaff_w25 = unaff_w27;
      goto LAB_031defb4;
    }
    pfVar7[1] = unaff_s11;
    pfVar7[2] = fVar5;
    pfVar7[3] = -NAN;
    if (param_4 + -2 != param_5) {
      unaff_w25 = 1.0 - param_4[-1];
      unaff_s11 = 1.0 - param_4[-2];
      uVar6 = (uint)(param_1 < unaff_w27 - unaff_w25);
      if (unaff_w27 - unaff_w25 < fVar9) {
        uVar6 = 0xffffffff;
      }
      local_94 = unaff_s11;
      fVar5 = (float)((int)fVar5 + 1);
      param_4 = param_4 + -2;
      goto LAB_031defb4;
    }
joined_r0x031df3e8:
    fVar5 = (float)((int)fVar5 + 1);
    param_4 = param_5;
  }
  if (param_2 != param_3) {
    pfVar8 = (float *)(*param_6 + (long)(int)param_6[1] * 0x10);
    *(int *)(param_6 + 1) = (int)param_6[1] + 1;
    *pfVar8 = unaff_w27;
    pfVar8[1] = unaff_w26;
    pfVar8[2] = fVar10;
    pfVar8[3] = -NAN;
    while (param_2 = param_2 + 2, param_2 != param_3) {
      fVar10 = (float)((int)fVar10 + 1);
      lVar4 = param_6[1];
      fVar9 = *param_2;
      fVar11 = param_2[1];
      *(int *)(param_6 + 1) = (int)lVar4 + 1;
      pfVar8 = (float *)(*param_6 + (long)(int)lVar4 * 0x10);
      pfVar8[2] = fVar10;
      pfVar8[3] = -NAN;
      *pfVar8 = fVar9;
      pfVar8[1] = fVar11;
    }
  }
joined_r0x031df41c:
  if (param_4 != param_5) {
    pfVar8 = (float *)(*param_7 + (long)(int)param_7[1] * 0x10);
    *(int *)(param_7 + 1) = (int)param_7[1] + 1;
    *pfVar8 = unaff_w25;
    pfVar8[1] = local_94;
    pfVar8[2] = fVar5;
    pfVar8[3] = -NAN;
    while (param_4 = param_4 + -2, param_4 != param_5) {
      fVar5 = (float)((int)fVar5 + 1);
      lVar4 = param_7[1];
      fVar10 = *param_4;
      fVar9 = param_4[1];
      *(int *)(param_7 + 1) = (int)lVar4 + 1;
      pfVar8 = (float *)(*param_7 + (long)(int)lVar4 * 0x10);
      pfVar8[2] = fVar5;
      pfVar8[3] = -NAN;
      *pfVar8 = 1.0 - fVar9;
      pfVar8[1] = 1.0 - fVar10;
    }
  }
  return;
}


