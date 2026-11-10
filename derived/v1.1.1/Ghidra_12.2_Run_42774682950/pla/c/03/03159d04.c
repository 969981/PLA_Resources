/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03159d04; name: FUN_03159d04
 */


ulong FUN_03159d04(long *param_1,long param_2,long param_3,undefined8 *param_4,undefined8 *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  int iVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  int *piVar18;
  long lVar19;
  float *pfVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar29 [16];
  undefined1 auVar35 [16];
  undefined8 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  float local_88 [2];
  float local_80;
  float fStack_7c;
  float fStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  pfVar20 = (float *)(param_3 + 0x30);
  local_a0 = *(undefined8 *)pfVar20;
  uStack_98 = *(undefined8 *)(param_3 + 0x38);
  uVar8 = *(uint *)(param_4 + 4);
  uVar22 = (ulong)uVar8;
  lVar11 = tpidr_el0;
  lVar9 = *(long *)(lVar11 + 0x38d490);
  if (lVar9 == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar11 + 0x38d490) = lVar9;
  }
  lVar9 = *(long *)(lVar9 + 0x10);
  if (lVar9 != 0) {
    puVar2 = *(undefined8 **)(lVar9 + 8);
    uVar10 = (long)puVar2 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar10 <= *(ulong *)(lVar9 + 0x10)) &&
       (*(ulong *)(lVar9 + 8) = uVar10, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "LtcoherentGCP";
      puVar2[2] = "StgetMesh";
      uVar36 = nn::os::GetSystemTick();
      puVar2[1] = uVar36;
    }
  }
  if ((uVar8 != 0xffffffff) &&
     (lVar21 = *(long *)(*(long *)(param_2 + 0x38) + (ulong)(uVar8 >> 0x16) * 0xf0), lVar21 != 0)) {
    lVar13 = *(long *)(lVar21 + 0x20);
    if (((int)(uVar22 & 0x3fffff) < *(int *)(lVar13 + 0xd8) + *(int *)(lVar13 + 0x20)) &&
       ((*(int *)(lVar13 + 0x108) == 0 ||
        ((*(byte *)(*(long *)(lVar13 + 0x100) + (uVar22 & 0x3fffff)) & 1) == 0)))) {
      plVar7 = *(long **)(param_3 + 0x10);
      uVar10 = (ulong)*(uint *)(param_4 + 4) & 0x3fffff;
      fVar25 = (float)uVar10;
      if (plVar7 == (long *)0x0) {
LAB_03159e08:
        if (*(long *)(lVar11 + 0x38d490) == 0) {
          lVar13 = FUN_0333d16c(0,1);
          *(long *)(lVar11 + 0x38d490) = lVar13;
          lVar13 = *(long *)(lVar13 + 0x10);
        }
        else {
          lVar13 = *(long *)(*(long *)(lVar11 + 0x38d490) + 0x10);
        }
        if (lVar13 != 0) {
          puVar2 = *(undefined8 **)(lVar13 + 8);
          uVar14 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
          if ((uVar14 <= *(ulong *)(lVar13 + 0x10)) &&
             (*(ulong *)(lVar13 + 8) = uVar14, puVar2 != (undefined8 *)0x0)) {
            *puVar2 = "Stprev";
            uVar36 = nn::os::GetSystemTick();
            puVar2[1] = uVar36;
          }
        }
        local_80 = fVar25;
        fVar24 = (float)FUN_03196014(lVar21,&local_80,param_4 + 2,pfVar20,&local_70);
        if (fVar24 < (float)param_4[5] * (float)param_4[5]) {
          fVar24 = (float)*(undefined8 *)pfVar20 - *(float *)(lVar21 + 0x90);
          fVar26 = (float)((ulong)*(undefined8 *)pfVar20 >> 0x20) - *(float *)(lVar21 + 0x94);
          fVar27 = (float)*(undefined8 *)(param_3 + 0x38) - *(float *)(lVar21 + 0x98);
          auVar37 = *(undefined1 (*) [16])(lVar21 + 0x70);
          auVar35 = *(undefined1 (*) [16])(lVar21 + 0x80);
          auVar38 = *(undefined1 (*) [16])(lVar21 + 0x60);
          auVar39 = NEON_ext(auVar38,auVar38,8,1);
          auVar42 = NEON_ext(auVar37,auVar37,8,1);
          auVar40 = NEON_ext(auVar35,auVar35,8,1);
          uStack_68 = CONCAT44(auVar40._4_4_ * fVar27 +
                               auVar35._4_4_ * fVar24 + auVar40._4_4_ * fVar26,
                               auVar40._0_4_ * fVar27 +
                               auVar35._0_4_ * fVar24 + auVar35._4_4_ * fVar26);
          local_70 = CONCAT44(auVar42._0_4_ * fVar27 +
                              auVar37._0_4_ * fVar24 + auVar37._4_4_ * fVar26,
                              auVar39._0_4_ * fVar27 +
                              auVar38._0_4_ * fVar24 + auVar38._4_4_ * fVar26);
          local_88[0] = fVar25;
          FUN_03193d34(*(undefined8 *)(lVar21 + 0x20),&local_70,local_88,&local_80);
          fVar24 = *(float *)(lVar21 + 0x90) +
                   *(float *)(lVar21 + 0x80) * fStack_78 +
                   (float)*(undefined8 *)(lVar21 + 0x60) * local_80 +
                   *(float *)(lVar21 + 0x70) * fStack_7c;
          fVar26 = *(float *)(lVar21 + 0x94) +
                   *(float *)(lVar21 + 0x84) * fStack_78 +
                   (float)((ulong)*(undefined8 *)(lVar21 + 0x60) >> 0x20) * local_80 +
                   *(float *)(lVar21 + 0x74) * fStack_7c;
          fVar27 = *(float *)(lVar21 + 0x98) +
                   *(float *)(lVar21 + 0x88) * fStack_78 +
                   (float)*(undefined8 *)(lVar21 + 0x68) * local_80 +
                   *(float *)(lVar21 + 0x78) * fStack_7c;
          fVar28 = *(float *)(lVar21 + 0x9c) +
                   *(float *)(lVar21 + 0x8c) * fStack_78 +
                   (float)((ulong)*(undefined8 *)(lVar21 + 0x68) >> 0x20) * local_80 +
                   *(float *)(lVar21 + 0x7c) * fStack_7c;
          uStack_98 = CONCAT44(fVar28,fVar27);
          local_a0 = CONCAT44(fVar26,fVar24);
          fVar31 = fVar26 - *(float *)(param_3 + 0x34);
          fVar33 = fVar27 - *(float *)(param_3 + 0x38);
          fVar30 = fVar28 - *(float *)(param_3 + 0x3c);
          auVar35._0_4_ = (fVar24 - *pfVar20) * (fVar24 - *pfVar20);
          auVar35._4_4_ = fVar31 * fVar31;
          auVar35._8_4_ = fVar33 * fVar33;
          auVar35._12_4_ = fVar30 * fVar30;
          auVar37 = NEON_ext(auVar35,auVar35,8,1);
          if (auVar35._0_4_ + auVar35._4_4_ + auVar37._0_4_ <= (float)param_4[6] * (float)param_4[6]
             ) goto LAB_0315a458;
        }
      }
      else {
        local_70 = CONCAT44(local_70._4_4_,fVar25);
        iVar6 = (**(code **)(*plVar7 + 0x28))
                          (plVar7,lVar21,&local_70,*(undefined4 *)(param_3 + 0x18),
                           *(undefined8 *)(param_3 + 0x20));
        if (iVar6 != 0) goto LAB_03159e08;
      }
      if (*(long *)(lVar11 + 0x38d490) == 0) {
        lVar13 = FUN_0333d16c(0,1);
        *(long *)(lVar11 + 0x38d490) = lVar13;
        lVar13 = *(long *)(lVar13 + 0x10);
      }
      else {
        lVar13 = *(long *)(*(long *)(lVar11 + 0x38d490) + 0x10);
      }
      if (lVar13 != 0) {
        puVar2 = *(undefined8 **)(lVar13 + 8);
        uVar22 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
        if ((uVar22 <= *(ulong *)(lVar13 + 0x10)) &&
           (*(ulong *)(lVar13 + 8) = uVar22, puVar2 != (undefined8 *)0x0)) {
          *puVar2 = "Stneighbors";
          uVar36 = nn::os::GetSystemTick();
          puVar2[1] = uVar36;
        }
      }
      lVar13 = *(long *)(lVar21 + 0x20);
      if ((int)fVar25 < *(int *)(lVar13 + 0x20)) {
        if (*(int *)(lVar13 + 0x98) != 0) {
          uVar8 = *(uint *)(*(long *)(lVar13 + 0x90) + uVar10 * 4);
          if (uVar8 == 0xffffffff) {
            piVar18 = (int *)(*(long *)(lVar13 + 0x18) + uVar10 * 0x10);
            goto LAB_03159ed8;
          }
          uVar10 = (ulong)uVar8;
        }
        piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + (long)(int)uVar10 * 0x10);
      }
      else {
        piVar18 = (int *)(*(long *)(lVar13 + 0xd0) +
                         (long)((int)fVar25 - *(int *)(lVar13 + 0x20)) * 0x10);
      }
LAB_03159ed8:
      fVar26 = (float)param_4[1];
      fVar27 = (float)((ulong)param_4[1] >> 0x20);
      fVar25 = (float)*param_4;
      fVar24 = (float)((ulong)*param_4 >> 0x20);
      if (0 < (short)piVar18[2]) {
        auVar39._0_4_ = *pfVar20 - fVar25;
        auVar39._4_4_ = *(float *)(param_3 + 0x34) - fVar24;
        auVar39._8_4_ = *(float *)(param_3 + 0x38) - fVar26;
        auVar39._12_4_ = *(float *)(param_3 + 0x3c) - fVar27;
        auVar38 = NEON_ext(auVar39,auVar39,4,1);
        auVar35 = *(undefined1 (*) [16])(param_4 + 2);
        lVar19 = (long)*piVar18;
        lVar23 = lVar19 * 0x14;
        auVar37 = NEON_ext(auVar35,auVar35,8,1);
        uVar36 = NEON_ext(auVar35._0_8_,auVar37._0_8_,4,1);
        auVar42._0_4_ = auVar35._0_4_ * auVar38._0_4_ - auVar39._0_4_ * (float)uVar36;
        auVar42._4_4_ =
             auVar35._4_4_ * auVar38._4_4_ - auVar39._4_4_ * (float)((ulong)uVar36 >> 0x20);
        auVar42._8_4_ = auVar35._8_4_ * auVar39._0_4_ - auVar39._8_4_ * auVar35._0_4_;
        auVar42._12_4_ = auVar35._12_4_ * auVar39._4_4_ - auVar39._12_4_ * auVar35._4_4_;
        auVar35 = NEON_ext(auVar42,auVar42,4,1);
        fVar31 = auVar35._0_4_;
        fVar25 = fVar25 * fVar31;
        fVar33 = auVar35._4_4_;
        fVar24 = fVar24 * fVar33;
        fVar26 = fVar26 * auVar42._0_4_;
        fVar27 = fVar27 * auVar42._4_4_;
        auVar37._4_4_ = fVar24;
        auVar37._0_4_ = fVar25;
        auVar37._8_4_ = fVar26;
        auVar37._12_4_ = fVar27;
        auVar38._4_4_ = fVar24;
        auVar38._0_4_ = fVar25;
        auVar38._8_4_ = fVar26;
        auVar38._12_4_ = fVar27;
        auVar35 = NEON_ext(auVar37,auVar38,8,1);
        fVar25 = -(fVar25 + fVar24 + auVar35._0_4_);
        do {
          lVar17 = (long)*(int *)(lVar13 + 0x30);
          iVar6 = (int)lVar19;
          if (lVar19 < lVar17) {
            iVar12 = iVar6;
            if (*(int *)(lVar13 + 0x78) != 0) {
              iVar12 = *(int *)(*(long *)(lVar13 + 0x70) + lVar19 * 4);
            }
            if (iVar12 == -1) {
              lVar15 = *(long *)(lVar13 + 0x28) + lVar19 * 0x14;
            }
            else {
              lVar15 = *(long *)(lVar13 + 0xc0) + (long)iVar12 * 0x14;
            }
          }
          else {
            lVar15 = *(long *)(lVar13 + 0xe0) + lVar17 * -0x14 + lVar23;
          }
          if ((*(int *)(lVar15 + 8) != -1) && ((*(byte *)(lVar15 + 0x10) >> 5 & 1) == 0)) {
            if (lVar19 < lVar17) {
              if (*(int *)(lVar13 + 0x78) != 0) {
                iVar6 = *(int *)(*(long *)(lVar13 + 0x70) + lVar19 * 4);
              }
              if (iVar6 == -1) {
                piVar16 = (int *)(*(long *)(lVar13 + 0x28) + lVar19 * 0x14);
              }
              else {
                piVar16 = (int *)(*(long *)(lVar13 + 0xc0) + (long)iVar6 * 0x14);
              }
            }
            else {
              piVar16 = (int *)(*(long *)(lVar13 + 0xe0) + lVar17 * -0x14 + lVar23);
            }
            iVar3 = *(int *)(lVar13 + 0x40);
            iVar6 = *piVar16;
            iVar12 = piVar16[1];
            fVar27 = (float)*(undefined8 *)(lVar21 + 0x68);
            fVar28 = (float)((ulong)*(undefined8 *)(lVar21 + 0x68) >> 0x20);
            fVar24 = (float)*(undefined8 *)(lVar21 + 0x60);
            fVar26 = (float)((ulong)*(undefined8 *)(lVar21 + 0x60) >> 0x20);
            auVar35 = *(undefined1 (*) [16])(lVar21 + 0x70);
            plVar7 = (long *)(lVar13 + 0x38);
            if (iVar3 <= iVar6) {
              plVar7 = (long *)(lVar13 + 0xf0);
            }
            iVar1 = 0;
            if (iVar3 <= iVar6) {
              iVar1 = iVar3;
            }
            pfVar4 = (float *)(*plVar7 + (long)(iVar6 - iVar1) * 0x10);
            fVar30 = *pfVar4;
            fVar32 = pfVar4[1];
            fVar34 = pfVar4[2];
            plVar7 = (long *)(lVar13 + 0x38);
            if (iVar3 <= iVar12) {
              plVar7 = (long *)(lVar13 + 0xf0);
            }
            iVar6 = 0;
            if (iVar3 <= iVar12) {
              iVar6 = iVar3;
            }
            auVar38 = *(undefined1 (*) [16])(lVar21 + 0x80);
            auVar37 = *(undefined1 (*) [16])(lVar21 + 0x90);
            auVar40._0_4_ =
                 fVar31 * (auVar37._0_4_ +
                          auVar38._0_4_ * fVar34 + fVar24 * fVar30 + auVar35._0_4_ * fVar32);
            auVar40._4_4_ =
                 fVar33 * (auVar37._4_4_ +
                          auVar38._4_4_ * fVar34 + fVar26 * fVar30 + auVar35._4_4_ * fVar32);
            auVar40._8_4_ =
                 auVar42._0_4_ *
                 (auVar37._8_4_ + auVar38._8_4_ * fVar34 + fVar27 * fVar30 + auVar35._8_4_ * fVar32)
            ;
            auVar40._12_4_ =
                 fVar25 * (auVar37._12_4_ +
                          auVar38._12_4_ * fVar34 + fVar28 * fVar30 + auVar35._12_4_ * fVar32);
            auVar39 = NEON_ext(auVar40,auVar40,8,1);
            if (auVar40._0_4_ + auVar40._4_4_ + auVar39._0_4_ + fVar25 <= 0.0) {
              auVar39 = *(undefined1 (*) [16])(*plVar7 + (long)(iVar12 - iVar6) * 0x10);
              fVar30 = auVar39._0_4_;
              fVar32 = auVar39._4_4_;
              fVar34 = auVar39._8_4_;
              fVar24 = fVar31 * (auVar37._0_4_ +
                                auVar38._0_4_ * fVar34 + fVar24 * fVar30 + auVar35._0_4_ * fVar32);
              fVar26 = fVar33 * (auVar37._4_4_ +
                                auVar38._4_4_ * fVar34 + fVar26 * fVar30 + auVar35._4_4_ * fVar32);
              fVar27 = auVar42._0_4_ *
                       (auVar37._8_4_ +
                       auVar38._8_4_ * fVar34 + fVar27 * fVar30 + auVar35._8_4_ * fVar32);
              fVar28 = fVar25 * (auVar37._12_4_ +
                                auVar38._12_4_ * fVar34 + fVar28 * fVar30 + auVar35._12_4_ * fVar32)
              ;
              auVar41._4_4_ = fVar26;
              auVar41._0_4_ = fVar24;
              auVar41._8_4_ = fVar27;
              auVar41._12_4_ = fVar28;
              auVar5._4_4_ = fVar26;
              auVar5._0_4_ = fVar24;
              auVar5._8_4_ = fVar27;
              auVar5._12_4_ = fVar28;
              auVar35 = NEON_ext(auVar41,auVar5,8,1);
              if (0.0 <= fVar24 + fVar26 + auVar35._0_4_ + fVar25) {
                uVar8 = *(uint *)(lVar15 + 0xc);
                if ((*(byte *)(lVar15 + 0x10) >> 6 & 1) == 0) {
                  if (uVar8 == 0xffffffff) {
                    uVar8 = 0xffffffff;
                  }
                  else {
                    uVar8 = uVar8 & 0x3fffff | *(int *)(lVar13 + 0x17c) << 0x16;
                  }
                }
                uVar22 = (ulong)uVar8;
                lVar13 = *(long *)(*(long *)(param_2 + 0x38) + (ulong)(uVar8 >> 0x16) * 0xf0);
                if (lVar13 != 0) {
                  plVar7 = *(long **)(param_3 + 0x10);
                  if (plVar7 != (long *)0x0) {
                    local_70 = CONCAT44(local_70._4_4_,uVar8) & 0xffffffff003fffff;
                    iVar6 = (**(code **)(*plVar7 + 0x28))
                                      (plVar7,lVar13,&local_70,*(undefined4 *)(param_3 + 0x18),
                                       *(undefined8 *)(param_3 + 0x20));
                    if (iVar6 == 0) goto LAB_0315a104;
                  }
                  local_80 = (float)(uVar8 & 0x3fffff);
                  fVar24 = (float)FUN_03196014(lVar13,&local_80,(undefined1 (*) [16])(param_4 + 2),
                                               pfVar20,&local_70);
                  if (fVar24 < (float)param_4[5] * (float)param_4[5]) {
                    fVar24 = (float)*(undefined8 *)pfVar20 - *(float *)(lVar13 + 0x90);
                    fVar26 = (float)((ulong)*(undefined8 *)pfVar20 >> 0x20) -
                             *(float *)(lVar13 + 0x94);
                    fVar27 = (float)*(undefined8 *)(param_3 + 0x38) - *(float *)(lVar13 + 0x98);
                    auVar37 = *(undefined1 (*) [16])(lVar13 + 0x70);
                    auVar35 = *(undefined1 (*) [16])(lVar13 + 0x80);
                    auVar38 = *(undefined1 (*) [16])(lVar13 + 0x60);
                    auVar39 = NEON_ext(auVar38,auVar38,8,1);
                    auVar40 = NEON_ext(auVar37,auVar37,8,1);
                    auVar41 = NEON_ext(auVar35,auVar35,8,1);
                    uStack_68 = CONCAT44(auVar41._4_4_ * fVar27 +
                                         auVar35._4_4_ * fVar24 + auVar41._4_4_ * fVar26,
                                         auVar41._0_4_ * fVar27 +
                                         auVar35._0_4_ * fVar24 + auVar35._4_4_ * fVar26);
                    local_70 = CONCAT44(auVar40._0_4_ * fVar27 +
                                        auVar37._0_4_ * fVar24 + auVar37._4_4_ * fVar26,
                                        auVar39._0_4_ * fVar27 +
                                        auVar38._0_4_ * fVar24 + auVar38._4_4_ * fVar26);
                    local_88[0] = (float)(uVar8 & 0x3fffff);
                    FUN_03193d34(*(undefined8 *)(lVar13 + 0x20),&local_70,local_88,&local_80);
                    auVar35 = *(undefined1 (*) [16])(lVar13 + 0x80);
                    auVar37 = *(undefined1 (*) [16])(lVar13 + 0x90);
                    fVar24 = auVar37._0_4_ +
                             auVar35._0_4_ * fStack_78 +
                             (float)*(undefined8 *)(lVar13 + 0x60) * local_80 +
                             *(float *)(lVar13 + 0x70) * fStack_7c;
                    fVar26 = auVar37._4_4_ +
                             auVar35._4_4_ * fStack_78 +
                             (float)((ulong)*(undefined8 *)(lVar13 + 0x60) >> 0x20) * local_80 +
                             *(float *)(lVar13 + 0x74) * fStack_7c;
                    fVar27 = auVar37._8_4_ +
                             auVar35._8_4_ * fStack_78 +
                             (float)*(undefined8 *)(lVar13 + 0x68) * local_80 +
                             *(float *)(lVar13 + 0x78) * fStack_7c;
                    fVar28 = auVar37._12_4_ +
                             auVar35._12_4_ * fStack_78 +
                             (float)((ulong)*(undefined8 *)(lVar13 + 0x68) >> 0x20) * local_80 +
                             *(float *)(lVar13 + 0x7c) * fStack_7c;
                    uStack_98 = CONCAT44(fVar28,fVar27);
                    local_a0 = CONCAT44(fVar26,fVar24);
                    fVar30 = fVar26 - *(float *)(param_3 + 0x34);
                    fVar32 = fVar27 - *(float *)(param_3 + 0x38);
                    fVar34 = fVar28 - *(float *)(param_3 + 0x3c);
                    auVar29._0_4_ = (fVar24 - *pfVar20) * (fVar24 - *pfVar20);
                    auVar29._4_4_ = fVar30 * fVar30;
                    auVar29._8_4_ = fVar32 * fVar32;
                    auVar29._12_4_ = fVar34 * fVar34;
                    auVar35 = NEON_ext(auVar29,auVar29,8,1);
                    if (auVar29._0_4_ + auVar29._4_4_ + auVar35._0_4_ <=
                        (float)param_4[6] * (float)param_4[6]) goto LAB_0315a458;
                  }
                }
              }
            }
          }
LAB_0315a104:
          lVar19 = lVar19 + 1;
          if ((long)*piVar18 + (long)(short)piVar18[2] <= lVar19) break;
          lVar13 = *(long *)(lVar21 + 0x20);
          lVar23 = lVar23 + 0x14;
        } while( true );
      }
    }
  }
  if (*(long *)(lVar11 + 0x38d490) == 0) {
    lVar21 = FUN_0333d16c(0,1);
    *(long *)(lVar11 + 0x38d490) = lVar21;
    lVar11 = *(long *)(lVar21 + 0x10);
  }
  else {
    lVar11 = *(long *)(*(long *)(lVar11 + 0x38d490) + 0x10);
  }
  if (lVar11 != 0) {
    puVar2 = *(undefined8 **)(lVar11 + 8);
    uVar22 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar22 <= *(ulong *)(lVar11 + 0x10)) &&
       (*(ulong *)(lVar11 + 8) = uVar22, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "Stfull";
      uVar36 = nn::os::GetSystemTick();
      puVar2[1] = uVar36;
    }
  }
  uVar22 = (**(code **)(*param_1 + 0x20))(param_1,param_3,&local_a0);
  fVar27 = (float)uStack_98;
  fVar28 = (float)((ulong)uStack_98 >> 0x20);
  fVar24 = (float)local_a0;
  fVar26 = (float)((ulong)local_a0 >> 0x20);
LAB_0315a458:
  param_5[1] = CONCAT44(fVar28,fVar27);
  *param_5 = CONCAT44(fVar26,fVar24);
  if (lVar9 != 0) {
    puVar2 = *(undefined8 **)(lVar9 + 8);
    uVar10 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar10 <= *(ulong *)(lVar9 + 0x10)) &&
       (*(ulong *)(lVar9 + 8) = uVar10, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_03922da5;
      uVar36 = nn::os::GetSystemTick();
      puVar2[1] = uVar36;
    }
  }
  return uVar22 & 0xffffffff;
}


