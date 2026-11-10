/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001b15f8; name: FUN_001b15f8
 */


void FUN_001b15f8(float *param_1,float *param_2)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar22;
  float *pfVar23;
  undefined1 **ppuVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar37;
  float fVar38;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  ulong uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  undefined8 uVar44;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar45 [16];
  float fVar49;
  undefined8 uVar50;
  float fVar51;
  undefined8 uVar52;
  undefined1 auStack_2f0 [16];
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined1 *local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [64];
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  
  pfVar23 = param_1 + 0xf;
  fVar27 = *pfVar23;
  fVar28 = param_1[0xe];
  uVar25 = *(undefined8 *)PTR_PTR_04372408;
  ppuVar24 = (undefined1 **)(param_1 + 0xc);
  fVar26 = (float)((int)fVar28 + 1);
  if ((int)fVar28 < (int)((uint)fVar27 & 0x3fffffff)) {
    puVar15 = *ppuVar24;
    fVar27 = fVar28;
  }
  else {
    puVar15 = *ppuVar24;
    if (0x3ffffffe < (int)fVar28) {
      FUN_032bd0a8((ulong)(uint)fVar26);
      fVar27 = *pfVar23;
    }
    fVar27 = (float)(((uint)fVar27 & 0x3fffffff) << 1);
    if (0x3ffffffe < (uint)fVar27) {
      fVar27 = 1.9999999;
    }
    fVar30 = fVar26;
    if ((int)fVar26 <= (int)fVar27) {
      fVar30 = fVar27;
    }
    puVar15 = (undefined1 *)FUN_032bd1d4(uVar25,fVar30,0x10,puVar15,fVar28,pfVar23);
    fVar27 = param_1[0xe];
    *(undefined1 **)(param_1 + 0xc) = puVar15;
  }
  *(undefined8 *)((long)(puVar15 + (long)(int)fVar27 * 0x10) + 8) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(puVar15 + (long)(int)fVar27 * 0x10) = *(undefined8 *)param_2;
  param_1[0xe] = fVar26;
  if ((int)fVar28 - 2U < 2) {
    fVar29 = (float)*(undefined8 *)(param_1 + 2);
    fVar31 = (float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
    fVar43 = (float)*(undefined8 *)param_1;
    fVar47 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
    fVar27 = param_1[4];
    fVar28 = param_1[5];
    fVar30 = param_1[6];
    fVar32 = param_2[3];
    fVar33 = *param_2 - fVar43;
    fVar37 = param_2[1] - fVar47;
    fVar38 = param_2[2] - fVar29;
    fVar42 = fVar33 * fVar27;
    fVar46 = fVar37 * fVar28;
    fVar48 = fVar38 * fVar30;
    uVar44 = CONCAT44(fVar27 * fVar27 + fVar28 * fVar28 + fVar30 * fVar30,
                      fVar27 * fVar27 + fVar28 * fVar28 + fVar30 * fVar30);
    uVar50 = NEON_frecpe(uVar44,4);
    uVar52 = NEON_frecps(uVar44,uVar50,4);
    fVar49 = (float)uVar50 * (float)uVar52;
    fVar51 = (float)((ulong)uVar50 >> 0x20) * (float)((ulong)uVar52 >> 0x20);
    uVar44 = NEON_frecps(uVar44,CONCAT44(fVar51,fVar49),4);
    fVar49 = (fVar42 + fVar46 + fVar48) * fVar49 * (float)uVar44;
    fVar42 = (fVar42 + fVar46 + fVar48) * fVar51 * (float)((ulong)uVar44 >> 0x20);
    fVar27 = fVar27 * fVar49;
    fVar28 = fVar28 * fVar42;
    fVar30 = fVar30 * fVar49;
    fVar42 = param_1[7] * fVar42;
    pfVar23 = &local_80;
    if (fVar26 != 4.2039e-45) {
      pfVar23 = &local_90;
    }
    pfVar2 = &local_90;
    if (fVar26 != 4.2039e-45) {
      pfVar2 = &local_80;
    }
    pfVar23[2] = fVar30;
    pfVar23[3] = fVar42;
    *pfVar23 = fVar27;
    pfVar23[1] = fVar28;
    pfVar2[2] = fVar38 - fVar30;
    pfVar2[3] = (fVar32 - fVar31) - fVar42;
    *pfVar2 = fVar33 - fVar27;
    pfVar2[1] = fVar37 - fVar28;
    fVar27 = local_80 * local_80 + fStack_7c * fStack_7c + fStack_78 * fStack_78;
    if (fVar31 < fVar27) {
      local_e0 = local_d0;
      local_d8 = 0x8000000400000000;
      if (&local_e0 != ppuVar24) {
        memcpy(local_e0,*ppuVar24,
               -(ulong)((uint)fVar26 >> 0x1f) & 0xfffffff000000000 | (ulong)(uint)fVar26 << 4);
        local_d8 = CONCAT44(local_d8._4_4_,fVar26);
      }
      param_1[0xe] = 0.0;
      FUN_001b15f8(param_1,param_2);
      if (0 < (int)(uint)local_d8) {
        uVar39 = 0;
        uVar21 = 0xffffffff;
        uVar20 = *(ulong *)(PTR_DAT_04372370 + 0x240);
        uVar18 = uVar20;
        do {
          pfVar23 = (float *)(local_e0 + uVar39 * 0x10);
          fVar26 = *pfVar23 - (float)*(undefined8 *)param_1;
          fVar27 = pfVar23[1] - (float)((ulong)*(undefined8 *)param_1 >> 0x20);
          fVar28 = pfVar23[2] - (float)*(undefined8 *)(param_1 + 2);
          fVar30 = pfVar23[3] - (float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
          auVar41._0_4_ = fVar26 * fVar26;
          auVar41._4_4_ = fVar27 * fVar27;
          auVar41._8_4_ = fVar28 * fVar28;
          auVar41._12_4_ = fVar30 * fVar30;
          auVar45 = NEON_ext(auVar41,auVar41,8,1);
          fVar26 = fStack_78 * pfVar23[2] + local_80 * *pfVar23 + fStack_7c * pfVar23[1];
          bVar12 = false;
          if ((float)*(undefined8 *)(param_1 + 8) <= auVar41._0_4_ + auVar41._4_4_ + auVar45._0_4_)
          {
            bVar12 = false;
            if (!NAN(fVar26) && !NAN((float)uVar18)) {
              bVar12 = fVar26 < (float)uVar18;
            }
          }
          if (bVar12) {
            uVar21 = uVar39 & 0xffffffff;
            uVar18 = (ulong)(uint)fVar26;
          }
          uVar39 = uVar39 + 1;
        } while ((local_d8 & 0xffffffff) != uVar39);
        iVar14 = (int)uVar21;
        if (-1 < iVar14) {
          FUN_001b15f8(param_1,local_e0 + (long)iVar14 * 0x10);
        }
        if ((int)(uint)local_d8 < 1) {
          uVar39 = 0xffffffff;
LAB_001b1adc:
          iVar14 = (uint)local_d8;
        }
        else {
          uVar18 = 0;
          uVar39 = 0xffffffff;
          do {
            pfVar23 = (float *)(local_e0 + uVar18 * 0x10);
            fVar26 = *pfVar23 - (float)*(undefined8 *)param_1;
            fVar27 = pfVar23[1] - (float)((ulong)*(undefined8 *)param_1 >> 0x20);
            fVar28 = pfVar23[2] - (float)*(undefined8 *)(param_1 + 2);
            fVar30 = pfVar23[3] - (float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
            auVar45._0_4_ = fVar26 * fVar26;
            auVar45._4_4_ = fVar27 * fVar27;
            auVar45._8_4_ = fVar28 * fVar28;
            auVar45._12_4_ = fVar30 * fVar30;
            auVar41 = NEON_ext(auVar45,auVar45,8,1);
            fVar26 = fStack_78 * pfVar23[2] + local_80 * *pfVar23 + fStack_7c * pfVar23[1];
            bVar12 = false;
            if ((float)*(undefined8 *)(param_1 + 8) <= auVar45._0_4_ + auVar45._4_4_ + auVar41._0_4_
               ) {
              bVar12 = false;
              if (!NAN(fVar26) && !NAN((float)uVar20)) {
                bVar12 = fVar26 < (float)uVar20;
              }
            }
            if (bVar12) {
              uVar39 = uVar18 & 0xffffffff;
              uVar20 = (ulong)(uint)fVar26;
            }
            uVar18 = uVar18 + 1;
          } while ((uint)local_d8 != uVar18);
          iVar22 = (int)uVar39;
          if (iVar22 < 0) goto LAB_001b1adc;
          if ((int)(uint)local_d8 < 4) {
            FUN_0331fefc(auStack_2f0,&local_2e0,0x200);
            FUN_0332448c(auStack_2f0,
                         "SphereFinder::SimplexBoundingSphere::Expand has found a non-minimal simplex without any internal points."
                        );
            iVar13 = FUN_03320b30(0x4c74ccb1,&local_2e0,
                                  "X:/CI/Stable_Package_Build_nx64/Source/Common/Internal/ConvexHull/hkGeometryUtility.cpp"
                                  ,0x56f);
            if (iVar13 != 0) {
              CallSupervisor(0x26);
            }
            FUN_0331ff7c(auStack_2f0);
          }
          FUN_001b15f8(param_1,local_e0 + (long)iVar22 * 0x10);
          uVar50 = *(undefined8 *)((long)(local_e0 + (long)(3 - (iVar14 + iVar22)) * 0x10) + 8);
          uVar44 = *(undefined8 *)(local_e0 + (long)(3 - (iVar14 + iVar22)) * 0x10);
          fVar26 = (float)uVar44 - *param_1;
          fVar27 = (float)((ulong)uVar44 >> 0x20) - param_1[1];
          fVar28 = (float)uVar50 - param_1[2];
          fVar30 = (float)((ulong)uVar50 >> 0x20) - param_1[3];
          fVar26 = fVar26 * fVar26;
          fVar27 = fVar27 * fVar27;
          fVar28 = fVar28 * fVar28;
          fVar30 = fVar30 * fVar30;
          auVar5._4_4_ = fVar27;
          auVar5._0_4_ = fVar26;
          auVar5._8_4_ = fVar28;
          auVar5._12_4_ = fVar30;
          auVar6._4_4_ = fVar27;
          auVar6._0_4_ = fVar26;
          auVar6._8_4_ = fVar28;
          auVar6._12_4_ = fVar30;
          auVar41 = NEON_ext(auVar5,auVar6,8,1);
          if (fVar26 + fVar27 + auVar41._0_4_ < (float)*(undefined8 *)(param_1 + 8))
          goto LAB_001b1adc;
          FUN_0331fefc(auStack_2f0,&local_2e0,0x200);
          FUN_0332448c(auStack_2f0,
                       "SphereFinder::SimplexBoundingSphere::Expand has found a non-minimal simplex without any internal points."
                      );
          iVar14 = FUN_03320b30(0x4c74ccb1,&local_2e0,
                                "X:/CI/Stable_Package_Build_nx64/Source/Common/Internal/ConvexHull/hkGeometryUtility.cpp"
                                ,0x577);
          if (iVar14 != 0) {
            CallSupervisor(0x26);
          }
          FUN_0331ff7c(auStack_2f0);
          iVar14 = (uint)local_d8;
        }
        if (1 < iVar14) {
          lVar19 = 0;
          uVar18 = 0;
          if (uVar21 != 0) goto LAB_001b1b4c;
          while( true ) {
            uVar18 = uVar18 + 1;
            lVar19 = lVar19 + 0x10;
            if ((long)(iVar14 + -1) <= (long)uVar18) break;
            if (uVar21 != uVar18) {
LAB_001b1b4c:
              puVar15 = local_e0;
              if (uVar39 != uVar18) {
                fVar27 = param_1[0x22];
                fVar28 = param_1[0x23];
                fVar26 = (float)((int)fVar27 + 1);
                if ((int)fVar27 < (int)((uint)fVar28 & 0x3fffffff)) {
                  lVar17 = *(long *)(param_1 + 0x20);
                }
                else {
                  uVar44 = *(undefined8 *)(param_1 + 0x20);
                  if (0x3ffffffe < (int)fVar27) {
                    FUN_032bd0a8(fVar26);
                    fVar28 = param_1[0x23];
                  }
                  fVar28 = (float)(((uint)fVar28 & 0x3fffffff) << 1);
                  if (0x3ffffffe < (uint)fVar28) {
                    fVar28 = 1.9999999;
                  }
                  fVar30 = fVar26;
                  if ((int)fVar26 <= (int)fVar28) {
                    fVar30 = fVar28;
                  }
                  lVar17 = FUN_032bd1d4(uVar25,fVar30,0x10,uVar44,fVar27,param_1 + 0x23);
                  fVar27 = param_1[0x22];
                  *(long *)(param_1 + 0x20) = lVar17;
                }
                puVar16 = (undefined8 *)(lVar17 + (long)(int)fVar27 * 0x10);
                puVar16[1] = *(undefined8 *)((long)(puVar15 + lVar19) + 8);
                *puVar16 = *(undefined8 *)(puVar15 + lVar19);
                param_1[0x22] = fVar26;
                iVar14 = (uint)local_d8;
              }
            }
          }
        }
      }
      uVar39 = local_d8;
      uVar11 = local_d8._4_4_;
      local_d8 = (ulong)local_d8._4_4_ << 0x20;
      if ((-1 < (long)uVar39) && (local_e0 != (undefined1 *)0x0)) {
        FUN_032cf244(uVar25,local_e0,0x10,uVar11 & 0x3fffffff);
      }
      goto LAB_001b1bfc;
    }
    fVar28 = local_90 * local_90 + fStack_8c * fStack_8c + fStack_88 * fStack_88;
    fVar30 = local_90 * local_90 + fStack_8c * fStack_8c + fStack_88 * fStack_88;
    uVar25 = CONCAT44(fVar30,fVar28);
    uVar44 = NEON_frecpe(uVar25,4);
    uVar50 = NEON_frecps(uVar25,uVar44,4);
    fVar32 = (float)uVar44 * (float)uVar50;
    fVar33 = (float)((ulong)uVar44 >> 0x20) * (float)((ulong)uVar50 >> 0x20);
    uVar25 = NEON_frecps(uVar25,CONCAT44(fVar33,fVar32),4);
    fVar27 = ((fVar27 + fVar28) - fVar31) * (float)*(undefined8 *)(PTR_DAT_04372370 + 0x150) *
             fVar32 * (float)uVar25;
    fVar28 = ((local_80 * local_80 + fStack_7c * fStack_7c + fStack_78 * fStack_78 + fVar30) -
             fVar31) * (float)((ulong)*(undefined8 *)(PTR_DAT_04372370 + 0x150) >> 0x20) *
             fVar33 * (float)((ulong)uVar25 >> 0x20);
    local_90 = local_90 * fVar27;
    fStack_8c = fStack_8c * fVar28;
    fStack_88 = fStack_88 * fVar27;
    fStack_84 = fStack_84 * fVar28;
    fVar43 = fVar43 + local_90;
    fVar47 = fVar47 + fStack_8c;
    fVar29 = fVar29 + fStack_88;
    *(ulong *)(param_1 + 2) = CONCAT44(fVar31 + fStack_84,fVar29);
    *(ulong *)param_1 = CONCAT44(fVar47,fVar43);
    fVar27 = param_2[3] - (fVar31 + fStack_84);
    auVar34._0_4_ = (*param_2 - fVar43) * (*param_2 - fVar43);
    auVar34._4_4_ = (param_2[1] - fVar47) * (param_2[1] - fVar47);
    auVar34._8_4_ = (param_2[2] - fVar29) * (param_2[2] - fVar29);
    auVar34._12_4_ = fVar27 * fVar27;
    auVar41 = NEON_ext(auVar34,auVar34,8,1);
    *(ulong *)(param_1 + 2) = CONCAT44(auVar34._0_4_ + auVar34._4_4_ + auVar41._0_4_,fVar29);
    *(ulong *)param_1 = CONCAT44(fVar47,fVar43);
    if (fVar26 != 4.2039e-45) goto LAB_001b1bfc;
    puVar16 = *(undefined8 **)(param_1 + 0xc);
    fVar26 = (float)*puVar16 - *(float *)(puVar16 + 2);
    fVar28 = (float)((ulong)*puVar16 >> 0x20) - *(float *)((long)puVar16 + 0x14);
    fVar32 = (float)puVar16[1] - *(float *)(puVar16 + 3);
    fVar43 = (float)((ulong)puVar16[1] >> 0x20) - *(float *)((long)puVar16 + 0x1c);
    auVar35._0_4_ = *(float *)(puVar16 + 2) - *(float *)(puVar16 + 4);
    auVar35._4_4_ = *(float *)((long)puVar16 + 0x14) - *(float *)((long)puVar16 + 0x24);
    auVar35._8_4_ = *(float *)(puVar16 + 3) - *(float *)(puVar16 + 5);
    auVar35._12_4_ = *(float *)((long)puVar16 + 0x1c) - *(float *)((long)puVar16 + 0x2c);
    auVar7._4_4_ = fVar28;
    auVar7._0_4_ = fVar26;
    auVar7._8_4_ = fVar32;
    auVar7._12_4_ = fVar43;
    auVar8._4_4_ = fVar28;
    auVar8._0_4_ = fVar26;
    auVar8._8_4_ = fVar32;
    auVar8._12_4_ = fVar43;
    auVar41 = NEON_ext(auVar7,auVar8,4,1);
    auVar45 = NEON_ext(auVar35,auVar35,4,1);
    fVar27 = fVar26 * auVar45._0_4_ - auVar35._0_4_ * auVar41._0_4_;
    fVar30 = fVar28 * auVar45._4_4_ - auVar35._4_4_ * auVar41._4_4_;
    fVar26 = fVar32 * auVar35._0_4_ - auVar35._8_4_ * fVar26;
    fVar28 = fVar43 * auVar35._4_4_ - auVar35._12_4_ * fVar28;
    auVar9._4_4_ = fVar30;
    auVar9._0_4_ = fVar27;
    auVar9._8_4_ = fVar26;
    auVar9._12_4_ = fVar28;
    auVar10._4_4_ = fVar30;
    auVar10._0_4_ = fVar27;
    auVar10._8_4_ = fVar26;
    auVar10._12_4_ = fVar28;
    auVar41 = NEON_ext(auVar9,auVar10,4,1);
    auVar36._12_4_ = fVar30;
    auVar36._8_4_ = fVar27;
    auVar36._0_8_ = auVar41._0_8_;
  }
  else {
    if (fVar28 != 1.4013e-45) {
      if (fVar28 == 0.0) {
        uVar25 = *(undefined8 *)param_2;
        *(ulong *)(param_1 + 2) =
             CONCAT44(*(undefined4 *)(PTR_DAT_04372370 + 0x50),(int)*(undefined8 *)(param_2 + 2));
        *(undefined8 *)param_1 = uVar25;
      }
      goto LAB_001b1bfc;
    }
    auVar41 = *(undefined1 (*) [16])(PTR_DAT_04372370 + 0x150);
    auVar45 = NEON_ext(auVar41,auVar41,8,1);
    auVar41 = NEON_ext(auVar45,auVar41,8,1);
    fVar26 = ((float)*(undefined8 *)param_1 + *param_2) * auVar41._0_4_;
    fVar27 = ((float)((ulong)*(undefined8 *)param_1 >> 0x20) + param_2[1]) * auVar41._4_4_;
    fVar28 = ((float)*(undefined8 *)(param_1 + 2) + param_2[2]) * auVar41._8_4_;
    fVar30 = ((float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) + param_2[3]) * auVar41._12_4_;
    *(ulong *)(param_1 + 2) = CONCAT44(fVar30,fVar28);
    *(ulong *)param_1 = CONCAT44(fVar27,fVar26);
    auVar36._0_4_ = *param_2 - fVar26;
    auVar36._4_4_ = param_2[1] - fVar27;
    auVar36._8_4_ = param_2[2] - fVar28;
    auVar36._12_4_ = param_2[3] - fVar30;
    auVar40._0_4_ = auVar36._0_4_ * auVar36._0_4_;
    auVar40._4_4_ = auVar36._4_4_ * auVar36._4_4_;
    auVar40._8_4_ = auVar36._8_4_ * auVar36._8_4_;
    auVar40._12_4_ = auVar36._12_4_ * auVar36._12_4_;
    auVar41 = NEON_ext(auVar40,auVar40,8,1);
    *(ulong *)(param_1 + 2) = CONCAT44(auVar40._0_4_ + auVar40._4_4_ + auVar41._0_4_,fVar28);
    *(ulong *)param_1 = CONCAT44(fVar27,fVar26);
  }
  *(long *)(param_1 + 6) = auVar36._8_8_;
  *(long *)(param_1 + 4) = auVar36._0_8_;
LAB_001b1bfc:
  fVar30 = (float)*(undefined8 *)(param_1 + 2);
  fVar32 = (float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  fVar27 = (float)*(undefined8 *)param_1;
  fVar28 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  uVar25 = CONCAT44(fVar32,fVar32);
  uVar44 = NEON_frsqrte(uVar25,4);
  fVar43 = (float)uVar44;
  fVar47 = (float)((ulong)uVar44 >> 0x20);
  uVar44 = NEON_frsqrts(uVar25,CONCAT44(fVar47 * fVar47,fVar43 * fVar43),4);
  fVar43 = fVar43 * (float)uVar44;
  fVar47 = fVar47 * (float)((ulong)uVar44 >> 0x20);
  uVar25 = NEON_frsqrts(uVar25,CONCAT44(fVar47 * fVar47,fVar43 * fVar43),4);
  fVar26 = param_1[0x22];
  uVar39 = CONCAT44((float)((ulong)uVar25 >> 0x20) * fVar47 * fVar32 + 1e-05,
                    (float)uVar25 * fVar43 * fVar32 + 1e-05);
  uVar39 = uVar39 ^ (uVar39 ^ 0x3727c5ac3727c5ac) &
                    CONCAT44(-(uint)(fVar32 <= 0.0),-(uint)(fVar32 <= 0.0));
  fVar43 = (float)uVar39;
  fVar47 = (float)(uVar39 >> 0x20);
  uVar25 = CONCAT44(fVar47 * fVar47,fVar43 * fVar43);
  *(undefined8 *)(param_1 + 8) = uVar25;
  if (0 < (int)fVar26) {
    lVar19 = 0;
    uVar39 = 0;
    while( true ) {
      lVar17 = *(long *)(param_1 + 0x20);
      pfVar23 = (float *)(lVar17 + lVar19);
      fVar27 = (*pfVar23 - fVar27) * (*pfVar23 - fVar27);
      fVar28 = (pfVar23[1] - fVar28) * (pfVar23[1] - fVar28);
      fVar30 = (pfVar23[2] - fVar30) * (pfVar23[2] - fVar30);
      fVar32 = (pfVar23[3] - fVar32) * (pfVar23[3] - fVar32);
      auVar3._4_4_ = fVar28;
      auVar3._0_4_ = fVar27;
      auVar3._8_4_ = fVar30;
      auVar3._12_4_ = fVar32;
      auVar4._4_4_ = fVar28;
      auVar4._0_4_ = fVar27;
      auVar4._8_4_ = fVar30;
      auVar4._12_4_ = fVar32;
      auVar41 = NEON_ext(auVar3,auVar4,8,1);
      if ((float)uVar25 <= fVar27 + fVar28 + auVar41._0_4_) {
        puVar16 = (undefined8 *)(lVar17 + lVar19);
        local_2d8 = puVar16[1];
        local_2e0 = *puVar16;
        fVar26 = (float)((int)fVar26 - 1);
        param_1[0x22] = fVar26;
        if (uVar39 != (uint)fVar26) {
          puVar1 = (undefined8 *)(lVar17 + (long)(int)fVar26 * 0x10);
          *puVar16 = *puVar1;
          puVar16[1] = puVar1[1];
        }
        FUN_001b15f8(param_1,&local_2e0);
        fVar26 = param_1[0x22];
      }
      uVar39 = uVar39 + 1;
      if ((long)(int)fVar26 <= (long)uVar39) break;
      fVar30 = (float)*(undefined8 *)(param_1 + 2);
      fVar32 = (float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
      fVar27 = (float)*(undefined8 *)param_1;
      fVar28 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
      lVar19 = lVar19 + 0x10;
      uVar25 = *(undefined8 *)(param_1 + 8);
    }
  }
  return;
}


