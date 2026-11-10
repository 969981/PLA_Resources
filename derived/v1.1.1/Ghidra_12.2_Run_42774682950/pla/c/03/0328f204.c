/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0328f204; name: FUN_0328f204
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_0328f204(undefined1 param_1 [16],float param_2,undefined1 (*param_3) [16],
            undefined1 (*param_4) [16],undefined1 (*param_5) [16],float *param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
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
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined *puVar15;
  undefined8 uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar36;
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  int iVar44;
  byte bVar49;
  byte bVar50;
  int iVar52;
  undefined1 auVar45 [16];
  byte bVar51;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar63;
  undefined8 uVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar64 [16];
  float fVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auStack_e8 [24];
  undefined8 *local_d0;
  int local_c8;
  uint local_c4;
  undefined8 *local_c0;
  int local_b8;
  uint local_b4;
  undefined8 local_b0 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  fVar18 = param_1._0_4_;
  uVar16 = 0x80040200;
  if ((0.0 < fVar18) && (0.0 <= param_2)) {
    auVar55 = *param_5;
    auVar60 = *param_4;
    auVar26 = *param_3;
    fVar22 = auVar60._0_4_;
    fVar36 = auVar26._0_4_;
    fVar38 = fVar36 - fVar22;
    fVar27 = auVar60._4_4_;
    fVar31 = auVar26._4_4_;
    fVar40 = fVar31 - fVar27;
    fVar32 = auVar60._8_4_;
    fVar33 = auVar26._8_4_;
    fVar42 = fVar33 - fVar32;
    fVar34 = auVar60._12_4_;
    fVar35 = auVar26._12_4_;
    fVar43 = fVar35 - fVar34;
    fVar19 = auVar55._0_4_;
    auVar64._0_4_ = fVar19 - fVar22;
    fVar23 = auVar55._4_4_;
    auVar64._4_4_ = fVar23 - fVar27;
    fVar21 = auVar55._8_4_;
    auVar64._8_4_ = fVar21 - fVar32;
    fVar20 = auVar55._12_4_;
    auVar64._12_4_ = fVar20 - fVar34;
    auVar45 = NEON_ext(auVar64,auVar64,4,1);
    auVar53._4_4_ = fVar40;
    auVar53._0_4_ = fVar38;
    auVar53._8_4_ = fVar42;
    auVar53._12_4_ = fVar43;
    auVar28._4_4_ = fVar40;
    auVar28._0_4_ = fVar38;
    auVar28._8_4_ = fVar42;
    auVar28._12_4_ = fVar43;
    auVar53 = NEON_ext(auVar53,auVar28,4,1);
    fVar39 = auVar64._0_4_ * auVar53._0_4_ - fVar38 * auVar45._0_4_;
    fVar41 = auVar64._4_4_ * auVar53._4_4_ - fVar40 * auVar45._4_4_;
    fVar38 = auVar64._8_4_ * fVar38 - fVar42 * auVar64._0_4_;
    fVar40 = auVar64._12_4_ * fVar40 - fVar43 * auVar64._4_4_;
    auVar45._4_4_ = fVar41;
    auVar45._0_4_ = fVar39;
    auVar45._8_4_ = fVar38;
    auVar45._12_4_ = fVar40;
    auVar54._4_4_ = fVar41;
    auVar54._0_4_ = fVar39;
    auVar54._8_4_ = fVar38;
    auVar54._12_4_ = fVar40;
    auVar53 = NEON_ext(auVar45,auVar54,4,1);
    fVar65 = auVar53._0_4_;
    fVar38 = auVar53._4_4_;
    fVar43 = fVar65 * fVar65 + fVar38 * fVar38 + fVar39 * fVar39;
    fVar63 = fVar65 * fVar65 + fVar38 * fVar38 + fVar39 * fVar39;
    uVar59 = CONCAT44(fVar63,fVar43);
    uVar16 = NEON_frsqrte(uVar59,4);
    fVar40 = (float)uVar16;
    fVar42 = (float)((ulong)uVar16 >> 0x20);
    uVar16 = NEON_frsqrts(uVar59,CONCAT44(fVar42 * fVar42,fVar40 * fVar40),4);
    fVar40 = fVar40 * (float)uVar16;
    fVar42 = fVar42 * (float)((ulong)uVar16 >> 0x20);
    uVar16 = NEON_frsqrts(uVar59,CONCAT44(fVar42 * fVar42,fVar40 * fVar40),4);
    fVar40 = (float)uVar16 * fVar40;
    fVar42 = (float)((ulong)uVar16 >> 0x20) * fVar42;
    iVar44 = -(uint)(fVar43 <= 0.0);
    iVar52 = -(uint)(fVar63 <= 0.0);
    fVar43 = fVar40 * fVar43;
    bVar49 = (byte)((uint)iVar44 >> 8);
    bVar50 = (byte)((uint)iVar44 >> 0x10);
    bVar51 = (byte)((uint)iVar44 >> 0x18);
    fVar43 = (float)CONCAT13((byte)((uint)fVar43 >> 0x18) & ~bVar51,
                             CONCAT12((byte)((uint)fVar43 >> 0x10) & ~bVar50,
                                      CONCAT11((byte)((uint)fVar43 >> 8) & ~bVar49,
                                               SUB41(fVar43,0) & ~(byte)iVar44)));
    if (1e-05 <= param_2) {
      if (1e-05 <= fVar43) {
        fVar19 = (float)CONCAT13((byte)((uint)fVar40 >> 0x18) & ~bVar51,
                                 CONCAT12((byte)((uint)fVar40 >> 0x10) & ~bVar50,
                                          CONCAT11((byte)((uint)fVar40 >> 8) & ~bVar49,
                                                   SUB41(fVar40,0) & ~(byte)iVar44)));
        local_b0[0] = 0;
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = 0;
        uStack_88 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_70 = 0;
        uStack_68 = 0;
        FUN_0333e3f0(auStack_e8);
        puVar15 = PTR_PTR_0434a080;
        if ((local_c4 & 0x3ffffffe) < 6) {
          uVar17 = (local_c4 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar17) {
            uVar17 = 0x3fffffff;
          }
          if (uVar17 < 7) {
            uVar17 = 6;
          }
          local_d0 = (undefined8 *)
                     FUN_032bd1d4(PTR_PTR_0434a080,uVar17,0x10,local_d0,local_c8,&local_c4);
        }
        fVar23 = (float)(CONCAT17((byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18),
                                  CONCAT16((byte)((uint)fVar42 >> 0x10) &
                                           ~(byte)((uint)iVar52 >> 0x10),
                                           CONCAT15((byte)((uint)fVar42 >> 8) &
                                                    ~(byte)((uint)iVar52 >> 8),
                                                    CONCAT14(SUB41(fVar42,0) & ~(byte)iVar52,fVar19)
                                                   ))) >> 0x20);
        fVar38 = fVar38 * fVar23;
        fVar41 = fVar41 * fVar23;
        fVar23 = param_2 * 0.5;
        if (local_c8 != 6) {
          local_c8 = 6;
        }
        fVar27 = fVar65 * fVar19 * fVar23;
        fVar32 = fVar38 * fVar23;
        fVar34 = fVar39 * fVar19 * fVar23;
        fVar36 = fVar41 * fVar23;
        auVar55._0_8_ = CONCAT44(fVar32 + *(float *)(*param_3 + 4),fVar27 + *(float *)*param_3);
        auVar55._8_4_ = fVar34 + *(float *)(*param_3 + 8);
        auVar55._12_4_ = fVar36 + *(float *)(*param_3 + 0xc);
        fVar23 = -fVar23;
        fVar20 = fVar65 * fVar19 * fVar23;
        fVar38 = fVar38 * fVar23;
        fVar22 = fVar39 * fVar19 * fVar23;
        fVar41 = fVar41 * fVar23;
        local_d0[1] = auVar55._8_8_;
        *local_d0 = auVar55._0_8_;
        fVar19 = *(float *)*param_3;
        fVar23 = *(float *)(*param_3 + 4);
        fVar21 = *(float *)(*param_3 + 0xc);
        *(float *)(local_d0 + 3) = fVar22 + *(float *)(*param_3 + 8);
        *(float *)((long)local_d0 + 0x1c) = fVar41 + fVar21;
        *(float *)(local_d0 + 2) = fVar20 + fVar19;
        *(float *)((long)local_d0 + 0x14) = fVar38 + fVar23;
        fVar19 = *(float *)*param_4;
        fVar23 = *(float *)(*param_4 + 4);
        fVar21 = *(float *)(*param_4 + 0xc);
        *(float *)(local_d0 + 5) = fVar34 + *(float *)(*param_4 + 8);
        *(float *)((long)local_d0 + 0x2c) = fVar36 + fVar21;
        *(float *)(local_d0 + 4) = fVar27 + fVar19;
        *(float *)((long)local_d0 + 0x24) = fVar32 + fVar23;
        fVar19 = *(float *)*param_4;
        fVar23 = *(float *)(*param_4 + 4);
        fVar21 = *(float *)(*param_4 + 0xc);
        *(float *)(local_d0 + 7) = fVar22 + *(float *)(*param_4 + 8);
        *(float *)((long)local_d0 + 0x3c) = fVar41 + fVar21;
        *(float *)(local_d0 + 6) = fVar20 + fVar19;
        *(float *)((long)local_d0 + 0x34) = fVar38 + fVar23;
        fVar19 = *(float *)*param_5;
        fVar23 = *(float *)(*param_5 + 4);
        fVar21 = *(float *)(*param_5 + 0xc);
        *(float *)(local_d0 + 9) = fVar34 + *(float *)(*param_5 + 8);
        *(float *)((long)local_d0 + 0x4c) = fVar36 + fVar21;
        *(float *)(local_d0 + 8) = fVar27 + fVar19;
        *(float *)((long)local_d0 + 0x44) = fVar32 + fVar23;
        auVar53 = *param_5;
        *(float *)(local_d0 + 0xb) = fVar22 + auVar53._8_4_;
        *(float *)((long)local_d0 + 0x5c) = fVar41 + auVar53._12_4_;
        *(float *)(local_d0 + 10) = fVar20 + auVar53._0_4_;
        *(float *)((long)local_d0 + 0x54) = fVar38 + auVar53._4_4_;
        if ((local_b4 & 0x3ffffff8) == 0) {
          uVar17 = (local_b4 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar17) {
            uVar17 = 0x3fffffff;
          }
          if (uVar17 < 9) {
            uVar17 = 8;
          }
          local_c0 = (undefined8 *)
                     FUN_032bd1d4(param_1,puVar15,uVar17,0x10,local_c0,local_b8,&local_b4);
        }
        if (local_b8 != 8) {
          local_b8 = 8;
        }
        *local_c0 = 0x200000000;
        local_c0[1] = 0xffffffff00000004;
        local_c0[2] = 0x500000001;
        local_c0[3] = 0xffffffff00000003;
        local_c0[4] = 0x300000000;
        local_c0[5] = 0xffffffff00000002;
        local_c0[6] = 0x100000000;
        local_c0[7] = 0xffffffff00000003;
        local_c0[10] = 0x400000001;
        local_c0[0xb] = 0xffffffff00000005;
        local_c0[8] = 1;
        local_c0[9] = 0xffffffff00000004;
        local_c0[0xc] = 0x500000002;
        local_c0[0xd] = 0xffffffff00000004;
        local_c0[0xe] = 0x300000002;
        local_c0[0xf] = 0xffffffff00000005;
        FUN_0328f758(param_1,auStack_e8,local_b0);
        FUN_0333e688(auStack_e8);
        fVar39 = (float)uStack_98;
        fVar40 = (float)((ulong)uStack_98 >> 0x20);
        fVar38 = (float)local_a0;
        fVar41 = (float)((ulong)local_a0 >> 0x20);
        auVar60._8_8_ = uStack_88;
        auVar60._0_8_ = local_90;
        auVar26._8_8_ = uStack_78;
        auVar26._0_8_ = local_80;
        auVar66._8_8_ = uStack_68;
        auVar66._0_8_ = local_70;
      }
      else {
        auVar48._8_8_ = _UNK_038897b8;
        auVar48._0_8_ = _DAT_038897b0;
        auVar57._8_8_ = _UNK_03889f48;
        auVar57._0_8_ = _DAT_03889f40;
        fVar38 = (fVar19 + fVar22 + fVar36) * 0.33333334;
        fVar41 = (fVar23 + fVar27 + fVar31) * 0.33333334;
        fVar39 = (fVar21 + fVar32 + fVar33) * 0.33333334;
        fVar40 = (fVar20 + fVar34 + fVar35) * 0.33333334;
        auVar70._0_4_ = fVar38 * fVar38;
        auVar70._4_4_ = fVar41 * fVar41;
        auVar70._8_4_ = fVar39 * fVar39;
        auVar70._12_4_ = fVar40 * fVar40;
        auVar72._8_8_ = _UNK_038895e8;
        auVar72._0_8_ = _DAT_038895e0;
        auVar45 = a64_TBL(ZEXT816(0),auVar70,auVar48);
        auVar53 = a64_TBL(ZEXT816(0),auVar70,auVar57);
        auVar58._8_8_ = _UNK_038895f8;
        auVar58._0_8_ = _DAT_038895f0;
        auVar67._4_4_ = fVar41;
        auVar67._0_4_ = fVar38;
        auVar67._8_4_ = fVar39;
        auVar67._12_4_ = fVar40;
        auVar28 = a64_TBL(ZEXT816(0),auVar67,auVar72);
        auVar69._4_4_ = fVar41;
        auVar69._0_4_ = fVar38;
        auVar69._8_4_ = fVar39;
        auVar69._12_4_ = fVar40;
        auVar54 = a64_TBL(ZEXT816(0),auVar69,auVar58);
        auVar30._0_4_ = -fVar18 * auVar28._0_4_ * auVar54._0_4_;
        auVar30._4_4_ = -fVar18 * auVar28._4_4_ * auVar54._4_4_;
        auVar30._8_4_ = -fVar18 * auVar28._8_4_ * auVar54._8_4_;
        auVar30._12_4_ = -fVar18 * auVar28._12_4_ * auVar54._12_4_;
        auVar37._0_4_ = (auVar45._0_4_ + auVar53._0_4_) * fVar18;
        auVar37._4_4_ = (auVar45._4_4_ + auVar53._4_4_) * fVar18;
        auVar37._8_4_ = (auVar45._8_4_ + auVar53._8_4_) * fVar18;
        auVar37._12_4_ = 0;
        auVar60 = a64_TBL(ZEXT816(0),auVar30,auVar72);
        auVar60 = auVar60 ^ (auVar60 ^ auVar37) & *(undefined1 (*) [16])(PTR_DAT_043723a0 + 0x90);
        auVar66 = a64_TBL(ZEXT816(0),auVar30,auVar58);
        auVar26 = auVar30 ^ (auVar30 ^ auVar37) & *(undefined1 (*) [16])(PTR_DAT_043723a0 + 0xa0);
        auVar66 = auVar66 ^ (auVar66 ^ auVar37) & *(undefined1 (*) [16])(PTR_DAT_043723a0 + 0xc0);
      }
    }
    else {
      auVar4._8_8_ = _UNK_038895f8;
      auVar4._0_8_ = _DAT_038895f0;
      auVar66 = a64_TBL(ZEXT816(0),auVar55,auVar4);
      auVar9._8_8_ = _UNK_038895e8;
      auVar9._0_8_ = _DAT_038895e0;
      auVar69 = a64_TBL(ZEXT816(0),auVar60,auVar9);
      auVar10._8_8_ = _UNK_038895e8;
      auVar10._0_8_ = _DAT_038895e0;
      auVar53 = a64_TBL(ZEXT816(0),auVar55,auVar10);
      fVar38 = (fVar19 + fVar22 + fVar36) * 0.33333334;
      fVar41 = (fVar23 + fVar27 + fVar31) * 0.33333334;
      fVar39 = (fVar21 + fVar32 + fVar33) * 0.33333334;
      fVar40 = (fVar20 + fVar34 + fVar35) * 0.33333334;
      auVar5._8_8_ = _UNK_038895f8;
      auVar5._0_8_ = _DAT_038895f0;
      auVar64 = a64_TBL(ZEXT816(0),auVar60,auVar5);
      fVar42 = fVar18 * 0.083333336;
      fVar63 = fVar18 * 0.083333336;
      auVar68._0_4_ = fVar38 * fVar38;
      auVar68._4_4_ = fVar41 * fVar41;
      auVar68._8_4_ = fVar39 * fVar39;
      auVar68._12_4_ = fVar40 * fVar40;
      auVar70 = NEON_fmov(0x41100000,4);
      auVar1._4_4_ = fVar41;
      auVar1._0_4_ = fVar38;
      auVar1._8_4_ = fVar39;
      auVar1._12_4_ = fVar40;
      auVar11._8_8_ = _UNK_038895e8;
      auVar11._0_8_ = _DAT_038895e0;
      auVar67 = a64_TBL(ZEXT816(0),auVar1,auVar11);
      auVar2._4_4_ = fVar41;
      auVar2._0_4_ = fVar38;
      auVar2._8_4_ = fVar39;
      auVar2._12_4_ = fVar40;
      auVar6._8_8_ = _UNK_038895f8;
      auVar6._0_8_ = _DAT_038895f0;
      auVar72 = a64_TBL(ZEXT816(0),auVar2,auVar6);
      auVar12._8_8_ = _UNK_038895e8;
      auVar12._0_8_ = _DAT_038895e0;
      auVar54 = a64_TBL(ZEXT816(0),auVar26,auVar12);
      auVar7._8_8_ = _UNK_038895f8;
      auVar7._0_8_ = _DAT_038895f0;
      auVar28 = a64_TBL(ZEXT816(0),auVar26,auVar7);
      auVar73._8_8_ = _UNK_03889f48;
      auVar73._0_8_ = _DAT_03889f40;
      auVar71._8_8_ = _UNK_038897b8;
      auVar71._0_8_ = _DAT_038897b0;
      auVar46._8_8_ = _UNK_03889f38;
      auVar46._0_8_ = _DAT_03889f30;
      auVar55 = a64_TBL(ZEXT816(0),auVar68,auVar73);
      auVar24._0_4_ =
           fVar42 * (fVar19 * fVar19 +
                    fVar22 * fVar22 + fVar36 * fVar36 + auVar68._0_4_ * auVar70._0_4_);
      auVar24._4_4_ =
           fVar63 * (fVar23 * fVar23 +
                    fVar27 * fVar27 + fVar31 * fVar31 + auVar68._4_4_ * auVar70._4_4_);
      auVar24._8_4_ =
           fVar42 * (fVar21 * fVar21 +
                    fVar32 * fVar32 + fVar33 * fVar33 + auVar68._8_4_ * auVar70._8_4_);
      auVar24._12_4_ =
           fVar63 * (fVar20 * fVar20 +
                    fVar34 * fVar34 + fVar35 * fVar35 + auVar68._12_4_ * auVar70._12_4_);
      auVar60 = a64_TBL(ZEXT816(0),auVar68,auVar71);
      auVar3._4_4_ = fVar41;
      auVar3._0_4_ = fVar38;
      auVar3._8_4_ = fVar39;
      auVar3._12_4_ = fVar40;
      auVar45 = a64_TBL(ZEXT816(0),auVar3,auVar46);
      auVar61._8_8_ = _UNK_03889e68;
      auVar61._0_8_ = _DAT_03889e60;
      auVar56._0_4_ = -fVar18 * (auVar60._0_4_ + auVar55._0_4_);
      auVar56._4_4_ = -fVar18 * (auVar60._4_4_ + auVar55._4_4_);
      auVar56._8_4_ = -fVar18 * (auVar60._8_4_ + auVar55._8_4_);
      auVar47._0_4_ = fVar38 * auVar45._0_4_ * fVar18;
      auVar47._4_4_ = fVar41 * auVar45._4_4_ * fVar18;
      auVar47._8_4_ = fVar39 * auVar45._8_4_ * fVar18;
      auVar47._12_4_ = fVar40 * auVar45._12_4_ * fVar18;
      auVar62._0_4_ =
           -fVar42 * (auVar67._0_4_ * auVar72._0_4_ * auVar70._0_4_ + auVar54._0_4_ * auVar28._0_4_
                      + auVar69._0_4_ * auVar64._0_4_ + auVar53._0_4_ * auVar66._0_4_);
      auVar62._4_4_ =
           -fVar63 * (auVar67._4_4_ * auVar72._4_4_ * auVar70._4_4_ + auVar54._4_4_ * auVar28._4_4_
                      + auVar69._4_4_ * auVar64._4_4_ + auVar53._4_4_ * auVar66._4_4_);
      auVar62._8_4_ =
           -fVar42 * (auVar67._8_4_ * auVar72._8_4_ * auVar70._8_4_ + auVar54._8_4_ * auVar28._8_4_
                      + auVar69._8_4_ * auVar64._8_4_ + auVar53._8_4_ * auVar66._8_4_);
      auVar62._12_4_ =
           -fVar63 * (auVar67._12_4_ * auVar72._12_4_ * auVar70._12_4_ +
                      auVar54._12_4_ * auVar28._12_4_ + auVar69._12_4_ * auVar64._12_4_ +
                     auVar53._12_4_ * auVar66._12_4_);
      auVar56._12_4_ = 0;
      auVar45 = a64_TBL(ZEXT816(0),auVar47,auVar61);
      auVar13._8_8_ = _UNK_038895e8;
      auVar13._0_8_ = _DAT_038895e0;
      auVar55 = a64_TBL(ZEXT816(0),auVar47,auVar13);
      auVar14._8_8_ = _UNK_038895e8;
      auVar14._0_8_ = _DAT_038895e0;
      auVar28 = a64_TBL(ZEXT816(0),auVar62,auVar14);
      auVar45 = auVar45 ^ (auVar45 ^ auVar56) & *(undefined1 (*) [16])(PTR_DAT_043723a0 + 0x90);
      auVar55 = auVar55 ^ (auVar55 ^ auVar56) & *(undefined1 (*) [16])(PTR_DAT_043723a0 + 0xa0);
      auVar54 = a64_TBL(ZEXT816(0),auVar24,auVar73);
      auVar53 = a64_TBL(ZEXT816(0),auVar24,auVar71);
      auVar25._0_4_ = auVar53._0_4_ + auVar54._0_4_;
      auVar25._4_4_ = auVar53._4_4_ + auVar54._4_4_;
      auVar25._8_4_ = auVar53._8_4_ + auVar54._8_4_;
      auVar8._8_8_ = _UNK_038895f8;
      auVar8._0_8_ = _DAT_038895f0;
      auVar54 = a64_TBL(ZEXT816(0),auVar62,auVar8);
      auVar25._12_4_ = 0;
      auVar28 = auVar28 ^ (auVar28 ^ auVar25) & *(undefined1 (*) [16])(PTR_DAT_043723a0 + 0x90);
      auVar62 = auVar62 ^ (auVar62 ^ auVar25) & *(undefined1 (*) [16])(PTR_DAT_043723a0 + 0xa0);
      auVar60._0_4_ = auVar28._0_4_ + auVar45._0_4_;
      auVar60._4_4_ = auVar28._4_4_ + auVar45._4_4_;
      auVar60._8_4_ = auVar28._8_4_ + auVar45._8_4_;
      auVar60._12_4_ = auVar28._12_4_ + auVar45._12_4_;
      auVar29._8_8_ = _UNK_03888e58;
      auVar29._0_8_ = _DAT_03888e50;
      auVar53 = a64_TBL(ZEXT816(0),auVar47,auVar29);
      auVar54 = auVar54 ^ (auVar54 ^ auVar25) & *(undefined1 (*) [16])(PTR_DAT_043723a0 + 0xc0);
      auVar53 = auVar53 ^ (auVar53 ^ auVar56) & *(undefined1 (*) [16])(PTR_DAT_043723a0 + 0xc0);
      auVar26._0_4_ = auVar62._0_4_ + auVar55._0_4_;
      auVar26._4_4_ = auVar62._4_4_ + auVar55._4_4_;
      auVar26._8_4_ = auVar62._8_4_ + auVar55._8_4_;
      auVar26._12_4_ = auVar62._12_4_ + auVar55._12_4_;
      auVar66._0_4_ = auVar54._0_4_ + auVar53._0_4_;
      auVar66._4_4_ = auVar54._4_4_ + auVar53._4_4_;
      auVar66._8_4_ = auVar54._8_4_ + auVar53._8_4_;
      auVar66._12_4_ = auVar54._12_4_ + auVar53._12_4_;
    }
    uVar16 = 0;
    *(ulong *)(param_6 + 6) = CONCAT44(fVar40,fVar39);
    *(ulong *)(param_6 + 4) = CONCAT44(fVar41,fVar38);
    *(long *)(param_6 + 10) = auVar60._8_8_;
    *(long *)(param_6 + 8) = auVar60._0_8_;
    *(long *)(param_6 + 0xe) = auVar26._8_8_;
    *(long *)(param_6 + 0xc) = auVar26._0_8_;
    *(long *)(param_6 + 0x12) = auVar66._8_8_;
    *(long *)(param_6 + 0x10) = auVar66._0_8_;
    *param_6 = fVar43 * 0.5 * param_2;
    param_6[1] = fVar18;
  }
  return uVar16;
}


