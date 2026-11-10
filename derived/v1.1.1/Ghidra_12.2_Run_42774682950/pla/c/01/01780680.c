/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01780680; name: FUN_01780680
 */


uint FUN_01780680(long param_1)

{
  int *piVar1;
  long *plVar2;
  undefined1 (*pauVar3) [16];
  int iVar4;
  long *plVar5;
  long lVar6;
  char cVar7;
  bool bVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined2 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined *puVar25;
  uint uVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  long *plVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  uint uVar35;
  long lVar36;
  long *unaff_x22;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  float fVar51;
  undefined1 auVar52 [12];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar56;
  float fVar57;
  undefined1 auVar55 [16];
  float fVar58;
  float fVar62;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 uVar63;
  undefined1 in_q3 [16];
  undefined1 uVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fStack_c4;
  long *local_a8;
  long local_a0;
  undefined8 local_98;
  long local_90;
  long local_88;
  long *local_80;
  long *local_78;
  long local_70;
  long lStack_68;
  long *local_58;
  long *local_38;
  
  uVar64 = in_q3[0xf];
  uVar63 = in_q3[0xe];
  uVar50 = in_q3[0xd];
  uVar49 = in_q3[0xc];
  uVar48 = in_q3[0xb];
  uVar47 = in_q3[10];
  uVar46 = in_q3[9];
  uVar45 = in_q3[8];
  uVar44 = in_q3[3];
  uVar43 = in_q3[2];
  uVar42 = in_q3[1];
  uVar41 = in_q3[0];
  FUN_00be5694(&local_38,param_1 + 0x70);
  FUN_00be5694(&local_58,param_1 + 0xa0);
  if ((local_38 == (long *)0x0) || (local_58 == (long *)0x0)) {
    uVar35 = 0;
    goto joined_r0x01780d38;
  }
  FUN_009c69bc(&local_a8);
  (**(code **)(*local_a8 + 0x40))();
  fVar62 = (float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)));
  uVar20 = CONCAT17(uVar64,CONCAT16(uVar63,CONCAT15(uVar50,CONCAT14(uVar49,fVar62))));
  fVar58 = (float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41)));
  if (local_a8 != (long *)0x0) {
    lVar27 = local_a8[0xb];
    piVar1 = (int *)(lVar27 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar27 + 0x18) = 0;
      (**(code **)(*local_a8 + 0x20))();
    }
  }
  FUN_009c69bc(&local_a8,local_58);
  (**(code **)(*local_a8 + 0x40))();
  fVar40 = (float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)));
  if (local_a8 != (long *)0x0) {
    lVar27 = local_a8[0xb];
    piVar1 = (int *)(lVar27 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar27 + 0x18) = 0;
      (**(code **)(*local_a8 + 0x20))();
    }
  }
  auVar53 = ZEXT816(0);
  if ((*(char *)(param_1 + 0x178) != '\0') && (uVar29 = *(ulong *)(param_1 + 0xd8), uVar29 != 0)) {
    uVar30 = uVar29 - (uVar29 >> 1 & 0x5555555555555555);
    uVar30 = (uVar30 & 0x3333333333333333) + (uVar30 >> 2 & 0x3333333333333333);
    iVar4 = *(int *)(param_1 + 0x188);
    unaff_x22 = (long *)(long)iVar4;
    uVar28 = *(ulong *)(param_1 + 0x180);
    uVar30 = (uVar30 + (uVar30 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar30 < 2) {
      uVar33 = uVar29 - 1 & uVar28;
    }
    else {
      uVar33 = uVar28;
      if (uVar29 <= uVar28) {
        uVar33 = 0;
        if (uVar29 != 0) {
          uVar33 = uVar28 / uVar29;
        }
        uVar33 = uVar28 - uVar33 * uVar29;
      }
    }
    lVar27 = *(long *)(param_1 + 0xd0);
    plVar31 = *(long **)(lVar27 + uVar33 * 8);
    if ((plVar31 != (long *)0x0) && (plVar31 = (long *)*plVar31, plVar31 != (long *)0x0)) {
      uVar32 = uVar29 - 1;
      if (uVar30 < 2) {
        do {
          if (plVar31[1] == uVar28) {
            if (plVar31[2] == uVar28) goto LAB_0178085c;
          }
          else if ((plVar31[1] & uVar32) != uVar33) break;
          plVar31 = (long *)*plVar31;
        } while (plVar31 != (long *)0x0);
      }
      else {
        do {
          uVar34 = plVar31[1];
          if (uVar34 == uVar28) {
            if (plVar31[2] == uVar28) goto LAB_0178085c;
          }
          else {
            if (uVar29 <= uVar34) {
              uVar9 = 0;
              if (uVar29 != 0) {
                uVar9 = uVar34 / uVar29;
              }
              uVar34 = uVar34 - uVar9 * uVar29;
            }
            if (uVar34 != uVar33) break;
          }
          plVar31 = (long *)*plVar31;
        } while (plVar31 != (long *)0x0);
      }
    }
  }
LAB_01780af0:
  puVar25 = PTR_FloatPi_04372cf0;
  uVar35 = (uint)unaff_x22;
  fVar51 = auVar53._0_4_;
  fStack_c4 = (float)(CONCAT17(uVar64,CONCAT16(uVar63,CONCAT15(uVar50,CONCAT14(uVar49,fVar40)))) >>
                     0x20);
  fVar39 = fVar51 * fVar51;
  fVar56 = auVar53._8_4_;
  fVar38 = fVar56 * fVar56;
  uVar45 = (undefined1)((uint)fVar38 >> 8);
  uVar46 = (undefined1)((uint)fVar38 >> 0x10);
  uVar47 = (undefined1)((uint)fVar38 >> 0x18);
  fVar57 = auVar53._12_4_;
  fVar37 = fVar57 * fVar57;
  uVar48 = (undefined1)((uint)fVar37 >> 8);
  uVar49 = (undefined1)((uint)fVar37 >> 0x10);
  uVar50 = (undefined1)((uint)fVar37 >> 0x18);
  auVar53._4_4_ = 0;
  auVar53._0_4_ = fVar39;
  auVar53[8] = SUB41(fVar38,0);
  auVar53[9] = uVar45;
  auVar53[10] = uVar46;
  auVar53[0xb] = uVar47;
  auVar53[0xc] = SUB41(fVar37,0);
  auVar53[0xd] = uVar48;
  auVar53[0xe] = uVar49;
  auVar53[0xf] = uVar50;
  auVar60._4_4_ = 0;
  auVar60._0_4_ = fVar39;
  auVar60[8] = SUB41(fVar38,0);
  auVar60[9] = uVar45;
  auVar60[10] = uVar46;
  auVar60[0xb] = uVar47;
  auVar60[0xc] = SUB41(fVar37,0);
  auVar60[0xd] = uVar48;
  auVar60[0xe] = uVar49;
  auVar60[0xf] = uVar50;
  auVar53 = NEON_ext(auVar53,auVar60,8,1);
  fVar39 = auVar53._0_4_ + fVar39;
  fVar38 = auVar53._4_4_ + 0.0;
  fVar37 = fVar39 + fVar38;
  fVar39 = fVar39 + fVar38;
  uVar45 = SUB41(fVar39,0);
  uVar46 = (undefined1)((uint)fVar39 >> 8);
  uVar47 = (undefined1)((uint)fVar39 >> 0x10);
  uVar48 = (undefined1)((uint)fVar39 >> 0x18);
  auVar10[4] = uVar45;
  auVar10._0_4_ = fVar37;
  auVar10[5] = uVar46;
  auVar10[6] = uVar47;
  auVar10[7] = uVar48;
  auVar10[8] = SUB41(fVar37,0);
  auVar10[9] = (char)((uint)fVar37 >> 8);
  auVar10[10] = (char)((uint)fVar37 >> 0x10);
  auVar10[0xb] = (char)((uint)fVar37 >> 0x18);
  auVar10[0xc] = uVar45;
  auVar10[0xd] = uVar46;
  auVar10[0xe] = uVar47;
  auVar10[0xf] = uVar48;
  auVar53 = NEON_frsqrte(auVar10,4);
  auVar59._0_4_ = auVar53._0_4_ * fVar37;
  auVar59._4_4_ = auVar53._4_4_ * fVar39;
  auVar59._8_4_ = auVar53._8_4_ * fVar37;
  uVar13 = (undefined2)(CONCAT15(uVar46,CONCAT14(uVar45,fVar37)) >> 0x20);
  auVar59._12_4_ = auVar53._12_4_ * (float)CONCAT13(uVar48,CONCAT12(uVar47,uVar13));
  auVar60 = NEON_frsqrts(auVar53,auVar59,4);
  auVar54._0_4_ = auVar53._0_4_ * auVar60._0_4_;
  auVar54._4_4_ = auVar53._4_4_ * auVar60._4_4_;
  auVar54._8_4_ = auVar53._8_4_ * auVar60._8_4_;
  auVar54._12_4_ = auVar53._12_4_ * auVar60._12_4_;
  auVar61._0_4_ = fVar37 * auVar54._0_4_;
  auVar61._4_4_ = fVar39 * auVar54._4_4_;
  auVar61._8_4_ = fVar37 * auVar54._8_4_;
  auVar61._12_4_ = (float)CONCAT13(uVar48,CONCAT12(uVar47,uVar13)) * auVar54._12_4_;
  iVar4 = -(uint)(fVar37 == 0.0);
  iVar14 = -(uint)(fVar39 == 0.0);
  iVar15 = -(uint)(fVar37 == 0.0);
  iVar16 = -(uint)((float)CONCAT13(uVar48,CONCAT12(uVar47,uVar13)) == 0.0);
  auVar53 = NEON_frsqrts(auVar54,auVar61,4);
  fVar58 = fVar58 - (float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41)));
  fVar62 = fVar62 - fVar40;
  fStack_c4 = (float)((ulong)uVar20 >> 0x20) - fStack_c4;
  fVar40 = fVar58 * fVar58;
  fVar39 = fVar62 * fVar62;
  uVar41 = (undefined1)((uint)fVar39 >> 8);
  uVar42 = (undefined1)((uint)fVar39 >> 0x10);
  uVar43 = (undefined1)((uint)fVar39 >> 0x18);
  fVar38 = fStack_c4 * fStack_c4;
  uVar44 = (undefined1)((uint)fVar38 >> 8);
  uVar45 = (undefined1)((uint)fVar38 >> 0x10);
  uVar46 = (undefined1)((uint)fVar38 >> 0x18);
  auVar17._4_4_ = 0;
  auVar17._0_4_ = fVar40;
  auVar17[8] = SUB41(fVar39,0);
  auVar17[9] = uVar41;
  auVar17[10] = uVar42;
  auVar17[0xb] = uVar43;
  auVar17[0xc] = SUB41(fVar38,0);
  auVar17[0xd] = uVar44;
  auVar17[0xe] = uVar45;
  auVar17[0xf] = uVar46;
  auVar18._4_4_ = 0;
  auVar18._0_4_ = fVar40;
  auVar18[8] = SUB41(fVar39,0);
  auVar18[9] = uVar41;
  auVar18[10] = uVar42;
  auVar18[0xb] = uVar43;
  auVar18[0xc] = SUB41(fVar38,0);
  auVar18[0xd] = uVar44;
  auVar18[0xe] = uVar45;
  auVar18[0xf] = uVar46;
  auVar60 = NEON_ext(auVar17,auVar18,8,1);
  fVar51 = fVar51 * auVar54._0_4_ * auVar53._0_4_;
  fVar37 = auVar54._4_4_ * auVar53._4_4_ * 0.0;
  fVar56 = fVar56 * auVar54._8_4_ * auVar53._8_4_;
  fVar57 = fVar57 * auVar54._12_4_ * auVar53._12_4_;
  fVar40 = auVar60._0_4_ + fVar40;
  fVar39 = auVar60._4_4_ + 0.0;
  fVar38 = fVar40 + fVar39;
  fVar40 = fVar40 + fVar39;
  uVar41 = SUB41(fVar40,0);
  uVar42 = (undefined1)((uint)fVar40 >> 8);
  uVar43 = (undefined1)((uint)fVar40 >> 0x10);
  uVar44 = (undefined1)((uint)fVar40 >> 0x18);
  auVar19[4] = uVar41;
  auVar19._0_4_ = fVar38;
  auVar19[5] = uVar42;
  auVar19[6] = uVar43;
  auVar19[7] = uVar44;
  auVar19[8] = SUB41(fVar38,0);
  auVar19[9] = (char)((uint)fVar38 >> 8);
  auVar19[10] = (char)((uint)fVar38 >> 0x10);
  auVar19[0xb] = (char)((uint)fVar38 >> 0x18);
  auVar19[0xc] = uVar41;
  auVar19[0xd] = uVar42;
  auVar19[0xe] = uVar43;
  auVar19[0xf] = uVar44;
  auVar53 = NEON_frsqrte(auVar19,4);
  auVar66._0_4_ = auVar53._0_4_ * fVar38;
  auVar66._4_4_ = auVar53._4_4_ * fVar40;
  auVar66._8_4_ = auVar53._8_4_ * fVar38;
  uVar13 = (undefined2)(CONCAT15(uVar42,CONCAT14(uVar41,fVar38)) >> 0x20);
  auVar66._12_4_ = auVar53._12_4_ * (float)CONCAT13(uVar44,CONCAT12(uVar43,uVar13));
  auVar60 = NEON_frsqrts(auVar53,auVar66,4);
  auVar65._0_4_ = auVar53._0_4_ * auVar60._0_4_;
  auVar65._4_4_ = auVar53._4_4_ * auVar60._4_4_;
  auVar65._8_4_ = auVar53._8_4_ * auVar60._8_4_;
  auVar65._12_4_ = auVar53._12_4_ * auVar60._12_4_;
  auVar67._0_4_ = fVar38 * auVar65._0_4_;
  auVar67._4_4_ = fVar40 * auVar65._4_4_;
  auVar67._8_4_ = fVar38 * auVar65._8_4_;
  auVar67._12_4_ = (float)CONCAT13(uVar44,CONCAT12(uVar43,uVar13)) * auVar65._12_4_;
  iVar21 = -(uint)(fVar38 == 0.0);
  iVar22 = -(uint)(fVar40 == 0.0);
  iVar23 = -(uint)(fVar38 == 0.0);
  iVar24 = -(uint)((float)CONCAT13(uVar44,CONCAT12(uVar43,uVar13)) == 0.0);
  auVar53 = NEON_frsqrts(auVar65,auVar67,4);
  fVar58 = fVar58 * auVar65._0_4_ * auVar53._0_4_;
  fVar40 = auVar65._4_4_ * auVar53._4_4_ * 0.0;
  fVar62 = fVar62 * auVar65._8_4_ * auVar53._8_4_;
  fStack_c4 = fStack_c4 * auVar65._12_4_ * auVar53._12_4_;
  fVar58 = (float)CONCAT13((byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                           CONCAT12((byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10),
                                    CONCAT11((byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar21 >> 8),
                                             SUB41(fVar58,0) & ~(byte)iVar21)));
  auVar52._0_8_ =
       CONCAT17((byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                CONCAT16((byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10),
                         CONCAT15((byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar22 >> 8),
                                  CONCAT14(SUB41(fVar40,0) & ~(byte)iVar22,fVar58))));
  auVar52[8] = SUB41(fVar62,0) & ~(byte)iVar23;
  auVar52[9] = (byte)((uint)fVar62 >> 8) & ~(byte)((uint)iVar23 >> 8);
  auVar52[10] = (byte)((uint)fVar62 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10);
  auVar52[0xb] = (byte)((uint)fVar62 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18);
  auVar55[0xc] = SUB41(fStack_c4,0) & ~(byte)iVar24;
  auVar55._0_12_ = auVar52;
  auVar55[0xd] = (byte)((uint)fStack_c4 >> 8) & ~(byte)((uint)iVar24 >> 8);
  auVar55[0xe] = (byte)((uint)fStack_c4 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10);
  auVar55[0xf] = (byte)((uint)fStack_c4 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18);
  fVar58 = (float)CONCAT13((byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar4 >> 0x18),
                           CONCAT12((byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar4 >> 0x10),
                                    CONCAT11((byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar4 >> 8),
                                             SUB41(fVar51,0) & ~(byte)iVar4))) * fVar58;
  fVar62 = (float)CONCAT13((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                           CONCAT12((byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10),
                                    CONCAT11((byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar14 >> 8),
                                             SUB41(fVar37,0) & ~(byte)iVar14))) *
           (float)((ulong)auVar52._0_8_ >> 0x20);
  uVar41 = (undefined1)((uint)fVar62 >> 8);
  uVar42 = (undefined1)((uint)fVar62 >> 0x10);
  uVar43 = (undefined1)((uint)fVar62 >> 0x18);
  fVar40 = (float)CONCAT13((byte)((uint)fVar56 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                           CONCAT12((byte)((uint)fVar56 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10),
                                    CONCAT11((byte)((uint)fVar56 >> 8) & ~(byte)((uint)iVar15 >> 8),
                                             SUB41(fVar56,0) & ~(byte)iVar15))) * auVar52._8_4_;
  uVar44 = (undefined1)((uint)fVar40 >> 8);
  uVar45 = (undefined1)((uint)fVar40 >> 0x10);
  uVar46 = (undefined1)((uint)fVar40 >> 0x18);
  fVar39 = (float)CONCAT13((byte)((uint)fVar57 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                           CONCAT12((byte)((uint)fVar57 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                                    CONCAT11((byte)((uint)fVar57 >> 8) & ~(byte)((uint)iVar16 >> 8),
                                             SUB41(fVar57,0) & ~(byte)iVar16))) * auVar55._12_4_;
  uVar47 = (undefined1)((uint)fVar39 >> 8);
  uVar48 = (undefined1)((uint)fVar39 >> 0x10);
  uVar49 = (undefined1)((uint)fVar39 >> 0x18);
  auVar11[4] = SUB41(fVar62,0);
  auVar11._0_4_ = fVar58;
  auVar11[5] = uVar41;
  auVar11[6] = uVar42;
  auVar11[7] = uVar43;
  auVar11[8] = SUB41(fVar40,0);
  auVar11[9] = uVar44;
  auVar11[10] = uVar45;
  auVar11[0xb] = uVar46;
  auVar11[0xc] = SUB41(fVar39,0);
  auVar11[0xd] = uVar47;
  auVar11[0xe] = uVar48;
  auVar11[0xf] = uVar49;
  auVar12[4] = SUB41(fVar62,0);
  auVar12._0_4_ = fVar58;
  auVar12[5] = uVar41;
  auVar12[6] = uVar42;
  auVar12[7] = uVar43;
  auVar12[8] = SUB41(fVar40,0);
  auVar12[9] = uVar44;
  auVar12[10] = uVar45;
  auVar12[0xb] = uVar46;
  auVar12[0xc] = SUB41(fVar39,0);
  auVar12[0xd] = uVar47;
  auVar12[0xe] = uVar48;
  auVar12[0xf] = uVar49;
  auVar53 = NEON_ext(auVar11,auVar12,8,1);
  fVar58 = auVar53._0_4_ + fVar58 + auVar53._4_4_ + fVar62;
  fVar62 = -1.0;
  if (fVar58 < -1.0) {
LAB_01780f04:
    fVar40 = *(float *)PTR_FloatPi_04372cf0;
    fVar39 = 1.0 - fVar62 * fVar62;
    fVar58 = SQRT(fVar39);
    uVar41 = SUB41(fVar58,0);
    uVar42 = (undefined1)((uint)fVar58 >> 8);
    uVar43 = (undefined1)((uint)fVar58 >> 0x10);
    uVar44 = (undefined1)((uint)fVar58 >> 0x18);
    if (NAN(fVar58)) {
      fVar58 = sqrtf(fVar39);
      uVar41 = SUB41(fVar58,0);
      uVar42 = (undefined1)((uint)fVar58 >> 8);
      uVar43 = (undefined1)((uint)fVar58 >> 0x10);
      uVar44 = (undefined1)((uint)fVar58 >> 0x18);
    }
    fVar62 = -(float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41))) / fVar62;
    uVar41 = SUB41(fVar62,0);
    uVar42 = (undefined1)((uint)fVar62 >> 8);
    uVar43 = (undefined1)((uint)fVar62 >> 0x10);
    uVar44 = (undefined1)((uint)fVar62 >> 0x18);
    fVar62 = fVar62 * fVar62;
    fVar58 = fVar62 * (fVar62 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
                                fVar62 * (fVar62 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x10)
                                                   + fVar62 * (fVar62 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar62 * (*(float *)PTR_AtanCoefficients_04372e40
                                                            * fVar62 -
                                                           *(float *)(PTR_AtanCoefficients_04372e40
                                                                     + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                         - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14))) -
                      *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c));
LAB_01780e78:
    fVar40 = fVar40 - (float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41))) *
                      (fVar58 + 1.0);
  }
  else {
    fVar40 = 1.0;
    if (fVar58 <= 1.0) {
      if (fVar58 < 0.0) {
        if (fVar58 < -0.70710677) {
          fVar62 = fVar58;
          goto LAB_01780f04;
        }
        fVar39 = 1.0 - fVar58 * fVar58;
        fVar62 = SQRT(fVar39);
        uVar41 = SUB41(fVar62,0);
        uVar42 = (undefined1)((uint)fVar62 >> 8);
        uVar43 = (undefined1)((uint)fVar62 >> 0x10);
        uVar44 = (undefined1)((uint)fVar62 >> 0x18);
        fVar40 = *(float *)PTR_FloatPiDivided2_04372d38;
        if (NAN(fVar62)) {
          fVar62 = sqrtf(fVar39);
          uVar41 = SUB41(fVar62,0);
          uVar42 = (undefined1)((uint)fVar62 >> 8);
          uVar43 = (undefined1)((uint)fVar62 >> 0x10);
          uVar44 = (undefined1)((uint)fVar62 >> 0x18);
        }
        fVar58 = -fVar58 / (float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41)));
        fVar62 = fVar58 * fVar58;
        fVar40 = fVar40 + fVar58 * (fVar62 * (fVar62 * (*(float *)(PTR_AtanCoefficients_04372e40 +
                                                                  0x18) +
                                                       fVar62 * (fVar62 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 0x10) +
                                                  fVar62 * (fVar62 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar62 * (*(float *)PTR_AtanCoefficients_04372e40
                                                            * fVar62 -
                                                           *(float *)(PTR_AtanCoefficients_04372e40
                                                                     + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14)
                                                  )) - *(float *)(PTR_AtanCoefficients_04372e40 +
                                                                 0x1c)) + 1.0);
        goto LAB_01780c60;
      }
      if (fVar58 <= 0.70710677) {
        fVar39 = 1.0 - fVar58 * fVar58;
        fVar62 = SQRT(fVar39);
        uVar41 = SUB41(fVar62,0);
        uVar42 = (undefined1)((uint)fVar62 >> 8);
        uVar43 = (undefined1)((uint)fVar62 >> 0x10);
        uVar44 = (undefined1)((uint)fVar62 >> 0x18);
        fVar40 = *(float *)PTR_FloatPiDivided2_04372d38;
        if (NAN(fVar62)) {
          fVar62 = sqrtf(fVar39);
          uVar41 = SUB41(fVar62,0);
          uVar42 = (undefined1)((uint)fVar62 >> 8);
          uVar43 = (undefined1)((uint)fVar62 >> 0x10);
          uVar44 = (undefined1)((uint)fVar62 >> 0x18);
        }
        fVar58 = fVar58 / (float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41)));
        uVar41 = SUB41(fVar58,0);
        uVar42 = (undefined1)((uint)fVar58 >> 8);
        uVar43 = (undefined1)((uint)fVar58 >> 0x10);
        uVar44 = (undefined1)((uint)fVar58 >> 0x18);
        fVar58 = fVar58 * fVar58;
        fVar58 = fVar58 * (fVar58 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
                                    fVar58 * (fVar58 * (*(float *)(PTR_AtanCoefficients_04372e40 +
                                                                  0x10) +
                                                       fVar58 * (fVar58 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar58 * (*(float *)PTR_AtanCoefficients_04372e40
                                                            * fVar58 -
                                                           *(float *)(PTR_AtanCoefficients_04372e40
                                                                     + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                             - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14))) -
                          *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c));
        goto LAB_01780e78;
      }
      fVar40 = fVar58;
    }
    fVar62 = 1.0 - fVar40 * fVar40;
    fVar58 = SQRT(fVar62);
    uVar41 = SUB41(fVar58,0);
    uVar42 = (undefined1)((uint)fVar58 >> 8);
    uVar43 = (undefined1)((uint)fVar58 >> 0x10);
    uVar44 = (undefined1)((uint)fVar58 >> 0x18);
    if (NAN(fVar58)) {
      fVar58 = sqrtf(fVar62);
      uVar41 = SUB41(fVar58,0);
      uVar42 = (undefined1)((uint)fVar58 >> 8);
      uVar43 = (undefined1)((uint)fVar58 >> 0x10);
      uVar44 = (undefined1)((uint)fVar58 >> 0x18);
    }
    fVar40 = (float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41))) / fVar40;
    fVar58 = fVar40 * fVar40;
    fVar40 = fVar40 * (fVar58 * (fVar58 * (*(float *)(PTR_AtanCoefficients_04372e40 + 0x18) +
                                          fVar58 * (fVar58 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 0x10) +
                                                  fVar58 * (fVar58 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar58 * (*(float *)PTR_AtanCoefficients_04372e40
                                                            * fVar58 -
                                                           *(float *)(PTR_AtanCoefficients_04372e40
                                                                     + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14)
                                                  )) -
                                *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c)) + 1.0);
  }
