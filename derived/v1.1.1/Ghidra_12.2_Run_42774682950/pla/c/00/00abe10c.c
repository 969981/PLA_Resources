/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00abe10c; name: FUN_00abe10c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00abe10c(float param_1,long param_2,undefined8 *param_3,long *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  long lVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined2 uVar20;
  undefined8 uVar21;
  int iVar22;
  long lVar23;
  int iVar24;
  float fVar25;
  undefined2 uVar26;
  int iVar27;
  undefined8 uVar28;
  int iVar29;
  int iVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  ulong uVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  int iVar50;
  int iVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 extraout_b0;
  undefined1 uVar56;
  undefined1 extraout_var;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 extraout_var_00;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 extraout_var_01;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  undefined1 uVar73;
  byte bVar74;
  undefined1 uVar75;
  byte bVar76;
  undefined1 uVar77;
  byte bVar78;
  undefined1 uVar79;
  byte bVar80;
  undefined1 uVar81;
  byte bVar82;
  undefined1 uVar83;
  byte bVar84;
  undefined1 uVar85;
  byte bVar86;
  undefined1 uVar87;
  byte bVar88;
  undefined1 uVar89;
  byte bVar90;
  undefined1 uVar91;
  byte bVar92;
  undefined1 uVar93;
  byte bVar94;
  undefined1 uVar95;
  byte bVar96;
  undefined1 uVar97;
  byte bVar98;
  float fVar99;
  float fVar100;
  undefined8 uVar101;
  undefined8 uVar102;
  float fVar105;
  float fVar106;
  float fVar107;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  float fVar108;
  float fVar110;
  undefined8 uVar109;
  float fVar111;
  undefined8 uVar112;
  undefined8 uVar113;
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  float fVar116;
  undefined8 uVar117;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  float fVar120;
  undefined8 uVar121;
  undefined8 uVar122;
  float fVar126;
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long *local_c0;
  undefined8 uStack_b8;
  long *local_b0;
  undefined8 uStack_a8;
  long *local_58;
  
  fVar11 = *(float *)(param_2 + 0x2a0);
  FUN_009c69bc(&local_b0);
  lVar23 = local_b0[0x1b];
  lVar48 = local_b0[0x1a];
  if (local_b0 != (long *)0x0) {
    lVar47 = local_b0[0xb];
    piVar1 = (int *)(lVar47 + 0xc);
    do {
      iVar50 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar50 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar50 + -1 == 0) {
      *(undefined8 *)(lVar47 + 0x18) = 0;
      (**(code **)(*local_b0 + 0x20))();
    }
  }
  local_58 = (long *)*param_4;
  lVar12 = local_58[0x1b];
  lVar47 = local_58[0x1a];
  if (local_58 != (long *)0x0) {
    lVar49 = local_58[0xb];
    if (*(undefined8 **)(lVar49 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar49 + 0x10) == 0) {
      uVar45 = (**(code **)**(undefined8 **)(lVar49 + 0x18))();
      *(undefined8 *)(lVar49 + 0x10) = uVar45;
    }
    piVar1 = (int *)(lVar49 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  fVar4 = (float)lVar47;
  fVar108 = (float)lVar48 - fVar4;
  fVar8 = (float)((ulong)lVar47 >> 0x20);
  fVar9 = (float)lVar12;
  fVar129 = (float)lVar23 - fVar9;
  fVar10 = (float)((ulong)lVar12 >> 0x20);
  fVar13 = (float)((ulong)lVar23 >> 0x20) - fVar10;
  FUN_00ab8f88(&local_58);
  if (local_58 != (long *)0x0) {
    lVar48 = local_58[0xb];
    piVar1 = (int *)(lVar48 + 0xc);
    do {
      iVar50 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar50 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar50 + -1 == 0) {
      *(undefined8 *)(lVar48 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
  uVar44 = DAT_0388a880;
  uVar43 = DAT_0388a790;
  uVar42 = DAT_0388a6c8;
  uVar41 = DAT_0388a680;
  uVar40 = DAT_0388a648;
  uVar39 = DAT_0388a580;
  uVar38 = _UNK_03889ad8;
  uVar37 = _DAT_03889ad0;
  uVar36 = _UNK_03889ac8;
  uVar35 = _DAT_03889ac0;
  uVar34 = _UNK_038897c8;
  uVar45 = _DAT_038897c0;
  fVar54 = fVar108 * fVar108;
  fVar55 = fVar129 * fVar129;
  uVar57 = (undefined1)((uint)fVar55 >> 8);
  uVar59 = (undefined1)((uint)fVar55 >> 0x10);
  uVar61 = (undefined1)((uint)fVar55 >> 0x18);
  fVar107 = (float)(CONCAT17((char)((uint)fVar13 >> 0x18),
                             CONCAT16((char)((uint)fVar13 >> 0x10),
                                      CONCAT15((char)((uint)fVar13 >> 8),
                                               CONCAT14(SUB41(fVar13,0),fVar129)))) >> 0x20);
  fVar13 = fVar107 * fVar107;
  uVar56 = (undefined1)((uint)fVar13 >> 8);
  uVar58 = (undefined1)((uint)fVar13 >> 0x10);
  uVar60 = (undefined1)((uint)fVar13 >> 0x18);
  auVar114._4_4_ = 0;
  auVar114._0_4_ = fVar54;
  auVar114[8] = SUB41(fVar55,0);
  auVar114[9] = uVar57;
  auVar114[10] = uVar59;
  auVar114[0xb] = uVar61;
  auVar114[0xc] = SUB41(fVar13,0);
  auVar114[0xd] = uVar56;
  auVar114[0xe] = uVar58;
  auVar114[0xf] = uVar60;
  auVar118._4_4_ = 0;
  auVar118._0_4_ = fVar54;
  auVar118[8] = SUB41(fVar55,0);
  auVar118[9] = uVar57;
  auVar118[10] = uVar59;
  auVar118[0xb] = uVar61;
  auVar118[0xc] = SUB41(fVar13,0);
  auVar118[0xd] = uVar56;
  auVar118[0xe] = uVar58;
  auVar118[0xf] = uVar60;
  auVar114 = NEON_ext(auVar114,auVar118,8,1);
  fVar54 = auVar114._0_4_ + fVar54;
  fVar13 = auVar114._4_4_ + 0.0;
  fVar52 = fVar54 + fVar13;
  fVar54 = fVar54 + fVar13;
  uVar57 = SUB41(fVar54,0);
  uVar59 = (undefined1)((uint)fVar54 >> 8);
  uVar56 = (undefined1)((uint)fVar54 >> 0x10);
  uVar58 = (undefined1)((uint)fVar54 >> 0x18);
  fVar55 = (float)((ulong)DAT_0388a7e8 >> 0x20);
  fVar53 = (float)DAT_0388a7e8 + fVar55;
  fVar55 = (float)DAT_0388a7e8 + fVar55;
  uVar61 = SUB41(fVar55,0);
  uVar60 = (undefined1)((uint)fVar55 >> 8);
  uVar62 = (undefined1)((uint)fVar55 >> 0x10);
  uVar67 = (undefined1)((uint)fVar55 >> 0x18);
  auVar124[4] = uVar57;
  auVar124._0_4_ = fVar52;
  auVar124[5] = uVar59;
  auVar124[6] = uVar56;
  auVar124[7] = uVar58;
  auVar124[8] = SUB41(fVar52,0);
  auVar124[9] = (char)((uint)fVar52 >> 8);
  auVar124[10] = (char)((uint)fVar52 >> 0x10);
  auVar124[0xb] = (char)((uint)fVar52 >> 0x18);
  auVar124[0xc] = uVar57;
  auVar124[0xd] = uVar59;
  auVar124[0xe] = uVar56;
  auVar124[0xf] = uVar58;
  auVar118 = NEON_frsqrte(auVar124,4);
  auVar132[4] = uVar61;
  auVar132._0_4_ = fVar53;
  auVar132[5] = uVar60;
  auVar132[6] = uVar62;
  auVar132[7] = uVar67;
  auVar132[8] = SUB41(fVar53,0);
  auVar132[9] = (char)((uint)fVar53 >> 8);
  auVar132[10] = (char)((uint)fVar53 >> 0x10);
  auVar132[0xb] = (char)((uint)fVar53 >> 0x18);
  auVar132[0xc] = uVar61;
  auVar132[0xd] = uVar60;
  auVar132[0xe] = uVar62;
  auVar132[0xf] = uVar67;
  auVar114 = NEON_frsqrte(auVar132,4);
  auVar131._0_4_ = auVar118._0_4_ * fVar52;
  auVar131._4_4_ = auVar118._4_4_ * fVar54;
  auVar131._8_4_ = auVar118._8_4_ * fVar52;
  uVar20 = (undefined2)(CONCAT15(uVar59,CONCAT14(uVar57,fVar52)) >> 0x20);
  auVar131._12_4_ = auVar118._12_4_ * (float)CONCAT13(uVar58,CONCAT12(uVar56,uVar20));
  auVar123._0_4_ = auVar114._0_4_ * fVar53;
  auVar123._4_4_ = auVar114._4_4_ * fVar55;
  auVar123._8_4_ = auVar114._8_4_ * fVar53;
  uVar26 = (undefined2)(CONCAT15(uVar60,CONCAT14(uVar61,fVar53)) >> 0x20);
  auVar123._12_4_ = auVar114._12_4_ * (float)CONCAT13(uVar67,CONCAT12(uVar62,uVar26));
  auVar132 = NEON_frsqrts(auVar118,auVar131,4);
  auVar124 = NEON_frsqrts(auVar114,auVar123,4);
  auVar119._0_4_ = auVar118._0_4_ * auVar132._0_4_;
  auVar119._4_4_ = auVar118._4_4_ * auVar132._4_4_;
  auVar119._8_4_ = auVar118._8_4_ * auVar132._8_4_;
  auVar119._12_4_ = auVar118._12_4_ * auVar132._12_4_;
  auVar115._0_4_ = auVar114._0_4_ * auVar124._0_4_;
  auVar115._4_4_ = auVar114._4_4_ * auVar124._4_4_;
  auVar115._8_4_ = auVar114._8_4_ * auVar124._8_4_;
  auVar115._12_4_ = auVar114._12_4_ * auVar124._12_4_;
  auVar133._0_4_ = fVar52 * auVar119._0_4_;
  auVar133._4_4_ = fVar54 * auVar119._4_4_;
  auVar133._8_4_ = fVar52 * auVar119._8_4_;
  auVar133._12_4_ = (float)CONCAT13(uVar58,CONCAT12(uVar56,uVar20)) * auVar119._12_4_;
  auVar125._0_4_ = fVar53 * auVar115._0_4_;
  auVar125._4_4_ = fVar55 * auVar115._4_4_;
  auVar125._8_4_ = fVar53 * auVar115._8_4_;
  auVar125._12_4_ = (float)CONCAT13(uVar67,CONCAT12(uVar62,uVar26)) * auVar115._12_4_;
  fVar13 = param_1 + 4.5 +
           (float)CONCAT13(extraout_var_01,
                           CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))) +
           *(float *)(param_2 + 0x2a0);
  uVar57 = (undefined1)((uint)fVar13 >> 8);
  uVar59 = (undefined1)((uint)fVar13 >> 0x10);
  uVar61 = (undefined1)((uint)fVar13 >> 0x18);
  auVar118 = NEON_frsqrts(auVar115,auVar125,4);
  auVar114 = NEON_frsqrts(auVar119,auVar133,4);
  fVar128 = *(float *)PTR_FloatDegree180_04372ce0;
  fVar138 = *(float *)PTR_FloatPi_04372cf0;
  fVar140 = *(float *)PTR_Float1Divided2Pi_04372d20;
  fVar127 = *(float *)PTR_FloatPiDivided2_04372d38;
  fVar141 = *(float *)PTR_Float2Pi_04372d30;
  iVar27 = -(uint)(fVar53 == 0.0);
  iVar29 = -(uint)(fVar55 == 0.0);
  iVar30 = -(uint)(fVar53 == 0.0);
  iVar50 = -(uint)(fVar52 == 0.0);
  iVar51 = -(uint)(fVar54 == 0.0);
  iVar22 = -(uint)(fVar52 == 0.0);
  iVar24 = -(uint)((float)CONCAT13(uVar58,CONCAT12(uVar56,uVar20)) == 0.0);
  fVar146 = *(float *)(PTR_SinCoefficients_04372d28 + 0x10);
  fVar142 = *(float *)PTR_SinCoefficients_04372d28;
  fVar143 = *(float *)(PTR_SinCoefficients_04372d28 + 4);
  fVar144 = *(float *)(PTR_SinCoefficients_04372d28 + 8);
  fVar145 = *(float *)(PTR_SinCoefficients_04372d28 + 0xc);
  fVar108 = fVar108 * auVar119._0_4_ * auVar114._0_4_;
  fVar54 = auVar119._4_4_ * auVar114._4_4_ * 0.0;
  fVar129 = fVar129 * auVar119._8_4_ * auVar114._8_4_;
  fVar107 = fVar107 * auVar119._12_4_ * auVar114._12_4_;
  fVar55 = auVar115._0_4_ * auVar118._0_4_ * (float)DAT_0388a140;
  fVar110 = auVar115._4_4_ * auVar118._4_4_ * (float)((ulong)DAT_0388a140 >> 0x20);
  fVar111 = auVar115._8_4_ * auVar118._8_4_ * (float)DAT_0388a148;
  fVar147 = *(float *)PTR_CosCoefficients_04372d40;
  fVar148 = *(float *)(PTR_CosCoefficients_04372d40 + 4);
  fVar53 = (float)CONCAT13((byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18),
                           CONCAT12((byte)((uint)fVar55 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10),
                                    CONCAT11((byte)((uint)fVar55 >> 8) & ~(byte)((uint)iVar27 >> 8),
                                             SUB41(fVar55,0) & ~(byte)iVar27)));
  fVar55 = fVar11 + fVar8;
  fVar52 = fVar10 + 0.0;
  fVar116 = *(float *)(PTR_CosCoefficients_04372d40 + 0x10);
  fVar120 = *(float *)(PTR_CosCoefficients_04372d40 + 8);
  fVar139 = *(float *)(PTR_CosCoefficients_04372d40 + 0xc);
  uStack_e8 = CONCAT17((byte)((uint)fVar107 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                       CONCAT16((byte)((uint)fVar107 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10),
                                CONCAT15((byte)((uint)fVar107 >> 8) & ~(byte)((uint)iVar24 >> 8),
                                         CONCAT14(SUB41(fVar107,0) & ~(byte)iVar24,
                                                  CONCAT13((byte)((uint)fVar129 >> 0x18) &
                                                           ~(byte)((uint)iVar22 >> 0x18),
                                                           CONCAT12((byte)((uint)fVar129 >> 0x10) &
                                                                    ~(byte)((uint)iVar22 >> 0x10),
                                                                    CONCAT11((byte)((uint)fVar129 >>
                                                                                   8) &
                                                                             ~(byte)((uint)iVar22 >>
                                                                                    8),
                                                                             SUB41(fVar129,0) &
                                                                             ~(byte)iVar22)))))));
  local_f0 = CONCAT17((byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18),
                      CONCAT16((byte)((uint)fVar54 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10),
                               CONCAT15((byte)((uint)fVar54 >> 8) & ~(byte)((uint)iVar51 >> 8),
                                        CONCAT14(SUB41(fVar54,0) & ~(byte)iVar51,
                                                 CONCAT13((byte)((uint)fVar108 >> 0x18) &
                                                          ~(byte)((uint)iVar50 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar108 >> 0x10) &
                                                                   ~(byte)((uint)iVar50 >> 0x10),
                                                                   CONCAT11((byte)((uint)fVar108 >>
                                                                                  8) &
                                                                            ~(byte)((uint)iVar50 >>
                                                                                   8),
                                                                            SUB41(fVar108,0) &
                                                                            ~(byte)iVar50)))))));
  iVar50 = 0;
  iVar51 = 1;
  do {
    fVar108 = (fVar138 / fVar128) * (float)(iVar50 * iVar51) * 0.5;
    bVar70 = 0x3f;
    if (fVar108 < 0.0) {
      bVar70 = 0xbf;
    }
    fVar108 = fVar108 - fVar141 * (float)(int)(fVar140 * fVar108 + (float)((uint)bVar70 << 0x18));
    uVar56 = SUB41(fVar108,0);
    uVar58 = (undefined1)((uint)fVar108 >> 8);
    uVar60 = (undefined1)((uint)fVar108 >> 0x10);
    uVar62 = (undefined1)((uint)fVar108 >> 0x18);
    fVar129 = (float)((ulong)local_f0 >> 0x20);
    if (fVar127 < fVar108) {
      fVar108 = fVar138 - fVar108;
      uVar56 = SUB41(fVar108,0);
      uVar58 = (undefined1)((uint)fVar108 >> 8);
      uVar60 = (undefined1)((uint)fVar108 >> 0x10);
      uVar62 = (undefined1)((uint)fVar108 >> 0x18);
      uVar67 = 0xbf;
    }
    else if (fVar108 < -fVar127) {
      fVar108 = -fVar138 - fVar108;
      uVar56 = SUB41(fVar108,0);
      uVar58 = (undefined1)((uint)fVar108 >> 8);
      uVar60 = (undefined1)((uint)fVar108 >> 0x10);
      uVar62 = (undefined1)((uint)fVar108 >> 0x18);
      uVar67 = 0xbf;
    }
    else {
      uVar67 = 0x3f;
    }
    fVar99 = (float)CONCAT13(uVar62,CONCAT12(uVar60,CONCAT11(uVar58,uVar56))) *
             (float)CONCAT13(uVar62,CONCAT12(uVar60,CONCAT11(uVar58,uVar56)));
    fVar108 = (float)CONCAT13(uVar62,CONCAT12(uVar60,CONCAT11(uVar58,uVar56))) *
              (fVar99 * (fVar99 * (fVar145 +
                                  fVar99 * (fVar99 * (fVar143 - fVar142 * fVar99) - fVar144)) -
                        fVar146) + 1.0);
    fVar54 = fVar53 * fVar108;
    fVar107 = (float)(CONCAT17((byte)((uint)fVar110 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18),
                               CONCAT16((byte)((uint)fVar110 >> 0x10) &
                                        ~(byte)((uint)iVar29 >> 0x10),
                                        CONCAT15((byte)((uint)fVar110 >> 8) &
                                                 ~(byte)((uint)iVar29 >> 8),
                                                 CONCAT14(SUB41(fVar110,0) & ~(byte)iVar29,fVar53)))
                              ) >> 0x20) * fVar108;
    uVar56 = SUB41(fVar107,0);
    uVar58 = (undefined1)((uint)fVar107 >> 8);
    uVar60 = (undefined1)((uint)fVar107 >> 0x10);
    uVar62 = (undefined1)((uint)fVar107 >> 0x18);
    fVar108 = (float)CONCAT13((byte)((uint)fVar111 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18),
                              CONCAT12((byte)((uint)fVar111 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10)
                                       ,CONCAT11((byte)((uint)fVar111 >> 8) &
                                                 ~(byte)((uint)iVar30 >> 8),
                                                 SUB41(fVar111,0) & ~(byte)iVar30))) * fVar108;
    uVar63 = SUB41(fVar108,0);
    uVar64 = (undefined1)((uint)fVar108 >> 8);
    uVar65 = (undefined1)((uint)fVar108 >> 0x10);
    uVar66 = (undefined1)((uint)fVar108 >> 0x18);
    auVar31._8_8_ = uStack_e8;
    auVar31._0_8_ = local_f0;
    uVar28 = a64_TBL(ZEXT816(0),auVar31,uVar41);
    fVar99 = (float)CONCAT13(uVar67,0x800000) *
             (fVar99 * (fVar99 * (fVar139 +
                                 fVar99 * (fVar99 * (fVar148 - fVar147 * fVar99) - fVar120)) -
                       fVar116) + 1.0);
    uVar73 = (undefined1)((uint)fVar99 >> 0x18);
    uVar67 = SUB41(fVar99,0);
    uVar68 = (undefined1)((uint)fVar99 >> 8);
    uVar69 = (undefined1)((uint)fVar99 >> 0x10);
    auVar32._8_8_ = uStack_e8;
    auVar32._0_8_ = local_f0;
    uVar21 = a64_TBL(ZEXT816(0),auVar32,uVar39);
    fVar100 = fVar54 * (float)uVar35;
    fVar105 = fVar107 * (float)((ulong)uVar35 >> 0x20);
    auVar103._0_8_ = CONCAT44(fVar105,fVar100);
    auVar103._8_4_ = fVar108 * (float)uVar36;
    auVar103._12_4_ = fVar99 * (float)((ulong)uVar36 >> 0x20);
    uVar109 = a64_TBL(ZEXT816(0),auVar103,uVar39);
    uVar112 = a64_TBL(ZEXT816(0),auVar103,uVar42);
    fVar25 = (float)((ulong)uVar28 >> 0x20);
    fVar108 = (float)((ulong)uVar21 >> 0x20);
    uVar117 = a64_TBL(ZEXT816(0),auVar103,uVar44);
    uVar113 = a64_TBL(ZEXT816(0),auVar103,uVar41);
    uVar121 = a64_TBL(ZEXT816(0),auVar103,uVar43);
    auVar104._8_8_ = auVar103._0_8_;
    auVar104._0_8_ = auVar103._0_8_;
    uVar101 = a64_TBL(ZEXT816(0),auVar104,uVar40);
    auVar33._8_8_ = uStack_e8;
    auVar33._0_8_ = local_f0;
    uVar102 = a64_TBL(ZEXT816(0),auVar33,uVar44);
    fVar130 = (float)((ulong)uVar102 >> 0x20);
    auVar5[4] = uVar56;
    auVar5._0_4_ = fVar54;
    auVar5[5] = uVar58;
    auVar5[6] = uVar60;
    auVar5[7] = uVar62;
    auVar5[8] = uVar63;
    auVar5[9] = uVar64;
    auVar5[10] = uVar65;
    auVar5[0xb] = uVar66;
    auVar5[0xc] = uVar67;
    auVar5[0xd] = uVar68;
    auVar5[0xe] = uVar69;
    auVar5[0xf] = uVar73;
    uVar122 = a64_TBL(ZEXT816(0),auVar5,uVar44);
    fVar134 = (float)uVar37;
    fVar135 = (float)((ulong)uVar37 >> 0x20);
    fVar136 = (float)uVar38;
    fVar137 = (float)((ulong)uVar38 >> 0x20);
    fVar99 = ((float)uVar21 * fVar100 + fVar134 * (float)local_f0 * (float)uVar109 +
             fVar134 * (float)uVar102 * (float)uVar113) - (float)uVar28 * (float)uVar117;
    fVar100 = (fVar108 * fVar105 + fVar135 * fVar129 * (float)((ulong)uVar109 >> 0x20) +
              fVar135 * fVar130 * (float)((ulong)uVar113 >> 0x20)) -
              fVar25 * (float)((ulong)uVar117 >> 0x20);
    uVar75 = SUB41(fVar100,0);
    uVar77 = (undefined1)((uint)fVar100 >> 8);
    uVar79 = (undefined1)((uint)fVar100 >> 0x10);
    uVar81 = (undefined1)((uint)fVar100 >> 0x18);
    fVar105 = ((float)uVar21 * auVar103._8_4_ + fVar136 * (float)uVar28 * (float)uVar112 +
              fVar136 * (float)local_f0 * (float)uVar101) - (float)uVar102 * (float)uVar121;
    uVar83 = SUB41(fVar105,0);
    uVar85 = (undefined1)((uint)fVar105 >> 8);
    uVar87 = (undefined1)((uint)fVar105 >> 0x10);
    uVar89 = (undefined1)((uint)fVar105 >> 0x18);
    fVar25 = (fVar108 * auVar103._12_4_ + fVar137 * fVar25 * (float)((ulong)uVar112 >> 0x20) +
             fVar137 * fVar129 * (float)((ulong)uVar101 >> 0x20)) -
             fVar130 * (float)((ulong)uVar121 >> 0x20);
    uVar91 = SUB41(fVar25,0);
    uVar93 = (undefined1)((uint)fVar25 >> 8);
    uVar95 = (undefined1)((uint)fVar25 >> 0x10);
    uVar97 = (undefined1)((uint)fVar25 >> 0x18);
    auVar6[4] = uVar56;
    auVar6._0_4_ = fVar54;
    auVar6[5] = uVar58;
    auVar6[6] = uVar60;
    auVar6[7] = uVar62;
    auVar6[8] = uVar63;
    auVar6[9] = uVar64;
    auVar6[10] = uVar65;
    auVar6[0xb] = uVar66;
    auVar6[0xc] = uVar67;
    auVar6[0xd] = uVar68;
    auVar6[0xe] = uVar69;
    auVar6[0xf] = uVar73;
    uVar102 = a64_TBL(ZEXT816(0),auVar6,uVar39);
    auVar7[4] = uVar56;
    auVar7._0_4_ = fVar54;
    auVar7[5] = uVar58;
    auVar7[6] = uVar60;
    auVar7[7] = uVar62;
    auVar7[8] = uVar63;
    auVar7[9] = uVar64;
    auVar7[10] = uVar65;
    auVar7[0xb] = uVar66;
    auVar7[0xc] = uVar67;
    auVar7[0xd] = uVar68;
    auVar7[0xe] = uVar69;
    auVar7[0xf] = uVar73;
    uVar28 = a64_TBL(ZEXT816(0),auVar7,uVar41);
    auVar14[4] = uVar75;
    auVar14._0_4_ = fVar99;
    auVar14[5] = uVar77;
    auVar14[6] = uVar79;
    auVar14[7] = uVar81;
    auVar14[8] = uVar83;
    auVar14[9] = uVar85;
    auVar14[10] = uVar87;
    auVar14[0xb] = uVar89;
    auVar14[0xc] = uVar91;
    auVar14[0xd] = uVar93;
    auVar14[0xe] = uVar95;
    auVar14[0xf] = uVar97;
    uVar101 = a64_TBL(ZEXT816(0),auVar14,uVar39);
    auVar15[4] = uVar75;
    auVar15._0_4_ = fVar99;
    auVar15[5] = uVar77;
    auVar15[6] = uVar79;
    auVar15[7] = uVar81;
    auVar15[8] = uVar83;
    auVar15[9] = uVar85;
    auVar15[10] = uVar87;
    auVar15[0xb] = uVar89;
    auVar15[0xc] = uVar91;
    auVar15[0xd] = uVar93;
    auVar15[0xe] = uVar95;
    auVar15[0xf] = uVar97;
    uVar112 = a64_TBL(ZEXT816(0),auVar15,uVar42);
    fVar130 = (float)((ulong)uVar28 >> 0x20);
    auVar16[4] = uVar75;
    auVar16._0_4_ = fVar99;
    auVar16[5] = uVar77;
    auVar16[6] = uVar79;
    auVar16[7] = uVar81;
    auVar16[8] = uVar83;
    auVar16[9] = uVar85;
    auVar16[10] = uVar87;
    auVar16[0xb] = uVar89;
    auVar16[0xc] = uVar91;
    auVar16[0xd] = uVar93;
    auVar16[0xe] = uVar95;
    auVar16[0xf] = uVar97;
    uVar113 = a64_TBL(ZEXT816(0),auVar16,uVar44);
    fVar106 = (float)((ulong)uVar102 >> 0x20);
    auVar17[4] = uVar75;
    auVar17._0_4_ = fVar99;
    auVar17[5] = uVar77;
    auVar17[6] = uVar79;
    auVar17[7] = uVar81;
    auVar17[8] = uVar83;
    auVar17[9] = uVar85;
    auVar17[10] = uVar87;
    auVar17[0xb] = uVar89;
    auVar17[0xc] = uVar91;
    auVar17[0xd] = uVar93;
    auVar17[0xe] = uVar95;
    auVar17[0xf] = uVar97;
    uVar109 = a64_TBL(ZEXT816(0),auVar17,uVar41);
    auVar18[4] = uVar75;
    auVar18._0_4_ = fVar99;
    auVar18[5] = uVar77;
    auVar18[6] = uVar79;
    auVar18[7] = uVar81;
    auVar18[8] = uVar83;
    auVar18[9] = uVar85;
    auVar18[10] = uVar87;
    auVar18[0xb] = uVar89;
    auVar18[0xc] = uVar91;
    auVar18[0xd] = uVar93;
    auVar18[0xe] = uVar95;
    auVar18[0xf] = uVar97;
    uVar117 = a64_TBL(ZEXT816(0),auVar18,uVar43);
    fVar126 = (float)((ulong)uVar122 >> 0x20);
    auVar19[4] = uVar75;
    auVar19._0_4_ = fVar99;
    auVar19[5] = uVar77;
    auVar19[6] = uVar79;
    auVar19[7] = uVar81;
    auVar19[8] = SUB41(fVar99,0);
    auVar19[9] = (char)((uint)fVar99 >> 8);
    auVar19[10] = (char)((uint)fVar99 >> 0x10);
    auVar19[0xb] = (char)((uint)fVar99 >> 0x18);
    auVar19[0xc] = uVar75;
    auVar19[0xd] = uVar77;
    auVar19[0xe] = uVar79;
    auVar19[0xf] = uVar81;
    uVar21 = a64_TBL(ZEXT816(0),auVar19,uVar40);
    fVar108 = fVar54 * (float)uVar21;
    fVar129 = fVar107 * (float)((ulong)uVar21 >> 0x20);
    fVar54 = ((float)uVar102 * fVar99 + fVar134 * fVar54 * (float)uVar101 +
             fVar134 * (float)uVar122 * (float)uVar109) - (float)uVar28 * (float)uVar113;
    fVar107 = (fVar106 * fVar100 + fVar135 * fVar107 * (float)((ulong)uVar101 >> 0x20) +
              fVar135 * fVar126 * (float)((ulong)uVar109 >> 0x20)) -
              fVar130 * (float)((ulong)uVar113 >> 0x20);
    fVar99 = ((float)uVar102 * fVar105 + fVar136 * (float)uVar28 * (float)uVar112 +
             fVar136 * fVar108) - (float)uVar122 * (float)uVar117;
    fVar108 = (fVar106 * fVar25 + fVar137 * fVar130 * (float)((ulong)uVar112 >> 0x20) +
              fVar137 * (float)(CONCAT17((char)((uint)fVar129 >> 0x18),
                                         CONCAT16((char)((uint)fVar129 >> 0x10),
                                                  CONCAT15((char)((uint)fVar129 >> 8),
                                                           CONCAT14(SUB41(fVar129,0),fVar108)))) >>
                               0x20)) - fVar126 * (float)((ulong)uVar117 >> 0x20);
    bVar70 = SUB41(fVar54,0) & (byte)uVar45;
    bVar71 = (byte)((uint)fVar54 >> 8) & (byte)((ulong)uVar45 >> 8);
    bVar72 = (byte)((uint)fVar54 >> 0x10) & (byte)((ulong)uVar45 >> 0x10);
    bVar74 = (byte)((uint)fVar54 >> 0x18) & (byte)((ulong)uVar45 >> 0x18);
    bVar76 = SUB41(fVar107,0) & (byte)((ulong)uVar45 >> 0x20);
    bVar78 = (byte)((uint)fVar107 >> 8) & (byte)((ulong)uVar45 >> 0x28);
    bVar80 = (byte)((uint)fVar107 >> 0x10) & (byte)((ulong)uVar45 >> 0x30);
    bVar82 = (byte)((uint)fVar107 >> 0x18) & (byte)((ulong)uVar45 >> 0x38);
    bVar84 = SUB41(fVar99,0) & (byte)uVar34;
    bVar86 = (byte)((uint)fVar99 >> 8) & (byte)((ulong)uVar34 >> 8);
    bVar88 = (byte)((uint)fVar99 >> 0x10) & (byte)((ulong)uVar34 >> 0x10);
    bVar90 = (byte)((uint)fVar99 >> 0x18) & (byte)((ulong)uVar34 >> 0x18);
    bVar92 = SUB41(fVar108,0) & (byte)((ulong)uVar34 >> 0x20);
    bVar94 = (byte)((uint)fVar108 >> 8) & (byte)((ulong)uVar34 >> 0x28);
    bVar96 = (byte)((uint)fVar108 >> 0x10) & (byte)((ulong)uVar34 >> 0x30);
    bVar98 = (byte)((uint)fVar108 >> 0x18) & (byte)((ulong)uVar34 >> 0x38);
    uStack_e8 = CONCAT17(bVar98,CONCAT16(bVar96,CONCAT15(bVar94,CONCAT14(bVar92,CONCAT13(bVar90,
                                                  CONCAT12(bVar88,CONCAT11(bVar86,bVar84)))))));
    local_f0 = CONCAT17(bVar82,CONCAT16(bVar80,CONCAT15(bVar78,CONCAT14(bVar76,CONCAT13(bVar74,
                                                  CONCAT12(bVar72,CONCAT11(bVar71,bVar70)))))));
    fVar108 = fVar8 + (float)(CONCAT17(uVar61,CONCAT16(uVar59,CONCAT15(uVar57,CONCAT14(SUB41(fVar13,
                                                  0),fVar13)))) >> 0x20) *
                      (float)CONCAT13(bVar82,CONCAT12(bVar80,CONCAT11(bVar78,bVar76)));
    fVar129 = fVar10 + (float)(CONCAT17(uVar61,CONCAT16(uVar59,CONCAT15(uVar57,CONCAT14(SUB41(fVar13
                                                  ,0),fVar13)))) >> 0x20) *
                       (float)CONCAT13(bVar98,CONCAT12(bVar96,CONCAT11(bVar94,bVar92)));
    uStack_a8 = CONCAT17((char)((uint)fVar129 >> 0x18),
                         CONCAT16((char)((uint)fVar129 >> 0x10),
                                  CONCAT15((char)((uint)fVar129 >> 8),
                                           CONCAT14(SUB41(fVar129,0),
                                                    fVar9 + fVar13 * (float)CONCAT13(bVar90,CONCAT12
                                                  (bVar88,CONCAT11(bVar86,bVar84)))))));
    local_b0 = (long *)CONCAT17((char)((uint)fVar108 >> 0x18),
                                CONCAT16((char)((uint)fVar108 >> 0x10),
                                         CONCAT15((char)((uint)fVar108 >> 8),
                                                  CONCAT14(SUB41(fVar108,0),
                                                           fVar4 + fVar13 * (float)CONCAT13(bVar74,
                                                  CONCAT12(bVar72,CONCAT11(bVar71,bVar70)))))));
    uVar46 = FUN_00ab5160(&local_b0,&local_c0,0x1027000,5);
    if ((uVar46 & 1) != 0) {
      local_b0 = local_c0;
      uStack_a8 = uStack_b8;
      fVar108 = fVar11 + (float)((ulong)local_c0 >> 0x20);
      fVar129 = (float)((ulong)uStack_b8 >> 0x20) + 0.0;
      uStack_c8 = CONCAT17((char)((uint)fVar129 >> 0x18),
                           CONCAT16((char)((uint)fVar129 >> 0x10),
                                    CONCAT15((char)((uint)fVar129 >> 8),
                                             CONCAT14(SUB41(fVar129,0),(float)uStack_b8 + 0.0))));
      local_d0 = CONCAT17((char)((uint)fVar108 >> 0x18),
                          CONCAT16((char)((uint)fVar108 >> 0x10),
                                   CONCAT15((char)((uint)fVar108 >> 8),
                                            CONCAT14(SUB41(fVar108,0),SUB84(local_c0,0) + 0.0))));
      local_e0 = CONCAT17((char)((uint)fVar55 >> 0x18),
                          CONCAT16((char)((uint)fVar55 >> 0x10),
                                   CONCAT15((char)((uint)fVar55 >> 8),
                                            CONCAT14(SUB41(fVar55,0),fVar4 + 0.0))));
      uStack_d8 = CONCAT17((char)((uint)fVar52 >> 0x18),
                           CONCAT16((char)((uint)fVar52 >> 0x10),
                                    CONCAT15((char)((uint)fVar52 >> 8),
                                             CONCAT14(SUB41(fVar52,0),fVar9 + 0.0))));
      uVar46 = FUN_00ab6ce4(SUB41(*(float *)(param_2 + 0x2a0) * 0.9,0),&local_d0,&local_e0,&local_c0
                            ,0x24000);
      if ((uVar46 & 1) == 0) {
        param_3[1] = uStack_a8;
        *param_3 = local_b0;
        return 1;
      }
    }
    iVar50 = iVar50 + 0x1e;
    iVar51 = -iVar51;
  } while (iVar50 != 0x168);
  return 0;
}


