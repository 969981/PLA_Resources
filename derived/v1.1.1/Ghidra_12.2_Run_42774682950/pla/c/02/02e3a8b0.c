/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e3a8b0; name: FUN_02e3a8b0
 */


void FUN_02e3a8b0(float param_1,float param_2,float param_3,float *param_4,float *param_5,
                 uint param_6)

{
  float *pfVar1;
  uint uVar2;
  float *pfVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  float *pfVar7;
  ulong uVar8;
  float __x;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar15 = param_4[4];
  fVar16 = *param_4;
  fVar13 = param_4[1];
  fVar14 = param_4[2];
  __x = param_4[3];
  fVar9 = param_4[5];
  lVar4 = *(long *)(param_4 + 6);
  fVar12 = fVar15;
  if (fVar15 <= 1e-08) {
    fVar12 = 1e-08;
  }
  fVar17 = (param_1 - param_2) / (float)param_6;
  pfVar1 = param_5 + param_6;
  if (fVar9 == 0.0) {
    if (param_6 != 0) {
      fVar11 = 1.0 / fVar12;
      do {
        while( true ) {
          uVar6 = (uint)((1.5707964 - __x) * fVar11);
          uVar2 = param_6;
          if ((int)uVar6 <= (int)param_6) {
            uVar2 = uVar6;
          }
          if ((int)uVar6 < 0) {
            uVar2 = 0xffffffff;
          }
          pfVar7 = param_5 + (int)uVar2;
          if (pfVar1 <= param_5 + (int)uVar2) {
            pfVar7 = pfVar1;
          }
          if (param_5 < pfVar7) {
            uVar8 = ~(ulong)param_5;
            if (((uint)(uVar8 + (long)pfVar7) >> 2 & 1) == 0) {
              __x = __x + fVar12;
              fVar18 = __x * __x;
              param_2 = param_2 + fVar17;
              *param_5 = __x * param_2 *
                         (fVar18 * (fVar18 * (fVar18 * -0.00018363654 + 0.008306325) + -0.16664828)
                         + 0.9999966);
              param_5 = param_5 + 1;
            }
            if (3 < uVar8 + (long)pfVar7) {
              do {
                fVar18 = __x + fVar12;
                fVar19 = fVar18 * fVar18;
                fVar10 = param_2 + fVar17;
                __x = fVar18 + fVar12;
                param_2 = fVar10 + fVar17;
                *param_5 = fVar18 * fVar10 *
                           (fVar19 * (fVar19 * (0.008306325 - fVar19 * 0.00018363654) + -0.16664828)
                           + 0.9999966);
                fVar18 = __x * __x;
                param_5[1] = __x * param_2 *
                             (fVar18 * (fVar18 * (0.008306325 - fVar18 * 0.00018363654) +
                                       -0.16664828) + 0.9999966);
                param_5 = param_5 + 2;
              } while (param_5 < pfVar7);
            }
          }
          uVar6 = (uint)((3.1415927 - __x) * fVar11);
          uVar2 = param_6;
          if ((int)uVar6 <= (int)param_6) {
            uVar2 = uVar6;
          }
          if ((int)uVar6 < 0) {
            uVar2 = 0xffffffff;
          }
          pfVar7 = param_5 + (int)uVar2;
          if (pfVar1 <= param_5 + (int)uVar2) {
            pfVar7 = pfVar1;
          }
          if (param_5 < pfVar7) {
            uVar8 = ~(ulong)param_5;
            if (((uint)(uVar8 + (long)pfVar7) >> 2 & 1) == 0) {
              __x = __x + fVar12;
              fVar18 = 3.1415927 - __x;
              fVar10 = fVar18 * fVar18;
              param_2 = param_2 + fVar17;
              *param_5 = fVar18 * param_2 *
                         (fVar10 * (fVar10 * (fVar10 * -0.00018363654 + 0.008306325) + -0.16664828)
                         + 0.9999966);
              param_5 = param_5 + 1;
            }
            if (3 < uVar8 + (long)pfVar7) {
              do {
                fVar19 = 3.1415927 - (__x + fVar12);
                fVar20 = fVar19 * fVar19;
                __x = __x + fVar12 + fVar12;
                fVar10 = 3.1415927 - __x;
                fVar21 = fVar10 * fVar10;
                fVar18 = param_2 + fVar17;
                param_2 = fVar18 + fVar17;
                *param_5 = fVar19 * fVar18 *
                           (fVar20 * (fVar20 * (0.008306325 - fVar20 * 0.00018363654) + -0.16664828)
                           + 0.9999966);
                param_5[1] = fVar10 * param_2 *
                             (fVar21 * (fVar21 * (0.008306325 - fVar21 * 0.00018363654) +
                                       -0.16664828) + 0.9999966);
                param_5 = param_5 + 2;
              } while (param_5 < pfVar7);
            }
          }
          uVar6 = (uint)((4.712389 - __x) * fVar11);
          uVar2 = param_6;
          if ((int)uVar6 <= (int)param_6) {
            uVar2 = uVar6;
          }
          if ((int)uVar6 < 0) {
            uVar2 = 0xffffffff;
          }
          pfVar7 = param_5 + (int)uVar2;
          if (pfVar1 <= param_5 + (int)uVar2) {
            pfVar7 = pfVar1;
          }
          if (param_5 < pfVar7) {
            uVar8 = ~(ulong)param_5;
            if (((uint)(uVar8 + (long)pfVar7) >> 2 & 1) == 0) {
              __x = __x + fVar12;
              fVar18 = __x + -3.1415927;
              fVar10 = fVar18 * fVar18;
              param_2 = param_2 + fVar17;
              *param_5 = param_2 * fVar18 *
                         (fVar10 * (fVar10 * (fVar10 * 0.00018363654 + -0.008306325) + 0.16664828) +
                         -0.9999966);
              param_5 = param_5 + 1;
            }
            if (3 < uVar8 + (long)pfVar7) {
              do {
                fVar19 = __x + fVar12 + -3.1415927;
                fVar20 = fVar19 * fVar19;
                __x = __x + fVar12 + fVar12;
                fVar10 = __x + -3.1415927;
                fVar21 = fVar10 * fVar10;
                fVar18 = param_2 + fVar17;
                param_2 = fVar18 + fVar17;
                *param_5 = fVar18 * fVar19 *
                           (fVar20 * (fVar20 * (fVar20 * 0.00018363654 + -0.008306325) + 0.16664828)
                           + -0.9999966);
                param_5[1] = param_2 * fVar10 *
                             (fVar21 * (fVar21 * (fVar21 * 0.00018363654 + -0.008306325) +
                                       0.16664828) + -0.9999966);
                param_5 = param_5 + 2;
              } while (param_5 < pfVar7);
            }
          }
          uVar6 = (uint)((6.2831855 - __x) * fVar11);
          uVar2 = param_6;
          if ((int)uVar6 <= (int)param_6) {
            uVar2 = uVar6;
          }
          if ((int)uVar6 < 0) {
            uVar2 = 0xffffffff;
          }
          pfVar7 = param_5 + (int)uVar2;
          if (pfVar1 <= param_5 + (int)uVar2) {
            pfVar7 = pfVar1;
          }
          if (param_5 < pfVar7) {
            uVar8 = ~(ulong)param_5;
            if (((uint)(uVar8 + (long)pfVar7) >> 2 & 1) == 0) {
              __x = __x + fVar12;
              fVar18 = 6.2831855 - __x;
              fVar10 = fVar18 * fVar18;
              param_2 = param_2 + fVar17;
              *param_5 = param_2 * fVar18 *
                         (fVar10 * (fVar10 * (fVar10 * 0.00018363654 + -0.008306325) + 0.16664828) +
                         -0.9999966);
              param_5 = param_5 + 1;
            }
            if (3 < uVar8 + (long)pfVar7) {
              do {
                fVar19 = 6.2831855 - (__x + fVar12);
                fVar20 = fVar19 * fVar19;
                __x = __x + fVar12 + fVar12;
                fVar10 = 6.2831855 - __x;
                fVar21 = fVar10 * fVar10;
                fVar18 = param_2 + fVar17;
                param_2 = fVar18 + fVar17;
                *param_5 = fVar18 * fVar19 *
                           (fVar20 * (fVar20 * (fVar20 * 0.00018363654 + -0.008306325) + 0.16664828)
                           + -0.9999966);
                param_5[1] = param_2 * fVar10 *
                             (fVar21 * (fVar21 * (fVar21 * 0.00018363654 + -0.008306325) +
                                       0.16664828) + -0.9999966);
                param_5 = param_5 + 2;
              } while (param_5 < pfVar7);
            }
          }
          if (6.2831855 <= __x) break;
          if (pfVar1 <= param_5) goto switchD_02e3add0_default;
        }
        __x = __x + -6.2831855;
      } while (param_5 < pfVar1);
    }
  }
  else {
    switch(fVar9) {
    case 1.4013e-45:
      if (param_6 != 0) {
        fVar11 = 1.0 / fVar12;
        do {
          uVar6 = (uint)((0.5 - __x) * fVar11);
          uVar2 = param_6;
          if ((int)uVar6 <= (int)param_6) {
            uVar2 = uVar6;
          }
          if ((int)uVar6 < 0) {
            uVar2 = 0xffffffff;
          }
          pfVar7 = param_5 + (int)uVar2;
          if (pfVar1 <= param_5 + (int)uVar2) {
            pfVar7 = pfVar1;
          }
          if (param_5 < pfVar7) {
            uVar8 = ~(ulong)param_5;
            if (((uint)(uVar8 + (long)pfVar7) >> 2 & 1) == 0) {
              __x = __x + fVar12;
              fVar16 = (__x * 4.0 + -1.0) * fVar13 - fVar16 * fVar14;
              param_2 = param_2 + fVar17;
              *param_5 = fVar16 * param_2;
              param_5 = param_5 + 1;
            }
            pfVar3 = param_5;
            if (3 < uVar8 + (long)pfVar7) {
              do {
                fVar10 = ((__x + fVar12) * 4.0 + -1.0) * fVar13 - fVar16 * fVar14;
                __x = __x + fVar12 + fVar12;
                fVar18 = param_2 + fVar17;
                fVar16 = (__x * 4.0 + -1.0) * fVar13 - fVar10 * fVar14;
                param_2 = fVar18 + fVar17;
                param_5 = pfVar3 + 2;
                *pfVar3 = fVar10 * fVar18;
                pfVar3[1] = fVar16 * param_2;
                pfVar3 = param_5;
              } while (param_5 < pfVar7);
            }
          }
          uVar6 = (uint)(fVar11 - fVar11 * __x);
          uVar2 = param_6;
          if ((int)uVar6 <= (int)param_6) {
            uVar2 = uVar6;
          }
          if ((int)uVar6 < 0) {
            uVar2 = 0xffffffff;
          }
          pfVar7 = param_5 + (int)uVar2;
          if (pfVar1 <= param_5 + (int)uVar2) {
            pfVar7 = pfVar1;
          }
          if (param_5 < pfVar7) {
            uVar8 = ~(ulong)param_5;
            if (((uint)(uVar8 + (long)pfVar7) >> 2 & 1) == 0) {
              __x = __x + fVar12;
              fVar16 = (__x * -4.0 + 3.0) * fVar13 - fVar16 * fVar14;
              param_2 = param_2 + fVar17;
              *param_5 = fVar16 * param_2;
              param_5 = param_5 + 1;
            }
            pfVar3 = param_5;
            if (3 < uVar8 + (long)pfVar7) {
              do {
                fVar10 = (3.0 - (__x + fVar12) * 4.0) * fVar13 - fVar16 * fVar14;
                __x = __x + fVar12 + fVar12;
                fVar18 = param_2 + fVar17;
                fVar16 = (3.0 - __x * 4.0) * fVar13 - fVar10 * fVar14;
                param_2 = fVar18 + fVar17;
                param_5 = pfVar3 + 2;
                *pfVar3 = fVar10 * fVar18;
                pfVar3[1] = fVar16 * param_2;
                pfVar3 = param_5;
              } while (param_5 < pfVar7);
            }
          }
          if (1.0 <= __x) {
            __x = __x + -1.0;
          }
        } while (param_5 < pfVar1);
      }
      break;
    case 2.8026e-45:
      if (param_6 != 0) {
        fVar11 = 1.0 / fVar12;
        do {
          uVar6 = (uint)((param_3 - __x) * fVar11);
          uVar2 = param_6;
          if ((int)uVar6 <= (int)param_6) {
            uVar2 = uVar6;
          }
          if ((int)uVar6 < 0) {
            uVar2 = 0xffffffff;
          }
          pfVar7 = param_5 + (int)uVar2;
          if (pfVar1 <= param_5 + (int)uVar2) {
            pfVar7 = pfVar1;
          }
          if (param_5 < pfVar7) {
            uVar5 = ~(ulong)param_5;
            uVar2 = ((uint)(uVar5 + (long)pfVar7 >> 2) & 0x3fffffff) + 1;
            uVar8 = (ulong)uVar2 & 3;
            pfVar3 = param_5;
            if ((uVar2 & 3) != 0) {
              do {
                param_2 = param_2 + fVar17;
                uVar8 = uVar8 - 1;
                __x = __x + fVar12;
                fVar16 = param_2 * fVar13 - fVar16 * fVar14;
                param_5 = pfVar3 + 1;
                *pfVar3 = fVar16;
                pfVar3 = param_5;
              } while (uVar8 != 0);
            }
            if (0xb < uVar5 + (long)pfVar7) {
              do {
                fVar16 = (param_2 + fVar17) * fVar13 - fVar16 * fVar14;
                param_2 = param_2 + fVar17 + fVar17;
                fVar18 = param_2 * fVar13 - fVar16 * fVar14;
                param_2 = param_2 + fVar17;
                *param_5 = fVar16;
                param_5[1] = fVar18;
                fVar18 = param_2 * fVar13 - fVar18 * fVar14;
                param_2 = param_2 + fVar17;
                __x = __x + fVar12 + fVar12 + fVar12 + fVar12;
                fVar16 = param_2 * fVar13 - fVar18 * fVar14;
                param_5[2] = fVar18;
                param_5[3] = fVar16;
                param_5 = param_5 + 4;
              } while (param_5 < pfVar7);
            }
          }
          uVar6 = (uint)(fVar11 - fVar11 * __x);
          uVar2 = param_6;
          if ((int)uVar6 <= (int)param_6) {
            uVar2 = uVar6;
          }
          if ((int)uVar6 < 0) {
            uVar2 = 0xffffffff;
          }
          pfVar7 = param_5 + (int)uVar2;
          if (pfVar1 <= param_5 + (int)uVar2) {
            pfVar7 = pfVar1;
          }
          if (param_5 < pfVar7) {
            uVar5 = ~(ulong)param_5;
            uVar2 = ((uint)(uVar5 + (long)pfVar7 >> 2) & 0x3fffffff) + 1;
            uVar8 = (ulong)uVar2 & 3;
            pfVar3 = param_5;
            if ((uVar2 & 3) != 0) {
              do {
                param_2 = param_2 + fVar17;
                fVar16 = -(fVar16 * fVar14) - fVar13 * param_2;
                __x = __x + fVar12;
                uVar8 = uVar8 - 1;
                param_5 = pfVar3 + 1;
                *pfVar3 = fVar16;
                pfVar3 = param_5;
              } while (uVar8 != 0);
            }
            if (0xb < uVar5 + (long)pfVar7) {
              do {
                param_2 = param_2 + fVar17;
                fVar18 = (fVar16 * fVar14 + param_2 * fVar13) * fVar14 - fVar13 * (param_2 + fVar17)
                ;
                fVar10 = param_2 + fVar17 + fVar17;
                *param_5 = -(fVar13 * param_2) - fVar16 * fVar14;
                param_5[1] = fVar18;
                fVar18 = fVar18 * fVar14;
                param_2 = fVar10 + fVar17;
                __x = __x + fVar12 + fVar12 + fVar12 + fVar12;
                fVar16 = (fVar18 + fVar10 * fVar13) * fVar14 - fVar13 * param_2;
                param_5[2] = -(fVar13 * fVar10) - fVar18;
                param_5[3] = fVar16;
                param_5 = param_5 + 4;
              } while (param_5 < pfVar7);
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
          uVar6 = (uint)(1.0 / fVar12 - (1.0 / fVar12) * __x);
          uVar2 = param_6;
          if ((int)uVar6 <= (int)param_6) {
            uVar2 = uVar6;
          }
          if ((int)uVar6 < 0) {
            uVar2 = 0xffffffff;
          }
          pfVar7 = param_5 + (int)uVar2;
          if (pfVar1 <= param_5 + (int)uVar2) {
            pfVar7 = pfVar1;
          }
          if (param_5 < pfVar7) {
            uVar8 = ~(ulong)param_5;
            if (((uint)(uVar8 + (long)pfVar7) >> 2 & 1) == 0) {
              __x = __x + fVar12;
              param_2 = param_2 + fVar17;
              fVar16 = param_2 * fVar13 * (__x * 2.0 + -1.0) - fVar16 * fVar14;
              *param_5 = fVar16;
              param_5 = param_5 + 1;
            }
            pfVar3 = param_5;
            if (3 < uVar8 + (long)pfVar7) {
              do {
                fVar11 = (param_2 + fVar17) * fVar13 * ((__x + fVar12) * 2.0 + -1.0) -
                         fVar16 * fVar14;
                __x = __x + fVar12 + fVar12;
                param_2 = param_2 + fVar17 + fVar17;
                fVar16 = param_2 * fVar13 * (__x * 2.0 + -1.0) - fVar11 * fVar14;
                param_5 = pfVar3 + 2;
                *pfVar3 = fVar11;
                pfVar3[1] = fVar16;
                pfVar3 = param_5;
              } while (param_5 < pfVar7);
            }
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
          uVar6 = (uint)(1.0 / fVar12 - (1.0 / fVar12) * __x);
          uVar2 = param_6;
          if ((int)uVar6 <= (int)param_6) {
            uVar2 = uVar6;
          }
          if ((int)uVar6 < 0) {
            uVar2 = 0xffffffff;
          }
          pfVar7 = param_5 + (int)uVar2;
          if (pfVar1 <= param_5 + (int)uVar2) {
            pfVar7 = pfVar1;
          }
          if (param_5 < pfVar7) {
            uVar8 = ~(ulong)param_5;
            if (((uint)(uVar8 + (long)pfVar7) >> 2 & 1) == 0) {
              __x = __x + fVar12;
              param_2 = param_2 + fVar17;
              fVar16 = param_2 * fVar13 * (1.0 - (__x + __x)) - fVar16 * fVar14;
              *param_5 = fVar16;
              param_5 = param_5 + 1;
            }
            pfVar3 = param_5;
            if (3 < uVar8 + (long)pfVar7) {
              do {
                fVar11 = (param_2 + fVar17) * fVar13 * (1.0 - (__x + fVar12) * 2.0) -
                         fVar16 * fVar14;
                __x = __x + fVar12 + fVar12;
                param_2 = param_2 + fVar17 + fVar17;
                fVar16 = param_2 * fVar13 * (1.0 - __x * 2.0) - fVar11 * fVar14;
                param_5 = pfVar3 + 2;
                *pfVar3 = fVar11;
                pfVar3[1] = fVar16;
                pfVar3 = param_5;
              } while (param_5 < pfVar7);
            }
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
          uVar6 = (uint)(1.0 / fVar12 - (1.0 / fVar12) * __x);
          uVar2 = param_6;
          if ((int)uVar6 <= (int)param_6) {
            uVar2 = uVar6;
          }
          if ((int)uVar6 < 0) {
            uVar2 = 0xffffffff;
          }
          pfVar7 = param_5 + (int)uVar2;
          if (pfVar1 <= param_5 + (int)uVar2) {
            pfVar7 = pfVar1;
          }
          if (param_5 < pfVar7) {
            uVar5 = ~(ulong)param_5;
            uVar2 = ((uint)(uVar5 + (long)pfVar7 >> 2) & 0x3fffffff) + 1;
            uVar8 = (ulong)uVar2 & 3;
            fVar11 = fVar13 * 4.656613e-10 * (float)(uint)((ulong)lVar4 >> 0x21);
            pfVar3 = param_5;
            if ((uVar2 & 3) != 0) {
              do {
                param_2 = param_2 + fVar17;
                uVar8 = uVar8 - 1;
                __x = __x + fVar12;
                fVar16 = fVar11 * param_2 - fVar16 * fVar14;
                param_5 = pfVar3 + 1;
                *pfVar3 = fVar16;
                pfVar3 = param_5;
              } while (uVar8 != 0);
            }
            if (0xb < uVar5 + (long)pfVar7) {
              do {
                fVar16 = fVar11 * (param_2 + fVar17) - fVar16 * fVar14;
                param_2 = param_2 + fVar17 + fVar17;
                fVar18 = fVar11 * param_2 - fVar16 * fVar14;
                param_2 = param_2 + fVar17;
                *param_5 = fVar16;
                param_5[1] = fVar18;
                fVar18 = fVar11 * param_2 - fVar18 * fVar14;
                param_2 = param_2 + fVar17;
                __x = __x + fVar12 + fVar12 + fVar12 + fVar12;
                fVar16 = fVar11 * param_2 - fVar18 * fVar14;
                param_5[2] = fVar18;
                param_5[3] = fVar16;
                param_5 = param_5 + 4;
              } while (param_5 < pfVar7);
            }
          }
          if (1.0 <= __x) {
            __x = __x + -1.0;
            lVar4 = lVar4 * 0x5851f42d4c957f2d + 1;
          }
        } while (param_5 < pfVar1);
      }
    }
  }
switchD_02e3add0_default:
  if (fVar15 != 0.0) {
    *param_4 = fVar16;
    param_4[1] = fVar13;
    param_4[2] = fVar14;
    param_4[3] = __x;
    param_4[4] = fVar12;
    param_4[5] = fVar9;
    *(long *)(param_4 + 6) = lVar4;
    if (fVar9 == 0.0) {
      fVar9 = 6.2831855;
    }
    else {
      if (fVar9 == 7.00649e-45) {
        return;
      }
      fVar9 = 1.0;
    }
    fVar9 = fmodf(__x,fVar9);
    param_4[3] = fVar9;
  }
  return;
}


