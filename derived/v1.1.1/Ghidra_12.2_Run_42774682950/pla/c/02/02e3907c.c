/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e3907c; name: FUN_02e3907c
 */


undefined8
FUN_02e3907c(long *param_1,long *param_2,long *param_3,uint param_4,uint param_5,int *param_6)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  float afStack_d0 [2];
  double local_c8;
  double local_c0;
  double local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  
  if (*param_1 != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    *param_1 = 0;
  }
  uVar2 = param_4 & 0xff;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((param_4 & 0xff) != 0) {
    lVar4 = (**(code **)(*param_2 + 0x10))(param_2,uVar2 << 5);
    *param_1 = lVar4;
    if (lVar4 == 0) {
      return 0x34;
    }
    lVar4 = (long)afStack_d0 - ((ulong)(uVar2 * 4 + 0xf) & 0x7f0);
    *(uint *)(param_1 + 1) = uVar2;
    FUN_02e030f0(param_3,param_4,param_6 + 4,lVar4);
    if ((int)param_1[1] != 0) {
      dVar16 = (double)param_5;
      fVar13 = (float)param_5;
      local_b8 = dVar16 * 0.5;
      uVar7 = 0;
      lVar8 = 0xc;
      local_c0 = 1.0 / dVar16;
      do {
        lVar9 = *param_1;
        lVar1 = lVar9 + lVar8;
        if (lVar1 != 0xc) {
          *(undefined8 *)(lVar1 + 0xc) = 0;
          *(undefined8 *)(lVar1 + 4) = 0;
          *(undefined8 *)(lVar1 + -4) = 0;
          *(undefined8 *)(lVar1 + -0xc) = 0;
          lVar9 = *param_1;
        }
        fVar17 = *(float *)(lVar4 + uVar7 * 4);
        iVar3 = (**(code **)(*param_3 + 0xf8))(param_3);
        fVar15 = (float)param_6[1];
        fVar14 = (float)param_6[2];
        fVar10 = 0.0;
        fVar12 = 1.0;
        if (fVar14 == 0.0) {
          if (fVar13 <= fVar15) goto LAB_02e39354;
LAB_02e391dc:
          fVar15 = fVar15 * (1.0 / fVar13);
        }
        else {
          local_c8 = dVar16 * 3.141592653589793;
          dVar11 = (double)NEON_fminnm((double)fVar15,dVar16);
          dVar11 = log(local_b8 / dVar11);
          dVar11 = exp(-(dVar11 * (double)fVar14));
          dVar11 = cos(dVar11 * local_c8 * local_c0);
          dVar11 = 2.0 - dVar11;
          fVar10 = (float)(SQRT(dVar11 * dVar11 + -1.0) - dVar11);
          fVar12 = fVar10 + 1.0;
          if (fVar15 < fVar13) goto LAB_02e391dc;
LAB_02e39354:
          fVar15 = 1.0;
        }
        lVar1 = lVar9 + lVar8;
        *(float *)(lVar1 + 4) = fVar15;
        if (*param_6 == 0) {
          *(float *)(lVar1 + 4) = fVar15 * 6.2831855;
        }
        *(float *)(lVar1 + -8) = fVar12;
        *(float *)(lVar1 + -4) = fVar10;
        iVar6 = *(int *)(lVar1 + 8);
        if (iVar6 != *param_6) {
          if (iVar6 == 0) {
            fVar10 = 0.15915494;
LAB_02e39420:
            *(float *)(lVar9 + lVar8) = *(float *)(lVar9 + lVar8) * fVar10;
          }
          else {
            fVar10 = 6.2831855;
            if (*param_6 == 0) goto LAB_02e39420;
          }
          iVar6 = *param_6;
        }
        *(int *)(lVar1 + 8) = iVar6;
        puVar5 = (undefined8 *)(lVar1 + -0xc);
        local_b0 = *puVar5;
        fVar10 = 0.25;
        local_a8 = *(undefined4 *)(lVar1 + -4);
        fVar12 = 6.2831855;
        if (*param_6 != 0) {
          fVar12 = 1.0;
        }
        fVar15 = fVar17 * 0.0027777778 * fVar12;
        if (iVar6 == 1) {
LAB_02e39368:
          fVar10 = fVar15 + fVar10;
          fVar15 = fVar10 + fVar12;
          if (0.0 <= fVar10) {
            fVar15 = fVar10;
          }
          if (fVar12 <= fVar15) {
            fVar15 = fVar15 - fVar12;
          }
          *(undefined4 *)(lVar1 + -4) = local_a8;
          *puVar5 = local_b0;
          *(float *)(lVar9 + lVar8) = fVar15;
          *(int *)(lVar1 + 8) = iVar6;
LAB_02e39398:
          fVar10 = 1.0;
LAB_02e39290:
          fVar10 = fmodf(fVar15,fVar10);
          *(float *)(lVar9 + lVar8) = fVar10;
        }
        else {
          if (iVar6 == 3) {
            fVar10 = 0.5;
            goto LAB_02e39368;
          }
          if (iVar6 != 5) {
            if (fVar15 < 0.0) {
              fVar15 = fVar15 + fVar12;
            }
            if (fVar12 <= fVar15) {
              fVar15 = fVar15 - fVar12;
            }
            *(undefined4 *)(lVar1 + -4) = local_a8;
            *puVar5 = local_b0;
            *(float *)(lVar9 + lVar8) = fVar15;
            *(int *)(lVar1 + 8) = iVar6;
            if (iVar6 != 0) goto LAB_02e39398;
            fVar10 = 6.2831855;
            goto LAB_02e39290;
          }
          if (fVar15 < 0.0) {
            fVar15 = fVar15 + fVar12;
          }
          if (fVar12 <= fVar15) {
            fVar15 = fVar15 - fVar12;
          }
          *(undefined4 *)(lVar1 + -4) = local_a8;
          *puVar5 = local_b0;
          *(float *)(lVar9 + lVar8) = fVar15;
          *(undefined4 *)(lVar1 + 8) = 5;
          *(long *)(lVar1 + 0xc) = (long)iVar3 * 0x5851f42d4c957f2d + 1;
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 0x20;
      } while (uVar7 < *(uint *)(param_1 + 1));
    }
  }
  return 1;
}


