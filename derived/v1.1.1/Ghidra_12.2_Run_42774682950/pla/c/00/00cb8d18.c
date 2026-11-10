/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cb8d18; name: FUN_00cb8d18
 */


undefined1  [16] FUN_00cb8d18(undefined8 *param_1)

{
  float *pfVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
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
  long lVar17;
  float fVar18;
  float fVar19;
  
  fVar5 = (float)*param_1;
  fVar8 = fVar5 * fVar5;
  fVar12 = (float)((ulong)*param_1 >> 0x20);
  fVar9 = fVar12 * fVar12;
  fVar13 = (float)param_1[1];
  fVar11 = fVar13 * fVar13;
  fVar7 = (float)((ulong)param_1[1] >> 0x20);
  fVar10 = fVar7 * fVar7;
  fVar4 = fVar5 * fVar12 + fVar13 * fVar7;
  fVar6 = *(float *)PTR_FloatPi_04372db0 * 0.5;
  fVar2 = fVar10 + fVar11 + fVar8 + fVar9;
  fVar15 = fVar6 * fVar2;
  if (fVar15 < fVar4) {
    if ((fVar5 == 0.0) && (fVar7 == 0.0)) {
      fVar5 = 0.0;
    }
    else if (fVar7 < 0.0) {
      if (0.0 <= fVar5) {
        fVar7 = -fVar7;
        if (fVar5 <= fVar7) {
          fVar7 = fVar5 / fVar7;
          fVar2 = fVar7 * fVar7;
          fVar5 = fVar2 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x10) +
                          fVar2 * (fVar2 * (*(float *)(PTR_AtanCoefficients_04372e40 + 8) +
                                           fVar2 * (fVar2 * *(float *)PTR_AtanCoefficients_04372e40
                                                   - *(float *)(PTR_AtanCoefficients_04372e40 + 4)))
                                  - *(float *)(PTR_AtanCoefficients_04372e40 + 0xc))) -
                  *(float *)(PTR_AtanCoefficients_04372e40 + 0x14);
          fVar4 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x18);
          fVar10 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c);
          pfVar1 = (float *)PTR_FloatPi_04372cf0;
          goto LAB_00cb9e14;
        }
        fVar7 = fVar7 / fVar5;
        fVar2 = fVar7 * fVar7;
        fVar5 = *(float *)PTR_FloatPiDivided2_04372d38 +
                fVar7 * (fVar2 * (fVar2 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
                                          fVar2 * (fVar2 * (*(float *)(PTR_AtanCoefficients_04372e40
                                                                      + 0x10) +
                                                           fVar2 * (fVar2 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar2 * (fVar2 * *(float *)
                                                  PTR_AtanCoefficients_04372e40 -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14)
                                                  )) -
                                 *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c)) + 1.0);
      }
      else {
        if (fVar7 <= fVar5) {
          fVar7 = fVar5 / fVar7;
          fVar2 = fVar7 * fVar7;
          fVar5 = fVar2 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x10) +
                          fVar2 * (fVar2 * (*(float *)(PTR_AtanCoefficients_04372e40 + 8) +
                                           fVar2 * (fVar2 * *(float *)PTR_AtanCoefficients_04372e40
                                                   - *(float *)(PTR_AtanCoefficients_04372e40 + 4)))
                                  - *(float *)(PTR_AtanCoefficients_04372e40 + 0xc))) -
                  *(float *)(PTR_AtanCoefficients_04372e40 + 0x14);
          fVar4 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x18);
          fVar10 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c);
          pfVar1 = (float *)PTR_FloatPi_04372cf0;
          goto LAB_00cb9c54;
        }
        fVar7 = fVar7 / fVar5;
        fVar2 = fVar7 * fVar7;
        fVar10 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c);
        fVar4 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
                fVar2 * (fVar2 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x10) +
                                 fVar2 * (fVar2 * (*(float *)(PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar2 * (fVar2 * *(float *)
                                                  PTR_AtanCoefficients_04372e40 -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 4))) -
                                         *(float *)(PTR_AtanCoefficients_04372e40 + 0xc))) -
                        *(float *)(PTR_AtanCoefficients_04372e40 + 0x14));
        fVar5 = -*(float *)PTR_FloatPiDivided2_04372d38;
