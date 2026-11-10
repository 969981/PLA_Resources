/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0301a9bc; name: FUN_0301a9bc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0301a9bc(long param_1,undefined1 (*param_2) [16],long param_3,long param_4,float *param_5,
                 int param_6,int param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar4;
  undefined1 auVar3 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar11;
  float fVar12;
  float fVar15;
  undefined1 auVar8 [12];
  undefined1 auVar9 [16];
  float fVar13;
  float fVar14;
  float fVar16;
  undefined1 auVar10 [16];
  uint uVar17;
  undefined1 auVar18 [12];
  float fVar27;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar19 [12];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uVar28;
  float fVar33;
  undefined1 auVar29 [12];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  int iVar34;
  float fVar35;
  int iVar40;
  float fVar42;
  int iVar43;
  undefined1 auVar36 [12];
  float fVar41;
  undefined1 auVar37 [12];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  int iVar44;
  int iVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  int iVar55;
  int iVar56;
  float fVar57;
  float fVar58;
  int iVar59;
  int iVar60;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  int iVar61;
  int iVar66;
  float fVar67;
  int iVar68;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar71;
  undefined8 uVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  undefined8 uVar77;
  float fVar78;
  undefined8 uVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined8 local_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  fVar5 = (float)*(undefined8 *)(param_4 + 0x58) * 0.5;
  fVar11 = (float)((ulong)*(undefined8 *)(param_4 + 0x58) >> 0x20) * 0.5;
  uVar72 = NEON_fmax(CONCAT44(*(float *)(param_1 + 0x3c) - fVar11,*(float *)(param_1 + 0x3c) - fVar5
                             ),CONCAT44(fVar11,fVar5),4);
  if (param_7 == 0) {
    auVar22 = *(undefined1 (*) [16])(param_1 + 0x60);
    auVar2._0_8_ = *(undefined8 *)(param_1 + 0x70);
    auVar2._8_4_ = auVar22._12_4_;
    auVar2._12_4_ = 0;
    fVar5 = 0.0;
    uStack_c8 = (ulong)auVar22._12_4_;
    uStack_b8 = auVar22._8_8_;
    uStack_c0 = auVar22._0_8_;
    uVar79 = 0;
    uVar28 = uVar72;
    local_d0 = auVar2._0_8_;
  }
  else {
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(*(long *)(param_1 + 0x78) + 0x18) * 0x200 + 0x18))
              (*(long *)(param_1 + 0x78),param_1,&local_d0);
    fVar5 = *(float *)(param_4 + 0x68);
    auVar2._8_8_ = uStack_c8;
    auVar2._0_8_ = local_d0;
    auVar22._8_8_ = uStack_b8;
    auVar22._0_8_ = uStack_c0;
    uVar28 = 0;
    uVar79 = uVar72;
  }
  fVar11 = *(float *)param_2[7];
  fVar33 = *(float *)(param_2[7] + 4);
  fVar14 = *(float *)(param_2[7] + 8);
  iVar44 = -(uint)(fVar11 == 0.0);
  iVar55 = -(uint)(fVar33 == 0.0);
  iVar59 = -(uint)(fVar14 == 0.0);
  fVar81 = (float)*(undefined8 *)param_2[6];
  iVar34 = -(uint)(fVar81 == 0.0);
  fVar83 = (float)((ulong)*(undefined8 *)param_2[6] >> 0x20);
  iVar40 = -(uint)(fVar83 == 0.0);
  fVar84 = (float)*(undefined8 *)(param_2[6] + 8);
  iVar43 = -(uint)(fVar84 == 0.0);
  uVar17 = CONCAT13((byte)((uint)iVar44 >> 0x18) & (byte)((uint)iVar34 >> 0x18),
                    CONCAT12((byte)((uint)iVar44 >> 0x10) & (byte)((uint)iVar34 >> 0x10),
                             CONCAT11((byte)((uint)iVar44 >> 8) & (byte)((uint)iVar34 >> 8),
                                      (byte)iVar44 & (byte)iVar34)));
  auVar36._0_8_ =
       CONCAT17((byte)((uint)iVar55 >> 0x18) & (byte)((uint)iVar40 >> 0x18),
                CONCAT16((byte)((uint)iVar55 >> 0x10) & (byte)((uint)iVar40 >> 0x10),
                         CONCAT15((byte)((uint)iVar55 >> 8) & (byte)((uint)iVar40 >> 8),
                                  CONCAT14((byte)iVar55 & (byte)iVar40,uVar17))));
  auVar36[8] = (byte)iVar59 & (byte)iVar43;
  auVar36[9] = (byte)((uint)iVar59 >> 8) & (byte)((uint)iVar43 >> 8);
  auVar36[10] = (byte)((uint)iVar59 >> 0x10) & (byte)((uint)iVar43 >> 0x10);
  auVar36[0xb] = (byte)((uint)iVar59 >> 0x18) & (byte)((uint)iVar43 >> 0x18);
  fVar42 = (float)uVar79;
  fVar27 = (float)((ulong)uVar79 >> 0x20);
  fVar73 = (float)((ulong)uVar28 >> 0x20);
  fVar6 = auVar22._0_4_;
  fVar4 = auVar2._0_4_;
  fVar12 = auVar22._4_4_;
  fVar15 = auVar22._8_4_;
  fVar7 = auVar2._4_4_;
  fVar13 = auVar2._8_4_;
  fVar16 = auVar2._12_4_;
  if ((uVar17 & (uint)((ulong)auVar36._0_8_ >> 0x20) & auVar36._8_4_) == 0) {
    fVar35 = fVar14 * fVar14 + fVar11 * fVar11 + fVar33 * fVar33;
    fVar41 = fVar14 * fVar14 + fVar11 * fVar11 + fVar33 * fVar33;
    fVar46 = fVar84 * fVar84 + fVar81 * fVar81 + fVar83 * fVar83;
    fVar57 = fVar84 * fVar84 + fVar81 * fVar81 + fVar83 * fVar83;
    uVar72 = NEON_frsqrte(CONCAT44(fVar57,fVar46),4);
    fVar67 = (float)uVar72;
    fVar47 = (float)((ulong)uVar72 >> 0x20);
    uVar72 = NEON_frsqrts(CONCAT44(fVar57,fVar46),CONCAT44(fVar47 * fVar47,fVar67 * fVar67),4);
    iVar34 = -(uint)(fVar46 <= 0.0);
    iVar40 = -(uint)(fVar57 <= 0.0);
    fVar46 = fVar46 * fVar67 * (float)uVar72 * 1.0001;
    fVar57 = fVar57 * fVar47 * (float)((ulong)uVar72 >> 0x20) * 1.0001;
    fVar46 = (float)CONCAT13((byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                             CONCAT12((byte)((uint)fVar46 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10),
                                      CONCAT11((byte)((uint)fVar46 >> 8) &
                                               ~(byte)((uint)iVar34 >> 8),
                                               SUB41(fVar46,0) & ~(byte)iVar34)));
    if (fVar35 <= 0.0) {
      uVar72 = *(undefined8 *)(param_4 + 0x30);
    }
    else {
      uVar72 = NEON_frsqrte(CONCAT44(fVar41,fVar35),4);
      fVar47 = (float)uVar72;
      fVar58 = (float)((ulong)uVar72 >> 0x20);
      uVar72 = NEON_frsqrts(CONCAT44(fVar41,fVar35),CONCAT44(fVar58 * fVar58,fVar47 * fVar47),4);
      fVar67 = (float)((uint)*(ushort *)(param_1 + 0x94) << 0x10);
      iVar34 = -(uint)(fVar35 <= 0.0);
      iVar43 = -(uint)(fVar41 <= 0.0);
      fVar47 = fVar35 * fVar47 * (float)uVar72 * 1.0001;
      fVar58 = fVar41 * fVar58 * (float)((ulong)uVar72 >> 0x20) * 1.0001;
      fVar47 = (float)CONCAT13((byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                               CONCAT12((byte)((uint)fVar47 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar47 >> 8) &
                                                  ~(byte)((uint)iVar34 >> 8),
                                                  SUB41(fVar47,0) & ~(byte)iVar34)));
      fVar41 = *(float *)(*(long *)(param_1 + 0x78) + 0x20);
      uVar77 = NEON_fmax(CONCAT44(fVar67 - fVar41,
                                  (float)((int)CONCAT42(fVar67,*(ushort *)(param_1 + 0x94)) << 0x10)
                                  - fVar41),0,4);
      uVar72 = *(undefined8 *)(param_4 + 0x30);
      uVar79 = NEON_fmov(0x3f800000,4);
      uVar79 = NEON_fmin(CONCAT44((float)(CONCAT17((byte)((uint)fVar58 >> 0x18) &
                                                   ~(byte)((uint)iVar43 >> 0x18),
                                                   CONCAT16((byte)((uint)fVar58 >> 0x10) &
                                                            ~(byte)((uint)iVar43 >> 0x10),
                                                            CONCAT15((byte)((uint)fVar58 >> 8) &
                                                                     ~(byte)((uint)iVar43 >> 8),
                                                                     CONCAT14(SUB41(fVar58,0) &
                                                                              ~(byte)iVar43,fVar47))
                                                           )) >> 0x20) *
                                  (float)((ulong)uVar72 >> 0x20),fVar47 * (float)uVar72),uVar79,4);
      uVar79 = CONCAT44(fVar27 + (float)((ulong)uVar77 >> 0x20) * (float)((ulong)uVar79 >> 0x20),
                        fVar42 + (float)uVar77 * (float)uVar79);
    }
    fVar49 = (float)uVar72;
    fVar74 = fVar46 * fVar49;
    fVar48 = (float)((ulong)uVar72 >> 0x20);
    fVar75 = (float)(CONCAT17((byte)((uint)fVar57 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                              CONCAT16((byte)((uint)fVar57 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10),
                                       CONCAT15((byte)((uint)fVar57 >> 8) &
                                                ~(byte)((uint)iVar40 >> 8),
                                                CONCAT14(SUB41(fVar57,0) & ~(byte)iVar40,fVar46))))
                    >> 0x20) * fVar48;
    fVar41 = (float)uVar79;
    fVar71 = (float)uVar28 + fVar41;
    fVar46 = (float)((ulong)uVar79 >> 0x20);
    fVar73 = fVar73 + fVar46;
    fVar57 = fVar81 * fVar49;
    fVar67 = fVar83 * fVar48;
    fVar47 = fVar84 * fVar49;
    fVar58 = (float)((ulong)*(undefined8 *)(param_2[6] + 8) >> 0x20) * fVar48;
    if ((*(uint *)(param_3 + 0x20) & 0x380) == 0x80) {
      fVar11 = fVar47 * fVar47 + fVar57 * fVar57 + fVar67 * fVar67;
      fVar33 = fVar47 * fVar47 + fVar57 * fVar57 + fVar67 * fVar67;
      uVar72 = CONCAT44(fVar33,fVar11);
      uVar28 = NEON_frsqrte(uVar72,4);
      fVar14 = (float)uVar28;
      fVar42 = (float)((ulong)uVar28 >> 0x20);
      uVar28 = NEON_frsqrts(uVar72,CONCAT44(fVar42 * fVar42,fVar14 * fVar14),4);
      fVar14 = fVar14 * (float)uVar28;
      fVar42 = fVar42 * (float)((ulong)uVar28 >> 0x20);
      uVar72 = NEON_frsqrts(uVar72,CONCAT44(fVar42 * fVar42,fVar14 * fVar14),4);
      iVar34 = -(uint)(fVar11 <= 0.0);
      iVar40 = -(uint)(fVar33 <= 0.0);
      fVar11 = fVar11 * (float)uVar72 * fVar14 * 0.5;
      fVar33 = fVar33 * (float)((ulong)uVar72 >> 0x20) * fVar42 * 0.5;
      fVar11 = (float)CONCAT13((byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                               CONCAT12((byte)((uint)fVar11 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar11 >> 8) &
                                                  ~(byte)((uint)iVar34 >> 8),
                                                  SUB41(fVar11,0) & ~(byte)iVar34)));
      fVar33 = (float)(CONCAT17((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                                CONCAT16((byte)((uint)fVar33 >> 0x10) &
                                         ~(byte)((uint)iVar40 >> 0x10),
                                         CONCAT15((byte)((uint)fVar33 >> 8) &
                                                  ~(byte)((uint)iVar40 >> 8),
                                                  CONCAT14(SUB41(fVar33,0) & ~(byte)iVar40,fVar11)))
                               ) >> 0x20);
      auVar8._0_4_ = fVar6 + fVar41 + fVar57 * 0.5 + fVar11;
      auVar8._4_4_ = fVar12 + fVar46 + fVar67 * 0.5 + fVar33;
      auVar8._8_4_ = fVar15 + fVar41 + fVar47 * 0.5 + fVar11;
      auVar62._0_4_ = fVar4 + ((fVar57 * 0.5 - fVar11) - fVar41);
      auVar62._4_4_ = fVar7 + ((fVar67 * 0.5 - fVar33) - fVar46);
      auVar62._8_4_ = fVar13 + ((fVar47 * 0.5 - fVar11) - fVar41);
      auVar62._12_4_ = fVar16 + ((fVar58 * 0.5 - fVar33) - fVar46);
    }
    else if (((*(uint *)(param_3 + 0x20) >> 0x11 & 1) == 0) ||
            (fVar76 = (float)*(undefined8 *)(param_4 + 0x18),
            fVar35 <= fVar76 * fVar76 * 0.010966227)) {
      auVar69._0_4_ = fVar4 + fVar57;
      auVar69._4_4_ = fVar7 + fVar67;
      auVar69._8_4_ = fVar13 + fVar47;
      auVar69._12_4_ = fVar16 + fVar58;
      auVar52._0_4_ = fVar6 + fVar57;
      auVar52._4_4_ = fVar12 + fVar67;
      auVar52._8_4_ = fVar15 + fVar47;
      auVar52._12_4_ = auVar22._12_4_ + fVar58;
      auVar2 = NEON_fmin(auVar69,auVar2,4);
      auVar22 = NEON_fmax(auVar52,auVar22,4);
      auVar62._0_4_ = auVar2._0_4_ - fVar41;
      auVar62._4_4_ = auVar2._4_4_ - fVar46;
      auVar62._8_4_ = auVar2._8_4_ - fVar41;
      auVar62._12_4_ = auVar2._12_4_ - fVar46;
      auVar8._0_4_ = fVar41 + auVar22._0_4_;
      auVar8._4_4_ = fVar46 + auVar22._4_4_;
      auVar8._8_4_ = fVar41 + auVar22._8_4_;
    }
    else {
      auVar23._0_4_ = fVar11 * fVar49 * 0.5;
      auVar23._4_4_ = fVar33 * fVar48 * 0.5;
      auVar23._8_4_ = fVar14 * fVar49 * 0.5;
      auVar23._12_4_ = *(float *)(param_2[7] + 0xc) * fVar48 * 0.5;
      auVar69 = NEON_ext(auVar23,auVar23,4,1);
      fVar11 = auVar23._8_4_ * auVar23._8_4_ +
               auVar23._0_4_ * auVar23._0_4_ + auVar23._4_4_ * auVar23._4_4_;
      fVar14 = auVar23._8_4_ * auVar23._8_4_ +
               auVar23._0_4_ * auVar23._0_4_ + auVar23._4_4_ * auVar23._4_4_;
      auVar2 = *param_2;
      auVar62 = NEON_ext(auVar2,auVar2,8,1);
      uVar72 = NEON_ext(auVar2._0_8_,auVar62._0_8_,4,1);
      fVar35 = auVar2._0_4_;
      fVar41 = auVar2._4_4_;
      fVar46 = auVar2._8_4_;
      fVar49 = auVar2._12_4_;
      auVar10._0_4_ = auVar69._0_4_ * fVar35 - auVar23._0_4_ * (float)uVar72;
      auVar10._4_4_ = auVar69._4_4_ * fVar41 - auVar23._4_4_ * (float)((ulong)uVar72 >> 0x20);
      auVar10._8_4_ = auVar23._0_4_ * fVar46 - auVar23._8_4_ * fVar35;
      auVar10._12_4_ = auVar23._4_4_ * fVar49 - auVar23._12_4_ * fVar41;
      auVar62 = NEON_ext(auVar10,auVar10,4,1);
      auVar24._0_4_ = auVar23._0_4_ * fVar35;
      auVar24._4_4_ = auVar23._4_4_ * fVar41;
      auVar24._8_4_ = auVar23._8_4_ * fVar46;
      auVar24._12_4_ = auVar23._12_4_ * fVar49;
      uVar72 = NEON_fmov(0x3f800000,4);
      fVar33 = (float)uVar72;
      fVar11 = fVar11 * (fVar11 * (fVar11 * -0.0029562549 + -0.02144013) + -0.33352822) + fVar33;
      auVar2 = NEON_ext(auVar24,auVar24,8,1);
      fVar48 = auVar23._0_4_ * fVar49 + auVar62._0_4_ + fVar35 * fVar11;
      fVar41 = auVar23._4_4_ * fVar49 + auVar62._4_4_ +
               fVar41 * (fVar14 * (fVar14 * (fVar14 * -0.0029562549 + -0.02144013) + -0.33352822) +
                        (float)((ulong)uVar72 >> 0x20));
      fVar46 = auVar23._8_4_ * fVar49 + auVar10._0_4_ + fVar46 * fVar11;
      fVar14 = fVar11 * fVar49 - (auVar24._0_4_ + auVar24._4_4_ + auVar2._0_4_);
      auVar25._0_4_ = fVar48 * fVar48;
      auVar25._4_4_ = fVar41 * fVar41;
      auVar25._8_4_ = fVar46 * fVar46;
      auVar25._12_4_ = fVar14 * fVar14;
      auVar2 = NEON_ext(auVar25,auVar25,8,1);
      fVar11 = auVar2._0_4_ + auVar2._4_4_;
      uVar72 = CONCAT44(auVar25._0_4_ + auVar25._4_4_ + fVar11,
                        auVar25._0_4_ + auVar25._4_4_ + fVar11);
      uVar28 = NEON_frsqrte(uVar72,4);
      fVar11 = (float)uVar28;
      fVar35 = (float)((ulong)uVar28 >> 0x20);
      uVar28 = NEON_frsqrts(uVar72,CONCAT44(fVar35 * fVar35,fVar11 * fVar11),4);
      fVar11 = fVar11 * (float)uVar28;
      fVar35 = fVar35 * (float)((ulong)uVar28 >> 0x20);
      uVar72 = NEON_frsqrts(uVar72,CONCAT44(fVar35 * fVar35,fVar11 * fVar11),4);
      fVar11 = (float)uVar72 * fVar11;
      fVar35 = (float)((ulong)uVar72 >> 0x20) * fVar35;
      auVar31._0_4_ = -*(float *)(param_1 + 0xa0);
      auVar31._4_4_ = -*(float *)(param_1 + 0xa4);
      auVar31._8_4_ = -*(float *)(param_1 + 0xa8);
      auVar31._12_4_ = *(undefined4 *)(param_1 + 0xac);
      auVar38._8_8_ = _UNK_038890f8;
      auVar38._0_8_ = _DAT_038890f0;
      auVar26._0_4_ = fVar11 * fVar48;
      auVar26._4_4_ = fVar35 * fVar41;
      auVar26._8_4_ = fVar11 * fVar46;
      auVar26._12_4_ = fVar35 * fVar14;
      auVar50._8_8_ = _UNK_03888e28;
      auVar50._0_8_ = _DAT_03888e20;
      auVar69 = a64_TBL(ZEXT816(0),auVar26,auVar38);
      auVar2 = a64_TBL(ZEXT816(0),auVar26,auVar50);
      auVar51._8_8_ = _UNK_03888d78;
      auVar51._0_8_ = _DAT_03888d70;
      auVar63._8_8_ = _UNK_03889108;
      auVar63._0_8_ = _DAT_03889100;
      auVar52 = a64_TBL(ZEXT816(0),auVar31,auVar51);
      auVar62 = a64_TBL(ZEXT816(0),auVar31,auVar63);
      auVar64._0_4_ = auVar2._0_4_ * auVar62._0_4_ - auVar69._0_4_ * auVar52._0_4_;
      auVar64._4_4_ = auVar2._4_4_ * auVar62._4_4_ - auVar69._4_4_ * auVar52._4_4_;
      auVar64._8_4_ = auVar2._8_4_ * auVar62._8_4_ - auVar69._8_4_ * auVar52._8_4_;
      auVar64._12_4_ = auVar2._12_4_ * auVar62._12_4_ - auVar69._12_4_ * auVar52._12_4_;
      auVar70._8_8_ = _UNK_038895d8;
      auVar70._0_8_ = _DAT_038895d0;
      auVar65 = a64_TBL(ZEXT816(0),auVar64,auVar70);
      fVar11 = auVar65._12_4_ - (auVar2._12_4_ * auVar52._12_4_ + auVar69._12_4_ * auVar62._12_4_);
      fVar41 = -(auVar65._0_4_ - (auVar2._0_4_ * auVar52._0_4_ + auVar69._0_4_ * auVar62._0_4_));
      fVar46 = -(auVar65._4_4_ - (auVar2._4_4_ * auVar52._4_4_ + auVar69._4_4_ * auVar62._4_4_));
      auVar39._0_8_ = CONCAT44(fVar46,fVar41);
      auVar39._8_4_ =
           -(auVar65._8_4_ - (auVar2._8_4_ * auVar52._8_4_ + auVar69._8_4_ * auVar62._8_4_));
      auVar39._12_4_ = -fVar11;
      auVar53._8_8_ = auVar39._8_8_;
      auVar53._0_8_ = auVar39._0_8_;
      auVar54._0_12_ = auVar53._0_12_;
      auVar54._12_4_ = fVar11;
      auVar32._0_4_ = fVar41 + fVar41;
      auVar32._4_4_ = fVar46 + fVar46;
      auVar32._8_4_ = auVar39._8_4_ + auVar39._8_4_;
      auVar32._12_4_ = fVar11 + fVar11;
      auVar62 = NEON_ext(auVar54,auVar54,8,1);
      auVar2 = NEON_ext(auVar32,auVar32,8,1);
      fVar35 = auVar62._0_4_ * auVar2._0_4_;
      fVar80 = auVar32._4_4_ * fVar41 + auVar32._8_4_ * fVar11;
      fVar76 = auVar32._4_4_ * fVar41 - auVar32._8_4_ * fVar11;
      fVar78 = auVar32._8_4_ * fVar46 + auVar32._0_4_ * fVar11;
      fVar14 = auVar32._8_4_ * fVar46 - auVar32._0_4_ * fVar11;
      fVar82 = auVar32._8_4_ * fVar41 - auVar32._4_4_ * fVar11;
      fVar48 = *(float *)(param_1 + 0x2c);
      fVar49 = fVar33 - (auVar32._4_4_ * fVar46 + fVar35);
      fVar35 = fVar33 - (auVar32._0_4_ * fVar41 + fVar35);
      fVar33 = fVar33 - (auVar32._0_4_ * fVar41 + auVar32._4_4_ * fVar46);
      uStack_a0 = CONCAT44(fVar35,fVar76);
      fVar46 = auVar32._8_4_ * fVar41 + auVar32._4_4_ * fVar11;
      local_b0 = CONCAT44(fVar80,fVar49);
      fVar41 = *(float *)(param_1 + 0x1c);
      local_90 = CONCAT44(fVar14,fVar46);
      fVar11 = *(float *)(param_1 + 0xc);
      uStack_a8 = (ulong)(uint)fVar82;
      uStack_98 = (ulong)(uint)fVar78;
      auVar3._0_8_ = CONCAT44((fVar67 + (float)*(double *)(param_2[1] + 8)) -
                              (fVar14 * fVar48 + fVar80 * fVar11 + fVar35 * fVar41),
                              (fVar57 + (float)*(double *)param_2[1]) -
                              (fVar46 * fVar48 + fVar49 * fVar11 + fVar76 * fVar41));
      auVar3._8_4_ = (fVar47 + (float)*(double *)param_2[2]) -
                     (fVar33 * fVar48 + fVar82 * fVar11 + fVar78 * fVar41);
      auVar3._12_4_ = (fVar58 + 0.0) - (fVar48 * 0.0 + fVar11 * 0.0 + fVar41 * 0.0);
      uStack_88 = (ulong)(uint)fVar33;
      uStack_78 = auVar3._8_8_;
      uStack_80 = auVar3._0_8_;
      (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(*(long *)(param_1 + 0x78) + 0x18) * 0x200 + 0x18)
      )(*(long *)(param_1 + 0x78),&local_b0,local_f0);
      auVar65._4_4_ = fVar7 - fVar27;
      auVar65._0_4_ = fVar4 - fVar42;
      auVar65._8_4_ = fVar13 - fVar42;
      auVar65._12_4_ = fVar16 - fVar27;
      auVar1._4_4_ = fVar12 + fVar27;
      auVar1._0_4_ = fVar6 + fVar42;
      auVar1._8_4_ = fVar15 + fVar42;
      auVar1._12_4_ = auVar22._12_4_ + fVar27;
      auVar62 = NEON_fmin(auVar65,local_f0,4);
      auVar22 = NEON_fmax(auVar1,local_e0,4);
      auVar8 = auVar22._0_12_;
    }
  }
  else {
    fVar71 = fVar42 + (float)uVar28;
    fVar73 = fVar27 + fVar73;
    auVar8._0_4_ = fVar6 + fVar42;
    auVar8._4_4_ = fVar12 + fVar27;
    auVar8._8_4_ = fVar15 + fVar42;
    fVar74 = 0.0;
    fVar75 = 0.0;
    auVar62._0_4_ = fVar4 - fVar42;
    auVar62._4_4_ = fVar7 - fVar27;
    auVar62._8_4_ = fVar13 - fVar42;
    auVar62._12_4_ = fVar16 - fVar27;
  }
  fVar11 = (float)*(undefined8 *)(param_4 + 0x48);
  fVar33 = (float)((ulong)*(undefined8 *)(param_4 + 0x48) >> 0x20);
  auVar20._0_8_ = CONCAT44((int)((fVar75 + fVar73) * fVar33),(int)((fVar74 + fVar71) * fVar11));
  auVar30._0_8_ = CONCAT44((int)(fVar73 * fVar33),(int)(fVar71 * fVar11));
  auVar20._8_8_ = auVar20._0_8_;
  uVar72 = NEON_sqxtun(auVar20._0_8_,auVar20,4);
  auVar30._8_8_ = auVar30._0_8_;
  uVar28 = NEON_sqxtun(auVar30._0_8_,auVar30,4);
  *(short *)(param_1 + 0x90) = (short)uVar72;
  *(short *)(param_1 + 0x92) = (short)uVar28;
  uVar72 = *(undefined8 *)(param_4 + 0x10);
  fVar11 = (float)uVar72;
  *(short *)param_2[5] = (short)((uint)(fVar81 * fVar11) >> 0x10);
  *(short *)(param_2[5] + 2) = (short)((uint)(fVar83 * (float)((ulong)uVar72 >> 0x20)) >> 0x10);
  *(short *)(param_2[5] + 4) = (short)((uint)(fVar84 * fVar11) >> 0x10);
  uVar28 = _UNK_0388a1f8;
  uVar72 = _DAT_0388a1f0;
  if (0.0 < fVar5) {
    iVar61 = -(uint)(fVar81 < 0.0);
    iVar66 = -(uint)(fVar83 < 0.0);
    iVar68 = -(uint)(fVar84 < 0.0);
    fVar11 = fVar5 * (float)*(undefined8 *)(param_4 + 0x18);
    fVar33 = fVar5 * (float)((ulong)*(undefined8 *)(param_4 + 0x18) >> 0x20);
    iVar44 = -(uint)(ABS((float)*(undefined8 *)(param_2[3] + 8)) < fVar11);
    iVar55 = -(uint)(ABS((float)((ulong)*(undefined8 *)(param_2[3] + 8) >> 0x20)) < fVar33);
    iVar59 = -(uint)(ABS(*(float *)(param_2[3] + 4)) < fVar11);
    iVar34 = -(uint)(ABS(fVar81) < fVar11);
    iVar40 = -(uint)(ABS(fVar83) < fVar33);
    iVar43 = -(uint)(ABS(fVar84) < fVar11);
    iVar45 = -(uint)(0.0 < fVar81);
    iVar56 = -(uint)(0.0 < fVar83);
    iVar60 = -(uint)(0.0 < fVar84);
    uVar17 = CONCAT13((byte)((uint)iVar34 >> 0x18) &
                      ((byte)((uint)iVar61 >> 0x18) | (byte)((uint)iVar45 >> 0x18)) &
                      (byte)((uint)iVar44 >> 0x18),
                      CONCAT12((byte)((uint)iVar34 >> 0x10) &
                               ((byte)((uint)iVar61 >> 0x10) | (byte)((uint)iVar45 >> 0x10)) &
                               (byte)((uint)iVar44 >> 0x10),
                               CONCAT11((byte)((uint)iVar34 >> 8) &
                                        ((byte)((uint)iVar61 >> 8) | (byte)((uint)iVar45 >> 8)) &
                                        (byte)((uint)iVar44 >> 8),
                                        (byte)iVar34 & ((byte)iVar61 | (byte)iVar45) & (byte)iVar44)
                              ));
    auVar29._0_8_ =
         CONCAT17((byte)((uint)iVar40 >> 0x18) &
                  ((byte)((uint)iVar66 >> 0x18) | (byte)((uint)iVar56 >> 0x18)) &
                  (byte)((uint)iVar55 >> 0x18),
                  CONCAT16((byte)((uint)iVar40 >> 0x10) &
                           ((byte)((uint)iVar66 >> 0x10) | (byte)((uint)iVar56 >> 0x10)) &
                           (byte)((uint)iVar55 >> 0x10),
                           CONCAT15((byte)((uint)iVar40 >> 8) &
                                    ((byte)((uint)iVar66 >> 8) | (byte)((uint)iVar56 >> 8)) &
                                    (byte)((uint)iVar55 >> 8),
                                    CONCAT14((byte)iVar40 & ((byte)iVar66 | (byte)iVar56) &
                                             (byte)iVar55,uVar17))));
    auVar29[8] = (byte)iVar43 & ((byte)iVar68 | (byte)iVar60) & (byte)iVar59;
    auVar29[9] = (byte)((uint)iVar43 >> 8) & ((byte)((uint)iVar68 >> 8) | (byte)((uint)iVar60 >> 8))
                 & (byte)((uint)iVar59 >> 8);
    auVar29[10] = (byte)((uint)iVar43 >> 0x10) &
                  ((byte)((uint)iVar68 >> 0x10) | (byte)((uint)iVar60 >> 0x10)) &
                  (byte)((uint)iVar59 >> 0x10);
    auVar29[0xb] = (byte)((uint)iVar43 >> 0x18) &
                   ((byte)((uint)iVar68 >> 0x18) | (byte)((uint)iVar60 >> 0x18)) &
                   (byte)((uint)iVar59 >> 0x18);
    if ((uVar17 & (uint)((ulong)auVar29._0_8_ >> 0x20) & auVar29._8_4_) != 0) {
      fVar7 = auVar8._0_4_;
      iVar44 = -(uint)(fVar7 <= *(float *)(param_1 + 0x60));
      fVar13 = auVar8._4_4_;
      iVar55 = -(uint)(fVar13 <= *(float *)(param_1 + 100));
      fVar16 = auVar8._8_4_;
      iVar59 = -(uint)(fVar16 <= *(float *)(param_1 + 0x68));
      fVar11 = auVar62._0_4_;
      iVar34 = -(uint)((float)*(undefined8 *)(param_1 + 0x70) <= fVar11);
      fVar33 = auVar62._4_4_;
      iVar40 = -(uint)((float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20) <= fVar33);
      fVar14 = auVar62._8_4_;
      iVar43 = -(uint)(*(float *)(param_1 + 0x6c) <= fVar14);
      fVar4 = auVar62._12_4_;
      uVar17 = CONCAT13((byte)((uint)iVar34 >> 0x18) & (byte)((uint)iVar44 >> 0x18),
                        CONCAT12((byte)((uint)iVar34 >> 0x10) & (byte)((uint)iVar44 >> 0x10),
                                 CONCAT11((byte)((uint)iVar34 >> 8) & (byte)((uint)iVar44 >> 8),
                                          (byte)iVar34 & (byte)iVar44)));
      auVar18._0_8_ =
           CONCAT17((byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar55 >> 0x18),
                    CONCAT16((byte)((uint)iVar40 >> 0x10) & (byte)((uint)iVar55 >> 0x10),
                             CONCAT15((byte)((uint)iVar40 >> 8) & (byte)((uint)iVar55 >> 8),
                                      CONCAT14((byte)iVar40 & (byte)iVar55,uVar17))));
      auVar18[8] = (byte)iVar43 & (byte)iVar59;
      auVar18[9] = (byte)((uint)iVar43 >> 8) & (byte)((uint)iVar59 >> 8);
      auVar18[10] = (byte)((uint)iVar43 >> 0x10) & (byte)((uint)iVar59 >> 0x10);
      auVar18[0xb] = (byte)((uint)iVar43 >> 0x18) & (byte)((uint)iVar59 >> 0x18);
      if ((uVar17 & (uint)((ulong)auVar18._0_8_ >> 0x20) & auVar18._8_4_) == 0) {
        fVar6 = *param_5;
        fVar12 = param_5[1];
        fVar15 = param_5[2];
        fVar42 = param_5[4];
        fVar27 = param_5[5];
        fVar73 = param_5[6];
      }
      else {
        fVar6 = *param_5;
        fVar12 = param_5[1];
        fVar15 = param_5[2];
        fVar42 = param_5[4];
        fVar27 = param_5[5];
        fVar73 = param_5[6];
        if (param_6 == 1) {
          iVar34 = -(uint)(fVar6 <= fVar11);
          iVar40 = -(uint)(fVar12 <= fVar33);
          iVar43 = -(uint)(fVar15 <= fVar14);
          iVar44 = -(uint)(fVar7 <= fVar42);
          iVar55 = -(uint)(fVar13 <= fVar27);
          iVar59 = -(uint)(fVar16 <= fVar73);
          uVar17 = CONCAT13((byte)((uint)iVar44 >> 0x18) & (byte)((uint)iVar34 >> 0x18),
                            CONCAT12((byte)((uint)iVar44 >> 0x10) & (byte)((uint)iVar34 >> 0x10),
                                     CONCAT11((byte)((uint)iVar44 >> 8) & (byte)((uint)iVar34 >> 8),
                                              (byte)iVar44 & (byte)iVar34)));
          auVar37._0_8_ =
               CONCAT17((byte)((uint)iVar55 >> 0x18) & (byte)((uint)iVar40 >> 0x18),
                        CONCAT16((byte)((uint)iVar55 >> 0x10) & (byte)((uint)iVar40 >> 0x10),
                                 CONCAT15((byte)((uint)iVar55 >> 8) & (byte)((uint)iVar40 >> 8),
                                          CONCAT14((byte)iVar55 & (byte)iVar40,uVar17))));
          auVar37[8] = (byte)iVar59 & (byte)iVar43;
          auVar37[9] = (byte)((uint)iVar59 >> 8) & (byte)((uint)iVar43 >> 8);
          auVar37[10] = (byte)((uint)iVar59 >> 0x10) & (byte)((uint)iVar43 >> 0x10);
          auVar37[0xb] = (byte)((uint)iVar59 >> 0x18) & (byte)((uint)iVar43 >> 0x18);
          if ((uVar17 & (uint)((ulong)auVar37._0_8_ >> 0x20) & auVar37._8_4_) != 0) {
            return;
          }
        }
      }
      auVar8._0_4_ = fVar5 + fVar7;
      auVar8._4_4_ = fVar5 + fVar13;
      auVar8._8_4_ = fVar5 + fVar16;
      auVar62._0_4_ = fVar11 - fVar5;
      auVar62._4_4_ = fVar33 - fVar5;
      auVar62._8_4_ = fVar14 - fVar5;
      auVar62._12_4_ = fVar4 - fVar5;
      iVar44 = -(uint)(auVar62._0_4_ <= fVar42);
      iVar55 = -(uint)(auVar62._4_4_ <= fVar27);
      iVar59 = -(uint)(auVar62._8_4_ <= fVar73);
      iVar34 = -(uint)(fVar6 <= auVar8._0_4_);
      iVar40 = -(uint)(fVar12 <= auVar8._4_4_);
      iVar43 = -(uint)(fVar15 <= auVar8._8_4_);
      uVar17 = CONCAT13((byte)((uint)iVar44 >> 0x18) & (byte)((uint)iVar34 >> 0x18),
                        CONCAT12((byte)((uint)iVar44 >> 0x10) & (byte)((uint)iVar34 >> 0x10),
                                 CONCAT11((byte)((uint)iVar44 >> 8) & (byte)((uint)iVar34 >> 8),
                                          (byte)iVar44 & (byte)iVar34)));
      auVar19._0_8_ =
           CONCAT17((byte)((uint)iVar55 >> 0x18) & (byte)((uint)iVar40 >> 0x18),
                    CONCAT16((byte)((uint)iVar55 >> 0x10) & (byte)((uint)iVar40 >> 0x10),
                             CONCAT15((byte)((uint)iVar55 >> 8) & (byte)((uint)iVar40 >> 8),
                                      CONCAT14((byte)iVar55 & (byte)iVar40,uVar17))));
      auVar19[8] = (byte)iVar59 & (byte)iVar43;
      auVar19[9] = (byte)((uint)iVar59 >> 8) & (byte)((uint)iVar43 >> 8);
      auVar19[10] = (byte)((uint)iVar59 >> 0x10) & (byte)((uint)iVar43 >> 0x10);
      auVar19[0xb] = (byte)((uint)iVar59 >> 0x18) & (byte)((uint)iVar43 >> 0x18);
      if ((uVar17 & (uint)((ulong)auVar19._0_8_ >> 0x20) & auVar19._8_4_) == 0) goto LAB_0301ab60;
    }
  }
  *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) | 0x10;
LAB_0301ab60:
  auVar21._8_8_ = uVar28;
  auVar21._0_8_ = uVar72;
  auVar22 = a64_TBL(ZEXT816(0),auVar62,auVar21);
  auVar9._12_4_ = auVar22._12_4_;
  auVar9._0_12_ = auVar8;
  *(long *)(param_1 + 0x68) = auVar9._8_8_;
  *(long *)(param_1 + 0x60) = auVar8._0_8_;
  *(long *)(param_1 + 0x70) = auVar62._0_8_;
  return;
}


