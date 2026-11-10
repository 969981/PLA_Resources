/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03288de0; name: FUN_03288de0
 */


undefined8
FUN_03288de0(long param_1,long param_2,undefined1 (*param_3) [12],undefined8 *param_4,
            undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,long *param_8,float *param_9
            )

{
  float *pfVar1;
  uint *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [12];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 (*pauVar24) [16];
  long lVar25;
  undefined1 (*pauVar26) [16];
  long lVar27;
  undefined1 uVar28;
  float fVar29;
  int iVar30;
  float fVar31;
  int iVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar37;
  float fVar38;
  ulong uVar36;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [12];
  float fVar44;
  float fVar45;
  undefined1 auVar43 [16];
  float fVar54;
  undefined1 auVar52 [16];
  undefined1 auVar51 [16];
  undefined1 auVar50 [16];
  undefined1 auVar49 [16];
  undefined1 auVar48 [16];
  undefined1 auVar47 [16];
  undefined1 auVar46 [16];
  undefined1 auVar53 [16];
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar61;
  undefined8 uVar58;
  undefined8 uVar59;
  ulong uVar60;
  float fVar62;
  float fVar63;
  float fVar66;
  undefined8 uVar64;
  ulong uVar65;
  float fVar67;
  float fVar68;
  float fVar70;
  undefined8 uVar69;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  int iVar76;
  undefined1 auVar77 [16];
  byte bVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  byte bVar82;
  byte bVar83;
  float fVar84;
  float fVar85;
  float fVar87;
  float fVar88;
  float fVar89;
  undefined1 auVar86 [16];
  float fVar90;
  float fVar93;
  float fVar94;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  float fVar95;
  float fVar104;
  float fVar105;
  float fVar106;
  undefined1 auVar100 [16];
  undefined1 auVar99 [16];
  undefined1 auVar98 [16];
  undefined1 auVar97 [16];
  undefined1 auVar96 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  int iVar107;
  undefined8 uVar108;
  int iVar114;
  undefined1 auVar109 [16];
  float fVar112;
  int iVar113;
  int iVar115;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  float fVar116;
  float fVar119;
  undefined1 auVar117 [16];
  int iVar120;
  undefined1 auVar118 [16];
  undefined1 auVar127 [16];
  undefined1 auVar126 [16];
  undefined1 auVar125 [16];
  undefined1 auVar124 [16];
  undefined1 auVar123 [16];
  undefined1 auVar122 [16];
  undefined1 auVar121 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar137 [16];
  undefined1 auVar136 [16];
  undefined1 auVar135 [16];
  undefined1 auVar134 [16];
  undefined1 auVar133 [16];
  undefined1 auVar132 [16];
  undefined1 auVar138 [16];
  int iVar139;
  int iVar141;
  int iVar142;
  undefined1 auVar140 [16];
  int iVar143;
  float fVar144;
  float fVar145;
  
  fVar55 = *(float *)(param_2 + 0xd4);
  if (fVar55 != 0.0) {
    fVar105 = (float)*(undefined8 *)(*param_3 + 8);
    fVar106 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
    fVar93 = (float)*(undefined8 *)*param_3;
    fVar94 = (float)((ulong)*(undefined8 *)*param_3 >> 0x20);
    fVar54 = (float)*(undefined8 *)(param_1 + 0x40);
    fVar33 = fVar93 * fVar54;
    fVar116 = (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
    fVar37 = fVar94 * fVar116;
    fVar119 = (float)*(undefined8 *)(param_1 + 0x48);
    fVar39 = fVar105 * fVar119;
    fVar34 = fVar33 + fVar37 + fVar39;
    fVar39 = fVar33 + fVar37 + fVar39;
    fVar54 = fVar54 - fVar93 * fVar34;
    fVar116 = fVar116 - fVar94 * fVar39;
    fVar119 = fVar119 - fVar105 * fVar34;
    fVar57 = (float)*(undefined8 *)(param_2 + 0x40) -
             ((float)*(undefined8 *)(param_1 + 0x50) - (float)*(undefined8 *)(param_2 + 0x50));
    fVar61 = (float)((ulong)*(undefined8 *)(param_2 + 0x40) >> 0x20) -
             ((float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20) -
             (float)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x20));
    fVar62 = (float)*(undefined8 *)(param_2 + 0x48) -
             ((float)*(undefined8 *)(param_1 + 0x58) - (float)*(undefined8 *)(param_2 + 0x58));
    fVar33 = fVar93 * fVar57;
    fVar34 = fVar94 * fVar61;
    fVar37 = fVar105 * fVar62;
    fVar35 = fVar33 + fVar34 + fVar37;
    fVar37 = fVar33 + fVar34 + fVar37;
    fVar57 = fVar57 - fVar93 * fVar35;
    fVar61 = fVar61 - fVar94 * fVar37;
    fVar62 = fVar62 - fVar105 * fVar35;
    if (*(int *)(param_1 + 0xd8) < *(int *)(param_2 + 0xd8)) {
      uVar58 = NEON_fmov(0x3f800000,4);
      fVar55 = 0.0;
      fVar33 = 0.0;
    }
    else {
      fVar63 = fVar119 * fVar119 + fVar54 * fVar54 + fVar116 * fVar116;
      fVar66 = fVar119 * fVar119 + fVar54 * fVar54 + fVar116 * fVar116;
      uVar58 = NEON_fmov(0x3f800000,4);
      fVar33 = (float)uVar58 - fVar55;
      fVar34 = (float)((ulong)uVar58 >> 0x20) - fVar55;
      fVar67 = fVar62 * fVar62 + fVar57 * fVar57 + fVar61 * fVar61;
      fVar70 = fVar62 * fVar62 + fVar57 * fVar57 + fVar61 * fVar61;
      fVar35 = fVar55;
      if (fVar67 < fVar63) {
        uVar58 = NEON_frsqrte(CONCAT44(fVar70,fVar67),4);
        fVar35 = (float)uVar58;
        fVar84 = (float)((ulong)uVar58 >> 0x20);
        uVar58 = NEON_frsqrts(CONCAT44(fVar70,fVar67),CONCAT44(fVar84 * fVar84,fVar35 * fVar35),4);
        iVar30 = -(uint)(fVar67 <= 0.0);
        iVar32 = -(uint)(fVar70 <= 0.0);
        fVar67 = fVar67 * fVar35 * (float)uVar58;
        fVar70 = fVar70 * fVar84 * (float)((ulong)uVar58 >> 0x20);
        fVar35 = (float)CONCAT13((byte)((uint)fVar67 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18),
                                 CONCAT12((byte)((uint)fVar67 >> 0x10) &
                                          ~(byte)((uint)iVar30 >> 0x10),
                                          CONCAT11((byte)((uint)fVar67 >> 8) &
                                                   ~(byte)((uint)iVar30 >> 8),
                                                   SUB41(fVar67,0) & ~(byte)iVar30)));
        uVar58 = NEON_frsqrte(CONCAT44(fVar66,fVar63),4);
        fVar33 = fVar33 * fVar35;
        fVar34 = fVar34 * (float)(CONCAT17((byte)((uint)fVar70 >> 0x18) &
                                           ~(byte)((uint)iVar32 >> 0x18),
                                           CONCAT16((byte)((uint)fVar70 >> 0x10) &
                                                    ~(byte)((uint)iVar32 >> 0x10),
                                                    CONCAT15((byte)((uint)fVar70 >> 8) &
                                                             ~(byte)((uint)iVar32 >> 8),
                                                             CONCAT14(SUB41(fVar70,0) &
                                                                      ~(byte)iVar32,fVar35)))) >>
                                 0x20);
        iVar30 = -(uint)(fVar63 <= 0.0);
        iVar32 = -(uint)(fVar66 <= 0.0);
        fVar35 = (float)uVar58;
        fVar67 = (float)((ulong)uVar58 >> 0x20);
        uVar58 = NEON_frsqrts(CONCAT44(fVar66,fVar63),CONCAT44(fVar67 * fVar67,fVar35 * fVar35),4);
        fVar63 = fVar63 * fVar35 * (float)uVar58;
        fVar66 = fVar66 * fVar67 * (float)((ulong)uVar58 >> 0x20);
        fVar63 = (float)CONCAT13((byte)((uint)fVar63 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18),
                                 CONCAT12((byte)((uint)fVar63 >> 0x10) &
                                          ~(byte)((uint)iVar30 >> 0x10),
                                          CONCAT11((byte)((uint)fVar63 >> 8) &
                                                   ~(byte)((uint)iVar30 >> 8),
                                                   SUB41(fVar63,0) & ~(byte)iVar30)));
        fVar35 = fVar55 * (float)(CONCAT17((byte)((uint)fVar66 >> 0x18) &
                                           ~(byte)((uint)iVar32 >> 0x18),
                                           CONCAT16((byte)((uint)fVar66 >> 0x10) &
                                                    ~(byte)((uint)iVar32 >> 0x10),
                                                    CONCAT15((byte)((uint)fVar66 >> 8) &
                                                             ~(byte)((uint)iVar32 >> 8),
                                                             CONCAT14(SUB41(fVar66,0) &
                                                                      ~(byte)iVar32,fVar63)))) >>
                                 0x20);
        fVar55 = fVar55 * fVar63;
      }
      if (fVar55 == 0.0) {
        return 0;
      }
      uVar58 = NEON_frecpe(CONCAT44(fVar35,fVar55),4);
      uVar69 = NEON_frecps(CONCAT44(fVar35,fVar55),uVar58,4);
      fVar63 = (float)uVar58 * (float)uVar69;
      fVar66 = (float)((ulong)uVar58 >> 0x20) * (float)((ulong)uVar69 >> 0x20);
      uVar58 = NEON_frecps(CONCAT44(fVar35,fVar55),CONCAT44(fVar66,fVar63),4);
      uVar58 = CONCAT44((fVar34 + fVar35) * fVar66 * (float)((ulong)uVar58 >> 0x20),
                        (fVar33 + fVar55) * fVar63 * (float)uVar58);
      uVar69 = NEON_frecpe(uVar58,4);
      uVar59 = NEON_frecps(uVar58,uVar69,4);
      fVar55 = (float)uVar69 * (float)uVar59;
      fVar33 = (float)((ulong)uVar69 >> 0x20) * (float)((ulong)uVar59 >> 0x20);
    }
    fVar41 = *(float *)(param_1 + 0x30) - *(float *)(param_2 + 0x30);
    fVar44 = *(float *)(param_1 + 0x34) - *(float *)(param_2 + 0x34);
    fVar45 = *(float *)(param_1 + 0x38) - *(float *)(param_2 + 0x38);
    uVar69 = param_4[10];
    fVar34 = fVar93 * fVar41;
    fVar63 = fVar94 * fVar44;
    fVar66 = fVar105 * fVar45;
    fVar35 = fVar34 + fVar63 + fVar66;
    fVar66 = fVar34 + fVar63 + fVar66;
    fVar90 = *(float *)(param_1 + 0xa0) + *(float *)(param_2 + 0xa0);
    fVar144 = (float)uVar58;
    fVar145 = (float)((ulong)uVar58 >> 0x20);
    pauVar26 = (undefined1 (*) [16])*param_4;
    fVar41 = fVar41 - fVar93 * fVar35;
    fVar44 = fVar44 - fVar94 * fVar66;
    fVar45 = fVar45 - fVar105 * fVar35;
    fVar56 = (*(float *)(param_1 + 0x3c) - *(float *)(param_2 + 0x3c)) - fVar106 * fVar66;
    pauVar24 = (undefined1 (*) [16])*param_7;
    lVar25 = 0;
    fVar95 = fVar41 * fVar41 + fVar44 * fVar44 + fVar45 * fVar45;
    fVar104 = fVar41 * fVar41 + fVar44 * fVar44 + fVar45 * fVar45;
    uVar59 = CONCAT44(fVar104,fVar95);
    fVar68 = (fVar54 - fVar54 * fVar144) - fVar57;
    fVar71 = (fVar116 - fVar116 * fVar145) - fVar61;
    fVar72 = (fVar119 - fVar119 * fVar144) - fVar62;
    fVar29 = fVar95 - fVar90 * fVar90;
    fVar31 = fVar104 - fVar90 * fVar90;
    fVar34 = *(float *)(param_4 + 6);
    fVar35 = *(float *)((long)param_4 + 0x34);
    fVar63 = *(float *)(param_4 + 7);
    fVar66 = *(float *)((long)param_4 + 0x3c);
    fVar67 = *(float *)(param_4 + 8);
    fVar70 = *(float *)((long)param_4 + 0x44);
    fVar84 = *(float *)(param_4 + 9);
    fVar85 = *(float *)((long)param_4 + 0x4c);
    fVar40 = (float)uVar69;
    fVar38 = (float)((ulong)uVar69 >> 0x20);
    fVar87 = (float)param_4[2];
    fVar88 = (float)((ulong)param_4[2] >> 0x20);
    fVar73 = (float)param_4[4];
    fVar74 = (float)((ulong)param_4[4] >> 0x20);
    fVar75 = (float)param_4[5];
    fVar89 = (float)param_4[3];
    if (fVar29 <= 0.0) {
      uVar64 = CONCAT44(-fVar31,-fVar29);
      fVar34 = fVar34 * fVar40;
      fVar35 = fVar35 * fVar38;
      fVar63 = fVar63 * fVar40;
      fVar66 = fVar66 * fVar38;
      uVar69 = NEON_frsqrte(uVar64,4);
      uVar108 = NEON_frecpe(uVar58,4);
      fVar67 = fVar67 * fVar40;
      fVar70 = fVar70 * fVar38;
      fVar84 = fVar84 * fVar40;
      fVar85 = fVar85 * fVar38;
      fVar55 = (float)uVar69;
      fVar54 = (float)((ulong)uVar69 >> 0x20);
      uVar69 = NEON_frecps(uVar58,uVar108,4);
      fVar39 = (float)uVar108 * (float)uVar69;
      fVar61 = (float)((ulong)uVar108 >> 0x20) * (float)((ulong)uVar69 >> 0x20);
      uVar69 = NEON_frsqrts(uVar64,CONCAT44(fVar54 * fVar54,fVar55 * fVar55),4);
      uVar108 = NEON_frsqrte(uVar59,4);
      fVar55 = fVar55 * (float)uVar69;
      fVar54 = fVar54 * (float)((ulong)uVar69 >> 0x20);
      fVar116 = (float)uVar108;
      fVar119 = (float)((ulong)uVar108 >> 0x20);
      uVar69 = NEON_frecps(uVar58,CONCAT44(fVar61,fVar39),4);
      uVar58 = NEON_frsqrts(uVar59,CONCAT44(fVar119 * fVar119,fVar116 * fVar116),4);
      fVar33 = fVar34 * fVar87 + fVar67 * fVar73;
      fVar37 = fVar35 * fVar87 + fVar70 * fVar73;
      fVar93 = fVar63 * fVar87 + fVar84 * fVar73;
      fVar94 = fVar66 * fVar87 + fVar85 * fVar73;
      uVar64 = NEON_frsqrts(uVar64,CONCAT44(fVar54 * fVar54,fVar55 * fVar55),4);
      fVar116 = fVar116 * (float)uVar58;
      fVar119 = fVar119 * (float)((ulong)uVar58 >> 0x20);
      fVar55 = (float)uVar64 * fVar55 * -fVar29;
      fVar54 = (float)((ulong)uVar64 >> 0x20) * fVar54 * -fVar31;
      uVar58 = NEON_frsqrts(uVar59,CONCAT44(fVar119 * fVar119,fVar116 * fVar116),4);
      iVar30 = -(uint)(0.0 <= fVar29);
      iVar32 = -(uint)(0.0 <= fVar31);
      fVar55 = (float)CONCAT13((byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18),
                               CONCAT12((byte)((uint)fVar55 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar55 >> 8) &
                                                  ~(byte)((uint)iVar30 >> 8),
                                                  SUB41(fVar55,0) & ~(byte)iVar30)));
      fVar57 = fVar34 * fVar88 + fVar67 * fVar74;
      fVar62 = fVar35 * fVar88 + fVar70 * fVar74;
      fVar29 = fVar63 * fVar88 + fVar84 * fVar74;
      fVar31 = fVar66 * fVar88 + fVar85 * fVar74;
      fVar116 = (float)uVar58 * fVar116;
      fVar119 = (float)((ulong)uVar58 >> 0x20) * fVar119;
      iVar30 = -(uint)(fVar95 <= 0.0);
      iVar76 = -(uint)(fVar104 <= 0.0);
      fVar34 = fVar34 * fVar89 + fVar67 * fVar75;
      fVar105 = fVar35 * fVar89 + fVar70 * fVar75;
      fVar106 = fVar63 * fVar89 + fVar84 * fVar75;
      fVar35 = fVar66 * fVar89 + fVar85 * fVar75;
      fVar116 = (float)CONCAT13((byte)((uint)fVar116 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18),
                                CONCAT12((byte)((uint)fVar116 >> 0x10) &
                                         ~(byte)((uint)iVar30 >> 0x10),
                                         CONCAT11((byte)((uint)fVar116 >> 8) &
                                                  ~(byte)((uint)iVar30 >> 8),
                                                  SUB41(fVar116,0) & ~(byte)iVar30)));
      fVar39 = (float)*param_6 * fVar55 * fVar39 * (float)uVar69;
      fVar54 = (float)((ulong)*param_6 >> 0x20) *
               (float)(CONCAT17((byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                                CONCAT16((byte)((uint)fVar54 >> 0x10) &
                                         ~(byte)((uint)iVar32 >> 0x10),
                                         CONCAT15((byte)((uint)fVar54 >> 8) &
                                                  ~(byte)((uint)iVar32 >> 8),
                                                  CONCAT14(SUB41(fVar54,0) & ~(byte)iVar32,fVar55)))
                               ) >> 0x20) * fVar61 * (float)((ulong)uVar69 >> 0x20);
      fVar41 = fVar41 * fVar116;
      fVar55 = (float)(CONCAT17((byte)((uint)fVar119 >> 0x18) & ~(byte)((uint)iVar76 >> 0x18),
                                CONCAT16((byte)((uint)fVar119 >> 0x10) &
                                         ~(byte)((uint)iVar76 >> 0x10),
                                         CONCAT15((byte)((uint)fVar119 >> 8) &
                                                  ~(byte)((uint)iVar76 >> 8),
                                                  CONCAT14(SUB41(fVar119,0) & ~(byte)iVar76,fVar116)
                                                 ))) >> 0x20);
      fVar44 = fVar44 * fVar55;
      fVar45 = fVar45 * fVar116;
      param_9[2] = param_9[2] + fVar45 * fVar39;
      param_9[3] = param_9[3] + fVar56 * fVar55 * fVar54;
      *param_9 = *param_9 + fVar41 * fVar39;
      param_9[1] = param_9[1] + fVar44 * fVar54;
      do {
        auVar140 = NEON_fmov(0xbf800000,4);
        auVar101 = *(undefined1 (*) [16])(*pauVar26 + lVar25 + 8);
        lVar25 = lVar25 + 8;
        auVar121._0_8_ = auVar101._7_8_ << 0x38;
        auVar121._9_7_ = auVar101._9_7_;
        auVar121[8] = auVar101[4];
        auVar123._11_5_ = auVar101._11_5_;
        auVar123._0_10_ = auVar121._0_10_;
        auVar123[10] = auVar101[5];
        auVar125._13_3_ = auVar101._13_3_;
        auVar125._0_12_ = auVar123._0_12_;
        auVar125[0xc] = auVar101[6];
        uVar28 = auVar101[7];
        auVar127[0xf] = auVar101[0xf];
        auVar127._0_14_ = auVar125._0_14_;
        auVar127[0xe] = uVar28;
        auVar122._0_9_ = (unkuint9)auVar127._8_8_ << 0x40;
        auVar122._10_6_ = auVar127._10_6_;
        auVar122[9] = 0;
        auVar124._12_4_ = auVar127._12_4_;
        auVar124._0_11_ = auVar122._0_11_;
        auVar124[0xb] = 0;
        auVar126._14_2_ = auVar127._14_2_;
        auVar126._0_13_ = auVar124._0_13_;
        auVar126[0xd] = 0;
        auVar117._0_4_ = fVar72 + fVar144 * fVar34;
        auVar117._4_4_ = fVar72 + fVar145 * fVar105;
        auVar117._8_4_ = fVar72 + fVar144 * fVar106;
        auVar117._12_4_ = fVar72 + fVar145 * fVar35;
        fVar55 = fVar144 * fVar33;
        fVar116 = fVar145 * fVar37;
        fVar34 = fVar144 * fVar93;
        fVar105 = fVar145 * fVar94;
        fVar67 = fVar144 * fVar57;
        fVar70 = fVar145 * fVar62;
        fVar84 = fVar144 * fVar29;
        fVar85 = fVar145 * fVar31;
        auVar129._2_14_ = auVar117._2_14_;
        auVar129._0_2_ = auVar101._0_2_ & 0xff;
        auVar131._6_10_ = auVar117._6_10_;
        auVar131._0_4_ = auVar129._0_4_;
        auVar131[4] = auVar101[1];
        auVar131[5] = 0;
        auVar97._10_6_ = auVar117._10_6_;
        auVar97._0_8_ = auVar131._0_8_;
        auVar97[8] = auVar101[2];
        auVar97[9] = 0;
        auVar99._14_2_ = (undefined2)((uint)auVar117._12_4_ >> 0x10);
        auVar99._0_12_ = auVar97._0_12_;
        auVar99[0xc] = auVar101[3];
        auVar99[0xd] = 0;
        auVar118._4_12_ = auVar99._4_12_;
        auVar118._0_4_ = auVar131._0_4_ & 0xffff;
        auVar96._8_8_ = auVar99._8_8_;
        auVar96._0_6_ = auVar118._0_6_;
        auVar96._6_2_ = 0;
        auVar98._12_4_ = auVar99._12_4_;
        auVar98._0_10_ = auVar96._0_10_;
        auVar98._10_2_ = 0;
        auVar100._0_14_ = auVar98._0_14_;
        auVar100._14_2_ = 0;
        auVar9[1] = 0;
        auVar9[0] = auVar101[4];
        auVar9._2_13_ = auVar126._2_13_;
        auVar10[4] = auVar101[5];
        auVar10._0_4_ = auVar9._0_4_;
        auVar10[5] = 0;
        auVar10._6_9_ = auVar126._6_9_;
        auVar11[8] = auVar101[6];
        auVar11._0_8_ = auVar10._0_8_;
        auVar11[9] = 0;
        auVar11._10_5_ = auVar126._10_5_;
        auVar12[0xc] = uVar28;
        auVar12._0_12_ = auVar11._0_12_;
        auVar12[0xd] = 0;
        auVar12[0xe] = uVar28;
        auVar13._4_11_ = auVar12._4_11_;
        auVar13._0_4_ = auVar9._0_4_;
        auVar14._6_2_ = 0;
        auVar14._0_6_ = auVar13._0_6_;
        auVar14._8_7_ = auVar12._8_7_;
        auVar15._10_2_ = 0;
        auVar15._0_10_ = auVar14._0_10_;
        auVar15._12_3_ = auVar12._12_3_;
        auVar128._0_14_ = auVar15._0_14_;
        auVar128._14_2_ = 0;
        auVar101 = NEON_ucvtf(auVar100,4);
        auVar129 = NEON_ucvtf(auVar128,4);
        fVar54 = fVar40 * (auVar101._0_4_ * 0.007874016 + auVar140._0_4_);
        fVar119 = fVar38 * (auVar101._4_4_ * 0.007874016 + auVar140._4_4_);
        fVar106 = fVar40 * (auVar101._8_4_ * 0.007874016 + auVar140._8_4_);
        fVar35 = fVar38 * (auVar101._12_4_ * 0.007874016 + auVar140._12_4_);
        fVar39 = fVar40 * (auVar129._0_4_ * 0.007874016 + auVar140._0_4_);
        fVar61 = fVar38 * (auVar129._4_4_ * 0.007874016 + auVar140._4_4_);
        fVar63 = fVar40 * (auVar129._8_4_ * 0.007874016 + auVar140._8_4_);
        fVar66 = fVar38 * (auVar129._12_4_ * 0.007874016 + auVar140._12_4_);
        fVar33 = fVar87 * fVar54 + fVar73 * fVar39;
        fVar37 = fVar87 * fVar119 + fVar73 * fVar61;
        fVar93 = fVar87 * fVar106 + fVar73 * fVar63;
        fVar94 = fVar87 * fVar35 + fVar73 * fVar66;
        fVar57 = fVar88 * fVar54 + fVar74 * fVar39;
        fVar62 = fVar88 * fVar119 + fVar74 * fVar61;
        fVar29 = fVar88 * fVar106 + fVar74 * fVar63;
        fVar31 = fVar88 * fVar35 + fVar74 * fVar66;
        auVar140._0_4_ =
             -(uint)(fVar45 * auVar117._0_4_ +
                     fVar44 * (fVar71 + fVar67) + fVar41 * (fVar68 + fVar55) <= 0.0);
        auVar140._4_4_ =
             -(uint)(fVar45 * auVar117._4_4_ +
                     fVar44 * (fVar71 + fVar70) + fVar41 * (fVar68 + fVar116) <= 0.0);
        auVar140._8_4_ =
             -(uint)(fVar45 * auVar117._8_4_ +
                     fVar44 * (fVar71 + fVar84) + fVar41 * (fVar68 + fVar34) <= 0.0);
        auVar140._12_4_ =
             -(uint)(fVar45 * auVar117._12_4_ +
                     fVar44 * (fVar71 + fVar85) + fVar41 * (fVar68 + fVar105) <= 0.0);
        fVar34 = fVar89 * fVar54 + fVar75 * fVar39;
        fVar105 = fVar89 * fVar119 + fVar75 * fVar61;
        fVar106 = fVar89 * fVar106 + fVar75 * fVar63;
        fVar35 = fVar89 * fVar35 + fVar75 * fVar66;
        auVar101[8] = 4;
        auVar101._0_8_ = 0x3c0102043c010204;
        auVar101[9] = 2;
        auVar101[10] = 1;
        auVar101[0xb] = 0x3c;
        auVar101[0xc] = 4;
        auVar101[0xd] = 2;
        auVar101[0xe] = 1;
        auVar101[0xf] = 0x3c;
        auVar101 = *pauVar24 ^ (*pauVar24 ^ auVar101) & auVar140;
        *(long *)(*pauVar24 + 8) = auVar101._8_8_;
        *(long *)*pauVar24 = auVar101._0_8_;
        pauVar24 = pauVar24 + 1;
      } while (lVar25 != 0x100);
      return 1;
    }
    fVar54 = fVar54 - fVar57;
    fVar116 = fVar116 - fVar61;
    fVar119 = fVar119 - fVar62;
    auVar7._4_4_ = fVar44;
    auVar7._0_4_ = fVar41;
    auVar7._8_4_ = fVar45;
    auVar7._12_4_ = fVar56;
    auVar8._4_4_ = fVar44;
    auVar8._0_4_ = fVar41;
    auVar8._8_4_ = fVar45;
    auVar8._12_4_ = fVar56;
    auVar117 = NEON_ext(auVar7,auVar8,4,1);
    fVar144 = fVar144 * fVar40;
    fVar145 = fVar145 * fVar38;
    fVar57 = fVar119 * fVar119 + fVar54 * fVar54 + fVar116 * fVar116;
    fVar61 = fVar119 * fVar119 + fVar54 * fVar54 + fVar116 * fVar116;
    uVar28 = SUB41(fVar61,0);
    uVar79 = (undefined1)((uint)fVar61 >> 8);
    uVar80 = (undefined1)((uint)fVar61 >> 0x10);
    uVar81 = (undefined1)((uint)fVar61 >> 0x18);
    uVar58 = NEON_frsqrte(CONCAT17(uVar81,CONCAT16(uVar80,CONCAT15(uVar79,CONCAT14(uVar28,fVar57))))
                          ,4);
    fVar62 = (float)uVar58;
    fVar95 = (float)((ulong)uVar58 >> 0x20);
    uVar58 = NEON_frsqrts(CONCAT17(uVar81,CONCAT16(uVar80,CONCAT15(uVar79,CONCAT14(uVar28,fVar57))))
                          ,CONCAT44(fVar95 * fVar95,fVar62 * fVar62),4);
    auVar3._12_4_ = fVar106;
    auVar3._0_12_ = *param_3;
    auVar4._12_4_ = fVar106;
    auVar4._0_12_ = *param_3;
    auVar101 = NEON_ext(auVar3,auVar4,4,1);
    fVar62 = fVar62 * (float)uVar58;
    fVar95 = fVar95 * (float)((ulong)uVar58 >> 0x20);
    auVar109._0_4_ = auVar101._0_4_ * fVar41 - fVar93 * auVar117._0_4_;
    auVar109._4_4_ = auVar101._4_4_ * fVar44 - fVar94 * auVar117._4_4_;
    auVar109._8_4_ = fVar93 * fVar45 - fVar105 * fVar41;
    auVar109._12_4_ = fVar94 * fVar56 - fVar106 * fVar44;
    iVar30 = -(uint)(fVar57 <= 0.0);
    iVar32 = -(uint)(fVar61 <= 0.0);
    auVar129 = NEON_ext(auVar109,auVar109,4,1);
    lVar27 = *param_8;
    fVar104 = auVar129._0_4_ * fVar54;
    fVar112 = auVar129._4_4_ * fVar116;
    uVar58 = NEON_frsqrts(CONCAT17(uVar81,CONCAT16(uVar80,CONCAT15(uVar79,CONCAT14(uVar28,fVar57))))
                          ,CONCAT44(fVar95 * fVar95,fVar62 * fVar62),4);
    fVar62 = (float)uVar58 * fVar62;
    fVar95 = (float)((ulong)uVar58 >> 0x20) * fVar95;
    fVar62 = (float)CONCAT13((byte)((uint)fVar62 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18),
                             CONCAT12((byte)((uint)fVar62 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10),
                                      CONCAT11((byte)((uint)fVar62 >> 8) &
                                               ~(byte)((uint)iVar30 >> 8),
                                               SUB41(fVar62,0) & ~(byte)iVar30)));
    iVar76 = -(uint)(fVar40 == 0.0);
    iVar120 = -(uint)(fVar38 == 0.0);
    auVar77._0_4_ = fVar54 * fVar62;
    fVar56 = (float)(CONCAT17((byte)((uint)fVar95 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                              CONCAT16((byte)((uint)fVar95 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10),
                                       CONCAT15((byte)((uint)fVar95 >> 8) &
                                                ~(byte)((uint)iVar32 >> 8),
                                                CONCAT14(SUB41(fVar95,0) & ~(byte)iVar32,fVar62))))
                    >> 0x20);
    auVar77._4_4_ = fVar116 * fVar56;
    auVar77._8_4_ = fVar119 * fVar62;
    auVar77._12_4_ =
         (((float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20) - fVar106 * fVar39) -
         (((float)((ulong)*(undefined8 *)(param_2 + 0x48) >> 0x20) -
          ((float)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20) -
          (float)((ulong)*(undefined8 *)(param_2 + 0x58) >> 0x20))) - fVar106 * fVar37)) * fVar56;
    fVar37 = fVar45 * fVar119 + fVar41 * fVar54 + fVar44 * fVar116;
    fVar54 = fVar45 * fVar119 + fVar41 * fVar54 + fVar44 * fVar116;
    uVar59 = CONCAT44(fVar54,fVar37);
    uVar58 = NEON_frecpe(uVar59,4);
    uVar59 = NEON_frecps(uVar59,uVar58,4);
    iVar30 = -(uint)(fVar37 == 0.0);
    iVar32 = -(uint)(fVar54 == 0.0);
    auVar138._8_4_ = 0x80000000;
    auVar138._0_8_ = 0x8000000080000000;
    auVar138._12_4_ = 0x80000000;
    auVar117 = NEON_ext(auVar77,auVar77,4,1);
    fVar54 = (float)((ulong)uVar58 >> 0x20) * (float)((ulong)uVar59 >> 0x20);
    uVar108 = NEON_frecpe(uVar69,4);
    uVar65 = CONCAT17((char)((uint)fVar54 >> 0x18),
                      CONCAT16((char)((uint)fVar54 >> 0x10),
                               CONCAT15((char)((uint)fVar54 >> 8),
                                        CONCAT14(SUB41(fVar54,0),(float)uVar58 * (float)uVar59)))) &
             CONCAT17(~(byte)((uint)iVar32 >> 0x18),
                      CONCAT16(~(byte)((uint)iVar32 >> 0x10),
                               CONCAT15(~(byte)((uint)iVar32 >> 8),
                                        CONCAT14(~(byte)iVar32,
                                                 CONCAT13(~(byte)((uint)iVar30 >> 0x18),
                                                          CONCAT12(~(byte)((uint)iVar30 >> 0x10),
                                                                   CONCAT11(~(byte)((uint)iVar30 >>
                                                                                   8),~(byte)iVar30)
                                                                  ))))));
    bVar83 = (byte)(-(uint)(auVar109._0_4_ * fVar119 + fVar104 + fVar112 < 0.0) >> 0x18);
    fVar54 = fVar93 * auVar117._0_4_ - auVar101._0_4_ * auVar77._0_4_;
    fVar116 = fVar94 * auVar117._4_4_ - auVar101._4_4_ * auVar77._4_4_;
    fVar37 = fVar105 * auVar77._0_4_ - fVar93 * auVar77._8_4_;
    fVar93 = fVar106 * auVar77._4_4_ - fVar94 * auVar77._12_4_;
    bVar78 = bVar83 & 0x80 ^ auVar129[3];
    bVar82 = (byte)(-(uint)(auVar109._0_4_ * fVar119 + fVar104 + fVar112 < 0.0) >> 0x18) & 0x80 ^
             auVar129[7];
    bVar83 = bVar83 & 0x80 ^ (byte)((uint)auVar109._0_4_ >> 0x18);
    auVar5._4_4_ = fVar116;
    auVar5._0_4_ = fVar54;
    auVar5._8_4_ = fVar37;
    auVar5._12_4_ = fVar93;
    auVar6._4_4_ = fVar116;
    auVar6._0_4_ = fVar54;
    auVar6._8_4_ = fVar37;
    auVar6._12_4_ = fVar93;
    auVar101 = NEON_ext(auVar5,auVar6,4,1);
    fVar93 = fVar68 * (float)CONCAT13(bVar78,auVar129._0_3_);
    fVar94 = fVar71 * (float)CONCAT13(bVar82,auVar129._4_3_);
    fVar105 = fVar72 * (float)CONCAT13(bVar83,SUB43(auVar109._0_4_,0));
    fVar116 = fVar41 * auVar101._0_4_;
    fVar119 = fVar44 * auVar101._4_4_;
    fVar37 = fVar40 * (float)CONCAT13(bVar78,auVar129._0_3_);
    fVar38 = fVar38 * (float)CONCAT13(bVar82,auVar129._4_3_);
    fVar40 = fVar40 * (float)CONCAT13(bVar83,SUB43(auVar109._0_4_,0));
    uVar58 = NEON_fmax(CONCAT44(ABS(fVar116 + fVar119 + fVar45 * fVar54),
                                ABS(fVar116 + fVar119 + fVar45 * fVar54)),CONCAT44(fVar90,fVar90),4)
    ;
    uVar59 = NEON_frecpe(uVar58,4);
    uVar64 = NEON_frecps(uVar58,uVar59,4);
    uVar36 = CONCAT44(-(fVar33 * (fVar105 + fVar93 + fVar94)),
                      -(fVar55 * (fVar105 + fVar93 + fVar94)));
    fVar54 = (float)uVar59 * (float)uVar64;
    fVar116 = (float)((ulong)uVar59 >> 0x20) * (float)((ulong)uVar64 >> 0x20);
    uVar58 = NEON_frecps(uVar58,CONCAT44(fVar116,fVar54),4);
    uVar69 = NEON_frecps(uVar69,uVar108,4);
    fVar56 = fVar87 * fVar37;
    fVar95 = fVar88 * fVar38;
    fVar62 = fVar89 * fVar40;
    uVar60 = CONCAT44((float)((ulong)uVar108 >> 0x20) * (float)((ulong)uVar69 >> 0x20),
                      (float)uVar108 * (float)uVar69) &
             CONCAT17(~(byte)((uint)iVar120 >> 0x18),
                      CONCAT16(~(byte)((uint)iVar120 >> 0x10),
                               CONCAT15(~(byte)((uint)iVar120 >> 8),
                                        CONCAT14(~(byte)iVar120,
                                                 CONCAT13(~(byte)((uint)iVar76 >> 0x18),
                                                          CONCAT12(~(byte)((uint)iVar76 >> 0x10),
                                                                   CONCAT11(~(byte)((uint)iVar76 >>
                                                                                   8),~(byte)iVar76)
                                                                  ))))));
    fVar37 = fVar73 * fVar37;
    fVar38 = fVar74 * fVar38;
    fVar40 = fVar75 * fVar40;
    fVar54 = fVar90 * fVar57 * (float)*param_5 * (float)uVar65 * fVar54 * (float)uVar58;
    fVar90 = fVar90 * fVar61 * (float)((ulong)*param_5 >> 0x20) * (float)(uVar65 >> 0x20) *
                      fVar116 * (float)((ulong)uVar58 >> 0x20);
    fVar55 = fVar55 * (float)uVar60;
    fVar33 = fVar33 * (float)(uVar60 >> 0x20);
    uVar36 = uVar36 ^ (uVar36 ^ 0xff7fffeeff7fffee) &
                      CONCAT44(-(uint)(0.0 <= fVar90),-(uint)(0.0 <= fVar54));
    fVar116 = fVar55 * (fVar89 * fVar72 + fVar87 * fVar68 + fVar88 * fVar71);
    fVar119 = fVar33 * (fVar89 * fVar72 + fVar87 * fVar68 + fVar88 * fVar71);
    fVar55 = fVar55 * (fVar75 * fVar72 + fVar73 * fVar68 + fVar74 * fVar71);
    fVar33 = fVar33 * (fVar75 * fVar72 + fVar73 * fVar68 + fVar74 * fVar71);
    fVar93 = fVar144 * (fVar45 * fVar89 + fVar41 * fVar87 + fVar44 * fVar88);
    fVar94 = fVar145 * (fVar45 * fVar89 + fVar41 * fVar87 + fVar44 * fVar88);
    fVar105 = fVar144 * (fVar45 * fVar75 + fVar41 * fVar73 + fVar44 * fVar74);
    fVar106 = fVar145 * (fVar45 * fVar75 + fVar41 * fVar73 + fVar44 * fVar74);
    fVar39 = fVar62 + fVar56 + fVar95;
    fVar62 = fVar62 + fVar56 + fVar95;
    fVar57 = fVar40 + fVar37 + fVar38;
    fVar40 = fVar40 + fVar37 + fVar38;
    do {
      pauVar26 = (undefined1 (*) [16])(*pauVar26 + 8);
      fVar37 = fVar55 + fVar67;
      fVar61 = fVar33 + fVar70;
      fVar38 = fVar55 + fVar84;
      fVar41 = fVar33 + fVar85;
      fVar44 = fVar116 + fVar34;
      fVar45 = fVar119 + fVar35;
      fVar68 = fVar116 + fVar63;
      fVar71 = fVar119 + fVar66;
      fVar56 = fVar105 * fVar37 + fVar93 * fVar44;
      fVar87 = fVar106 * fVar61 + fVar94 * fVar45;
      fVar88 = fVar105 * fVar38 + fVar93 * fVar68;
      fVar89 = fVar106 * fVar41 + fVar94 * fVar71;
      auVar102._0_4_ = fVar144 * fVar144 * (fVar37 * fVar37 + fVar44 * fVar44);
      auVar102._4_4_ = fVar145 * fVar145 * (fVar61 * fVar61 + fVar45 * fVar45);
      auVar102._8_4_ = fVar144 * fVar144 * (fVar38 * fVar38 + fVar68 * fVar68);
      auVar102._12_4_ = fVar145 * fVar145 * (fVar41 * fVar41 + fVar71 * fVar71);
      auVar91._0_4_ = fVar56 * fVar56 - fVar29 * auVar102._0_4_;
      auVar91._4_4_ = fVar87 * fVar87 - fVar31 * auVar102._4_4_;
      auVar91._8_4_ = fVar88 * fVar88 - fVar29 * auVar102._8_4_;
      auVar91._12_4_ = fVar89 * fVar89 - fVar31 * auVar102._12_4_;
      pfVar1 = (float *)(lVar27 + lVar25);
      fVar37 = *pfVar1;
      fVar61 = pfVar1[1];
      fVar38 = pfVar1[2];
      fVar41 = pfVar1[3];
      fVar44 = (float)uVar36;
      fVar45 = (float)(uVar36 >> 0x20);
      auVar101 = *(undefined1 (*) [16])(*pauVar24 + lVar25);
      auVar118 = NEON_frecpe(auVar102,4);
      iVar139 = -(uint)(auVar91._0_4_ <= 0.0);
      iVar141 = -(uint)(auVar91._4_4_ <= 0.0);
      iVar142 = -(uint)(auVar91._8_4_ <= 0.0);
      iVar143 = -(uint)(auVar91._12_4_ <= 0.0);
      iVar30 = -(uint)(0.0 <= auVar91._0_4_);
      iVar32 = -(uint)(0.0 <= auVar91._4_4_);
      iVar76 = -(uint)(0.0 <= auVar91._8_4_);
      iVar120 = -(uint)(0.0 <= auVar91._12_4_);
      iVar107 = -(uint)(auVar102._0_4_ == 0.0);
      iVar113 = -(uint)(auVar102._4_4_ == 0.0);
      iVar114 = -(uint)(auVar102._8_4_ == 0.0);
      iVar115 = -(uint)(auVar102._12_4_ == 0.0);
      auVar110[0] = ~(byte)iVar107;
      auVar110[1] = ~(byte)((uint)iVar107 >> 8);
      auVar110[2] = ~(byte)((uint)iVar107 >> 0x10);
      auVar110[3] = ~(byte)((uint)iVar107 >> 0x18);
      auVar110[4] = ~(byte)iVar113;
      auVar110[5] = ~(byte)((uint)iVar113 >> 8);
      auVar110[6] = ~(byte)((uint)iVar113 >> 0x10);
      auVar110[7] = ~(byte)((uint)iVar113 >> 0x18);
      auVar110[8] = ~(byte)iVar114;
      auVar110[9] = ~(byte)((uint)iVar114 >> 8);
      auVar110[10] = ~(byte)((uint)iVar114 >> 0x10);
      auVar110[0xb] = ~(byte)((uint)iVar114 >> 0x18);
      auVar110[0xc] = ~(byte)iVar115;
      auVar110[0xd] = ~(byte)((uint)iVar115 >> 8);
      auVar110[0xe] = ~(byte)((uint)iVar115 >> 0x10);
      auVar110[0xf] = ~(byte)((uint)iVar115 >> 0x18);
      puVar2 = (uint *)(lVar27 + lVar25);
      puVar2[2] = (uint)fVar38 ^
                  ((uint)fVar38 ^ (uint)(fVar54 + fVar38)) &
                  -(uint)(fVar57 * fVar84 + fVar39 * fVar63 < fVar44);
      puVar2[3] = (uint)fVar41 ^
                  ((uint)fVar41 ^ (uint)(fVar90 + fVar41)) &
                  -(uint)(fVar40 * fVar85 + fVar62 * fVar66 < fVar45);
      *puVar2 = (uint)fVar37 ^
                ((uint)fVar37 ^ (uint)(fVar54 + fVar37)) &
                -(uint)(fVar57 * fVar67 + fVar39 * fVar34 < fVar44);
      puVar2[1] = (uint)fVar61 ^
                  ((uint)fVar61 ^ (uint)(fVar90 + fVar61)) &
                  -(uint)(fVar40 * fVar70 + fVar62 * fVar35 < fVar45);
      auVar117 = NEON_frsqrte(auVar91,4);
      auVar129 = NEON_frecps(auVar102,auVar118,4);
      fVar34 = auVar117._0_4_;
      auVar130._0_4_ = fVar34 * fVar34;
      fVar37 = auVar117._4_4_;
      auVar130._4_4_ = fVar37 * fVar37;
      fVar35 = auVar117._8_4_;
      auVar130._8_4_ = fVar35 * fVar35;
      fVar61 = auVar117._12_4_;
      auVar130._12_4_ = fVar61 * fVar61;
      auVar117 = *pauVar26;
      auVar131 = NEON_frsqrts(auVar91,auVar130,4);
      auVar46._0_8_ = auVar117._7_8_ << 0x38;
      auVar46._9_7_ = auVar117._9_7_;
      auVar46[8] = auVar117[4];
      auVar48._11_5_ = auVar117._11_5_;
      auVar48._0_10_ = auVar46._0_10_;
      auVar48[10] = auVar117[5];
      auVar50._13_3_ = auVar117._13_3_;
      auVar50._0_12_ = auVar48._0_12_;
      auVar50[0xc] = auVar117[6];
      uVar28 = auVar117[7];
      auVar52[0xf] = auVar117[0xf];
      auVar52._0_14_ = auVar50._0_14_;
      auVar52[0xe] = uVar28;
      auVar47._0_9_ = (unkuint9)auVar52._8_8_ << 0x40;
      auVar47._10_6_ = auVar52._10_6_;
      auVar47[9] = 0;
      auVar49._12_4_ = auVar52._12_4_;
      auVar49._0_11_ = auVar47._0_11_;
      auVar49[0xb] = 0;
      auVar51._14_2_ = auVar52._14_2_;
      auVar51._0_13_ = auVar49._0_13_;
      auVar51[0xd] = 0;
      auVar103._0_4_ = auVar118._0_4_ * auVar129._0_4_;
      auVar103._4_4_ = auVar118._4_4_ * auVar129._4_4_;
      auVar103._8_4_ = auVar118._8_4_ * auVar129._8_4_;
      auVar103._12_4_ = auVar118._12_4_ * auVar129._12_4_;
      auVar16[1] = 0;
      auVar16[0] = auVar117[1];
      auVar16._2_10_ = auVar138._6_10_;
      auVar134._0_8_ = auVar16._0_8_ << 0x20;
      auVar134._10_6_ = auVar138._10_6_;
      auVar134[8] = auVar117[2];
      auVar134[9] = 0;
      auVar136._14_2_ = auVar138._14_2_;
      auVar136._0_12_ = auVar134._0_12_;
      auVar136[0xc] = auVar117[3];
      auVar136[0xd] = 0;
      auVar132._4_12_ = auVar136._4_12_;
      auVar132._1_3_ = 0;
      auVar132[0] = auVar117[0];
      auVar133._8_8_ = auVar136._8_8_;
      auVar133._0_6_ = auVar132._0_6_;
      auVar133._6_2_ = 0;
      auVar135._12_4_ = auVar136._12_4_;
      auVar135._0_10_ = auVar133._0_10_;
      auVar135._10_2_ = 0;
      auVar137._0_14_ = auVar135._0_14_;
      auVar137._14_2_ = 0;
      auVar17[1] = 0;
      auVar17[0] = auVar117[4];
      auVar17._2_13_ = auVar51._2_13_;
      auVar18[4] = auVar117[5];
      auVar18._0_4_ = auVar17._0_4_;
      auVar18[5] = 0;
      auVar18._6_9_ = auVar51._6_9_;
      auVar19[8] = auVar117[6];
      auVar19._0_8_ = auVar18._0_8_;
      auVar19[9] = 0;
      auVar19._10_5_ = auVar51._10_5_;
      auVar20[0xc] = uVar28;
      auVar20._0_12_ = auVar19._0_12_;
      auVar20[0xd] = 0;
      auVar20[0xe] = uVar28;
      auVar21._4_11_ = auVar20._4_11_;
      auVar21._0_4_ = auVar17._0_4_;
      auVar22._6_2_ = 0;
      auVar22._0_6_ = auVar21._0_6_;
      auVar22._8_7_ = auVar20._8_7_;
      auVar23._10_2_ = 0;
      auVar23._0_10_ = auVar22._0_10_;
      auVar23._12_3_ = auVar20._12_3_;
      auVar53._0_14_ = auVar23._0_14_;
      auVar53._14_2_ = 0;
      auVar138 = NEON_ucvtf(auVar137,4);
      auVar117 = NEON_ucvtf(auVar53,4);
      fVar34 = auVar91._0_4_ * fVar34 * auVar131._0_4_;
      fVar37 = auVar91._4_4_ * fVar37 * auVar131._4_4_;
      fVar35 = auVar91._8_4_ * fVar35 * auVar131._8_4_;
      fVar61 = auVar91._12_4_ * fVar61 * auVar131._12_4_;
      fVar34 = (float)CONCAT13((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar139 >> 0x18),
                               CONCAT12((byte)((uint)fVar34 >> 0x10) &
                                        ~(byte)((uint)iVar139 >> 0x10),
                                        CONCAT11((byte)((uint)fVar34 >> 8) &
                                                 ~(byte)((uint)iVar139 >> 8),
                                                 SUB41(fVar34,0) & ~(byte)iVar139)));
      auVar42._0_8_ =
           CONCAT17((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar141 >> 0x18),
                    CONCAT16((byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar141 >> 0x10),
                             CONCAT15((byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar141 >> 8),
                                      CONCAT14(SUB41(fVar37,0) & ~(byte)iVar141,fVar34))));
      auVar42[8] = SUB41(fVar35,0) & ~(byte)iVar142;
      auVar42[9] = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar142 >> 8);
      auVar42[10] = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar142 >> 0x10);
      auVar42[0xb] = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar142 >> 0x18);
      auVar43[0xc] = SUB41(fVar61,0) & ~(byte)iVar143;
      auVar43._0_12_ = auVar42;
      auVar43[0xd] = (byte)((uint)fVar61 >> 8) & ~(byte)((uint)iVar143 >> 8);
      auVar43[0xe] = (byte)((uint)fVar61 >> 0x10) & ~(byte)((uint)iVar143 >> 0x10);
      auVar43[0xf] = (byte)((uint)fVar61 >> 0x18) & ~(byte)((uint)iVar143 >> 0x18);
      auVar111._8_4_ = 0x7f7fffee;
      auVar111._0_8_ = 0x7f7fffee7f7fffee;
      auVar111._12_4_ = 0x7f7fffee;
      fVar34 = -fVar56 - fVar34;
      fVar37 = -fVar87 - (float)((ulong)auVar42._0_8_ >> 0x20);
      fVar35 = -fVar88 - auVar42._8_4_;
      fVar61 = -fVar89 - auVar43._12_4_;
      auVar111 = auVar111 ^ (auVar111 ^ auVar103) & auVar110;
      auVar86._0_4_ = fVar34 * auVar111._0_4_;
      auVar86._4_4_ = fVar37 * auVar111._4_4_;
      auVar86._8_4_ = fVar35 * auVar111._8_4_;
      auVar86._12_4_ = fVar61 * auVar111._12_4_;
      iVar107 = -(uint)(0.0 < fVar34);
      iVar113 = -(uint)(0.0 < fVar37);
      iVar114 = -(uint)(0.0 < fVar35);
      iVar115 = -(uint)(0.0 < fVar61);
      iVar139 = -(uint)(auVar86._0_4_ < auVar101._0_4_);
      iVar141 = -(uint)(auVar86._4_4_ < auVar101._4_4_);
      iVar142 = -(uint)(auVar86._8_4_ < auVar101._8_4_);
      iVar143 = -(uint)(auVar86._12_4_ < auVar101._12_4_);
      auVar92[0] = (byte)iVar107 & (byte)iVar30 & (byte)iVar139;
      auVar92[1] = (byte)((uint)iVar107 >> 8) & (byte)((uint)iVar30 >> 8) &
                   (byte)((uint)iVar139 >> 8);
      auVar92[2] = (byte)((uint)iVar107 >> 0x10) & (byte)((uint)iVar30 >> 0x10) &
                   (byte)((uint)iVar139 >> 0x10);
      auVar92[3] = (byte)((uint)iVar107 >> 0x18) & (byte)((uint)iVar30 >> 0x18) &
                   (byte)((uint)iVar139 >> 0x18);
      auVar92[4] = (byte)iVar113 & (byte)iVar32 & (byte)iVar141;
      auVar92[5] = (byte)((uint)iVar113 >> 8) & (byte)((uint)iVar32 >> 8) &
                   (byte)((uint)iVar141 >> 8);
      auVar92[6] = (byte)((uint)iVar113 >> 0x10) & (byte)((uint)iVar32 >> 0x10) &
                   (byte)((uint)iVar141 >> 0x10);
      auVar92[7] = (byte)((uint)iVar113 >> 0x18) & (byte)((uint)iVar32 >> 0x18) &
                   (byte)((uint)iVar141 >> 0x18);
      auVar92[8] = (byte)iVar114 & (byte)iVar76 & (byte)iVar142;
      auVar92[9] = (byte)((uint)iVar114 >> 8) & (byte)((uint)iVar76 >> 8) &
                   (byte)((uint)iVar142 >> 8);
      auVar92[10] = (byte)((uint)iVar114 >> 0x10) & (byte)((uint)iVar76 >> 0x10) &
                    (byte)((uint)iVar142 >> 0x10);
      auVar92[0xb] = (byte)((uint)iVar114 >> 0x18) & (byte)((uint)iVar76 >> 0x18) &
                     (byte)((uint)iVar142 >> 0x18);
      auVar92[0xc] = (byte)iVar115 & (byte)iVar120 & (byte)iVar143;
      auVar92[0xd] = (byte)((uint)iVar115 >> 8) & (byte)((uint)iVar120 >> 8) &
                     (byte)((uint)iVar143 >> 8);
      auVar92[0xe] = (byte)((uint)iVar115 >> 0x10) & (byte)((uint)iVar120 >> 0x10) &
                     (byte)((uint)iVar143 >> 0x10);
      auVar92[0xf] = (byte)((uint)iVar115 >> 0x18) & (byte)((uint)iVar120 >> 0x18) &
                     (byte)((uint)iVar143 >> 0x18);
      auVar101 = auVar101 ^ (auVar101 ^ auVar86) & auVar92;
      auVar129 = NEON_fmov(0xbf800000,4);
      fVar34 = auVar138._0_4_ * 0.007874016 + auVar129._0_4_;
      fVar35 = auVar138._4_4_ * 0.007874016 + auVar129._4_4_;
      fVar63 = auVar138._8_4_ * 0.007874016 + auVar129._8_4_;
      fVar66 = auVar138._12_4_ * 0.007874016 + auVar129._12_4_;
      fVar67 = auVar117._0_4_ * 0.007874016 + auVar129._0_4_;
      fVar70 = auVar117._4_4_ * 0.007874016 + auVar129._4_4_;
      fVar84 = auVar117._8_4_ * 0.007874016 + auVar129._8_4_;
      fVar85 = auVar117._12_4_ * 0.007874016 + auVar129._12_4_;
      *(long *)((long)(*pauVar24 + lVar25) + 8) = auVar101._8_8_;
      *(long *)(*pauVar24 + lVar25) = auVar101._0_8_;
      lVar25 = lVar25 + 0x10;
    } while (lVar25 != 0x200);
  }
  return 0;
}


