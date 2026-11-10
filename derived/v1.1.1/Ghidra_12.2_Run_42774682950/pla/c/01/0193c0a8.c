/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0193c0a8; name: FUN_0193c0a8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_0193c0a8(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
            undefined1 param_4 [16],long param_5,ulong param_6)

{
  int *piVar1;
  undefined8 *puVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined2 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined3 uVar29;
  float fVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined8 uVar38;
  long lVar39;
  ulong *puVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  long *plVar47;
  undefined8 uVar48;
  long lVar49;
  undefined8 *puVar50;
  long *plVar51;
  float fVar52;
  float fVar53;
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  byte bVar54;
  undefined1 extraout_var_02;
  byte bVar55;
  undefined1 uVar56;
  undefined1 extraout_var_03;
  byte bVar57;
  undefined1 uVar58;
  undefined1 extraout_var_04;
  byte bVar59;
  undefined1 uVar60;
  undefined1 extraout_var_05;
  byte bVar61;
  undefined1 uVar62;
  undefined1 extraout_var_06;
  byte bVar63;
  undefined1 uVar64;
  undefined1 extraout_var_07;
  byte bVar65;
  undefined1 uVar66;
  undefined1 extraout_var_08;
  byte bVar67;
  undefined1 uVar68;
  undefined1 extraout_var_09;
  byte bVar69;
  undefined1 uVar70;
  undefined1 extraout_var_10;
  byte bVar71;
  undefined1 uVar72;
  undefined1 extraout_var_11;
  byte bVar73;
  undefined1 uVar74;
  undefined1 extraout_var_12;
  byte bVar75;
  undefined1 uVar76;
  undefined1 extraout_var_13;
  byte bVar77;
  undefined1 uVar78;
  float fVar79;
  float fVar80;
  undefined1 auVar82 [12];
  float fVar86;
  undefined8 uVar81;
  float fVar85;
  float fVar87;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  byte bVar88;
  byte bVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  undefined1 uVar93;
  float fVar94;
  int iVar95;
  float fVar104;
  float fVar107;
  int iVar108;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  int iVar105;
  int iVar109;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  float fVar106;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined7 uVar110;
  byte bVar122;
  int iVar123;
  undefined1 auVar111 [12];
  int iVar121;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  float fVar124;
  undefined8 uVar125;
  undefined8 uVar126;
  undefined8 uVar127;
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined8 uVar136;
  float fVar141;
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined8 uVar142;
  undefined8 uVar143;
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined8 uVar150;
  undefined8 uVar151;
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined8 uVar154;
  undefined8 uVar155;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined8 *local_98;
  
  puVar37 = PTR_DAT_043794d0;
  puVar36 = PTR_DAT_043794c8;
  puVar35 = PTR_DAT_043794b8;
  puVar34 = PTR_DAT_043794b0;
  uVar81 = param_4._8_8_;
  uVar48 = param_4._0_8_;
  uVar93 = param_3[0xf];
  uVar92 = param_3[0xe];
  uVar91 = param_3[0xd];
  uVar90 = param_3[0xc];
  uVar78 = param_3[0xb];
  uVar76 = param_3[10];
  uVar74 = param_3[9];
  uVar72 = param_3[8];
  uVar70 = param_3[7];
  uVar68 = param_3[6];
  uVar66 = param_3[5];
  uVar64 = param_3[4];
  uVar62 = param_3[3];
  uVar60 = param_3[2];
  uVar58 = param_3[1];
  uVar56 = param_3[0];
  fVar53 = param_2._12_4_;
  fVar87 = param_2._8_4_;
  fVar85 = param_2._4_4_;
  fVar79 = param_2._0_4_;
  lVar49 = *(long *)(param_5 + 0x78);
  if ((lVar49 != 0) && (*(int *)(lVar49 + 0xc) != 0)) {
    piVar1 = (int *)(lVar49 + 0xc);
    iVar95 = *(int *)(lVar49 + 0xc);
    do {
      plVar51 = *(long **)(lVar49 + 0x10);
      if (((*puVar34 & 1) == 0) && (iVar105 = __cxa_guard_acquire(puVar34), iVar105 != 0)) {
        if (((*PTR_DAT_043794c0 & 1) == 0) &&
           (iVar105 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar105 != 0)) {
          if (((*puVar37 & 1) == 0) && (iVar105 = __cxa_guard_acquire(puVar37), iVar105 != 0)) {
            uVar38 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar38;
            __cxa_guard_release(puVar37);
          }
          *(undefined **)puVar36 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_043794c0);
        }
        *(undefined **)puVar35 = puVar36;
        __cxa_guard_release(puVar34);
      }
      while( true ) {
        if (plVar51 == (long *)0x0) {
          return 0;
        }
        if (plVar51 == (long *)puVar35) break;
        plVar51 = (long *)*plVar51;
      }
      iVar105 = *piVar1;
      if (iVar105 == iVar95) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar95 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar49 = *(long *)(lVar49 + 0x18);
          if (lVar49 == 0) {
            return 0;
          }
          plVar47 = (long *)(lVar49 + -0x50);
          (**(code **)(*plVar47 + 0x40))(plVar47);
          (**(code **)(*plVar47 + 0x40))(plVar47);
          puVar50 = *(undefined8 **)(param_5 + 0x140);
          puVar2 = *(undefined8 **)(param_5 + 0x148);
          plVar51 = (long *)(param_5 + 0x178);
          *(undefined8 *)(param_5 + 0x180) = *(undefined8 *)(param_5 + 0x178);
          uVar33 = DAT_0388a880;
          uVar32 = DAT_0388a6f0;
          uVar31 = DAT_0388a6d8;
          uVar38 = DAT_0388a680;
          if (puVar50 != puVar2) {
            auVar96._0_4_ =
                 (float)CONCAT13(extraout_var_01,
                                 CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))) *
                 (float)CONCAT13(extraout_var_01,
                                 CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
            auVar96._4_4_ =
                 (float)CONCAT13(extraout_var_05,
                                 CONCAT12(extraout_var_04,CONCAT11(extraout_var_03,extraout_var_02))
                                ) *
                 (float)CONCAT13(extraout_var_05,
                                 CONCAT12(extraout_var_04,CONCAT11(extraout_var_03,extraout_var_02))
                                );
            auVar96._8_4_ =
                 (float)CONCAT13(extraout_var_09,
                                 CONCAT12(extraout_var_08,CONCAT11(extraout_var_07,extraout_var_06))
                                ) *
                 (float)CONCAT13(extraout_var_09,
                                 CONCAT12(extraout_var_08,CONCAT11(extraout_var_07,extraout_var_06))
                                );
            auVar96._12_4_ =
                 (float)CONCAT13(extraout_var_13,
                                 CONCAT12(extraout_var_12,CONCAT11(extraout_var_11,extraout_var_10))
                                ) *
                 (float)CONCAT13(extraout_var_13,
                                 CONCAT12(extraout_var_12,CONCAT11(extraout_var_11,extraout_var_10))
                                );
            auVar112 = NEON_ext(auVar96,auVar96,8,1);
            fVar94 = auVar112._0_4_ + auVar96._0_4_;
            fVar104 = auVar112._4_4_ + auVar96._4_4_;
            fVar52 = fVar94 + fVar104;
            fVar94 = fVar94 + fVar104;
            auVar97._8_8_ = CONCAT44(fVar94,fVar52);
            auVar97._0_8_ = CONCAT44(fVar94,fVar52);
            auVar112 = NEON_frsqrte(auVar97,4);
            auVar128._0_4_ = auVar112._0_4_ * fVar52;
            auVar128._4_4_ = auVar112._4_4_ * fVar94;
            auVar128._8_4_ = auVar112._8_4_ * fVar52;
            auVar128._12_4_ = auVar112._12_4_ * fVar94;
            auVar129 = NEON_frsqrts(auVar112,auVar128,4);
            auVar113._0_4_ = auVar112._0_4_ * auVar129._0_4_;
            auVar113._4_4_ = auVar112._4_4_ * auVar129._4_4_;
            auVar113._8_4_ = auVar112._8_4_ * auVar129._8_4_;
            auVar113._12_4_ = auVar112._12_4_ * auVar129._12_4_;
            auVar130._0_4_ = fVar52 * auVar113._0_4_;
            auVar130._4_4_ = fVar94 * auVar113._4_4_;
            auVar130._8_4_ = fVar52 * auVar113._8_4_;
            auVar130._12_4_ = fVar94 * auVar113._12_4_;
            iVar95 = -(uint)(fVar52 == 0.0);
            iVar105 = -(uint)(fVar94 == 0.0);
            iVar108 = -(uint)(fVar52 == 0.0);
            iVar109 = -(uint)(fVar94 == 0.0);
            auVar112 = NEON_frsqrts(auVar113,auVar130,4);
            fVar52 = (float)CONCAT13(extraout_var_01,
                                     CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))) *
                     auVar113._0_4_ * auVar112._0_4_;
            fVar94 = (float)CONCAT13(extraout_var_05,
                                     CONCAT12(extraout_var_04,
                                              CONCAT11(extraout_var_03,extraout_var_02))) *
                     auVar113._4_4_ * auVar112._4_4_;
            fVar104 = (float)CONCAT13(extraout_var_09,
                                      CONCAT12(extraout_var_08,
                                               CONCAT11(extraout_var_07,extraout_var_06))) *
                      auVar113._8_4_ * auVar112._8_4_;
            fVar124 = (float)CONCAT13(extraout_var_13,
                                      CONCAT12(extraout_var_12,
                                               CONCAT11(extraout_var_11,extraout_var_10))) *
                      auVar113._12_4_ * auVar112._12_4_;
            fVar106 = (float)CONCAT13((byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar95 >> 0x18),
                                      CONCAT12((byte)((uint)fVar52 >> 0x10) &
                                               ~(byte)((uint)iVar95 >> 0x10),
                                               CONCAT11((byte)((uint)fVar52 >> 8) &
                                                        ~(byte)((uint)iVar95 >> 8),
                                                        SUB41(fVar52,0) & ~(byte)iVar95)));
            auVar98._0_8_ =
                 CONCAT17((byte)((uint)fVar94 >> 0x18) & ~(byte)((uint)iVar105 >> 0x18),
                          CONCAT16((byte)((uint)fVar94 >> 0x10) & ~(byte)((uint)iVar105 >> 0x10),
                                   CONCAT15((byte)((uint)fVar94 >> 8) & ~(byte)((uint)iVar105 >> 8),
                                            CONCAT14(SUB41(fVar94,0) & ~(byte)iVar105,fVar106))));
            auVar98[8] = SUB41(fVar104,0) & ~(byte)iVar108;
            auVar98[9] = (byte)((uint)fVar104 >> 8) & ~(byte)((uint)iVar108 >> 8);
            auVar98[10] = (byte)((uint)fVar104 >> 0x10) & ~(byte)((uint)iVar108 >> 0x10);
            auVar98[0xb] = (byte)((uint)fVar104 >> 0x18) & ~(byte)((uint)iVar108 >> 0x18);
            auVar98[0xc] = SUB41(fVar124,0) & ~(byte)iVar109;
            auVar98[0xd] = (byte)((uint)fVar124 >> 8) & ~(byte)((uint)iVar109 >> 8);
            auVar98[0xe] = (byte)((uint)fVar124 >> 0x10) & ~(byte)((uint)iVar109 >> 0x10);
            auVar98[0xf] = (byte)((uint)fVar124 >> 0x18) & ~(byte)((uint)iVar109 >> 0x18);
            auVar114._0_4_ = fVar79 * fVar79;
            auVar114._4_4_ = fVar85 * fVar85;
            auVar114._8_4_ = fVar87 * fVar87;
            auVar114._12_4_ = fVar53 * fVar53;
            auVar112 = NEON_ext(auVar114,auVar114,8,1);
            fVar52 = auVar112._0_4_ + auVar114._0_4_;
            fVar94 = auVar112._4_4_ + auVar114._4_4_;
            fVar53 = fVar52 + fVar94;
            fVar52 = fVar52 + fVar94;
            auVar115._8_8_ = CONCAT44(fVar52,fVar53);
            auVar115._0_8_ = CONCAT44(fVar52,fVar53);
            auVar112 = NEON_frsqrte(auVar115,4);
            auVar137._0_4_ = auVar112._0_4_ * fVar53;
            auVar137._4_4_ = auVar112._4_4_ * fVar52;
            auVar137._8_4_ = auVar112._8_4_ * fVar53;
            auVar137._12_4_ = auVar112._12_4_ * fVar52;
            auVar129 = NEON_frsqrts(auVar112,auVar137,4);
            auVar131._0_4_ = auVar112._0_4_ * auVar129._0_4_;
            auVar131._4_4_ = auVar112._4_4_ * auVar129._4_4_;
            auVar131._8_4_ = auVar112._8_4_ * auVar129._8_4_;
            auVar131._12_4_ = auVar112._12_4_ * auVar129._12_4_;
            auVar138._0_4_ = fVar53 * auVar131._0_4_;
            auVar138._4_4_ = fVar52 * auVar131._4_4_;
            auVar138._8_4_ = fVar53 * auVar131._8_4_;
            auVar138._12_4_ = fVar52 * auVar131._12_4_;
            iVar109 = -(uint)(fVar53 == 0.0);
            iVar121 = -(uint)(fVar52 == 0.0);
            iVar123 = -(uint)(fVar53 == 0.0);
            auVar112 = NEON_frsqrts(auVar131,auVar138,4);
            fVar79 = fVar79 * auVar131._0_4_ * auVar112._0_4_;
            fVar85 = fVar85 * auVar131._4_4_ * auVar112._4_4_;
            fVar87 = fVar87 * auVar131._8_4_ * auVar112._8_4_;
            auVar132._0_4_ =
                 (float)CONCAT13(uVar62,CONCAT12(uVar60,CONCAT11(uVar58,uVar56))) *
                 (float)CONCAT13(uVar62,CONCAT12(uVar60,CONCAT11(uVar58,uVar56)));
            auVar132._4_4_ =
                 (float)CONCAT13(uVar70,CONCAT12(uVar68,CONCAT11(uVar66,uVar64))) *
                 (float)CONCAT13(uVar70,CONCAT12(uVar68,CONCAT11(uVar66,uVar64)));
            auVar132._8_4_ =
                 (float)CONCAT13(uVar78,CONCAT12(uVar76,CONCAT11(uVar74,uVar72))) *
                 (float)CONCAT13(uVar78,CONCAT12(uVar76,CONCAT11(uVar74,uVar72)));
            auVar132._12_4_ =
                 (float)CONCAT13(uVar93,CONCAT12(uVar92,CONCAT11(uVar91,uVar90))) *
                 (float)CONCAT13(uVar93,CONCAT12(uVar92,CONCAT11(uVar91,uVar90)));
            auVar112 = NEON_ext(auVar132,auVar132,8,1);
            fVar124 = auVar112._0_4_ + auVar132._0_4_;
            fVar53 = auVar112._4_4_ + auVar132._4_4_;
            fVar104 = fVar124 + fVar53;
            fVar124 = fVar124 + fVar53;
            auVar133._8_8_ = CONCAT44(fVar124,fVar104);
            auVar133._0_8_ = CONCAT44(fVar124,fVar104);
            auVar112 = NEON_frsqrte(auVar133,4);
            auVar144._0_4_ = auVar112._0_4_ * fVar104;
            auVar144._4_4_ = auVar112._4_4_ * fVar124;
            auVar144._8_4_ = auVar112._8_4_ * fVar104;
            auVar144._12_4_ = auVar112._12_4_ * fVar124;
            auVar129 = NEON_frsqrts(auVar112,auVar144,4);
            auVar139._0_4_ = auVar112._0_4_ * auVar129._0_4_;
            auVar139._4_4_ = auVar112._4_4_ * auVar129._4_4_;
            auVar139._8_4_ = auVar112._8_4_ * auVar129._8_4_;
            auVar139._12_4_ = auVar112._12_4_ * auVar129._12_4_;
            auVar145._0_4_ = fVar104 * auVar139._0_4_;
            auVar145._4_4_ = fVar124 * auVar139._4_4_;
            auVar145._8_4_ = fVar104 * auVar139._8_4_;
            auVar145._12_4_ = fVar124 * auVar139._12_4_;
            auVar112 = NEON_frsqrts(auVar139,auVar145,4);
            fVar53 = (float)CONCAT13(uVar62,CONCAT12(uVar60,CONCAT11(uVar58,uVar56))) *
                     auVar139._0_4_ * auVar112._0_4_;
            fVar52 = (float)CONCAT13(uVar70,CONCAT12(uVar68,CONCAT11(uVar66,uVar64))) *
                     auVar139._4_4_ * auVar112._4_4_;
            fVar94 = (float)CONCAT13(uVar78,CONCAT12(uVar76,CONCAT11(uVar74,uVar72))) *
                     auVar139._8_4_ * auVar112._8_4_;
            bVar88 = (byte)((uint)fVar79 >> 0x10) & ~(byte)((uint)iVar109 >> 0x10);
            bVar89 = (byte)((uint)fVar79 >> 0x18) & ~(byte)((uint)iVar109 >> 0x18);
            iVar95 = -(uint)(fVar104 == 0.0);
            iVar105 = -(uint)(fVar124 == 0.0);
            iVar108 = -(uint)(fVar104 == 0.0);
            uVar110 = CONCAT16((byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)iVar105 >> 0x10),
                               CONCAT15((byte)((uint)fVar52 >> 8) & ~(byte)((uint)iVar105 >> 8),
                                        CONCAT14(SUB41(fVar52,0) & ~(byte)iVar105,
                                                 CONCAT13((byte)((uint)fVar53 >> 0x18) &
                                                          ~(byte)((uint)iVar95 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar53 >> 0x10) &
                                                                   ~(byte)((uint)iVar95 >> 0x10),
                                                                   CONCAT11((byte)((uint)fVar53 >> 8
                                                                                  ) & ~(byte)((uint)
                                                  iVar95 >> 8),SUB41(fVar53,0) & ~(byte)iVar95))))))
            ;
            bVar122 = (byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar105 >> 0x18);
            auVar111._0_8_ = CONCAT17(bVar122,uVar110);
            auVar111[8] = SUB41(fVar94,0) & ~(byte)iVar108;
            auVar111[9] = (byte)((uint)fVar94 >> 8) & ~(byte)((uint)iVar108 >> 8);
            auVar111[10] = (byte)((uint)fVar94 >> 0x10) & ~(byte)((uint)iVar108 >> 0x10);
            auVar111[0xb] = (byte)((uint)fVar94 >> 0x18) & ~(byte)((uint)iVar108 >> 0x18);
            uVar125 = NEON_ext(auVar98._0_8_,auVar111._0_8_,4,1);
            auVar129 = NEON_ext(auVar98,auVar98,8,1);
            fVar85 = (float)CONCAT13((byte)((uint)fVar85 >> 0x18) & ~(byte)((uint)iVar121 >> 0x18),
                                     CONCAT12((byte)((uint)fVar85 >> 0x10) &
                                              ~(byte)((uint)iVar121 >> 0x10),
                                              CONCAT11((byte)((uint)fVar85 >> 8) &
                                                       ~(byte)((uint)iVar121 >> 8),
                                                       SUB41(fVar85,0) & ~(byte)iVar121)));
            fVar104 = auVar111._8_4_;
            auVar112 = NEON_fmov(0x3f800000,4);
            fVar53 = (float)_DAT_03889820 * fVar106 + (float)_DAT_0388a450 * fVar85 +
                     (float)_DAT_03889eb0 * fVar104 + auVar112._0_4_;
            fVar52 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar106 +
                     (float)((ulong)_DAT_0388a450 >> 0x20) * fVar85 +
                     (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar104 + auVar112._4_4_;
            fVar94 = (float)_UNK_03889828 * fVar106 + (float)_UNK_0388a458 * fVar85 +
                     (float)_UNK_03889eb8 * fVar104 + auVar112._8_4_;
            fVar104 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar106 +
                      (float)((ulong)_UNK_0388a458 >> 0x20) * fVar85 +
                      (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar104 + auVar112._12_4_;
            fVar85 = (float)CONCAT13((byte)((uint)fVar87 >> 0x18) & ~(byte)((uint)iVar123 >> 0x18),
                                     CONCAT12((byte)((uint)fVar87 >> 0x10) &
                                              ~(byte)((uint)iVar123 >> 0x10),
                                              CONCAT11((byte)((uint)fVar87 >> 8) &
                                                       ~(byte)((uint)iVar123 >> 8),
                                                       SUB41(fVar87,0) & ~(byte)iVar123)));
            uVar17 = CONCAT11((byte)((uint)fVar79 >> 8) & ~(byte)((uint)iVar109 >> 8),
                              SUB41(fVar79,0) & ~(byte)iVar109);
            auVar99._0_4_ = (float)uVar125 + (float)CONCAT13(bVar89,CONCAT12(bVar88,uVar17));
            fVar79 = (float)((ulong)uVar125 >> 0x20);
            auVar99._4_4_ = fVar79 + auVar129._0_4_;
            uVar29 = (undefined3)((uint7)uVar110 >> 0x20);
            auVar99._8_4_ = fVar85 + (float)CONCAT13(bVar122,uVar29);
            auVar99._12_4_ = 0;
            auVar116._0_4_ = (float)uVar125 - (float)CONCAT13(bVar89,CONCAT12(bVar88,uVar17));
            auVar116._4_4_ = fVar79 - auVar129._0_4_;
            auVar116._8_4_ = fVar85 - (float)CONCAT13(bVar122,uVar29);
            auVar116._12_4_ = 0;
            uVar43 = a64_TBL(ZEXT816(0),auVar99,auVar116,DAT_0388a888);
            uVar125 = a64_TBL(ZEXT816(0),auVar99,auVar116,DAT_0388a710);
            auVar140._8_8_ = uVar125;
            auVar140._0_8_ = uVar43 & 0xffffffff00000000;
            uVar126 = a64_TBL(ZEXT816(0),auVar99,auVar116,DAT_0388a758);
            uVar142 = a64_TBL(ZEXT816(0),auVar99,auVar116,DAT_0388a640);
            auVar149._4_12_ = auVar140._4_12_;
            auVar149._0_4_ = fVar53;
            auVar134._0_8_ = a64_TBL(ZEXT816(0),auVar99,auVar116,DAT_0388a880);
            auVar146._0_8_ = a64_TBL(ZEXT816(0),auVar99,auVar116,DAT_0388a700);
            uVar125 = a64_TBL(ZEXT816(0),auVar99,auVar116,DAT_0388a590);
            auVar117._4_4_ = fVar52;
            auVar117._0_4_ = fVar52;
            auVar117._8_4_ = fVar52;
            auVar117._12_4_ = fVar52;
            auVar134._12_4_ = (undefined4)((ulong)uVar142 >> 0x20);
            auVar134._8_4_ = fVar94;
            auVar146._8_8_ = uVar125;
            auVar153._4_4_ = fVar53;
            auVar153._0_4_ = fVar53;
            auVar153._8_4_ = fVar53;
            auVar153._12_4_ = fVar53;
            auVar148._0_8_ = CONCAT44(-(uint)(fVar53 <= fVar52),-(uint)(fVar53 <= fVar52));
            auVar148._8_4_ = -(uint)(fVar53 <= fVar52);
            auVar148._12_4_ = -(uint)(fVar53 <= fVar52);
            auVar152._8_8_ = auVar148._8_8_;
            auVar152._0_8_ = auVar148._0_8_;
            auVar18[4] = SUB41(fVar52,0);
            auVar18._0_4_ = (int)uVar43;
            auVar18[5] = (char)((uint)fVar52 >> 8);
            auVar18[6] = (char)((uint)fVar52 >> 0x10);
            auVar18[7] = (char)((uint)fVar52 >> 0x18);
            auVar18[8] = (char)uVar126;
            auVar18[9] = (char)((ulong)uVar126 >> 8);
            auVar18[10] = (char)((ulong)uVar126 >> 0x10);
            auVar18[0xb] = (char)((ulong)uVar126 >> 0x18);
            auVar18[0xc] = (char)((ulong)uVar126 >> 0x20);
            auVar18[0xd] = (char)((ulong)uVar126 >> 0x28);
            auVar18[0xe] = (char)((ulong)uVar126 >> 0x30);
            auVar18[0xf] = (char)((ulong)uVar126 >> 0x38);
            auVar149 = auVar149 ^ (auVar149 ^ auVar18) & auVar148;
            uVar56 = SUB41(fVar94,0);
            uVar58 = (undefined1)((uint)fVar94 >> 8);
            uVar60 = (undefined1)((uint)fVar94 >> 0x10);
            uVar62 = (undefined1)((uint)fVar94 >> 0x18);
            auVar147._0_12_ = auVar146._0_12_;
            auVar147._12_4_ = fVar104;
            auVar153 = auVar153 ^ (auVar153 ^ auVar117) & auVar152;
            auVar100._0_8_ =
                 CONCAT44(-(uint)(auVar153._4_4_ <= fVar94),-(uint)(auVar153._0_4_ <= fVar94));
            auVar100._8_4_ = -(uint)(auVar153._8_4_ <= fVar94);
            auVar100._12_4_ = -(uint)(auVar153._12_4_ <= fVar94);
            auVar118._8_8_ = auVar100._8_8_;
            auVar118._0_8_ = auVar100._0_8_;
            auVar149 = auVar149 ^ (auVar149 ^ auVar134) & auVar100;
            auVar19[4] = uVar56;
            auVar19._0_4_ = fVar94;
            auVar19[5] = uVar58;
            auVar19[6] = uVar60;
            auVar19[7] = uVar62;
            auVar19[8] = uVar56;
            auVar19[9] = uVar58;
            auVar19[10] = uVar60;
            auVar19[0xb] = uVar62;
            auVar19[0xc] = uVar56;
            auVar19[0xd] = uVar58;
            auVar19[0xe] = uVar60;
            auVar19[0xf] = uVar62;
            auVar153 = auVar153 ^ (auVar153 ^ auVar19) & auVar118;
            auVar83._0_4_ = -(uint)(auVar153._0_4_ <= fVar104);
            auVar83._4_4_ = -(uint)(auVar153._4_4_ <= fVar104);
            auVar83._8_4_ = -(uint)(auVar153._8_4_ <= fVar104);
            auVar83._12_4_ = -(uint)(auVar153._12_4_ <= fVar104);
            auVar149 = auVar149 ^ (auVar149 ^ auVar147) & auVar83;
            fVar52 = auVar149._0_4_;
            fVar79 = fVar52 * fVar52;
            fVar94 = auVar149._4_4_;
            fVar85 = fVar94 * fVar94;
            uVar56 = (undefined1)((uint)fVar85 >> 8);
            uVar58 = (undefined1)((uint)fVar85 >> 0x10);
            uVar60 = (undefined1)((uint)fVar85 >> 0x18);
            fVar104 = auVar149._8_4_;
            fVar87 = fVar104 * fVar104;
            uVar62 = (undefined1)((uint)fVar87 >> 8);
            uVar64 = (undefined1)((uint)fVar87 >> 0x10);
            uVar66 = (undefined1)((uint)fVar87 >> 0x18);
            fVar124 = auVar149._12_4_;
            fVar53 = fVar124 * fVar124;
            uVar68 = (undefined1)((uint)fVar53 >> 8);
            uVar70 = (undefined1)((uint)fVar53 >> 0x10);
            uVar72 = (undefined1)((uint)fVar53 >> 0x18);
            auVar20[4] = SUB41(fVar85,0);
            auVar20._0_4_ = fVar79;
            auVar20[5] = uVar56;
            auVar20[6] = uVar58;
            auVar20[7] = uVar60;
            auVar20[8] = SUB41(fVar87,0);
            auVar20[9] = uVar62;
            auVar20[10] = uVar64;
            auVar20[0xb] = uVar66;
            auVar20[0xc] = SUB41(fVar53,0);
            auVar20[0xd] = uVar68;
            auVar20[0xe] = uVar70;
            auVar20[0xf] = uVar72;
            auVar21[4] = SUB41(fVar85,0);
            auVar21._0_4_ = fVar79;
            auVar21[5] = uVar56;
            auVar21[6] = uVar58;
            auVar21[7] = uVar60;
            auVar21[8] = SUB41(fVar87,0);
            auVar21[9] = uVar62;
            auVar21[10] = uVar64;
            auVar21[0xb] = uVar66;
            auVar21[0xc] = SUB41(fVar53,0);
            auVar21[0xd] = uVar68;
            auVar21[0xe] = uVar70;
            auVar21[0xf] = uVar72;
            auVar112 = NEON_ext(auVar20,auVar21,8,1);
            fVar79 = auVar112._0_4_ + fVar79;
            fVar85 = auVar112._4_4_ + fVar85;
            fVar87 = fVar79 + fVar85;
            fVar79 = fVar79 + fVar85;
            uVar56 = SUB41(fVar79,0);
            uVar58 = (undefined1)((uint)fVar79 >> 8);
            uVar60 = (undefined1)((uint)fVar79 >> 0x10);
            uVar62 = (undefined1)((uint)fVar79 >> 0x18);
            auVar22[4] = uVar56;
            auVar22._0_4_ = fVar87;
            auVar22[5] = uVar58;
            auVar22[6] = uVar60;
            auVar22[7] = uVar62;
            auVar22[8] = SUB41(fVar87,0);
            auVar22[9] = (char)((uint)fVar87 >> 8);
            auVar22[10] = (char)((uint)fVar87 >> 0x10);
            auVar22[0xb] = (char)((uint)fVar87 >> 0x18);
            auVar22[0xc] = uVar56;
            auVar22[0xd] = uVar58;
            auVar22[0xe] = uVar60;
            auVar22[0xf] = uVar62;
            auVar112 = NEON_frsqrte(auVar22,4);
            auVar119._0_4_ = auVar112._0_4_ * fVar87;
            auVar119._4_4_ = auVar112._4_4_ * fVar79;
            auVar119._8_4_ = auVar112._8_4_ * fVar87;
            uVar17 = (undefined2)(CONCAT15(uVar58,CONCAT14(uVar56,fVar87)) >> 0x20);
            auVar119._12_4_ = auVar112._12_4_ * (float)CONCAT13(uVar62,CONCAT12(uVar60,uVar17));
            auVar129 = NEON_frsqrts(auVar112,auVar119,4);
            auVar101._0_4_ = auVar112._0_4_ * auVar129._0_4_;
            auVar101._4_4_ = auVar112._4_4_ * auVar129._4_4_;
            auVar101._8_4_ = auVar112._8_4_ * auVar129._8_4_;
            auVar101._12_4_ = auVar112._12_4_ * auVar129._12_4_;
            auVar120._0_4_ = fVar87 * auVar101._0_4_;
            auVar120._4_4_ = fVar79 * auVar101._4_4_;
            auVar120._8_4_ = fVar87 * auVar101._8_4_;
            auVar120._12_4_ = (float)CONCAT13(uVar62,CONCAT12(uVar60,uVar17)) * auVar101._12_4_;
            iVar95 = -(uint)(fVar87 == 0.0);
            iVar105 = -(uint)(fVar79 == 0.0);
            iVar108 = -(uint)(fVar87 == 0.0);
            iVar109 = -(uint)((float)CONCAT13(uVar62,CONCAT12(uVar60,uVar17)) == 0.0);
            auVar112 = NEON_frsqrts(auVar101,auVar120,4);
            fVar52 = auVar101._0_4_ * auVar112._0_4_ * fVar52;
            fVar94 = auVar101._4_4_ * auVar112._4_4_ * fVar94;
            fVar104 = auVar101._8_4_ * auVar112._8_4_ * fVar104;
            fVar124 = auVar101._12_4_ * auVar112._12_4_ * fVar124;
            fVar80 = (float)CONCAT13((byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar95 >> 0x18),
                                     CONCAT12((byte)((uint)fVar52 >> 0x10) &
                                              ~(byte)((uint)iVar95 >> 0x10),
                                              CONCAT11((byte)((uint)fVar52 >> 8) &
                                                       ~(byte)((uint)iVar95 >> 8),
                                                       SUB41(fVar52,0) & ~(byte)iVar95)));
            auVar82._0_8_ =
                 CONCAT17((byte)((uint)fVar94 >> 0x18) & ~(byte)((uint)iVar105 >> 0x18),
                          CONCAT16((byte)((uint)fVar94 >> 0x10) & ~(byte)((uint)iVar105 >> 0x10),
                                   CONCAT15((byte)((uint)fVar94 >> 8) & ~(byte)((uint)iVar105 >> 8),
                                            CONCAT14(SUB41(fVar94,0) & ~(byte)iVar105,fVar80))));
            auVar82[8] = SUB41(fVar104,0) & ~(byte)iVar108;
            auVar82[9] = (byte)((uint)fVar104 >> 8) & ~(byte)((uint)iVar108 >> 8);
            auVar82[10] = (byte)((uint)fVar104 >> 0x10) & ~(byte)((uint)iVar108 >> 0x10);
            auVar82[0xb] = (byte)((uint)fVar104 >> 0x18) & ~(byte)((uint)iVar108 >> 0x18);
            auVar84[0xc] = SUB41(fVar124,0) & ~(byte)iVar109;
            auVar84._0_12_ = auVar82;
            auVar84[0xd] = (byte)((uint)fVar124 >> 8) & ~(byte)((uint)iVar109 >> 8);
            auVar84[0xe] = (byte)((uint)fVar124 >> 0x10) & ~(byte)((uint)iVar109 >> 0x10);
            auVar84[0xf] = (byte)((uint)fVar124 >> 0x18) & ~(byte)((uint)iVar109 >> 0x18);
            auVar135._8_8_ = _UNK_03888d18;
            auVar135._0_8_ = _DAT_03888d10;
            fVar124 = fVar80 * (float)_DAT_03889ac0;
            fVar86 = (float)((ulong)auVar82._0_8_ >> 0x20);
            fVar106 = fVar86 * (float)((ulong)_DAT_03889ac0 >> 0x20);
            auVar102._0_8_ = CONCAT44(fVar106,fVar124);
            auVar102._8_4_ = auVar82._8_4_ * (float)_UNK_03889ac8;
            auVar102._12_4_ = auVar84._12_4_ * (float)((ulong)_UNK_03889ac8 >> 0x20);
            uVar125 = a64_TBL(ZEXT816(0),auVar135,DAT_0388a580);
            uVar136 = a64_TBL(ZEXT816(0),auVar135,DAT_0388a680);
            uVar143 = a64_TBL(ZEXT816(0),auVar102,DAT_0388a580);
            uVar150 = a64_TBL(ZEXT816(0),auVar102,DAT_0388a6c8);
            uVar155 = a64_TBL(ZEXT816(0),auVar102,DAT_0388a790);
            uVar154 = a64_TBL(ZEXT816(0),auVar102,DAT_0388a880);
            fVar104 = (float)((ulong)uVar125 >> 0x20);
            fVar141 = (float)((ulong)uVar136 >> 0x20);
            uVar151 = a64_TBL(ZEXT816(0),auVar102,DAT_0388a680);
            auVar103._8_8_ = auVar102._0_8_;
            auVar103._0_8_ = auVar102._0_8_;
            uVar126 = a64_TBL(ZEXT816(0),auVar103,DAT_0388a648);
            fVar52 = (float)uVar126 * 0.0;
            fVar94 = (float)((ulong)uVar126 >> 0x20) * 0.0;
            uVar126 = a64_TBL(ZEXT816(0),auVar135,DAT_0388a880);
            fVar107 = (float)((ulong)uVar126 >> 0x20);
            uVar142 = a64_TBL(ZEXT816(0),auVar84,DAT_0388a580);
            fVar79 = (float)_DAT_03889ad0;
            fVar85 = (float)((ulong)_DAT_03889ad0 >> 0x20);
            fVar87 = (float)_UNK_03889ad8;
            fVar53 = (float)((ulong)_UNK_03889ad8 >> 0x20);
            uVar127 = a64_TBL(ZEXT816(0),auVar84,DAT_0388a680);
            fVar124 = ((float)uVar125 * fVar124 + fVar79 * (float)uVar143 * 0.0 +
                      fVar79 * (float)uVar126 * (float)uVar151) - (float)uVar136 * (float)uVar154;
            fVar106 = (fVar104 * fVar106 + fVar85 * (float)((ulong)uVar143 >> 0x20) * 0.0 +
                      fVar85 * fVar107 * (float)((ulong)uVar151 >> 0x20)) -
                      fVar141 * (float)((ulong)uVar154 >> 0x20);
            uVar56 = SUB41(fVar106,0);
            uVar58 = (undefined1)((uint)fVar106 >> 8);
            uVar60 = (undefined1)((uint)fVar106 >> 0x10);
            uVar62 = (undefined1)((uint)fVar106 >> 0x18);
            fVar30 = ((float)uVar125 * auVar102._8_4_ + fVar87 * (float)uVar136 * (float)uVar150 +
                     fVar87 * fVar52) - (float)uVar126 * (float)uVar155;
            uVar64 = SUB41(fVar30,0);
            uVar66 = (undefined1)((uint)fVar30 >> 8);
            uVar68 = (undefined1)((uint)fVar30 >> 0x10);
            uVar70 = (undefined1)((uint)fVar30 >> 0x18);
            fVar52 = (fVar104 * auVar102._12_4_ + fVar53 * fVar141 * (float)((ulong)uVar150 >> 0x20)
                     + fVar53 * (float)(CONCAT17((char)((uint)fVar94 >> 0x18),
                                                 CONCAT16((char)((uint)fVar94 >> 0x10),
                                                          CONCAT15((char)((uint)fVar94 >> 8),
                                                                   CONCAT14(SUB41(fVar94,0),fVar52))
                                                         )) >> 0x20)) -
                     fVar107 * (float)((ulong)uVar155 >> 0x20);
            uVar72 = SUB41(fVar52,0);
            uVar74 = (undefined1)((uint)fVar52 >> 8);
            uVar76 = (undefined1)((uint)fVar52 >> 0x10);
            uVar78 = (undefined1)((uint)fVar52 >> 0x18);
            auVar23[4] = uVar56;
            auVar23._0_4_ = fVar124;
            auVar23[5] = uVar58;
            auVar23[6] = uVar60;
            auVar23[7] = uVar62;
            auVar23[8] = uVar64;
            auVar23[9] = uVar66;
            auVar23[10] = uVar68;
            auVar23[0xb] = uVar70;
            auVar23[0xc] = uVar72;
            auVar23[0xd] = uVar74;
            auVar23[0xe] = uVar76;
            auVar23[0xf] = uVar78;
            uVar126 = a64_TBL(ZEXT816(0),auVar23,DAT_0388a580);
            auVar24[4] = uVar56;
            auVar24._0_4_ = fVar124;
            auVar24[5] = uVar58;
            auVar24[6] = uVar60;
            auVar24[7] = uVar62;
            auVar24[8] = uVar64;
            auVar24[9] = uVar66;
            auVar24[10] = uVar68;
            auVar24[0xb] = uVar70;
            auVar24[0xc] = uVar72;
            auVar24[0xd] = uVar74;
            auVar24[0xe] = uVar76;
            auVar24[0xf] = uVar78;
            uVar143 = a64_TBL(ZEXT816(0),auVar24,DAT_0388a6c8);
            uVar154 = a64_TBL(ZEXT816(0),auVar84,DAT_0388a880);
            fVar104 = (float)((ulong)uVar127 >> 0x20);
            auVar25[4] = uVar56;
            auVar25._0_4_ = fVar124;
            auVar25[5] = uVar58;
            auVar25[6] = uVar60;
            auVar25[7] = uVar62;
            auVar25[8] = uVar64;
            auVar25[9] = uVar66;
            auVar25[10] = uVar68;
            auVar25[0xb] = uVar70;
            auVar25[0xc] = uVar72;
            auVar25[0xd] = uVar74;
            auVar25[0xe] = uVar76;
            auVar25[0xf] = uVar78;
            uVar150 = a64_TBL(ZEXT816(0),auVar25,DAT_0388a880);
            fVar94 = (float)((ulong)uVar142 >> 0x20);
            auVar26[4] = uVar56;
            auVar26._0_4_ = fVar124;
            auVar26[5] = uVar58;
            auVar26[6] = uVar60;
            auVar26[7] = uVar62;
            auVar26[8] = uVar64;
            auVar26[9] = uVar66;
            auVar26[10] = uVar68;
            auVar26[0xb] = uVar70;
            auVar26[0xc] = uVar72;
            auVar26[0xd] = uVar74;
            auVar26[0xe] = uVar76;
            auVar26[0xf] = uVar78;
            uVar136 = a64_TBL(ZEXT816(0),auVar26,DAT_0388a680);
            auVar27[4] = uVar56;
            auVar27._0_4_ = fVar124;
            auVar27[5] = uVar58;
            auVar27[6] = uVar60;
            auVar27[7] = uVar62;
            auVar27[8] = uVar64;
            auVar27[9] = uVar66;
            auVar27[10] = uVar68;
            auVar27[0xb] = uVar70;
            auVar27[0xc] = uVar72;
            auVar27[0xd] = uVar74;
            auVar27[0xe] = uVar76;
            auVar27[0xf] = uVar78;
            uVar151 = a64_TBL(ZEXT816(0),auVar27,DAT_0388a790);
            fVar107 = (float)((ulong)uVar154 >> 0x20);
            auVar28[4] = uVar56;
            auVar28._0_4_ = fVar124;
            auVar28[5] = uVar58;
            auVar28[6] = uVar60;
            auVar28[7] = uVar62;
            auVar28[8] = SUB41(fVar124,0);
            auVar28[9] = (char)((uint)fVar124 >> 8);
            auVar28[10] = (char)((uint)fVar124 >> 0x10);
            auVar28[0xb] = (char)((uint)fVar124 >> 0x18);
            auVar28[0xc] = uVar56;
            auVar28[0xd] = uVar58;
            auVar28[0xe] = uVar60;
            auVar28[0xf] = uVar62;
            uVar125 = a64_TBL(ZEXT816(0),auVar28,DAT_0388a648);
            fVar79 = ((float)uVar142 * fVar124 + fVar79 * fVar80 * (float)uVar126 +
                     fVar79 * (float)uVar154 * (float)uVar136) - (float)uVar127 * (float)uVar150;
            fVar85 = (fVar94 * fVar106 + fVar85 * fVar86 * (float)((ulong)uVar126 >> 0x20) +
                     fVar85 * fVar107 * (float)((ulong)uVar136 >> 0x20)) -
                     fVar104 * (float)((ulong)uVar150 >> 0x20);
            fVar87 = ((float)uVar142 * fVar30 + fVar87 * (float)uVar127 * (float)uVar143 +
                     fVar87 * fVar80 * (float)uVar125) - (float)uVar154 * (float)uVar151;
            fVar53 = (fVar94 * fVar52 + fVar53 * fVar104 * (float)((ulong)uVar143 >> 0x20) +
                     fVar53 * fVar86 * (float)((ulong)uVar125 >> 0x20)) -
                     fVar107 * (float)((ulong)uVar151 >> 0x20);
            bVar88 = SUB41(fVar79,0) & (byte)_DAT_038897c0;
            bVar89 = (byte)((uint)fVar79 >> 8) & (byte)((ulong)_DAT_038897c0 >> 8);
            bVar122 = (byte)((uint)fVar79 >> 0x10) & (byte)((ulong)_DAT_038897c0 >> 0x10);
            bVar54 = (byte)((uint)fVar79 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x18);
            bVar55 = SUB41(fVar85,0) & (byte)((ulong)_DAT_038897c0 >> 0x20);
            bVar57 = (byte)((uint)fVar85 >> 8) & (byte)((ulong)_DAT_038897c0 >> 0x28);
            bVar59 = (byte)((uint)fVar85 >> 0x10) & (byte)((ulong)_DAT_038897c0 >> 0x30);
            bVar61 = (byte)((uint)fVar85 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x38);
            bVar63 = SUB41(fVar87,0) & (byte)_UNK_038897c8;
            bVar65 = (byte)((uint)fVar87 >> 8) & (byte)((ulong)_UNK_038897c8 >> 8);
            bVar67 = (byte)((uint)fVar87 >> 0x10) & (byte)((ulong)_UNK_038897c8 >> 0x10);
            bVar69 = (byte)((uint)fVar87 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x18);
            bVar71 = SUB41(fVar53,0) & (byte)((ulong)_UNK_038897c8 >> 0x20);
            bVar73 = (byte)((uint)fVar53 >> 8) & (byte)((ulong)_UNK_038897c8 >> 0x28);
            bVar75 = (byte)((uint)fVar53 >> 0x10) & (byte)((ulong)_UNK_038897c8 >> 0x30);
            bVar77 = (byte)((uint)fVar53 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x38);
            auVar112[1] = bVar89;
            auVar112[0] = bVar88;
            auVar112[2] = bVar122;
            auVar112[3] = bVar54;
            auVar112[4] = bVar55;
            auVar112[5] = bVar57;
            auVar112[6] = bVar59;
            auVar112[7] = bVar61;
            auVar112[8] = bVar63;
            auVar112[9] = bVar65;
            auVar112[10] = bVar67;
            auVar112[0xb] = bVar69;
            auVar112[0xc] = bVar71;
            auVar112[0xd] = bVar73;
            auVar112[0xe] = bVar75;
            auVar112[0xf] = bVar77;
            uVar125 = a64_TBL(ZEXT816(0),auVar112,DAT_0388a680);
            auVar129[1] = bVar89;
            auVar129[0] = bVar88;
            auVar129[2] = bVar122;
            auVar129[3] = bVar54;
            auVar129[4] = bVar55;
            auVar129[5] = bVar57;
            auVar129[6] = bVar59;
            auVar129[7] = bVar61;
            auVar129[8] = bVar63;
            auVar129[9] = bVar65;
            auVar129[10] = bVar67;
            auVar129[0xb] = bVar69;
            auVar129[0xc] = bVar71;
            auVar129[0xd] = bVar73;
            auVar129[0xe] = bVar75;
            auVar129[0xf] = bVar77;
            a64_TBL(ZEXT816(0),auVar129,DAT_0388a6d8);
            auVar7[1] = bVar89;
            auVar7[0] = bVar88;
            auVar7[2] = bVar122;
            auVar7[3] = bVar54;
            auVar7[4] = bVar55;
            auVar7[5] = bVar57;
            auVar7[6] = bVar59;
            auVar7[7] = bVar61;
            auVar7[8] = bVar63;
            auVar7[9] = bVar65;
            auVar7[10] = bVar67;
            auVar7[0xb] = bVar69;
            auVar7[0xc] = bVar71;
            auVar7[0xd] = bVar73;
            auVar7[0xe] = bVar75;
            auVar7[0xf] = bVar77;
            uVar126 = a64_TBL(ZEXT816(0),auVar7,DAT_0388a880);
            auVar8[1] = bVar89;
            auVar8[0] = bVar88;
            auVar8[2] = bVar122;
            auVar8[3] = bVar54;
            auVar8[4] = bVar55;
            auVar8[5] = bVar57;
            auVar8[6] = bVar59;
            auVar8[7] = bVar61;
            auVar8[8] = bVar63;
            auVar8[9] = bVar65;
            auVar8[10] = bVar67;
            auVar8[0xb] = bVar69;
            auVar8[0xc] = bVar71;
            auVar8[0xd] = bVar73;
            auVar8[0xe] = bVar75;
            auVar8[0xf] = bVar77;
            a64_TBL(ZEXT816(0),auVar8,DAT_0388a6f0);
            fVar79 = -(float)((ulong)uVar125 >> 0x20);
            fVar85 = (float)((ulong)uVar126 >> 0x20);
            local_b0 = (float)uVar48;
            fStack_ac = (float)((ulong)uVar48 >> 0x20);
            fStack_a8 = (float)uVar81;
            fStack_a4 = (float)((ulong)uVar81 >> 0x20);
            if ((param_6 & 1) == 0) {
              do {
                fVar87 = (float)*puVar50 - local_b0;
                fVar53 = (float)((ulong)*puVar50 >> 0x20) - fStack_ac;
                uVar56 = SUB41(fVar53,0);
                uVar58 = (undefined1)((uint)fVar53 >> 8);
                uVar60 = (undefined1)((uint)fVar53 >> 0x10);
                uVar62 = (undefined1)((uint)fVar53 >> 0x18);
                fVar53 = (float)puVar50[1] - fStack_a8;
                uVar64 = SUB41(fVar53,0);
                uVar66 = (undefined1)((uint)fVar53 >> 8);
                uVar68 = (undefined1)((uint)fVar53 >> 0x10);
                uVar70 = (undefined1)((uint)fVar53 >> 0x18);
                fVar53 = (float)((ulong)puVar50[1] >> 0x20) - fStack_a4;
                uVar72 = SUB41(fVar53,0);
                uVar74 = (undefined1)((uint)fVar53 >> 8);
                uVar76 = (undefined1)((uint)fVar53 >> 0x10);
                uVar78 = (undefined1)((uint)fVar53 >> 0x18);
                auVar9[4] = uVar56;
                auVar9._0_4_ = fVar87;
                auVar9[5] = uVar58;
                auVar9[6] = uVar60;
                auVar9[7] = uVar62;
                auVar9[8] = uVar64;
                auVar9[9] = uVar66;
                auVar9[10] = uVar68;
                auVar9[0xb] = uVar70;
                auVar9[0xc] = uVar72;
                auVar9[0xd] = uVar74;
                auVar9[0xe] = uVar76;
                auVar9[0xf] = uVar78;
                uVar81 = a64_TBL(ZEXT816(0),auVar9,uVar38);
                auVar10[4] = uVar56;
                auVar10._0_4_ = fVar87;
                auVar10[5] = uVar58;
                auVar10[6] = uVar60;
                auVar10[7] = uVar62;
                auVar10[8] = uVar64;
                auVar10[9] = uVar66;
                auVar10[10] = uVar68;
                auVar10[0xb] = uVar70;
                auVar10[0xc] = uVar72;
                auVar10[0xd] = uVar74;
                auVar10[0xe] = uVar76;
                auVar10[0xf] = uVar78;
                a64_TBL(ZEXT816(0),auVar10,uVar31);
                auVar11[4] = uVar56;
                auVar11._0_4_ = fVar87;
                auVar11[5] = uVar58;
                auVar11[6] = uVar60;
                auVar11[7] = uVar62;
                auVar11[8] = uVar64;
                auVar11[9] = uVar66;
                auVar11[10] = uVar68;
                auVar11[0xb] = uVar70;
                auVar11[0xc] = uVar72;
                auVar11[0xd] = uVar74;
                auVar11[0xe] = uVar76;
                auVar11[0xf] = uVar78;
                uVar48 = a64_TBL(ZEXT816(0),auVar11,uVar33);
                auVar12[4] = uVar56;
                auVar12._0_4_ = fVar87;
                auVar12[5] = uVar58;
                auVar12[6] = uVar60;
                auVar12[7] = uVar62;
                auVar12[8] = uVar64;
                auVar12[9] = uVar66;
                auVar12[10] = uVar68;
                auVar12[0xb] = uVar70;
                auVar12[0xc] = uVar72;
                auVar12[0xd] = uVar74;
                auVar12[0xe] = uVar76;
                auVar12[0xf] = uVar78;
                a64_TBL(ZEXT816(0),auVar12,uVar32);
                if (fVar85 * (float)((ulong)uVar81 >> 0x20) +
                    (float)((ulong)uVar48 >> 0x20) * fVar79 < 0.0) {
                  local_98 = puVar50;
                  if (*(ulong *)(param_5 + 0x180) < *(ulong *)(param_5 + 0x188)) {
                    FUN_0193eb14(param_5 + 400,*(ulong *)(param_5 + 0x180),&local_98);
                    *(long *)(param_5 + 0x180) = *(long *)(param_5 + 0x180) + 8;
                  }
                  else {
                    FUN_01940ff8(plVar51,&local_98);
                  }
                }
                puVar50 = puVar50 + 4;
              } while (puVar2 != puVar50);
            }
            else {
              do {
                fVar87 = (float)*puVar50 - local_b0;
                fVar53 = (float)((ulong)*puVar50 >> 0x20) - fStack_ac;
                uVar56 = SUB41(fVar53,0);
                uVar58 = (undefined1)((uint)fVar53 >> 8);
                uVar60 = (undefined1)((uint)fVar53 >> 0x10);
                uVar62 = (undefined1)((uint)fVar53 >> 0x18);
                fVar53 = (float)puVar50[1] - fStack_a8;
                uVar64 = SUB41(fVar53,0);
                uVar66 = (undefined1)((uint)fVar53 >> 8);
                uVar68 = (undefined1)((uint)fVar53 >> 0x10);
                uVar70 = (undefined1)((uint)fVar53 >> 0x18);
                fVar53 = (float)((ulong)puVar50[1] >> 0x20) - fStack_a4;
                uVar72 = SUB41(fVar53,0);
                uVar74 = (undefined1)((uint)fVar53 >> 8);
                uVar76 = (undefined1)((uint)fVar53 >> 0x10);
                uVar78 = (undefined1)((uint)fVar53 >> 0x18);
                auVar13[4] = uVar56;
                auVar13._0_4_ = fVar87;
                auVar13[5] = uVar58;
                auVar13[6] = uVar60;
                auVar13[7] = uVar62;
                auVar13[8] = uVar64;
                auVar13[9] = uVar66;
                auVar13[10] = uVar68;
                auVar13[0xb] = uVar70;
                auVar13[0xc] = uVar72;
                auVar13[0xd] = uVar74;
                auVar13[0xe] = uVar76;
                auVar13[0xf] = uVar78;
                uVar81 = a64_TBL(ZEXT816(0),auVar13,uVar38);
                auVar14[4] = uVar56;
                auVar14._0_4_ = fVar87;
                auVar14[5] = uVar58;
                auVar14[6] = uVar60;
                auVar14[7] = uVar62;
                auVar14[8] = uVar64;
                auVar14[9] = uVar66;
                auVar14[10] = uVar68;
                auVar14[0xb] = uVar70;
                auVar14[0xc] = uVar72;
                auVar14[0xd] = uVar74;
                auVar14[0xe] = uVar76;
                auVar14[0xf] = uVar78;
                a64_TBL(ZEXT816(0),auVar14,uVar31);
                auVar15[4] = uVar56;
                auVar15._0_4_ = fVar87;
                auVar15[5] = uVar58;
                auVar15[6] = uVar60;
                auVar15[7] = uVar62;
                auVar15[8] = uVar64;
                auVar15[9] = uVar66;
                auVar15[10] = uVar68;
                auVar15[0xb] = uVar70;
                auVar15[0xc] = uVar72;
                auVar15[0xd] = uVar74;
                auVar15[0xe] = uVar76;
                auVar15[0xf] = uVar78;
                uVar48 = a64_TBL(ZEXT816(0),auVar15,uVar33);
                auVar16[4] = uVar56;
                auVar16._0_4_ = fVar87;
                auVar16[5] = uVar58;
                auVar16[6] = uVar60;
                auVar16[7] = uVar62;
                auVar16[8] = uVar64;
                auVar16[9] = uVar66;
                auVar16[10] = uVar68;
                auVar16[0xb] = uVar70;
                auVar16[0xc] = uVar72;
                auVar16[0xd] = uVar74;
                auVar16[0xe] = uVar76;
                auVar16[0xf] = uVar78;
                a64_TBL(ZEXT816(0),auVar16,uVar32);
                if (0.0 < fVar85 * (float)((ulong)uVar81 >> 0x20) +
                          (float)((ulong)uVar48 >> 0x20) * fVar79) {
                  local_98 = puVar50;
                  if (*(ulong *)(param_5 + 0x180) < *(ulong *)(param_5 + 0x188)) {
                    FUN_0193eb14(param_5 + 400,*(ulong *)(param_5 + 0x180),&local_98);
                    *(long *)(param_5 + 0x180) = *(long *)(param_5 + 0x180) + 8;
                  }
                  else {
                    FUN_01940ff8(plVar51,&local_98);
                  }
                }
                puVar50 = puVar50 + 4;
              } while (puVar2 != puVar50);
            }
          }
          lVar6 = *(long *)(param_5 + 0x180) - *(long *)(param_5 + 0x178);
          if (lVar6 == 0) {
            bVar5 = false;
            uVar48 = 0;
          }
          else {
            if (((*PTR_DAT_04379678 & 1) == 0) &&
               (iVar95 = __cxa_guard_acquire(PTR_DAT_04379678), iVar95 != 0)) {
              FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379678);
            }
            lVar39 = *(long *)PTR_DAT_04379680;
            *(long *)PTR_DAT_04379688 = lVar39;
            if (lVar6 == 8) {
              uVar43 = 0;
            }
            else {
              uVar41 = lVar6 >> 3;
              lVar6 = 0x3f;
              if ((0x7fffffffffffffffU >> (LZCOUNT(uVar41) & 0x3fU) & uVar41) != 0) {
                lVar6 = 0x40;
              }
              puVar40 = *(ulong **)(lVar39 + 0xd8);
              uVar42 = lVar6 - LZCOUNT(uVar41);
              uVar43 = uVar42 >> 6;
              if ((uVar42 & 0x3f) != 0) {
                uVar43 = uVar43 + 1;
              }
              if (uVar42 < uVar43) {
                uVar42 = 0;
              }
              else {
                uVar44 = 0;
                if (uVar43 != 0) {
                  uVar44 = uVar42 / uVar43;
                }
                uVar42 = 0xffffffffffffffff >> (-uVar44 & 0x3f);
              }
              uVar44 = *puVar40;
              uVar45 = puVar40[1];
              do {
                uVar46 = uVar44 ^ uVar45;
                uVar43 = uVar44 + uVar45;
                uVar45 = uVar46 >> 0x1b | uVar46 << 0x25;
                uVar43 = uVar43 & uVar42;
                uVar44 = uVar46 ^ (uVar44 >> 0x28 | uVar44 << 0x18) ^ uVar46 << 0x10;
              } while (uVar41 <= uVar43);
              *puVar40 = uVar44;
              puVar40[1] = uVar45;
            }
            bVar5 = true;
            uVar48 = *(undefined8 *)(*plVar51 + uVar43 * 8);
          }
          lVar49 = *(long *)(lVar49 + 8);
          piVar1 = (int *)(lVar49 + 0xc);
          do {
            iVar95 = *piVar1;
            cVar4 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar95 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar95 + -1 == 0) {
            *(undefined8 *)(lVar49 + 0x18) = 0;
            (**(code **)(*plVar47 + 0x20))(plVar47);
          }
          if (bVar5) {
            return uVar48;
          }
          return 0;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      param_6 = param_6 & 0xffffffff;
      iVar95 = iVar105;
    } while (iVar105 != 0);
  }
  return 0;
}


