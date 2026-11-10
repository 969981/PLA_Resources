/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e02230; name: FUN_02e02230
 */


void FUN_02e02230(float param_1,float param_2,float param_3,float *param_4,float *param_5,
                 uint param_6,float *param_7)

{
  float *pfVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  float *pfVar6;
  float __x;
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
  float fVar17;
  
  fVar11 = param_4[4];
  fVar12 = *param_4;
  fVar9 = param_4[1];
  fVar7 = param_4[5];
  fVar10 = param_4[2];
  __x = param_4[3];
  lVar3 = *(long *)(param_4 + 6);
  fVar8 = fVar11;
  if (fVar11 <= 1e-08) {
    fVar8 = 1e-08;
  }
  fVar13 = (param_1 - param_2) / (float)param_6;
  pfVar1 = param_5 + param_6;
  if (fVar7 == 0.0) {
    if (param_6 != 0) {
      fVar14 = 1.0 / fVar8;
      do {
        uVar5 = (uint)((1.5707964 - __x) * fVar14);
        uVar2 = param_6;
        if ((int)uVar5 <= (int)param_6) {
          uVar2 = uVar5;
        }
        if ((int)uVar5 < 0) {
          uVar2 = 0xffffffff;
        }
        pfVar6 = param_5 + (int)uVar2;
        if (pfVar1 <= param_5 + (int)uVar2) {
          pfVar6 = pfVar1;
        }
        for (; param_5 < pfVar6; param_5 = param_5 + 1) {
          __x = __x + fVar8;
          fVar15 = __x * __x;
          param_2 = param_2 + fVar13;
          fVar16 = *param_7;
          *param_7 = fVar16 + param_7[1];
          *param_5 = *param_5 * (fVar16 + param_7[1]) *
                     ((1.0 - param_2) +
                     param_2 * ((fVar15 * (fVar15 * (fVar15 * -0.00018363654 + 0.008306325) +
                                          -0.16664828) + 0.9999966) * __x * 0.5 + 0.5));
        }
        uVar5 = (uint)((3.1415927 - __x) * fVar14);
        uVar2 = param_6;
        if ((int)uVar5 <= (int)param_6) {
          uVar2 = uVar5;
        }
        if ((int)uVar5 < 0) {
          uVar2 = 0xffffffff;
        }
        pfVar6 = param_5 + (int)uVar2;
        if (pfVar1 <= param_5 + (int)uVar2) {
          pfVar6 = pfVar1;
        }
        for (; param_5 < pfVar6; param_5 = param_5 + 1) {
          __x = __x + fVar8;
          fVar15 = 3.1415927 - __x;
          fVar16 = fVar15 * fVar15;
          fVar17 = *param_7;
          param_2 = param_2 + fVar13;
          *param_7 = fVar17 + param_7[1];
          *param_5 = *param_5 * (fVar17 + param_7[1]) *
                     ((1.0 - param_2) +
                     param_2 * ((fVar16 * (fVar16 * (fVar16 * -0.00018363654 + 0.008306325) +
                                          -0.16664828) + 0.9999966) * fVar15 * 0.5 + 0.5));
        }
        uVar5 = (uint)((4.712389 - __x) * fVar14);
        uVar2 = param_6;
        if ((int)uVar5 <= (int)param_6) {
          uVar2 = uVar5;
        }
        if ((int)uVar5 < 0) {
          uVar2 = 0xffffffff;
        }
        pfVar6 = param_5 + (int)uVar2;
        if (pfVar1 <= param_5 + (int)uVar2) {
          pfVar6 = pfVar1;
        }
        for (; param_5 < pfVar6; param_5 = param_5 + 1) {
          __x = __x + fVar8;
          fVar15 = __x + -3.1415927;
          fVar16 = fVar15 * fVar15;
          fVar17 = *param_7;
          param_2 = param_2 + fVar13;
          *param_7 = fVar17 + param_7[1];
          *param_5 = *param_5 * (fVar17 + param_7[1]) *
                     ((1.0 - param_2) +
                     param_2 * ((fVar16 * (fVar16 * (fVar16 * 0.00018363654 + -0.008306325) +
                                          0.16664828) + -0.9999966) * fVar15 * 0.5 + 0.5));
        }
        uVar5 = (uint)((6.2831855 - __x) * fVar14);
        uVar2 = param_6;
        if ((int)uVar5 <= (int)param_6) {
          uVar2 = uVar5;
        }
        if ((int)uVar5 < 0) {
          uVar2 = 0xffffffff;
        }
        pfVar6 = param_5 + (int)uVar2;
        if (pfVar1 <= param_5 + (int)uVar2) {
          pfVar6 = pfVar1;
        }
        for (; param_5 < pfVar6; param_5 = param_5 + 1) {
          __x = __x + fVar8;
          fVar15 = 6.2831855 - __x;
          fVar16 = fVar15 * fVar15;
          fVar17 = *param_7;
          param_2 = param_2 + fVar13;
          *param_7 = fVar17 + param_7[1];
          *param_5 = *param_5 * (fVar17 + param_7[1]) *
                     ((1.0 - param_2) +
                     param_2 * ((fVar16 * (fVar16 * (fVar16 * 0.00018363654 + -0.008306325) +
                                          0.16664828) + -0.9999966) * fVar15 * 0.5 + 0.5));
        }
        if (6.2831855 <= __x) {
          __x = __x + -6.2831855;
        }
      } while (param_5 < pfVar1);
    }
  }
  else {
    switch(fVar7) {
    case 1.4013e-45:
      if (param_6 != 0) {
        fVar14 = 1.0 / fVar8;
        do {
          uVar5 = (uint)((0.5 - __x) * fVar14);
          uVar2 = param_6;
          if ((int)uVar5 <= (int)param_6) {
            uVar2 = uVar5;
          }
          if ((int)uVar5 < 0) {
            uVar2 = 0xffffffff;
          }
          pfVar6 = param_5 + (int)uVar2;
          if (pfVar1 <= param_5 + (int)uVar2) {
            pfVar6 = pfVar1;
          }
          for (; param_5 < pfVar6; param_5 = param_5 + 1) {
            __x = __x + fVar8;
            param_2 = param_2 + fVar13;
            fVar15 = *param_7;
            fVar12 = (fVar9 + fVar9) * __x - fVar12 * fVar10;
            *param_7 = fVar15 + param_7[1];
            *param_5 = ((1.0 - param_2) + param_2 * fVar12) * (fVar15 + param_7[1]) * *param_5;
          }
          uVar5 = (uint)(fVar14 - fVar14 * __x);
          uVar2 = param_6;
          if ((int)uVar5 <= (int)param_6) {
            uVar2 = uVar5;
          }
          if ((int)uVar5 < 0) {
            uVar2 = 0xffffffff;
          }
          pfVar6 = param_5 + (int)uVar2;
          if (pfVar1 <= param_5 + (int)uVar2) {
            pfVar6 = pfVar1;
          }
          for (; param_5 < pfVar6; param_5 = param_5 + 1) {
            __x = __x + fVar8;
            fVar12 = (2.0 - __x * 2.0) * fVar9 - fVar12 * fVar10;
            fVar15 = *param_7;
            param_2 = param_2 + fVar13;
            *param_7 = fVar15 + param_7[1];
            *param_5 = *param_5 * (fVar15 + param_7[1]) * ((1.0 - param_2) + param_2 * fVar12);
          }
          if (1.0 <= __x) {
            __x = __x + -1.0;
          }
        } while (param_5 < pfVar1);
      }
      break;
    case 2.8026e-45:
      if (param_6 != 0) {
        fVar14 = 1.0 / fVar8;
        do {
          uVar5 = (uint)((param_3 - __x) * fVar14);
          uVar2 = param_6;
          if ((int)uVar5 <= (int)param_6) {
            uVar2 = uVar5;
          }
          if ((int)uVar5 < 0) {
            uVar2 = 0xffffffff;
          }
          pfVar6 = param_5 + (int)uVar2;
          if (pfVar1 <= param_5 + (int)uVar2) {
            pfVar6 = pfVar1;
          }
          if (param_5 < pfVar6) {
            uVar4 = ~(ulong)param_5;
            if (((uint)(uVar4 + (long)pfVar6) >> 2 & 1) == 0) {
              fVar15 = *param_7;
              param_2 = param_2 + fVar13;
              fVar12 = param_2 * fVar9 - fVar12 * fVar10;
              *param_7 = fVar15 + param_7[1];
              __x = __x + fVar8;
              *param_5 = ((1.0 - param_2) + fVar12) * (fVar15 + param_7[1]) * *param_5;
              param_5 = param_5 + 1;
            }
            if (3 < uVar4 + (long)pfVar6) {
              do {
                fVar17 = *param_7;
                fVar15 = param_2 + fVar13;
                fVar16 = fVar15 * fVar9 - fVar12 * fVar10;
                param_2 = fVar15 + fVar13;
                *param_7 = fVar17 + param_7[1];
                fVar12 = param_2 * fVar9 - fVar16 * fVar10;
                *param_5 = ((1.0 - fVar15) + fVar16) * (fVar17 + param_7[1]) * *param_5;
                fVar15 = *param_7;
                *param_7 = fVar15 + param_7[1];
                __x = __x + fVar8 + fVar8;
                param_5[1] = ((1.0 - param_2) + fVar12) * (fVar15 + param_7[1]) * param_5[1];
                param_5 = param_5 + 2;
              } while (param_5 < pfVar6);
            }
          }
          uVar5 = (uint)(fVar14 - fVar14 * __x);
          uVar2 = param_6;
          if ((int)uVar5 <= (int)param_6) {
            uVar2 = uVar5;
          }
          if ((int)uVar5 < 0) {
            uVar2 = 0xffffffff;
          }
          pfVar6 = param_5 + (int)uVar2;
          if (pfVar1 <= param_5 + (int)uVar2) {
            pfVar6 = pfVar1;
          }
          if (param_5 < pfVar6) {
            uVar4 = ~(ulong)param_5;
            if (((uint)(uVar4 + (long)pfVar6) >> 2 & 1) == 0) {
              fVar16 = *param_7;
              param_2 = param_2 + fVar13;
              *param_7 = fVar16 + param_7[1];
              fVar15 = fVar12 * fVar10;
              fVar12 = -(fVar10 * fVar12);
              __x = __x + fVar8;
              *param_5 = ((1.0 - param_2) - fVar15) * (fVar16 + param_7[1]) * *param_5;
              param_5 = param_5 + 1;
            }
            if (3 < uVar4 + (long)pfVar6) {
              do {
                fVar16 = *param_7;
                fVar15 = param_2 + fVar13;
                param_2 = fVar15 + fVar13;
                *param_7 = fVar16 + param_7[1];
                *param_5 = ((1.0 - fVar15) - fVar10 * fVar12) * (fVar16 + param_7[1]) * *param_5;
                fVar15 = *param_7;
                fVar12 = fVar10 * fVar12 * fVar10;
                *param_7 = fVar15 + param_7[1];
                __x = __x + fVar8 + fVar8;
                param_5[1] = ((fVar12 + 1.0) - param_2) * (fVar15 + param_7[1]) * param_5[1];
                param_5 = param_5 + 2;
              } while (param_5 < pfVar6);
            }
          }
          if (1.0 <= __x) {
            __x = __x + -1.0;
          }
        } while (param_5 < pfVar1);
      }
      break;
    case 4.2039e-45:
      if (param_6 != 0) {
        do {
          uVar5 = (uint)(1.0 / fVar8 - (1.0 / fVar8) * __x);
          uVar2 = param_6;
          if ((int)uVar5 <= (int)param_6) {
            uVar2 = uVar5;
          }
          if ((int)uVar5 < 0) {
            uVar2 = 0xffffffff;
          }
          pfVar6 = param_5 + (int)uVar2;
          if (pfVar1 <= param_5 + (int)uVar2) {
            pfVar6 = pfVar1;
          }
          for (; param_5 < pfVar6; param_5 = param_5 + 1) {
            param_2 = param_2 + fVar13;
            __x = __x + fVar8;
            fVar12 = param_2 * fVar9 * __x - fVar12 * fVar10;
            fVar14 = *param_7;
            *param_7 = fVar14 + param_7[1];
            *param_5 = ((1.0 - param_2) + fVar12) * (fVar14 + param_7[1]) * *param_5;
          }
          if (1.0 <= __x) {
            __x = __x + -1.0;
          }
        } while (param_5 < pfVar1);
      }
      break;
    case 5.60519e-45:
      if (param_6 != 0) {
        do {
          uVar5 = (uint)(1.0 / fVar8 - (1.0 / fVar8) * __x);
          uVar2 = param_6;
          if ((int)uVar5 <= (int)param_6) {
            uVar2 = uVar5;
          }
          if ((int)uVar5 < 0) {
            uVar2 = 0xffffffff;
          }
          pfVar6 = param_5 + (int)uVar2;
          if (pfVar1 <= param_5 + (int)uVar2) {
            pfVar6 = pfVar1;
          }
          for (; param_5 < pfVar6; param_5 = param_5 + 1) {
            param_2 = param_2 + fVar13;
            __x = __x + fVar8;
            fVar12 = param_2 * fVar9 * (1.0 - __x) - fVar12 * fVar10;
            fVar14 = *param_7;
            *param_7 = fVar14 + param_7[1];
            *param_5 = ((1.0 - param_2) + fVar12) * (fVar14 + param_7[1]) * *param_5;
          }
          if (1.0 <= __x) {
            __x = __x + -1.0;
          }
        } while (param_5 < pfVar1);
      }
      break;
    case 7.00649e-45:
      if (param_6 != 0) {
        do {
          uVar5 = (uint)(1.0 / fVar8 - (1.0 / fVar8) * __x);
          uVar2 = param_6;
          if ((int)uVar5 <= (int)param_6) {
            uVar2 = uVar5;
          }
          if ((int)uVar5 < 0) {
            uVar2 = 0xffffffff;
          }
          pfVar6 = param_5 + (int)uVar2;
          if (pfVar1 <= param_5 + (int)uVar2) {
            pfVar6 = pfVar1;
          }
          if (param_5 < pfVar6) {
            uVar4 = ~(ulong)param_5;
            fVar14 = fVar9 * 4.656613e-10 * (float)(uint)((ulong)lVar3 >> 0x21);
            if (((uint)(uVar4 + (long)pfVar6) >> 2 & 1) == 0) {
              fVar15 = *param_7;
              param_2 = param_2 + fVar13;
              fVar12 = fVar14 * param_2 - fVar12 * fVar10;
              *param_7 = fVar15 + param_7[1];
              __x = __x + fVar8;
              *param_5 = ((1.0 - param_2) + fVar12) * (fVar15 + param_7[1]) * *param_5;
              param_5 = param_5 + 1;
            }
            if (3 < uVar4 + (long)pfVar6) {
              do {
                fVar17 = *param_7;
                fVar15 = param_2 + fVar13;
                fVar16 = fVar14 * fVar15 - fVar12 * fVar10;
                param_2 = fVar15 + fVar13;
                *param_7 = fVar17 + param_7[1];
                fVar12 = fVar14 * param_2 - fVar16 * fVar10;
                *param_5 = ((1.0 - fVar15) + fVar16) * (fVar17 + param_7[1]) * *param_5;
                fVar15 = *param_7;
                *param_7 = fVar15 + param_7[1];
                __x = __x + fVar8 + fVar8;
                param_5[1] = ((1.0 - param_2) + fVar12) * (fVar15 + param_7[1]) * param_5[1];
                param_5 = param_5 + 2;
              } while (param_5 < pfVar6);
            }
          }
          if (1.0 <= __x) {
            __x = __x + -1.0;
            lVar3 = lVar3 * 0x5851f42d4c957f2d + 1;
          }
        } while (param_5 < pfVar1);
      }
    }
  }
  if (fVar11 != 0.0) {
    *param_4 = fVar12;
    param_4[1] = fVar9;
    param_4[2] = fVar10;
    param_4[3] = __x;
    param_4[4] = fVar8;
    param_4[5] = fVar7;
    *(long *)(param_4 + 6) = lVar3;
    if (fVar7 == 0.0) {
      fVar7 = 6.2831855;
    }
    else {
      if (fVar7 == 7.00649e-45) {
        return;
      }
      fVar7 = 1.0;
    }
    fVar7 = fmodf(__x,fVar7);
    param_4[3] = fVar7;
  }
  return;
}


