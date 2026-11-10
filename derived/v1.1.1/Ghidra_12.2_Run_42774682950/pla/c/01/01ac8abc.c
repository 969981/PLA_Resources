/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ac8abc; name: FUN_01ac8abc
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01ac8abc(long param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined *puVar19;
  undefined8 *puVar20;
  int iVar21;
  long lVar22;
  byte *pbVar23;
  ulong uVar24;
  undefined *puVar25;
  ulong uVar26;
  ulong uVar27;
  long *plVar28;
  long *plVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 uVar34;
  undefined1 extraout_b0_01;
  byte bVar35;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 uVar36;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 uVar37;
  undefined1 extraout_var_16;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  undefined1 uVar38;
  undefined1 extraout_var_20;
  undefined1 extraout_var_21;
  undefined1 uVar39;
  undefined1 extraout_var_22;
  undefined1 extraout_var_23;
  undefined1 uVar40;
  undefined1 extraout_var_24;
  undefined1 extraout_var_25;
  undefined1 extraout_var_26;
  undefined1 extraout_var_27;
  undefined1 uVar41;
  undefined1 extraout_var_28;
  undefined1 extraout_var_29;
  undefined1 uVar42;
  undefined1 extraout_var_30;
  undefined1 extraout_var_31;
  undefined1 uVar43;
  float fVar44;
  int iVar45;
  int iVar49;
  undefined8 uVar46;
  float fVar48;
  int iVar50;
  undefined1 auVar47 [16];
  int iVar51;
  undefined8 uVar52;
  undefined1 auVar53 [12];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  undefined8 uVar60;
  undefined1 in_q3 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar65;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar66;
  undefined8 uVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar73;
  float fVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  undefined8 uVar81;
  undefined1 auVar82 [16];
  undefined8 uVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  undefined4 uVar86;
  undefined4 uStack_c4;
  float local_b0;
  float fStack_ac;
  float fStack_9c;
  float fStack_94;
  undefined8 *local_80;
  undefined8 uStack_78;
  long *local_70;
  long *local_68;
  undefined8 local_48;
  
  iVar3 = *param_2;
  iVar21 = param_2[1];
  FUN_018d6bd0(&local_68,param_1 + 0x5e0);
  if (local_68 != (long *)0x0) {
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    FUN_00ac3fa4(&local_80,local_68 + 0x49);
    FUN_0099c748(&local_70,&local_80);
    puVar20 = local_80;
    if (local_80 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_80 + 1);
      do {
        iVar45 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar45 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar45 + -1 == 0) {
        local_80[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar45 = __cxa_guard_acquire(PTR_DAT_04379498), iVar45 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar22 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar22;
        local_48 = *puVar20;
        FUN_02a44274(lVar22 + 0xd8,&local_48);
      }
    }
    if (local_70 != (long *)0x0) {
      FUN_01a831dc();
      puVar19 = PTR_DAT_043794c8;
      fVar33 = (float)CONCAT13(extraout_var_22,
                               CONCAT12(extraout_var_20,CONCAT11(extraout_var_18,extraout_var_16)));
      uVar46 = CONCAT17(extraout_var_30,
                        CONCAT16(extraout_var_28,
                                 CONCAT15(extraout_var_26,CONCAT14(extraout_var_24,fVar33))));
      fVar32 = (float)CONCAT13(extraout_var_05,
                               CONCAT12(extraout_var_02,CONCAT11(extraout_var,extraout_b0)));
      uVar67 = CONCAT17(extraout_var_14,
                        CONCAT16(extraout_var_12,
                                 CONCAT15(extraout_var_10,CONCAT14(extraout_var_08,fVar32))));
      lVar22 = local_70[0x35];
      piVar1 = (int *)(lVar22 + 0xc);
      pbVar23 = PTR_DAT_043794b0;
      puVar25 = PTR_DAT_043794b8;
      iVar45 = *(int *)(lVar22 + 0xc);
      do {
        while( true ) {
          plVar29 = *(long **)(lVar22 + 0x10);
          if ((*pbVar23 & 1) == 0) {
            iVar49 = __cxa_guard_acquire(PTR_DAT_043794b0);
            pbVar23 = PTR_DAT_043794b0;
            puVar25 = PTR_DAT_043794b8;
            if (iVar49 != 0) {
              if (((*PTR_DAT_043794c0 & 1) == 0) &&
                 (iVar49 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar49 != 0)) {
                if (((*PTR_DAT_043794d0 & 1) == 0) &&
                   (iVar49 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar49 != 0)) {
                  uVar52 = FUN_0087f8f0();
                  *(undefined8 *)PTR_DAT_043794d8 = uVar52;
                  __cxa_guard_release(PTR_DAT_043794d0);
                }
                *(undefined **)puVar19 = PTR_DAT_043794d8;
                __cxa_guard_release(PTR_DAT_043794c0);
              }
              puVar25 = PTR_DAT_043794b8;
              *(undefined **)PTR_DAT_043794b8 = puVar19;
              pbVar23 = PTR_DAT_043794b0;
              __cxa_guard_release(PTR_DAT_043794b0);
            }
          }
          for (; plVar29 != (long *)puVar25; plVar29 = (long *)*plVar29) {
          }
          iVar49 = *piVar1;
          if (iVar49 == iVar45) break;
          ClearExclusiveLocal();
          iVar45 = iVar49;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar45 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        iVar45 = iVar49;
      } while (cVar4 != '\0');
      lVar22 = *(long *)(lVar22 + 0x18);
      plVar29 = (long *)0x0;
      if (lVar22 != 0) {
        plVar29 = (long *)(lVar22 + -0x50);
      }
      (**(code **)(*plVar29 + 0x40))(plVar29);
      local_b0 = in_q3._0_4_;
      fStack_ac = in_q3._4_4_;
      if (lVar22 != 0) {
        lVar22 = plVar29[0xb];
        piVar1 = (int *)(lVar22 + 0xc);
        do {
          iVar45 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar45 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar45 + -1 == 0) {
          *(undefined8 *)(lVar22 + 0x18) = 0;
          (**(code **)(*plVar29 + 0x20))(plVar29);
        }
      }
      fVar80 = (float)*param_3 - local_b0;
      fVar59 = (float)((ulong)*param_3 >> 0x20) - fStack_ac;
      fVar65 = (float)param_3[1] - in_q3._8_4_;
      fVar73 = (float)((ulong)param_3[1] >> 0x20) - in_q3._12_4_;
      auVar55._0_4_ = fVar80 * fVar80;
      auVar55._4_4_ = 0;
      auVar55._8_4_ = fVar65 * fVar65;
      auVar55._12_4_ = fVar73 * fVar73;
      auVar54 = NEON_ext(auVar55,auVar55,8,1);
      fVar44 = auVar54._0_4_ + auVar55._0_4_;
      fVar48 = auVar54._4_4_ + 0.0;
      fVar31 = fVar44 + fVar48;
      fVar44 = fVar44 + fVar48;
      if (fVar31 != 0.0) {
        auVar47._8_8_ = CONCAT44(fVar44,fVar31);
        auVar47._0_8_ = CONCAT44(fVar44,fVar31);
        auVar55 = NEON_frsqrte(auVar47,4);
        auVar61._0_4_ = auVar55._0_4_ * fVar31;
        auVar61._4_4_ = auVar55._4_4_ * fVar44;
        auVar61._8_4_ = auVar55._8_4_ * fVar31;
        auVar61._12_4_ = auVar55._12_4_ * fVar44;
        auVar54 = NEON_frsqrts(auVar55,auVar61,4);
        auVar56._0_4_ = auVar55._0_4_ * auVar54._0_4_;
        auVar56._4_4_ = auVar55._4_4_ * auVar54._4_4_;
        auVar56._8_4_ = auVar55._8_4_ * auVar54._8_4_;
        auVar56._12_4_ = auVar55._12_4_ * auVar54._12_4_;
        auVar62._0_4_ = fVar31 * auVar56._0_4_;
        auVar62._4_4_ = fVar44 * auVar56._4_4_;
        auVar62._8_4_ = fVar31 * auVar56._8_4_;
        auVar62._12_4_ = fVar44 * auVar56._12_4_;
        iVar45 = -(uint)(fVar31 == 0.0);
        iVar49 = -(uint)(fVar44 == 0.0);
        iVar50 = -(uint)(fVar31 == 0.0);
        iVar51 = -(uint)(fVar44 == 0.0);
        auVar55 = NEON_frsqrts(auVar56,auVar62,4);
        fVar31 = fVar80 * auVar56._0_4_ * auVar55._0_4_;
        fVar48 = auVar56._4_4_ * auVar55._4_4_ * 0.0;
        fVar44 = fVar65 * auVar56._8_4_ * auVar55._8_4_;
        fVar78 = fVar73 * auVar56._12_4_ * auVar55._12_4_;
        fVar44 = (float)CONCAT13((byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18),
                                 CONCAT12((byte)((uint)fVar44 >> 0x10) &
                                          ~(byte)((uint)iVar50 >> 0x10),
                                          CONCAT11((byte)((uint)fVar44 >> 8) &
                                                   ~(byte)((uint)iVar50 >> 8),
                                                   SUB41(fVar44,0) & ~(byte)iVar50)));
        fVar31 = (float)CONCAT13((byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18),
                                 CONCAT12((byte)((uint)fVar31 >> 0x10) &
                                          ~(byte)((uint)iVar45 >> 0x10),
                                          CONCAT11((byte)((uint)fVar31 >> 8) &
                                                   ~(byte)((uint)iVar45 >> 8),
                                                   SUB41(fVar31,0) & ~(byte)iVar45)));
        FUN_01a833d4(local_70);
        fStack_9c = (float)(CONCAT17((byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                                     CONCAT16((byte)((uint)fVar48 >> 0x10) &
                                              ~(byte)((uint)iVar49 >> 0x10),
                                              CONCAT15((byte)((uint)fVar48 >> 8) &
                                                       ~(byte)((uint)iVar49 >> 8),
                                                       CONCAT14(SUB41(fVar48,0) & ~(byte)iVar49,
                                                                fVar31)))) >> 0x20);
        fStack_94 = (float)(CONCAT17((byte)((uint)fVar78 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18),
                                     CONCAT16((byte)((uint)fVar78 >> 0x10) &
                                              ~(byte)((uint)iVar51 >> 0x10),
                                              CONCAT15((byte)((uint)fVar78 >> 8) &
                                                       ~(byte)((uint)iVar51 >> 8),
                                                       CONCAT14(SUB41(fVar78,0) & ~(byte)iVar51,
                                                                fVar44)))) >> 0x20);
        uVar86 = CONCAT13(extraout_var_23,
                          CONCAT12(extraout_var_21,CONCAT11(extraout_var_19,extraout_var_17)));
        uStack_c4 = (undefined4)
                    (CONCAT17(extraout_var_31,
                              CONCAT16(extraout_var_29,
                                       CONCAT15(extraout_var_27,CONCAT14(extraout_var_25,uVar86))))
                    >> 0x20);
        uVar52 = CONCAT17(extraout_var_15,
                          CONCAT16(extraout_var_13,
                                   CONCAT15(extraout_var_11,
                                            CONCAT14(extraout_var_09,
                                                     CONCAT13(extraout_var_06,
                                                              CONCAT12(extraout_var_03,
                                                                       CONCAT11(extraout_var_00,
                                                                                extraout_b0_00))))))
                         );
        fVar48 = fVar31 * (float)CONCAT13(extraout_var_06,
                                          CONCAT12(extraout_var_03,
                                                   CONCAT11(extraout_var_00,extraout_b0_00)));
        fVar78 = fStack_9c *
                 (float)CONCAT13(extraout_var_15,
                                 CONCAT12(extraout_var_13,CONCAT11(extraout_var_11,extraout_var_09))
                                );
        uVar34 = (undefined1)((uint)fVar78 >> 8);
        uVar36 = (undefined1)((uint)fVar78 >> 0x10);
        uVar37 = (undefined1)((uint)fVar78 >> 0x18);
        fVar66 = fVar44 * (float)CONCAT13(extraout_var_23,
                                          CONCAT12(extraout_var_21,
                                                   CONCAT11(extraout_var_19,extraout_var_17)));
        uVar38 = (undefined1)((uint)fVar66 >> 8);
        uVar39 = (undefined1)((uint)fVar66 >> 0x10);
        uVar40 = (undefined1)((uint)fVar66 >> 0x18);
        fVar79 = fStack_94 *
                 (float)CONCAT13(extraout_var_31,
                                 CONCAT12(extraout_var_29,CONCAT11(extraout_var_27,extraout_var_25))
                                );
        uVar41 = (undefined1)((uint)fVar79 >> 8);
        uVar42 = (undefined1)((uint)fVar79 >> 0x10);
        uVar43 = (undefined1)((uint)fVar79 >> 0x18);
        auVar54[4] = SUB41(fVar78,0);
        auVar54._0_4_ = fVar48;
        auVar54[5] = uVar34;
        auVar54[6] = uVar36;
        auVar54[7] = uVar37;
        auVar54[8] = SUB41(fVar66,0);
        auVar54[9] = uVar38;
        auVar54[10] = uVar39;
        auVar54[0xb] = uVar40;
        auVar54[0xc] = SUB41(fVar79,0);
        auVar54[0xd] = uVar41;
        auVar54[0xe] = uVar42;
        auVar54[0xf] = uVar43;
        auVar8[4] = SUB41(fVar78,0);
        auVar8._0_4_ = fVar48;
        auVar8[5] = uVar34;
        auVar8[6] = uVar36;
        auVar8[7] = uVar37;
        auVar8[8] = SUB41(fVar66,0);
        auVar8[9] = uVar38;
        auVar8[10] = uVar39;
        auVar8[0xb] = uVar40;
        auVar8[0xc] = SUB41(fVar79,0);
        auVar8[0xd] = uVar41;
        auVar8[0xe] = uVar42;
        auVar8[0xf] = uVar43;
        auVar55 = NEON_ext(auVar54,auVar8,8,1);
        fVar32 = fVar32 * fVar31;
        fStack_9c = (float)((ulong)uVar67 >> 0x20) * fStack_9c;
        uVar34 = (undefined1)((uint)fStack_9c >> 8);
        uVar36 = (undefined1)((uint)fStack_9c >> 0x10);
        uVar37 = (undefined1)((uint)fStack_9c >> 0x18);
        fVar33 = fVar33 * fVar44;
        uVar38 = (undefined1)((uint)fVar33 >> 8);
        uVar39 = (undefined1)((uint)fVar33 >> 0x10);
        uVar40 = (undefined1)((uint)fVar33 >> 0x18);
        fStack_94 = (float)((ulong)uVar46 >> 0x20) * fStack_94;
        uVar41 = (undefined1)((uint)fStack_94 >> 8);
        uVar42 = (undefined1)((uint)fStack_94 >> 0x10);
        uVar43 = (undefined1)((uint)fStack_94 >> 0x18);
        auVar9[4] = SUB41(fStack_9c,0);
        auVar9._0_4_ = fVar32;
        auVar9[5] = uVar34;
        auVar9[6] = uVar36;
        auVar9[7] = uVar37;
        auVar9[8] = SUB41(fVar33,0);
        auVar9[9] = uVar38;
        auVar9[10] = uVar39;
        auVar9[0xb] = uVar40;
        auVar9[0xc] = SUB41(fStack_94,0);
        auVar9[0xd] = uVar41;
        auVar9[0xe] = uVar42;
        auVar9[0xf] = uVar43;
        auVar10[4] = SUB41(fStack_9c,0);
        auVar10._0_4_ = fVar32;
        auVar10[5] = uVar34;
        auVar10[6] = uVar36;
        auVar10[7] = uVar37;
        auVar10[8] = SUB41(fVar33,0);
        auVar10[9] = uVar38;
        auVar10[10] = uVar39;
        auVar10[0xb] = uVar40;
        auVar10[0xc] = SUB41(fStack_94,0);
        auVar10[0xd] = uVar41;
        auVar10[0xe] = uVar42;
        auVar10[0xf] = uVar43;
        auVar54 = NEON_ext(auVar9,auVar10,8,1);
        fVar32 = auVar54._0_4_ + fVar32 + auVar54._4_4_ + fStack_9c;
        uVar34 = 0;
        if ((-1.0 <= fVar32) && (uVar34 = SUB41(fVar32,0), 1.0 < fVar32)) {
          uVar34 = 0;
        }
        fVar33 = auVar55._0_4_ + fVar48 + auVar55._4_4_ + fVar78;
        FUN_0095d8f0(uVar34);
        fVar32 = (float)CONCAT13(extraout_var_07,
                                 CONCAT12(extraout_var_04,CONCAT11(extraout_var_01,extraout_b0_01)))
        ;
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar45 = __cxa_guard_acquire(PTR_DAT_04379660), iVar45 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        fVar31 = 0.0;
        lVar22 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar22;
        uVar24 = *(ulong *)(lVar22 + 0x60);
        if (uVar24 != 0) {
          uVar26 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
          uVar26 = (uVar26 & 0x3333333333333333) + (uVar26 >> 2 & 0x3333333333333333);
          uVar26 = (uVar26 + (uVar26 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar26 < 2) {
            uVar27 = uVar24 - 1 & 0x6277176c3d00fa5e;
          }
          else if (uVar24 < 0x6277176c3d00fa5f) {
            uVar27 = 0;
            if (uVar24 != 0) {
              uVar27 = 0x6277176c3d00fa5e / uVar24;
            }
            uVar27 = 0x6277176c3d00fa5e - uVar27 * uVar24;
          }
          else {
            uVar27 = 0x6277176c3d00fa5e;
          }
          plVar29 = *(long **)(*(long *)(lVar22 + 0x58) + uVar27 * 8);
          if ((plVar29 != (long *)0x0) && (plVar29 = (long *)*plVar29, plVar29 != (long *)0x0)) {
            if (uVar26 < 2) {
              while (plVar29[1] != 0x6277176c3d00fa5e) {
                if ((plVar29[1] & uVar24 - 1) != uVar27) goto LAB_01ac9508;
LAB_01ac9500:
                plVar29 = (long *)*plVar29;
                if (plVar29 == (long *)0x0) goto LAB_01ac9508;
              }
              if (plVar29[2] != 0x6277176c3d00fa5e) goto LAB_01ac9500;
              plVar29 = (long *)plVar29[3];
joined_r0x01ac94ec:
              fVar31 = 0.0;
              if (plVar29 == (long *)0x0) goto joined_r0x01ac9024;
              plVar2 = plVar29 + 10;
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *(int *)plVar2 = (int)*plVar2 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              uVar24 = plVar29[0x21];
              fVar31 = 0.0;
              if (uVar24 != 0) {
                uVar26 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
                uVar26 = (uVar26 & 0x3333333333333333) + (uVar26 >> 2 & 0x3333333333333333);
                uVar26 = (uVar26 + (uVar26 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
                if (uVar26 < 2) {
                  uVar27 = uVar24 - 1 & 0xbc4058e559cacb80;
                }
                else if (uVar24 < 0xbc4058e559cacb81) {
                  uVar27 = 0;
                  if (uVar24 != 0) {
                    uVar27 = 0xbc4058e559cacb80 / uVar24;
                  }
                  uVar27 = 0xbc4058e559cacb80 - uVar27 * uVar24;
                }
                else {
                  uVar27 = 0xbc4058e559cacb80;
                }
                plVar28 = *(long **)(plVar29[0x20] + uVar27 * 8);
                if ((plVar28 != (long *)0x0) && (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)
                   ) {
                  if (uVar26 < 2) {
                    do {
                      if (plVar28[1] == 0xbc4058e559cacb80) {
                        if (plVar28[2] == -0x43bfa71aa6353480) goto LAB_01ac8f34;
                      }
                      else if ((plVar28[1] & uVar24 - 1) != uVar27) break;
                      plVar28 = (long *)*plVar28;
                    } while (plVar28 != (long *)0x0);
                  }
                  else {
                    do {
                      uVar26 = plVar28[1];
                      if (uVar26 != 0xbc4058e559cacb80) {
                        if (uVar24 <= uVar26) {
                          uVar7 = 0;
                          if (uVar24 != 0) {
                            uVar7 = uVar26 / uVar24;
                          }
                          uVar26 = uVar26 - uVar7 * uVar24;
                        }
                        if (uVar26 == uVar27) goto LAB_01ac8ec0;
                        break;
                      }
                      if (plVar28[2] == -0x43bfa71aa6353480) goto LAB_01ac8f34;
LAB_01ac8ec0:
                      plVar28 = (long *)*plVar28;
                    } while (plVar28 != (long *)0x0);
                  }
                }
              }
              goto LAB_01ac8f38;
            }
            do {
              uVar26 = plVar29[1];
              if (uVar26 == 0x6277176c3d00fa5e) {
                if (plVar29[2] == 0x6277176c3d00fa5e) {
                  plVar29 = (long *)plVar29[3];
                  goto joined_r0x01ac94ec;
                }
              }
              else {
                if (uVar24 <= uVar26) {
                  uVar7 = 0;
                  if (uVar24 != 0) {
                    uVar7 = uVar26 / uVar24;
                  }
                  uVar26 = uVar26 - uVar7 * uVar24;
                }
                if (uVar26 != uVar27) break;
              }
              plVar29 = (long *)*plVar29;
            } while (plVar29 != (long *)0x0);
          }
        }
        goto joined_r0x01ac9024;
      }
      param_3 = (undefined8 *)0x0;
      param_4[0] = 0;
      param_4[1] = 0;
      goto joined_r0x01ac8f90;
    }
    bVar5 = false;
    goto joined_r0x01ac8fbc;
  }
  goto LAB_01ac8fe0;
LAB_01ac8f34:
  fVar31 = *(float *)(plVar28 + 6);
LAB_01ac8f38:
  do {
    iVar45 = (int)*plVar2 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = iVar45;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar45 == 0) {
    (**(code **)(*plVar29 + 0x10))();
  }
joined_r0x01ac9024:
  if (fVar31 <= fVar32) goto LAB_01ac9028;
LAB_01ac8f54:
  iVar21 = 2;
  if (0.0 <= fVar33) {
    iVar21 = 1;
  }
  *param_4 = 0;
  param_4[1] = iVar21;
  if ((iVar3 != 1) || (0.0 <= fVar33)) {
    param_3 = (undefined8 *)(ulong)(iVar3 == 2 && 0.0 <= fVar33);
  }
  else {
    param_3 = (undefined8 *)0x1;
  }
  goto joined_r0x01ac8f90;
LAB_01ac9508:
  fVar31 = 0.0;
  if (fVar32 < 0.0) goto LAB_01ac8f54;
LAB_01ac9028:
  auVar18._8_8_ = uVar46;
  auVar18._0_8_ = uVar67;
  iVar45 = 1;
  if (iVar21 != 1) {
    iVar45 = 2;
  }
  uVar67 = a64_TBL(ZEXT816(0),auVar18,DAT_0388a880);
  auVar14._8_4_ = uVar86;
  auVar14._0_8_ = uVar52;
  auVar13._8_4_ = uVar86;
  auVar13._0_8_ = uVar52;
  auVar12._8_4_ = uVar86;
  auVar12._0_8_ = uVar52;
  auVar11._8_4_ = uVar86;
  auVar11._0_8_ = uVar52;
  iVar49 = 2;
  if (0.0 <= fVar33) {
    iVar49 = 1;
  }
  if (iVar21 == 0) {
    iVar45 = iVar49;
  }
  iVar49 = iVar3;
  if (iVar3 == 0) {
    iVar49 = iVar45;
  }
  uVar75 = a64_TBL(ZEXT816(0),auVar18,DAT_0388a6f0);
  auVar11._12_4_ = uStack_c4;
  uVar76 = a64_TBL(ZEXT816(0),auVar11,DAT_0388a6d8);
  uVar52 = a64_TBL(ZEXT816(0),auVar18,DAT_0388a6d8);
  uVar81 = a64_TBL(ZEXT816(0),auVar18,DAT_0388a680);
  auVar12._12_4_ = uStack_c4;
  uVar77 = a64_TBL(ZEXT816(0),auVar12,DAT_0388a680);
  auVar13._12_4_ = uStack_c4;
  uVar60 = a64_TBL(ZEXT816(0),auVar13,DAT_0388a6f0);
  auVar14._12_4_ = uStack_c4;
  uVar46 = a64_TBL(ZEXT816(0),auVar14,DAT_0388a880);
  fVar44 = (float)uVar67 * (float)uVar77 - (float)uVar81 * (float)uVar46;
  fVar48 = (float)((ulong)uVar67 >> 0x20) * (float)((ulong)uVar77 >> 0x20) -
           (float)((ulong)uVar81 >> 0x20) * (float)((ulong)uVar46 >> 0x20);
  fVar78 = (float)uVar75 * (float)uVar76 - (float)uVar52 * (float)uVar60;
  fVar79 = (float)((ulong)uVar75 >> 0x20) * (float)((ulong)uVar76 >> 0x20) -
           (float)((ulong)uVar52 >> 0x20) * (float)((ulong)uVar60 >> 0x20);
  fVar66 = *(float *)PTR_FloatPi_04372cf0;
  if (fVar33 < 0.0) {
    fVar32 = -fVar32;
  }
  auVar68._0_4_ = fVar44 * fVar44;
  auVar68._4_4_ = fVar48 * fVar48;
  auVar68._8_4_ = fVar78 * fVar78;
  auVar68._12_4_ = fVar79 * fVar79;
  auVar55 = NEON_ext(auVar68,auVar68,8,1);
  fVar33 = auVar55._0_4_ + auVar68._0_4_;
  fVar79 = auVar55._4_4_ + auVar68._4_4_;
  if (iVar49 != 1) {
    fVar31 = -fVar31;
  }
  fVar74 = (fVar31 - fVar32) * (fVar66 / *(float *)PTR_FloatDegree180_04372ce0) * 0.5;
  fVar32 = fVar33 + fVar79;
  fVar33 = fVar33 + fVar79;
  auVar69._8_8_ = CONCAT44(fVar33,fVar32);
  auVar69._0_8_ = CONCAT44(fVar33,fVar32);
  auVar55 = NEON_frsqrte(auVar69,4);
  auVar82._0_4_ = auVar55._0_4_ * fVar32;
  auVar82._4_4_ = auVar55._4_4_ * fVar33;
  auVar82._8_4_ = auVar55._8_4_ * fVar32;
  auVar82._12_4_ = auVar55._12_4_ * fVar33;
  fVar31 = 0.5;
  if (fVar74 < 0.0) {
    fVar31 = -0.5;
  }
  auVar54 = NEON_frsqrts(auVar55,auVar82,4);
  iVar45 = -(uint)(fVar32 == 0.0);
  iVar50 = -(uint)(fVar33 == 0.0);
  iVar51 = -(uint)(fVar32 == 0.0);
  auVar57._0_4_ = auVar55._0_4_ * auVar54._0_4_;
  auVar57._4_4_ = auVar55._4_4_ * auVar54._4_4_;
  auVar57._8_4_ = auVar55._8_4_ * auVar54._8_4_;
  auVar57._12_4_ = auVar55._12_4_ * auVar54._12_4_;
  auVar70._0_4_ = fVar32 * auVar57._0_4_;
  auVar70._4_4_ = fVar33 * auVar57._4_4_;
  auVar70._8_4_ = fVar32 * auVar57._8_4_;
  auVar70._12_4_ = fVar33 * auVar57._12_4_;
  auVar55 = NEON_frsqrts(auVar57,auVar70,4);
  fVar44 = fVar44 * auVar57._0_4_ * auVar55._0_4_;
  fVar48 = fVar48 * auVar57._4_4_ * auVar55._4_4_;
  fVar78 = fVar78 * auVar57._8_4_ * auVar55._8_4_;
  fVar32 = (float)CONCAT13((byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18),
                           CONCAT12((byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar45 >> 0x10),
                                    CONCAT11((byte)((uint)fVar44 >> 8) & ~(byte)((uint)iVar45 >> 8),
                                             SUB41(fVar44,0) & ~(byte)iVar45)));
  auVar53._0_8_ =
       CONCAT17((byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18),
                CONCAT16((byte)((uint)fVar48 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10),
                         CONCAT15((byte)((uint)fVar48 >> 8) & ~(byte)((uint)iVar50 >> 8),
                                  CONCAT14(SUB41(fVar48,0) & ~(byte)iVar50,fVar32))));
  auVar53[8] = SUB41(fVar78,0) & ~(byte)iVar51;
  auVar53[9] = (byte)((uint)fVar78 >> 8) & ~(byte)((uint)iVar51 >> 8);
  auVar53[10] = (byte)((uint)fVar78 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10);
  auVar53[0xb] = (byte)((uint)fVar78 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18);
  fVar74 = fVar74 - *(float *)PTR_Float2Pi_04372d30 *
                    (float)(int)(fVar31 + fVar74 * *(float *)PTR_Float1Divided2Pi_04372d20);
  fVar33 = (float)(CONCAT17((char)((uint)fVar59 >> 0x18),
                            CONCAT16((char)((uint)fVar59 >> 0x10),
                                     CONCAT15((char)((uint)fVar59 >> 8),
                                              CONCAT14(SUB41(fVar59,0),fVar80)))) >> 0x20);
  uVar86 = (undefined4)
           (CONCAT17((char)((uint)fVar73 >> 0x18),
                     CONCAT16((char)((uint)fVar73 >> 0x10),
                              CONCAT15((char)((uint)fVar73 >> 8),CONCAT14(SUB41(fVar73,0),fVar65))))
           >> 0x20);
  if (*(float *)PTR_FloatPiDivided2_04372d38 < fVar74) {
LAB_01ac9374:
    fVar74 = fVar66 - fVar74;
    fVar59 = -1.0;
  }
  else {
    if (fVar74 < -*(float *)PTR_FloatPiDivided2_04372d38) {
      fVar66 = -fVar66;
      goto LAB_01ac9374;
    }
    fVar59 = 1.0;
  }
  fVar73 = fVar74 * fVar74;
  fVar74 = fVar74 * (fVar73 * (fVar73 * (*(float *)(PTR_SinCoefficients_04372d28 + 0xc) +
                                        fVar73 * (fVar73 * (*(float *)(PTR_SinCoefficients_04372d28
                                                                      + 4) -
                                                           *(float *)PTR_SinCoefficients_04372d28 *
                                                           fVar73) -
                                                 *(float *)(PTR_SinCoefficients_04372d28 + 8))) -
                              *(float *)(PTR_SinCoefficients_04372d28 + 0x10)) + 1.0);
  auVar58._0_4_ = fVar32 * fVar74;
  auVar58._4_4_ = (float)((ulong)auVar53._0_8_ >> 0x20) * fVar74;
  auVar58._8_4_ = auVar53._8_4_ * fVar74;
  fVar59 = fVar59 * (fVar73 * (fVar73 * (*(float *)(PTR_CosCoefficients_04372d40 + 0xc) +
                                        fVar73 * (fVar73 * (*(float *)(PTR_CosCoefficients_04372d40
                                                                      + 4) -
                                                           fVar73 * *(float *)
                                                  PTR_CosCoefficients_04372d40) -
                                                 *(float *)(PTR_CosCoefficients_04372d40 + 8))) -
                              *(float *)(PTR_CosCoefficients_04372d40 + 0x10)) + 1.0);
  auVar15._4_4_ = fVar33;
  auVar15._0_4_ = fVar80;
  auVar15._8_4_ = fVar65;
  auVar15._12_4_ = uVar86;
  uVar77 = a64_TBL(ZEXT816(0),auVar15,DAT_0388a680);
  auVar58._12_4_ = fVar59;
  auVar16._4_4_ = fVar33;
  auVar16._0_4_ = fVar80;
  auVar16._8_4_ = fVar65;
  auVar16._12_4_ = uVar86;
  uVar60 = a64_TBL(ZEXT816(0),auVar16,DAT_0388a580);
  fVar32 = auVar58._0_4_ * (float)_DAT_03889ac0;
  fVar31 = auVar58._4_4_ * (float)((ulong)_DAT_03889ac0 >> 0x20);
  auVar71._0_8_ = CONCAT44(fVar31,fVar32);
  auVar71._8_4_ = auVar58._8_4_ * (float)_UNK_03889ac8;
  auVar71._12_4_ = fVar59 * (float)((ulong)_UNK_03889ac8 >> 0x20);
  uVar67 = a64_TBL(ZEXT816(0),auVar71,DAT_0388a880);
  uVar83 = a64_TBL(ZEXT816(0),auVar71,DAT_0388a790);
  uVar76 = a64_TBL(ZEXT816(0),auVar71,DAT_0388a580);
  uVar84 = a64_TBL(ZEXT816(0),auVar71,DAT_0388a6c8);
  fVar59 = (float)((ulong)uVar60 >> 0x20);
  fVar66 = (float)((ulong)uVar77 >> 0x20);
  uVar85 = a64_TBL(ZEXT816(0),auVar71,DAT_0388a680);
  auVar72._8_8_ = auVar71._0_8_;
  auVar72._0_8_ = auVar71._0_8_;
  uVar75 = a64_TBL(ZEXT816(0),auVar72,DAT_0388a648);
  auVar17._4_4_ = fVar33;
  auVar17._0_4_ = fVar80;
  auVar17._8_4_ = fVar65;
  auVar17._12_4_ = uVar86;
  uVar46 = a64_TBL(ZEXT816(0),auVar17,DAT_0388a880);
  fVar79 = (float)((ulong)uVar46 >> 0x20);
  fVar73 = (float)_DAT_03889ad0;
  fVar44 = (float)((ulong)_DAT_03889ad0 >> 0x20);
  fVar48 = (float)_UNK_03889ad8;
  fVar78 = (float)((ulong)_UNK_03889ad8 >> 0x20);
  uVar81 = a64_TBL(ZEXT816(0),auVar58,DAT_0388a580);
  uVar52 = a64_TBL(ZEXT816(0),auVar58,DAT_0388a680);
  fVar74 = (float)((ulong)uVar52 >> 0x20);
  fVar32 = ((float)uVar60 * fVar32 + fVar73 * fVar80 * (float)uVar76 +
           fVar73 * (float)uVar46 * (float)uVar85) - (float)uVar77 * (float)uVar67;
  fVar65 = (fVar59 * fVar31 + fVar44 * fVar33 * (float)((ulong)uVar76 >> 0x20) +
           fVar44 * fVar79 * (float)((ulong)uVar85 >> 0x20)) -
           fVar66 * (float)((ulong)uVar67 >> 0x20);
  auVar63._0_8_ = CONCAT44(fVar65,fVar32);
  auVar63._8_4_ =
       ((float)uVar60 * auVar71._8_4_ + fVar48 * (float)uVar77 * (float)uVar84 +
       fVar48 * fVar80 * (float)uVar75) - (float)uVar46 * (float)uVar83;
  auVar63._12_4_ =
       (fVar59 * auVar71._12_4_ + fVar78 * fVar66 * (float)((ulong)uVar84 >> 0x20) +
       fVar78 * fVar33 * (float)((ulong)uVar75 >> 0x20)) - fVar79 * (float)((ulong)uVar83 >> 0x20);
  uVar83 = a64_TBL(ZEXT816(0),auVar58,DAT_0388a880);
  fVar80 = (float)((ulong)uVar81 >> 0x20);
  uVar75 = a64_TBL(ZEXT816(0),auVar63,DAT_0388a580);
  uVar77 = a64_TBL(ZEXT816(0),auVar63,DAT_0388a6c8);
  uVar46 = a64_TBL(ZEXT816(0),auVar63,DAT_0388a680);
  uVar67 = a64_TBL(ZEXT816(0),auVar63,DAT_0388a880);
  uVar76 = a64_TBL(ZEXT816(0),auVar63,DAT_0388a790);
  auVar64._8_8_ = auVar63._0_8_;
  auVar64._0_8_ = auVar63._0_8_;
  uVar60 = a64_TBL(ZEXT816(0),auVar64,DAT_0388a648);
  fVar31 = (float)((ulong)uVar83 >> 0x20);
  fVar33 = ((float)uVar81 * fVar32 + fVar73 * auVar58._0_4_ * (float)uVar75 +
           fVar73 * (float)uVar83 * (float)uVar46) - (float)uVar52 * (float)uVar67;
  fVar32 = (fVar80 * fVar65 + fVar44 * auVar58._4_4_ * (float)((ulong)uVar75 >> 0x20) +
           fVar44 * fVar31 * (float)((ulong)uVar46 >> 0x20)) -
           fVar74 * (float)((ulong)uVar67 >> 0x20);
  fVar59 = ((float)uVar81 * auVar63._8_4_ + fVar48 * (float)uVar52 * (float)uVar77 +
           fVar48 * auVar58._0_4_ * (float)uVar60) - (float)uVar83 * (float)uVar76;
  fVar80 = (fVar80 * auVar63._12_4_ + fVar78 * fVar74 * (float)((ulong)uVar77 >> 0x20) +
           fVar78 * auVar58._4_4_ * (float)((ulong)uVar60 >> 0x20)) -
           fVar31 * (float)((ulong)uVar76 >> 0x20);
  bVar35 = (byte)_DAT_038897c0;
  uVar24 = (ulong)_DAT_038897c0 >> 8;
  uVar26 = (ulong)_DAT_038897c0 >> 0x10;
  uVar27 = (ulong)_DAT_038897c0 >> 0x18;
  fStack_ac = fStack_ac +
              (float)CONCAT13((byte)((uint)fVar32 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x38),
                              CONCAT12((byte)((uint)fVar32 >> 0x10) &
                                       (byte)((ulong)_DAT_038897c0 >> 0x30),
                                       CONCAT11((byte)((uint)fVar32 >> 8) &
                                                (byte)((ulong)_DAT_038897c0 >> 0x28),
                                                SUB41(fVar32,0) &
                                                (byte)((ulong)_DAT_038897c0 >> 0x20))));
  fVar32 = in_q3._12_4_ +
           (float)CONCAT13((byte)((uint)fVar80 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x38),
                           CONCAT12((byte)((uint)fVar80 >> 0x10) &
                                    (byte)((ulong)_UNK_038897c8 >> 0x30),
                                    CONCAT11((byte)((uint)fVar80 >> 8) &
                                             (byte)((ulong)_UNK_038897c8 >> 0x28),
                                             SUB41(fVar80,0) & (byte)((ulong)_UNK_038897c8 >> 0x20))
                                   ));
  param_3[1] = CONCAT17((char)((uint)fVar32 >> 0x18),
                        CONCAT16((char)((uint)fVar32 >> 0x10),
                                 CONCAT15((char)((uint)fVar32 >> 8),
                                          CONCAT14(SUB41(fVar32,0),
                                                   in_q3._8_4_ +
                                                   (float)CONCAT13((byte)((uint)fVar59 >> 0x18) &
                                                                   (byte)((ulong)_UNK_038897c8 >>
                                                                         0x18),
                                                                   CONCAT12((byte)((uint)fVar59 >>
                                                                                  0x10) &
                                                                            (byte)((ulong)
                                                  _UNK_038897c8 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar59 >> 8) &
                                                           (byte)((ulong)_UNK_038897c8 >> 8),
                                                           SUB41(fVar59,0) & (byte)_UNK_038897c8))))
                                         )));
  *param_3 = CONCAT17((char)((uint)fStack_ac >> 0x18),
                      CONCAT16((char)((uint)fStack_ac >> 0x10),
                               CONCAT15((char)((uint)fStack_ac >> 8),
                                        CONCAT14(SUB41(fStack_ac,0),
                                                 local_b0 +
                                                 (float)CONCAT13((byte)((uint)fVar33 >> 0x18) &
                                                                 (byte)uVar27,
                                                                 CONCAT12((byte)((uint)fVar33 >>
                                                                                0x10) & (byte)uVar26
                                                                          ,CONCAT11((byte)((uint)
                                                  fVar33 >> 8) & (byte)uVar24,
                                                  SUB41(fVar33,0) & bVar35)))))));
  *param_4 = iVar49;
  param_4[1] = iVar21;
  param_3 = (undefined8 *)(ulong)(iVar3 == 0 && (iVar21 == 2 && iVar49 == 1));
joined_r0x01ac8f90:
  if (local_70 != (long *)0x0) {
    lVar22 = local_70[0xb];
    piVar1 = (int *)(lVar22 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 1) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
    }
  }
  bVar5 = true;
joined_r0x01ac8fbc:
  uVar30 = (uint)param_3;
  if (local_68 != (long *)0x0) {
    lVar22 = local_68[0xb];
    piVar1 = (int *)(lVar22 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  if (!bVar5) {
LAB_01ac8fe0:
    uVar30 = 0;
    param_4[0] = 0;
    param_4[1] = 0;
  }
  return uVar30 & 1;
}


