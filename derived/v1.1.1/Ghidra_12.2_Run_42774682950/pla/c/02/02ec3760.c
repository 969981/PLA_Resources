/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec3760; name: FUN_02ec3760
 */


void FUN_02ec3760(float param_1,float param_2,float param_3,float *param_4,float *param_5,
                 uint param_6)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  float *pfVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
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
  fVar9 = param_4[3];
  fVar10 = param_4[5];
  lVar5 = *(long *)(param_4 + 6);
  if ((uint)fVar10 < 6) {
    pfVar1 = param_5 + param_6;
    fVar12 = (param_1 - param_2) / (float)param_6;
    switch(fVar10) {
    case 0.0:
      if (param_6 != 0) {
        fVar20 = 1.0 / fVar15;
        do {
          uVar7 = (uint)((1.5707964 - fVar9) * fVar20);
          uVar3 = param_6;
          if ((int)uVar7 <= (int)param_6) {
            uVar3 = uVar7;
          }
          if ((int)uVar7 < 0) {
            uVar3 = 0xffffffff;
          }
          pfVar2 = param_5 + (int)uVar3;
          if (pfVar1 <= param_5 + (int)uVar3) {
            pfVar2 = pfVar1;
          }
          if (param_5 < pfVar2) {
            uVar6 = ~(ulong)param_5;
            if (((uint)(uVar6 + (long)pfVar2) >> 2 & 1) == 0) {
              fVar9 = fVar9 + fVar15;
              fVar21 = fVar9 * fVar9;
              param_2 = param_2 + fVar12;
              *param_5 = ((fVar21 * (fVar21 * (fVar21 * -0.00018363654 + 0.008306325) + -0.16664828)
                          + 0.9999966) * fVar9 * 0.5 + 0.5) * param_2;
              param_5 = param_5 + 1;
            }
            pfVar4 = param_5;
            if (3 < uVar6 + (long)pfVar2) {
              do {
                fVar11 = param_2 + fVar12;
                fVar21 = fVar9 + fVar15;
                fVar17 = fVar21 * fVar21;
                fVar9 = fVar21 + fVar15;
                fVar18 = fVar9 * fVar9;
                param_2 = fVar11 + fVar12;
                param_5 = pfVar4 + 2;
                *pfVar4 = ((fVar17 * (fVar17 * (0.008306325 - fVar17 * 0.00018363654) + -0.16664828)
                           + 0.9999966) * fVar21 * 0.5 + 0.5) * fVar11;
                pfVar4[1] = ((fVar18 * (fVar18 * (0.008306325 - fVar18 * 0.00018363654) +
                                       -0.16664828) + 0.9999966) * fVar9 * 0.5 + 0.5) * param_2;
                pfVar4 = param_5;
              } while (param_5 < pfVar2);
            }
          }
          uVar7 = (uint)((3.1415927 - fVar9) * fVar20);
          uVar3 = param_6;
          if ((int)uVar7 <= (int)param_6) {
            uVar3 = uVar7;
          }
          if ((int)uVar7 < 0) {
            uVar3 = 0xffffffff;
          }
          pfVar2 = param_5 + (int)uVar3;
          if (pfVar1 <= param_5 + (int)uVar3) {
            pfVar2 = pfVar1;
          }
          if (param_5 < pfVar2) {
            uVar6 = ~(ulong)param_5;
            if (((uint)(uVar6 + (long)pfVar2) >> 2 & 1) == 0) {
              fVar9 = fVar9 + fVar15;
              fVar21 = 3.1415927 - fVar9;
              fVar11 = fVar21 * fVar21;
              param_2 = param_2 + fVar12;
              *param_5 = ((fVar11 * (fVar11 * (fVar11 * -0.00018363654 + 0.008306325) + -0.16664828)
                          + 0.9999966) * fVar21 * 0.5 + 0.5) * param_2;
              param_5 = param_5 + 1;
            }
            pfVar4 = param_5;
            if (3 < uVar6 + (long)pfVar2) {
              do {
                fVar21 = param_2 + fVar12;
                fVar11 = 3.1415927 - (fVar9 + fVar15);
                fVar9 = fVar9 + fVar15 + fVar15;
                fVar17 = fVar11 * fVar11;
                fVar18 = 3.1415927 - fVar9;
                fVar19 = fVar18 * fVar18;
                param_2 = fVar21 + fVar12;
                param_5 = pfVar4 + 2;
                *pfVar4 = ((fVar17 * (fVar17 * (0.008306325 - fVar17 * 0.00018363654) + -0.16664828)
                           + 0.9999966) * fVar11 * 0.5 + 0.5) * fVar21;
                pfVar4[1] = ((fVar19 * (fVar19 * (0.008306325 - fVar19 * 0.00018363654) +
                                       -0.16664828) + 0.9999966) * fVar18 * 0.5 + 0.5) * param_2;
                pfVar4 = param_5;
              } while (param_5 < pfVar2);
            }
          }
          uVar7 = (uint)((4.712389 - fVar9) * fVar20);
          uVar3 = param_6;
          if ((int)uVar7 <= (int)param_6) {
            uVar3 = uVar7;
          }
          if ((int)uVar7 < 0) {
            uVar3 = 0xffffffff;
          }
          pfVar2 = param_5 + (int)uVar3;
          if (pfVar1 <= param_5 + (int)uVar3) {
            pfVar2 = pfVar1;
          }
          if (param_5 < pfVar2) {
            uVar6 = ~(ulong)param_5;
            if (((uint)(uVar6 + (long)pfVar2) >> 2 & 1) == 0) {
              fVar9 = fVar9 + fVar15;
              fVar21 = fVar9 + -3.1415927;
              fVar11 = fVar21 * fVar21;
              param_2 = param_2 + fVar12;
              *param_5 = ((fVar11 * (fVar11 * (fVar11 * 0.00018363654 + -0.008306325) + 0.16664828)
                          + -0.9999966) * fVar21 * 0.5 + 0.5) * param_2;
              param_5 = param_5 + 1;
            }
            pfVar4 = param_5;
            if (3 < uVar6 + (long)pfVar2) {
              do {
                fVar21 = param_2 + fVar12;
                fVar11 = fVar9 + fVar15 + -3.1415927;
                fVar9 = fVar9 + fVar15 + fVar15;
                fVar17 = fVar11 * fVar11;
                fVar18 = fVar9 + -3.1415927;
                fVar19 = fVar18 * fVar18;
                param_2 = fVar21 + fVar12;
                param_5 = pfVar4 + 2;
                *pfVar4 = ((fVar17 * (fVar17 * (fVar17 * 0.00018363654 + -0.008306325) + 0.16664828)
                           + -0.9999966) * fVar11 * 0.5 + 0.5) * fVar21;
                pfVar4[1] = ((fVar19 * (fVar19 * (fVar19 * 0.00018363654 + -0.008306325) +
                                       0.16664828) + -0.9999966) * fVar18 * 0.5 + 0.5) * param_2;
                pfVar4 = param_5;
              } while (param_5 < pfVar2);
            }
          }
          uVar7 = (uint)((6.2831855 - fVar9) * fVar20);
          uVar3 = param_6;
          if ((int)uVar7 <= (int)param_6) {
            uVar3 = uVar7;
          }
          if ((int)uVar7 < 0) {
            uVar3 = 0xffffffff;
          }
          pfVar2 = param_5 + (int)uVar3;
          if (pfVar1 <= param_5 + (int)uVar3) {
            pfVar2 = pfVar1;
          }
          if (param_5 < pfVar2) {
            uVar6 = ~(ulong)param_5;
            if (((uint)(uVar6 + (long)pfVar2) >> 2 & 1) == 0) {
              fVar9 = fVar9 + fVar15;
              fVar21 = 6.2831855 - fVar9;
              fVar11 = fVar21 * fVar21;
              param_2 = param_2 + fVar12;
              *param_5 = ((fVar11 * (fVar11 * (fVar11 * 0.00018363654 + -0.008306325) + 0.16664828)
                          + -0.9999966) * fVar21 * 0.5 + 0.5) * param_2;
              param_5 = param_5 + 1;
            }
            pfVar4 = param_5;
            if (3 < uVar6 + (long)pfVar2) {
              do {
                fVar21 = param_2 + fVar12;
                fVar11 = 6.2831855 - (fVar9 + fVar15);
                fVar9 = fVar9 + fVar15 + fVar15;
                fVar17 = fVar11 * fVar11;
                fVar18 = 6.2831855 - fVar9;
                fVar19 = fVar18 * fVar18;
                param_2 = fVar21 + fVar12;
                param_5 = pfVar4 + 2;
                *pfVar4 = ((fVar17 * (fVar17 * (fVar17 * 0.00018363654 + -0.008306325) + 0.16664828)
                           + -0.9999966) * fVar11 * 0.5 + 0.5) * fVar21;
                pfVar4[1] = ((fVar19 * (fVar19 * (fVar19 * 0.00018363654 + -0.008306325) +
                                       0.16664828) + -0.9999966) * fVar18 * 0.5 + 0.5) * param_2;
                pfVar4 = param_5;
              } while (param_5 < pfVar2);
            }
          }
          if (6.2831855 <= fVar9) {
            fVar9 = fVar9 + -6.2831855;
          }
        } while (param_5 < pfVar1);
      }
      break;
    case 1.4013e-45:
      if (param_6 != 0) {
        fVar21 = 1.0 / fVar15;
        fVar20 = fVar13 + fVar13;
        do {
          uVar7 = (uint)((0.5 - fVar9) * fVar21);
          uVar3 = param_6;
          if ((int)uVar7 <= (int)param_6) {
            uVar3 = uVar7;
          }
          if ((int)uVar7 < 0) {
            uVar3 = 0xffffffff;
          }
          pfVar2 = param_5 + (int)uVar3;
          if (pfVar1 <= param_5 + (int)uVar3) {
            pfVar2 = pfVar1;
          }
          if (param_5 < pfVar2) {
            uVar8 = ~(ulong)param_5;
            uVar3 = ((uint)(uVar8 + (long)pfVar2 >> 2) & 0x3fffffff) + 1;
            uVar6 = (ulong)uVar3 & 3;
            pfVar4 = param_5;
            if ((uVar3 & 3) != 0) {
              do {
                fVar9 = fVar9 + fVar15;
                uVar6 = uVar6 - 1;
                param_2 = param_2 + fVar12;
                fVar16 = fVar20 * fVar9 - fVar16 * fVar14;
                param_5 = pfVar4 + 1;
                *pfVar4 = fVar16 * param_2;
                pfVar4 = param_5;
              } while (uVar6 != 0);
            }
            if (0xb < uVar8 + (long)pfVar2) {
              do {
                fVar17 = fVar20 * (fVar9 + fVar15) - fVar16 * fVar14;
                fVar9 = fVar9 + fVar15 + fVar15;
                fVar18 = fVar20 * fVar9 - fVar17 * fVar14;
                fVar16 = param_2 + fVar12 + fVar12;
                fVar9 = fVar9 + fVar15;
                fVar19 = fVar20 * fVar9 - fVar18 * fVar14;
                fVar11 = fVar16 + fVar12;
                *param_5 = fVar17 * (param_2 + fVar12);
                param_5[1] = fVar18 * fVar16;
                fVar9 = fVar9 + fVar15;
                fVar16 = fVar20 * fVar9 - fVar19 * fVar14;
                param_2 = fVar11 + fVar12;
                param_5[2] = fVar19 * fVar11;
                param_5[3] = fVar16 * param_2;
                param_5 = param_5 + 4;
              } while (param_5 < pfVar2);
            }
          }
          uVar7 = (uint)(fVar21 - fVar21 * fVar9);
          uVar3 = param_6;
          if ((int)uVar7 <= (int)param_6) {
            uVar3 = uVar7;
          }
          if ((int)uVar7 < 0) {
            uVar3 = 0xffffffff;
          }
          pfVar2 = param_5 + (int)uVar3;
          if (pfVar1 <= param_5 + (int)uVar3) {
            pfVar2 = pfVar1;
          }
          if (param_5 < pfVar2) {
            uVar6 = ~(ulong)param_5;
            if (((uint)(uVar6 + (long)pfVar2) >> 2 & 1) == 0) {
              fVar9 = fVar9 + fVar15;
              fVar16 = (2.0 - fVar9 * 2.0) * fVar13 - fVar16 * fVar14;
              param_2 = param_2 + fVar12;
              *param_5 = fVar16 * param_2;
              param_5 = param_5 + 1;
            }
            if (3 < uVar6 + (long)pfVar2) {
              do {
                fVar16 = (2.0 - (fVar9 + fVar15) * 2.0) * fVar13 - fVar16 * fVar14;
                fVar9 = fVar9 + fVar15 + fVar15;
                *param_5 = fVar16 * (param_2 + fVar12);
                fVar16 = (2.0 - fVar9 * 2.0) * fVar13 - fVar16 * fVar14;
                param_2 = param_2 + fVar12 + fVar12;
                param_5[1] = fVar16 * param_2;
                param_5 = param_5 + 2;
              } while (param_5 < pfVar2);
            }
          }
          if (1.0 <= fVar9) {
            fVar9 = fVar9 + -1.0;
          }
        } while (param_5 < pfVar1);
      }
      break;
    case 2.8026e-45:
      if (param_6 != 0) {
        fVar20 = 1.0 / fVar15;
        do {
          uVar7 = (uint)((param_3 - fVar9) * fVar20);
          uVar3 = param_6;
          if ((int)uVar7 <= (int)param_6) {
            uVar3 = uVar7;
          }
          if ((int)uVar7 < 0) {
            uVar3 = 0xffffffff;
          }
          pfVar2 = param_5 + (int)uVar3;
          if (pfVar1 <= param_5 + (int)uVar3) {
            pfVar2 = pfVar1;
          }
          if (param_5 < pfVar2) {
            uVar8 = ~(ulong)param_5;
            uVar3 = ((uint)(uVar8 + (long)pfVar2 >> 2) & 0x3fffffff) + 1;
            uVar6 = (ulong)uVar3 & 3;
            pfVar4 = param_5;
            if ((uVar3 & 3) != 0) {
              do {
                param_2 = param_2 + fVar12;
                uVar6 = uVar6 - 1;
                fVar9 = fVar9 + fVar15;
                fVar16 = param_2 * fVar13 - fVar16 * fVar14;
                param_5 = pfVar4 + 1;
                *pfVar4 = fVar16;
                pfVar4 = param_5;
              } while (uVar6 != 0);
            }
            if (0xb < uVar8 + (long)pfVar2) {
              do {
                fVar16 = (param_2 + fVar12) * fVar13 - fVar16 * fVar14;
                param_2 = param_2 + fVar12 + fVar12;
                fVar21 = param_2 * fVar13 - fVar16 * fVar14;
                param_2 = param_2 + fVar12;
                *param_5 = fVar16;
                param_5[1] = fVar21;
                fVar21 = param_2 * fVar13 - fVar21 * fVar14;
                param_2 = param_2 + fVar12;
                fVar9 = fVar9 + fVar15 + fVar15 + fVar15 + fVar15;
                fVar16 = param_2 * fVar13 - fVar21 * fVar14;
                param_5[2] = fVar21;
                param_5[3] = fVar16;
                param_5 = param_5 + 4;
              } while (param_5 < pfVar2);
            }
          }
          uVar7 = (uint)(fVar20 - fVar20 * fVar9);
          uVar3 = param_6;
          if ((int)uVar7 <= (int)param_6) {
            uVar3 = uVar7;
          }
          if ((int)uVar7 < 0) {
            uVar3 = 0xffffffff;
          }
          pfVar2 = param_5 + (int)uVar3;
          if (pfVar1 <= param_5 + (int)uVar3) {
            pfVar2 = pfVar1;
          }
          if (param_5 < pfVar2) {
            uVar8 = ~(ulong)param_5;
            uVar3 = ((uint)(uVar8 + (long)pfVar2 >> 2) & 0x3fffffff) + 1;
            uVar6 = (ulong)uVar3 & 3;
            pfVar4 = param_5;
            if ((uVar3 & 3) != 0) {
              do {
                fVar16 = -(fVar14 * fVar16);
                param_2 = param_2 + fVar12;
                uVar6 = uVar6 - 1;
                fVar9 = fVar9 + fVar15;
                param_5 = pfVar4 + 1;
                *pfVar4 = fVar16;
                pfVar4 = param_5;
              } while (uVar6 != 0);
            }
            if (0xb < uVar8 + (long)pfVar2) {
              do {
                *param_5 = -(fVar14 * fVar16);
                fVar16 = fVar14 * fVar14 * fVar16;
                param_5[1] = fVar16;
                param_5[2] = -(fVar14 * fVar16);
                fVar16 = fVar14 * fVar14 * fVar16;
                param_2 = param_2 + fVar12 + fVar12 + fVar12 + fVar12;
                fVar9 = fVar9 + fVar15 + fVar15 + fVar15 + fVar15;
                param_5[3] = fVar16;
                param_5 = param_5 + 4;
              } while (param_5 < pfVar2);
            }
          }
          if (1.0 <= fVar9) {
            fVar9 = fVar9 + -1.0;
          }
        } while (param_5 < pfVar1);
      }
      break;
    case 4.2039e-45:
      if (param_6 != 0) {
        do {
          uVar7 = (uint)(1.0 / fVar15 - (1.0 / fVar15) * fVar9);
          uVar3 = param_6;
          if ((int)uVar7 <= (int)param_6) {
            uVar3 = uVar7;
          }
          if ((int)uVar7 < 0) {
            uVar3 = 0xffffffff;
          }
          pfVar2 = param_5 + (int)uVar3;
          if (pfVar1 <= param_5 + (int)uVar3) {
            pfVar2 = pfVar1;
          }
          if (param_5 < pfVar2) {
            uVar8 = ~(ulong)param_5;
            uVar3 = ((uint)(uVar8 + (long)pfVar2 >> 2) & 0x3fffffff) + 1;
            uVar6 = (ulong)uVar3 & 3;
            pfVar4 = param_5;
            if ((uVar3 & 3) != 0) {
              do {
                param_2 = param_2 + fVar12;
                fVar9 = fVar9 + fVar15;
                uVar6 = uVar6 - 1;
                fVar16 = param_2 * fVar13 * fVar9 - fVar16 * fVar14;
                param_5 = pfVar4 + 1;
                *pfVar4 = fVar16;
                pfVar4 = param_5;
              } while (uVar6 != 0);
            }
            if (0xb < uVar8 + (long)pfVar2) {
              do {
                fVar20 = (param_2 + fVar12) * fVar13 * (fVar9 + fVar15) - fVar16 * fVar14;
                fVar16 = param_2 + fVar12 + fVar12;
                fVar9 = fVar9 + fVar15 + fVar15;
                param_2 = fVar16 + fVar12;
                fVar16 = fVar16 * fVar13 * fVar9 - fVar20 * fVar14;
                fVar9 = fVar9 + fVar15;
                *param_5 = fVar20;
                param_5[1] = fVar16;
                fVar20 = param_2 * fVar13 * fVar9 - fVar16 * fVar14;
                param_2 = param_2 + fVar12;
                fVar9 = fVar9 + fVar15;
                fVar16 = param_2 * fVar13 * fVar9 - fVar20 * fVar14;
                param_5[2] = fVar20;
                param_5[3] = fVar16;
                param_5 = param_5 + 4;
              } while (param_5 < pfVar2);
            }
          }
          if (1.0 <= fVar9) {
            fVar9 = fVar9 + -1.0;
          }
        } while (param_5 < pfVar1);
      }
      break;
    case 5.60519e-45:
      if (param_6 != 0) {
        do {
          uVar7 = (uint)(1.0 / fVar15 - (1.0 / fVar15) * fVar9);
          uVar3 = param_6;
          if ((int)uVar7 <= (int)param_6) {
            uVar3 = uVar7;
          }
          if ((int)uVar7 < 0) {
            uVar3 = 0xffffffff;
          }
          pfVar2 = param_5 + (int)uVar3;
          if (pfVar1 <= param_5 + (int)uVar3) {
            pfVar2 = pfVar1;
          }
          if (param_5 < pfVar2) {
            uVar6 = ~(ulong)param_5;
            if (((uint)(uVar6 + (long)pfVar2) >> 2 & 1) == 0) {
              param_2 = param_2 + fVar12;
              fVar9 = fVar9 + fVar15;
              fVar16 = param_2 * fVar13 * (1.0 - fVar9) - fVar16 * fVar14;
              *param_5 = fVar16;
              param_5 = param_5 + 1;
            }
            pfVar4 = param_5;
            if (3 < uVar6 + (long)pfVar2) {
              do {
                fVar20 = (param_2 + fVar12) * fVar13 * (1.0 - (fVar9 + fVar15)) - fVar16 * fVar14;
                param_2 = param_2 + fVar12 + fVar12;
                fVar9 = fVar9 + fVar15 + fVar15;
                fVar16 = param_2 * fVar13 * (1.0 - fVar9) - fVar20 * fVar14;
                param_5 = pfVar4 + 2;
                *pfVar4 = fVar20;
                pfVar4[1] = fVar16;
                pfVar4 = param_5;
              } while (param_5 < pfVar2);
            }
          }
          if (1.0 <= fVar9) {
            fVar9 = fVar9 + -1.0;
          }
        } while (param_5 < pfVar1);
      }
      break;
    case 7.00649e-45:
      if (param_6 != 0) {
        do {
          uVar7 = (uint)(1.0 / fVar15 - (1.0 / fVar15) * fVar9);
          uVar3 = param_6;
          if ((int)uVar7 <= (int)param_6) {
            uVar3 = uVar7;
          }
          if ((int)uVar7 < 0) {
            uVar3 = 0xffffffff;
          }
          pfVar2 = param_5 + (int)uVar3;
          if (pfVar1 <= param_5 + (int)uVar3) {
            pfVar2 = pfVar1;
          }
          if (param_5 < pfVar2) {
            uVar8 = ~(ulong)param_5;
            uVar3 = ((uint)(uVar8 + (long)pfVar2 >> 2) & 0x3fffffff) + 1;
            uVar6 = (ulong)uVar3 & 3;
            fVar20 = fVar13 * 4.656613e-10 * (float)(uint)((ulong)lVar5 >> 0x21);
            pfVar4 = param_5;
            if ((uVar3 & 3) != 0) {
              do {
                param_2 = param_2 + fVar12;
                uVar6 = uVar6 - 1;
                fVar9 = fVar9 + fVar15;
                fVar16 = fVar20 * param_2 - fVar16 * fVar14;
                param_5 = pfVar4 + 1;
                *pfVar4 = fVar16;
                pfVar4 = param_5;
              } while (uVar6 != 0);
            }
            if (0xb < uVar8 + (long)pfVar2) {
              do {
                fVar16 = fVar20 * (param_2 + fVar12) - fVar16 * fVar14;
                param_2 = param_2 + fVar12 + fVar12;
                fVar21 = fVar20 * param_2 - fVar16 * fVar14;
                param_2 = param_2 + fVar12;
                *param_5 = fVar16;
                param_5[1] = fVar21;
                fVar21 = fVar20 * param_2 - fVar21 * fVar14;
                param_2 = param_2 + fVar12;
                fVar9 = fVar9 + fVar15 + fVar15 + fVar15 + fVar15;
                fVar16 = fVar20 * param_2 - fVar21 * fVar14;
                param_5[2] = fVar21;
                param_5[3] = fVar16;
                param_5 = param_5 + 4;
              } while (param_5 < pfVar2);
            }
          }
          if (1.0 <= fVar9) {
            fVar9 = fVar9 + -1.0;
            lVar5 = lVar5 * 0x5851f42d4c957f2d + 1;
          }
        } while (param_5 < pfVar1);
      }
    }
  }
  if (fVar15 != 0.0) {
    *param_4 = fVar16;
    param_4[1] = fVar13;
    param_4[2] = fVar14;
    param_4[3] = fVar9;
    param_4[4] = fVar15;
    param_4[5] = fVar10;
    *(long *)(param_4 + 6) = lVar5;
    if (fVar10 != 7.00649e-45) {
      if (fVar10 == 0.0) {
        fVar10 = 6.2831855;
      }
      else {
        fVar10 = 1.0;
      }
      fVar10 = fmodf(fVar9,fVar10);
      param_4[3] = fVar10;
    }
  }
  return;
}