LAB_00cb9e20:
        fVar5 = fVar5 - fVar7 * (fVar2 * (fVar2 * fVar4 - fVar10) + 1.0);
      }
    }
    else if (fVar5 < 0.0) {
      fVar5 = -fVar5;
      if (fVar7 < fVar5) {
        fVar7 = fVar7 / fVar5;
        fVar2 = fVar7 * fVar7;
        fVar5 = fVar2 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x10) +
                        fVar2 * (fVar2 * (*(float *)(PTR_AtanCoefficients_04372e40 + 8) +
                                         fVar2 * (fVar2 * *(float *)PTR_AtanCoefficients_04372e40 -
                                                 *(float *)(PTR_AtanCoefficients_04372e40 + 4))) -
                                *(float *)(PTR_AtanCoefficients_04372e40 + 0xc))) -
                *(float *)(PTR_AtanCoefficients_04372e40 + 0x14);
        fVar4 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x18);
        fVar10 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c);
        pfVar1 = (float *)PTR_FloatPiDivided2_04372d38;
LAB_00cb9c54:
        fVar5 = fVar7 * (fVar2 * (fVar2 * (fVar4 + fVar2 * fVar5) - fVar10) + 1.0) - *pfVar1;
      }
      else {
        fVar5 = fVar5 / fVar7;
        fVar2 = fVar5 * fVar5;
        fVar5 = -(fVar5 * (fVar2 * (fVar2 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
                                            fVar2 * (fVar2 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 0x10) +
                                                  fVar2 * (fVar2 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar2 * (fVar2 * *(float *)
                                                  PTR_AtanCoefficients_04372e40 -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14)
                                                  )) -
                                   *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c)) + 1.0));
      }
    }
    else {
      if (fVar7 < fVar5) {
        fVar7 = fVar7 / fVar5;
        fVar2 = fVar7 * fVar7;
        fVar5 = fVar2 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x10) +
                        fVar2 * (fVar2 * (*(float *)(PTR_AtanCoefficients_04372e40 + 8) +
                                         fVar2 * (fVar2 * *(float *)PTR_AtanCoefficients_04372e40 -
                                                 *(float *)(PTR_AtanCoefficients_04372e40 + 4))) -
                                *(float *)(PTR_AtanCoefficients_04372e40 + 0xc))) -
                *(float *)(PTR_AtanCoefficients_04372e40 + 0x14);
        fVar4 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x18);
        fVar10 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c);
        pfVar1 = (float *)PTR_FloatPiDivided2_04372d38;
