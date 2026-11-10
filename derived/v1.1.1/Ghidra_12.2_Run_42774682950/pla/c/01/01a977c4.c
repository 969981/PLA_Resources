/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a977c4; name: FUN_01a977c4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a977c4(undefined8 *param_1,long *param_2,float *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined2 uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined4 uVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 uVar16;
  float *pfVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 extraout_b0;
  undefined1 uVar28;
  byte bVar29;
  undefined1 extraout_var;
  undefined1 uVar30;
  byte bVar31;
  undefined1 extraout_var_00;
  undefined1 uVar32;
  byte bVar33;
  undefined1 extraout_var_01;
  undefined1 uVar34;
  byte bVar35;
  undefined1 uVar36;
  byte bVar37;
  undefined1 uVar38;
  byte bVar39;
  undefined1 uVar40;
  byte bVar41;
  undefined1 uVar42;
  byte bVar43;
  undefined1 uVar44;
  byte bVar45;
  undefined1 uVar46;
  byte bVar47;
  undefined1 uVar48;
  byte bVar49;
  undefined1 uVar50;
  byte bVar51;
  undefined1 uVar52;
  byte bVar53;
  undefined1 uVar54;
  byte bVar55;
  undefined1 uVar56;
  byte bVar57;
  undefined1 uVar58;
  byte bVar59;
  float fVar60;
  undefined1 auVar61 [12];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar70;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar71;
  float fVar80;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  int iVar90;
  int iVar95;
  int iVar96;
  int iVar97;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  float local_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float local_1e0;
  float fStack_1dc;
  float fStack_1cc;
  float fStack_1c4;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  float local_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  ulong local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined **local_b0 [2];
  long local_a0;
  undefined8 uStack_98;
  float local_90;
  long *local_80 [2];
  long *local_68;
  
  puVar11 = PTR_DAT_0437a668;
  puVar10 = PTR_DAT_0437a660;
  uVar8 = *(undefined8 *)(param_3 + 2);
  uVar7 = *(undefined8 *)param_3;
  lVar21 = param_2[0x4c];
  if ((lVar21 == 0) || (*(int *)(lVar21 + 0xc) == 0)) {
LAB_01a97804:
    plVar19 = (long *)0x0;
  }
  else {
    piVar1 = (int *)(lVar21 + 0xc);
    iVar90 = *(int *)(lVar21 + 0xc);
    do {
      puVar20 = *(undefined8 **)(lVar21 + 0x10);
      if (((*puVar11 & 1) == 0) && (iVar95 = __cxa_guard_acquire(puVar11), iVar95 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar95 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar95 != 0)) {
          uVar16 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar16;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar10 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar11);
      }
      if (puVar20 == (undefined8 *)0x0) goto LAB_01a97804;
      while (puVar20 != (undefined8 *)puVar10) {
        puVar20 = (undefined8 *)*puVar20;
        plVar19 = (long *)0x0;
        if (puVar20 == (undefined8 *)0x0) goto LAB_01a97808;
      }
      iVar95 = *piVar1;
      if (iVar95 == iVar90) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar90 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          plVar19 = (long *)0x0;
          if (*(long *)(lVar21 + 0x18) != 0) {
            plVar19 = (long *)(*(long *)(lVar21 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar19 = (long *)0x0;
      iVar90 = iVar95;
    } while (iVar95 != 0);
  }
LAB_01a97808:
  FUN_01839c8c(local_80,param_2 + 0x15a);
  if ((plVar19 == (long *)0x0) || (local_80[0] == (long *)0x0)) {
    *(undefined1 *)(param_1 + 2) = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[1] = uVar8;
    *param_1 = uVar7;
    goto joined_r0x01a97bf4;
  }
  FUN_01839c8c(&local_1a0,param_2 + 0x15a);
  uVar14 = (**(code **)(*param_2 + 0x1a0))(param_2);
  plVar15 = (long *)CONCAT44(fStack_19c,local_1a0);
  fVar26 = 0.0;
  uVar28 = 0;
  if ((uVar14 & 1) == 0) {
    if (plVar15 != (long *)0x0) goto LAB_01a97884;
  }
  else if (plVar15 != (long *)0x0) {
    fVar26 = (float)plVar15[0x2a] * (float)DAT_0388a140;
    fVar22 = (float)((ulong)plVar15[0x2a] >> 0x20) * (float)((ulong)DAT_0388a140 >> 0x20);
    uVar28 = (undefined1)((uint)fVar22 >> 8);
    uVar30 = (undefined1)((uint)fVar22 >> 0x10);
    uVar32 = (undefined1)((uint)fVar22 >> 0x18);
    fVar23 = (float)plVar15[0x2b] * (float)DAT_0388a148;
    uVar34 = (undefined1)((uint)fVar23 >> 8);
    uVar36 = (undefined1)((uint)fVar23 >> 0x10);
    uVar38 = (undefined1)((uint)fVar23 >> 0x18);
    fVar60 = (float)((ulong)plVar15[0x2b] >> 0x20) * (float)((ulong)DAT_0388a148 >> 0x20);
    uVar40 = (undefined1)((uint)fVar60 >> 8);
    uVar42 = (undefined1)((uint)fVar60 >> 0x10);
    uVar44 = (undefined1)((uint)fVar60 >> 0x18);
    auVar62[4] = SUB41(fVar22,0);
    auVar62._0_4_ = fVar26;
    auVar62[5] = uVar28;
    auVar62[6] = uVar30;
    auVar62[7] = uVar32;
    auVar62[8] = SUB41(fVar23,0);
    auVar62[9] = uVar34;
    auVar62[10] = uVar36;
    auVar62[0xb] = uVar38;
    auVar62[0xc] = SUB41(fVar60,0);
    auVar62[0xd] = uVar40;
    auVar62[0xe] = uVar42;
    auVar62[0xf] = uVar44;
    auVar81[4] = SUB41(fVar22,0);
    auVar81._0_4_ = fVar26;
    auVar81[5] = uVar28;
    auVar81[6] = uVar30;
    auVar81[7] = uVar32;
    auVar81[8] = SUB41(fVar23,0);
    auVar81[9] = uVar34;
    auVar81[10] = uVar36;
    auVar81[0xb] = uVar38;
    auVar81[0xc] = SUB41(fVar60,0);
    auVar81[0xd] = uVar40;
    auVar81[0xe] = uVar42;
    auVar81[0xf] = uVar44;
    auVar62 = NEON_ext(auVar62,auVar81,8,1);
    fVar22 = auVar62._0_4_ + fVar26 + auVar62._4_4_ + fVar22;
    fVar26 = 0.0;
    if (-1.0 <= fVar22) {
      fVar26 = fVar22;
      if (1.0 < fVar22) {
        fVar26 = 0.0;
      }
    }
LAB_01a97884:
    uVar28 = SUB41(fVar26,0);
    lVar21 = plVar15[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar90 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar90 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar90 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))();
    }
  }
  FUN_0095d8f0(uVar28);
  if (*(float *)((long)param_2 + 0x694) <=
      (float)CONCAT13(extraout_var_01,CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))))
  {
    uVar14 = (**(code **)(*param_2 + 0x1a0))(param_2);
    if ((uVar14 & 1) == 0) {
      auVar61 = SUB1612(ZEXT816(0),0);
    }
    else {
      FUN_01a88b48(&local_1a0,param_2);
      auVar9._8_8_ = uStack_188;
      auVar9._0_8_ = local_190;
      auVar61 = auVar9._0_12_;
    }
    fVar22 = auVar61._8_4_;
    fVar26 = auVar61._0_4_;
    fVar60 = fVar22 * fVar22 + fVar26 * fVar26;
    fVar23 = fVar60 + 0.0;
    fVar60 = fVar60 + 0.0;
    if (fVar23 != 0.0) {
      auVar63._8_8_ = CONCAT44(fVar60,fVar23);
      auVar63._0_8_ = CONCAT44(fVar60,fVar23);
      auVar81 = NEON_frsqrte(auVar63,4);
      iVar90 = -(uint)(fVar23 == 0.0);
      iVar95 = -(uint)(fVar60 == 0.0);
      iVar96 = -(uint)(fVar23 == 0.0);
      iVar97 = -(uint)(fVar60 == 0.0);
      auVar72._0_4_ = auVar81._0_4_ * fVar23;
      auVar72._4_4_ = auVar81._4_4_ * fVar60;
      auVar72._8_4_ = auVar81._8_4_ * fVar23;
      auVar72._12_4_ = auVar81._12_4_ * fVar60;
      auVar62 = NEON_frsqrts(auVar81,auVar72,4);
      auVar73._0_4_ = auVar81._0_4_ * auVar62._0_4_;
      auVar73._4_4_ = auVar81._4_4_ * auVar62._4_4_;
      auVar73._8_4_ = auVar81._8_4_ * auVar62._8_4_;
      auVar73._12_4_ = auVar81._12_4_ * auVar62._12_4_;
      auVar82._0_4_ = fVar23 * auVar73._0_4_;
      auVar82._4_4_ = fVar60 * auVar73._4_4_;
      auVar82._8_4_ = fVar23 * auVar73._8_4_;
      auVar82._12_4_ = fVar60 * auVar73._12_4_;
      auVar62 = NEON_frsqrts(auVar73,auVar82,4);
      local_b0[0] = &PTR_FUN_04287c08;
      auVar83._0_4_ = *param_3 * *param_3;
      auVar83._4_4_ = param_3[1] * param_3[1];
      auVar83._8_4_ = param_3[2] * param_3[2];
      auVar83._12_4_ = param_3[3] * param_3[3];
      fVar26 = fVar26 * auVar73._0_4_ * auVar62._0_4_;
      fVar23 = auVar73._4_4_ * auVar62._4_4_ * 0.0;
      fVar22 = fVar22 * auVar73._8_4_ * auVar62._8_4_;
      fVar60 = auVar73._12_4_ * auVar62._12_4_ * 0.0;
      auVar62 = NEON_ext(auVar83,auVar83,8,1);
      if ((int)local_80[0][0x50] == 1) {
        pfVar17 = (float *)(local_80[0] + 0x56);
      }
      else {
        pfVar17 = (float *)(local_80[0] + 0x5e);
      }
      local_90 = *pfVar17;
      fVar22 = (float)CONCAT13((byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar96 >> 0x18),
                               CONCAT12((byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar96 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar22 >> 8) &
                                                  ~(byte)((uint)iVar96 >> 8),
                                                  SUB41(fVar22,0) & ~(byte)iVar96)));
      fStack_1c4 = (float)(CONCAT17((byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar97 >> 0x18),
                                    CONCAT16((byte)((uint)fVar60 >> 0x10) &
                                             ~(byte)((uint)iVar97 >> 0x10),
                                             CONCAT15((byte)((uint)fVar60 >> 8) &
                                                      ~(byte)((uint)iVar97 >> 8),
                                                      CONCAT14(SUB41(fVar60,0) & ~(byte)iVar97,
                                                               fVar22)))) >> 0x20);
      fVar26 = (float)CONCAT13((byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar90 >> 0x18),
                               CONCAT12((byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar90 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar26 >> 8) &
                                                  ~(byte)((uint)iVar90 >> 8),
                                                  SUB41(fVar26,0) & ~(byte)iVar90)));
      fStack_1cc = (float)(CONCAT17((byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar95 >> 0x18),
                                    CONCAT16((byte)((uint)fVar23 >> 0x10) &
                                             ~(byte)((uint)iVar95 >> 0x10),
                                             CONCAT15((byte)((uint)fVar23 >> 8) &
                                                      ~(byte)((uint)iVar95 >> 8),
                                                      CONCAT14(SUB41(fVar23,0) & ~(byte)iVar95,
                                                               fVar26)))) >> 0x20);
      fVar23 = SQRT(auVar62._0_4_ + auVar83._0_4_ + auVar62._4_4_ + auVar83._4_4_);
      local_a0 = (ulong)(uint)local_90 << 0x20;
      uStack_98 = 0;
      FUN_009c69bc(&local_1a0,param_2);
      plVar15 = (long *)CONCAT44(fStack_19c,local_1a0);
      auVar62 = *(undefined1 (*) [16])(plVar15 + 0x1a);
      local_200 = auVar62._0_4_;
      fVar60 = local_200;
      fStack_1fc = auVar62._4_4_;
      fVar27 = fStack_1fc;
      fStack_1f8 = auVar62._8_4_;
      fVar70 = fStack_1f8;
      fStack_1f4 = auVar62._12_4_;
      fVar25 = fStack_1f4;
      if (plVar15 != (long *)0x0) {
        lVar21 = plVar15[0xb];
        piVar1 = (int *)(lVar21 + 0xc);
        do {
          iVar90 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar90 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar90 + -1 == 0) {
          *(undefined8 *)(lVar21 + 0x18) = 0;
          (**(code **)(*plVar15 + 0x20))();
        }
      }
      fVar6 = *(float *)(param_2[0xb8] + 0x94);
      fStack_1f8 = (float)DAT_0388a148;
      fStack_1f4 = (float)((ulong)DAT_0388a148 >> 0x20);
      local_200 = (float)DAT_0388a140;
      fStack_1fc = (float)((ulong)DAT_0388a140 >> 0x20);
      local_180 = 0;
      local_160 = 0;
      uStack_158 = 0;
      fVar60 = fVar60 + local_200 * fVar6;
      fVar27 = fVar27 + fStack_1fc * fVar6;
      fVar70 = fVar70 + fStack_1f8 * fVar6;
      fVar25 = fVar25 + fStack_1f4 * fVar6;
      auVar64._0_8_ = CONCAT44(fStack_1cc * fVar23 + fVar27,fVar26 * fVar23 + fVar60);
      auVar64._8_4_ = fVar22 * fVar23 + fVar70;
      auVar64._12_4_ = fStack_1c4 * fVar23 + fVar25;
      local_178 = 0;
      local_170 = 0;
      local_150 = 0;
      uStack_148 = 0;
      local_128 = 0xfffffffff;
      local_120 = 0xffff;
      local_e8 = 0;
      local_f0 = 0;
      uStack_b8 = CONCAT17((char)((uint)fVar25 >> 0x18),
                           CONCAT16((char)((uint)fVar25 >> 0x10),
                                    CONCAT15((char)((uint)fVar25 >> 8),
                                             CONCAT14(SUB41(fVar25,0),fVar70))));
      local_c0 = CONCAT17((char)((uint)fVar27 >> 0x18),
                          CONCAT16((char)((uint)fVar27 >> 0x10),
                                   CONCAT15((char)((uint)fVar27 >> 8),
                                            CONCAT14(SUB41(fVar27,0),fVar60))));
      uStack_d8 = auVar64._8_8_;
      local_100 = 0xfffffffff;
      local_f8 = 0xffff;
      local_140 = 0x7f7fffee;
      local_138 = 0xffffffffffffffff;
      local_130 = 0xffffff;
      local_108 = 0xffffff;
      local_118 = 0;
      local_110 = 0xffffffffffffffff;
      local_e0 = auVar64._0_8_;
      local_d0 = auVar64._0_8_;
      uStack_c8 = uStack_d8;
      uVar13 = (**(code **)(*param_2 + 0x240))(param_2);
      puVar10 = PTR_DAT_0437a648;
      if (((*PTR_DAT_0437a648 & 1) == 0) &&
         (iVar90 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar90 != 0)) {
        FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437a648);
      }
      puVar12 = PTR_DAT_0437a658;
      puVar11 = PTR_DAT_0437a650;
      lVar21 = *(long *)PTR_DAT_0437a650;
      *(long *)PTR_DAT_0437a658 = lVar21;
      uVar14 = FUN_02bf6354(*(undefined8 *)(lVar21 + 0x230),local_b0,&local_c0,&local_d0,uVar13,
                            &local_1a0,1);
      if ((uVar14 & 1) != 0) {
        fVar60 = (float)local_190;
        auVar65._0_4_ = fVar26 * fVar60;
        fVar27 = (float)((ulong)local_190 >> 0x20);
        auVar65._4_4_ = fStack_1cc * fVar27;
        fVar70 = (float)uStack_188;
        auVar65._8_4_ = fVar22 * fVar70;
        fVar25 = (float)((ulong)uStack_188 >> 0x20);
        auVar65._12_4_ = fStack_1c4 * fVar25;
        auVar62 = NEON_ext(auVar65,auVar65,8,1);
        if ((0.0 <= auVar62._0_4_ + auVar65._0_4_ + auVar62._4_4_ + auVar65._4_4_) ||
           (auVar66._0_4_ = fVar60 * local_200, auVar66._4_4_ = fVar27 * fStack_1fc,
           auVar66._8_4_ = fVar70 * fStack_1f8, auVar66._12_4_ = fVar25 * fStack_1f4,
           auVar62 = NEON_ext(auVar66,auVar66,8,1),
           0.1 <= ABS(auVar62._0_4_ + auVar66._0_4_ + auVar62._4_4_ + auVar66._4_4_))) {
          auVar68._0_4_ = fVar60 * fVar60;
          auVar68._4_4_ = fVar27 * fVar27;
          auVar68._8_4_ = fVar70 * fVar70;
          auVar68._12_4_ = fVar25 * fVar25;
          auVar62 = NEON_ext(auVar68,auVar68,8,1);
          fVar22 = auVar62._0_4_ + auVar68._0_4_;
          fVar23 = auVar62._4_4_ + auVar68._4_4_;
          fVar26 = fVar22 + fVar23;
          fVar22 = fVar22 + fVar23;
          auVar69._8_8_ = CONCAT44(fVar22,fVar26);
          auVar69._0_8_ = CONCAT44(fVar22,fVar26);
          auVar62 = NEON_frsqrte(auVar69,4);
          auVar88._0_4_ = auVar62._0_4_ * fVar26;
          auVar88._4_4_ = auVar62._4_4_ * fVar22;
          auVar88._8_4_ = auVar62._8_4_ * fVar26;
          auVar88._12_4_ = auVar62._12_4_ * fVar22;
          auVar81 = NEON_frsqrts(auVar62,auVar88,4);
          auVar79._0_4_ = auVar62._0_4_ * auVar81._0_4_;
          auVar79._4_4_ = auVar62._4_4_ * auVar81._4_4_;
          auVar79._8_4_ = auVar62._8_4_ * auVar81._8_4_;
          auVar79._12_4_ = auVar62._12_4_ * auVar81._12_4_;
          auVar89._0_4_ = fVar26 * auVar79._0_4_;
          auVar89._4_4_ = fVar22 * auVar79._4_4_;
          auVar89._8_4_ = fVar26 * auVar79._8_4_;
          auVar89._12_4_ = fVar22 * auVar79._12_4_;
          iVar90 = -(uint)(fVar26 == 0.0);
          iVar95 = -(uint)(fVar22 == 0.0);
          iVar96 = -(uint)(fVar26 == 0.0);
          iVar97 = -(uint)(fVar22 == 0.0);
          auVar62 = NEON_frsqrts(auVar79,auVar89,4);
          fVar60 = fVar60 * auVar79._0_4_ * auVar62._0_4_;
          fVar27 = fVar27 * auVar79._4_4_ * auVar62._4_4_;
          fVar70 = fVar70 * auVar79._8_4_ * auVar62._8_4_;
          fVar25 = fVar25 * auVar79._12_4_ * auVar62._12_4_;
          fVar26 = (float)CONCAT13((byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar90 >> 0x18),
                                   CONCAT12((byte)((uint)fVar60 >> 0x10) &
                                            ~(byte)((uint)iVar90 >> 0x10),
                                            CONCAT11((byte)((uint)fVar60 >> 8) &
                                                     ~(byte)((uint)iVar90 >> 8),
                                                     SUB41(fVar60,0) & ~(byte)iVar90))) * local_90;
          uVar28 = SUB41(fVar26,0);
          uVar30 = (undefined1)((uint)fVar26 >> 8);
          uVar32 = (undefined1)((uint)fVar26 >> 0x10);
          uVar34 = (undefined1)((uint)fVar26 >> 0x18);
          fVar26 = (float)CONCAT13((byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar95 >> 0x18),
                                   CONCAT12((byte)((uint)fVar27 >> 0x10) &
                                            ~(byte)((uint)iVar95 >> 0x10),
                                            CONCAT11((byte)((uint)fVar27 >> 8) &
                                                     ~(byte)((uint)iVar95 >> 8),
                                                     SUB41(fVar27,0) & ~(byte)iVar95))) * local_90;
          uVar36 = SUB41(fVar26,0);
          uVar38 = (undefined1)((uint)fVar26 >> 8);
          uVar40 = (undefined1)((uint)fVar26 >> 0x10);
          uVar42 = (undefined1)((uint)fVar26 >> 0x18);
          fVar26 = (float)CONCAT13((byte)((uint)fVar70 >> 0x18) & ~(byte)((uint)iVar96 >> 0x18),
                                   CONCAT12((byte)((uint)fVar70 >> 0x10) &
                                            ~(byte)((uint)iVar96 >> 0x10),
                                            CONCAT11((byte)((uint)fVar70 >> 8) &
                                                     ~(byte)((uint)iVar96 >> 8),
                                                     SUB41(fVar70,0) & ~(byte)iVar96))) * local_90;
          uVar44 = SUB41(fVar26,0);
          uVar46 = (undefined1)((uint)fVar26 >> 8);
          uVar48 = (undefined1)((uint)fVar26 >> 0x10);
          uVar50 = (undefined1)((uint)fVar26 >> 0x18);
          fVar26 = (float)CONCAT13((byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar97 >> 0x18),
                                   CONCAT12((byte)((uint)fVar25 >> 0x10) &
                                            ~(byte)((uint)iVar97 >> 0x10),
                                            CONCAT11((byte)((uint)fVar25 >> 8) &
                                                     ~(byte)((uint)iVar97 >> 8),
                                                     SUB41(fVar25,0) & ~(byte)iVar97))) * local_90;
          uVar52 = SUB41(fVar26,0);
          uVar54 = (undefined1)((uint)fVar26 >> 8);
          uVar56 = (undefined1)((uint)fVar26 >> 0x10);
          uVar58 = (undefined1)((uint)fVar26 >> 0x18);
LAB_01a97ec0:
          fVar26 = fStack_19c + (float)CONCAT13(uVar42,CONCAT12(uVar40,CONCAT11(uVar38,uVar36)));
          fVar22 = fStack_194 + (float)CONCAT13(uVar58,CONCAT12(uVar56,CONCAT11(uVar54,uVar52)));
          uStack_d8 = CONCAT17((char)((uint)fVar22 >> 0x18),
                               CONCAT16((char)((uint)fVar22 >> 0x10),
                                        CONCAT15((char)((uint)fVar22 >> 8),
                                                 CONCAT14(SUB41(fVar22,0),
                                                          fStack_198 +
                                                          (float)CONCAT13(uVar50,CONCAT12(uVar48,
                                                  CONCAT11(uVar46,uVar44)))))));
          local_e0 = CONCAT17((char)((uint)fVar26 >> 0x18),
                              CONCAT16((char)((uint)fVar26 >> 0x10),
                                       CONCAT15((char)((uint)fVar26 >> 8),
                                                CONCAT14(SUB41(fVar26,0),
                                                         local_1a0 +
                                                         (float)CONCAT13(uVar34,CONCAT12(uVar32,
                                                  CONCAT11(uVar30,uVar28)))))));
        }
        else {
          fVar27 = fVar70 * fVar70 + fVar60 * fVar60;
          fVar25 = fVar27 + 0.0;
          fVar27 = fVar27 + 0.0;
          uVar28 = SUB41(fVar27,0);
          uVar30 = (undefined1)((uint)fVar27 >> 8);
          uVar32 = (undefined1)((uint)fVar27 >> 0x10);
          uVar34 = (undefined1)((uint)fVar27 >> 0x18);
          if (fVar25 != 0.0) {
            auVar4[4] = uVar28;
            auVar4._0_4_ = fVar25;
            auVar4[5] = uVar30;
            auVar4[6] = uVar32;
            auVar4[7] = uVar34;
            auVar4[8] = SUB41(fVar25,0);
            auVar4[9] = (char)((uint)fVar25 >> 8);
            auVar4[10] = (char)((uint)fVar25 >> 0x10);
            auVar4[0xb] = (char)((uint)fVar25 >> 0x18);
            auVar4[0xc] = uVar28;
            auVar4[0xd] = uVar30;
            auVar4[0xe] = uVar32;
            auVar4[0xf] = uVar34;
            auVar62 = NEON_frsqrte(auVar4,4);
            auVar85._0_4_ = auVar62._0_4_ * fVar25;
            auVar85._4_4_ = auVar62._4_4_ * fVar27;
            auVar85._8_4_ = auVar62._8_4_ * fVar25;
            uVar5 = (undefined2)(CONCAT15(uVar30,CONCAT14(uVar28,fVar25)) >> 0x20);
            auVar85._12_4_ = auVar62._12_4_ * (float)CONCAT13(uVar34,CONCAT12(uVar32,uVar5));
            auVar81 = NEON_frsqrts(auVar62,auVar85,4);
            auVar76._0_4_ = auVar62._0_4_ * auVar81._0_4_;
            auVar76._4_4_ = auVar62._4_4_ * auVar81._4_4_;
            auVar76._8_4_ = auVar62._8_4_ * auVar81._8_4_;
            auVar76._12_4_ = auVar62._12_4_ * auVar81._12_4_;
            auVar86._0_4_ = fVar25 * auVar76._0_4_;
            auVar86._4_4_ = fVar27 * auVar76._4_4_;
            auVar86._8_4_ = fVar25 * auVar76._8_4_;
            auVar86._12_4_ = (float)CONCAT13(uVar34,CONCAT12(uVar32,uVar5)) * auVar76._12_4_;
            iVar90 = -(uint)(fVar25 == 0.0);
            iVar95 = -(uint)(fVar27 == 0.0);
            iVar96 = -(uint)(fVar25 == 0.0);
            iVar97 = -(uint)((float)CONCAT13(uVar34,CONCAT12(uVar32,uVar5)) == 0.0);
            auVar62 = NEON_frsqrts(auVar76,auVar86,4);
            fVar60 = fVar60 * auVar76._0_4_ * auVar62._0_4_;
            fVar27 = auVar76._4_4_ * auVar62._4_4_ * 0.0;
            fVar70 = fVar70 * auVar76._8_4_ * auVar62._8_4_;
            fVar25 = auVar76._12_4_ * auVar62._12_4_ * 0.0;
            bVar29 = SUB41(fVar60,0) & ~(byte)iVar90;
            bVar31 = (byte)((uint)fVar60 >> 8) & ~(byte)((uint)iVar90 >> 8);
            bVar33 = (byte)((uint)fVar60 >> 0x10) & ~(byte)((uint)iVar90 >> 0x10);
            bVar35 = (byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar90 >> 0x18);
            bVar37 = SUB41(fVar27,0) & ~(byte)iVar95;
            bVar39 = (byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar95 >> 8);
            bVar41 = (byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar95 >> 0x10);
            bVar43 = (byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar95 >> 0x18);
            bVar45 = SUB41(fVar70,0) & ~(byte)iVar96;
            bVar47 = (byte)((uint)fVar70 >> 8) & ~(byte)((uint)iVar96 >> 8);
            bVar49 = (byte)((uint)fVar70 >> 0x10) & ~(byte)((uint)iVar96 >> 0x10);
            bVar51 = (byte)((uint)fVar70 >> 0x18) & ~(byte)((uint)iVar96 >> 0x18);
            bVar53 = SUB41(fVar25,0) & ~(byte)iVar97;
            bVar55 = (byte)((uint)fVar25 >> 8) & ~(byte)((uint)iVar97 >> 8);
            bVar57 = (byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar97 >> 0x10);
            bVar59 = (byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar97 >> 0x18);
            auVar67._0_4_ =
                 (0.0 - fVar26) * fVar23 *
                 (float)CONCAT13(bVar35,CONCAT12(bVar33,CONCAT11(bVar31,bVar29)));
            auVar67._4_4_ =
                 (0.0 - fStack_1cc) * fVar23 *
                 (float)CONCAT13(bVar43,CONCAT12(bVar41,CONCAT11(bVar39,bVar37)));
            auVar67._8_4_ =
                 (0.0 - fVar22) * fVar23 *
                 (float)CONCAT13(bVar51,CONCAT12(bVar49,CONCAT11(bVar47,bVar45)));
            auVar67._12_4_ =
                 (0.0 - fStack_1c4) * fVar23 *
                 (float)CONCAT13(bVar59,CONCAT12(bVar57,CONCAT11(bVar55,bVar53)));
            auVar62 = NEON_ext(auVar67,auVar67,8,1);
            fVar70 = auVar62._0_4_ + auVar67._0_4_ + auVar62._4_4_ + auVar67._4_4_;
            fVar60 = (float)((ulong)local_c0 >> 0x20) +
                     fStack_1cc * fVar23 +
                     (float)CONCAT13(bVar43,CONCAT12(bVar41,CONCAT11(bVar39,bVar37))) * fVar70;
            fVar27 = (float)((ulong)uStack_b8 >> 0x20) +
                     fStack_1c4 * fVar23 +
                     (float)CONCAT13(bVar59,CONCAT12(bVar57,CONCAT11(bVar55,bVar53))) * fVar70;
            uStack_d8 = CONCAT17((char)((uint)fVar27 >> 0x18),
                                 CONCAT16((char)((uint)fVar27 >> 0x10),
                                          CONCAT15((char)((uint)fVar27 >> 8),
                                                   CONCAT14(SUB41(fVar27,0),
                                                            (float)uStack_b8 +
                                                            fVar22 * fVar23 +
                                                            (float)CONCAT13(bVar51,CONCAT12(bVar49,
                                                  CONCAT11(bVar47,bVar45))) * fVar70))));
            local_e0 = CONCAT17((char)((uint)fVar60 >> 0x18),
                                CONCAT16((char)((uint)fVar60 >> 0x10),
                                         CONCAT15((char)((uint)fVar60 >> 8),
                                                  CONCAT14(SUB41(fVar60,0),
                                                           (float)local_c0 +
                                                           fVar26 * fVar23 +
                                                           (float)CONCAT13(bVar35,CONCAT12(bVar33,
                                                  CONCAT11(bVar31,bVar29))) * fVar70))));
            uVar13 = (**(code **)(*param_2 + 0x240))(param_2);
            if (((*puVar10 & 1) == 0) &&
               (iVar90 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar90 != 0)) {
              FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_0437a648);
            }
            lVar21 = *(long *)puVar11;
            *(long *)puVar12 = lVar21;
            uVar14 = FUN_02bf6354(*(undefined8 *)(lVar21 + 0x230),local_b0,&local_c0,&local_e0,
                                  uVar13,&local_1a0,1);
            if ((uVar14 & 1) != 0) {
              fVar26 = (float)local_190;
              auVar77._0_4_ = fVar26 * fVar26;
              fVar22 = (float)((ulong)local_190 >> 0x20);
              auVar77._4_4_ = fVar22 * fVar22;
              fVar23 = (float)uStack_188;
              auVar77._8_4_ = fVar23 * fVar23;
              fVar60 = (float)((ulong)uStack_188 >> 0x20);
              auVar77._12_4_ = fVar60 * fVar60;
              auVar62 = NEON_ext(auVar77,auVar77,8,1);
              fVar70 = auVar62._0_4_ + auVar77._0_4_;
              fVar25 = auVar62._4_4_ + auVar77._4_4_;
              fVar27 = fVar70 + fVar25;
              fVar70 = fVar70 + fVar25;
              auVar78._8_8_ = CONCAT44(fVar70,fVar27);
              auVar78._0_8_ = CONCAT44(fVar70,fVar27);
              auVar62 = NEON_frsqrte(auVar78,4);
              auVar93._0_4_ = auVar62._0_4_ * fVar27;
              auVar93._4_4_ = auVar62._4_4_ * fVar70;
              auVar93._8_4_ = auVar62._8_4_ * fVar27;
              auVar93._12_4_ = auVar62._12_4_ * fVar70;
              auVar81 = NEON_frsqrts(auVar62,auVar93,4);
              auVar87._0_4_ = auVar62._0_4_ * auVar81._0_4_;
              auVar87._4_4_ = auVar62._4_4_ * auVar81._4_4_;
              auVar87._8_4_ = auVar62._8_4_ * auVar81._8_4_;
              auVar87._12_4_ = auVar62._12_4_ * auVar81._12_4_;
              auVar94._0_4_ = fVar27 * auVar87._0_4_;
              auVar94._4_4_ = fVar70 * auVar87._4_4_;
              auVar94._8_4_ = fVar27 * auVar87._8_4_;
              auVar94._12_4_ = fVar70 * auVar87._12_4_;
              iVar90 = -(uint)(fVar27 == 0.0);
              iVar95 = -(uint)(fVar70 == 0.0);
              iVar96 = -(uint)(fVar27 == 0.0);
              iVar97 = -(uint)(fVar70 == 0.0);
              auVar62 = NEON_frsqrts(auVar87,auVar94,4);
              fVar26 = fVar26 * auVar87._0_4_ * auVar62._0_4_;
              fVar22 = fVar22 * auVar87._4_4_ * auVar62._4_4_;
              fVar23 = fVar23 * auVar87._8_4_ * auVar62._8_4_;
              fVar60 = fVar60 * auVar87._12_4_ * auVar62._12_4_;
              fVar26 = (float)CONCAT13((byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar90 >> 0x18),
                                       CONCAT12((byte)((uint)fVar26 >> 0x10) &
                                                ~(byte)((uint)iVar90 >> 0x10),
                                                CONCAT11((byte)((uint)fVar26 >> 8) &
                                                         ~(byte)((uint)iVar90 >> 8),
                                                         SUB41(fVar26,0) & ~(byte)iVar90))) *
                       local_90;
              uVar28 = SUB41(fVar26,0);
              uVar30 = (undefined1)((uint)fVar26 >> 8);
              uVar32 = (undefined1)((uint)fVar26 >> 0x10);
              uVar34 = (undefined1)((uint)fVar26 >> 0x18);
              fVar26 = (float)CONCAT13((byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar95 >> 0x18),
                                       CONCAT12((byte)((uint)fVar22 >> 0x10) &
                                                ~(byte)((uint)iVar95 >> 0x10),
                                                CONCAT11((byte)((uint)fVar22 >> 8) &
                                                         ~(byte)((uint)iVar95 >> 8),
                                                         SUB41(fVar22,0) & ~(byte)iVar95))) *
                       local_90;
              uVar36 = SUB41(fVar26,0);
              uVar38 = (undefined1)((uint)fVar26 >> 8);
              uVar40 = (undefined1)((uint)fVar26 >> 0x10);
              uVar42 = (undefined1)((uint)fVar26 >> 0x18);
              fVar26 = (float)CONCAT13((byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar96 >> 0x18),
                                       CONCAT12((byte)((uint)fVar23 >> 0x10) &
                                                ~(byte)((uint)iVar96 >> 0x10),
                                                CONCAT11((byte)((uint)fVar23 >> 8) &
                                                         ~(byte)((uint)iVar96 >> 8),
                                                         SUB41(fVar23,0) & ~(byte)iVar96))) *
                       local_90;
              uVar44 = SUB41(fVar26,0);
              uVar46 = (undefined1)((uint)fVar26 >> 8);
              uVar48 = (undefined1)((uint)fVar26 >> 0x10);
              uVar50 = (undefined1)((uint)fVar26 >> 0x18);
              fVar26 = (float)CONCAT13((byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar97 >> 0x18),
                                       CONCAT12((byte)((uint)fVar60 >> 0x10) &
                                                ~(byte)((uint)iVar97 >> 0x10),
                                                CONCAT11((byte)((uint)fVar60 >> 8) &
                                                         ~(byte)((uint)iVar97 >> 8),
                                                         SUB41(fVar60,0) & ~(byte)iVar97))) *
                       local_90;
              uVar52 = SUB41(fVar26,0);
              uVar54 = (undefined1)((uint)fVar26 >> 8);
              uVar56 = (undefined1)((uint)fVar26 >> 0x10);
              uVar58 = (undefined1)((uint)fVar26 >> 0x18);
              goto LAB_01a97ec0;
            }
          }
        }
      }
      local_1b0 = local_e0;
      uStack_1a8 = uStack_d8;
      fVar23 = (float)_DAT_03889960;
      fVar60 = (float)((ulong)_DAT_03889960 >> 0x20);
      fVar26 = (float)((ulong)local_e0 >> 0x20) + fVar60;
      fVar27 = (float)_UNK_03889968;
      fVar70 = (float)((ulong)_UNK_03889968 >> 0x20);
      fVar22 = (float)((ulong)uStack_d8 >> 0x20) + fVar70;
      uStack_1b8 = CONCAT17((char)((uint)fVar22 >> 0x18),
                            CONCAT16((char)((uint)fVar22 >> 0x10),
                                     CONCAT15((char)((uint)fVar22 >> 8),
                                              CONCAT14(SUB41(fVar22,0),(float)uStack_d8 + fVar27))))
      ;
      uStack_1c0 = CONCAT17((char)((uint)fVar26 >> 0x18),
                            CONCAT16((char)((uint)fVar26 >> 0x10),
                                     CONCAT15((char)((uint)fVar26 >> 8),
                                              CONCAT14(SUB41(fVar26,0),(float)local_e0 + fVar23))));
      uVar13 = (**(code **)(*param_2 + 0x240))(param_2);
      if (((*puVar10 & 1) == 0) && (iVar90 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar90 != 0)) {
        FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437a648);
      }
      lVar21 = *(long *)puVar11;
      *(long *)puVar12 = lVar21;
      uVar14 = FUN_02bf6354(*(undefined8 *)(lVar21 + 0x230),local_b0,&local_1b0,&uStack_1c0,uVar13,
                            &local_1a0,1);
      if ((uVar14 & 1) == 0) {
        uVar44 = (undefined1)uVar8;
        uVar46 = (undefined1)((ulong)uVar8 >> 8);
        uVar48 = (undefined1)((ulong)uVar8 >> 0x10);
        uVar50 = (undefined1)((ulong)uVar8 >> 0x18);
        uVar52 = (undefined1)((ulong)uVar8 >> 0x20);
        uVar54 = (undefined1)((ulong)uVar8 >> 0x28);
        uVar56 = (undefined1)((ulong)uVar8 >> 0x30);
        uVar58 = (undefined1)((ulong)uVar8 >> 0x38);
        uVar28 = (undefined1)uVar7;
        uVar30 = (undefined1)((ulong)uVar7 >> 8);
        uVar32 = (undefined1)((ulong)uVar7 >> 0x10);
        uVar34 = (undefined1)((ulong)uVar7 >> 0x18);
        uVar36 = (undefined1)((ulong)uVar7 >> 0x20);
        uVar38 = (undefined1)((ulong)uVar7 >> 0x28);
        uVar40 = (undefined1)((ulong)uVar7 >> 0x30);
        uVar42 = (undefined1)((ulong)uVar7 >> 0x38);
        *(undefined1 *)(param_1 + 2) = 0;
        *(undefined1 *)(param_1 + 4) = 0;
      }
      else {
        fVar26 = (float)local_190;
        auVar74._0_4_ = fVar26 * fVar26;
        fVar22 = (float)((ulong)local_190 >> 0x20);
        auVar74._4_4_ = fVar22 * fVar22;
        fVar25 = (float)uStack_188;
        auVar74._8_4_ = fVar25 * fVar25;
        fVar6 = (float)((ulong)uStack_188 >> 0x20);
        auVar74._12_4_ = fVar6 * fVar6;
        auVar62 = NEON_ext(auVar74,auVar74,8,1);
        fVar71 = auVar62._0_4_ + auVar74._0_4_;
        fVar80 = auVar62._4_4_ + auVar74._4_4_;
        fVar24 = fVar71 + fVar80;
        fVar71 = fVar71 + fVar80;
        auVar75._8_8_ = CONCAT44(fVar71,fVar24);
        auVar75._0_8_ = CONCAT44(fVar71,fVar24);
        auVar62 = NEON_frsqrte(auVar75,4);
        auVar91._0_4_ = auVar62._0_4_ * fVar24;
        auVar91._4_4_ = auVar62._4_4_ * fVar71;
        auVar91._8_4_ = auVar62._8_4_ * fVar24;
        auVar91._12_4_ = auVar62._12_4_ * fVar71;
        auVar81 = NEON_frsqrts(auVar62,auVar91,4);
        auVar84._0_4_ = auVar62._0_4_ * auVar81._0_4_;
        auVar84._4_4_ = auVar62._4_4_ * auVar81._4_4_;
        auVar84._8_4_ = auVar62._8_4_ * auVar81._8_4_;
        auVar84._12_4_ = auVar62._12_4_ * auVar81._12_4_;
        auVar92._0_4_ = fVar24 * auVar84._0_4_;
        auVar92._4_4_ = fVar71 * auVar84._4_4_;
        auVar92._8_4_ = fVar24 * auVar84._8_4_;
        auVar92._12_4_ = fVar71 * auVar84._12_4_;
        iVar90 = -(uint)(fVar24 == 0.0);
        iVar95 = -(uint)(fVar71 == 0.0);
        iVar96 = -(uint)(fVar24 == 0.0);
        iVar97 = -(uint)(fVar71 == 0.0);
        auVar62 = NEON_frsqrts(auVar84,auVar92,4);
        fVar26 = fVar26 * auVar84._0_4_ * auVar62._0_4_;
        fVar22 = fVar22 * auVar84._4_4_ * auVar62._4_4_;
        fVar25 = fVar25 * auVar84._8_4_ * auVar62._8_4_;
        fVar6 = fVar6 * auVar84._12_4_ * auVar62._12_4_;
        fVar26 = local_1a0 +
                 (float)CONCAT13((byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar90 >> 0x18),
                                 CONCAT12((byte)((uint)fVar26 >> 0x10) &
                                          ~(byte)((uint)iVar90 >> 0x10),
                                          CONCAT11((byte)((uint)fVar26 >> 8) &
                                                   ~(byte)((uint)iVar90 >> 8),
                                                   SUB41(fVar26,0) & ~(byte)iVar90))) * local_90 +
                 fVar23 * local_90;
        fVar22 = fStack_19c +
                 (float)CONCAT13((byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar95 >> 0x18),
                                 CONCAT12((byte)((uint)fVar22 >> 0x10) &
                                          ~(byte)((uint)iVar95 >> 0x10),
                                          CONCAT11((byte)((uint)fVar22 >> 8) &
                                                   ~(byte)((uint)iVar95 >> 8),
                                                   SUB41(fVar22,0) & ~(byte)iVar95))) * local_90 +
                 fVar60 * local_90;
        fVar23 = fStack_198 +
                 (float)CONCAT13((byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar96 >> 0x18),
                                 CONCAT12((byte)((uint)fVar25 >> 0x10) &
                                          ~(byte)((uint)iVar96 >> 0x10),
                                          CONCAT11((byte)((uint)fVar25 >> 8) &
                                                   ~(byte)((uint)iVar96 >> 8),
                                                   SUB41(fVar25,0) & ~(byte)iVar96))) * local_90 +
                 fVar27 * local_90;
        fVar60 = fStack_194 +
                 (float)CONCAT13((byte)((uint)fVar6 >> 0x18) & ~(byte)((uint)iVar97 >> 0x18),
                                 CONCAT12((byte)((uint)fVar6 >> 0x10) &
                                          ~(byte)((uint)iVar97 >> 0x10),
                                          CONCAT11((byte)((uint)fVar6 >> 8) &
                                                   ~(byte)((uint)iVar97 >> 8),
                                                   SUB41(fVar6,0) & ~(byte)iVar97))) * local_90 +
                 fVar70 * local_90;
        fStack_1c4 = (float)(CONCAT17((char)((uint)fVar60 >> 0x18),
                                      CONCAT16((char)((uint)fVar60 >> 0x10),
                                               CONCAT15((char)((uint)fVar60 >> 8),
                                                        CONCAT14(SUB41(fVar60,0),fVar23)))) >> 0x20)
        ;
        fStack_1cc = (float)(CONCAT17((char)((uint)fVar22 >> 0x18),
                                      CONCAT16((char)((uint)fVar22 >> 0x10),
                                               CONCAT15((char)((uint)fVar22 >> 8),
                                                        CONCAT14(SUB41(fVar22,0),fVar26)))) >> 0x20)
        ;
        FUN_009c69bc(&local_68,param_2);
        lVar21 = local_68[0x1b];
        local_1e0 = (float)local_68[0x1a];
        fStack_1dc = (float)((ulong)local_68[0x1a] >> 0x20);
        if (local_68 != (long *)0x0) {
          lVar18 = local_68[0xb];
          piVar1 = (int *)(lVar18 + 0xc);
          do {
            iVar90 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar90 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar90 + -1 == 0) {
            *(undefined8 *)(lVar18 + 0x18) = 0;
            (**(code **)(*local_68 + 0x20))();
          }
        }
        local_1e0 = fVar26 - local_1e0;
        uVar28 = SUB41(local_1e0,0);
        uVar30 = (undefined1)((uint)local_1e0 >> 8);
        uVar32 = (undefined1)((uint)local_1e0 >> 0x10);
        uVar34 = (undefined1)((uint)local_1e0 >> 0x18);
        fStack_1dc = fStack_1cc - fStack_1dc;
        uVar36 = SUB41(fStack_1dc,0);
        uVar38 = (undefined1)((uint)fStack_1dc >> 8);
        uVar40 = (undefined1)((uint)fStack_1dc >> 0x10);
        uVar42 = (undefined1)((uint)fStack_1dc >> 0x18);
        fVar22 = fVar23 - (float)lVar21;
        uVar44 = SUB41(fVar22,0);
        uVar46 = (undefined1)((uint)fVar22 >> 8);
        uVar48 = (undefined1)((uint)fVar22 >> 0x10);
        uVar50 = (undefined1)((uint)fVar22 >> 0x18);
        fVar22 = fStack_1c4 - (float)((ulong)lVar21 >> 0x20);
        uVar52 = SUB41(fVar22,0);
        uVar54 = (undefined1)((uint)fVar22 >> 8);
        uVar56 = (undefined1)((uint)fVar22 >> 0x10);
        uVar58 = (undefined1)((uint)fVar22 >> 0x18);
        *(undefined1 *)(param_1 + 2) = 1;
        *(undefined1 *)(param_1 + 4) = 1;
        *(float *)(param_1 + 7) = fVar23;
        *(float *)((long)param_1 + 0x3c) = fStack_1c4;
        *(float *)(param_1 + 6) = fVar26;
        *(float *)((long)param_1 + 0x34) = fStack_1cc;
      }
      uVar14 = local_170;
      param_1[1] = CONCAT17(uVar58,CONCAT16(uVar56,CONCAT15(uVar54,CONCAT14(uVar52,CONCAT13(uVar50,
                                                  CONCAT12(uVar48,CONCAT11(uVar46,uVar44)))))));
      *param_1 = CONCAT17(uVar42,CONCAT16(uVar40,CONCAT15(uVar38,CONCAT14(uVar36,CONCAT13(uVar34,
                                                  CONCAT12(uVar32,CONCAT11(uVar30,uVar28)))))));
      if ((local_170 & 1) != 0) {
        lVar21 = tpidr_el0;
        lVar18 = *(long *)(lVar21 + 0x38d490);
        if (lVar18 == 0) {
          lVar18 = FUN_0333d16c(0,1);
          *(long *)(lVar21 + 0x38d490) = lVar18;
        }
        plVar15 = *(long **)(*(long *)(lVar18 + 8) + 0x58);
        puVar20 = (undefined8 *)(uVar14 - 0x11);
        *puVar20 = 0;
        (**(code **)(*plVar15 + 0x18))(plVar15,puVar20,(long)*(int *)(uVar14 - 9) + 0x10);
      }
      goto joined_r0x01a97bf4;
    }
  }
  FUN_01a952a4(param_1,param_2,param_3);
joined_r0x01a97bf4:
  if (local_80[0] != (long *)0x0) {
    lVar21 = local_80[0][0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar90 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar90 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar90 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*local_80[0] + 0x20))();
    }
  }
  if (plVar19 != (long *)0x0) {
    lVar21 = plVar19[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar90 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar90 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar90 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*plVar19 + 0x20))(plVar19);
    }
  }
  return;
}


