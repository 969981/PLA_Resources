/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019bf99c; name: FUN_019bf99c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019bf99c(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  float fVar23;
  float fVar24;
  undefined2 uVar25;
  float extraout_s0;
  float extraout_s0_00;
  undefined1 auVar26 [12];
  byte bVar31;
  byte bVar33;
  float extraout_var;
  byte bVar34;
  byte bVar35;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar32;
  byte bVar36;
  float extraout_var_01;
  byte bVar40;
  float extraout_var_03;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float extraout_var_00;
  float extraout_var_02;
  float extraout_var_04;
  undefined1 auVar30 [16];
  undefined1 auVar41 [12];
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  int iVar45;
  float fVar54;
  float fVar57;
  undefined1 auVar47 [12];
  undefined8 uVar46;
  undefined1 auVar48 [12];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar55;
  undefined1 auVar52 [16];
  int iVar56;
  int iVar58;
  int iVar59;
  undefined1 auVar53 [16];
  float fVar60;
  undefined8 uVar61;
  undefined1 auVar62 [16];
  float fVar69;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar70;
  undefined8 uVar71;
  int iVar83;
  undefined1 auVar72 [16];
  float fVar81;
  undefined1 auVar73 [16];
  int iVar82;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar84;
  float fVar89;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  int iVar90;
  int iVar94;
  undefined8 uVar91;
  int iVar95;
  undefined1 auVar92 [16];
  int iVar96;
  undefined1 auVar93 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined8 uVar100;
  undefined8 uVar101;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined8 uVar106;
  undefined8 uVar107;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined8 uVar112;
  undefined8 uVar113;
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined8 uVar118;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined1 local_e0;
  undefined1 uStack_df;
  undefined1 uStack_de;
  undefined1 uStack_dd;
  undefined8 local_d0;
  char *pcStack_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long *local_98;
  long *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar16 = PTR_DAT_04379ff0;
  puVar15 = PTR_DAT_04379fe8;
  puVar14 = PTR_DAT_043795e0;
  puVar13 = PTR_DAT_043795d8;
  puVar12 = PTR_DAT_043794d8;
  puVar11 = PTR_DAT_043794d0;
  uVar106 = param_4._8_8_;
  uVar18 = param_4._0_8_;
  fVar69 = param_3._12_4_;
  fVar57 = param_3._8_4_;
  fVar54 = param_3._4_4_;
  fVar43 = param_3._0_4_;
  fVar23 = param_2._12_4_;
  fVar55 = param_2._8_4_;
  fVar44 = param_2._4_4_;
  fVar24 = param_2._0_4_;
  lVar20 = *(long *)(param_5 + 0xa8);
  if ((lVar20 != 0) && (*(int *)(lVar20 + 0xc) != 0)) {
    piVar1 = (int *)(lVar20 + 0xc);
    iVar45 = *(int *)(lVar20 + 0xc);
    do {
      plVar22 = *(long **)(lVar20 + 0x10);
      if (((*puVar15 & 1) == 0) && (iVar56 = __cxa_guard_acquire(puVar15), iVar56 != 0)) {
        if (((*puVar13 & 1) == 0) && (iVar56 = __cxa_guard_acquire(puVar13), iVar56 != 0)) {
          if (((*puVar11 & 1) == 0) && (iVar56 = __cxa_guard_acquire(puVar11), iVar56 != 0)) {
            uVar46 = FUN_0087f8f0();
            *(undefined8 *)puVar12 = uVar46;
            __cxa_guard_release(puVar11);
          }
          *(undefined **)puVar14 = puVar12;
          __cxa_guard_release(puVar13);
        }
        *(undefined **)puVar16 = puVar14;
        __cxa_guard_release(puVar15);
      }
      while( true ) {
        if (plVar22 == (long *)0x0) goto LAB_019bf9c8;
        if (plVar22 == (long *)puVar16) break;
        plVar22 = (long *)*plVar22;
      }
      iVar56 = *piVar1;
      if (iVar56 == iVar45) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar45 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        puVar10 = PTR_DAT_043794b8;
        puVar9 = PTR_DAT_043794b0;
        if (cVar3 != '\0') goto LAB_019bfa6c;
        lVar20 = *(long *)(lVar20 + 0x18);
        if (lVar20 != 0) {
          lVar19 = *(long *)(lVar20 + 0x158);
          plVar22 = (long *)(lVar20 + -0x50);
          piVar1 = (int *)(lVar19 + 0xc);
          iVar45 = *(int *)(lVar19 + 0xc);
          do {
            while( true ) {
              plVar21 = *(long **)(lVar19 + 0x10);
              if (((*puVar9 & 1) == 0) && (iVar56 = __cxa_guard_acquire(puVar9), iVar56 != 0)) {
                if (((*PTR_DAT_043794c0 & 1) == 0) &&
                   (iVar56 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar56 != 0)) {
                  if (((*puVar11 & 1) == 0) && (iVar56 = __cxa_guard_acquire(puVar11), iVar56 != 0))
                  {
                    uVar46 = FUN_0087f8f0();
                    *(undefined8 *)puVar12 = uVar46;
                    __cxa_guard_release(puVar11);
                  }
                  *(undefined **)PTR_DAT_043794c8 = puVar12;
                  __cxa_guard_release(PTR_DAT_043794c0);
                }
                *(undefined **)puVar10 = PTR_DAT_043794c8;
                __cxa_guard_release(puVar9);
              }
              for (; plVar21 != (long *)puVar10; plVar21 = (long *)*plVar21) {
              }
              iVar56 = *piVar1;
              if (iVar56 == iVar45) break;
              ClearExclusiveLocal();
              iVar45 = iVar56;
            }
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar45 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            iVar45 = iVar56;
          } while (cVar3 != '\0');
          lVar19 = *(long *)(lVar19 + 0x18);
          plVar21 = (long *)0x0;
          if (lVar19 != 0) {
            plVar21 = (long *)(lVar19 + -0x50);
          }
          (**(code **)(*plVar21 + 0x40))(plVar21);
          local_80 = uVar18;
          uStack_78 = uVar106;
          if ((lVar19 != 0) && (uVar17 = FUN_02a43a5c(plVar21[0xb]), (uVar17 & 1) != 0)) {
            (**(code **)(*plVar21 + 0x20))(plVar21);
          }
          lVar19 = *(long *)(lVar20 + 0x158);
          piVar1 = (int *)(lVar19 + 0xc);
          iVar45 = *(int *)(lVar19 + 0xc);
          do {
            while( true ) {
              plVar21 = *(long **)(lVar19 + 0x10);
              if (((*puVar9 & 1) == 0) && (iVar56 = __cxa_guard_acquire(puVar9), iVar56 != 0)) {
                if (((*PTR_DAT_043794c0 & 1) == 0) &&
                   (iVar56 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar56 != 0)) {
                  if (((*puVar11 & 1) == 0) && (iVar56 = __cxa_guard_acquire(puVar11), iVar56 != 0))
                  {
                    uVar18 = FUN_0087f8f0();
                    *(undefined8 *)puVar12 = uVar18;
                    __cxa_guard_release(puVar11);
                  }
                  *(undefined **)PTR_DAT_043794c8 = puVar12;
                  __cxa_guard_release(PTR_DAT_043794c0);
                }
                *(undefined **)puVar10 = PTR_DAT_043794c8;
                __cxa_guard_release(puVar9);
              }
              for (; plVar21 != (long *)puVar10; plVar21 = (long *)*plVar21) {
              }
              iVar56 = *piVar1;
              if (iVar56 == iVar45) break;
              ClearExclusiveLocal();
              iVar45 = iVar56;
            }
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar45 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            iVar45 = iVar56;
          } while (cVar3 != '\0');
          lVar19 = *(long *)(lVar19 + 0x18);
          plVar21 = (long *)0x0;
          if (lVar19 != 0) {
            plVar21 = (long *)(lVar19 + -0x50);
          }
          (**(code **)(*plVar21 + 0x40))(plVar21);
          uVar18 = DAT_0388a880;
          auVar62._0_4_ = extraout_s0 * extraout_s0;
          auVar62._4_4_ = extraout_var * extraout_var;
          auVar62._8_4_ = extraout_var_01 * extraout_var_01;
          auVar62._12_4_ = extraout_var_03 * extraout_var_03;
          auVar72._0_4_ = fVar24 * fVar24;
          auVar72._4_4_ = fVar44 * fVar44;
          auVar72._8_4_ = fVar55 * fVar55;
          auVar72._12_4_ = fVar23 * fVar23;
          auVar85._0_4_ = fVar43 * fVar43;
          auVar85._4_4_ = fVar54 * fVar54;
          auVar85._8_4_ = fVar57 * fVar57;
          auVar85._12_4_ = fVar69 * fVar69;
          auVar29 = NEON_ext(auVar62,auVar62,8,1);
          auVar79 = NEON_ext(auVar72,auVar72,8,1);
          auVar102 = NEON_ext(auVar85,auVar85,8,1);
          fVar60 = auVar29._0_4_ + auVar62._0_4_;
          fVar69 = auVar29._4_4_ + auVar62._4_4_;
          fVar70 = auVar79._0_4_ + auVar72._0_4_;
          fVar81 = auVar79._4_4_ + auVar72._4_4_;
          fVar84 = auVar102._0_4_ + auVar85._0_4_;
          fVar89 = auVar102._4_4_ + auVar85._4_4_;
          fVar23 = fVar60 + fVar69;
          fVar60 = fVar60 + fVar69;
          fVar69 = fVar70 + fVar81;
          fVar70 = fVar70 + fVar81;
          fVar81 = fVar84 + fVar89;
          fVar84 = fVar84 + fVar89;
          auVar92._8_8_ = CONCAT44(fVar60,fVar23);
          auVar92._0_8_ = CONCAT44(fVar60,fVar23);
          auVar73._8_8_ = CONCAT44(fVar70,fVar69);
          auVar73._0_8_ = CONCAT44(fVar70,fVar69);
          auVar63._8_8_ = CONCAT44(fVar84,fVar81);
          auVar63._0_8_ = CONCAT44(fVar84,fVar81);
          auVar29 = NEON_frsqrte(auVar92,4);
          auVar79 = NEON_frsqrte(auVar73,4);
          auVar102 = NEON_frsqrte(auVar63,4);
          auVar108._0_4_ = auVar29._0_4_ * fVar23;
          auVar108._4_4_ = auVar29._4_4_ * fVar60;
          auVar108._8_4_ = auVar29._8_4_ * fVar23;
          auVar108._12_4_ = auVar29._12_4_ * fVar60;
          auVar114._0_4_ = auVar79._0_4_ * fVar69;
          auVar114._4_4_ = auVar79._4_4_ * fVar70;
          auVar114._8_4_ = auVar79._8_4_ * fVar69;
          auVar114._12_4_ = auVar79._12_4_ * fVar70;
          auVar119._0_4_ = auVar102._0_4_ * fVar81;
          auVar119._4_4_ = auVar102._4_4_ * fVar84;
          auVar119._8_4_ = auVar102._8_4_ * fVar81;
          auVar119._12_4_ = auVar102._12_4_ * fVar84;
          auVar109 = NEON_frsqrts(auVar29,auVar108,4);
          auVar115 = NEON_frsqrts(auVar79,auVar114,4);
          auVar120 = NEON_frsqrts(auVar102,auVar119,4);
          auVar86._0_4_ = auVar29._0_4_ * auVar109._0_4_;
          auVar86._4_4_ = auVar29._4_4_ * auVar109._4_4_;
          auVar86._8_4_ = auVar29._8_4_ * auVar109._8_4_;
          auVar86._12_4_ = auVar29._12_4_ * auVar109._12_4_;
          auVar97._0_4_ = auVar79._0_4_ * auVar115._0_4_;
          auVar97._4_4_ = auVar79._4_4_ * auVar115._4_4_;
          auVar97._8_4_ = auVar79._8_4_ * auVar115._8_4_;
          auVar97._12_4_ = auVar79._12_4_ * auVar115._12_4_;
          auVar103._0_4_ = auVar102._0_4_ * auVar120._0_4_;
          auVar103._4_4_ = auVar102._4_4_ * auVar120._4_4_;
          auVar103._8_4_ = auVar102._8_4_ * auVar120._8_4_;
          auVar103._12_4_ = auVar102._12_4_ * auVar120._12_4_;
          auVar110._0_4_ = fVar23 * auVar86._0_4_;
          auVar110._4_4_ = fVar60 * auVar86._4_4_;
          auVar110._8_4_ = fVar23 * auVar86._8_4_;
          auVar110._12_4_ = fVar60 * auVar86._12_4_;
          auVar116._0_4_ = fVar69 * auVar97._0_4_;
          auVar116._4_4_ = fVar70 * auVar97._4_4_;
          auVar116._8_4_ = fVar69 * auVar97._8_4_;
          auVar116._12_4_ = fVar70 * auVar97._12_4_;
          auVar121._0_4_ = fVar81 * auVar103._0_4_;
          auVar121._4_4_ = fVar84 * auVar103._4_4_;
          auVar121._8_4_ = fVar81 * auVar103._8_4_;
          auVar121._12_4_ = fVar84 * auVar103._12_4_;
          iVar45 = -(uint)(fVar81 == 0.0);
          iVar56 = -(uint)(fVar84 == 0.0);
          iVar58 = -(uint)(fVar81 == 0.0);
          auVar29 = NEON_frsqrts(auVar86,auVar110,4);
          auVar79 = NEON_frsqrts(auVar97,auVar116,4);
          auVar102 = NEON_frsqrts(auVar103,auVar121,4);
          iVar90 = -(uint)(fVar23 == 0.0);
          iVar94 = -(uint)(fVar60 == 0.0);
          iVar95 = -(uint)(fVar23 == 0.0);
          iVar96 = -(uint)(fVar60 == 0.0);
          iVar59 = -(uint)(fVar69 == 0.0);
          iVar82 = -(uint)(fVar70 == 0.0);
          iVar83 = -(uint)(fVar69 == 0.0);
          fVar23 = extraout_s0 * auVar86._0_4_ * auVar29._0_4_;
          fVar69 = extraout_var * auVar86._4_4_ * auVar29._4_4_;
          fVar81 = extraout_var_01 * auVar86._8_4_ * auVar29._8_4_;
          fVar60 = extraout_var_03 * auVar86._12_4_ * auVar29._12_4_;
          fVar23 = (float)CONCAT13((byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar90 >> 0x18),
                                   CONCAT12((byte)((uint)fVar23 >> 0x10) &
                                            ~(byte)((uint)iVar90 >> 0x10),
                                            CONCAT11((byte)((uint)fVar23 >> 8) &
                                                     ~(byte)((uint)iVar90 >> 8),
                                                     SUB41(fVar23,0) & ~(byte)iVar90)));
          auVar29._0_8_ =
               CONCAT17((byte)((uint)fVar69 >> 0x18) & ~(byte)((uint)iVar94 >> 0x18),
                        CONCAT16((byte)((uint)fVar69 >> 0x10) & ~(byte)((uint)iVar94 >> 0x10),
                                 CONCAT15((byte)((uint)fVar69 >> 8) & ~(byte)((uint)iVar94 >> 8),
                                          CONCAT14(SUB41(fVar69,0) & ~(byte)iVar94,fVar23))));
          auVar29[8] = SUB41(fVar81,0) & ~(byte)iVar95;
          auVar29[9] = (byte)((uint)fVar81 >> 8) & ~(byte)((uint)iVar95 >> 8);
          auVar29[10] = (byte)((uint)fVar81 >> 0x10) & ~(byte)((uint)iVar95 >> 0x10);
          auVar29[0xb] = (byte)((uint)fVar81 >> 0x18) & ~(byte)((uint)iVar95 >> 0x18);
          auVar29[0xc] = SUB41(fVar60,0) & ~(byte)iVar96;
          auVar29[0xd] = (byte)((uint)fVar60 >> 8) & ~(byte)((uint)iVar96 >> 8);
          auVar29[0xe] = (byte)((uint)fVar60 >> 0x10) & ~(byte)((uint)iVar96 >> 0x10);
          auVar29[0xf] = (byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar96 >> 0x18);
          fVar24 = fVar24 * auVar97._0_4_ * auVar79._0_4_;
          fVar44 = fVar44 * auVar97._4_4_ * auVar79._4_4_;
          fVar55 = fVar55 * auVar97._8_4_ * auVar79._8_4_;
          fVar43 = fVar43 * auVar103._0_4_ * auVar102._0_4_;
          fVar54 = fVar54 * auVar103._4_4_ * auVar102._4_4_;
          fVar57 = fVar57 * auVar103._8_4_ * auVar102._8_4_;
          auVar47._0_8_ =
               CONCAT17((byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar56 >> 0x18),
                        CONCAT16((byte)((uint)fVar54 >> 0x10) & ~(byte)((uint)iVar56 >> 0x10),
                                 CONCAT15((byte)((uint)fVar54 >> 8) & ~(byte)((uint)iVar56 >> 8),
                                          CONCAT14(SUB41(fVar54,0) & ~(byte)iVar56,
                                                   CONCAT13((byte)((uint)fVar43 >> 0x18) &
                                                            ~(byte)((uint)iVar45 >> 0x18),
                                                            CONCAT12((byte)((uint)fVar43 >> 0x10) &
                                                                     ~(byte)((uint)iVar45 >> 0x10),
                                                                     CONCAT11((byte)((uint)fVar43 >>
                                                                                    8) &
                                                                              ~(byte)((uint)iVar45
                                                                                     >> 8),
                                                                              SUB41(fVar43,0) &
                                                                              ~(byte)iVar45)))))));
          auVar47[8] = SUB41(fVar57,0) & ~(byte)iVar58;
          auVar47[9] = (byte)((uint)fVar57 >> 8) & ~(byte)((uint)iVar58 >> 8);
          auVar47[10] = (byte)((uint)fVar57 >> 0x10) & ~(byte)((uint)iVar58 >> 0x10);
          auVar47[0xb] = (byte)((uint)fVar57 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18);
          fVar24 = (float)CONCAT13((byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18),
                                   CONCAT12((byte)((uint)fVar24 >> 0x10) &
                                            ~(byte)((uint)iVar59 >> 0x10),
                                            CONCAT11((byte)((uint)fVar24 >> 8) &
                                                     ~(byte)((uint)iVar59 >> 8),
                                                     SUB41(fVar24,0) & ~(byte)iVar59)));
          auVar41._0_8_ =
               CONCAT17((byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar82 >> 0x18),
                        CONCAT16((byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar82 >> 0x10),
                                 CONCAT15((byte)((uint)fVar44 >> 8) & ~(byte)((uint)iVar82 >> 8),
                                          CONCAT14(SUB41(fVar44,0) & ~(byte)iVar82,fVar24))));
          auVar41[8] = SUB41(fVar55,0) & ~(byte)iVar83;
          auVar41[9] = (byte)((uint)fVar55 >> 8) & ~(byte)((uint)iVar83 >> 8);
          auVar41[10] = (byte)((uint)fVar55 >> 0x10) & ~(byte)((uint)iVar83 >> 0x10);
          auVar41[0xb] = (byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar83 >> 0x18);
          fVar55 = (float)((ulong)auVar47._0_8_ >> 0x20);
          uVar106 = NEON_ext(auVar29._0_8_,auVar47._0_8_,4,1);
          auVar29 = NEON_ext(auVar29,auVar29,8,1);
          fVar44 = (float)((ulong)auVar41._0_8_ >> 0x20);
          auVar79 = NEON_fmov(0x3f800000,4);
          fVar54 = auVar47._8_4_;
          auVar74._0_4_ = (float)uVar106 + fVar24;
          fVar43 = (float)((ulong)uVar106 >> 0x20);
          auVar74._4_4_ = fVar43 + auVar29._0_4_;
          auVar74._8_4_ = auVar41._8_4_ + fVar55;
          auVar74._12_4_ = 0;
          auVar87._0_4_ = (float)uVar106 - fVar24;
          auVar87._4_4_ = fVar43 - auVar29._0_4_;
          auVar87._8_4_ = auVar41._8_4_ - fVar55;
          auVar87._12_4_ = 0;
          uVar106 = a64_TBL(ZEXT816(0),auVar74,auVar87,DAT_0388a888);
          uVar91 = a64_TBL(ZEXT816(0),auVar74,auVar87,DAT_0388a758);
          fVar24 = (float)_DAT_03889820 * fVar23 + (float)_DAT_0388a450 * fVar44 +
                   (float)_DAT_03889eb0 * fVar54 + auVar79._0_4_;
          fVar55 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar23 +
                   (float)((ulong)_DAT_0388a450 >> 0x20) * fVar44 +
                   (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar54 + auVar79._4_4_;
          fVar43 = (float)_UNK_03889828 * fVar23 + (float)_UNK_0388a458 * fVar44 +
                   (float)_UNK_03889eb8 * fVar54 + auVar79._8_4_;
          fVar44 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar23 +
                   (float)((ulong)_UNK_0388a458 >> 0x20) * fVar44 +
                   (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar54 + auVar79._12_4_;
          uVar61 = a64_TBL(ZEXT816(0),auVar74,auVar87,DAT_0388a710);
          auVar98._0_8_ = a64_TBL(ZEXT816(0),auVar74,auVar87,DAT_0388a880);
          uVar46 = a64_TBL(ZEXT816(0),auVar74,auVar87,DAT_0388a640);
          local_b0 = (undefined8 *)0x79479c9171128967;
          uStack_a8 = "field";
          local_a0 = 5;
          local_98 = (long *)0x0;
          auVar104._0_8_ = a64_TBL(ZEXT816(0),auVar74,auVar87,DAT_0388a700);
          uVar71 = a64_TBL(ZEXT816(0),auVar74,auVar87,DAT_0388a590);
          auVar49._4_4_ = fVar24;
          auVar49._0_4_ = fVar24;
          auVar49._8_4_ = fVar24;
          auVar49._12_4_ = fVar24;
          local_d0 = 0x5d45b190e47082b0;
          pcStack_c8 = "kDistanceOfCameraToStreamLoadPoint";
          local_c0 = 0x22;
          local_b8 = (long *)0x0;
          auVar88._8_8_ = uVar61;
          auVar88._0_8_ = uVar106;
          auVar64._4_4_ = fVar55;
          auVar64._0_4_ = fVar55;
          auVar64._8_4_ = fVar55;
          auVar64._12_4_ = fVar55;
          auVar104._8_8_ = uVar71;
          auVar111._0_4_ = -(uint)(fVar24 <= fVar55);
          auVar111._4_4_ = -(uint)(fVar24 <= fVar55);
          auVar111._8_4_ = -(uint)(fVar24 <= fVar55);
          auVar111._12_4_ = -(uint)(fVar24 <= fVar55);
          auVar79._0_4_ = (undefined4)uVar106;
          auVar79._4_4_ = fVar55;
          auVar79._8_8_ = uVar91;
          auVar109._4_12_ = auVar88._4_12_;
          auVar109._0_4_ = fVar24;
          auVar49 = auVar49 ^ (auVar49 ^ auVar64) & auVar111;
          auVar65._4_4_ = fVar43;
          auVar65._0_4_ = fVar43;
          auVar65._8_4_ = fVar43;
          auVar65._12_4_ = fVar43;
          auVar98._12_4_ = (undefined4)((ulong)uVar46 >> 0x20);
          auVar98._8_4_ = fVar43;
          auVar105._0_12_ = auVar104._0_12_;
          auVar105._12_4_ = fVar44;
          auVar75._0_8_ =
               CONCAT44(-(uint)(auVar49._4_4_ <= fVar43),-(uint)(auVar49._0_4_ <= fVar43));
          auVar75._8_4_ = -(uint)(auVar49._8_4_ <= fVar43);
          auVar75._12_4_ = -(uint)(auVar49._12_4_ <= fVar43);
          auVar93._8_8_ = auVar75._8_8_;
          auVar93._0_8_ = auVar75._0_8_;
          auVar109 = auVar109 ^ (auVar109 ^ auVar79) & auVar111;
          auVar49 = auVar49 ^ (auVar49 ^ auVar65) & auVar93;
          auVar109 = auVar109 ^ (auVar109 ^ auVar98) & auVar75;
          auVar102._0_4_ = -(uint)(auVar49._0_4_ <= fVar44);
          auVar102._4_4_ = -(uint)(auVar49._4_4_ <= fVar44);
          auVar102._8_4_ = -(uint)(auVar49._8_4_ <= fVar44);
          auVar102._12_4_ = -(uint)(auVar49._12_4_ <= fVar44);
          auVar109 = auVar109 ^ (auVar109 ^ auVar105) & auVar102;
          fVar55 = auVar109._0_4_;
          auVar115._0_4_ = fVar55 * fVar55;
          fVar23 = auVar109._4_4_;
          auVar115._4_4_ = fVar23 * fVar23;
          fVar43 = auVar109._8_4_;
          auVar115._8_4_ = fVar43 * fVar43;
          fVar54 = auVar109._12_4_;
          auVar115._12_4_ = fVar54 * fVar54;
          auVar29 = NEON_ext(auVar115,auVar115,8,1);
          fVar44 = auVar29._0_4_ + auVar115._0_4_;
          fVar57 = auVar29._4_4_ + auVar115._4_4_;
          fVar24 = fVar44 + fVar57;
          fVar44 = fVar44 + fVar57;
          auVar120._8_8_ = CONCAT44(fVar44,fVar24);
          auVar120._0_8_ = CONCAT44(fVar44,fVar24);
          auVar29 = NEON_frsqrte(auVar120,4);
          auVar66._0_4_ = auVar29._0_4_ * fVar24;
          auVar66._4_4_ = auVar29._4_4_ * fVar44;
          auVar66._8_4_ = auVar29._8_4_ * fVar24;
          auVar66._12_4_ = auVar29._12_4_ * fVar44;
          auVar79 = NEON_frsqrts(auVar29,auVar66,4);
          auVar50._0_4_ = auVar29._0_4_ * auVar79._0_4_;
          auVar50._4_4_ = auVar29._4_4_ * auVar79._4_4_;
          auVar50._8_4_ = auVar29._8_4_ * auVar79._8_4_;
          auVar50._12_4_ = auVar29._12_4_ * auVar79._12_4_;
          auVar67._0_4_ = fVar24 * auVar50._0_4_;
          auVar67._4_4_ = fVar44 * auVar50._4_4_;
          auVar67._8_4_ = fVar24 * auVar50._8_4_;
          auVar67._12_4_ = fVar44 * auVar50._12_4_;
          iVar45 = -(uint)(fVar24 == 0.0);
          iVar56 = -(uint)(fVar44 == 0.0);
          iVar58 = -(uint)(fVar24 == 0.0);
          iVar59 = -(uint)(fVar44 == 0.0);
          auVar29 = NEON_frsqrts(auVar50,auVar67,4);
          fVar55 = auVar50._0_4_ * auVar29._0_4_ * fVar55;
          fVar23 = auVar50._4_4_ * auVar29._4_4_ * fVar23;
          fVar43 = auVar50._8_4_ * auVar29._8_4_ * fVar43;
          fVar54 = auVar50._12_4_ * auVar29._12_4_ * fVar54;
          if (((*PTR_DAT_04379660 & 1) == 0) &&
             (iVar82 = __cxa_guard_acquire(PTR_DAT_04379660), iVar82 != 0)) {
            FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379660);
          }
          uVar25 = CONCAT11((byte)((uint)fVar55 >> 8) & ~(byte)((uint)iVar45 >> 8),
                            SUB41(fVar55,0) & ~(byte)iVar45);
          bVar31 = (byte)((uint)fVar55 >> 0x10) & ~(byte)((uint)iVar45 >> 0x10);
          bVar32 = (byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18);
          bVar33 = SUB41(fVar23,0) & ~(byte)iVar56;
          bVar34 = (byte)((uint)fVar23 >> 8) & ~(byte)((uint)iVar56 >> 8);
          bVar35 = (byte)((uint)fVar23 >> 0x10) & ~(byte)((uint)iVar56 >> 0x10);
          bVar36 = (byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar56 >> 0x18);
          bVar37 = SUB41(fVar43,0) & ~(byte)iVar58;
          bVar38 = (byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar58 >> 8);
          bVar39 = (byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar58 >> 0x10);
          bVar40 = (byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18);
          uVar106 = *(undefined8 *)PTR_DAT_04379668;
          *(undefined8 *)PTR_DAT_04379670 = uVar106;
          FUN_00d7d9e4(&local_90,uVar106,&local_b0);
          if (local_90 == (long *)0x0) {
            local_f0 = 0.0;
          }
          else {
            local_f0 = (float)FUN_00d7905c(local_90,&local_d0);
            if (local_90 != (long *)0x0) {
              plVar2 = local_90 + 10;
              do {
                iVar45 = (int)*plVar2 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar4) {
                  *(int *)plVar2 = iVar45;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar45 == 0) {
                (**(code **)(*local_90 + 0x10))();
              }
            }
          }
          fVar24 = (float)CONCAT13(bVar40,CONCAT12(bVar39,(short)(CONCAT12(bVar38,CONCAT11(bVar37,
                                                  bVar36)) >> 8)));
          fVar89 = (float)(CONCAT17((byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18),
                                    CONCAT16((byte)((uint)fVar54 >> 0x10) &
                                             ~(byte)((uint)iVar59 >> 0x10),
                                             CONCAT15((byte)((uint)fVar54 >> 8) &
                                                      ~(byte)((uint)iVar59 >> 8),
                                                      CONCAT14(SUB41(fVar54,0) & ~(byte)iVar59,
                                                               fVar24)))) >> 0x20);
          fVar44 = (float)CONCAT13(bVar32,CONCAT12(bVar31,uVar25));
          auVar7[2] = bVar31;
          auVar7._0_2_ = uVar25;
          auVar7[3] = bVar32;
          auVar7[4] = bVar33;
          auVar7[5] = bVar34;
          auVar7[6] = bVar35;
          auVar7[7] = bVar36;
          auVar7[8] = bVar37;
          auVar7[9] = bVar38;
          auVar7[10] = bVar39;
          auVar7[0xb] = bVar40;
          auVar6[2] = bVar31;
          auVar6._0_2_ = uVar25;
          auVar6[3] = bVar32;
          auVar6[4] = bVar33;
          auVar6[5] = bVar34;
          auVar6[6] = bVar35;
          auVar6[7] = bVar36;
          auVar6[8] = bVar37;
          auVar6[9] = bVar38;
          auVar6[10] = bVar39;
          auVar6[0xb] = bVar40;
          auVar5[2] = bVar31;
          auVar5._0_2_ = uVar25;
          auVar5[3] = bVar32;
          auVar5[4] = bVar33;
          auVar5[5] = bVar34;
          auVar5[6] = bVar35;
          auVar5[7] = bVar36;
          auVar5[8] = bVar37;
          auVar5[9] = bVar38;
          auVar5[10] = bVar39;
          auVar5[0xb] = bVar40;
          fVar84 = (float)(CONCAT17(bVar36,CONCAT16(bVar35,CONCAT15(bVar34,CONCAT14(bVar33,fVar44)))
                                   ) >> 0x20);
          auVar29 = ZEXT416((uint)local_f0) << 0x40;
          fVar55 = fVar44 * (float)_DAT_03889ac0;
          fVar23 = fVar84 * (float)((ulong)_DAT_03889ac0 >> 0x20);
          auVar76._0_8_ = CONCAT44(fVar23,fVar55);
          auVar76._8_4_ = fVar24 * (float)_UNK_03889ac8;
          auVar76._12_4_ = fVar89 * (float)((ulong)_UNK_03889ac8 >> 0x20);
          uVar107 = a64_TBL(ZEXT816(0),auVar76,uVar18);
          uVar112 = a64_TBL(ZEXT816(0),auVar76,DAT_0388a790);
          uVar106 = a64_TBL(ZEXT816(0),auVar76,DAT_0388a580);
          uVar100 = a64_TBL(ZEXT816(0),auVar76,DAT_0388a6c8);
          uVar91 = a64_TBL(ZEXT816(0),auVar29,DAT_0388a580);
          uVar113 = a64_TBL(ZEXT816(0),auVar29,DAT_0388a680);
          fVar70 = (float)((ulong)uVar113 >> 0x20);
          uVar46 = a64_TBL(ZEXT816(0),auVar29,uVar18);
          uVar101 = a64_TBL(ZEXT816(0),auVar76,DAT_0388a680);
          fVar81 = (float)((ulong)uVar91 >> 0x20);
          auVar77._8_8_ = auVar76._0_8_;
          auVar77._0_8_ = auVar76._0_8_;
          fVar24 = (float)((ulong)uVar46 >> 0x20);
          uVar71 = a64_TBL(ZEXT816(0),auVar77,DAT_0388a648);
          auVar5._12_4_ = fVar89;
          uVar118 = a64_TBL(ZEXT816(0),auVar5,uVar18);
          fVar43 = (float)_DAT_03889ad0;
          fVar54 = (float)((ulong)_DAT_03889ad0 >> 0x20);
          fVar57 = (float)_UNK_03889ad8;
          fVar69 = (float)((ulong)_UNK_03889ad8 >> 0x20);
          auVar6._12_4_ = fVar89;
          uVar61 = a64_TBL(ZEXT816(0),auVar6,DAT_0388a580);
          fVar55 = (fVar55 * (float)uVar91 + fVar43 * (float)uVar106 * 0.0 +
                   fVar43 * (float)uVar46 * (float)uVar101) - (float)uVar113 * (float)uVar107;
          fVar60 = (fVar23 * fVar81 + fVar54 * (float)((ulong)uVar106 >> 0x20) * 0.0 +
                   fVar54 * fVar24 * (float)((ulong)uVar101 >> 0x20)) -
                   fVar70 * (float)((ulong)uVar107 >> 0x20);
          auVar99._0_8_ = CONCAT44(fVar60,fVar55);
          auVar99._8_4_ =
               (auVar76._8_4_ * (float)uVar91 + fVar57 * (float)uVar113 * (float)uVar100 +
               fVar57 * (float)uVar71 * 0.0) - (float)uVar46 * (float)uVar112;
          auVar99._12_4_ =
               (auVar76._12_4_ * fVar81 + fVar69 * fVar70 * (float)((ulong)uVar100 >> 0x20) +
               fVar69 * (float)((ulong)uVar71 >> 0x20) * 0.0) -
               fVar24 * (float)((ulong)uVar112 >> 0x20);
          uVar46 = a64_TBL(ZEXT816(0),auVar99,DAT_0388a580);
          uVar71 = a64_TBL(ZEXT816(0),auVar99,DAT_0388a6c8);
          uVar100 = a64_TBL(ZEXT816(0),auVar99,DAT_0388a680);
          auVar7._12_4_ = fVar89;
          uVar106 = a64_TBL(ZEXT816(0),auVar7,DAT_0388a680);
          auVar117._8_8_ = auVar99._0_8_;
          auVar117._0_8_ = auVar99._0_8_;
          fVar24 = (float)((ulong)uVar106 >> 0x20);
          uVar91 = a64_TBL(ZEXT816(0),auVar117,DAT_0388a648);
          fVar81 = (float)((ulong)uVar118 >> 0x20);
          uVar101 = a64_TBL(ZEXT816(0),auVar99,uVar18);
          fVar23 = (float)((ulong)uVar61 >> 0x20);
          uVar18 = a64_TBL(ZEXT816(0),auVar99,DAT_0388a790);
          fVar55 = ((float)uVar61 * fVar55 + fVar43 * fVar44 * (float)uVar46 +
                   fVar43 * (float)uVar118 * (float)uVar100) - (float)uVar106 * (float)uVar101;
          fVar43 = (fVar23 * fVar60 + fVar54 * fVar84 * (float)((ulong)uVar46 >> 0x20) +
                   fVar54 * fVar81 * (float)((ulong)uVar100 >> 0x20)) -
                   fVar24 * (float)((ulong)uVar101 >> 0x20);
          fVar44 = ((float)uVar61 * auVar99._8_4_ + fVar57 * (float)uVar106 * (float)uVar71 +
                   fVar57 * fVar44 * (float)uVar91) - (float)uVar118 * (float)uVar18;
          fVar23 = (fVar23 * auVar99._12_4_ + fVar69 * fVar24 * (float)((ulong)uVar71 >> 0x20) +
                   fVar69 * fVar84 * (float)((ulong)uVar91 >> 0x20)) -
                   fVar81 * (float)((ulong)uVar18 >> 0x20);
          fVar24 = (float)CONCAT13((byte)((uint)fVar55 >> 0x18) &
                                   (byte)((ulong)_DAT_038897c0 >> 0x18),
                                   CONCAT12((byte)((uint)fVar55 >> 0x10) &
                                            (byte)((ulong)_DAT_038897c0 >> 0x10),
                                            CONCAT11((byte)((uint)fVar55 >> 8) &
                                                     (byte)((ulong)_DAT_038897c0 >> 8),
                                                     SUB41(fVar55,0) & (byte)_DAT_038897c0)));
          auVar26._0_8_ =
               CONCAT17((byte)((uint)fVar43 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x38),
                        CONCAT16((byte)((uint)fVar43 >> 0x10) & (byte)((ulong)_DAT_038897c0 >> 0x30)
                                 ,CONCAT15((byte)((uint)fVar43 >> 8) &
                                           (byte)((ulong)_DAT_038897c0 >> 0x28),
                                           CONCAT14(SUB41(fVar43,0) &
                                                    (byte)((ulong)_DAT_038897c0 >> 0x20),fVar24))));
          auVar26[8] = SUB41(fVar44,0) & (byte)_UNK_038897c8;
          auVar26[9] = (byte)((uint)fVar44 >> 8) & (byte)((ulong)_UNK_038897c8 >> 8);
          auVar26[10] = (byte)((uint)fVar44 >> 0x10) & (byte)((ulong)_UNK_038897c8 >> 0x10);
          auVar26[0xb] = (byte)((uint)fVar44 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x18);
          auVar27[0xc] = SUB41(fVar23,0) & (byte)((ulong)_UNK_038897c8 >> 0x20);
          auVar27._0_12_ = auVar26;
          auVar27[0xd] = (byte)((uint)fVar23 >> 8) & (byte)((ulong)_UNK_038897c8 >> 0x28);
          auVar27[0xe] = (byte)((uint)fVar23 >> 0x10) & (byte)((ulong)_UNK_038897c8 >> 0x30);
          auVar27[0xf] = (byte)((uint)fVar23 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x38);
          auVar28._0_8_ =
               (long *)CONCAT44((float)((ulong)local_80 >> 0x20) +
                                (float)((ulong)auVar26._0_8_ >> 0x20),(float)local_80 + fVar24);
          auVar28._8_4_ = (float)uStack_78 + auVar26._8_4_;
          auVar28._12_4_ = (float)((ulong)uStack_78 >> 0x20) + auVar27._12_4_;
          uStack_88 = auVar28._8_8_;
          local_90 = auVar28._0_8_;
          if (local_b8 != (long *)0x0) {
            (**(code **)(*local_b8 + 0x20))();
          }
          if (local_98 != (long *)0x0) {
            (**(code **)(*local_98 + 0x20))();
          }
          if ((lVar19 != 0) && (uVar17 = FUN_02a43a5c(plVar21[0xb]), (uVar17 & 1) != 0)) {
            (**(code **)(*plVar21 + 0x20))(plVar21);
          }
          FUN_02a939d0(plVar22);
          FUN_019c06c0(param_5,&local_90,&local_80);
          uVar17 = FUN_02a43a5c(*(undefined8 *)(lVar20 + 8));
          if ((uVar17 & 1) == 0) {
            return;
          }
          lVar20 = *plVar22;
          goto LAB_019bfbd0;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_019bfa6c:
      iVar45 = iVar56;
    } while (iVar56 != 0);
  }
LAB_019bf9c8:
  puVar14 = PTR_DAT_04379fd0;
  puVar13 = PTR_DAT_04379fc8;
  puVar12 = PTR_DAT_043794d8;
  puVar11 = PTR_DAT_043794d0;
  lVar20 = *(long *)(param_5 + 0x68);
  if (lVar20 == 0) {
    return;
  }
  if (*(int *)(lVar20 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(lVar20 + 0xc);
  iVar45 = *(int *)(lVar20 + 0xc);
  do {
    plVar22 = *(long **)(lVar20 + 0x10);
    if (((*puVar13 & 1) == 0) && (iVar56 = __cxa_guard_acquire(puVar13), iVar56 != 0)) {
      if (((*puVar11 & 1) == 0) && (iVar56 = __cxa_guard_acquire(puVar11), iVar56 != 0)) {
        uVar18 = FUN_0087f8f0();
        *(undefined8 *)puVar12 = uVar18;
        __cxa_guard_release(puVar11);
      }
      *(undefined **)puVar14 = puVar12;
      __cxa_guard_release(puVar13);
    }
    while( true ) {
      if (plVar22 == (long *)0x0) {
        return;
      }
      if (plVar22 == (long *)puVar14) break;
      plVar22 = (long *)*plVar22;
    }
    iVar56 = *piVar1;
    if (iVar56 == iVar45) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar45 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar20 = *(long *)(lVar20 + 0x18);
        if (lVar20 == 0) {
          return;
        }
        plVar22 = (long *)(lVar20 + -0x50);
        FUN_018f8f5c(&local_b0,plVar22);
        puVar8 = local_b0;
        puVar13 = PTR_DAT_04379fe0;
        if (local_b0 == (undefined8 *)0x0) goto LAB_019bfbbc;
        if (*(int *)((long)local_b0 + 0xc) == 0) goto LAB_019c0628;
        piVar1 = (int *)((long)local_b0 + 0xc);
        iVar45 = *(int *)((long)local_b0 + 0xc);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar45 = iVar56;
    if (iVar56 == 0) {
      return;
    }
  } while( true );
LAB_019c0334:
  plVar21 = (long *)puVar8[2];
  if (((*PTR_DAT_04379fd8 & 1) == 0) &&
     (iVar56 = __cxa_guard_acquire(PTR_DAT_04379fd8), iVar56 != 0)) {
    if (((*PTR_DAT_043795d8 & 1) == 0) &&
       (iVar56 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar56 != 0)) {
      if (((*puVar11 & 1) == 0) && (iVar56 = __cxa_guard_acquire(puVar11), iVar56 != 0)) {
        uVar18 = FUN_0087f8f0();
        *(undefined8 *)puVar12 = uVar18;
        __cxa_guard_release(puVar11);
      }
      *(undefined **)PTR_DAT_043795e0 = puVar12;
      __cxa_guard_release(PTR_DAT_043795d8);
    }
    *(undefined **)puVar13 = PTR_DAT_043795e0;
    __cxa_guard_release(PTR_DAT_04379fd8);
  }
  while( true ) {
    if (plVar21 == (long *)0x0) goto LAB_019c0628;
    if (plVar21 == (long *)puVar13) break;
    plVar21 = (long *)*plVar21;
  }
  iVar56 = *piVar1;
  if (iVar56 == iVar45) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar45 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
      lVar19 = puVar8[3];
      plVar21 = (long *)0x0;
      puVar8 = local_b0;
      if (lVar19 != 0) {
        plVar21 = (long *)(lVar19 + -0x50);
      }
      goto joined_r0x019c038c;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar45 = iVar56;
  if (iVar56 == 0) {
LAB_019c0628:
    plVar21 = (long *)0x0;
    puVar8 = local_b0;
joined_r0x019c038c:
    local_b0 = puVar8;
    if (puVar8 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar8 + 1);
      do {
        iVar45 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar45 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar45 + -1 == 0) {
        puVar8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar45 = __cxa_guard_acquire(PTR_DAT_04379498), iVar45 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar19 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar19;
        local_d0 = *puVar8;
        FUN_02a44274(lVar19 + 0xd8,&local_d0);
      }
    }
    if (plVar21 != (long *)0x0) {
      local_b0 = (undefined8 *)0x79479c9171128967;
      uStack_a8 = "field";
      local_a0 = 5;
      local_98 = (long *)0x0;
      local_d0 = 0x5d45b190e47082b0;
      pcStack_c8 = "kDistanceOfCameraToStreamLoadPoint";
      local_c0 = 0x22;
      local_b8 = (long *)0x0;
      local_80 = 0;
      uStack_78 = 0;
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar45 = __cxa_guard_acquire(PTR_DAT_04379660), iVar45 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      uVar18 = *(undefined8 *)PTR_DAT_04379668;
      *(undefined8 *)PTR_DAT_04379670 = uVar18;
      FUN_00d7d9e4(&local_90,uVar18,&local_b0);
      if (local_90 == (long *)0x0) {
        local_e0 = 0;
        uStack_df = 0;
        uStack_de = 0;
        uStack_dd = 0;
      }
      else {
        auVar29 = FUN_00d7905c(local_90,&local_d0);
        local_e0 = auVar29[0];
        uStack_df = auVar29[1];
        uStack_de = auVar29[2];
        uStack_dd = auVar29[3];
        if (local_90 != (long *)0x0) {
          plVar2 = local_90 + 10;
          do {
            iVar45 = (int)*plVar2 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *(int *)plVar2 = iVar45;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar45 == 0) {
            (**(code **)(*local_90 + 0x10))();
          }
        }
      }
      if (local_b8 != (long *)0x0) {
        (**(code **)(*local_b8 + 0x20))();
      }
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      auVar29 = FUN_01a4bc68(plVar21);
      fStack_e8 = auVar29._8_4_;
      fStack_e4 = auVar29._12_4_;
      local_f0 = auVar29._0_4_;
      fStack_ec = auVar29._4_4_;
      FUN_01a4bbe8(plVar21);
      local_f0 = local_f0 - extraout_s0_00;
      fStack_ec = fStack_ec - extraout_var_00;
      fStack_e8 = fStack_e8 - extraout_var_02;
      fStack_e4 = fStack_e4 - extraout_var_04;
      uStack_a8 = (char *)CONCAT44(extraout_var_04,extraout_var_02);
      local_b0 = (undefined8 *)CONCAT44(extraout_var_00,extraout_s0_00);
      auVar51._0_4_ = local_f0 * local_f0;
      auVar51._4_4_ = fStack_ec * fStack_ec;
      auVar51._8_4_ = fStack_e8 * fStack_e8;
      auVar51._12_4_ = fStack_e4 * fStack_e4;
      auVar29 = NEON_ext(auVar51,auVar51,8,1);
      fVar44 = auVar29._0_4_ + auVar51._0_4_;
      fVar55 = auVar29._4_4_ + auVar51._4_4_;
      fVar24 = fVar44 + fVar55;
      fVar44 = fVar44 + fVar55;
      if (fVar24 == 0.0) {
        fVar24 = (float)CONCAT13(uStack_dd,CONCAT12(uStack_de,CONCAT11(uStack_df,local_e0)));
        auVar42._0_4_ = *(float *)(param_5 + 0xc0) * fVar24;
        auVar42._4_4_ = *(float *)(param_5 + 0xc4) * fVar24;
        auVar42._8_4_ = *(float *)(param_5 + 200) * fVar24;
        auVar42._12_4_ = *(float *)(param_5 + 0xcc) * fVar24;
      }
      else {
        auVar52._8_8_ = CONCAT44(fVar44,fVar24);
        auVar52._0_8_ = CONCAT44(fVar44,fVar24);
        auVar29 = NEON_frsqrte(auVar52,4);
        auVar78._0_4_ = auVar29._0_4_ * fVar24;
        auVar78._4_4_ = auVar29._4_4_ * fVar44;
        auVar78._8_4_ = auVar29._8_4_ * fVar24;
        auVar78._12_4_ = auVar29._12_4_ * fVar44;
        auVar79 = NEON_frsqrts(auVar29,auVar78,4);
        auVar68._0_4_ = auVar29._0_4_ * auVar79._0_4_;
        auVar68._4_4_ = auVar29._4_4_ * auVar79._4_4_;
        auVar68._8_4_ = auVar29._8_4_ * auVar79._8_4_;
        auVar68._12_4_ = auVar29._12_4_ * auVar79._12_4_;
        auVar80._0_4_ = fVar24 * auVar68._0_4_;
        auVar80._4_4_ = fVar44 * auVar68._4_4_;
        auVar80._8_4_ = fVar24 * auVar68._8_4_;
        auVar80._12_4_ = fVar44 * auVar68._12_4_;
        iVar45 = -(uint)(fVar24 == 0.0);
        iVar56 = -(uint)(fVar44 == 0.0);
        iVar58 = -(uint)(fVar24 == 0.0);
        iVar59 = -(uint)(fVar44 == 0.0);
        auVar29 = NEON_frsqrts(auVar68,auVar80,4);
        local_f0 = local_f0 * auVar68._0_4_ * auVar29._0_4_;
        fStack_ec = fStack_ec * auVar68._4_4_ * auVar29._4_4_;
        fStack_e8 = fStack_e8 * auVar68._8_4_ * auVar29._8_4_;
        fStack_e4 = fStack_e4 * auVar68._12_4_ * auVar29._12_4_;
        fVar44 = (float)CONCAT13((byte)((uint)local_f0 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18),
                                 CONCAT12((byte)((uint)local_f0 >> 0x10) &
                                          ~(byte)((uint)iVar45 >> 0x10),
                                          CONCAT11((byte)((uint)local_f0 >> 8) &
                                                   ~(byte)((uint)iVar45 >> 8),
                                                   SUB41(local_f0,0) & ~(byte)iVar45)));
        auVar48._0_8_ =
             CONCAT17((byte)((uint)fStack_ec >> 0x18) & ~(byte)((uint)iVar56 >> 0x18),
                      CONCAT16((byte)((uint)fStack_ec >> 0x10) & ~(byte)((uint)iVar56 >> 0x10),
                               CONCAT15((byte)((uint)fStack_ec >> 8) & ~(byte)((uint)iVar56 >> 8),
                                        CONCAT14(SUB41(fStack_ec,0) & ~(byte)iVar56,fVar44))));
        auVar48[8] = SUB41(fStack_e8,0) & ~(byte)iVar58;
        auVar48[9] = (byte)((uint)fStack_e8 >> 8) & ~(byte)((uint)iVar58 >> 8);
        auVar48[10] = (byte)((uint)fStack_e8 >> 0x10) & ~(byte)((uint)iVar58 >> 0x10);
        auVar48[0xb] = (byte)((uint)fStack_e8 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18);
        auVar53[0xc] = SUB41(fStack_e4,0) & ~(byte)iVar59;
        auVar53._0_12_ = auVar48;
        auVar53[0xd] = (byte)((uint)fStack_e4 >> 8) & ~(byte)((uint)iVar59 >> 8);
        auVar53[0xe] = (byte)((uint)fStack_e4 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10);
        auVar53[0xf] = (byte)((uint)fStack_e4 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18);
        fVar24 = (float)CONCAT13(uStack_dd,CONCAT12(uStack_de,CONCAT11(uStack_df,local_e0)));
        auVar42._0_4_ = fVar44 * fVar24;
        auVar42._4_4_ = (float)((ulong)auVar48._0_8_ >> 0x20) * fVar24;
        auVar42._8_4_ = auVar48._8_4_ * fVar24;
        auVar42._12_4_ = auVar53._12_4_ * fVar24;
        *(long *)(param_5 + 200) = auVar53._8_8_;
        *(undefined8 *)(param_5 + 0xc0) = auVar48._0_8_;
      }
      auVar30._0_8_ = CONCAT44(extraout_var_00 + auVar42._4_4_,extraout_s0_00 + auVar42._0_4_);
      auVar30._8_4_ = extraout_var_02 + auVar42._8_4_;
      auVar30._12_4_ = extraout_var_04 + auVar42._12_4_;
      uStack_78 = auVar30._8_8_;
      local_80 = auVar30._0_8_;
      FUN_019c06c0(param_5,&local_80,&local_b0);
      uVar17 = FUN_02a43a5c(plVar21[0xb]);
      if ((uVar17 & 1) != 0) {
        (**(code **)(*plVar21 + 0x20))(plVar21);
      }
    }
LAB_019bfbbc:
    uVar17 = FUN_02a43a5c(*(undefined8 *)(lVar20 + 8));
    if ((uVar17 & 1) != 0) {
      lVar20 = *plVar22;
LAB_019bfbd0:
      (**(code **)(lVar20 + 0x20))(plVar22);
    }
    return;
  }
  goto LAB_019c0334;
}