LAB_00cb9e14:
        fVar4 = fVar4 + fVar2 * fVar5;
        fVar5 = *pfVar1;
        goto LAB_00cb9e20;
      }
      fVar5 = fVar5 / fVar7;
      fVar2 = fVar5 * fVar5;
      fVar5 = fVar5 * (fVar2 * (fVar2 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
                                        fVar2 * (fVar2 * (*(float *)(PTR_AtanCoefficients_04372e40 +
                                                                    0x10) +
                                                         fVar2 * (fVar2 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar2 * (fVar2 * *(float *)
                                                  PTR_AtanCoefficients_04372e40 -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                                - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14)))
                               - *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c)) + 1.0);
    }
    fVar5 = fVar5 + fVar5;
  }
  else {
    if (-fVar15 <= fVar4) {
      fVar6 = fVar7 * (fVar5 + fVar5) - fVar13 * (fVar12 + fVar12);
      fVar14 = fVar10 + ((fVar9 - fVar8) - fVar11);
      fVar15 = 0.0;
      if ((fVar6 != 0.0) || (fVar16 = 0.0, fVar14 != 0.0)) {
        if (fVar14 < 0.0) {
          if (0.0 <= fVar6) {
            fVar14 = -fVar14;
            if (fVar6 <= fVar14) {
              fVar14 = fVar6 / fVar14;
              fVar6 = fVar14 * fVar14;
              fVar16 = fVar6 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x10) +
                               fVar6 * (fVar6 * (*(float *)(PTR_AtanCoefficients_04372e40 + 8) +
                                                fVar6 * (fVar6 * *(float *)
                                                  PTR_AtanCoefficients_04372e40 -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 4))) -
                                       *(float *)(PTR_AtanCoefficients_04372e40 + 0xc))) -
                       *(float *)(PTR_AtanCoefficients_04372e40 + 0x14);
              fVar18 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x18);
              fVar19 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c);
              pfVar1 = (float *)PTR_FloatPi_04372cf0;
              goto LAB_00cb9564;
            }
            fVar14 = fVar14 / fVar6;
            fVar6 = fVar14 * fVar14;
            fVar16 = *(float *)PTR_FloatPiDivided2_04372d38 +
                     fVar14 * (fVar6 * (fVar6 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
                                                fVar6 * (fVar6 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 0x10) +
                                                  fVar6 * (fVar6 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar6 * (fVar6 * *(float *)
                                                  PTR_AtanCoefficients_04372e40 -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14)
                                                  )) -
                                       *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c)) + 1.0);
          }
          else {
            if (fVar6 < fVar14) {
              fVar14 = fVar14 / fVar6;
              fVar6 = fVar14 * fVar14;
              fVar19 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c);
              fVar18 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
                       fVar6 * (fVar6 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x10) +
                                        fVar6 * (fVar6 * (*(float *)(PTR_AtanCoefficients_04372e40 +
                                                                    8) +
                                                         fVar6 * (fVar6 * *(float *)
                                                  PTR_AtanCoefficients_04372e40 -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 4))) -
                                                *(float *)(PTR_AtanCoefficients_04372e40 + 0xc))) -
                               *(float *)(PTR_AtanCoefficients_04372e40 + 0x14));
              fVar16 = -*(float *)PTR_FloatPiDivided2_04372d38;
              goto LAB_00cb9570;
            }
            fVar6 = fVar6 / fVar14;
            fVar14 = fVar6 * fVar6;
            fVar16 = fVar6 * (fVar14 * (fVar14 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
                                                 fVar14 * (fVar14 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 0x10) +
                                                  fVar14 * (fVar14 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar14 * (fVar14 * *(float *)
                                                  PTR_AtanCoefficients_04372e40 -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14)
                                                  )) -
                                       *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c)) + 1.0) -
                     *(float *)PTR_FloatPi_04372cf0;
          }
        }
        else if (fVar6 < 0.0) {
          fVar6 = -fVar6;
          if (fVar14 < fVar6) {
            fVar14 = fVar14 / fVar6;
            fVar6 = fVar14 * fVar14;
            fVar16 = fVar14 * (fVar6 * (fVar6 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
                                                fVar6 * (fVar6 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 0x10) +
                                                  fVar6 * (fVar6 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar6 * (fVar6 * *(float *)
                                                  PTR_AtanCoefficients_04372e40 -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14)
                                                  )) -
                                       *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c)) + 1.0) -
                     *(float *)PTR_FloatPiDivided2_04372d38;
          }
          else {
            fVar6 = fVar6 / fVar14;
            fVar14 = fVar6 * fVar6;
            fVar16 = -(fVar6 * (fVar14 * (fVar14 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x18)
                                                   + fVar14 * (fVar14 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 0x10) +
                                                  fVar14 * (fVar14 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar14 * (fVar14 * *(float *)
                                                  PTR_AtanCoefficients_04372e40 -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14)
                                                  )) -
                                         *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c)) + 1.0));
          }
        }
        else if (fVar14 < fVar6) {
          fVar14 = fVar14 / fVar6;
          fVar6 = fVar14 * fVar14;
          fVar16 = fVar6 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x10) +
                           fVar6 * (fVar6 * (*(float *)(PTR_AtanCoefficients_04372e40 + 8) +
                                            fVar6 * (fVar6 * *(float *)PTR_AtanCoefficients_04372e40
                                                    - *(float *)(PTR_AtanCoefficients_04372e40 + 4))
                                            ) - *(float *)(PTR_AtanCoefficients_04372e40 + 0xc))) -
                   *(float *)(PTR_AtanCoefficients_04372e40 + 0x14);
          fVar18 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x18);
          fVar19 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c);
          pfVar1 = (float *)PTR_FloatPiDivided2_04372d38;
LAB_00cb9564:
          fVar18 = fVar18 + fVar6 * fVar16;
          fVar16 = *pfVar1;
