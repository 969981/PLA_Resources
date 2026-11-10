/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b37a1c; name: FUN_02b37a1c
 */


uint FUN_02b37a1c(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  short sVar7;
  uint uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  float extraout_s0;
  float fVar16;
  float extraout_var;
  float fVar17;
  float extraout_var_00;
  float fVar18;
  float extraout_var_01;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  float fStack_48;
  float fStack_44;
  
  uVar24 = param_3._8_8_;
  auVar30._0_8_ = param_3._0_8_;
  uVar22 = param_2._8_8_;
  uVar20 = param_2._0_8_;
  iVar4 = *(int *)(param_5 + 0x178);
  if (((iVar4 != 0) || (*(char *)(param_5 + 0x22b) != '\0')) || (*(long *)(param_5 + 0xe8) != 0)) {
    *(undefined1 *)(param_5 + 0x22b) = 0;
    FUN_02bcb330(param_5 + 0xf0);
    uVar26 = param_4._0_8_;
    fVar46 = param_4._8_4_;
    fStack_44 = 1.0;
    lVar11 = *(long *)(param_5 + 0xe8);
    uStack_70 = uVar20;
    uStack_68 = uVar22;
    local_60 = auVar30._0_8_;
    uStack_58 = uVar24;
    uStack_50 = uVar26;
    fStack_48 = fVar46;
    local_80 = extraout_s0;
    fStack_7c = extraout_var;
    fVar32 = extraout_s0;
    fVar34 = extraout_var;
    fStack_78 = extraout_var_00;
    fStack_74 = extraout_var_01;
    fVar36 = extraout_var_00;
    fVar38 = extraout_var_01;
    if (lVar11 != 0) {
      fVar32 = extraout_s0;
      fVar34 = extraout_var;
      fVar36 = extraout_var_00;
      fVar38 = extraout_var_01;
      if (**(char **)(param_5 + 0x1a8) != '\0') {
        puVar9 = *(undefined8 **)(lVar11 + 0x58);
        puVar1 = *(undefined8 **)(lVar11 + 0x60);
        fVar32 = extraout_s0;
        fVar34 = extraout_var;
        fVar36 = extraout_var_00;
        fVar38 = extraout_var_01;
        if (puVar9 != puVar1) {
          do {
            sVar7 = FUN_02b6f370(*puVar9,param_5 + 0x1a0);
            if (-1 < sVar7) {
              if (-1 < (short)(*(short *)((long)puVar9 + 10) + sVar7)) {
                puVar9 = (undefined8 *)FUN_02b6962c(*(undefined8 *)(param_5 + 0xe8));
                fVar32 = *(float *)(puVar9 + 6);
                fVar34 = *(float *)((long)puVar9 + 0x34);
                fVar36 = *(float *)(puVar9 + 7);
                fVar38 = *(float *)((long)puVar9 + 0x3c);
                fVar19 = (float)puVar9[4];
                fVar21 = (float)((ulong)puVar9[4] >> 0x20);
                fVar51 = (float)uVar20;
                fVar35 = (float)((ulong)uVar20 >> 0x20);
                fVar40 = (float)uVar22;
                fVar42 = (float)((ulong)uVar22 >> 0x20);
                fVar16 = (float)puVar9[2];
                fVar17 = (float)((ulong)puVar9[2] >> 0x20);
                fVar48 = (float)*puVar9;
                fVar49 = (float)((ulong)*puVar9 >> 0x20);
                fVar50 = (float)puVar9[1];
                fVar31 = (float)auVar30._0_8_;
                fVar37 = (float)((ulong)auVar30._0_8_ >> 0x20);
                fVar41 = (float)uVar24;
                fVar43 = (float)((ulong)uVar24 >> 0x20);
                fVar18 = (float)puVar9[3];
                fVar23 = (float)puVar9[5];
                fVar25 = (float)((ulong)puVar9[5] >> 0x20);
                fVar33 = param_4._0_4_;
                fVar39 = param_4._4_4_;
                auVar30._0_8_ =
                     CONCAT44(extraout_var * fVar19 + fVar35 * fVar21 + fVar37 * fVar23 +
                              fVar39 * fVar25,
                              extraout_s0 * fVar19 + fVar51 * fVar21 + fVar31 * fVar23 +
                              fVar33 * fVar25);
                auVar30._8_4_ =
                     extraout_var_00 * fVar19 + fVar40 * fVar21 + fVar41 * fVar23 + fVar46 * fVar25;
                auVar30._12_4_ =
                     extraout_var_01 * fVar19 + fVar42 * fVar21 + fVar43 * fVar23 + fVar25 * 1.0;
                fVar19 = (float)((ulong)puVar9[1] >> 0x20);
                local_80 = extraout_s0 * fVar48 + fVar51 * fVar49 + fVar31 * fVar50 +
                           fVar33 * fVar19;
                fStack_7c = extraout_var * fVar48 + fVar35 * fVar49 + fVar37 * fVar50 +
                            fVar39 * fVar19;
                fStack_78 = extraout_var_00 * fVar48 + fVar40 * fVar49 + fVar41 * fVar50 +
                            fVar46 * fVar19;
                fStack_74 = extraout_var_01 * fVar48 + fVar42 * fVar49 + fVar43 * fVar50 +
                            fVar19 * 1.0;
                fVar19 = (float)((ulong)puVar9[3] >> 0x20);
                uVar20 = CONCAT44(extraout_var * fVar16 + fVar35 * fVar17 + fVar37 * fVar18 +
                                  fVar39 * fVar19,
                                  extraout_s0 * fVar16 + fVar51 * fVar17 + fVar31 * fVar18 +
                                  fVar33 * fVar19);
                uVar22 = CONCAT44(extraout_var_01 * fVar16 + fVar42 * fVar17 + fVar43 * fVar18 +
                                  fVar19 * 1.0,
                                  extraout_var_00 * fVar16 + fVar40 * fVar17 + fVar41 * fVar18 +
                                  fVar46 * fVar19);
                uVar26 = CONCAT44(extraout_var * fVar32 + fVar35 * fVar34 + fVar37 * fVar36 +
                                  fVar39 * fVar38,
                                  extraout_s0 * fVar32 + fVar51 * fVar34 + fVar31 * fVar36 +
                                  fVar33 * fVar38);
                fStack_48 = extraout_var_00 * fVar32 + fVar40 * fVar34 + fVar41 * fVar36 +
                            fVar46 * fVar38;
                fStack_44 = extraout_var_01 * fVar32 + fVar42 * fVar34 + fVar43 * fVar36 +
                            fVar38 * 1.0;
                uVar24 = auVar30._8_8_;
                uStack_70 = uVar20;
                uStack_68 = uVar22;
                local_60 = auVar30._0_8_;
                uStack_58 = uVar24;
                uStack_50 = uVar26;
                fVar46 = fStack_48;
                fVar32 = local_80;
                fVar34 = fStack_7c;
                fVar36 = fStack_78;
                fVar38 = fStack_74;
                goto LAB_02b37b54;
              }
              break;
            }
            puVar9 = puVar9 + 2;
          } while (puVar1 != puVar9);
          fVar32 = extraout_s0;
          fVar34 = extraout_var;
          fVar36 = extraout_var_00;
          fVar38 = extraout_var_01;
        }
      }
    }
LAB_02b37b54:
    if (*(float *)(param_5 + 0x1ec) <= 0.0) {
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = (long *)0x0;
      uStack_b8 = 0;
      if (((*(long *)(param_5 + 0xe8) != 0) &&
          (uVar14 = FUN_02b6abbc(*(long *)(param_5 + 0xe8),*(undefined4 *)(param_5 + 0x22c),
                                 &local_c0), (uVar14 & 1) != 0)) &&
         (sVar7 = (short)*(undefined4 *)(param_5 + 0x22c), -1 < sVar7)) {
        lVar11 = *(long *)(param_5 + 0xe8);
        if ((int)sVar7 <
            (*(int *)(lVar11 + 0x3d8) - (int)*(long *)(lVar11 + 0x3d0)) * 0x8000 >> 0x10) {
          sVar7 = *(short *)(*(long *)(lVar11 + 0x3d0) + (long)sVar7 * 2);
          if (-1 < sVar7) {
            if ((int)sVar7 <
                (*(int *)(lVar11 + 0x390) - (int)*(long *)(lVar11 + 0x388)) * 0x400 >> 0x10) {
              puVar9 = (undefined8 *)(*(long *)(lVar11 + 0x388) + (long)(int)sVar7 * 0x40);
              fVar38 = (float)*puVar9;
              fVar16 = (float)((ulong)*puVar9 >> 0x20);
              fVar46 = *(float *)(puVar9 + 6);
              fVar32 = *(float *)((long)puVar9 + 0x34);
              fVar34 = *(float *)(puVar9 + 7);
              fVar36 = *(float *)((long)puVar9 + 0x3c);
              fVar23 = (float)puVar9[4];
              fVar25 = (float)((ulong)puVar9[4] >> 0x20);
              fVar31 = (float)local_a0;
              fVar33 = (float)((ulong)local_a0 >> 0x20);
              fVar35 = (float)uStack_98;
              fVar37 = (float)((ulong)uStack_98 >> 0x20);
              fVar17 = (float)puVar9[1];
              fVar18 = (float)((ulong)puVar9[1] >> 0x20);
              fVar48 = (float)local_90;
              fVar49 = (float)((ulong)local_90 >> 0x20);
              fVar50 = (float)uStack_88;
              fVar51 = (float)((ulong)uStack_88 >> 0x20);
              fVar39 = (float)local_c0 * fVar38 + (float)local_b0 * fVar16 + fVar31 * fVar17 +
                       fVar48 * fVar18;
              fVar40 = local_c0._4_4_ * fVar38 + local_b0._4_4_ * fVar16 + fVar33 * fVar17 +
                       fVar49 * fVar18;
              fVar41 = (float)uStack_b8 * fVar38 + (float)uStack_a8 * fVar16 + fVar35 * fVar17 +
                       fVar50 * fVar18;
              fVar42 = uStack_b8._4_4_ * fVar38 + uStack_a8._4_4_ * fVar16 + fVar37 * fVar17 +
                       fVar51 * fVar18;
              fVar38 = (float)puVar9[2];
              fVar19 = (float)((ulong)puVar9[2] >> 0x20);
              fVar16 = (float)puVar9[5];
              fVar21 = (float)puVar9[3];
              fVar17 = (float)((ulong)puVar9[5] >> 0x20);
              fVar43 = (float)local_c0 * fVar23 + (float)local_b0 * fVar25 + fVar31 * fVar16 +
                       fVar48 * fVar17;
              fVar44 = local_c0._4_4_ * fVar23 + local_b0._4_4_ * fVar25 + fVar33 * fVar16 +
                       fVar49 * fVar17;
              fVar45 = (float)uStack_b8 * fVar23 + (float)uStack_a8 * fVar25 + fVar35 * fVar16 +
                       fVar50 * fVar17;
              fVar47 = uStack_b8._4_4_ * fVar23 + uStack_a8._4_4_ * fVar25 + fVar37 * fVar16 +
                       fVar51 * fVar17;
              fVar23 = (float)((ulong)puVar9[3] >> 0x20);
              fVar16 = (float)local_c0 * fVar38 + (float)local_b0 * fVar19 + fVar31 * fVar21 +
                       fVar48 * fVar23;
              fVar17 = local_c0._4_4_ * fVar38 + local_b0._4_4_ * fVar19 + fVar33 * fVar21 +
                       fVar49 * fVar23;
              fVar18 = (float)uStack_b8 * fVar38 + (float)uStack_a8 * fVar19 + fVar35 * fVar21 +
                       fVar50 * fVar23;
              fVar19 = uStack_b8._4_4_ * fVar38 + uStack_a8._4_4_ * fVar19 + fVar37 * fVar21 +
                       fVar51 * fVar23;
              fVar48 = (float)local_c0 * fVar46 + (float)local_b0 * fVar32 + fVar31 * fVar34 +
                       fVar48 * fVar36;
              fVar49 = local_c0._4_4_ * fVar46 + local_b0._4_4_ * fVar32 + fVar33 * fVar34 +
                       fVar49 * fVar36;
              fVar50 = (float)uStack_b8 * fVar46 + (float)uStack_a8 * fVar32 + fVar35 * fVar34 +
                       fVar50 * fVar36;
              fVar51 = uStack_b8._4_4_ * fVar46 + uStack_a8._4_4_ * fVar32 + fVar37 * fVar34 +
                       fVar51 * fVar36;
              fVar46 = (float)uStack_70;
              fVar21 = (float)((ulong)uStack_70 >> 0x20);
              fVar23 = (float)uStack_68;
              fVar25 = (float)((ulong)uStack_68 >> 0x20);
              auVar30._0_8_ =
                   CONCAT44(fStack_7c * fVar43 + fVar21 * fVar44 + local_60._4_4_ * fVar45 +
                            uStack_50._4_4_ * fVar47,
                            local_80 * fVar43 + fVar46 * fVar44 + (float)local_60 * fVar45 +
                            (float)uStack_50 * fVar47);
              uVar24 = CONCAT44(fStack_74 * fVar43 + fVar25 * fVar44 + uStack_58._4_4_ * fVar45 +
                                fStack_44 * fVar47,
                                fStack_78 * fVar43 + fVar23 * fVar44 + (float)uStack_58 * fVar45 +
                                fStack_48 * fVar47);
              fVar32 = local_80 * fVar39 + fVar46 * fVar40 + (float)local_60 * fVar41 +
                       (float)uStack_50 * fVar42;
              fVar34 = fStack_7c * fVar39 + fVar21 * fVar40 + local_60._4_4_ * fVar41 +
                       uStack_50._4_4_ * fVar42;
              fVar36 = fStack_78 * fVar39 + fVar23 * fVar40 + (float)uStack_58 * fVar41 +
                       fStack_48 * fVar42;
              fVar38 = fStack_74 * fVar39 + fVar25 * fVar40 + uStack_58._4_4_ * fVar41 +
                       fStack_44 * fVar42;
              uVar20 = CONCAT44(fStack_7c * fVar16 + fVar21 * fVar17 + local_60._4_4_ * fVar18 +
                                uStack_50._4_4_ * fVar19,
                                local_80 * fVar16 + fVar46 * fVar17 + (float)local_60 * fVar18 +
                                (float)uStack_50 * fVar19);
              uVar22 = CONCAT44(fStack_74 * fVar16 + fVar25 * fVar17 + uStack_58._4_4_ * fVar18 +
                                fStack_44 * fVar19,
                                fStack_78 * fVar16 + fVar23 * fVar17 + (float)uStack_58 * fVar18 +
                                fStack_48 * fVar19);
              uVar26 = CONCAT44(fStack_7c * fVar48 + fVar21 * fVar49 + local_60._4_4_ * fVar50 +
                                uStack_50._4_4_ * fVar51,
                                local_80 * fVar48 + fVar46 * fVar49 + (float)local_60 * fVar50 +
                                (float)uStack_50 * fVar51);
              fVar46 = fStack_78 * fVar48 + fVar23 * fVar49 + (float)uStack_58 * fVar50 +
                       fStack_48 * fVar51;
            }
          }
        }
      }
      auVar28._0_4_ = fVar32 * fVar32;
      auVar28._4_4_ = fVar34 * fVar34;
      auVar28._8_4_ = fVar36 * fVar36;
      auVar28._12_4_ = fVar38 * fVar38;
      auVar27 = NEON_ext(auVar28,auVar28,8,1);
      fVar49 = SQRT(auVar27._0_4_ + auVar28._0_4_ + auVar27._4_4_ + auVar28._4_4_);
      fVar16 = (float)uVar20;
      auVar27._0_4_ = fVar16 * fVar16;
      fVar17 = (float)((ulong)uVar20 >> 0x20);
      auVar27._4_4_ = fVar17 * fVar17;
      fVar18 = (float)uVar22;
      auVar27._8_4_ = fVar18 * fVar18;
      fVar38 = (float)((ulong)uVar22 >> 0x20);
      auVar27._12_4_ = fVar38 * fVar38;
      auVar28 = NEON_ext(auVar27,auVar27,8,1);
      fVar48 = (float)*(undefined8 *)(param_5 + 0x1c8);
      fVar38 = SQRT(auVar28._0_4_ + auVar27._0_4_ + auVar28._4_4_ + auVar27._4_4_);
      fVar19 = (float)auVar30._0_8_;
      auVar29._0_4_ = fVar19 * fVar19;
      fVar21 = (float)((ulong)auVar30._0_8_ >> 0x20);
      auVar29._4_4_ = fVar21 * fVar21;
      fVar23 = (float)uVar24;
      auVar29._8_4_ = fVar23 * fVar23;
      fVar25 = (float)((ulong)uVar24 >> 0x20);
      auVar29._12_4_ = fVar25 * fVar25;
      auVar30 = NEON_ext(auVar29,auVar29,8,1);
      if (fVar38 <= fVar49) {
        fVar38 = fVar49;
      }
      fVar25 = SQRT(auVar30._0_4_ + auVar29._0_4_ + auVar30._4_4_ + auVar29._4_4_);
      if (fVar25 <= fVar38) {
        fVar25 = fVar38;
      }
      fVar38 = (float)*(undefined8 *)(param_5 + 0x1c0);
      fVar49 = (float)((ulong)*(undefined8 *)(param_5 + 0x1c0) >> 0x20);
      *(float *)(param_5 + 0x1d8) =
           fVar36 * fVar38 + fVar18 * fVar49 + fVar23 * fVar48 + fVar46 * 1.0;
      *(float *)(param_5 + 0x1dc) =
           fVar25 * (float)((ulong)*(undefined8 *)(param_5 + 0x1c8) >> 0x20);
      *(float *)(param_5 + 0x1d0) =
           fVar32 * fVar38 + fVar16 * fVar49 + fVar19 * fVar48 + (float)uVar26 * 1.0;
      *(float *)(param_5 + 0x1d4) =
           fVar34 * fVar38 + fVar17 * fVar49 + fVar21 * fVar48 +
           (float)((ulong)uVar26 >> 0x20) * 1.0;
    }
    else {
      *(undefined8 *)(param_5 + 0x1d0) = *(undefined8 *)(param_5 + 0x1e0);
      *(undefined8 *)(param_5 + 0x1d8) = *(undefined8 *)(param_5 + 0x1e8);
    }
    plVar10 = (long *)(*(long *)(param_5 + 0x120) + 0x58);
    (**(code **)(*plVar10 + 0x10))(plVar10,&local_80);
    plVar10 = *(long **)(param_5 + 0x78);
    plVar2 = *(long **)(param_5 + 0x80);
    if (plVar10 != plVar2) {
      puVar9 = (undefined8 *)(param_5 + 0x1d0);
      do {
        plVar13 = *(long **)(*plVar10 + 0xe0);
        plVar3 = *(long **)(*plVar10 + 0xe8);
        if (plVar13 != plVar3) {
          uVar14 = (long)plVar3 + (-8 - (long)plVar13);
          uVar8 = ((uint)(uVar14 >> 3) & 0x1fffffff) + 1;
          if ((uVar8 & 3) != 0) {
            lVar11 = -((ulong)uVar8 & 3);
            plVar12 = plVar13;
            do {
              plVar13 = plVar12 + 1;
              lVar15 = *plVar12;
              bVar6 = lVar11 != -1;
              lVar11 = lVar11 + 1;
              uVar20 = *(undefined8 *)(param_5 + 0x1d8);
              *(undefined8 *)(lVar15 + 0x80) = *puVar9;
              *(undefined8 *)(lVar15 + 0x88) = uVar20;
              plVar12 = plVar13;
            } while (bVar6);
          }
          if (0x17 < uVar14) {
            do {
              lVar11 = *plVar13;
              *(undefined8 *)(lVar11 + 0x88) = *(undefined8 *)(param_5 + 0x1d8);
              *(undefined8 *)(lVar11 + 0x80) = *puVar9;
              lVar11 = plVar13[1];
              *(undefined8 *)(lVar11 + 0x88) = *(undefined8 *)(param_5 + 0x1d8);
              *(undefined8 *)(lVar11 + 0x80) = *puVar9;
              lVar11 = plVar13[2];
              *(undefined8 *)(lVar11 + 0x88) = *(undefined8 *)(param_5 + 0x1d8);
              *(undefined8 *)(lVar11 + 0x80) = *puVar9;
              lVar11 = plVar13[3];
              uVar20 = *(undefined8 *)(param_5 + 0x1d8);
              plVar13 = plVar13 + 4;
              *(undefined8 *)(lVar11 + 0x80) = *puVar9;
              *(undefined8 *)(lVar11 + 0x88) = uVar20;
            } while (plVar13 != plVar3);
          }
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar2);
    }
    plVar10 = *(long **)(param_5 + 0xb0);
    plVar2 = *(long **)(param_5 + 0xb8);
    if (plVar10 != plVar2) {
      if (iVar4 == 0) {
        uVar8 = 0;
        do {
          lVar11 = *plVar10;
          if (*(long *)(param_5 + 0xe8) == 0) {
            local_c0 = (long *)0x0;
          }
          else {
            local_c0 = *(long **)(*(long *)(param_5 + 0xe8) + 0x3c0);
            if (local_c0 != (long *)0x0) {
              plVar13 = local_c0 + 10;
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar6) {
                  *(int *)plVar13 = (int)*plVar13 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
          }
          (**(code **)(*(long *)(lVar11 + 0x58) + 0x50))((long *)(lVar11 + 0x58),&local_c0);
          if (local_c0 != (long *)0x0) {
            plVar13 = local_c0 + 10;
            do {
              iVar4 = (int)*plVar13 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar6) {
                *(int *)plVar13 = iVar4;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar4 == 0) {
              (**(code **)(*local_c0 + 0x10))();
            }
          }
          (**(code **)(*(long *)(*plVar10 + 0x58) + 0x58))
                    ((long *)(*plVar10 + 0x58),param_5 + 0x120,param_5 + 0x1f0);
          plVar13 = plVar10 + 1;
          uVar8 = (**(code **)(*(long *)(*plVar10 + 0x58) + 0x20))((long *)(*plVar10 + 0x58),uVar8);
          plVar10 = plVar13;
        } while (plVar13 != plVar2);
      }
      else {
        uVar8 = 0;
        do {
          lVar11 = *plVar10;
          if (*(long *)(param_5 + 0xe8) == 0) {
            local_c0 = (long *)0x0;
          }
          else {
            local_c0 = *(long **)(*(long *)(param_5 + 0xe8) + 0x3c0);
            if (local_c0 != (long *)0x0) {
              plVar13 = local_c0 + 10;
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar6) {
                  *(int *)plVar13 = (int)*plVar13 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
          }
          (**(code **)(*(long *)(lVar11 + 0x58) + 0x50))((long *)(lVar11 + 0x58),&local_c0);
          if (local_c0 != (long *)0x0) {
            plVar13 = local_c0 + 10;
            do {
              iVar4 = (int)*plVar13 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar6) {
                *(int *)plVar13 = iVar4;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar4 == 0) {
              (**(code **)(*local_c0 + 0x10))();
            }
          }
          lVar11 = *plVar10;
          *(uint *)(param_5 + 0x178) = *(uint *)(param_5 + 0x178) | 0x20;
          (**(code **)(*(long *)(lVar11 + 0x58) + 0x58))
                    ((long *)(lVar11 + 0x58),param_5 + 0x120,param_5 + 0x1f0);
          plVar13 = plVar10 + 1;
          uVar8 = (**(code **)(*(long *)(*plVar10 + 0x58) + 0x20))((long *)(*plVar10 + 0x58),uVar8);
          plVar10 = plVar13;
        } while (plVar13 != plVar2);
      }
      return uVar8 & 0x7f;
    }
  }
  return 0;
}


