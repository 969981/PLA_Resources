/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4c620; name: FUN_02e4c620
 */


void FUN_02e4c620(float param_1,long param_2,long param_3,float *param_4,float *param_5,
                 float *param_6)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  char cVar10;
  float *pfVar11;
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
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined8 local_b0;
  float local_a8;
  undefined8 local_a0;
  float local_98;
  
  pfVar11 = param_4 + 3;
  if (param_4 == (float *)0x0) {
    pfVar11 = param_5;
  }
  local_a0 = *(undefined8 *)pfVar11;
  local_98 = pfVar11[2];
  uVar6 = FUN_02e4bb18(param_3,&local_a0);
  if ((uVar6 >> 7 & 1) == 0) {
    local_b0 = 0;
    local_a8 = 0.0;
    local_c0 = *param_6 - *param_5;
    local_bc = param_6[1] - param_5[1];
    local_b8 = param_6[2] - param_5[2];
    uVar8 = FUN_02e4c050(param_3,param_5,&local_c0,&local_b0);
    fVar5 = local_a8;
    if ((uVar8 & 1) != 0) {
      fVar3 = (float)local_b0;
      fVar4 = local_b0._4_4_;
      if (param_4 != (float *)0x0) {
        lVar9 = *(long *)(param_4 + 6);
        local_c0 = (float)local_b0 + (*(float *)(lVar9 + 0x24) + *(float *)(lVar9 + 0x18)) * 0.001;
        local_bc = local_b0._4_4_ + (*(float *)(lVar9 + 0x28) + *(float *)(lVar9 + 0x1c)) * 0.001;
        local_b8 = local_a8 + (*(float *)(lVar9 + 0x2c) + *(float *)(lVar9 + 0x20)) * 0.001;
        iVar7 = FUN_02e4bb18(lVar9,&local_c0);
        if (iVar7 < 0) {
          return;
        }
      }
      fVar18 = local_a0._4_4_ - fVar4;
      fVar12 = (float)local_a0 - fVar3;
      fVar15 = local_98 - fVar5;
      fVar24 = SQRT(fVar12 * fVar12 + fVar18 * fVar18 + fVar15 * fVar15);
      if (0.001 <= fVar24) {
        fVar20 = 1.0 / fVar24;
        fVar12 = fVar20 * fVar12;
        fVar18 = fVar20 * fVar18;
        fVar20 = fVar20 * fVar15;
        local_c0 = fVar12;
        local_bc = fVar18;
        local_b8 = fVar20;
        if (param_4 == (float *)0x0) {
          fVar25 = 0.0;
          fVar13 = 0.0;
          fVar15 = fVar24;
        }
        else {
          uVar8 = FUN_02e4bf9c(*(undefined8 *)(param_4 + 6),param_4,&local_c0);
          if ((uVar8 & 1) == 0) {
            return;
          }
          fVar15 = (float)NEON_fminnm(*param_4 * fVar12 + fVar18 * param_4[1] + fVar20 * param_4[2],
                                      0x3f800000);
          if (fVar15 <= -1.0) {
            fVar15 = -1.0;
          }
          fVar13 = acosf(fVar15);
          fVar25 = param_4[0x11] + fVar13 * 0.31830987;
          if (1.0 < fVar25) {
            return;
          }
          fVar15 = param_4[0xd] + fVar24;
        }
        fVar16 = fVar3 - *param_6;
        fVar14 = fVar4 - param_6[1];
        fVar19 = fVar5 - param_6[2];
        fVar23 = SQRT(fVar16 * fVar16 + fVar14 * fVar14 + fVar19 * fVar19);
        if ((0.001 <= fVar23) && (fVar23 + fVar15 <= param_1)) {
          fVar14 = (float)NEON_fminnm((fVar16 * fVar12 + fVar18 * fVar14 + fVar20 * fVar19) / fVar23
                                      ,0x3f800000);
          if (fVar14 <= -1.0) {
            fVar14 = -1.0;
          }
          fVar14 = acosf(fVar14);
          fVar16 = fVar25 + fVar14 * 0.31830987;
          if (fVar16 <= 1.0) {
            uVar1 = *(uint *)(param_2 + 0x10);
            if (uVar1 != 0) {
              uVar2 = 0;
              if (uVar1 != 0) {
                uVar2 = (uint)param_3 / uVar1;
              }
              for (pfVar11 = *(float **)
                              (*(long *)(param_2 + 8) + (ulong)((uint)param_3 - uVar2 * uVar1) * 8);
                  pfVar11 != (float *)0x0; pfVar11 = *(float **)(pfVar11 + 10)) {
                if (*(long *)(pfVar11 + 6) == param_3) goto LAB_02e4c958;
              }
            }
            pfVar11 = (float *)FUN_02e4d948(param_2,param_3);
            if (pfVar11 != (float *)0x0) {
              uVar8 = FUN_02e4d99c((long *)(param_2 + 8),pfVar11);
              if ((uVar8 & 1) == 0) {
                FUN_02e4eb88(param_2,pfVar11);
              }
              else {
                *(long *)(pfVar11 + 6) = param_3;
LAB_02e4c958:
                if ((*(char *)(pfVar11 + 0x13) != '\0') && (*(char *)((long)pfVar11 + 0x4a) != '\0')
                   ) {
                  if (*(char *)((long)pfVar11 + 0x49) == '\0') {
                    fVar19 = *(float *)(param_2 + 0x30);
                    fVar17 = (float)NEON_fminnm(fVar23 + fVar15,fVar19);
                    fVar21 = (float)NEON_fminnm(pfVar11[0x11] + pfVar11[0x10] * 0.31830987,
                                                0x3f800000);
                    fVar22 = (float)NEON_fminnm(pfVar11[0xd] + pfVar11[0xe],fVar19);
                    if ((fVar22 / fVar19 + fVar21 * 2.0) * 0.33333334 <
                        (fVar17 / fVar19 + fVar16 * 2.0) * 0.33333334) {
                      return;
                    }
                  }
                  *pfVar11 = fVar12;
                  pfVar11[1] = fVar18;
                  pfVar11[2] = fVar20;
                  pfVar11[3] = fVar3;
                  pfVar11[4] = fVar4;
                  pfVar11[5] = fVar5;
                  *(float **)(pfVar11 + 8) = param_4;
                  pfVar11[0xc] = fVar24;
                  pfVar11[0xd] = fVar15;
                  pfVar11[0xe] = fVar23;
                  pfVar11[0xf] = fVar13;
                  pfVar11[0x11] = fVar25;
                  *(char *)(pfVar11 + 0x12) = (char)uVar6;
                  pfVar11[0x10] = fVar14;
                  *(undefined1 *)((long)pfVar11 + 0x49) = 0;
                  if (param_4 == (float *)0x0) {
                    cVar10 = '\x01';
                  }
                  else {
                    cVar10 = *(char *)((long)param_4 + 0x4b) + '\x01';
                  }
                  *(char *)((long)pfVar11 + 0x4b) = cVar10;
                  FUN_02e4da04(param_2,pfVar11);
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}