LAB_00cb9570:
          fVar16 = fVar16 - fVar14 * (fVar6 * (fVar6 * fVar18 - fVar19) + 1.0);
        }
        else {
          fVar6 = fVar6 / fVar14;
          fVar14 = fVar6 * fVar6;
          fVar16 = fVar6 * (fVar14 * (fVar14 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
                                               fVar14 * (fVar14 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 0x10) +
                                                  fVar14 * (fVar14 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar14 * (fVar14 * *(float *)
                                                  PTR_AtanCoefficients_04372e40 -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14)
                                                  )) -
                                     *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c)) + 1.0);
        }
      }
      fVar5 = fVar7 * (fVar12 + fVar12) - fVar13 * (fVar5 + fVar5);
      fVar10 = fVar10 + ((fVar8 - fVar9) - fVar11);
      if ((fVar5 != 0.0) || (fVar10 != 0.0)) {
        if (fVar10 < 0.0) {
          if (0.0 <= fVar5) {
            fVar10 = -fVar10;
            if (fVar5 <= fVar10) {
              fVar10 = fVar5 / fVar10;
              fVar5 = fVar10 * fVar10;
              fVar7 = fVar5 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x10) +
                              fVar5 * (fVar5 * (*(float *)(PTR_AtanCoefficients_04372e40 + 8) +
                                               fVar5 * (fVar5 * *(float *)
                                                  PTR_AtanCoefficients_04372e40 -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 4))) -
                                      *(float *)(PTR_AtanCoefficients_04372e40 + 0xc))) -
                      *(float *)(PTR_AtanCoefficients_04372e40 + 0x14);
              fVar6 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x18);
              fVar8 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c);
              pfVar1 = (float *)PTR_FloatPi_04372cf0;
              goto LAB_00cb95e0;
            }
            fVar10 = fVar10 / fVar5;
            fVar5 = fVar10 * fVar10;
            fVar15 = *(float *)PTR_FloatPiDivided2_04372d38 +
                     fVar10 * (fVar5 * (fVar5 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
                                                fVar5 * (fVar5 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 0x10) +
                                                  fVar5 * (fVar5 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar5 * (fVar5 * *(float *)
                                                  PTR_AtanCoefficients_04372e40 -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14)
                                                  )) -
                                       *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c)) + 1.0);
          }
          else {
            if (fVar10 <= fVar5) {
              fVar10 = fVar5 / fVar10;
              fVar5 = fVar10 * fVar10;
              fVar7 = fVar5 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x10) +
                              fVar5 * (fVar5 * (*(float *)(PTR_AtanCoefficients_04372e40 + 8) +
                                               fVar5 * (fVar5 * *(float *)
                                                  PTR_AtanCoefficients_04372e40 -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 4))) -
                                      *(float *)(PTR_AtanCoefficients_04372e40 + 0xc))) -
                      *(float *)(PTR_AtanCoefficients_04372e40 + 0x14);
              fVar6 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x18);
              fVar8 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c);
              pfVar1 = (float *)PTR_FloatPi_04372cf0;
              goto LAB_00cb9420;
            }
            fVar10 = fVar10 / fVar5;
            fVar5 = fVar10 * fVar10;
            fVar8 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c);
            fVar6 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
                    fVar5 * (fVar5 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x10) +
                                     fVar5 * (fVar5 * (*(float *)(PTR_AtanCoefficients_04372e40 + 8)
                                                      + fVar5 * (fVar5 * *(float *)
                                                  PTR_AtanCoefficients_04372e40 -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 4))) -
                                             *(float *)(PTR_AtanCoefficients_04372e40 + 0xc))) -
                            *(float *)(PTR_AtanCoefficients_04372e40 + 0x14));
            fVar15 = -*(float *)PTR_FloatPiDivided2_04372d38;
