/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0335d590; name: FUN_0335d590
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0335d590(undefined8 *param_1,float *param_2)

{
  float *pfVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  undefined2 *puVar16;
  long lVar17;
  float **ppfVar18;
  long lVar19;
  undefined8 *puVar20;
  int iVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar44;
  undefined8 uVar45;
  float fVar47;
  undefined8 uVar46;
  float fVar48;
  int iVar49;
  int iVar54;
  undefined8 uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  int iVar56;
  undefined1 auVar55 [16];
  ulong uVar57;
  float *local_108 [3];
  float *local_f0;
  float *local_e8;
  float *local_e0;
  float *local_d8;
  float *local_d0;
  float *local_c8;
  float *local_c0;
  float *local_b8;
  float *local_b0;
  int local_a8;
  float local_a4;
  undefined8 *local_a0;
  float *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  local_f0 = DAT_03ab1708;
  local_e8 = DAT_03ab1710;
  local_108[2] = DAT_03ab1718;
  local_108[0] = DAT_03ab1708;
  local_108[1] = DAT_03ab1710;
  local_d0 = DAT_03ab1710;
  local_c8 = DAT_03ab1718;
  local_e0 = DAT_03ab1718;
  local_d8 = DAT_03ab1708;
  local_c0 = DAT_03ab1708;
  local_b8 = DAT_03ab1710;
  local_b0 = DAT_03ab1718;
  local_a8 = 0;
  local_a4 = 0.0;
  local_a0 = param_1;
  local_98 = param_2;
  uVar45 = param_1[2];
  fVar27 = *(float *)(param_1 + 8);
  *(undefined8 *)(param_2 + 6) = param_1[3];
  *(undefined8 *)(param_2 + 4) = uVar45;
  uVar45 = *param_1;
  *(undefined8 *)(param_2 + 2) = param_1[1];
  *(undefined8 *)param_2 = uVar45;
  uVar22 = (ulong)*(uint *)(param_1 + 10);
  if (0 < (int)*(uint *)(param_1 + 10)) {
    puVar16 = *(undefined2 **)(param_2 + 10);
    *puVar16 = 0;
    *(undefined8 *)(puVar16 + 2) = 0;
    *(undefined4 *)(puVar16 + 6) = 0;
    uVar22 = (ulong)*(uint *)(param_1 + 10);
    if (1 < (int)*(uint *)(param_1 + 10)) {
      lVar17 = 0;
      lVar19 = 1;
      do {
        lVar24 = *(long *)(param_2 + 10) + lVar17;
        lVar17 = lVar17 + 0x10;
        *(undefined2 *)(lVar24 + 0x10) = 0;
        *(undefined8 *)(lVar24 + 0x14) = 0;
        *(undefined4 *)(lVar24 + 0x1c) = 0;
        uVar22 = (ulong)*(int *)(param_1 + 10);
        lVar19 = lVar19 + 1;
      } while (lVar19 < (long)uVar22);
    }
  }
  if (fVar27 < 0.0) {
    return;
  }
  uVar57 = CONCAT44(fVar27,fVar27);
  do {
    iVar21 = (int)uVar22;
    iVar49 = -1;
    fVar27 = (float)uVar57;
    uVar22 = uVar57;
    if (0 < iVar21) {
      fVar31 = (float)*(undefined8 *)(param_2 + 2);
      fVar33 = (float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20);
      fVar28 = (float)*(undefined8 *)param_2;
      fVar29 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
      fVar30 = param_2[4];
      fVar32 = param_2[5];
      fVar34 = param_2[6];
      lVar17 = *(long *)(param_2 + 10);
      if (local_a8 < 1) {
        if (*(int *)(lVar17 + 0xc) == 0) {
          puVar20 = (undefined8 *)param_1[9];
          auVar51 = *(undefined1 (*) [16])(puVar20 + 2);
          iVar49 = -1;
          fVar42 = (float)*puVar20;
          fVar38 = (fVar30 - auVar51._0_4_) * fVar42;
          fVar47 = (float)((ulong)*puVar20 >> 0x20);
          fVar41 = (fVar32 - auVar51._4_4_) * fVar47;
          fVar48 = (float)puVar20[1];
          fVar43 = (fVar34 - auVar51._8_4_) * fVar48;
          fVar26 = (float)((ulong)puVar20[1] >> 0x20);
          fVar44 = -(fVar38 + fVar41 + fVar43);
          uVar45 = CONCAT44(-(fVar38 + fVar41 + fVar43),fVar44);
          if (0.0 < fVar44) {
            auVar40._0_4_ = fVar42 * (fVar28 - auVar51._0_4_ * local_a4);
            auVar40._4_4_ = fVar47 * (fVar29 - auVar51._4_4_ * local_a4);
            auVar40._8_4_ = fVar48 * (fVar31 - auVar51._8_4_ * local_a4);
            auVar40._12_4_ = fVar26 * (fVar33 - auVar51._12_4_ * local_a4);
            auVar51 = NEON_ext(auVar40,auVar40,8,1);
            fVar26 = auVar51._0_4_ + fVar26;
            fVar38 = auVar40._0_4_ + auVar40._4_4_ + fVar26;
            fVar26 = auVar40._0_4_ + auVar40._4_4_ + fVar26;
            iVar49 = -(uint)(fVar38 <= 1.1920929e-07);
            iVar54 = -(uint)(fVar26 <= 1.1920929e-07);
            fVar38 = (float)CONCAT13((byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                                     CONCAT12((byte)((uint)fVar38 >> 0x10) &
                                              ~(byte)((uint)iVar49 >> 0x10),
                                              CONCAT11((byte)((uint)fVar38 >> 8) &
                                                       ~(byte)((uint)iVar49 >> 8),
                                                       SUB41(fVar38,0) & ~(byte)iVar49)));
            fVar41 = fVar38 + *(float *)(*(long *)(local_98 + 10) + 8);
            if (fVar27 * fVar44 <= fVar41) goto LAB_0335dba0;
            uVar46 = NEON_frecpe(uVar45,4);
            uVar50 = NEON_frecps(uVar45,uVar46,4);
            fVar43 = (float)uVar46 * (float)uVar50;
            fVar44 = (float)((ulong)uVar46 >> 0x20) * (float)((ulong)uVar50 >> 0x20);
            uVar45 = NEON_frecps(uVar45,CONCAT44(fVar44,fVar43),4);
            uVar22 = CONCAT44(((float)(CONCAT17((byte)((uint)fVar26 >> 0x18) &
                                                ~(byte)((uint)iVar54 >> 0x18),
                                                CONCAT16((byte)((uint)fVar26 >> 0x10) &
                                                         ~(byte)((uint)iVar54 >> 0x10),
                                                         CONCAT15((byte)((uint)fVar26 >> 8) &
                                                                  ~(byte)((uint)iVar54 >> 8),
                                                                  CONCAT14(SUB41(fVar26,0) &
                                                                           ~(byte)iVar54,fVar38))))
                                      >> 0x20) + *(float *)(*(long *)(local_98 + 10) + 8)) *
                              fVar44 * (float)((ulong)uVar45 >> 0x20),
                              fVar41 * fVar43 * (float)uVar45);
            iVar49 = 0;
          }
        }
        else {
LAB_0335dba0:
          iVar49 = -1;
        }
        if (iVar21 != 1) {
          auVar39._8_8_ = 0;
          auVar39._0_8_ = uVar22;
          lVar23 = 0;
          lVar24 = 0;
          lVar19 = 1;
          do {
            if (*(int *)(lVar17 + 0x1c + lVar24) == 0) {
              lVar2 = param_1[9] + lVar23;
              auVar51 = *(undefined1 (*) [16])(lVar2 + 0x60);
              fVar44 = (float)*(undefined8 *)(lVar2 + 0x50);
              fVar26 = (fVar30 - auVar51._0_4_) * fVar44;
              fVar42 = (float)((ulong)*(undefined8 *)(lVar2 + 0x50) >> 0x20);
              fVar41 = (fVar32 - auVar51._4_4_) * fVar42;
              fVar47 = (float)*(undefined8 *)(lVar2 + 0x58);
              fVar43 = (fVar34 - auVar51._8_4_) * fVar47;
              fVar38 = -(fVar26 + fVar41 + fVar43);
              uVar45 = CONCAT44(-(fVar26 + fVar41 + fVar43),fVar38);
              if (0.0 < fVar38) {
                auVar52._0_4_ = fVar44 * (fVar28 - auVar51._0_4_ * local_a4);
                auVar52._4_4_ = fVar42 * (fVar29 - auVar51._4_4_ * local_a4);
                auVar52._8_4_ = fVar47 * (fVar31 - auVar51._8_4_ * local_a4);
                fVar43 = (float)((ulong)*(undefined8 *)(lVar2 + 0x58) >> 0x20);
                auVar52._12_4_ = fVar43 * (fVar33 - auVar51._12_4_ * local_a4);
                auVar51 = NEON_ext(auVar52,auVar52,8,1);
                fVar43 = auVar51._0_4_ + fVar43;
                fVar41 = auVar52._0_4_ + auVar52._4_4_ + fVar43;
                fVar43 = auVar52._0_4_ + auVar52._4_4_ + fVar43;
                fVar26 = *(float *)(*(long *)(local_98 + 10) + lVar24 + 0x18);
                iVar54 = -(uint)(fVar41 <= 1.1920929e-07);
                iVar56 = -(uint)(fVar43 <= 1.1920929e-07);
                fVar41 = (float)CONCAT13((byte)((uint)fVar41 >> 0x18) &
                                         ~(byte)((uint)iVar54 >> 0x18),
                                         CONCAT12((byte)((uint)fVar41 >> 0x10) &
                                                  ~(byte)((uint)iVar54 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar41 >> 8) &
                                                           ~(byte)((uint)iVar54 >> 8),
                                                           SUB41(fVar41,0) & ~(byte)iVar54)));
                fVar44 = fVar41 + fVar26;
                if (fVar44 < auVar39._0_4_ * fVar38) {
                  uVar46 = NEON_frecpe(uVar45,4);
                  uVar50 = NEON_frecps(uVar45,uVar46,4);
                  fVar38 = (float)uVar46 * (float)uVar50;
                  fVar42 = (float)((ulong)uVar46 >> 0x20) * (float)((ulong)uVar50 >> 0x20);
                  uVar45 = NEON_frecps(uVar45,CONCAT44(fVar42,fVar38),4);
                  auVar39._0_4_ = fVar44 * fVar38 * (float)uVar45;
                  auVar39._4_4_ =
                       ((float)(CONCAT17((byte)((uint)fVar43 >> 0x18) &
                                         ~(byte)((uint)iVar56 >> 0x18),
                                         CONCAT16((byte)((uint)fVar43 >> 0x10) &
                                                  ~(byte)((uint)iVar56 >> 0x10),
                                                  CONCAT15((byte)((uint)fVar43 >> 8) &
                                                           ~(byte)((uint)iVar56 >> 8),
                                                           CONCAT14(SUB41(fVar43,0) & ~(byte)iVar56,
                                                                    fVar41)))) >> 0x20) + fVar26) *
                       fVar42 * (float)((ulong)uVar45 >> 0x20);
                  auVar39._8_8_ = 0;
                  iVar49 = (int)lVar19;
                }
              }
            }
            uVar22 = auVar39._0_8_;
            lVar19 = lVar19 + 1;
            lVar24 = lVar24 + 0x10;
            lVar23 = lVar23 + 0x50;
          } while (iVar21 != lVar19);
        }
      }
      else {
        if ((int)local_108[0] == 0) {
joined_r0x0335dc20:
          iVar49 = -1;
        }
        else {
          if (1 < local_a8) {
            if (((int)local_f0 == 0) || (2 < local_a8 && (int)local_d8 == 0))
            goto joined_r0x0335dc20;
          }
          if (*(int *)(lVar17 + 0xc) != 0) goto joined_r0x0335dc20;
          puVar20 = (undefined8 *)param_1[9];
          auVar51 = *(undefined1 (*) [16])(puVar20 + 2);
          fVar42 = (float)*puVar20;
          fVar38 = (fVar30 - auVar51._0_4_) * fVar42;
          fVar47 = (float)((ulong)*puVar20 >> 0x20);
          fVar41 = (fVar32 - auVar51._4_4_) * fVar47;
          fVar48 = (float)puVar20[1];
          fVar43 = (fVar34 - auVar51._8_4_) * fVar48;
          fVar26 = (float)((ulong)puVar20[1] >> 0x20);
          fVar44 = -(fVar38 + fVar41 + fVar43);
          uVar45 = CONCAT44(-(fVar38 + fVar41 + fVar43),fVar44);
          if (fVar44 <= 0.0) goto joined_r0x0335dc20;
          auVar55._0_4_ = fVar42 * (fVar28 - auVar51._0_4_ * local_a4);
          auVar55._4_4_ = fVar47 * (fVar29 - auVar51._4_4_ * local_a4);
          auVar55._8_4_ = fVar48 * (fVar31 - auVar51._8_4_ * local_a4);
          auVar55._12_4_ = fVar26 * (fVar33 - auVar51._12_4_ * local_a4);
          auVar51 = NEON_ext(auVar55,auVar55,8,1);
          fVar26 = auVar51._0_4_ + fVar26;
          fVar38 = auVar55._0_4_ + auVar55._4_4_ + fVar26;
          fVar26 = auVar55._0_4_ + auVar55._4_4_ + fVar26;
          iVar49 = -(uint)(fVar38 <= 1.1920929e-07);
          iVar54 = -(uint)(fVar26 <= 1.1920929e-07);
          fVar38 = (float)CONCAT13((byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                                   CONCAT12((byte)((uint)fVar38 >> 0x10) &
                                            ~(byte)((uint)iVar49 >> 0x10),
                                            CONCAT11((byte)((uint)fVar38 >> 8) &
                                                     ~(byte)((uint)iVar49 >> 8),
                                                     SUB41(fVar38,0) & ~(byte)iVar49)));
          fVar41 = fVar38 + *(float *)(*(long *)(local_98 + 10) + 8);
          if (fVar27 * fVar44 <= fVar41) goto joined_r0x0335dc20;
          uVar46 = NEON_frecpe(uVar45,4);
          uVar50 = NEON_frecps(uVar45,uVar46,4);
          fVar43 = (float)uVar46 * (float)uVar50;
          fVar44 = (float)((ulong)uVar46 >> 0x20) * (float)((ulong)uVar50 >> 0x20);
          uVar45 = NEON_frecps(uVar45,CONCAT44(fVar44,fVar43),4);
          iVar49 = 0;
          uVar22 = CONCAT44(((float)(CONCAT17((byte)((uint)fVar26 >> 0x18) &
                                              ~(byte)((uint)iVar54 >> 0x18),
                                              CONCAT16((byte)((uint)fVar26 >> 0x10) &
                                                       ~(byte)((uint)iVar54 >> 0x10),
                                                       CONCAT15((byte)((uint)fVar26 >> 8) &
                                                                ~(byte)((uint)iVar54 >> 8),
                                                                CONCAT14(SUB41(fVar26,0) &
                                                                         ~(byte)iVar54,fVar38)))) >>
                                    0x20) + *(float *)(*(long *)(local_98 + 10) + 8)) *
                            fVar44 * (float)((ulong)uVar45 >> 0x20),fVar41 * fVar43 * (float)uVar45)
          ;
        }
        if (iVar21 != 1) {
          auVar51._8_8_ = 0;
          auVar51._0_8_ = uVar22;
          lVar24 = 0;
          lVar19 = 0;
          uVar25 = 1;
          do {
            if (((ulong)local_108[0] & 0xffffffff) != uVar25) {
              if (1 < local_a8) {
                if ((((ulong)local_f0 & 0xffffffff) == uVar25) ||
                   (2 < local_a8 && ((ulong)local_d8 & 0xffffffff) == uVar25)) goto LAB_0335d998;
              }
              if (*(int *)(lVar17 + 0x1c + lVar19) == 0) {
                lVar23 = param_1[9] + lVar24;
                auVar55 = *(undefined1 (*) [16])(lVar23 + 0x60);
                fVar44 = (float)*(undefined8 *)(lVar23 + 0x50);
                fVar26 = (fVar30 - auVar55._0_4_) * fVar44;
                fVar42 = (float)((ulong)*(undefined8 *)(lVar23 + 0x50) >> 0x20);
                fVar41 = (fVar32 - auVar55._4_4_) * fVar42;
                fVar47 = (float)*(undefined8 *)(lVar23 + 0x58);
                fVar43 = (fVar34 - auVar55._8_4_) * fVar47;
                fVar38 = -(fVar26 + fVar41 + fVar43);
                uVar45 = CONCAT44(-(fVar26 + fVar41 + fVar43),fVar38);
                if (0.0 < fVar38) {
                  auVar53._0_4_ = fVar44 * (fVar28 - auVar55._0_4_ * local_a4);
                  auVar53._4_4_ = fVar42 * (fVar29 - auVar55._4_4_ * local_a4);
                  auVar53._8_4_ = fVar47 * (fVar31 - auVar55._8_4_ * local_a4);
                  fVar43 = (float)((ulong)*(undefined8 *)(lVar23 + 0x58) >> 0x20);
                  auVar53._12_4_ = fVar43 * (fVar33 - auVar55._12_4_ * local_a4);
                  auVar55 = NEON_ext(auVar53,auVar53,8,1);
                  fVar43 = auVar55._0_4_ + fVar43;
                  fVar41 = auVar53._0_4_ + auVar53._4_4_ + fVar43;
                  fVar43 = auVar53._0_4_ + auVar53._4_4_ + fVar43;
                  fVar26 = *(float *)(*(long *)(local_98 + 10) + lVar19 + 0x18);
                  iVar54 = -(uint)(fVar41 <= 1.1920929e-07);
                  iVar56 = -(uint)(fVar43 <= 1.1920929e-07);
                  fVar41 = (float)CONCAT13((byte)((uint)fVar41 >> 0x18) &
                                           ~(byte)((uint)iVar54 >> 0x18),
                                           CONCAT12((byte)((uint)fVar41 >> 0x10) &
                                                    ~(byte)((uint)iVar54 >> 0x10),
                                                    CONCAT11((byte)((uint)fVar41 >> 8) &
                                                             ~(byte)((uint)iVar54 >> 8),
                                                             SUB41(fVar41,0) & ~(byte)iVar54)));
                  fVar44 = fVar41 + fVar26;
                  if (fVar44 < auVar51._0_4_ * fVar38) {
                    uVar46 = NEON_frecpe(uVar45,4);
                    uVar50 = NEON_frecps(uVar45,uVar46,4);
                    fVar38 = (float)uVar46 * (float)uVar50;
                    fVar42 = (float)((ulong)uVar46 >> 0x20) * (float)((ulong)uVar50 >> 0x20);
                    uVar45 = NEON_frecps(uVar45,CONCAT44(fVar42,fVar38),4);
                    auVar51._0_4_ = fVar44 * fVar38 * (float)uVar45;
                    auVar51._4_4_ =
                         ((float)(CONCAT17((byte)((uint)fVar43 >> 0x18) &
                                           ~(byte)((uint)iVar56 >> 0x18),
                                           CONCAT16((byte)((uint)fVar43 >> 0x10) &
                                                    ~(byte)((uint)iVar56 >> 0x10),
                                                    CONCAT15((byte)((uint)fVar43 >> 8) &
                                                             ~(byte)((uint)iVar56 >> 8),
                                                             CONCAT14(SUB41(fVar43,0) &
                                                                      ~(byte)iVar56,fVar41)))) >>
                                 0x20) + fVar26) * fVar42 * (float)((ulong)uVar45 >> 0x20);
                    auVar51._8_8_ = 0;
                    iVar49 = (int)uVar25;
                  }
                }
              }
            }
LAB_0335d998:
            uVar22 = auVar51._0_8_;
            uVar25 = uVar25 + 1;
            lVar19 = lVar19 + 0x10;
            lVar24 = lVar24 + 0x50;
          } while ((long)iVar21 != uVar25);
        }
      }
    }
    fVar30 = (float)uVar22;
    if (0.0001 < fVar30) {
      local_a4 = fVar30 + local_a4;
      fVar34 = (float)(uVar22 >> 0x20);
      uVar46 = *(undefined8 *)(param_2 + 2);
      uVar45 = *(undefined8 *)param_2;
      param_2[2] = (float)uVar46 + fVar30 * (float)*(undefined8 *)(param_2 + 6);
      param_2[3] = (float)((ulong)uVar46 >> 0x20) +
                   fVar34 * (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20);
      *param_2 = (float)uVar45 + fVar30 * (float)*(undefined8 *)(param_2 + 4);
      param_2[1] = (float)((ulong)uVar45 >> 0x20) +
                   fVar34 * (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
      fVar32 = local_a4;
      if (0 < local_a8) {
        local_108[2][1] = fVar30 + local_108[2][1];
        *(undefined1 *)local_108[2] = 1;
        if (1 < local_a8) {
          lVar17 = 1;
          ppfVar18 = &local_e0;
          do {
            lVar17 = lVar17 + 1;
            (*ppfVar18)[1] = fVar30 + (*ppfVar18)[1];
            *(undefined1 *)*ppfVar18 = 1;
            ppfVar18 = ppfVar18 + 3;
          } while (lVar17 < local_a8);
        }
        fVar32 = local_a4;
      }
      param_2[8] = fVar32;
      if (*(float *)((long)local_a0 + 0x44) < fVar32) {
        return;
      }
      uVar57 = CONCAT44((float)(uVar57 >> 0x20) - fVar34,fVar27 - fVar30);
    }
    if (iVar49 < 0) {
      param_2[8] = *(float *)(param_1 + 8);
      return;
    }
    lVar17 = (long)local_a8;
    local_a8 = local_a8 + 1;
    local_108[lVar17 * 3 + 1] = (float *)(param_1[9] + (long)iVar49 * 0x50);
    pfVar1 = (float *)(*(long *)(param_2 + 10) + (long)iVar49 * 0x10);
    local_108[lVar17 * 3 + 2] = pfVar1;
    pfVar1[2] = pfVar1[2] + 1.1920929e-07 + pfVar1[2] + 1.1920929e-07;
    *(int *)(local_108 + lVar17 * 3) = iVar49;
    while (local_a8 != 1) {
      if (local_a8 == 2) {
        FUN_0335e110((int)local_a0[2],local_a0,local_e8,&local_90);
        auVar35._0_4_ = ((float)local_90 - local_108[1][4]) * *local_108[1];
        auVar35._4_4_ = ((float)((ulong)local_90 >> 0x20) - local_108[1][5]) * local_108[1][1];
        auVar35._8_4_ = ((float)uStack_88 - local_108[1][6]) * local_108[1][2];
        auVar35._12_4_ = ((float)((ulong)uStack_88 >> 0x20) - local_108[1][7]) * local_108[1][3];
        auVar51 = NEON_ext(auVar35,auVar35,8,1);
        if (auVar35._0_4_ + auVar35._4_4_ + auVar51._0_4_ < -0.001) {
          FUN_0335e350(local_108,local_108[1],local_e8,local_a0 + 2,local_98 + 4);
        }
        else {
          *(undefined8 *)(local_98 + 6) = uStack_88;
          *(undefined8 *)(local_98 + 4) = local_90;
          local_108[1] = local_e8;
          local_108[2] = local_e0;
          local_108[0] = local_f0;
          local_a8 = 1;
        }
        goto LAB_0335d8ec;
      }
      if (local_a8 == 3) {
        FUN_0335e110((int)local_a0[2],local_a0,local_d0,&local_90);
        fVar30 = (float)((ulong)uStack_88 >> 0x20);
        fVar27 = (float)((ulong)local_90 >> 0x20);
        auVar36._0_4_ = ((float)local_90 - local_108[1][4]) * *local_108[1];
        auVar36._4_4_ = (fVar27 - local_108[1][5]) * local_108[1][1];
        auVar36._8_4_ = ((float)uStack_88 - local_108[1][6]) * local_108[1][2];
        auVar36._12_4_ = (fVar30 - local_108[1][7]) * local_108[1][3];
        auVar51 = NEON_ext(auVar36,auVar36,8,1);
        if ((auVar36._0_4_ + auVar36._4_4_ + auVar51._0_4_ < -0.001) ||
           (auVar37._0_4_ = ((float)local_90 - local_e8[4]) * *local_e8,
           auVar37._4_4_ = (fVar27 - local_e8[5]) * local_e8[1],
           auVar37._8_4_ = ((float)uStack_88 - local_e8[6]) * local_e8[2],
           auVar37._12_4_ = (fVar30 - local_e8[7]) * local_e8[3],
           auVar51 = NEON_ext(auVar37,auVar37,8,1),
           auVar37._0_4_ + auVar37._4_4_ + auVar51._0_4_ < -0.001)) {
          FUN_0335e350(local_108,local_108[1],local_d0,local_a0 + 2,&local_90);
          fVar27 = ((float)local_90 - local_e8[4]) * *local_e8;
          fVar30 = ((float)((ulong)local_90 >> 0x20) - local_e8[5]) * local_e8[1];
          fVar32 = ((float)uStack_88 - local_e8[6]) * local_e8[2];
          fVar34 = ((float)((ulong)uStack_88 >> 0x20) - local_e8[7]) * local_e8[3];
          auVar3._4_4_ = fVar30;
          auVar3._0_4_ = fVar27;
          auVar3._8_4_ = fVar32;
          auVar3._12_4_ = fVar34;
          auVar4._4_4_ = fVar30;
          auVar4._0_4_ = fVar27;
          auVar4._8_4_ = fVar32;
          auVar4._12_4_ = fVar34;
          auVar51 = NEON_ext(auVar3,auVar4,8,1);
          if (fVar27 + fVar30 + auVar51._0_4_ < -0.001) {
            FUN_0335e350(local_108,local_e8,local_d0,local_a0 + 2,&local_90);
            fVar27 = ((float)local_90 - local_108[1][4]) * *local_108[1];
            fVar30 = ((float)((ulong)local_90 >> 0x20) - local_108[1][5]) * local_108[1][1];
            fVar32 = ((float)uStack_88 - local_108[1][6]) * local_108[1][2];
            fVar34 = ((float)((ulong)uStack_88 >> 0x20) - local_108[1][7]) * local_108[1][3];
            auVar5._4_4_ = fVar30;
            auVar5._0_4_ = fVar27;
            auVar5._8_4_ = fVar32;
            auVar5._12_4_ = fVar34;
            auVar6._4_4_ = fVar30;
            auVar6._0_4_ = fVar27;
            auVar6._8_4_ = fVar32;
            auVar6._12_4_ = fVar34;
            auVar51 = NEON_ext(auVar5,auVar6,8,1);
            if (fVar27 + fVar30 + auVar51._0_4_ < -0.001) {
              FUN_0335e6a0(local_108,local_108[1],local_e8,local_d0,1,local_a0 + 2,local_98 + 4);
              goto LAB_0335d8ec;
            }
            lVar17 = 1;
          }
          else {
            lVar17 = 0;
          }
          local_108[1] = local_108[lVar17 * 3 + 1];
          local_108[2] = local_108[lVar17 * 3 + 2];
          local_108[0] = local_108[lVar17 * 3];
          local_e8 = local_d0;
          local_e0 = local_c8;
          local_f0 = local_d8;
          local_a8 = local_a8 + -1;
        }
        else {
          *(undefined8 *)(local_98 + 6) = uStack_88;
          *(undefined8 *)(local_98 + 4) = local_90;
          local_108[1] = local_d0;
          local_108[2] = local_c8;
          local_108[0] = local_d8;
          local_a8 = 1;
        }
      }
      else {
        if (local_a8 != 4) goto LAB_0335d8ec;
        FUN_0335e900(local_108);
        FUN_0335e6a0(local_108,local_e8,local_d0,local_b8,0,local_a0 + 2,&local_90);
        fVar27 = ((float)local_90 - local_108[1][4]) * *local_108[1];
        fVar30 = ((float)((ulong)local_90 >> 0x20) - local_108[1][5]) * local_108[1][1];
        fVar32 = ((float)uStack_88 - local_108[1][6]) * local_108[1][2];
        fVar34 = ((float)((ulong)uStack_88 >> 0x20) - local_108[1][7]) * local_108[1][3];
        auVar7._4_4_ = fVar30;
        auVar7._0_4_ = fVar27;
        auVar7._8_4_ = fVar32;
        auVar7._12_4_ = fVar34;
        auVar8._4_4_ = fVar30;
        auVar8._0_4_ = fVar27;
        auVar8._8_4_ = fVar32;
        auVar8._12_4_ = fVar34;
        auVar51 = NEON_ext(auVar7,auVar8,8,1);
        if (fVar27 + fVar30 + auVar51._0_4_ < -0.001) {
          FUN_0335e6a0(local_108,local_d0,local_108[1],local_b8,0,local_a0 + 2,&local_90);
          fVar27 = ((float)local_90 - local_e8[4]) * *local_e8;
          fVar30 = ((float)((ulong)local_90 >> 0x20) - local_e8[5]) * local_e8[1];
          fVar32 = ((float)uStack_88 - local_e8[6]) * local_e8[2];
          fVar34 = ((float)((ulong)uStack_88 >> 0x20) - local_e8[7]) * local_e8[3];
          auVar9._4_4_ = fVar30;
          auVar9._0_4_ = fVar27;
          auVar9._8_4_ = fVar32;
          auVar9._12_4_ = fVar34;
          auVar10._4_4_ = fVar30;
          auVar10._0_4_ = fVar27;
          auVar10._8_4_ = fVar32;
          auVar10._12_4_ = fVar34;
          auVar51 = NEON_ext(auVar9,auVar10,8,1);
          if (-0.001 <= fVar27 + fVar30 + auVar51._0_4_) {
            lVar17 = 1;
            goto LAB_0335de44;
          }
          FUN_0335e6a0(local_108,local_108[1],local_e8,local_b8,0,local_a0 + 2,&local_90);
          iVar49 = local_a8;
          pfVar15 = local_b8;
          pfVar14 = local_d0;
          pfVar13 = local_e8;
          pfVar1 = local_108[1];
          fVar27 = ((float)local_90 - local_d0[4]) * *local_d0;
          fVar30 = ((float)((ulong)local_90 >> 0x20) - local_d0[5]) * local_d0[1];
          fVar32 = ((float)uStack_88 - local_d0[6]) * local_d0[2];
          fVar34 = ((float)((ulong)uStack_88 >> 0x20) - local_d0[7]) * local_d0[3];
          auVar11._4_4_ = fVar30;
          auVar11._0_4_ = fVar27;
          auVar11._8_4_ = fVar32;
          auVar11._12_4_ = fVar34;
          auVar12._4_4_ = fVar30;
          auVar12._0_4_ = fVar27;
          auVar12._8_4_ = fVar32;
          auVar12._12_4_ = fVar34;
          auVar51 = NEON_ext(auVar11,auVar12,8,1);
          if (-0.001 <= fVar27 + fVar30 + auVar51._0_4_) {
            lVar17 = 2;
            goto LAB_0335de44;
          }
          local_90 = local_a0[2];
          uStack_88 = local_a0[3];
          FUN_0335e6a0(local_108,local_108[1],local_e8,local_d0,0,&local_90,&local_90);
          if (iVar49 == local_a8) {
            FUN_0335e6a0(local_108,pfVar1,pfVar13,pfVar15,0,&local_90,&local_90);
          }
          if (iVar49 == local_a8) {
            FUN_0335e6a0(local_108,pfVar1,pfVar14,pfVar15,0,&local_90,&local_90);
          }
          if (iVar49 == local_a8) {
            FUN_0335e6a0(local_108,pfVar13,pfVar14,pfVar15,0,&local_90,&local_90);
          }
          pfVar1 = local_c0;
          *(undefined8 *)(local_98 + 6) = uStack_88;
          *(undefined8 *)(local_98 + 4) = local_90;
          fVar30 = local_108[2][3];
          fVar32 = local_e0[3];
          fVar34 = local_c8[3];
          fVar28 = local_b0[3];
          fVar27 = (float)((uint)fVar30 & ((int)fVar30 >> 0x1f ^ 0xffffffffU));
          if ((int)fVar27 <= (int)fVar32) {
            fVar27 = fVar32;
          }
          if ((int)fVar27 <= (int)fVar34) {
            fVar27 = fVar34;
          }
          fVar29 = fVar27;
          if ((int)fVar27 <= (int)fVar28) {
            fVar29 = fVar28;
          }
          if (fVar29 == fVar30) {
            lVar17 = 0;
LAB_0335e01c:
            local_108[lVar17 * 3 + 1] = local_b8;
            local_108[lVar17 * 3 + 2] = local_b0;
            local_108[lVar17 * 3] = pfVar1;
          }
          else {
            if (fVar29 == fVar32) {
              lVar17 = 1;
              goto LAB_0335e01c;
            }
            lVar17 = 2;
            if ((fVar29 == fVar34) || (lVar17 = 3, (int)fVar27 <= (int)fVar28)) goto LAB_0335e01c;
          }
          local_a8 = local_a8 + -1;
          local_108[2][3] = 0.0;
          local_e0[3] = 0.0;
          local_c8[3] = 0.0;
        }
        else {
          lVar17 = 0;
LAB_0335de44:
          local_108[lVar17 * 3 + 1] = local_d0;
          local_108[lVar17 * 3 + 2] = local_c8;
          local_108[lVar17 * 3] = local_d8;
          local_c8 = local_b0;
          local_d8 = local_c0;
          local_d0 = local_b8;
          local_a8 = 3;
        }
      }
    }
    FUN_0335e110((int)local_a0[2],local_a0,local_108[1],local_98 + 4);
LAB_0335d8ec:
    if ((float)uVar57 < 0.0) {
      return;
    }
    uVar22 = (ulong)*(uint *)(param_1 + 10);
  } while( true );
}


