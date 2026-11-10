/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031bc884; name: FUN_031bc884
 */


undefined8
FUN_031bc884(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 *param_5,undefined8 *param_6,undefined4 param_7)

{
  unkbyte9 *pVar1;
  float *pfVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined8 uVar13;
  float *pfVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar24;
  float fVar25;
  undefined8 uVar20;
  float fVar26;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined8 uVar48;
  float fVar50;
  int iVar51;
  undefined1 auVar49 [16];
  float fVar52;
  undefined1 auVar53 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auStack_114 [4];
  float local_110 [4];
  float local_100 [4];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  local_98 = param_3[5];
  uStack_a8 = param_3[3];
  uStack_b8 = param_3[1];
  local_c0 = *param_3;
  local_b0 = param_3[2];
  local_a0 = param_3[4];
  local_c8 = param_2[5];
  uStack_d8 = param_2[3];
  uStack_e8 = param_2[1];
  local_f0 = *param_2;
  local_e0 = param_2[2];
  local_d0 = param_2[4];
  FUN_031bb3f8(param_1,&local_f0,&local_c0);
  fVar52 = (float)((ulong)uStack_a8 >> 0x20);
  uStack_88 = uStack_a8;
  local_90 = local_b0;
  uStack_78 = uStack_d8;
  uStack_80 = local_e0;
  cVar3 = *(char *)((long)param_3 + 4);
  fVar54 = (float)local_b0 - (float)local_e0;
  fVar50 = (float)((ulong)local_b0 >> 0x20);
  fVar55 = fVar50 - (float)((ulong)local_e0 >> 0x20);
  fVar56 = (float)uStack_a8 - (float)uStack_d8;
  fVar57 = fVar52 - (float)((ulong)uStack_d8 >> 0x20);
  pVar1 = (unkbyte9 *)(param_1 + 0x90);
  uVar20 = *(undefined8 *)(param_1 + 0x98);
  uVar27 = (undefined1)((ulong)uVar20 >> 8);
  uVar28 = (undefined1)((ulong)uVar20 >> 0x10);
  uVar29 = (undefined1)((ulong)uVar20 >> 0x18);
  uVar30 = (undefined1)((ulong)uVar20 >> 0x20);
  uVar31 = (undefined1)((ulong)uVar20 >> 0x28);
  uVar32 = (undefined1)((ulong)uVar20 >> 0x30);
  uVar33 = (undefined1)((ulong)uVar20 >> 0x38);
  uVar17 = *(undefined8 *)pVar1;
  auVar10._4_4_ = fVar55;
  auVar10._0_4_ = fVar54;
  auVar10._8_4_ = fVar56;
  auVar10._12_4_ = fVar57;
  auVar11._4_4_ = fVar55;
  auVar11._0_4_ = fVar54;
  auVar11._8_4_ = fVar56;
  auVar11._12_4_ = fVar57;
  auVar53 = NEON_ext(auVar10,auVar11,4,1);
  auVar49[9] = uVar27;
  auVar49._0_9_ = *pVar1;
  auVar49[10] = uVar28;
  auVar49[0xb] = uVar29;
  auVar49[0xc] = uVar30;
  auVar49[0xd] = uVar31;
  auVar49[0xe] = uVar32;
  auVar49[0xf] = uVar33;
  auVar4[9] = uVar27;
  auVar4._0_9_ = *pVar1;
  auVar4[10] = uVar28;
  auVar4[0xb] = uVar29;
  auVar4[0xc] = uVar30;
  auVar4[0xd] = uVar31;
  auVar4[0xe] = uVar32;
  auVar4[0xf] = uVar33;
  auVar49 = NEON_ext(auVar49,auVar4,8,1);
  uVar48 = NEON_ext(uVar17,auVar49._0_8_,4,1);
  fVar18 = (float)((ulong)uVar17 >> 0x20);
  fVar24 = (float)uVar17 * auVar53._0_4_ - fVar54 * (float)uVar48;
  fVar46 = fVar18 * auVar53._4_4_ - fVar55 * (float)((ulong)uVar48 >> 0x20);
  uVar27 = SUB41(fVar46,0);
  uVar28 = (undefined1)((uint)fVar46 >> 8);
  uVar29 = (undefined1)((uint)fVar46 >> 0x10);
  uVar30 = (undefined1)((uint)fVar46 >> 0x18);
  fVar46 = (float)uVar20 * fVar54 - fVar56 * (float)uVar17;
  uVar31 = (undefined1)((uint)fVar46 >> 8);
  uVar32 = (undefined1)((uint)fVar46 >> 0x10);
  uVar33 = (undefined1)((uint)fVar46 >> 0x18);
  fVar18 = (float)((ulong)uVar20 >> 0x20) * fVar55 - fVar57 * fVar18;
  uVar34 = (undefined1)((uint)fVar18 >> 8);
  uVar35 = (undefined1)((uint)fVar18 >> 0x10);
  uVar36 = (undefined1)((uint)fVar18 >> 0x18);
  auVar53[4] = uVar27;
  auVar53._0_4_ = fVar24;
  auVar53[5] = uVar28;
  auVar53[6] = uVar29;
  auVar53[7] = uVar30;
  auVar53[8] = SUB41(fVar46,0);
  auVar53[9] = uVar31;
  auVar53[10] = uVar32;
  auVar53[0xb] = uVar33;
  auVar53[0xc] = SUB41(fVar18,0);
  auVar53[0xd] = uVar34;
  auVar53[0xe] = uVar35;
  auVar53[0xf] = uVar36;
  auVar5[4] = uVar27;
  auVar5._0_4_ = fVar24;
  auVar5[5] = uVar28;
  auVar5[6] = uVar29;
  auVar5[7] = uVar30;
  auVar5[8] = SUB41(fVar46,0);
  auVar5[9] = uVar31;
  auVar5[10] = uVar32;
  auVar5[0xb] = uVar33;
  auVar5[0xc] = SUB41(fVar18,0);
  auVar5[0xd] = uVar34;
  auVar5[0xe] = uVar35;
  auVar5[0xf] = uVar36;
  auVar49 = NEON_ext(auVar53,auVar5,4,1);
  uVar17 = CONCAT17(uVar30,CONCAT16(uVar29,CONCAT15(uVar28,CONCAT14(uVar27,fVar24))));
  auVar22._0_8_ = auVar49._0_8_;
  auVar22._8_8_ = uVar17;
  auVar21[0] = -(cVar3 == '\0');
  auVar21[1] = auVar21[0];
  auVar21[2] = auVar21[0];
  auVar21[3] = auVar21[0];
  auVar21[4] = auVar21[0];
  auVar21[5] = auVar21[0];
  auVar21[6] = auVar21[0];
  auVar21[7] = auVar21[0];
  auVar21[8] = auVar21[0];
  auVar21[9] = auVar21[0];
  auVar21[10] = auVar21[0];
  auVar21[0xb] = auVar21[0];
  auVar21[0xc] = auVar21[0];
  auVar21[0xd] = auVar21[0];
  auVar21[0xe] = auVar21[0];
  auVar21[0xf] = auVar21[0];
  fVar18 = -auVar49._4_4_;
  fVar24 = -fVar24;
  fVar46 = -(float)((ulong)uVar17 >> 0x20);
  auVar6[4] = SUB41(fVar18,0);
  auVar6._0_4_ = -auVar49._0_4_;
  auVar6[5] = (char)((uint)fVar18 >> 8);
  auVar6[6] = (char)((uint)fVar18 >> 0x10);
  auVar6[7] = (char)((uint)fVar18 >> 0x18);
  auVar6[8] = SUB41(fVar24,0);
  auVar6[9] = (char)((uint)fVar24 >> 8);
  auVar6[10] = (char)((uint)fVar24 >> 0x10);
  auVar6[0xb] = (char)((uint)fVar24 >> 0x18);
  auVar6[0xc] = SUB41(fVar46,0);
  auVar6[0xd] = (char)((uint)fVar46 >> 8);
  auVar6[0xe] = (char)((uint)fVar46 >> 0x10);
  auVar6[0xf] = (char)((uint)fVar46 >> 0x18);
  auVar22 = auVar22 ^ (auVar22 ^ auVar6) & auVar21;
  fVar18 = auVar22._0_4_;
  fVar24 = auVar22._4_4_;
  fVar50 = fVar50 + fVar24;
  fVar46 = auVar22._8_4_;
  fVar52 = fVar52 + auVar22._12_4_;
  uStack_b8 = CONCAT17((char)((uint)fVar52 >> 0x18),
                       CONCAT16((char)((uint)fVar52 >> 0x10),
                                CONCAT15((char)((uint)fVar52 >> 8),
                                         CONCAT14(SUB41(fVar52,0),(float)uStack_a8 + fVar46))));
  local_c0 = CONCAT17((char)((uint)fVar50 >> 0x18),
                      CONCAT16((char)((uint)fVar50 >> 0x10),
                               CONCAT15((char)((uint)fVar50 >> 8),
                                        CONCAT14(SUB41(fVar50,0),(float)local_b0 + fVar18))));
  if ((*(char *)((long)param_5 + 7) == '\0') && (*(char *)((long)param_5 + 4) != -1)) {
    uStack_e8 = param_5[5];
    local_f0 = param_5[4];
    if (*(char *)((long)param_5 + 6) != '\0') {
      fVar50 = fVar46 * fVar46 + fVar18 * fVar18 + fVar24 * fVar24;
      fVar47 = fVar46 * fVar46 + fVar18 * fVar18 + fVar24 * fVar24;
      uVar27 = SUB41(fVar47,0);
      uVar28 = (undefined1)((uint)fVar47 >> 8);
      uVar29 = (undefined1)((uint)fVar47 >> 0x10);
      uVar30 = (undefined1)((uint)fVar47 >> 0x18);
      uVar17 = NEON_frsqrte(CONCAT17(uVar30,CONCAT16(uVar29,CONCAT15(uVar28,CONCAT14(uVar27,fVar50))
                                                    )),4);
      fVar52 = (float)uVar17;
      fVar45 = (float)((ulong)uVar17 >> 0x20);
      uVar17 = NEON_frsqrts(CONCAT17(uVar30,CONCAT16(uVar29,CONCAT15(uVar28,CONCAT14(uVar27,fVar50))
                                                    )),CONCAT44(fVar45 * fVar45,fVar52 * fVar52),4);
      fVar52 = fVar52 * (float)uVar17;
      fVar45 = fVar45 * (float)((ulong)uVar17 >> 0x20);
      iVar15 = -(uint)(fVar50 <= 0.0);
      iVar51 = -(uint)(fVar47 <= 0.0);
      uVar17 = NEON_frsqrts(CONCAT17(uVar30,CONCAT16(uVar29,CONCAT15(uVar28,CONCAT14(uVar27,fVar50))
                                                    )),CONCAT44(fVar45 * fVar45,fVar52 * fVar52),4);
      fVar52 = (float)uVar17 * fVar52;
      fVar45 = (float)((ulong)uVar17 >> 0x20) * fVar45;
      bVar37 = SUB41(fVar52,0) & ~(byte)iVar15;
      bVar38 = (byte)((uint)fVar52 >> 8) & ~(byte)((uint)iVar15 >> 8);
      bVar39 = (byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10);
      bVar40 = (byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18);
      bVar41 = SUB41(fVar45,0) & ~(byte)iVar51;
      bVar42 = (byte)((uint)fVar45 >> 8) & ~(byte)((uint)iVar51 >> 8);
      bVar43 = (byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10);
      bVar44 = (byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18);
      fVar50 = (float)CONCAT13(bVar40,CONCAT12(bVar39,CONCAT11(bVar38,bVar37)));
      fVar52 = (float)*(undefined8 *)(param_1 + 0x18);
      fVar47 = (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
      auVar23._0_4_ =
           (float)local_f0 -
           fVar52 * fVar18 * (float)CONCAT13(bVar40,CONCAT12(bVar39,CONCAT11(bVar38,bVar37)));
      auVar23._4_4_ =
           (float)((ulong)local_f0 >> 0x20) -
           fVar47 * fVar24 * (float)CONCAT13(bVar44,CONCAT12(bVar43,CONCAT11(bVar42,bVar41)));
      auVar23._8_4_ = (float)uStack_e8 - fVar52 * fVar46 * fVar50;
      auVar23._12_4_ =
           (float)((ulong)uStack_e8 >> 0x20) -
           fVar47 * auVar22._12_4_ *
                    (float)(CONCAT17(bVar44,CONCAT16(bVar43,CONCAT15(bVar42,CONCAT14(bVar41,fVar50))
                                                    )) >> 0x20);
      goto LAB_031bc9a0;
    }
  }
  else {
    auVar23 = *(undefined1 (*) [16])(param_5 + 4);
LAB_031bc9a0:
    uStack_e8 = auVar23._8_8_;
    local_f0 = auVar23._0_8_;
  }
  iVar15 = FUN_031babf0(param_1,&uStack_80,&local_90,&local_f0);
  if (iVar15 == cVar3) {
    iVar15 = FUN_031babf0(param_1,&local_90,&local_c0,&local_f0);
    if (iVar15 != cVar3) {
      uVar17 = 1;
      goto LAB_031bcaf0;
    }
    FUN_031bb1e0(param_1,param_7,0,local_100,auStack_114);
    uVar17 = 1;
    FUN_031bb1e0(param_1,param_7,1,local_110,auStack_114);
    pfVar2 = local_100;
    pfVar14 = local_110;
    if (*(char *)((long)param_3 + 4) != '\0') {
      pfVar2 = local_110;
      pfVar14 = local_100;
    }
    fVar19 = *pfVar14 - (float)*(undefined8 *)pfVar2;
    fVar25 = pfVar14[1] - (float)((ulong)*(undefined8 *)pfVar2 >> 0x20);
    fVar26 = pfVar14[2] - (float)*(undefined8 *)(pfVar2 + 2);
    fVar18 = (float)*(undefined8 *)(param_1 + 0x90);
    fVar50 = fVar19 * fVar18;
    fVar24 = (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20);
    fVar47 = fVar25 * fVar24;
    fVar46 = (float)*(undefined8 *)(param_1 + 0x98);
    fVar45 = fVar26 * fVar46;
    fVar52 = fVar50 + fVar47 + fVar45;
    fVar45 = fVar50 + fVar47 + fVar45;
    fVar50 = (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20);
    fVar19 = fVar19 - fVar18 * fVar52;
    fVar25 = fVar25 - fVar24 * fVar45;
    fVar26 = fVar26 - fVar46 * fVar52;
    fVar47 = fVar54 * fVar18 + fVar55 * fVar24 + fVar56 * fVar46;
    fVar9 = fVar54 * fVar18 + fVar55 * fVar24 + fVar56 * fVar46;
    fVar54 = fVar54 - fVar18 * fVar47;
    fVar55 = fVar55 - fVar24 * fVar9;
    fVar56 = fVar56 - fVar46 * fVar47;
    fVar18 = fVar19 * fVar54;
    fVar24 = fVar25 * fVar55;
    uVar27 = (undefined1)((uint)fVar24 >> 8);
    uVar28 = (undefined1)((uint)fVar24 >> 0x10);
    uVar29 = (undefined1)((uint)fVar24 >> 0x18);
    fVar46 = ((pfVar14[3] - (float)((ulong)*(undefined8 *)(pfVar2 + 2) >> 0x20)) -
             fVar50 * (float)(CONCAT17((char)((uint)fVar45 >> 0x18),
                                       CONCAT16((char)((uint)fVar45 >> 0x10),
                                                CONCAT15((char)((uint)fVar45 >> 8),
                                                         CONCAT14(SUB41(fVar45,0),fVar52)))) >> 0x20
                             )) *
             (fVar57 - fVar50 * (float)(CONCAT17((char)((uint)fVar9 >> 0x18),
                                                 CONCAT16((char)((uint)fVar9 >> 0x10),
                                                          CONCAT15((char)((uint)fVar9 >> 8),
                                                                   CONCAT14(SUB41(fVar9,0),fVar47)))
                                                ) >> 0x20));
    auVar7[4] = SUB41(fVar24,0);
    auVar7._0_4_ = fVar18;
    auVar7[5] = uVar27;
    auVar7[6] = uVar28;
    auVar7[7] = uVar29;
    auVar7._8_4_ = fVar26 * fVar56;
    auVar7._12_4_ = fVar46;
    auVar8[4] = SUB41(fVar24,0);
    auVar8._0_4_ = fVar18;
    auVar8[5] = uVar27;
    auVar8[6] = uVar28;
    auVar8[7] = uVar29;
    auVar8._8_4_ = fVar26 * fVar56;
    auVar8._12_4_ = fVar46;
    auVar49 = NEON_ext(auVar7,auVar8,8,1);
    fVar46 = (fVar19 * fVar19 + fVar25 * fVar25 + fVar26 * fVar26) *
             (fVar54 * fVar54 + fVar55 * fVar55 + fVar56 * fVar56);
    uVar20 = CONCAT44((fVar19 * fVar19 + fVar25 * fVar25 + fVar26 * fVar26) *
                      (fVar54 * fVar54 + fVar55 * fVar55 + fVar56 * fVar56),fVar46);
    uVar48 = NEON_frsqrte(uVar20,4);
    fVar54 = (float)uVar48;
    fVar50 = (float)((ulong)uVar48 >> 0x20);
    uVar48 = NEON_frsqrts(uVar20,CONCAT44(fVar50 * fVar50,fVar54 * fVar54),4);
    fVar54 = fVar54 * (float)uVar48;
    fVar50 = fVar50 * (float)((ulong)uVar48 >> 0x20);
    iVar15 = -(uint)(fVar46 <= 0.0);
    uVar20 = NEON_frsqrts(uVar20,CONCAT44(fVar50 * fVar50,fVar54 * fVar54),4);
    fVar54 = (float)uVar20 * fVar54;
    if (-0.001 < (fVar18 + fVar24 + auVar49._0_4_) *
                 (float)CONCAT13((byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                                 CONCAT12((byte)((uint)fVar54 >> 0x10) &
                                          ~(byte)((uint)iVar15 >> 0x10),
                                          CONCAT11((byte)((uint)fVar54 >> 8) &
                                                   ~(byte)((uint)iVar15 >> 8),
                                                   SUB41(fVar54,0) & ~(byte)iVar15)))) {
      goto LAB_031bcaf0;
    }
  }
  uVar17 = 0;
  param_3 = param_2;
LAB_031bcaf0:
  uVar12 = param_3[2];
  uVar13 = param_3[3];
  uVar48 = param_3[5];
  uVar20 = param_3[4];
  uVar16 = *param_3;
  *(undefined1 *)(param_4 + 1) = *(undefined1 *)(param_3 + 1);
  param_4[3] = uVar13;
  param_4[2] = uVar12;
  param_4[5] = uVar48;
  param_4[4] = uVar20;
  *param_4 = uVar16;
  uVar20 = *param_6;
  *(undefined1 *)(param_5 + 1) = *(undefined1 *)(param_6 + 1);
  *param_5 = uVar20;
  uVar20 = param_6[2];
  param_5[3] = param_6[3];
  param_5[2] = uVar20;
  auVar49 = *(undefined1 (*) [16])(param_6 + 4);
  param_5[5] = auVar49._8_8_;
  param_5[4] = auVar49._0_8_;
  FUN_031bb3f8(param_1,param_4,param_5);
  return uVar17;
}