LAB_00cb95ec:
            fVar15 = fVar15 - fVar10 * (fVar5 * (fVar5 * fVar6 - fVar8) + 1.0);
          }
        }
        else if (fVar5 < 0.0) {
          fVar5 = -fVar5;
          if (fVar10 < fVar5) {
            fVar10 = fVar10 / fVar5;
            fVar5 = fVar10 * fVar10;
            fVar7 = fVar5 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x10) +
                            fVar5 * (fVar5 * (*(float *)(PTR_AtanCoefficients_04372e40 + 8) +
                                             fVar5 * (fVar5 * *(float *)
                                                  PTR_AtanCoefficients_04372e40 -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 4))) -
                                    *(float *)(PTR_AtanCoefficients_04372e40 + 0xc))) -
                    *(float *)(PTR_AtanCoefficients_04372e40 + 0x14);
            fVar6 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x18);
            fVar8 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c);
            pfVar1 = (float *)PTR_FloatPiDivided2_04372d38;
LAB_00cb9420:
            fVar15 = fVar10 * (fVar5 * (fVar5 * (fVar6 + fVar5 * fVar7) - fVar8) + 1.0) - *pfVar1;
          }
          else {
            fVar5 = fVar5 / fVar10;
            fVar7 = fVar5 * fVar5;
            fVar15 = -(fVar5 * (fVar7 * (fVar7 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
                                                 fVar7 * (fVar7 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 0x10) +
                                                  fVar7 * (fVar7 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar7 * (fVar7 * *(float *)
                                                  PTR_AtanCoefficients_04372e40 -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14)
                                                  )) -
                                        *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c)) + 1.0));
          }
        }
        else {
          if (fVar10 < fVar5) {
            fVar10 = fVar10 / fVar5;
            fVar5 = fVar10 * fVar10;
            fVar7 = fVar5 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x10) +
                            fVar5 * (fVar5 * (*(float *)(PTR_AtanCoefficients_04372e40 + 8) +
                                             fVar5 * (fVar5 * *(float *)
                                                  PTR_AtanCoefficients_04372e40 -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 4))) -
                                    *(float *)(PTR_AtanCoefficients_04372e40 + 0xc))) -
                    *(float *)(PTR_AtanCoefficients_04372e40 + 0x14);
            fVar6 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x18);
            fVar8 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c);
            pfVar1 = (float *)PTR_FloatPiDivided2_04372d38;
