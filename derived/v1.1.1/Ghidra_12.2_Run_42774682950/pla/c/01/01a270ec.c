/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a270ec; name: FUN_01a270ec
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a270ec(float param_1,undefined1 param_2 [16],undefined1 param_3 [16],long param_4,
                 undefined8 *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined2 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined3 uVar9;
  undefined *puVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  float fVar18;
  undefined4 extraout_s0;
  float extraout_s0_00;
  float fVar19;
  float extraout_var;
  float extraout_var_00;
  float fVar22;
  undefined4 extraout_var_01;
  float extraout_var_02;
  float fVar23;
  undefined4 extraout_var_03;
  float extraout_var_04;
  float fVar24;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  byte bVar28;
  undefined1 uVar29;
  byte bVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined7 uVar43;
  undefined1 auVar44 [12];
  byte bVar48;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar49;
  int iVar50;
  float fVar51;
  float fVar60;
  int iVar62;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  int iVar61;
  int iVar63;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  int iVar70;
  undefined8 uVar64;
  int iVar71;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar72;
  float fVar80;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined8 uVar81;
  undefined8 uVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined8 local_50;
  float fStack_48;
  float fStack_44;
  
  plVar11 = (long *)FUN_01a26978();
  if (plVar11 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar11 + 0x58))();
  _fStack_48 = CONCAT44(extraout_var_03,extraout_var_01);
  local_50 = CONCAT44(extraout_var,extraout_s0);
  fVar18 = *(float *)(param_4 + 0x100) + param_1;
  uVar25 = SUB41(fVar18,0);
  uVar26 = (undefined1)((uint)fVar18 >> 8);
  uVar27 = (undefined1)((uint)fVar18 >> 0x10);
  uVar29 = (undefined1)((uint)fVar18 >> 0x18);
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar50 = __cxa_guard_acquire(PTR_DAT_04379660), iVar50 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  uVar40 = 0;
  uVar37 = 0;
  uVar35 = 0;
  lVar15 = *(long *)PTR_DAT_04379668;
  fVar49 = 0.0;
  *(long *)PTR_DAT_04379670 = lVar15;
  uVar12 = *(ulong *)(lVar15 + 0x60);
  if (uVar12 != 0) {
    uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = uVar12 - 1 & 0xe2aac3fcf194dd52;
    }
    else if (uVar12 < 0xe2aac3fcf194dd53) {
      uVar14 = 0;
      if (uVar12 != 0) {
        uVar14 = 0xe2aac3fcf194dd52 / uVar12;
      }
      uVar14 = 0xe2aac3fcf194dd52 - uVar14 * uVar12;
    }
    else {
      uVar14 = 0xe2aac3fcf194dd52;
    }
    plVar16 = *(long **)(*(long *)(lVar15 + 0x58) + uVar14 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar16[1] == 0xe2aac3fcf194dd52) {
            if (plVar16[2] == -0x1d553c030e6b22ae) goto LAB_01a27200;
          }
          else if ((plVar16[1] & uVar12 - 1) != uVar14) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar16[1];
          if (uVar13 == 0xe2aac3fcf194dd52) {
            if (plVar16[2] == -0x1d553c030e6b22ae) goto LAB_01a27200;
          }
          else {
            if (uVar12 <= uVar13) {
              uVar4 = 0;
              if (uVar12 != 0) {
                uVar4 = uVar13 / uVar12;
              }
              uVar13 = uVar13 - uVar4 * uVar12;
            }
            if (uVar13 != uVar14) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
  goto LAB_01a2735c;
LAB_01a27200:
  plVar16 = (long *)plVar16[3];
  if (plVar16 == (long *)0x0) goto LAB_01a2735c;
  plVar1 = plVar16 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar12 = plVar16[0x21];
  fVar49 = 0.0;
  if (uVar12 != 0) {
    uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = uVar12 - 1 & 0xa08c3632bfe7dc97;
    }
    else if (uVar12 < 0xa08c3632bfe7dc98) {
      uVar14 = 0;
      if (uVar12 != 0) {
        uVar14 = 0xa08c3632bfe7dc97 / uVar12;
      }
      uVar14 = 0xa08c3632bfe7dc97 - uVar14 * uVar12;
    }
    else {
      uVar14 = 0xa08c3632bfe7dc97;
    }
    plVar17 = *(long **)(plVar16[0x20] + uVar14 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar17[1] == 0xa08c3632bfe7dc97) {
            if (plVar17[2] == -0x5f73c9cd40182369) goto LAB_01a27344;
          }
          else if ((plVar17[1] & uVar12 - 1) != uVar14) break;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar17[1];
          if (uVar13 == 0xa08c3632bfe7dc97) {
            if (plVar17[2] == -0x5f73c9cd40182369) goto LAB_01a27344;
          }
          else {
            if (uVar12 <= uVar13) {
              uVar4 = 0;
              if (uVar12 != 0) {
                uVar4 = uVar13 / uVar12;
              }
              uVar13 = uVar13 - uVar4 * uVar12;
            }
            if (uVar13 != uVar14) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
  goto LAB_01a27348;
LAB_01a27344:
  fVar49 = *(float *)(plVar17 + 6);
LAB_01a27348:
  do {
    iVar50 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar50;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar50 == 0) {
    (**(code **)(*plVar16 + 0x10))();
  }
LAB_01a2735c:
  uVar39 = 0;
  uVar38 = 0;
  uVar36 = 0;
  uVar34 = 0;
  uVar33 = 0;
  uVar32 = 0;
  uVar31 = 0;
  uVar42 = 0;
  uVar41 = 0;
  local_50 = CONCAT44(fVar18,(int)local_50);
  (**(code **)(*plVar11 + 0x50))(plVar11,&local_50);
  puVar10 = PTR_DAT_0437a100;
  if (fVar49 <= fVar18 - extraout_var) {
    (**(code **)(*plVar11 + 0x60))(plVar11,PTR_DAT_0437a100);
  }
  (**(code **)(*(long *)*param_5 + 0x40))();
  auVar52._0_4_ = extraout_s0_00 * extraout_s0_00;
  auVar52._4_4_ = extraout_var_00 * extraout_var_00;
  auVar52._8_4_ = extraout_var_02 * extraout_var_02;
  auVar52._12_4_ = extraout_var_04 * extraout_var_04;
  auVar65 = NEON_ext(auVar52,auVar52,8,1);
  fVar49 = auVar65._0_4_ + auVar52._0_4_;
  fVar60 = auVar65._4_4_ + auVar52._4_4_;
  fVar18 = fVar49 + fVar60;
  fVar49 = fVar49 + fVar60;
  auVar53._8_8_ = CONCAT44(fVar49,fVar18);
  auVar53._0_8_ = CONCAT44(fVar49,fVar18);
  auVar65 = NEON_frsqrte(auVar53,4);
  auVar73._0_4_ = auVar65._0_4_ * fVar18;
  auVar73._4_4_ = auVar65._4_4_ * fVar49;
  auVar73._8_4_ = auVar65._8_4_ * fVar18;
  auVar73._12_4_ = auVar65._12_4_ * fVar49;
  auVar74 = NEON_frsqrts(auVar65,auVar73,4);
  auVar66._0_4_ = auVar65._0_4_ * auVar74._0_4_;
  auVar66._4_4_ = auVar65._4_4_ * auVar74._4_4_;
  auVar66._8_4_ = auVar65._8_4_ * auVar74._8_4_;
  auVar66._12_4_ = auVar65._12_4_ * auVar74._12_4_;
  auVar75._0_4_ = fVar18 * auVar66._0_4_;
  auVar75._4_4_ = fVar49 * auVar66._4_4_;
  auVar75._8_4_ = fVar18 * auVar66._8_4_;
  auVar75._12_4_ = fVar49 * auVar66._12_4_;
  iVar50 = -(uint)(fVar18 == 0.0);
  iVar61 = -(uint)(fVar49 == 0.0);
  iVar62 = -(uint)(fVar18 == 0.0);
  iVar63 = -(uint)(fVar49 == 0.0);
  auVar65 = NEON_frsqrts(auVar66,auVar75,4);
  fVar18 = extraout_s0_00 * auVar66._0_4_ * auVar65._0_4_;
  fVar49 = extraout_var_00 * auVar66._4_4_ * auVar65._4_4_;
  fVar60 = extraout_var_02 * auVar66._8_4_ * auVar65._8_4_;
  fVar24 = extraout_var_04 * auVar66._12_4_ * auVar65._12_4_;
  fVar51 = (float)CONCAT13((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18),
                           CONCAT12((byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10),
                                    CONCAT11((byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar50 >> 8),
                                             SUB41(fVar18,0) & ~(byte)iVar50)));
  auVar54._0_8_ =
       CONCAT17((byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18),
                CONCAT16((byte)((uint)fVar49 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10),
                         CONCAT15((byte)((uint)fVar49 >> 8) & ~(byte)((uint)iVar61 >> 8),
                                  CONCAT14(SUB41(fVar49,0) & ~(byte)iVar61,fVar51))));
  auVar54[8] = SUB41(fVar60,0) & ~(byte)iVar62;
  auVar54[9] = (byte)((uint)fVar60 >> 8) & ~(byte)((uint)iVar62 >> 8);
  auVar54[10] = (byte)((uint)fVar60 >> 0x10) & ~(byte)((uint)iVar62 >> 0x10);
  auVar54[0xb] = (byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar62 >> 0x18);
  auVar54[0xc] = SUB41(fVar24,0) & ~(byte)iVar63;
  auVar54[0xd] = (byte)((uint)fVar24 >> 8) & ~(byte)((uint)iVar63 >> 8);
  auVar54[0xe] = (byte)((uint)fVar24 >> 0x10) & ~(byte)((uint)iVar63 >> 0x10);
  auVar54[0xf] = (byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar63 >> 0x18);
  auVar67._0_4_ =
       (float)CONCAT13(uVar29,CONCAT12(uVar27,CONCAT11(uVar26,uVar25))) *
       (float)CONCAT13(uVar29,CONCAT12(uVar27,CONCAT11(uVar26,uVar25)));
  auVar67._4_4_ =
       (float)CONCAT13(uVar35,CONCAT12(uVar31,CONCAT11(uVar42,uVar41))) *
       (float)CONCAT13(uVar35,CONCAT12(uVar31,CONCAT11(uVar42,uVar41)));
  auVar67._8_4_ =
       (float)CONCAT13(uVar36,CONCAT12(uVar34,CONCAT11(uVar33,uVar32))) *
       (float)CONCAT13(uVar36,CONCAT12(uVar34,CONCAT11(uVar33,uVar32)));
  auVar67._12_4_ =
       (float)CONCAT13(uVar40,CONCAT12(uVar37,CONCAT11(uVar39,uVar38))) *
       (float)CONCAT13(uVar40,CONCAT12(uVar37,CONCAT11(uVar39,uVar38)));
  auVar65 = NEON_ext(auVar67,auVar67,8,1);
  fVar49 = auVar65._0_4_ + auVar67._0_4_;
  fVar60 = auVar65._4_4_ + auVar67._4_4_;
  fVar18 = fVar49 + fVar60;
  fVar49 = fVar49 + fVar60;
  auVar68._8_8_ = CONCAT44(fVar49,fVar18);
  auVar68._0_8_ = CONCAT44(fVar49,fVar18);
  auVar65 = NEON_frsqrte(auVar68,4);
  auVar83._0_4_ = auVar65._0_4_ * fVar18;
  auVar83._4_4_ = auVar65._4_4_ * fVar49;
  auVar83._8_4_ = auVar65._8_4_ * fVar18;
  auVar83._12_4_ = auVar65._12_4_ * fVar49;
  auVar74 = NEON_frsqrts(auVar65,auVar83,4);
  auVar76._0_4_ = auVar65._0_4_ * auVar74._0_4_;
  auVar76._4_4_ = auVar65._4_4_ * auVar74._4_4_;
  auVar76._8_4_ = auVar65._8_4_ * auVar74._8_4_;
  auVar76._12_4_ = auVar65._12_4_ * auVar74._12_4_;
  auVar84._0_4_ = fVar18 * auVar76._0_4_;
  auVar84._4_4_ = fVar49 * auVar76._4_4_;
  auVar84._8_4_ = fVar18 * auVar76._8_4_;
  auVar84._12_4_ = fVar49 * auVar76._12_4_;
  iVar63 = -(uint)(fVar18 == 0.0);
  iVar70 = -(uint)(fVar49 == 0.0);
  iVar71 = -(uint)(fVar18 == 0.0);
  auVar65 = NEON_frsqrts(auVar76,auVar84,4);
  fVar49 = (float)CONCAT13(uVar29,CONCAT12(uVar27,CONCAT11(uVar26,uVar25))) *
           auVar76._0_4_ * auVar65._0_4_;
  fVar18 = (float)CONCAT13(uVar35,CONCAT12(uVar31,CONCAT11(uVar42,uVar41))) *
           auVar76._4_4_ * auVar65._4_4_;
  fVar60 = (float)CONCAT13(uVar36,CONCAT12(uVar34,CONCAT11(uVar33,uVar32))) *
           auVar76._8_4_ * auVar65._8_4_;
  bVar28 = (byte)((uint)fVar49 >> 0x10) & ~(byte)((uint)iVar63 >> 0x10);
  bVar30 = (byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar63 >> 0x18);
  fVar19 = param_3._0_4_;
  auVar77._0_4_ = fVar19 * fVar19;
  fVar22 = param_3._4_4_;
  auVar77._4_4_ = fVar22 * fVar22;
  fVar23 = param_3._8_4_;
  auVar77._8_4_ = fVar23 * fVar23;
  auVar77._12_4_ = param_3._12_4_ * param_3._12_4_;
  auVar65 = NEON_ext(auVar77,auVar77,8,1);
  fVar72 = auVar65._0_4_ + auVar77._0_4_;
  fVar80 = auVar65._4_4_ + auVar77._4_4_;
  fVar24 = fVar72 + fVar80;
  fVar72 = fVar72 + fVar80;
  auVar78._8_8_ = CONCAT44(fVar72,fVar24);
  auVar78._0_8_ = CONCAT44(fVar72,fVar24);
  auVar65 = NEON_frsqrte(auVar78,4);
  auVar88._0_4_ = auVar65._0_4_ * fVar24;
  auVar88._4_4_ = auVar65._4_4_ * fVar72;
  auVar88._8_4_ = auVar65._8_4_ * fVar24;
  auVar88._12_4_ = auVar65._12_4_ * fVar72;
  auVar74 = NEON_frsqrts(auVar65,auVar88,4);
  auVar85._0_4_ = auVar65._0_4_ * auVar74._0_4_;
  auVar85._4_4_ = auVar65._4_4_ * auVar74._4_4_;
  auVar85._8_4_ = auVar65._8_4_ * auVar74._8_4_;
  auVar85._12_4_ = auVar65._12_4_ * auVar74._12_4_;
  auVar89._0_4_ = fVar24 * auVar85._0_4_;
  auVar89._4_4_ = fVar72 * auVar85._4_4_;
  auVar89._8_4_ = fVar24 * auVar85._8_4_;
  auVar89._12_4_ = fVar72 * auVar85._12_4_;
  auVar65 = NEON_frsqrts(auVar85,auVar89,4);
  fVar19 = fVar19 * auVar85._0_4_ * auVar65._0_4_;
  fVar22 = fVar22 * auVar85._4_4_ * auVar65._4_4_;
  fVar23 = fVar23 * auVar85._8_4_ * auVar65._8_4_;
  iVar50 = -(uint)(fVar24 == 0.0);
  iVar61 = -(uint)(fVar72 == 0.0);
  iVar62 = -(uint)(fVar24 == 0.0);
  uVar43 = CONCAT16((byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10),
                    CONCAT15((byte)((uint)fVar22 >> 8) & ~(byte)((uint)iVar61 >> 8),
                             CONCAT14(SUB41(fVar22,0) & ~(byte)iVar61,
                                      CONCAT13((byte)((uint)fVar19 >> 0x18) &
                                               ~(byte)((uint)iVar50 >> 0x18),
                                               CONCAT12((byte)((uint)fVar19 >> 0x10) &
                                                        ~(byte)((uint)iVar50 >> 0x10),
                                                        CONCAT11((byte)((uint)fVar19 >> 8) &
                                                                 ~(byte)((uint)iVar50 >> 8),
                                                                 SUB41(fVar19,0) & ~(byte)iVar50))))
                            ));
  bVar48 = (byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18);
  auVar44._0_8_ = CONCAT17(bVar48,uVar43);
  auVar44[8] = SUB41(fVar23,0) & ~(byte)iVar62;
  auVar44[9] = (byte)((uint)fVar23 >> 8) & ~(byte)((uint)iVar62 >> 8);
  auVar44[10] = (byte)((uint)fVar23 >> 0x10) & ~(byte)((uint)iVar62 >> 0x10);
  auVar44[0xb] = (byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar62 >> 0x18);
  uVar81 = NEON_ext(auVar54._0_8_,auVar44._0_8_,4,1);
  auVar65 = NEON_ext(auVar54,auVar54,8,1);
  fVar18 = (float)CONCAT13((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18),
                           CONCAT12((byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10),
                                    CONCAT11((byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar70 >> 8),
                                             SUB41(fVar18,0) & ~(byte)iVar70)));
  fVar22 = auVar44._8_4_;
  auVar74 = NEON_fmov(0x3f800000,4);
  fVar24 = (float)_DAT_03889820 * fVar51 + (float)_DAT_0388a450 * fVar18 +
           (float)_DAT_03889eb0 * fVar22 + auVar74._0_4_;
  fVar72 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar51 +
           (float)((ulong)_DAT_0388a450 >> 0x20) * fVar18 +
           (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar22 + auVar74._4_4_;
  fVar19 = (float)_UNK_03889828 * fVar51 + (float)_UNK_0388a458 * fVar18 +
           (float)_UNK_03889eb8 * fVar22 + auVar74._8_4_;
  fVar22 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar51 +
           (float)((ulong)_UNK_0388a458 >> 0x20) * fVar18 +
           (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar22 + auVar74._12_4_;
  fVar18 = (float)CONCAT13((byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar71 >> 0x18),
                           CONCAT12((byte)((uint)fVar60 >> 0x10) & ~(byte)((uint)iVar71 >> 0x10),
                                    CONCAT11((byte)((uint)fVar60 >> 8) & ~(byte)((uint)iVar71 >> 8),
                                             SUB41(fVar60,0) & ~(byte)iVar71)));
  uVar5 = CONCAT11((byte)((uint)fVar49 >> 8) & ~(byte)((uint)iVar63 >> 8),
                   SUB41(fVar49,0) & ~(byte)iVar63);
  auVar45._0_4_ = (float)uVar81 + (float)CONCAT13(bVar30,CONCAT12(bVar28,uVar5));
  fVar49 = (float)((ulong)uVar81 >> 0x20);
  auVar45._4_4_ = fVar49 + auVar65._0_4_;
  uVar9 = (undefined3)((uint7)uVar43 >> 0x20);
  auVar45._8_4_ = fVar18 + (float)CONCAT13(bVar48,uVar9);
  auVar45._12_4_ = 0;
  auVar55._0_4_ = (float)uVar81 - (float)CONCAT13(bVar30,CONCAT12(bVar28,uVar5));
  auVar55._4_4_ = fVar49 - auVar65._0_4_;
  auVar55._8_4_ = fVar18 - (float)CONCAT13(bVar48,uVar9);
  auVar55._12_4_ = 0;
  uVar12 = a64_TBL(ZEXT816(0),auVar45,auVar55,DAT_0388a888);
  uVar81 = a64_TBL(ZEXT816(0),auVar45,auVar55,DAT_0388a710);
  auVar79._8_8_ = uVar81;
  auVar79._0_8_ = uVar12 & 0xffffffff00000000;
  uVar64 = a64_TBL(ZEXT816(0),auVar45,auVar55,DAT_0388a758);
  auVar91._4_12_ = auVar79._4_12_;
  auVar91._0_4_ = fVar24;
  auVar69._0_8_ = a64_TBL(ZEXT816(0),auVar45,auVar55,DAT_0388a880);
  uVar82 = a64_TBL(ZEXT816(0),auVar45,auVar55,DAT_0388a640);
  auVar86._0_8_ = a64_TBL(ZEXT816(0),auVar45,auVar55,DAT_0388a700);
  uVar81 = a64_TBL(ZEXT816(0),auVar45,auVar55,DAT_0388a590);
  auVar56._4_4_ = fVar72;
  auVar56._0_4_ = fVar72;
  auVar56._8_4_ = fVar72;
  auVar56._12_4_ = fVar72;
  auVar69._12_4_ = (undefined4)((ulong)uVar82 >> 0x20);
  auVar69._8_4_ = fVar19;
  auVar86._8_8_ = uVar81;
  auVar93._4_4_ = fVar24;
  auVar93._0_4_ = fVar24;
  auVar93._8_4_ = fVar24;
  auVar93._12_4_ = fVar24;
  auVar90._0_8_ = CONCAT44(-(uint)(fVar24 <= fVar72),-(uint)(fVar24 <= fVar72));
  auVar90._8_4_ = -(uint)(fVar24 <= fVar72);
  auVar90._12_4_ = -(uint)(fVar24 <= fVar72);
  auVar92._8_8_ = auVar90._8_8_;
  auVar92._0_8_ = auVar90._0_8_;
  auVar65[4] = SUB41(fVar72,0);
  auVar65._0_4_ = (int)uVar12;
  auVar65[5] = (char)((uint)fVar72 >> 8);
  auVar65[6] = (char)((uint)fVar72 >> 0x10);
  auVar65[7] = (char)((uint)fVar72 >> 0x18);
  auVar65[8] = (char)uVar64;
  auVar65[9] = (char)((ulong)uVar64 >> 8);
  auVar65[10] = (char)((ulong)uVar64 >> 0x10);
  auVar65[0xb] = (char)((ulong)uVar64 >> 0x18);
  auVar65[0xc] = (char)((ulong)uVar64 >> 0x20);
  auVar65[0xd] = (char)((ulong)uVar64 >> 0x28);
  auVar65[0xe] = (char)((ulong)uVar64 >> 0x30);
  auVar65[0xf] = (char)((ulong)uVar64 >> 0x38);
  auVar91 = auVar91 ^ (auVar91 ^ auVar65) & auVar90;
  uVar25 = SUB41(fVar19,0);
  uVar26 = (undefined1)((uint)fVar19 >> 8);
  uVar27 = (undefined1)((uint)fVar19 >> 0x10);
  uVar29 = (undefined1)((uint)fVar19 >> 0x18);
  auVar87._0_12_ = auVar86._0_12_;
  auVar87._12_4_ = fVar22;
  auVar93 = auVar93 ^ (auVar93 ^ auVar56) & auVar92;
  auVar46._0_8_ = CONCAT44(-(uint)(auVar93._4_4_ <= fVar19),-(uint)(auVar93._0_4_ <= fVar19));
  auVar46._8_4_ = -(uint)(auVar93._8_4_ <= fVar19);
  auVar46._12_4_ = -(uint)(auVar93._12_4_ <= fVar19);
  auVar57._8_8_ = auVar46._8_8_;
  auVar57._0_8_ = auVar46._0_8_;
  auVar91 = auVar91 ^ (auVar91 ^ auVar69) & auVar46;
  auVar74[4] = uVar25;
  auVar74._0_4_ = fVar19;
  auVar74[5] = uVar26;
  auVar74[6] = uVar27;
  auVar74[7] = uVar29;
  auVar74[8] = uVar25;
  auVar74[9] = uVar26;
  auVar74[10] = uVar27;
  auVar74[0xb] = uVar29;
  auVar74[0xc] = uVar25;
  auVar74[0xd] = uVar26;
  auVar74[0xe] = uVar27;
  auVar74[0xf] = uVar29;
  auVar93 = auVar93 ^ (auVar93 ^ auVar74) & auVar57;
  auVar20._0_4_ = -(uint)(auVar93._0_4_ <= fVar22);
  auVar20._4_4_ = -(uint)(auVar93._4_4_ <= fVar22);
  auVar20._8_4_ = -(uint)(auVar93._8_4_ <= fVar22);
  auVar20._12_4_ = -(uint)(auVar93._12_4_ <= fVar22);
  auVar91 = auVar91 ^ (auVar91 ^ auVar87) & auVar20;
  fVar72 = auVar91._0_4_;
  fVar18 = fVar72 * fVar72;
  fVar19 = auVar91._4_4_;
  fVar49 = fVar19 * fVar19;
  uVar25 = (undefined1)((uint)fVar49 >> 8);
  uVar26 = (undefined1)((uint)fVar49 >> 0x10);
  uVar27 = (undefined1)((uint)fVar49 >> 0x18);
  fVar22 = auVar91._8_4_;
  fVar60 = fVar22 * fVar22;
  uVar29 = (undefined1)((uint)fVar60 >> 8);
  uVar35 = (undefined1)((uint)fVar60 >> 0x10);
  uVar37 = (undefined1)((uint)fVar60 >> 0x18);
  fVar23 = auVar91._12_4_;
  fVar24 = fVar23 * fVar23;
  uVar40 = (undefined1)((uint)fVar24 >> 8);
  uVar41 = (undefined1)((uint)fVar24 >> 0x10);
  uVar42 = (undefined1)((uint)fVar24 >> 0x18);
  auVar6[4] = SUB41(fVar49,0);
  auVar6._0_4_ = fVar18;
  auVar6[5] = uVar25;
  auVar6[6] = uVar26;
  auVar6[7] = uVar27;
  auVar6[8] = SUB41(fVar60,0);
  auVar6[9] = uVar29;
  auVar6[10] = uVar35;
  auVar6[0xb] = uVar37;
  auVar6[0xc] = SUB41(fVar24,0);
  auVar6[0xd] = uVar40;
  auVar6[0xe] = uVar41;
  auVar6[0xf] = uVar42;
  auVar7[4] = SUB41(fVar49,0);
  auVar7._0_4_ = fVar18;
  auVar7[5] = uVar25;
  auVar7[6] = uVar26;
  auVar7[7] = uVar27;
  auVar7[8] = SUB41(fVar60,0);
  auVar7[9] = uVar29;
  auVar7[10] = uVar35;
  auVar7[0xb] = uVar37;
  auVar7[0xc] = SUB41(fVar24,0);
  auVar7[0xd] = uVar40;
  auVar7[0xe] = uVar41;
  auVar7[0xf] = uVar42;
  auVar65 = NEON_ext(auVar6,auVar7,8,1);
  fVar18 = auVar65._0_4_ + fVar18;
  fVar49 = auVar65._4_4_ + fVar49;
  fVar60 = fVar18 + fVar49;
  fVar18 = fVar18 + fVar49;
  uVar25 = SUB41(fVar18,0);
  uVar26 = (undefined1)((uint)fVar18 >> 8);
  uVar27 = (undefined1)((uint)fVar18 >> 0x10);
  uVar29 = (undefined1)((uint)fVar18 >> 0x18);
  auVar8[4] = uVar25;
  auVar8._0_4_ = fVar60;
  auVar8[5] = uVar26;
  auVar8[6] = uVar27;
  auVar8[7] = uVar29;
  auVar8[8] = SUB41(fVar60,0);
  auVar8[9] = (char)((uint)fVar60 >> 8);
  auVar8[10] = (char)((uint)fVar60 >> 0x10);
  auVar8[0xb] = (char)((uint)fVar60 >> 0x18);
  auVar8[0xc] = uVar25;
  auVar8[0xd] = uVar26;
  auVar8[0xe] = uVar27;
  auVar8[0xf] = uVar29;
  auVar65 = NEON_frsqrte(auVar8,4);
  auVar58._0_4_ = auVar65._0_4_ * fVar60;
  auVar58._4_4_ = auVar65._4_4_ * fVar18;
  auVar58._8_4_ = auVar65._8_4_ * fVar60;
  uVar5 = (undefined2)(CONCAT15(uVar26,CONCAT14(uVar25,fVar60)) >> 0x20);
  auVar58._12_4_ = auVar65._12_4_ * (float)CONCAT13(uVar29,CONCAT12(uVar27,uVar5));
  auVar74 = NEON_frsqrts(auVar65,auVar58,4);
  auVar47._0_4_ = auVar65._0_4_ * auVar74._0_4_;
  auVar47._4_4_ = auVar65._4_4_ * auVar74._4_4_;
  auVar47._8_4_ = auVar65._8_4_ * auVar74._8_4_;
  auVar47._12_4_ = auVar65._12_4_ * auVar74._12_4_;
  auVar59._0_4_ = fVar60 * auVar47._0_4_;
  auVar59._4_4_ = fVar18 * auVar47._4_4_;
  auVar59._8_4_ = fVar60 * auVar47._8_4_;
  auVar59._12_4_ = (float)CONCAT13(uVar29,CONCAT12(uVar27,uVar5)) * auVar47._12_4_;
  iVar50 = -(uint)(fVar60 == 0.0);
  iVar61 = -(uint)(fVar18 == 0.0);
  iVar62 = -(uint)(fVar60 == 0.0);
  iVar63 = -(uint)((float)CONCAT13(uVar29,CONCAT12(uVar27,uVar5)) == 0.0);
  auVar65 = NEON_frsqrts(auVar47,auVar59,4);
  fVar72 = auVar47._0_4_ * auVar65._0_4_ * fVar72;
  fVar19 = auVar47._4_4_ * auVar65._4_4_ * fVar19;
  fVar22 = auVar47._8_4_ * auVar65._8_4_ * fVar22;
  fVar23 = auVar47._12_4_ * auVar65._12_4_ * fVar23;
  auVar21._0_8_ =
       CONCAT17((byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18),
                CONCAT16((byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10),
                         CONCAT15((byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar61 >> 8),
                                  CONCAT14(SUB41(fVar19,0) & ~(byte)iVar61,
                                           CONCAT13((byte)((uint)fVar72 >> 0x18) &
                                                    ~(byte)((uint)iVar50 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar72 >> 0x10) &
                                                             ~(byte)((uint)iVar50 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar72 >> 8) &
                                                                      ~(byte)((uint)iVar50 >> 8),
                                                                      SUB41(fVar72,0) &
                                                                      ~(byte)iVar50)))))));
  auVar21[8] = SUB41(fVar22,0) & ~(byte)iVar62;
  auVar21[9] = (byte)((uint)fVar22 >> 8) & ~(byte)((uint)iVar62 >> 8);
  auVar21[10] = (byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar62 >> 0x10);
  auVar21[0xb] = (byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar62 >> 0x18);
  auVar21[0xc] = SUB41(fVar23,0) & ~(byte)iVar63;
  auVar21[0xd] = (byte)((uint)fVar23 >> 8) & ~(byte)((uint)iVar63 >> 8);
  auVar21[0xe] = (byte)((uint)fVar23 >> 0x10) & ~(byte)((uint)iVar63 >> 0x10);
  auVar21[0xf] = (byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar63 >> 0x18);
  *(long *)(param_4 + 0x118) = auVar21._8_8_;
  *(undefined8 *)(param_4 + 0x110) = auVar21._0_8_;
  (**(code **)(*(long *)*param_5 + 0x40))();
  *(float *)(param_4 + 0xe8) = fStack_48 - auVar65._8_4_;
  *(float *)(param_4 + 0xec) = fStack_44 - auVar65._12_4_;
  *(float *)(param_4 + 0xe0) = (float)local_50 - auVar65._0_4_;
  *(float *)(param_4 + 0xe4) = local_50._4_4_ - auVar65._4_4_;
  uVar81 = *(undefined8 *)(puVar10 + 8);
  *(undefined8 *)(param_4 + 0xd0) = *(undefined8 *)puVar10;
  *(undefined8 *)(param_4 + 0xd8) = uVar81;
  *(undefined4 *)(param_4 + 0xf8) = *(undefined4 *)(param_4 + 0xf8);
  *(undefined4 *)(param_4 + 0xfc) = *(undefined4 *)(param_4 + 0xfc);
  *(ulong *)(param_4 + 0xf0) = CONCAT44(param_1,*(undefined4 *)(param_4 + 0xf0));
  return;
}


