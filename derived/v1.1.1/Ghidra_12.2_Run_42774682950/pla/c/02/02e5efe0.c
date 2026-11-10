/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5efe0; name: FUN_02e5efe0
 */


float * FUN_02e5efe0(float *param_1,float *param_2,float *param_3,float *param_4,long param_5,
                    float *param_6,undefined8 *param_7,float *param_8,undefined8 *param_9)

{
  float fVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ushort uVar6;
  ulong uVar7;
  long *plVar8;
  float *pfVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  float *pfVar13;
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
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float local_13c;
  float *local_138;
  float local_130;
  float local_114;
  float local_d8;
  float fStack_d4;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  
  local_b8 = *param_1;
  fVar16 = *param_2;
  fVar17 = param_2[1];
  fVar18 = param_2[2];
  local_b4 = param_1[1];
  local_b0 = param_1[2];
  fVar1 = param_4[0xe];
  if (fVar1 == 0.0) {
    local_13c = 1.0;
    local_138 = (float *)0x0;
    local_130 = 0.0;
  }
  else {
    local_138 = (float *)0x0;
    local_130 = 0.0;
    fVar31 = param_4[2];
    fVar29 = *param_4;
    fVar30 = param_4[1];
    uVar12 = 0;
    local_13c = 1.0;
    do {
      pfVar13 = *(float **)(*(long *)(param_4 + 0xc) + uVar12 * 8);
      if ((param_5 != 0) && (*(uint *)(param_5 + 0x38) != 0)) {
        lVar10 = (ulong)*(uint *)(param_5 + 0x38) << 3;
        plVar8 = *(long **)(param_5 + 0x30);
        do {
          if ((float *)*plVar8 == pfVar13) goto LAB_02e5f0a4;
          lVar10 = lVar10 + -8;
          plVar8 = plVar8 + 1;
        } while (lVar10 != 0);
      }
      fVar23 = fVar17 - pfVar13[1];
      fVar24 = fVar16 - *pfVar13;
      fVar21 = pfVar13[6];
      fVar26 = pfVar13[7];
      fVar32 = local_b8 - *pfVar13;
      fVar25 = local_b0 - pfVar13[2];
      fVar27 = fVar18 - pfVar13[2];
      fVar22 = pfVar13[8];
      fVar28 = local_b4 - pfVar13[1];
      if (fVar21 * fVar24 + fVar23 * fVar26 + fVar27 * fVar22 <= 0.0) {
LAB_02e5f158:
        fVar21 = pfVar13[9];
        fVar26 = pfVar13[10];
        fVar22 = pfVar13[0xb];
        if (0.0 < fVar21 * fVar24 + fVar23 * fVar26 + fVar27 * fVar22) {
          fVar14 = ABS(ABS(fVar21 * fVar29 + fVar30 * fVar26 + fVar31 * fVar22) + -1.0);
          bVar3 = false;
          bVar4 = false;
          if (0.0 < fVar21 * fVar32 + fVar28 * fVar26 + fVar25 * fVar22) {
            bVar3 = false;
            bVar4 = true;
            if (!NAN(fVar14)) {
              bVar3 = fVar14 < 0.001;
              bVar4 = false;
            }
          }
          if (bVar3 != bVar4) {
            fVar15 = pfVar13[5] * fVar26 - pfVar13[4] * fVar22;
            fVar14 = pfVar13[3] * fVar22 - pfVar13[5] * fVar21;
            local_114 = pfVar13[4] * fVar21 - pfVar13[3] * fVar26;
            pfVar9 = pfVar13 + 0x1e;
            goto LAB_02e5f214;
          }
        }
      }
      else {
        fVar14 = ABS(ABS(fVar21 * fVar29 + fVar30 * fVar26 + fVar31 * fVar22) + -1.0);
        bVar3 = false;
        bVar4 = false;
        if (0.0 < fVar21 * fVar32 + fVar28 * fVar26 + fVar25 * fVar22) {
          bVar3 = false;
          bVar4 = true;
          if (!NAN(fVar14)) {
            bVar3 = fVar14 < 0.001;
            bVar4 = false;
          }
        }
        if (bVar3 == bVar4) goto LAB_02e5f158;
        fVar15 = pfVar13[4] * fVar22 - pfVar13[5] * fVar26;
        fVar14 = pfVar13[5] * fVar21 - pfVar13[3] * fVar22;
        local_114 = pfVar13[3] * fVar26 - pfVar13[4] * fVar21;
        pfVar9 = pfVar13 + 0x1c;
LAB_02e5f214:
        uVar6 = FUN_02e56138(*(undefined8 *)pfVar9);
        fVar23 = fVar15 * fVar24 + fVar23 * fVar14 + fVar27 * local_114;
        fVar24 = fVar15 * fVar32 + fVar28 * fVar14 + fVar25 * local_114;
        if ((0.0 <= fVar23) || (0.0 <= fVar24)) {
          local_c8 = 0;
          local_c0 = 0.0;
          local_d8 = *param_3 - local_b8;
          fStack_d4 = param_3[1] - local_b4;
          local_d0 = param_3[2] - local_b0;
          uVar7 = FUN_02e4c050(pfVar13,&local_b8,&local_d8,&local_c8);
          uVar2 = local_c8;
          if ((uVar7 & 1) != 0) {
            fVar28 = local_b4 - local_c8._4_4_;
            fVar15 = param_2[1] - local_c8._4_4_;
            fVar25 = local_b8 - (float)local_c8;
            fVar14 = *param_2 - (float)local_c8;
            fVar27 = local_b0 - local_c0;
            fVar19 = param_2[2] - local_c0;
            fVar32 = SQRT(fVar25 * fVar25 + fVar28 * fVar28 + fVar27 * fVar27);
            fVar20 = SQRT(fVar14 * fVar14 + fVar15 * fVar15 + fVar19 * fVar19);
            bVar3 = false;
            bVar4 = true;
            bVar5 = false;
            if (0.001 < fVar32) {
              bVar3 = false;
              bVar4 = false;
              bVar5 = true;
              if (!NAN(fVar20)) {
                bVar3 = fVar20 < 0.001;
                bVar4 = fVar20 == 0.001;
                bVar5 = false;
              }
            }
            if (!bVar4 && bVar3 == bVar5) {
              uVar7 = (ulong)(uint)local_c0;
              fVar25 = (float)NEON_fminnm((fVar25 * fVar21 + fVar26 * fVar28 + fVar22 * fVar27) /
                                          fVar32,0x3f800000);
              if (fVar25 <= -1.0) {
                fVar25 = -1.0;
              }
              fVar25 = acosf(fVar25);
              fVar21 = (float)NEON_fminnm((fVar14 * fVar21 + fVar26 * fVar15 + fVar22 * fVar19) /
                                          fVar20,0x3f800000);
              if (fVar21 <= -1.0) {
                fVar21 = -1.0;
              }
              fVar26 = acosf(fVar21);
              fVar23 = fVar23 * fVar24;
              fVar22 = fVar26 + fVar25;
              fVar21 = fVar25 + 1.5707964;
              if (fVar23 < 0.0) {
                fVar22 = fVar26 - fVar25;
                fVar21 = 1.5707964 - fVar25;
              }
              fVar24 = fVar26 + fVar25;
              fVar27 = fVar26 + 1.5707964;
              if (fVar23 < 0.0) {
                fVar24 = fVar25 - fVar26;
                fVar27 = 1.5707964 - fVar26;
              }
              if (fVar26 < fVar25) {
                fVar22 = fVar24;
                fVar21 = fVar27;
              }
              fVar21 = 1.0 - (fVar22 / fVar21) * (fVar22 / fVar21);
              if (local_130 < fVar21) {
                param_7[1] = uVar7;
                *param_7 = uVar2;
                puVar11 = &DAT_042a5dc8;
                if (uVar6 < *(ushort *)(*(long *)(pfVar13 + 0xc) + 0x34)) {
                  puVar11 = (undefined *)
                            (*(long *)(*(long *)(pfVar13 + 0xc) + 0x18) + (ulong)uVar6 * 0x10);
                }
                local_13c = fVar22 * 0.31830987;
                *param_9 = puVar11;
                local_138 = pfVar13;
                local_130 = fVar21;
              }
            }
          }
        }
      }
LAB_02e5f0a4:
      uVar12 = uVar12 + 1;
    } while (uVar12 != (uint)fVar1);
  }
  *param_6 = *param_6 * local_130;
  *param_8 = local_13c;
  return local_138;
}