LAB_00cb95e0:
            fVar6 = fVar6 + fVar5 * fVar7;
            fVar15 = *pfVar1;
            goto LAB_00cb95ec;
          }
          fVar5 = fVar5 / fVar10;
          fVar7 = fVar5 * fVar5;
          fVar15 = fVar5 * (fVar7 * (fVar7 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
                                             fVar7 * (fVar7 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 0x10) +
                                                  fVar7 * (fVar7 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar7 * (fVar7 * *(float *)
                                                  PTR_AtanCoefficients_04372e40 -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14)
                                                  )) -
                                    *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c)) + 1.0);
        }
      }
      fVar2 = (fVar4 + fVar4) / fVar2;
      if (0.0 <= fVar2) {
        if (0.70710677 < fVar2) {
          fVar7 = 1.0 - fVar2 * fVar2;
          fVar5 = SQRT(fVar7);
          fVar6 = *(float *)PTR_FloatPiDivided2_04372d38;
          if (NAN(fVar5)) {
            fVar5 = sqrtf(fVar7);
          }
          fVar5 = fVar5 / fVar2;
          fVar2 = fVar5 * fVar5;
          fVar6 = fVar6 - fVar5 * (fVar2 * (fVar2 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x18
                                                               ) +
                                                    fVar2 * (fVar2 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 0x10) +
                                                  fVar2 * (fVar2 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar2 * (*(float *)PTR_AtanCoefficients_04372e40 *
                                                           fVar2 - *(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14)
                                                  )) -
                                           *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c)) + 1.0);
        }
        else {
          fVar7 = 1.0 - fVar2 * fVar2;
          fVar5 = SQRT(fVar7);
          if (NAN(fVar5)) {
            fVar5 = sqrtf(fVar7);
          }
          fVar2 = fVar2 / fVar5;
          fVar5 = fVar2 * fVar2;
          fVar6 = fVar2 * (fVar5 * (fVar5 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
                                            fVar5 * (fVar5 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 0x10) +
                                                  fVar5 * (fVar5 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar5 * (*(float *)PTR_AtanCoefficients_04372e40 *
                                                           fVar5 - *(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14)
                                                  )) -
                                   *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c)) + 1.0);
        }
      }
      else if (fVar2 < -0.70710677) {
        fVar7 = 1.0 - fVar2 * fVar2;
        fVar5 = SQRT(fVar7);
        fVar6 = *(float *)PTR_FloatPiDivided2_04372d38;
        if (NAN(fVar5)) {
          fVar5 = sqrtf(fVar7);
        }
        fVar2 = -fVar5 / fVar2;
        fVar5 = fVar2 * fVar2;
        fVar6 = fVar2 * (fVar5 * (fVar5 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
                                          fVar5 * (fVar5 * (*(float *)(PTR_AtanCoefficients_04372e40
                                                                      + 0x10) +
                                                           fVar5 * (fVar5 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar5 * (*(float *)PTR_AtanCoefficients_04372e40 *
                                                           fVar5 - *(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14)
                                                  )) -
                                 *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c)) + 1.0) - fVar6;
      }
      else {
        fVar7 = 1.0 - fVar2 * fVar2;
        fVar5 = SQRT(fVar7);
        if (NAN(fVar5)) {
          fVar5 = sqrtf(fVar7);
        }
        fVar5 = -fVar2 / fVar5;
        fVar2 = fVar5 * fVar5;
        fVar6 = -(fVar5 * (fVar2 * (fVar2 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
                                            fVar2 * (fVar2 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 0x10) +
                                                  fVar2 * (fVar2 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar2 * (*(float *)PTR_AtanCoefficients_04372e40 *
                                                           fVar2 - *(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14)
                                                  )) -
                                   *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c)) + 1.0));
      }
      lVar17 = CONCAT44(fVar15,fVar16);
      goto LAB_00cb8fa8;
    }
    if ((fVar5 == 0.0) && (fVar7 == 0.0)) {
      fVar5 = 0.0;
    }
    else if (fVar7 < 0.0) {
      if (0.0 <= fVar5) {
        fVar7 = -fVar7;
        if (fVar5 <= fVar7) {
          fVar7 = fVar5 / fVar7;
          fVar2 = fVar7 * fVar7;
          fVar5 = fVar2 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x10) +
                          fVar2 * (fVar2 * (*(float *)(PTR_AtanCoefficients_04372e40 + 8) +
                                           fVar2 * (fVar2 * *(float *)PTR_AtanCoefficients_04372e40
                                                   - *(float *)(PTR_AtanCoefficients_04372e40 + 4)))
                                  - *(float *)(PTR_AtanCoefficients_04372e40 + 0xc))) -
                  *(float *)(PTR_AtanCoefficients_04372e40 + 0x14);
          fVar4 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x18);
          fVar10 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c);
          pfVar1 = (float *)PTR_FloatPi_04372cf0;
          goto LAB_00cb9e90;
        }
        fVar7 = fVar7 / fVar5;
        fVar2 = fVar7 * fVar7;
        fVar5 = *(float *)PTR_FloatPiDivided2_04372d38 +
                fVar7 * (fVar2 * (fVar2 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
                                          fVar2 * (fVar2 * (*(float *)(PTR_AtanCoefficients_04372e40
                                                                      + 0x10) +
                                                           fVar2 * (fVar2 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar2 * (fVar2 * *(float *)
                                                  PTR_AtanCoefficients_04372e40 -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14)
                                                  )) -
                                 *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c)) + 1.0);
      }
      else {
        if (fVar7 <= fVar5) {
          fVar7 = fVar5 / fVar7;
          fVar2 = fVar7 * fVar7;
          fVar5 = fVar2 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x10) +
                          fVar2 * (fVar2 * (*(float *)(PTR_AtanCoefficients_04372e40 + 8) +
                                           fVar2 * (fVar2 * *(float *)PTR_AtanCoefficients_04372e40
                                                   - *(float *)(PTR_AtanCoefficients_04372e40 + 4)))
                                  - *(float *)(PTR_AtanCoefficients_04372e40 + 0xc))) -
                  *(float *)(PTR_AtanCoefficients_04372e40 + 0x14);
          fVar4 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x18);
          fVar10 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c);
          pfVar1 = (float *)PTR_FloatPi_04372cf0;
          goto LAB_00cb9cd0;
        }
        fVar7 = fVar7 / fVar5;
        fVar2 = fVar7 * fVar7;
        fVar10 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c);
        fVar4 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
                fVar2 * (fVar2 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x10) +
                                 fVar2 * (fVar2 * (*(float *)(PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar2 * (fVar2 * *(float *)
                                                  PTR_AtanCoefficients_04372e40 -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 4))) -
                                         *(float *)(PTR_AtanCoefficients_04372e40 + 0xc))) -
                        *(float *)(PTR_AtanCoefficients_04372e40 + 0x14));
        fVar5 = -*(float *)PTR_FloatPiDivided2_04372d38;