LAB_01780c60:
  FUN_0177ffd8(&local_a8,param_1);
  plVar31 = local_78;
  lVar27 = local_90;
  if ((char)local_a8 == '\0') {
    uVar26 = 0;
  }
  else {
    uVar35 = (uint)(fVar40 * (*(float *)PTR_FloatDegree180_04372ce0 / *(float *)puVar25) <=
                   local_98._4_4_ * 0.5);
    if (local_90 != 0) {
      local_88 = local_90;
      lVar36 = (long)local_80 - local_90;
      uVar29 = (**(code **)(*local_78 + 0xc0))(local_78);
      if ((uVar29 & 1) != 0) {
        lVar6 = tpidr_el0;
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar6 + 0x38d480)) {
          FUN_02bcc824(plVar31,lVar27,lVar36,0x10);
          goto LAB_01780d28;
        }
      }
      (**(code **)(*plVar31 + 0x18))(plVar31,lVar27,lVar36,0x10);
    }
LAB_01780d28:
    uVar26 = 1;
    local_a8 = (long *)((ulong)local_a8 & 0xffffffffffffff00);
  }
  uVar35 = uVar35 & uVar26;
joined_r0x01780d38:
  if (local_58 != (long *)0x0) {
    lVar27 = local_58[0xb];
    piVar1 = (int *)(lVar27 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar27 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
  if (local_38 != (long *)0x0) {
    lVar27 = local_38[0xb];
    piVar1 = (int *)(lVar27 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar27 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return uVar35;
LAB_01780924:
  local_a8 = (long *)plVar31[3];
  local_a0 = plVar31[4];
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  plVar5 = (long *)plVar31[8];
  local_78 = (long *)plVar31[9];
  local_70 = plVar31[10];
  lStack_68 = plVar31[0xb];
  lVar27 = plVar31[6] - plVar31[5];
  local_80 = plVar5;
  if (lVar27 != 0) {
    plVar2 = local_78;
    if ((long *)0x7ffffffffffffffe < local_78) {
      plVar2 = (long *)0x7fffffffffffffff;
    }
    if (plVar2 < (long *)(lVar27 >> 5)) goto LAB_01781148;
    lVar36 = (**(code **)(*plVar5 + 0x10))(plVar5,lVar27,0x10);
    if (lVar36 == 0) {
      (**(code **)(*plVar5 + 0xb8))(plVar5);
    }
    local_88 = lVar36 + (lVar27 >> 5) * 0x20;
    lVar27 = plVar31[5];
    lVar6 = plVar31[6];
    local_98 = lVar36;
    local_90 = lVar36;
    if (lVar27 != lVar6) {
      FUN_01785554(&local_80,lVar36,lVar27);
      local_90 = local_90 + 0x20;
      if (lVar27 + 0x20 != lVar6) {
        FUN_01785554(&local_80);
        local_90 = local_90 + 0x20;
        if (lVar27 + 0x40 != lVar6) {
          FUN_01785554(&local_80);
          local_90 = local_90 + 0x20;
          if (lVar27 + 0x60 != lVar6) {
            FUN_01785554(&local_80);
            local_90 = local_90 + 0x20;
            if (lVar27 + 0x80 != lVar6) {
              FUN_01785554(&local_80);
              for (lVar27 = lVar27 + 0xa0; local_90 = local_90 + 0x20, lVar27 != lVar6;
                  lVar27 = lVar27 + 0x20) {
                FUN_01785554(&local_80,local_90,lVar27);
              }
            }
          }
        }
      }
    }
  }
  plVar31 = local_80;
  lVar27 = local_98;
  if (iVar4 < 0) {
    auVar53 = *(undefined1 (*) [16])PTR_DAT_0437a330;
  }
  else {
    pauVar3 = (undefined1 (*) [16])PTR_DAT_0437a330;
    if (unaff_x22 <= (long *)((local_90 - local_98 >> 5) + -1)) {
      pauVar3 = (undefined1 (*) [16])(local_98 + (long)unaff_x22 * 0x20 + 0x10);
    }
    auVar53 = *pauVar3;
  }
  if (local_98 != 0) {
    lVar36 = local_88 - local_98;
    local_90 = local_98;
    uVar29 = (**(code **)(*local_80 + 0xc0))(local_80);
    if ((uVar29 & 1) == 0) {
LAB_01780ad0:
      (**(code **)(*plVar31 + 0x18))(plVar31,lVar27,lVar36,0x10);
    }
    else {
      lVar6 = tpidr_el0;
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_01780ad0;
      FUN_02bcc824(plVar31,lVar27,lVar36,0x10);
    }
    unaff_x22 = plVar31;
  }
  goto LAB_01780af0;
LAB_0178085c:
  if (uVar30 < 2) {
    plVar31 = *(long **)(lVar27 + (uVar32 & uVar28) * 8);
    uVar33 = uVar32 & uVar28;
  }
  else if (uVar28 < uVar29) {
    plVar31 = *(long **)(lVar27 + uVar28 * 8);
    uVar33 = uVar28;
  }
  else {
    uVar33 = 0;
    if (uVar29 != 0) {
      uVar33 = uVar28 / uVar29;
    }
    uVar33 = uVar28 - uVar33 * uVar29;
    plVar31 = *(long **)(lVar27 + uVar33 * 8);
  }
  if ((plVar31 != (long *)0x0) && (plVar31 = (long *)*plVar31, plVar31 != (long *)0x0)) {
    if (uVar30 < 2) {
      do {
        if (plVar31[1] == uVar28) {
          if (plVar31[2] == uVar28) goto LAB_01780924;
        }
        else if ((plVar31[1] & uVar32) != uVar33) break;
        plVar31 = (long *)*plVar31;
      } while (plVar31 != (long *)0x0);
    }
    else {
      do {
        uVar30 = plVar31[1];
        if (uVar30 == uVar28) {
          if (plVar31[2] == uVar28) goto LAB_01780924;
        }
        else {
          if (uVar29 <= uVar30) {
            uVar32 = 0;
            if (uVar29 != 0) {
              uVar32 = uVar30 / uVar29;
            }
            uVar30 = uVar30 - uVar32 * uVar29;
          }
          if (uVar30 != uVar33) break;
        }
        plVar31 = (long *)*plVar31;
      } while (plVar31 != (long *)0x0);
    }
  }
  FUN_01786b80();
LAB_01781148:
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_length_error();
}


