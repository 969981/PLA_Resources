/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03018070; name: FUN_03018070
 */


void FUN_03018070(undefined8 *param_1,long param_2,undefined1 (*param_3) [16],float *param_4,
                 undefined8 *param_5,float *param_6,long param_7,undefined8 *param_8,float *param_9,
                 float *param_10,float *param_11)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  undefined1 (*pauVar11) [16];
  undefined1 uVar12;
  undefined1 uVar13;
  byte bVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  byte bVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  byte bVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  undefined8 uVar29;
  float fVar32;
  float fVar33;
  int iVar34;
  undefined1 auVar30 [12];
  int iVar35;
  undefined1 auVar31 [16];
  float fVar36;
  int iVar37;
  float fVar38;
  float fVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  float fVar44;
  int iVar48;
  float fVar50;
  undefined1 auVar45 [16];
  float fVar49;
  float fVar51;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  undefined8 uVar55;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined8 uVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar67;
  float fVar68;
  undefined1 local_f0 [16];
  undefined8 local_e0;
  undefined8 uStack_d8;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  uVar29 = *(undefined8 *)*param_3;
  *(undefined8 *)(param_10 + 2) = *(undefined8 *)(*param_3 + 8);
  *(undefined8 *)param_10 = uVar29;
  uVar29 = *(undefined8 *)param_4;
  *(undefined8 *)(param_11 + 2) = *(undefined8 *)(param_4 + 2);
  *(undefined8 *)param_11 = uVar29;
  if (0.0 < (float)*param_8) {
    auVar65 = *param_3;
    fVar6 = (float)((ulong)*(undefined8 *)param_9 >> 0x20) - auVar65._4_4_;
    fVar8 = (float)((ulong)*(undefined8 *)(param_9 + 2) >> 0x20) - auVar65._12_4_;
    uStack_88 = CONCAT17((char)((uint)fVar8 >> 0x18),
                         CONCAT16((char)((uint)fVar8 >> 0x10),
                                  CONCAT15((char)((uint)fVar8 >> 8),
                                           CONCAT14(SUB41(fVar8,0),
                                                    (float)*(undefined8 *)(param_9 + 2) -
                                                    auVar65._8_4_))));
    local_90 = CONCAT17((char)((uint)fVar6 >> 0x18),
                        CONCAT16((char)((uint)fVar6 >> 0x10),
                                 CONCAT15((char)((uint)fVar6 >> 8),
                                          CONCAT14(SUB41(fVar6,0),
                                                   (float)*(undefined8 *)param_9 - auVar65._0_4_))))
    ;
    FUN_032cc638(&local_90,param_2,&local_90);
    uVar10 = 0;
    pauVar11 = (undefined1 (*) [16])(param_7 + 0x30);
    uVar29 = 0;
    fStack_a8 = 0.0;
    fStack_a4 = 0.0;
    local_b0 = 0.0;
    fStack_ac = 0.0;
    uStack_98 = 0;
    local_a0 = 0;
    fStack_b8 = 0.0;
    fStack_b4 = 0.0;
    local_c0 = 0.0;
    fStack_bc = 0.0;
    do {
      fVar6 = (float)*(undefined8 *)(&DAT_03aa23f0 + uVar10 * 0x10);
      auVar65._0_4_ = fVar6 * (float)local_90;
      fVar8 = (float)((ulong)*(undefined8 *)(&DAT_03aa23f0 + uVar10 * 0x10) >> 0x20);
      auVar65._4_4_ = fVar8 * local_90._4_4_;
      fVar7 = (float)*(undefined8 *)(&UNK_03aa23f8 + uVar10 * 0x10);
      auVar65._8_4_ = fVar7 * (float)uStack_88;
      fVar9 = (float)((ulong)*(undefined8 *)(&UNK_03aa23f8 + uVar10 * 0x10) >> 0x20);
      auVar65._12_4_ = fVar9 * uStack_88._4_4_;
      auVar45 = NEON_ext(auVar65,auVar65,8,1);
      if (auVar65._0_4_ + auVar65._4_4_ + auVar45._0_4_ <= 0.0) {
        fVar36 = (float)uStack_88 * (float)uStack_88 +
                 (float)local_90 * (float)local_90 + local_90._4_4_ * local_90._4_4_;
        fVar38 = (float)uStack_88 * (float)uStack_88 +
                 (float)local_90 * (float)local_90 + local_90._4_4_ * local_90._4_4_;
        uVar64 = CONCAT44(fVar38,fVar36);
        uVar55 = NEON_frsqrte(uVar64,4);
        fVar52 = (float)uVar55;
        fVar59 = (float)((ulong)uVar55 >> 0x20);
        uVar55 = NEON_frsqrts(uVar64,CONCAT44(fVar59 * fVar59,fVar52 * fVar52),4);
        fVar52 = fVar52 * (float)uVar55;
        fVar59 = fVar59 * (float)((ulong)uVar55 >> 0x20);
        uVar64 = NEON_frsqrts(uVar64,CONCAT44(fVar59 * fVar59,fVar52 * fVar52),4);
        iVar43 = -(uint)(fVar36 <= 0.0);
        iVar48 = -(uint)(fVar38 <= 0.0);
        fVar52 = (float)uVar64 * fVar52;
        fVar59 = (float)((ulong)uVar64 >> 0x20) * fVar59;
        bVar14 = (byte)((uint)iVar43 >> 8);
        bVar17 = (byte)((uint)iVar43 >> 0x10);
        bVar20 = (byte)((uint)iVar43 >> 0x18);
        bVar26 = (byte)((uint)iVar48 >> 8);
        bVar27 = (byte)((uint)iVar48 >> 0x10);
        bVar28 = (byte)((uint)iVar48 >> 0x18);
        fVar33 = (float)CONCAT13((byte)((uint)fVar52 >> 0x18) & ~bVar20,
                                 CONCAT12((byte)((uint)fVar52 >> 0x10) & ~bVar17,
                                          CONCAT11((byte)((uint)fVar52 >> 8) & ~bVar14,
                                                   SUB41(fVar52,0) & ~(byte)iVar43)));
        fVar36 = fVar36 * fVar52;
        fVar38 = fVar38 * fVar59;
        fVar32 = (float)CONCAT13((byte)((uint)fVar36 >> 0x18) & ~bVar20,
                                 CONCAT12((byte)((uint)fVar36 >> 0x10) & ~bVar17,
                                          CONCAT11((byte)((uint)fVar36 >> 8) & ~bVar14,
                                                   SUB41(fVar36,0) & ~(byte)iVar43)));
        fVar36 = fVar6 * (float)local_90 * fVar33;
        fVar59 = fVar8 * local_90._4_4_ *
                         (float)(CONCAT17((byte)((uint)fVar59 >> 0x18) & ~bVar28,
                                          CONCAT16((byte)((uint)fVar59 >> 0x10) & ~bVar27,
                                                   CONCAT15((byte)((uint)fVar59 >> 8) & ~bVar26,
                                                            CONCAT14(SUB41(fVar59,0) & ~(byte)iVar48
                                                                     ,fVar33)))) >> 0x20);
        fVar33 = fVar7 * (float)uStack_88 * fVar33;
        fVar52 = fVar32 * (0.0 - (fVar36 + fVar59 + fVar33)) * SUB164(*pauVar11,0xc);
        fVar33 = (float)(CONCAT17((byte)((uint)fVar38 >> 0x18) & ~bVar28,
                                  CONCAT16((byte)((uint)fVar38 >> 0x10) & ~bVar27,
                                           CONCAT15((byte)((uint)fVar38 >> 8) & ~bVar26,
                                                    CONCAT14(SUB41(fVar38,0) & ~(byte)iVar48,fVar32)
                                                   ))) >> 0x20) *
                 (0.0 - (fVar36 + fVar59 + fVar33)) * SUB164(*pauVar11,0xc);
        fVar59 = fVar6 * fVar52;
        fVar32 = fVar8 * fVar33;
        fVar38 = fVar7 * fVar52;
        fVar36 = fVar59 * fVar59 + fVar32 * fVar32 + fVar38 * fVar38;
        fVar39 = fVar59 * fVar59 + fVar32 * fVar32 + fVar38 * fVar38;
        uVar64 = CONCAT44(fVar39,fVar36);
        uVar55 = NEON_frsqrte(uVar64,4);
        fVar44 = (float)uVar55;
        fVar49 = (float)((ulong)uVar55 >> 0x20);
        uVar55 = NEON_frsqrts(uVar64,CONCAT44(fVar49 * fVar49,fVar44 * fVar44),4);
        fVar44 = fVar44 * (float)uVar55;
        fVar49 = fVar49 * (float)((ulong)uVar55 >> 0x20);
        auVar65 = *(undefined1 (*) [16])(param_7 + (uVar10 >> 1 & 0x7f) * 0x10);
        fVar50 = auVar65._12_4_;
        uVar64 = NEON_frsqrts(uVar64,CONCAT44(fVar49 * fVar49,fVar44 * fVar44),4);
        iVar43 = -(uint)(fVar36 <= 0.0);
        iVar48 = -(uint)(fVar39 <= 0.0);
        fVar36 = (float)uVar64 * fVar44 * fVar36;
        fVar39 = (float)((ulong)uVar64 >> 0x20) * fVar49 * fVar39;
        fVar44 = (float)CONCAT13((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18),
                                 CONCAT12((byte)((uint)fVar36 >> 0x10) &
                                          ~(byte)((uint)iVar43 >> 0x10),
                                          CONCAT11((byte)((uint)fVar36 >> 8) &
                                                   ~(byte)((uint)iVar43 >> 8),
                                                   SUB41(fVar36,0) & ~(byte)iVar43)));
        fVar36 = (float)(CONCAT17((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                                  CONCAT16((byte)((uint)fVar39 >> 0x10) &
                                           ~(byte)((uint)iVar48 >> 0x10),
                                           CONCAT15((byte)((uint)fVar39 >> 8) &
                                                    ~(byte)((uint)iVar48 >> 8),
                                                    CONCAT14(SUB41(fVar39,0) & ~(byte)iVar48,fVar44)
                                                   ))) >> 0x20);
        uVar29 = CONCAT44((float)((ulong)uVar29 >> 0x20) + fVar36,(float)uVar29 + fVar44);
        fVar8 = (float)((ulong)local_a0 >> 0x20) + (auVar65._4_4_ + fVar8 * fVar50 + 0.0) * fVar36;
        fVar36 = (float)((ulong)uStack_98 >> 0x20) + (fVar50 + fVar9 * fVar50 + 0.0) * fVar36;
        uStack_98 = CONCAT17((char)((uint)fVar36 >> 0x18),
                             CONCAT16((char)((uint)fVar36 >> 0x10),
                                      CONCAT15((char)((uint)fVar36 >> 8),
                                               CONCAT14(SUB41(fVar36,0),
                                                        (float)uStack_98 +
                                                        (auVar65._8_4_ + fVar7 * fVar50 + 0.0) *
                                                        fVar44))));
        local_a0 = CONCAT17((char)((uint)fVar8 >> 0x18),
                            CONCAT16((char)((uint)fVar8 >> 0x10),
                                     CONCAT15((char)((uint)fVar8 >> 8),
                                              CONCAT14(SUB41(fVar8,0),
                                                       (float)local_a0 +
                                                       (auVar65._0_4_ + fVar6 * fVar50 + 0.0) *
                                                       fVar44))));
        local_b0 = local_b0 - fVar59;
        fStack_ac = fStack_ac - fVar32;
        fStack_a8 = fStack_a8 - fVar38;
        fStack_a4 = fStack_a4 - fVar9 * fVar33;
        fStack_a4 = (float)(CONCAT17((char)((uint)fStack_a4 >> 0x18),
                                     CONCAT16((char)((uint)fStack_a4 >> 0x10),
                                              CONCAT15((char)((uint)fStack_a4 >> 8),
                                                       CONCAT14(SUB41(fStack_a4,0),fStack_a8)))) >>
                           0x20);
        fStack_ac = (float)(CONCAT17((char)((uint)fStack_ac >> 0x18),
                                     CONCAT16((char)((uint)fStack_ac >> 0x10),
                                              CONCAT15((char)((uint)fStack_ac >> 8),
                                                       CONCAT14(SUB41(fStack_ac,0),local_b0)))) >>
                           0x20);
        FUN_032cc5bc(&local_d0,param_2,pauVar11);
        local_c0 = local_c0 + fVar52 * local_d0;
        fStack_bc = fStack_bc + fVar33 * fStack_cc;
        fStack_b8 = fStack_b8 + fVar52 * fStack_c8;
        fStack_b4 = fStack_b4 + fVar33 * fStack_c4;
        fStack_b4 = (float)(CONCAT17((char)((uint)fStack_b4 >> 0x18),
                                     CONCAT16((char)((uint)fStack_b4 >> 0x10),
                                              CONCAT15((char)((uint)fStack_b4 >> 8),
                                                       CONCAT14(SUB41(fStack_b4,0),fStack_b8)))) >>
                           0x20);
        fStack_bc = (float)(CONCAT17((char)((uint)fStack_bc >> 0x18),
                                     CONCAT16((char)((uint)fStack_bc >> 0x10),
                                              CONCAT15((char)((uint)fStack_bc >> 8),
                                                       CONCAT14(SUB41(fStack_bc,0),local_c0)))) >>
                           0x20);
      }
      uVar10 = uVar10 + 1;
      pauVar11 = pauVar11 + 1;
    } while (uVar10 != 6);
    fVar6 = *param_4;
    fVar8 = param_4[1];
    fVar7 = param_4[2];
    fVar9 = param_4[3];
    fVar59 = fVar6 * (float)*(undefined8 *)(param_7 + 0x90);
    fVar33 = fVar8 * (float)((ulong)*(undefined8 *)(param_7 + 0x90) >> 0x20);
    fVar32 = fVar7 * *(float *)(param_7 + 0x98);
    fVar38 = fVar6 * (float)*(undefined8 *)(param_7 + 0x9c);
    fVar39 = fVar8 * (float)((ulong)*(undefined8 *)(param_7 + 0x9c) >> 0x20);
    fVar50 = fVar7 * *(float *)(param_7 + 0xa4);
    fVar36 = fVar59 * fVar59 + fVar33 * fVar33 + fVar32 * fVar32;
    fVar52 = fVar59 * fVar59 + fVar33 * fVar33 + fVar32 * fVar32;
    uVar64 = CONCAT44(fVar52,fVar36);
    uVar55 = NEON_frsqrte(uVar64,4);
    fVar44 = (float)uVar55;
    fVar49 = (float)((ulong)uVar55 >> 0x20);
    uVar55 = NEON_frsqrts(uVar64,CONCAT44(fVar49 * fVar49,fVar44 * fVar44),4);
    fVar44 = fVar44 * (float)uVar55;
    fVar49 = fVar49 * (float)((ulong)uVar55 >> 0x20);
    uVar64 = NEON_frsqrts(uVar64,CONCAT44(fVar49 * fVar49,fVar44 * fVar44),4);
    iVar43 = -(uint)(fVar36 <= 0.0);
    iVar48 = -(uint)(fVar52 <= 0.0);
    fVar36 = (float)uVar64 * fVar44 * fVar36;
    fVar52 = (float)((ulong)uVar64 >> 0x20) * fVar49 * fVar52;
    fVar53 = (float)CONCAT13((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18),
                             CONCAT12((byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10),
                                      CONCAT11((byte)((uint)fVar36 >> 8) &
                                               ~(byte)((uint)iVar43 >> 8),
                                               SUB41(fVar36,0) & ~(byte)iVar43)));
    fVar60 = (float)(CONCAT17((byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                              CONCAT16((byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10),
                                       CONCAT15((byte)((uint)fVar52 >> 8) &
                                                ~(byte)((uint)iVar48 >> 8),
                                                CONCAT14(SUB41(fVar52,0) & ~(byte)iVar48,fVar53))))
                    >> 0x20);
    fVar36 = fVar38 * fVar38 + fVar39 * fVar39 + fVar50 * fVar50;
    fVar52 = fVar38 * fVar38 + fVar39 * fVar39 + fVar50 * fVar50;
    uVar64 = CONCAT44(fVar52,fVar36);
    uVar55 = NEON_frsqrte(uVar64,4);
    fVar44 = (float)uVar55;
    fVar49 = (float)((ulong)uVar55 >> 0x20);
    uVar55 = NEON_frsqrts(uVar64,CONCAT44(fVar49 * fVar49,fVar44 * fVar44),4);
    fVar44 = fVar44 * (float)uVar55;
    fVar49 = fVar49 * (float)((ulong)uVar55 >> 0x20);
    uVar64 = NEON_frsqrts(uVar64,CONCAT44(fVar49 * fVar49,fVar44 * fVar44),4);
    iVar43 = -(uint)(fVar36 <= 0.0);
    iVar48 = -(uint)(fVar52 <= 0.0);
    fVar36 = (float)uVar64 * fVar44 * fVar36;
    fVar52 = (float)((ulong)uVar64 >> 0x20) * fVar49 * fVar52;
    fVar54 = (float)CONCAT13((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18),
                             CONCAT12((byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10),
                                      CONCAT11((byte)((uint)fVar36 >> 8) &
                                               ~(byte)((uint)iVar43 >> 8),
                                               SUB41(fVar36,0) & ~(byte)iVar43)));
    fVar61 = (float)(CONCAT17((byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                              CONCAT16((byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10),
                                       CONCAT15((byte)((uint)fVar52 >> 8) &
                                                ~(byte)((uint)iVar48 >> 8),
                                                CONCAT14(SUB41(fVar52,0) & ~(byte)iVar48,fVar54))))
                    >> 0x20);
    fVar44 = fVar6 * (float)*(undefined8 *)(param_7 + 0xa8);
    fVar49 = fVar8 * (float)((ulong)*(undefined8 *)(param_7 + 0xa8) >> 0x20);
    fVar51 = fVar7 * *(float *)(param_7 + 0xb0);
    fVar36 = fVar44 * fVar44 + fVar49 * fVar49 + fVar51 * fVar51;
    fVar52 = fVar44 * fVar44 + fVar49 * fVar49 + fVar51 * fVar51;
    uVar64 = CONCAT44(fVar52,fVar36);
    uVar55 = NEON_frsqrte(uVar64,4);
    fVar67 = (float)uVar55;
    fVar68 = (float)((ulong)uVar55 >> 0x20);
    uVar55 = NEON_frsqrts(uVar64,CONCAT44(fVar68 * fVar68,fVar67 * fVar67),4);
    fVar67 = fVar67 * (float)uVar55;
    fVar68 = fVar68 * (float)((ulong)uVar55 >> 0x20);
    uVar64 = NEON_frsqrts(uVar64,CONCAT44(fVar68 * fVar68,fVar67 * fVar67),4);
    iVar43 = -(uint)(fVar36 <= 0.0);
    iVar48 = -(uint)(fVar52 <= 0.0);
    fVar36 = (float)uVar64 * fVar67 * fVar36;
    fVar52 = (float)((ulong)uVar64 >> 0x20) * fVar68 * fVar52;
    fVar67 = (float)CONCAT13((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18),
                             CONCAT12((byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10),
                                      CONCAT11((byte)((uint)fVar36 >> 8) &
                                               ~(byte)((uint)iVar43 >> 8),
                                               SUB41(fVar36,0) & ~(byte)iVar43)));
    fVar62 = (float)(CONCAT17((byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                              CONCAT16((byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10),
                                       CONCAT15((byte)((uint)fVar52 >> 8) &
                                                ~(byte)((uint)iVar48 >> 8),
                                                CONCAT14(SUB41(fVar52,0) & ~(byte)iVar48,fVar67))))
                    >> 0x20);
    auVar30 = *(undefined1 (*) [12])(param_7 + 0xb4);
    fVar6 = fVar6 * auVar30._0_4_;
    fVar8 = fVar8 * auVar30._4_4_;
    fVar7 = fVar7 * auVar30._8_4_;
    fVar36 = fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7;
    fVar52 = fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7;
    uVar64 = CONCAT44(fVar52,fVar36);
    uVar55 = NEON_frsqrte(uVar64,4);
    fVar68 = (float)uVar55;
    fVar63 = (float)((ulong)uVar55 >> 0x20);
    uVar55 = NEON_frsqrts(uVar64,CONCAT44(fVar63 * fVar63,fVar68 * fVar68),4);
    fVar68 = fVar68 * (float)uVar55;
    fVar63 = fVar63 * (float)((ulong)uVar55 >> 0x20);
    uVar64 = NEON_frsqrts(uVar64,CONCAT44(fVar63 * fVar63,fVar68 * fVar68),4);
    iVar43 = -(uint)(fVar36 <= 0.0);
    iVar48 = -(uint)(fVar52 <= 0.0);
    fVar36 = (float)uVar64 * fVar68 * fVar36;
    fVar52 = (float)((ulong)uVar64 >> 0x20) * fVar63 * fVar52;
    fVar36 = (float)CONCAT13((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18),
                             CONCAT12((byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10),
                                      CONCAT11((byte)((uint)fVar36 >> 8) &
                                               ~(byte)((uint)iVar43 >> 8),
                                               SUB41(fVar36,0) & ~(byte)iVar43)));
    fVar52 = (float)(CONCAT17((byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                              CONCAT16((byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10),
                                       CONCAT15((byte)((uint)fVar52 >> 8) &
                                                ~(byte)((uint)iVar48 >> 8),
                                                CONCAT14(SUB41(fVar52,0) & ~(byte)iVar48,fVar36))))
                    >> 0x20);
    fVar6 = (((0.0 - fVar59 * fVar53) - fVar38 * fVar54) - fVar44 * fVar67) - fVar6 * fVar36;
    fVar8 = (((0.0 - fVar33 * fVar60) - fVar39 * fVar61) - fVar49 * fVar62) - fVar8 * fVar52;
    fVar7 = (((0.0 - fVar32 * fVar53) - fVar50 * fVar54) - fVar51 * fVar67) - fVar7 * fVar36;
    fVar9 = (((0.0 - fVar9 * 0.0 * fVar60) - fVar9 * 0.0 * fVar61) - fVar9 * 0.0 * fVar62) -
            fVar9 * 0.0 * fVar52;
    iVar43 = -(uint)(fVar6 == 0.0);
    iVar48 = -(uint)(fVar8 == 0.0);
    iVar34 = -(uint)(fVar7 == 0.0);
    iVar35 = -(uint)(fVar9 == 0.0);
    iVar43 = CONCAT13(~(byte)((uint)iVar43 >> 0x18),
                      CONCAT12(~(byte)((uint)iVar43 >> 0x10),
                               CONCAT11(~(byte)((uint)iVar43 >> 8),~(byte)iVar43)));
    auVar30._0_8_ =
         CONCAT17(~(byte)((uint)iVar48 >> 0x18),
                  CONCAT16(~(byte)((uint)iVar48 >> 0x10),
                           CONCAT15(~(byte)((uint)iVar48 >> 8),CONCAT14(~(byte)iVar48,iVar43))));
    auVar30[8] = ~(byte)iVar34;
    auVar30[9] = ~(byte)((uint)iVar34 >> 8);
    auVar30[10] = ~(byte)((uint)iVar34 >> 0x10);
    auVar30[0xb] = ~(byte)((uint)iVar34 >> 0x18);
    auVar45[0xc] = ~(byte)iVar35;
    auVar45._0_12_ = auVar30;
    auVar45[0xd] = ~(byte)((uint)iVar35 >> 8);
    auVar45[0xe] = ~(byte)((uint)iVar35 >> 0x10);
    auVar45[0xf] = ~(byte)((uint)iVar35 >> 0x18);
    if (((iVar43 != 0 || (int)((ulong)auVar30._0_8_ >> 0x20) != 0) || auVar30._8_4_ != 0) ||
        auVar45._12_4_ != 0) {
      fVar36 = (float)*param_8 * (float)*param_1;
      fVar52 = (float)((ulong)*param_8 >> 0x20) * (float)((ulong)*param_1 >> 0x20);
      fVar6 = *param_11 + *param_6 * fVar6 * fVar36;
      fVar8 = param_11[1] + param_6[1] * fVar8 * fVar52;
      bVar14 = (byte)((uint)fVar8 >> 8);
      bVar17 = (byte)((uint)fVar8 >> 0x10);
      bVar20 = (byte)((uint)fVar8 >> 0x18);
      fVar7 = param_11[2] + param_6[2] * fVar7 * fVar36;
      fVar9 = param_11[3] + param_6[3] * fVar9 * fVar52;
      bVar26 = (byte)((uint)fVar9 >> 8);
      bVar27 = (byte)((uint)fVar9 >> 0x10);
      bVar28 = (byte)((uint)fVar9 >> 0x18);
      *(ulong *)(param_11 + 2) =
           CONCAT17(bVar28,CONCAT16(bVar27,CONCAT15(bVar26,CONCAT14(SUB41(fVar9,0),fVar7))));
      *(ulong *)param_11 =
           CONCAT17(bVar20,CONCAT16(bVar17,CONCAT15(bVar14,CONCAT14(SUB41(fVar8,0),fVar6))));
      iVar43 = -(uint)(0.0 < *param_4);
      iVar48 = -(uint)(0.0 < param_4[1]);
      iVar34 = -(uint)(0.0 < param_4[2]);
      iVar35 = -(uint)(0.0 < param_4[3]);
      iVar37 = -(uint)(0.0 < fVar6);
      iVar40 = -(uint)(0.0 < fVar8);
      iVar41 = -(uint)(0.0 < fVar7);
      iVar42 = -(uint)(0.0 < fVar9);
      *(ulong *)(param_11 + 2) =
           CONCAT17(bVar28 & ~((byte)((uint)iVar42 >> 0x18) ^ (byte)((uint)iVar35 >> 0x18)),
                    CONCAT16(bVar27 & ~((byte)((uint)iVar42 >> 0x10) ^ (byte)((uint)iVar35 >> 0x10))
                             ,CONCAT15(bVar26 & ~((byte)((uint)iVar42 >> 8) ^
                                                 (byte)((uint)iVar35 >> 8)),
                                       CONCAT14(SUB41(fVar9,0) & ~((byte)iVar42 ^ (byte)iVar35),
                                                CONCAT13((byte)((uint)fVar7 >> 0x18) &
                                                         ~((byte)((uint)iVar41 >> 0x18) ^
                                                          (byte)((uint)iVar34 >> 0x18)),
                                                         CONCAT12((byte)((uint)fVar7 >> 0x10) &
                                                                  ~((byte)((uint)iVar41 >> 0x10) ^
                                                                   (byte)((uint)iVar34 >> 0x10)),
                                                                  CONCAT11((byte)((uint)fVar7 >> 8)
                                                                           & ~((byte)((uint)iVar41
                                                                                     >> 8) ^
                                                                              (byte)((uint)iVar34 >>
                                                                                    8)),
                                                                           SUB41(fVar7,0) &
                                                                           ~((byte)iVar41 ^
                                                                            (byte)iVar34))))))));
      *(ulong *)param_11 =
           CONCAT17(bVar20 & ~((byte)((uint)iVar40 >> 0x18) ^ (byte)((uint)iVar48 >> 0x18)),
                    CONCAT16(bVar17 & ~((byte)((uint)iVar40 >> 0x10) ^ (byte)((uint)iVar48 >> 0x10))
                             ,CONCAT15(bVar14 & ~((byte)((uint)iVar40 >> 8) ^
                                                 (byte)((uint)iVar48 >> 8)),
                                       CONCAT14(SUB41(fVar8,0) & ~((byte)iVar40 ^ (byte)iVar48),
                                                CONCAT13((byte)((uint)fVar6 >> 0x18) &
                                                         ~((byte)((uint)iVar37 >> 0x18) ^
                                                          (byte)((uint)iVar43 >> 0x18)),
                                                         CONCAT12((byte)((uint)fVar6 >> 0x10) &
                                                                  ~((byte)((uint)iVar37 >> 0x10) ^
                                                                   (byte)((uint)iVar43 >> 0x10)),
                                                                  CONCAT11((byte)((uint)fVar6 >> 8)
                                                                           & ~((byte)((uint)iVar37
                                                                                     >> 8) ^
                                                                              (byte)((uint)iVar43 >>
                                                                                    8)),
                                                                           SUB41(fVar6,0) &
                                                                           ~((byte)iVar37 ^
                                                                            (byte)iVar43))))))));
    }
    if (0.0 < (float)uVar29) {
      fVar6 = (float)*param_8 * (float)*param_1;
      fVar8 = (float)((ulong)*param_8 >> 0x20) * (float)((ulong)*param_1 >> 0x20);
      local_b0 = local_b0 * fVar6;
      fStack_ac = fStack_ac * fVar8;
      fStack_a8 = fStack_a8 * fVar6;
      fStack_a4 = fStack_a4 *
                  (float)CONCAT13((char)((uint)fVar8 >> 0x18),
                                  CONCAT12((char)((uint)fVar8 >> 0x10),
                                           (short)(CONCAT15((char)((uint)fVar8 >> 8),
                                                            CONCAT14(SUB41(fVar8,0),fVar6)) >> 0x20)
                                          ));
      fStack_a4 = (float)(CONCAT17((char)((uint)fStack_a4 >> 0x18),
                                   CONCAT16((char)((uint)fStack_a4 >> 0x10),
                                            CONCAT15((char)((uint)fStack_a4 >> 8),
                                                     CONCAT14(SUB41(fStack_a4,0),fStack_a8)))) >>
                         0x20);
      fStack_ac = (float)(CONCAT17((char)((uint)fStack_ac >> 0x18),
                                   CONCAT16((char)((uint)fStack_ac >> 0x10),
                                            CONCAT15((char)((uint)fStack_ac >> 8),
                                                     CONCAT14(SUB41(fStack_ac,0),local_b0)))) >>
                         0x20);
      FUN_032cc5bc(&local_b0,param_2,&local_b0);
      uVar64 = NEON_frecpe(uVar29,4);
      uVar55 = NEON_frecps(uVar29,uVar64,4);
      fVar6 = (float)uVar64 * (float)uVar55;
      fVar8 = (float)((ulong)uVar64 >> 0x20) * (float)((ulong)uVar55 >> 0x20);
      uVar29 = NEON_frecps(uVar29,CONCAT17((char)((uint)fVar8 >> 0x18),
                                           CONCAT16((char)((uint)fVar8 >> 0x10),
                                                    CONCAT15((char)((uint)fVar8 >> 8),
                                                             CONCAT14(SUB41(fVar8,0),fVar6)))),4);
      fVar6 = fVar6 * (float)uVar29;
      fVar8 = fVar8 * (float)((ulong)uVar29 >> 0x20);
      fVar7 = (float)((ulong)local_a0 >> 0x20) * fVar8;
      fVar8 = (float)((ulong)uStack_98 >> 0x20) *
              (float)CONCAT13((char)((uint)fVar8 >> 0x18),
                              CONCAT12((char)((uint)fVar8 >> 0x10),
                                       (short)(CONCAT15((char)((uint)fVar8 >> 8),
                                                        CONCAT14(SUB41(fVar8,0),fVar6)) >> 0x20)));
      uStack_98 = CONCAT17((char)((uint)fVar8 >> 0x18),
                           CONCAT16((char)((uint)fVar8 >> 0x10),
                                    CONCAT15((char)((uint)fVar8 >> 8),
                                             CONCAT14(SUB41(fVar8,0),(float)uStack_98 * fVar6))));
      local_a0 = CONCAT17((char)((uint)fVar7 >> 0x18),
                          CONCAT16((char)((uint)fVar7 >> 0x10),
                                   CONCAT15((char)((uint)fVar7 >> 8),
                                            CONCAT14(SUB41(fVar7,0),(float)local_a0 * fVar6))));
      FUN_032cc53c(&local_d0,param_2,&local_a0);
      fVar36 = (float)*param_5;
      auVar46._0_4_ = fVar36 * local_b0;
      fVar52 = (float)((ulong)*param_5 >> 0x20);
      auVar46._4_4_ = fVar52 * fStack_ac;
      auVar46._8_4_ = fVar36 * fStack_a8;
      auVar46._12_4_ = fVar52 * fStack_a4;
      auVar65 = NEON_frecpe(auVar46,4);
      iVar43 = -(uint)(auVar46._0_4_ == 0.0);
      iVar48 = -(uint)(auVar46._4_4_ == 0.0);
      iVar34 = -(uint)(auVar46._8_4_ == 0.0);
      iVar35 = -(uint)(auVar46._12_4_ == 0.0);
      auVar56[0] = ~(byte)iVar43;
      auVar56[1] = ~(byte)((uint)iVar43 >> 8);
      auVar56[2] = ~(byte)((uint)iVar43 >> 0x10);
      auVar56[3] = ~(byte)((uint)iVar43 >> 0x18);
      auVar56[4] = ~(byte)iVar48;
      auVar56[5] = ~(byte)((uint)iVar48 >> 8);
      auVar56[6] = ~(byte)((uint)iVar48 >> 0x10);
      auVar56[7] = ~(byte)((uint)iVar48 >> 0x18);
      auVar56[8] = ~(byte)iVar34;
      auVar56[9] = ~(byte)((uint)iVar34 >> 8);
      auVar56[10] = ~(byte)((uint)iVar34 >> 0x10);
      auVar56[0xb] = ~(byte)((uint)iVar34 >> 0x18);
      auVar56[0xc] = ~(byte)iVar35;
      auVar56[0xd] = ~(byte)((uint)iVar35 >> 8);
      auVar56[0xe] = ~(byte)((uint)iVar35 >> 0x10);
      auVar56[0xf] = ~(byte)((uint)iVar35 >> 0x18);
      auVar45 = NEON_frecps(auVar46,auVar65,4);
      auVar66._0_4_ = auVar65._0_4_ * auVar45._0_4_;
      auVar66._4_4_ = auVar65._4_4_ * auVar45._4_4_;
      auVar66._8_4_ = auVar65._8_4_ * auVar45._8_4_;
      auVar66._12_4_ = auVar65._12_4_ * auVar45._12_4_;
      auVar65 = NEON_frecps(auVar46,auVar66,4);
      auVar47._0_4_ = auVar66._0_4_ * auVar65._0_4_;
      auVar47._4_4_ = auVar66._4_4_ * auVar65._4_4_;
      auVar47._8_4_ = auVar66._8_4_ * auVar65._8_4_;
      auVar47._12_4_ = auVar66._12_4_ * auVar65._12_4_;
      auVar57._8_4_ = 0x5f7ffff0;
      auVar57._0_8_ = 0x5f7ffff05f7ffff0;
      auVar57._12_4_ = 0x5f7ffff0;
      auVar57 = auVar57 ^ (auVar57 ^ auVar47) & auVar56;
      auVar65 = NEON_fmov(0x3f800000,4);
      fVar6 = (*param_9 - (float)*(undefined8 *)*param_3) * auVar57._0_4_;
      fVar8 = (param_9[1] - (float)((ulong)*(undefined8 *)*param_3 >> 0x20)) * auVar57._4_4_;
      fVar7 = (param_9[2] - (float)*(undefined8 *)(*param_3 + 8)) * auVar57._8_4_;
      fVar9 = (param_9[3] - (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20)) * auVar57._12_4_;
      iVar43 = -(uint)(auVar65._0_4_ <= fVar6);
      iVar48 = -(uint)(auVar65._4_4_ <= fVar8);
      iVar34 = -(uint)(auVar65._8_4_ <= fVar7);
      iVar35 = -(uint)(auVar65._12_4_ <= fVar9);
      iVar37 = -(uint)(fVar6 < 0.0);
      iVar40 = -(uint)(fVar8 < 0.0);
      iVar41 = -(uint)(fVar7 < 0.0);
      iVar42 = -(uint)(fVar9 < 0.0);
      auVar58[0] = ~(byte)iVar43 & ~(byte)iVar37;
      auVar58[1] = ~(byte)((uint)iVar43 >> 8) & ~(byte)((uint)iVar37 >> 8);
      auVar58[2] = ~(byte)((uint)iVar43 >> 0x10) & ~(byte)((uint)iVar37 >> 0x10);
      auVar58[3] = ~(byte)((uint)iVar43 >> 0x18) & ~(byte)((uint)iVar37 >> 0x18);
      auVar58[4] = ~(byte)iVar48 & ~(byte)iVar40;
      auVar58[5] = ~(byte)((uint)iVar48 >> 8) & ~(byte)((uint)iVar40 >> 8);
      auVar58[6] = ~(byte)((uint)iVar48 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10);
      auVar58[7] = ~(byte)((uint)iVar48 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18);
      auVar58[8] = ~(byte)iVar34 & ~(byte)iVar41;
      auVar58[9] = ~(byte)((uint)iVar34 >> 8) & ~(byte)((uint)iVar41 >> 8);
      auVar58[10] = ~(byte)((uint)iVar34 >> 0x10) & ~(byte)((uint)iVar41 >> 0x10);
      auVar58[0xb] = ~(byte)((uint)iVar34 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18);
      auVar58[0xc] = ~(byte)iVar35 & ~(byte)iVar42;
      auVar58[0xd] = ~(byte)((uint)iVar35 >> 8) & ~(byte)((uint)iVar42 >> 8);
      auVar58[0xe] = ~(byte)((uint)iVar35 >> 0x10) & ~(byte)((uint)iVar42 >> 0x10);
      auVar58[0xf] = ~(byte)((uint)iVar35 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18);
      auVar1[4] = SUB41(fVar8,0);
      auVar1._0_4_ = fVar6;
      auVar1[5] = (char)((uint)fVar8 >> 8);
      auVar1[6] = (char)((uint)fVar8 >> 0x10);
      auVar1[7] = (char)((uint)fVar8 >> 0x18);
      auVar1[8] = SUB41(fVar7,0);
      auVar1[9] = (char)((uint)fVar7 >> 8);
      auVar1[10] = (char)((uint)fVar7 >> 0x10);
      auVar1[0xb] = (char)((uint)fVar7 >> 0x18);
      auVar1[0xc] = SUB41(fVar9,0);
      auVar1[0xd] = (char)((uint)fVar9 >> 8);
      auVar1[0xe] = (char)((uint)fVar9 >> 0x10);
      auVar1[0xf] = (char)((uint)fVar9 >> 0x18);
      auVar65 = auVar65 ^ (auVar65 ^ auVar1) & auVar58;
      local_b0 = local_b0 * auVar65._0_4_;
      fVar8 = fStack_ac * auVar65._4_4_;
      uVar12 = SUB41(fVar8,0);
      uVar15 = (undefined1)((uint)fVar8 >> 8);
      uVar18 = (undefined1)((uint)fVar8 >> 0x10);
      uVar21 = (undefined1)((uint)fVar8 >> 0x18);
      fStack_a8 = fStack_a8 * auVar65._8_4_;
      uVar13 = (undefined1)((uint)fStack_a8 >> 8);
      uVar16 = (undefined1)((uint)fStack_a8 >> 0x10);
      uVar19 = (undefined1)((uint)fStack_a8 >> 0x18);
      fVar7 = fStack_a4 * auVar65._12_4_;
      uVar22 = SUB41(fVar7,0);
      uVar23 = (undefined1)((uint)fVar7 >> 8);
      uVar24 = (undefined1)((uint)fVar7 >> 0x10);
      uVar25 = (undefined1)((uint)fVar7 >> 0x18);
      auVar2[4] = uVar12;
      auVar2._0_4_ = local_b0;
      auVar2[5] = uVar15;
      auVar2[6] = uVar18;
      auVar2[7] = uVar21;
      auVar2[8] = SUB41(fStack_a8,0);
      auVar2[9] = uVar13;
      auVar2[10] = uVar16;
      auVar2[0xb] = uVar19;
      auVar2[0xc] = uVar22;
      auVar2[0xd] = uVar23;
      auVar2[0xe] = uVar24;
      auVar2[0xf] = uVar25;
      auVar3[4] = uVar12;
      auVar3._0_4_ = local_b0;
      auVar3[5] = uVar15;
      auVar3[6] = uVar18;
      auVar3[7] = uVar21;
      auVar3[8] = SUB41(fStack_a8,0);
      auVar3[9] = uVar13;
      auVar3[10] = uVar16;
      auVar3[0xb] = uVar19;
      auVar3[0xc] = uVar22;
      auVar3[0xd] = uVar23;
      auVar3[0xe] = uVar24;
      auVar3[0xf] = uVar25;
      auVar45 = NEON_ext(auVar2,auVar3,4,1);
      fStack_a4 = (float)(CONCAT17(uVar25,CONCAT16(uVar24,CONCAT15(uVar23,CONCAT14(uVar22,fStack_a8)
                                                                  ))) >> 0x20);
      fStack_ac = (float)(CONCAT17(uVar21,CONCAT16(uVar18,CONCAT15(uVar15,CONCAT14(uVar12,local_b0))
                                                  )) >> 0x20);
      param_10[2] = param_10[2] + fVar36 * fStack_a8;
      param_10[3] = param_10[3] + fVar52 * fVar7;
      *param_10 = *param_10 + fVar36 * local_b0;
      param_10[1] = param_10[1] + fVar52 * fVar8;
      auVar31._0_4_ = local_d0 - *(float *)(param_2 + 0x10);
      auVar31._4_4_ = fStack_cc - *(float *)(param_2 + 0x14);
      auVar31._8_4_ = fStack_c8 - *(float *)(param_2 + 0x18);
      auVar31._12_4_ = fStack_c4 - *(float *)(param_2 + 0x1c);
      auVar65 = NEON_ext(auVar31,auVar31,4,1);
      fVar6 = auVar31._0_4_ * auVar45._0_4_ - local_b0 * auVar65._0_4_;
      fVar8 = auVar31._4_4_ * auVar45._4_4_ - fVar8 * auVar65._4_4_;
      uVar13 = SUB41(fVar8,0);
      uVar16 = (undefined1)((uint)fVar8 >> 8);
      uVar19 = (undefined1)((uint)fVar8 >> 0x10);
      uVar22 = (undefined1)((uint)fVar8 >> 0x18);
      fVar8 = auVar31._8_4_ * local_b0 - fStack_a8 * auVar31._0_4_;
      uVar23 = (undefined1)((uint)fVar8 >> 8);
      uVar24 = (undefined1)((uint)fVar8 >> 0x10);
      uVar25 = (undefined1)((uint)fVar8 >> 0x18);
      fVar7 = auVar31._12_4_ *
              (float)(CONCAT17(uVar21,CONCAT16(uVar18,CONCAT15(uVar15,CONCAT14(uVar12,local_b0))))
                     >> 0x20) - fVar7 * auVar31._4_4_;
      uVar12 = (undefined1)((uint)fVar7 >> 8);
      uVar15 = (undefined1)((uint)fVar7 >> 0x10);
      uVar18 = (undefined1)((uint)fVar7 >> 0x18);
      auVar4[4] = uVar13;
      auVar4._0_4_ = fVar6;
      auVar4[5] = uVar16;
      auVar4[6] = uVar19;
      auVar4[7] = uVar22;
      auVar4[8] = SUB41(fVar8,0);
      auVar4[9] = uVar23;
      auVar4[10] = uVar24;
      auVar4[0xb] = uVar25;
      auVar4[0xc] = SUB41(fVar7,0);
      auVar4[0xd] = uVar12;
      auVar4[0xe] = uVar15;
      auVar4[0xf] = uVar18;
      auVar5[4] = uVar13;
      auVar5._0_4_ = fVar6;
      auVar5[5] = uVar16;
      auVar5[6] = uVar19;
      auVar5[7] = uVar22;
      auVar5[8] = SUB41(fVar8,0);
      auVar5[9] = uVar23;
      auVar5[10] = uVar24;
      auVar5[0xb] = uVar25;
      auVar5[0xc] = SUB41(fVar7,0);
      auVar5[0xd] = uVar12;
      auVar5[0xe] = uVar15;
      auVar5[0xf] = uVar18;
      auVar65 = NEON_ext(auVar4,auVar5,4,1);
      uStack_d8 = CONCAT17(uVar22,CONCAT16(uVar19,CONCAT15(uVar16,CONCAT14(uVar13,fVar6))));
      local_e0 = auVar65._0_8_;
      FUN_032cc638(local_f0,param_2,&local_e0);
      fVar7 = *param_6;
      fVar6 = param_11[1] + local_f0._4_4_ * param_6[1];
      fVar8 = param_11[3] + local_f0._12_4_ * param_6[3];
      *(ulong *)(param_11 + 2) =
           CONCAT17((char)((uint)fVar8 >> 0x18),
                    CONCAT16((char)((uint)fVar8 >> 0x10),
                             CONCAT15((char)((uint)fVar8 >> 8),
                                      CONCAT14(SUB41(fVar8,0),
                                               param_11[2] + local_f0._8_4_ * param_6[2]))));
      *(ulong *)param_11 =
           CONCAT17((char)((uint)fVar6 >> 0x18),
                    CONCAT16((char)((uint)fVar6 >> 0x10),
                             CONCAT15((char)((uint)fVar6 >> 8),
                                      CONCAT14(SUB41(fVar6,0),*param_11 + local_f0._0_4_ * fVar7))))
      ;
    }
    fVar6 = (float)*param_8 * (float)*param_1;
    fVar8 = (float)((ulong)*param_8 >> 0x20) * (float)((ulong)*param_1 >> 0x20);
    local_c0 = local_c0 * fVar6;
    fStack_bc = fStack_bc * fVar8;
    fStack_b8 = fStack_b8 * fVar6;
    fStack_b4 = fStack_b4 *
                (float)CONCAT13((char)((uint)fVar8 >> 0x18),
                                CONCAT12((char)((uint)fVar8 >> 0x10),
                                         (short)(CONCAT15((char)((uint)fVar8 >> 8),
                                                          CONCAT14(SUB41(fVar8,0),fVar6)) >> 0x20)))
    ;
    fStack_b4 = (float)(CONCAT17((char)((uint)fStack_b4 >> 0x18),
                                 CONCAT16((char)((uint)fStack_b4 >> 0x10),
                                          CONCAT15((char)((uint)fStack_b4 >> 8),
                                                   CONCAT14(SUB41(fStack_b4,0),fStack_b8)))) >> 0x20
                       );
    fStack_bc = (float)(CONCAT17((char)((uint)fStack_bc >> 0x18),
                                 CONCAT16((char)((uint)fStack_bc >> 0x10),
                                          CONCAT15((char)((uint)fStack_bc >> 8),
                                                   CONCAT14(SUB41(fStack_bc,0),local_c0)))) >> 0x20)
    ;
    FUN_032cc638(&local_d0,param_2,&local_c0);
    fVar7 = *param_6;
    fVar6 = param_11[1] + fStack_cc * param_6[1];
    fVar8 = param_11[3] + fStack_c4 * param_6[3];
    *(ulong *)(param_11 + 2) =
         CONCAT17((char)((uint)fVar8 >> 0x18),
                  CONCAT16((char)((uint)fVar8 >> 0x10),
                           CONCAT15((char)((uint)fVar8 >> 8),
                                    CONCAT14(SUB41(fVar8,0),param_11[2] + fStack_c8 * param_6[2]))))
    ;
    *(ulong *)param_11 =
         CONCAT17((char)((uint)fVar6 >> 0x18),
                  CONCAT16((char)((uint)fVar6 >> 0x10),
                           CONCAT15((char)((uint)fVar6 >> 8),
                                    CONCAT14(SUB41(fVar6,0),*param_11 + local_d0 * fVar7))));
  }
  return;
}