LAB_00cb9e9c:
        fVar5 = fVar5 - fVar7 * (fVar2 * (fVar2 * fVar4 - fVar10) + 1.0);
      }
    }
    else if (fVar5 < 0.0) {
      fVar5 = -fVar5;
      if (fVar7 < fVar5) {
        fVar7 = fVar7 / fVar5;
        fVar2 = fVar7 * fVar7;
        fVar5 = fVar2 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x10) +
                        fVar2 * (fVar2 * (*(float *)(PTR_AtanCoefficients_04372e40 + 8) +
                                         fVar2 * (fVar2 * *(float *)PTR_AtanCoefficients_04372e40 -
                                                 *(float *)(PTR_AtanCoefficients_04372e40 + 4))) -
                                *(float *)(PTR_AtanCoefficients_04372e40 + 0xc))) -
                *(float *)(PTR_AtanCoefficients_04372e40 + 0x14);
        fVar4 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x18);
        fVar10 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c);
        pfVar1 = (float *)PTR_FloatPiDivided2_04372d38;
LAB_00cb9cd0:
        fVar5 = fVar7 * (fVar2 * (fVar2 * (fVar4 + fVar2 * fVar5) - fVar10) + 1.0) - *pfVar1;
      }
      else {
        fVar5 = fVar5 / fVar7;
        fVar2 = fVar5 * fVar5;
        fVar5 = -(fVar5 * (fVar2 * (fVar2 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
                                            fVar2 * (fVar2 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 0x10) +
                                                  fVar2 * (fVar2 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar2 * (fVar2 * *(float *)
                                                  PTR_AtanCoefficients_04372e40 -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14)
                                                  )) -
                                   *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c)) + 1.0));
      }
    }
    else {
      if (fVar7 < fVar5) {
        fVar7 = fVar7 / fVar5;
        fVar2 = fVar7 * fVar7;
        fVar5 = fVar2 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x10) +
                        fVar2 * (fVar2 * (*(float *)(PTR_AtanCoefficients_04372e40 + 8) +
                                         fVar2 * (fVar2 * *(float *)PTR_AtanCoefficients_04372e40 -
                                                 *(float *)(PTR_AtanCoefficients_04372e40 + 4))) -
                                *(float *)(PTR_AtanCoefficients_04372e40 + 0xc))) -
                *(float *)(PTR_AtanCoefficients_04372e40 + 0x14);
        fVar4 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x18);
        fVar10 = *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c);
        pfVar1 = (float *)PTR_FloatPiDivided2_04372d38;
LAB_00cb9e90:
        fVar4 = fVar4 + fVar2 * fVar5;
        fVar5 = *pfVar1;
        goto LAB_00cb9e9c;
      }
      fVar5 = fVar5 / fVar7;
      fVar2 = fVar5 * fVar5;
      fVar5 = fVar5 * (fVar2 * (fVar2 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
                                        fVar2 * (fVar2 * (*(float *)(PTR_AtanCoefficients_04372e40 +
                                                                    0x10) +
                                                         fVar2 * (fVar2 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar2 * (fVar2 * *(float *)
                                                  PTR_AtanCoefficients_04372e40 -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                                - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14)))
                               - *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c)) + 1.0);
    }
    fVar5 = fVar5 * -2.0;
    fVar6 = *(float *)PTR_FloatPi_04372db0 * -0.5;
  }
  lVar17 = (ulong)(uint)fVar5 << 0x20;
LAB_00cb8fa8:
  auVar3._8_4_ = fVar6;
  auVar3._0_8_ = lVar17;
  auVar3._12_4_ = 0;
  return auVar3;
}


