/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a8ef80; name: FUN_01a8ef80
 */


/* WARNING: Removing unreachable block (ram,0x01a8f03c) */

void FUN_01a8ef80(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined2 uVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  code *pcVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  byte bVar22;
  undefined1 uVar23;
  undefined1 extraout_b0;
  byte bVar24;
  undefined1 extraout_var;
  byte bVar25;
  undefined1 extraout_var_00;
  byte bVar26;
  undefined1 extraout_var_01;
  byte bVar27;
  byte bVar28;
  undefined1 uVar29;
  byte bVar30;
  undefined1 uVar31;
  byte bVar32;
  undefined1 uVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  undefined1 uVar37;
  byte bVar38;
  undefined1 uVar39;
  byte bVar40;
  byte bVar41;
  undefined1 uVar42;
  byte bVar43;
  undefined1 uVar44;
  byte bVar45;
  undefined1 uVar46;
  float fVar47;
  float fVar48;
  float fVar52;
  float fVar53;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar54;
  int iVar55;
  int iVar59;
  int iVar60;
  undefined1 auVar56 [16];
  int iVar61;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fStack_3c;
  float fStack_34;
  long *local_30;
  long *local_28;
  
  FUN_009c685c(&local_28,param_1 + 0xb9);
  if (local_28 != (long *)0x0) {
    uVar16 = (**(code **)(*param_1 + 0x1a0))(param_1);
    if ((uVar16 & 1) != 0) {
      fVar20 = (float)param_1[0xe4];
      auVar62._0_4_ = fVar20 * fVar20;
      fVar12 = (float)((ulong)param_1[0xe4] >> 0x20);
      auVar62._4_4_ = fVar12 * fVar12;
      fVar13 = (float)param_1[0xe5];
      auVar62._8_4_ = fVar13 * fVar13;
      fVar21 = (float)((ulong)param_1[0xe5] >> 0x20);
      auVar62._12_4_ = fVar21 * fVar21;
      auVar56 = NEON_ext(auVar62,auVar62,8,1);
      fVar47 = auVar56._0_4_ + auVar62._0_4_;
      fVar52 = auVar56._4_4_ + auVar62._4_4_;
      fVar19 = fVar47 + fVar52;
      fVar47 = fVar47 + fVar52;
      auVar56._8_8_ = CONCAT44(fVar47,fVar19);
      auVar56._0_8_ = CONCAT44(fVar47,fVar19);
      auVar62 = NEON_frsqrte(auVar56,4);
      auVar68._0_4_ = auVar62._0_4_ * fVar19;
      auVar68._4_4_ = auVar62._4_4_ * fVar47;
      auVar68._8_4_ = auVar62._8_4_ * fVar19;
      auVar68._12_4_ = auVar62._12_4_ * fVar47;
      auVar56 = NEON_frsqrts(auVar62,auVar68,4);
      auVar63._0_4_ = auVar62._0_4_ * auVar56._0_4_;
      auVar63._4_4_ = auVar62._4_4_ * auVar56._4_4_;
      auVar63._8_4_ = auVar62._8_4_ * auVar56._8_4_;
      auVar63._12_4_ = auVar62._12_4_ * auVar56._12_4_;
      auVar69._0_4_ = fVar19 * auVar63._0_4_;
      auVar69._4_4_ = fVar47 * auVar63._4_4_;
      auVar69._8_4_ = fVar19 * auVar63._8_4_;
      auVar69._12_4_ = fVar47 * auVar63._12_4_;
      iVar55 = -(uint)(fVar19 == 0.0);
      iVar59 = -(uint)(fVar47 == 0.0);
      iVar60 = -(uint)(fVar19 == 0.0);
      iVar61 = -(uint)(fVar47 == 0.0);
      auVar62 = NEON_frsqrts(auVar63,auVar69,4);
      fVar20 = fVar20 * auVar63._0_4_ * auVar62._0_4_;
      fVar12 = fVar12 * auVar63._4_4_ * auVar62._4_4_;
      fVar13 = fVar13 * auVar63._8_4_ * auVar62._8_4_;
      fVar21 = fVar21 * auVar63._12_4_ * auVar62._12_4_;
      bVar22 = SUB41(fVar20,0) & ~(byte)iVar55;
      bVar24 = (byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar55 >> 8);
      bVar25 = (byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10);
      bVar26 = (byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18);
      bVar27 = SUB41(fVar12,0) & ~(byte)iVar59;
      bVar28 = (byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar59 >> 8);
      bVar30 = (byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10);
      bVar32 = (byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18);
      bVar34 = SUB41(fVar13,0) & ~(byte)iVar60;
      bVar35 = (byte)((uint)fVar13 >> 8) & ~(byte)((uint)iVar60 >> 8);
      bVar36 = (byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar60 >> 0x10);
      bVar38 = (byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar60 >> 0x18);
      bVar40 = SUB41(fVar21,0) & ~(byte)iVar61;
      bVar41 = (byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar61 >> 8);
      bVar43 = (byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10);
      bVar45 = (byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18);
      param_1[0xe5] =
           CONCAT17(bVar45,CONCAT16(bVar43,CONCAT15(bVar41,CONCAT14(bVar40,CONCAT13(bVar38,CONCAT12(
                                                  bVar36,CONCAT11(bVar35,bVar34)))))));
      param_1[0xe4] =
           CONCAT17(bVar32,CONCAT16(bVar30,CONCAT15(bVar28,CONCAT14(bVar27,CONCAT13(bVar26,CONCAT12(
                                                  bVar25,CONCAT11(bVar24,bVar22)))))));
      if (fVar19 != 0.0) {
        fVar20 = (float)CONCAT13(bVar26,CONCAT12(bVar25,CONCAT11(bVar24,bVar22))) *
                 (float)DAT_0388a140;
        fVar12 = (float)CONCAT13(bVar32,CONCAT12(bVar30,CONCAT11(bVar28,bVar27))) *
                 (float)((ulong)DAT_0388a140 >> 0x20);
        uVar23 = (undefined1)((uint)fVar12 >> 8);
        uVar29 = (undefined1)((uint)fVar12 >> 0x10);
        uVar31 = (undefined1)((uint)fVar12 >> 0x18);
        fVar13 = (float)CONCAT13(bVar38,CONCAT12(bVar36,CONCAT11(bVar35,bVar34))) *
                 (float)DAT_0388a148;
        uVar33 = (undefined1)((uint)fVar13 >> 8);
        uVar37 = (undefined1)((uint)fVar13 >> 0x10);
        uVar39 = (undefined1)((uint)fVar13 >> 0x18);
        fVar21 = (float)CONCAT13(bVar45,CONCAT12(bVar43,CONCAT11(bVar41,bVar40))) *
                 (float)((ulong)DAT_0388a148 >> 0x20);
        uVar42 = (undefined1)((uint)fVar21 >> 8);
        uVar44 = (undefined1)((uint)fVar21 >> 0x10);
        uVar46 = (undefined1)((uint)fVar21 >> 0x18);
        auVar4[4] = SUB41(fVar12,0);
        auVar4._0_4_ = fVar20;
        auVar4[5] = uVar23;
        auVar4[6] = uVar29;
        auVar4[7] = uVar31;
        auVar4[8] = SUB41(fVar13,0);
        auVar4[9] = uVar33;
        auVar4[10] = uVar37;
        auVar4[0xb] = uVar39;
        auVar4[0xc] = SUB41(fVar21,0);
        auVar4[0xd] = uVar42;
        auVar4[0xe] = uVar44;
        auVar4[0xf] = uVar46;
        auVar5[4] = SUB41(fVar12,0);
        auVar5._0_4_ = fVar20;
        auVar5[5] = uVar23;
        auVar5[6] = uVar29;
        auVar5[7] = uVar31;
        auVar5[8] = SUB41(fVar13,0);
        auVar5[9] = uVar33;
        auVar5[10] = uVar37;
        auVar5[0xb] = uVar39;
        auVar5[0xc] = SUB41(fVar21,0);
        auVar5[0xd] = uVar42;
        auVar5[0xe] = uVar44;
        auVar5[0xf] = uVar46;
        auVar62 = NEON_ext(auVar4,auVar5,8,1);
        fVar20 = auVar62._0_4_ + fVar20 + auVar62._4_4_ + fVar12;
        uVar23 = 0;
        if (-1.0 <= fVar20) {
          uVar23 = SUB41(fVar20,0);
        }
        FUN_0095d8f0(uVar23);
        fVar20 = (float)param_1[0xe4];
        auVar49._0_4_ = fVar20 * fVar20;
        auVar49._4_4_ = 0;
        fVar12 = (float)param_1[0xe5];
        auVar49._8_4_ = fVar12 * fVar12;
        fVar13 = (float)((ulong)param_1[0xe5] >> 0x20);
        auVar49._12_4_ = fVar13 * fVar13;
        auVar62 = NEON_ext(auVar49,auVar49,8,1);
        fVar19 = auVar62._0_4_ + auVar49._0_4_;
        fVar47 = auVar62._4_4_ + 0.0;
        fVar21 = fVar19 + fVar47;
        fVar19 = fVar19 + fVar47;
        if (fVar21 == 0.0) {
          uVar23 = 0;
          pcVar18 = *(code **)(*local_28 + 0x178);
        }
        else {
          auVar50._8_8_ = CONCAT44(fVar19,fVar21);
          auVar50._0_8_ = CONCAT44(fVar19,fVar21);
          auVar62 = NEON_frsqrte(auVar50,4);
          auVar64._0_4_ = auVar62._0_4_ * fVar21;
          auVar64._4_4_ = auVar62._4_4_ * fVar19;
          auVar64._8_4_ = auVar62._8_4_ * fVar21;
          auVar64._12_4_ = auVar62._12_4_ * fVar19;
          auVar56 = NEON_frsqrts(auVar62,auVar64,4);
          auVar57._0_4_ = auVar62._0_4_ * auVar56._0_4_;
          auVar57._4_4_ = auVar62._4_4_ * auVar56._4_4_;
          auVar57._8_4_ = auVar62._8_4_ * auVar56._8_4_;
          auVar57._12_4_ = auVar62._12_4_ * auVar56._12_4_;
          auVar65._0_4_ = fVar21 * auVar57._0_4_;
          auVar65._4_4_ = fVar19 * auVar57._4_4_;
          auVar65._8_4_ = fVar21 * auVar57._8_4_;
          auVar65._12_4_ = fVar19 * auVar57._12_4_;
          iVar55 = -(uint)(fVar21 == 0.0);
          iVar59 = -(uint)(fVar19 == 0.0);
          iVar60 = -(uint)(fVar21 == 0.0);
          iVar61 = -(uint)(fVar19 == 0.0);
          auVar62 = NEON_frsqrts(auVar57,auVar65,4);
          auVar58._0_4_ = auVar57._0_4_ * auVar62._0_4_;
          auVar58._4_4_ = auVar57._4_4_ * auVar62._4_4_;
          auVar58._8_4_ = auVar57._8_4_ * auVar62._8_4_;
          auVar58._12_4_ = auVar57._12_4_ * auVar62._12_4_;
          fVar20 = fVar20 * auVar58._0_4_;
          fVar21 = auVar58._4_4_ * 0.0;
          fVar12 = fVar12 * auVar58._8_4_;
          fVar13 = fVar13 * auVar58._12_4_;
          fVar12 = (float)CONCAT13((byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar60 >> 0x18),
                                   CONCAT12((byte)((uint)fVar12 >> 0x10) &
                                            ~(byte)((uint)iVar60 >> 0x10),
                                            CONCAT11((byte)((uint)fVar12 >> 8) &
                                                     ~(byte)((uint)iVar60 >> 8),
                                                     SUB41(fVar12,0) & ~(byte)iVar60)));
          fVar20 = (float)CONCAT13((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18),
                                   CONCAT12((byte)((uint)fVar20 >> 0x10) &
                                            ~(byte)((uint)iVar55 >> 0x10),
                                            CONCAT11((byte)((uint)fVar20 >> 8) &
                                                     ~(byte)((uint)iVar55 >> 8),
                                                     SUB41(fVar20,0) & ~(byte)iVar55)));
          FUN_009c69bc(&local_30,param_1);
          (**(code **)(*local_30 + 0x40))();
          if (local_30 != (long *)0x0) {
            lVar17 = local_30[0xb];
            piVar1 = (int *)(lVar17 + 0xc);
            do {
              iVar55 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar55 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar55 + -1 == 0) {
              *(undefined8 *)(lVar17 + 0x18) = 0;
              (**(code **)(*local_30 + 0x20))();
            }
          }
          fVar48 = auVar58._0_4_;
          fVar19 = fVar48 * fVar48;
          fVar53 = auVar58._8_4_;
          fVar47 = fVar53 * fVar53;
          uVar23 = (undefined1)((uint)fVar47 >> 8);
          uVar29 = (undefined1)((uint)fVar47 >> 0x10);
          uVar31 = (undefined1)((uint)fVar47 >> 0x18);
          fVar54 = auVar58._12_4_;
          fVar52 = fVar54 * fVar54;
          uVar33 = (undefined1)((uint)fVar52 >> 8);
          uVar37 = (undefined1)((uint)fVar52 >> 0x10);
          uVar39 = (undefined1)((uint)fVar52 >> 0x18);
          auVar6._4_4_ = 0;
          auVar6._0_4_ = fVar19;
          auVar6[8] = SUB41(fVar47,0);
          auVar6[9] = uVar23;
          auVar6[10] = uVar29;
          auVar6[0xb] = uVar31;
          auVar6[0xc] = SUB41(fVar52,0);
          auVar6[0xd] = uVar33;
          auVar6[0xe] = uVar37;
          auVar6[0xf] = uVar39;
          auVar7._4_4_ = 0;
          auVar7._0_4_ = fVar19;
          auVar7[8] = SUB41(fVar47,0);
          auVar7[9] = uVar23;
          auVar7[10] = uVar29;
          auVar7[0xb] = uVar31;
          auVar7[0xc] = SUB41(fVar52,0);
          auVar7[0xd] = uVar33;
          auVar7[0xe] = uVar37;
          auVar7[0xf] = uVar39;
          auVar62 = NEON_ext(auVar6,auVar7,8,1);
          fVar19 = auVar62._0_4_ + fVar19;
          fVar47 = auVar62._4_4_ + 0.0;
          fVar52 = fVar19 + fVar47;
          fVar19 = fVar19 + fVar47;
          uVar23 = SUB41(fVar19,0);
          uVar29 = (undefined1)((uint)fVar19 >> 8);
          uVar31 = (undefined1)((uint)fVar19 >> 0x10);
          uVar33 = (undefined1)((uint)fVar19 >> 0x18);
          pcVar18 = *(code **)(*local_28 + 0x178);
          auVar8[4] = uVar23;
          auVar8._0_4_ = fVar52;
          auVar8[5] = uVar29;
          auVar8[6] = uVar31;
          auVar8[7] = uVar33;
          auVar8[8] = SUB41(fVar52,0);
          auVar8[9] = (char)((uint)fVar52 >> 8);
          auVar8[10] = (char)((uint)fVar52 >> 0x10);
          auVar8[0xb] = (char)((uint)fVar52 >> 0x18);
          auVar8[0xc] = uVar23;
          auVar8[0xd] = uVar29;
          auVar8[0xe] = uVar31;
          auVar8[0xf] = uVar33;
          auVar62 = NEON_frsqrte(auVar8,4);
          auVar66._0_4_ = auVar62._0_4_ * fVar52;
          auVar66._4_4_ = auVar62._4_4_ * fVar19;
          auVar66._8_4_ = auVar62._8_4_ * fVar52;
          uVar11 = (undefined2)(CONCAT15(uVar29,CONCAT14(uVar23,fVar52)) >> 0x20);
          auVar66._12_4_ = auVar62._12_4_ * (float)CONCAT13(uVar33,CONCAT12(uVar31,uVar11));
          auVar56 = NEON_frsqrts(auVar62,auVar66,4);
          auVar51._0_4_ = auVar62._0_4_ * auVar56._0_4_;
          auVar51._4_4_ = auVar62._4_4_ * auVar56._4_4_;
          auVar51._8_4_ = auVar62._8_4_ * auVar56._8_4_;
          auVar51._12_4_ = auVar62._12_4_ * auVar56._12_4_;
          auVar67._0_4_ = fVar52 * auVar51._0_4_;
          auVar67._4_4_ = fVar19 * auVar51._4_4_;
          auVar67._8_4_ = fVar52 * auVar51._8_4_;
          auVar67._12_4_ = (float)CONCAT13(uVar33,CONCAT12(uVar31,uVar11)) * auVar51._12_4_;
          iVar55 = -(uint)(fVar52 == 0.0);
          iVar60 = -(uint)(fVar19 == 0.0);
          iVar14 = -(uint)(fVar52 == 0.0);
          iVar15 = -(uint)((float)CONCAT13(uVar33,CONCAT12(uVar31,uVar11)) == 0.0);
          auVar62 = NEON_frsqrts(auVar51,auVar67,4);
          fVar48 = fVar48 * auVar51._0_4_ * auVar62._0_4_;
          fVar19 = auVar51._4_4_ * auVar62._4_4_ * 0.0;
          fVar53 = fVar53 * auVar51._8_4_ * auVar62._8_4_;
          fVar54 = fVar54 * auVar51._12_4_ * auVar62._12_4_;
          fStack_3c = (float)(CONCAT17((byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18),
                                       CONCAT16((byte)((uint)fVar21 >> 0x10) &
                                                ~(byte)((uint)iVar59 >> 0x10),
                                                CONCAT15((byte)((uint)fVar21 >> 8) &
                                                         ~(byte)((uint)iVar59 >> 8),
                                                         CONCAT14(SUB41(fVar21,0) & ~(byte)iVar59,
                                                                  fVar20)))) >> 0x20);
          fStack_34 = (float)(CONCAT17((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18),
                                       CONCAT16((byte)((uint)fVar13 >> 0x10) &
                                                ~(byte)((uint)iVar61 >> 0x10),
                                                CONCAT15((byte)((uint)fVar13 >> 8) &
                                                         ~(byte)((uint)iVar61 >> 8),
                                                         CONCAT14(SUB41(fVar13,0) & ~(byte)iVar61,
                                                                  fVar12)))) >> 0x20);
          fVar20 = fVar20 * (float)CONCAT13((byte)((uint)fVar48 >> 0x18) &
                                            ~(byte)((uint)iVar55 >> 0x18),
                                            CONCAT12((byte)((uint)fVar48 >> 0x10) &
                                                     ~(byte)((uint)iVar55 >> 0x10),
                                                     CONCAT11((byte)((uint)fVar48 >> 8) &
                                                              ~(byte)((uint)iVar55 >> 8),
                                                              SUB41(fVar48,0) & ~(byte)iVar55)));
          fStack_3c = fStack_3c *
                      (float)CONCAT13((byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar60 >> 0x18),
                                      CONCAT12((byte)((uint)fVar19 >> 0x10) &
                                               ~(byte)((uint)iVar60 >> 0x10),
                                               CONCAT11((byte)((uint)fVar19 >> 8) &
                                                        ~(byte)((uint)iVar60 >> 8),
                                                        SUB41(fVar19,0) & ~(byte)iVar60)));
          uVar23 = (undefined1)((uint)fStack_3c >> 8);
          uVar29 = (undefined1)((uint)fStack_3c >> 0x10);
          uVar31 = (undefined1)((uint)fStack_3c >> 0x18);
          fVar12 = fVar12 * (float)CONCAT13((byte)((uint)fVar53 >> 0x18) &
                                            ~(byte)((uint)iVar14 >> 0x18),
                                            CONCAT12((byte)((uint)fVar53 >> 0x10) &
                                                     ~(byte)((uint)iVar14 >> 0x10),
                                                     CONCAT11((byte)((uint)fVar53 >> 8) &
                                                              ~(byte)((uint)iVar14 >> 8),
                                                              SUB41(fVar53,0) & ~(byte)iVar14)));
          uVar33 = (undefined1)((uint)fVar12 >> 8);
          uVar37 = (undefined1)((uint)fVar12 >> 0x10);
          uVar39 = (undefined1)((uint)fVar12 >> 0x18);
          fStack_34 = fStack_34 *
                      (float)CONCAT13((byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                                      CONCAT12((byte)((uint)fVar54 >> 0x10) &
                                               ~(byte)((uint)iVar15 >> 0x10),
                                               CONCAT11((byte)((uint)fVar54 >> 8) &
                                                        ~(byte)((uint)iVar15 >> 8),
                                                        SUB41(fVar54,0) & ~(byte)iVar15)));
          uVar42 = (undefined1)((uint)fStack_34 >> 8);
          uVar44 = (undefined1)((uint)fStack_34 >> 0x10);
          uVar46 = (undefined1)((uint)fStack_34 >> 0x18);
          auVar9[4] = SUB41(fStack_3c,0);
          auVar9._0_4_ = fVar20;
          auVar9[5] = uVar23;
          auVar9[6] = uVar29;
          auVar9[7] = uVar31;
          auVar9[8] = SUB41(fVar12,0);
          auVar9[9] = uVar33;
          auVar9[10] = uVar37;
          auVar9[0xb] = uVar39;
          auVar9[0xc] = SUB41(fStack_34,0);
          auVar9[0xd] = uVar42;
          auVar9[0xe] = uVar44;
          auVar9[0xf] = uVar46;
          auVar10[4] = SUB41(fStack_3c,0);
          auVar10._0_4_ = fVar20;
          auVar10[5] = uVar23;
          auVar10[6] = uVar29;
          auVar10[7] = uVar31;
          auVar10[8] = SUB41(fVar12,0);
          auVar10[9] = uVar33;
          auVar10[10] = uVar37;
          auVar10[0xb] = uVar39;
          auVar10[0xc] = SUB41(fStack_34,0);
          auVar10[0xd] = uVar42;
          auVar10[0xe] = uVar44;
          auVar10[0xf] = uVar46;
          auVar62 = NEON_ext(auVar9,auVar10,8,1);
          uVar23 = extraout_b0;
          if (0.0 <= auVar62._0_4_ + fVar20 + auVar62._4_4_ + fStack_3c) {
            uVar23 = SUB41(-(float)CONCAT13(extraout_var_01,
                                            CONCAT12(extraout_var_00,
                                                     CONCAT11(extraout_var,extraout_b0))),0);
          }
        }
        (*pcVar18)(uVar23);
      }
    }
    if (local_28 != (long *)0x0) {
      lVar17 = local_28[0xb];
      piVar1 = (int *)(lVar17 + 0xc);
      do {
        iVar55 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar55 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar55 + -1 == 0) {
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))();
      }
    }
  }
  return;
}


