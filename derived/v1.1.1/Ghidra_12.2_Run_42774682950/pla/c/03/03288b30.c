/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03288b30; name: FUN_03288b30
 */


bool FUN_03288b30(undefined8 *param_1,undefined1 (*param_2) [16],undefined8 *param_3,ulong *param_4,
                 long *param_5,undefined8 *param_6,undefined8 param_7,undefined8 *param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [12];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 (*pauVar24) [16];
  long lVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar43 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  undefined1 uVar73;
  byte bVar74;
  undefined1 uVar75;
  byte bVar76;
  undefined1 uVar77;
  byte bVar78;
  uint uVar79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar85 [16];
  undefined1 auVar84 [16];
  undefined1 auVar83 [16];
  undefined1 auVar82 [16];
  undefined8 uVar86;
  undefined1 auVar87 [16];
  undefined1 auVar93 [16];
  undefined1 auVar92 [16];
  undefined1 auVar91 [16];
  undefined1 auVar90 [16];
  undefined1 auVar89 [16];
  undefined1 auVar88 [16];
  int iVar94;
  undefined8 uVar95;
  int iVar98;
  float fVar99;
  int iVar100;
  int iVar101;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined8 uVar102;
  undefined1 auVar109 [16];
  undefined1 auVar108 [16];
  undefined1 auVar107 [16];
  undefined1 auVar106 [16];
  undefined1 auVar105 [16];
  undefined1 auVar104 [16];
  undefined1 auVar103 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 in_q23 [16];
  undefined1 auVar119 [16];
  undefined1 auVar118 [16];
  undefined1 auVar117 [16];
  undefined1 auVar116 [16];
  undefined1 auVar115 [16];
  undefined1 auVar114 [16];
  undefined1 auVar120 [16];
  int iVar121;
  int iVar122;
  int iVar123;
  int iVar124;
  int iVar125;
  int iVar126;
  int iVar127;
  int iVar128;
  undefined1 auVar129 [16];
  
  auVar97 = *param_2;
  pauVar24 = (undefined1 (*) [16])*param_6;
  fVar65 = (float)*param_1 - auVar97._0_4_;
  fVar66 = (float)((ulong)*param_1 >> 0x20) - auVar97._4_4_;
  fVar67 = (float)param_1[1] - auVar97._8_4_;
  auVar43 = NEON_ext(auVar97,auVar97,8,1);
  fVar36 = (float)param_5[2];
  fVar28 = fVar36 * fVar65;
  fVar37 = (float)((ulong)param_5[2] >> 0x20);
  fVar30 = fVar37 * fVar66;
  fVar31 = (float)param_5[3] * fVar67;
  fVar39 = (float)param_5[4];
  fVar32 = fVar65 * fVar39;
  fVar41 = (float)((ulong)param_5[4] >> 0x20);
  fVar34 = fVar66 * fVar41;
  fVar35 = fVar67 * (float)param_5[5];
  fVar29 = fVar28 + fVar30 + fVar31;
  fVar31 = fVar28 + fVar30 + fVar31;
  fVar33 = fVar32 + fVar34 + fVar35;
  fVar35 = fVar32 + fVar34 + fVar35;
  fVar30 = fVar67 * fVar67 + fVar65 * fVar65 + fVar66 * fVar66;
  fVar32 = fVar67 * fVar67 + fVar65 * fVar65 + fVar66 * fVar66;
  uVar27 = SUB41(fVar32,0);
  uVar73 = (undefined1)((uint)fVar32 >> 8);
  uVar75 = (undefined1)((uint)fVar32 >> 0x10);
  uVar77 = (undefined1)((uint)fVar32 >> 0x18);
  fVar28 = (float)*param_3;
  fVar36 = fVar36 * fVar28;
  fVar34 = (float)((ulong)*param_3 >> 0x20);
  fVar37 = fVar37 * fVar34;
  fVar38 = (float)param_5[3] * (float)param_3[1];
  fVar39 = fVar39 * fVar28;
  fVar41 = fVar41 * fVar34;
  fVar42 = (float)param_5[5] * (float)param_3[1];
  fVar34 = fVar36 + fVar37 + fVar38;
  fVar38 = fVar36 + fVar37 + fVar38;
  fVar40 = fVar39 + fVar41 + fVar42;
  fVar42 = fVar39 + fVar41 + fVar42;
  fVar41 = auVar43._4_4_ * auVar43._4_4_;
  fVar39 = fVar30 - fVar41;
  fVar41 = fVar32 - fVar41;
  fVar36 = (float)param_5[10];
  fVar37 = (float)((ulong)param_5[10] >> 0x20);
  fVar44 = fVar36 * (float)param_5[6] - fVar34;
  fVar45 = fVar37 * (float)((ulong)param_5[6] >> 0x20) - fVar38;
  fVar46 = fVar36 * (float)param_5[7] - fVar34;
  fVar48 = fVar37 * (float)((ulong)param_5[7] >> 0x20) - fVar38;
  fVar28 = fVar36 * *(float *)(param_5 + 8) - fVar40;
  uVar26 = SUB41(fVar28,0);
  uVar50 = (undefined1)((uint)fVar28 >> 8);
  uVar51 = (undefined1)((uint)fVar28 >> 0x10);
  uVar52 = (undefined1)((uint)fVar28 >> 0x18);
  fVar28 = fVar37 * *(float *)((long)param_5 + 0x44) - fVar42;
  uVar53 = SUB41(fVar28,0);
  uVar54 = (undefined1)((uint)fVar28 >> 8);
  uVar55 = (undefined1)((uint)fVar28 >> 0x10);
  uVar56 = (undefined1)((uint)fVar28 >> 0x18);
  fVar28 = fVar36 * *(float *)(param_5 + 9) - fVar40;
  uVar57 = SUB41(fVar28,0);
  uVar58 = (undefined1)((uint)fVar28 >> 8);
  uVar59 = (undefined1)((uint)fVar28 >> 0x10);
  uVar60 = (undefined1)((uint)fVar28 >> 0x18);
  fVar28 = fVar37 * *(float *)((long)param_5 + 0x4c) - fVar42;
  uVar61 = SUB41(fVar28,0);
  uVar62 = (undefined1)((uint)fVar28 >> 8);
  uVar63 = (undefined1)((uint)fVar28 >> 0x10);
  uVar64 = (undefined1)((uint)fVar28 >> 0x18);
  if (fVar39 < 0.0) {
    uVar95 = NEON_frsqrte(CONCAT17(uVar77,CONCAT16(uVar75,CONCAT15(uVar73,CONCAT14(uVar27,fVar30))))
                          ,4);
    fVar49 = (float)uVar95;
    fVar99 = (float)((ulong)uVar95 >> 0x20);
    lVar25 = 8;
    uVar102 = NEON_frsqrts(CONCAT17(uVar77,CONCAT16(uVar75,CONCAT15(uVar73,CONCAT14(uVar27,fVar30)))
                                   ),CONCAT44(fVar99 * fVar99,fVar49 * fVar49),4);
    uVar95 = CONCAT44(-fVar41,-fVar39);
    uVar86 = NEON_frsqrte(uVar95,4);
    fVar49 = fVar49 * (float)uVar102;
    fVar99 = fVar99 * (float)((ulong)uVar102 >> 0x20);
    fVar28 = (float)uVar86;
    fVar47 = (float)((ulong)uVar86 >> 0x20);
    uVar86 = NEON_frsqrts(uVar95,CONCAT44(fVar47 * fVar47,fVar28 * fVar28),4);
    fVar28 = fVar28 * (float)uVar86;
    fVar47 = fVar47 * (float)((ulong)uVar86 >> 0x20);
    uVar95 = NEON_frsqrts(uVar95,CONCAT44(fVar47 * fVar47,fVar28 * fVar28),4);
    uVar86 = NEON_frsqrts(CONCAT17(uVar77,CONCAT16(uVar75,CONCAT15(uVar73,CONCAT14(uVar27,fVar30))))
                          ,CONCAT44(fVar99 * fVar99,fVar49 * fVar49),4);
    iVar94 = -(uint)(fVar30 <= 0.0);
    iVar98 = -(uint)(fVar32 <= 0.0);
    fVar49 = (float)uVar86 * fVar49;
    fVar99 = (float)((ulong)uVar86 >> 0x20) * fVar99;
    auVar111 = NEON_fmov(0xbf800000,4);
    bVar68 = SUB41(fVar49,0) & ~(byte)iVar94;
    bVar69 = (byte)((uint)fVar49 >> 8) & ~(byte)((uint)iVar94 >> 8);
    bVar70 = (byte)((uint)fVar49 >> 0x10) & ~(byte)((uint)iVar94 >> 0x10);
    bVar71 = (byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar94 >> 0x18);
    bVar72 = SUB41(fVar99,0) & ~(byte)iVar98;
    bVar74 = (byte)((uint)fVar99 >> 8) & ~(byte)((uint)iVar98 >> 8);
    bVar76 = (byte)((uint)fVar99 >> 0x10) & ~(byte)((uint)iVar98 >> 0x10);
    bVar78 = (byte)((uint)fVar99 >> 0x18) & ~(byte)((uint)iVar98 >> 0x18);
    iVar94 = -(uint)(0.0 <= fVar39);
    iVar98 = -(uint)(0.0 <= fVar41);
    fVar28 = (float)uVar95 * fVar28 * -fVar39;
    fVar41 = (float)((ulong)uVar95 >> 0x20) * fVar47 * -fVar41;
    auVar43._0_8_ = *param_4;
    auVar43._8_8_ = 0;
    fVar30 = (float)CONCAT13((byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar94 >> 0x18),
                             CONCAT12((byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar94 >> 0x10),
                                      CONCAT11((byte)((uint)fVar28 >> 8) &
                                               ~(byte)((uint)iVar94 >> 8),
                                               SUB41(fVar28,0) & ~(byte)iVar94)));
    fVar28 = (float)CONCAT13(bVar71,CONCAT12(bVar70,CONCAT11(bVar69,bVar68)));
    fVar32 = (float)auVar43._0_8_ * fVar30;
    fVar30 = (float)(auVar43._0_8_ >> 0x20) *
             (float)(CONCAT17((byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar98 >> 0x18),
                              CONCAT16((byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar98 >> 0x10),
                                       CONCAT15((byte)((uint)fVar41 >> 8) &
                                                ~(byte)((uint)iVar98 >> 8),
                                                CONCAT14(SUB41(fVar41,0) & ~(byte)iVar98,fVar30))))
                    >> 0x20);
    param_8[1] = CONCAT44((float)((ulong)param_8[1] >> 0x20) +
                          ((float)((ulong)param_1[1] >> 0x20) - auVar97._12_4_) *
                          (float)(CONCAT17(bVar78,CONCAT16(bVar76,CONCAT15(bVar74,CONCAT14(bVar72,
                                                  fVar28)))) >> 0x20) * fVar30,
                          (float)param_8[1] + fVar67 * fVar28 * fVar32);
    *param_8 = CONCAT44((float)((ulong)*param_8 >> 0x20) +
                        fVar66 * (float)CONCAT13(bVar78,CONCAT12(bVar76,CONCAT11(bVar74,bVar72))) *
                        fVar30,(float)*param_8 +
                               fVar65 * (float)CONCAT13(bVar71,CONCAT12(bVar70,CONCAT11(bVar69,
                                                  bVar68))) * fVar32);
    do {
      uVar79 = (uint)((ulong)*(undefined8 *)(*pauVar24 + 8) >> 0x20);
      uVar4 = *(uint *)*pauVar24;
      uVar5 = *(uint *)(*pauVar24 + 4);
      uVar6 = *(uint *)*pauVar24;
      uVar7 = *(uint *)(*pauVar24 + 4);
      auVar97 = *(undefined1 (*) [16])(*param_5 + lVar25);
      lVar25 = lVar25 + 8;
      auVar112._0_8_ = auVar97._7_8_ << 0x38;
      auVar112._9_7_ = auVar97._9_7_;
      auVar112[8] = auVar97[4];
      auVar83._11_5_ = auVar97._11_5_;
      auVar83._0_10_ = auVar112._0_10_;
      auVar83[10] = auVar97[5];
      auVar85._13_3_ = auVar97._13_3_;
      auVar85._0_12_ = auVar83._0_12_;
      auVar85[0xc] = auVar97[6];
      uVar27 = auVar97[7];
      auVar120[0xf] = auVar97[0xf];
      auVar120._0_14_ = auVar85._0_14_;
      auVar120[0xe] = uVar27;
      auVar82._0_9_ = (unkuint9)auVar120._8_8_ << 0x40;
      auVar82._10_6_ = auVar120._10_6_;
      auVar82[9] = 0;
      auVar84._12_4_ = auVar120._12_4_;
      auVar84._0_11_ = auVar82._0_11_;
      auVar84[0xb] = 0;
      auVar129._14_2_ = auVar120._14_2_;
      auVar129._0_13_ = auVar84._0_13_;
      auVar129[0xd] = 0;
      auVar13[1] = 0;
      auVar13[0] = auVar97[1];
      auVar13._2_10_ = auVar43._6_10_;
      auVar90._0_8_ = auVar13._0_8_ << 0x20;
      auVar90._10_6_ = auVar43._10_6_;
      auVar90[8] = auVar97[2];
      auVar90[9] = 0;
      auVar92._14_2_ = auVar43._14_2_;
      auVar92._0_12_ = auVar90._0_12_;
      auVar92[0xc] = auVar97[3];
      auVar92[0xd] = 0;
      auVar88._4_12_ = auVar92._4_12_;
      auVar88._1_3_ = 0;
      auVar88[0] = auVar97[0];
      auVar89._8_8_ = auVar92._8_8_;
      auVar89._0_6_ = auVar88._0_6_;
      auVar89._6_2_ = 0;
      auVar91._12_4_ = auVar92._12_4_;
      auVar91._0_10_ = auVar89._0_10_;
      auVar91._10_2_ = 0;
      auVar93._0_14_ = auVar91._0_14_;
      auVar93._14_2_ = 0;
      auVar14[1] = 0;
      auVar14[0] = auVar97[4];
      auVar14._2_13_ = auVar129._2_13_;
      auVar15[4] = auVar97[5];
      auVar15._0_4_ = auVar14._0_4_;
      auVar15[5] = 0;
      auVar15._6_9_ = auVar129._6_9_;
      auVar16[8] = auVar97[6];
      auVar16._0_8_ = auVar15._0_8_;
      auVar16[9] = 0;
      auVar16._10_5_ = auVar129._10_5_;
      auVar17[0xc] = uVar27;
      auVar17._0_12_ = auVar16._0_12_;
      auVar17[0xd] = 0;
      auVar17[0xe] = uVar27;
      auVar21._4_11_ = auVar17._4_11_;
      auVar21._0_4_ = auVar14._0_4_;
      auVar22._6_2_ = 0;
      auVar22._0_6_ = auVar21._0_6_;
      auVar22._8_7_ = auVar17._8_7_;
      auVar23._10_2_ = 0;
      auVar23._0_10_ = auVar22._0_10_;
      auVar23._12_3_ = auVar17._12_3_;
      auVar97._0_14_ = auVar23._0_14_;
      auVar97._14_2_ = 0;
      auVar112 = NEON_ucvtf(auVar93,4);
      auVar97 = NEON_ucvtf(auVar97,4);
      auVar43._0_4_ = auVar112._0_4_ * 0.007874016 + auVar111._0_4_;
      auVar43._4_4_ = auVar112._4_4_ * 0.007874016 + auVar111._4_4_;
      auVar43._8_4_ = auVar112._8_4_ * 0.007874016 + auVar111._8_4_;
      auVar43._12_4_ = auVar112._12_4_ * 0.007874016 + auVar111._12_4_;
      *(uint *)(*pauVar24 + 8) =
           *(uint *)(*pauVar24 + 8) ^
           (*(uint *)(*pauVar24 + 8) ^ 0x3c010204) &
           -(uint)(fVar29 * fVar46 +
                   fVar33 * (float)CONCAT13(uVar60,CONCAT12(uVar59,CONCAT11(uVar58,uVar57))) <= 0.0)
      ;
      *(uint *)(*pauVar24 + 0xc) =
           uVar79 ^ (uVar79 ^ 0x3c010204) &
                    -(uint)(fVar31 * fVar48 +
                            fVar35 * (float)CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))
                                                    ) <= 0.0);
      *(uint *)*pauVar24 =
           uVar4 ^ (uVar6 ^ 0x3c010204) &
                   -(uint)(fVar29 * fVar44 +
                           fVar33 * (float)CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar26)))
                          <= 0.0);
      *(uint *)(*pauVar24 + 4) =
           uVar5 ^ (uVar7 ^ 0x3c010204) &
                   -(uint)(fVar31 * fVar45 +
                           fVar35 * (float)CONCAT13(uVar56,CONCAT12(uVar55,CONCAT11(uVar54,uVar53)))
                          <= 0.0);
      fVar44 = fVar36 * auVar43._0_4_ - fVar34;
      fVar45 = fVar37 * auVar43._4_4_ - fVar38;
      fVar46 = fVar36 * auVar43._8_4_ - fVar34;
      fVar48 = fVar37 * auVar43._12_4_ - fVar38;
      fVar28 = fVar36 * (auVar97._0_4_ * 0.007874016 + auVar111._0_4_) - fVar40;
      uVar26 = SUB41(fVar28,0);
      uVar50 = (undefined1)((uint)fVar28 >> 8);
      uVar51 = (undefined1)((uint)fVar28 >> 0x10);
      uVar52 = (undefined1)((uint)fVar28 >> 0x18);
      fVar28 = fVar37 * (auVar97._4_4_ * 0.007874016 + auVar111._4_4_) - fVar42;
      uVar53 = SUB41(fVar28,0);
      uVar54 = (undefined1)((uint)fVar28 >> 8);
      uVar55 = (undefined1)((uint)fVar28 >> 0x10);
      uVar56 = (undefined1)((uint)fVar28 >> 0x18);
      fVar28 = fVar36 * (auVar97._8_4_ * 0.007874016 + auVar111._8_4_) - fVar40;
      uVar57 = SUB41(fVar28,0);
      uVar58 = (undefined1)((uint)fVar28 >> 8);
      uVar59 = (undefined1)((uint)fVar28 >> 0x10);
      uVar60 = (undefined1)((uint)fVar28 >> 0x18);
      fVar28 = fVar37 * (auVar97._12_4_ * 0.007874016 + auVar111._12_4_) - fVar42;
      uVar61 = SUB41(fVar28,0);
      uVar62 = (undefined1)((uint)fVar28 >> 8);
      uVar63 = (undefined1)((uint)fVar28 >> 0x10);
      uVar64 = (undefined1)((uint)fVar28 >> 0x18);
      pauVar24 = pauVar24 + 1;
    } while (lVar25 != 0x108);
  }
  else {
    lVar25 = 8;
    do {
      auVar80._0_4_ =
           fVar44 * fVar44 +
           (float)CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar26))) *
           (float)CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar26)));
      auVar80._4_4_ =
           fVar45 * fVar45 +
           (float)CONCAT13(uVar56,CONCAT12(uVar55,CONCAT11(uVar54,uVar53))) *
           (float)CONCAT13(uVar56,CONCAT12(uVar55,CONCAT11(uVar54,uVar53)));
      auVar80._8_4_ =
           fVar46 * fVar46 +
           (float)CONCAT13(uVar60,CONCAT12(uVar59,CONCAT11(uVar58,uVar57))) *
           (float)CONCAT13(uVar60,CONCAT12(uVar59,CONCAT11(uVar58,uVar57)));
      auVar80._12_4_ =
           fVar48 * fVar48 +
           (float)CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))) *
           (float)CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61)));
      fVar66 = fVar29 * fVar44 +
               fVar33 * (float)CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar26)));
      fVar67 = fVar31 * fVar45 +
               fVar35 * (float)CONCAT13(uVar56,CONCAT12(uVar55,CONCAT11(uVar54,uVar53)));
      fVar47 = fVar29 * fVar46 +
               fVar33 * (float)CONCAT13(uVar60,CONCAT12(uVar59,CONCAT11(uVar58,uVar57)));
      fVar49 = fVar31 * fVar48 +
               fVar35 * (float)CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61)));
      auVar112 = NEON_frecpe(auVar80,4);
      auVar97 = *(undefined1 (*) [16])(*param_5 + lVar25);
      lVar25 = lVar25 + 8;
      fVar28 = fVar66 * fVar66 - fVar39 * auVar80._0_4_;
      fVar30 = fVar67 * fVar67 - fVar41 * auVar80._4_4_;
      uVar50 = SUB41(fVar30,0);
      uVar51 = (undefined1)((uint)fVar30 >> 8);
      uVar52 = (undefined1)((uint)fVar30 >> 0x10);
      uVar53 = (undefined1)((uint)fVar30 >> 0x18);
      fVar32 = fVar47 * fVar47 - fVar39 * auVar80._8_4_;
      uVar54 = SUB41(fVar32,0);
      uVar55 = (undefined1)((uint)fVar32 >> 8);
      uVar56 = (undefined1)((uint)fVar32 >> 0x10);
      uVar57 = (undefined1)((uint)fVar32 >> 0x18);
      fVar65 = fVar49 * fVar49 - fVar41 * auVar80._12_4_;
      uVar58 = SUB41(fVar65,0);
      uVar59 = (undefined1)((uint)fVar65 >> 8);
      uVar60 = (undefined1)((uint)fVar65 >> 0x10);
      uVar61 = (undefined1)((uint)fVar65 >> 0x18);
      auVar43 = NEON_frecps(auVar80,auVar112,4);
      auVar111[4] = uVar50;
      auVar111._0_4_ = fVar28;
      auVar111[5] = uVar51;
      auVar111[6] = uVar52;
      auVar111[7] = uVar53;
      auVar111[8] = uVar54;
      auVar111[9] = uVar55;
      auVar111[10] = uVar56;
      auVar111[0xb] = uVar57;
      auVar111[0xc] = uVar58;
      auVar111[0xd] = uVar59;
      auVar111[0xe] = uVar60;
      auVar111[0xf] = uVar61;
      auVar129 = NEON_frsqrte(auVar111,4);
      auVar103._0_8_ = auVar97._7_8_ << 0x38;
      auVar103._9_7_ = auVar97._9_7_;
      auVar103[8] = auVar97[4];
      auVar105._11_5_ = auVar97._11_5_;
      auVar105._0_10_ = auVar103._0_10_;
      auVar105[10] = auVar97[5];
      auVar107._13_3_ = auVar97._13_3_;
      auVar107._0_12_ = auVar105._0_12_;
      auVar107[0xc] = auVar97[6];
      uVar26 = auVar97[7];
      auVar109[0xf] = auVar97[0xf];
      auVar109._0_14_ = auVar107._0_14_;
      auVar109[0xe] = uVar26;
      auVar104._0_9_ = (unkuint9)auVar109._8_8_ << 0x40;
      auVar104._10_6_ = auVar109._10_6_;
      auVar104[9] = 0;
      auVar106._12_4_ = auVar109._12_4_;
      auVar106._0_11_ = auVar104._0_11_;
      auVar106[0xb] = 0;
      auVar108._14_2_ = auVar109._14_2_;
      auVar108._0_13_ = auVar106._0_13_;
      auVar108[0xd] = 0;
      auVar8[1] = 0;
      auVar8[0] = auVar97[1];
      auVar8._2_10_ = in_q23._6_10_;
      auVar116._0_8_ = auVar8._0_8_ << 0x20;
      auVar116._10_6_ = in_q23._10_6_;
      auVar116[8] = auVar97[2];
      auVar116[9] = 0;
      auVar118._14_2_ = in_q23._14_2_;
      auVar118._0_12_ = auVar116._0_12_;
      auVar118[0xc] = auVar97[3];
      auVar118[0xd] = 0;
      auVar114._4_12_ = auVar118._4_12_;
      auVar114._1_3_ = 0;
      auVar114[0] = auVar97[0];
      auVar115._8_8_ = auVar118._8_8_;
      auVar115._0_6_ = auVar114._0_6_;
      auVar115._6_2_ = 0;
      auVar117._12_4_ = auVar118._12_4_;
      auVar117._0_10_ = auVar115._0_10_;
      auVar117._10_2_ = 0;
      auVar119._0_14_ = auVar117._0_14_;
      auVar119._14_2_ = 0;
      auVar9[1] = 0;
      auVar9[0] = auVar97[4];
      auVar9._2_13_ = auVar108._2_13_;
      auVar10[4] = auVar97[5];
      auVar10._0_4_ = auVar9._0_4_;
      auVar10[5] = 0;
      auVar10._6_9_ = auVar108._6_9_;
      auVar11[8] = auVar97[6];
      auVar11._0_8_ = auVar10._0_8_;
      auVar11[9] = 0;
      auVar11._10_5_ = auVar108._10_5_;
      auVar12[0xc] = uVar26;
      auVar12._0_12_ = auVar11._0_12_;
      auVar12[0xd] = 0;
      auVar12[0xe] = uVar26;
      auVar18._4_11_ = auVar12._4_11_;
      auVar18._0_4_ = auVar9._0_4_;
      auVar19._6_2_ = 0;
      auVar19._0_6_ = auVar18._0_6_;
      auVar19._8_7_ = auVar12._8_7_;
      auVar20._10_2_ = 0;
      auVar20._0_10_ = auVar19._0_10_;
      auVar20._12_3_ = auVar12._12_3_;
      auVar110._0_14_ = auVar20._0_14_;
      auVar110._14_2_ = 0;
      auVar120 = NEON_ucvtf(auVar119,4);
      auVar111 = NEON_ucvtf(auVar110,4);
      auVar87._0_4_ = auVar112._0_4_ * auVar43._0_4_;
      auVar87._4_4_ = auVar112._4_4_ * auVar43._4_4_;
      auVar87._8_4_ = auVar112._8_4_ * auVar43._8_4_;
      auVar87._12_4_ = auVar112._12_4_ * auVar43._12_4_;
      fVar44 = auVar129._0_4_;
      auVar113._0_4_ = fVar44 * fVar44;
      fVar45 = auVar129._4_4_;
      auVar113._4_4_ = fVar45 * fVar45;
      fVar46 = auVar129._8_4_;
      auVar113._8_4_ = fVar46 * fVar46;
      fVar48 = auVar129._12_4_;
      auVar113._12_4_ = fVar48 * fVar48;
      auVar43 = NEON_frecps(auVar80,auVar87,4);
      auVar1[4] = uVar50;
      auVar1._0_4_ = fVar28;
      auVar1[5] = uVar51;
      auVar1[6] = uVar52;
      auVar1[7] = uVar53;
      auVar1[8] = uVar54;
      auVar1[9] = uVar55;
      auVar1[10] = uVar56;
      auVar1[0xb] = uVar57;
      auVar1[0xc] = uVar58;
      auVar1[0xd] = uVar59;
      auVar1[0xe] = uVar60;
      auVar1[0xf] = uVar61;
      auVar112 = NEON_frsqrts(auVar1,auVar113,4);
      iVar121 = -(uint)(0.0 < fVar28);
      iVar122 = -(uint)(0.0 < fVar30);
      iVar123 = -(uint)(0.0 < fVar32);
      iVar124 = -(uint)(0.0 < fVar65);
      iVar125 = -(uint)(fVar28 <= 0.0);
      iVar126 = -(uint)(fVar30 <= 0.0);
      iVar127 = -(uint)(fVar32 <= 0.0);
      iVar128 = -(uint)(fVar65 <= 0.0);
      iVar94 = -(uint)(fVar66 < 0.0);
      iVar98 = -(uint)(fVar67 < 0.0);
      iVar100 = -(uint)(fVar47 < 0.0);
      iVar101 = -(uint)(fVar49 < 0.0);
      auVar97 = *pauVar24;
      fVar44 = fVar44 * auVar112._0_4_;
      fVar45 = fVar45 * auVar112._4_4_;
      fVar46 = fVar46 * auVar112._8_4_;
      fVar48 = fVar48 * auVar112._12_4_;
      auVar112 = NEON_fmov(0xbf800000,4);
      in_q23._0_4_ = fVar36 * (auVar120._0_4_ * 0.007874016 + auVar112._0_4_);
      in_q23._4_4_ = fVar37 * (auVar120._4_4_ * 0.007874016 + auVar112._4_4_);
      in_q23._8_4_ = fVar36 * (auVar120._8_4_ * 0.007874016 + auVar112._8_4_);
      in_q23._12_4_ = fVar37 * (auVar120._12_4_ * 0.007874016 + auVar112._12_4_);
      auVar2[4] = uVar50;
      auVar2._0_4_ = fVar28;
      auVar2[5] = uVar51;
      auVar2[6] = uVar52;
      auVar2[7] = uVar53;
      auVar2[8] = uVar54;
      auVar2[9] = uVar55;
      auVar2[10] = uVar56;
      auVar2[0xb] = uVar57;
      auVar2[0xc] = uVar58;
      auVar2[0xd] = uVar59;
      auVar2[0xe] = uVar60;
      auVar2[0xf] = uVar61;
      auVar3._4_4_ = fVar45 * fVar45;
      auVar3._0_4_ = fVar44 * fVar44;
      auVar3._8_4_ = fVar46 * fVar46;
      auVar3._12_4_ = fVar48 * fVar48;
      auVar120 = NEON_frsqrts(auVar2,auVar3,4);
      fVar28 = fVar28 * auVar120._0_4_ * fVar44;
      fVar30 = fVar30 * auVar120._4_4_ * fVar45;
      fVar32 = fVar32 * auVar120._8_4_ * fVar46;
      fVar65 = fVar65 * auVar120._12_4_ * fVar48;
      fVar44 = in_q23._0_4_ - fVar34;
      fVar45 = in_q23._4_4_ - fVar38;
      fVar46 = in_q23._8_4_ - fVar34;
      fVar48 = in_q23._12_4_ - fVar38;
      auVar81._0_4_ =
           (-fVar66 -
           (float)CONCAT13((byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar125 >> 0x18),
                           CONCAT12((byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar125 >> 0x10),
                                    CONCAT11((byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar125 >> 8)
                                             ,SUB41(fVar28,0) & ~(byte)iVar125)))) *
           auVar87._0_4_ * auVar43._0_4_;
      auVar81._4_4_ =
           (-fVar67 -
           (float)CONCAT13((byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar126 >> 0x18),
                           CONCAT12((byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar126 >> 0x10),
                                    CONCAT11((byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar126 >> 8)
                                             ,SUB41(fVar30,0) & ~(byte)iVar126)))) *
           auVar87._4_4_ * auVar43._4_4_;
      auVar81._8_4_ =
           (-fVar47 -
           (float)CONCAT13((byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar127 >> 0x18),
                           CONCAT12((byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar127 >> 0x10),
                                    CONCAT11((byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar127 >> 8)
                                             ,SUB41(fVar32,0) & ~(byte)iVar127)))) *
           auVar87._8_4_ * auVar43._8_4_;
      auVar81._12_4_ =
           (-fVar49 -
           (float)CONCAT13((byte)((uint)fVar65 >> 0x18) & ~(byte)((uint)iVar128 >> 0x18),
                           CONCAT12((byte)((uint)fVar65 >> 0x10) & ~(byte)((uint)iVar128 >> 0x10),
                                    CONCAT11((byte)((uint)fVar65 >> 8) & ~(byte)((uint)iVar128 >> 8)
                                             ,SUB41(fVar65,0) & ~(byte)iVar128)))) *
           auVar87._12_4_ * auVar43._12_4_;
      fVar28 = fVar36 * (auVar111._0_4_ * 0.007874016 + auVar112._0_4_) - fVar40;
      uVar26 = SUB41(fVar28,0);
      uVar50 = (undefined1)((uint)fVar28 >> 8);
      uVar51 = (undefined1)((uint)fVar28 >> 0x10);
      uVar52 = (undefined1)((uint)fVar28 >> 0x18);
      fVar28 = fVar37 * (auVar111._4_4_ * 0.007874016 + auVar112._4_4_) - fVar42;
      uVar53 = SUB41(fVar28,0);
      uVar54 = (undefined1)((uint)fVar28 >> 8);
      uVar55 = (undefined1)((uint)fVar28 >> 0x10);
      uVar56 = (undefined1)((uint)fVar28 >> 0x18);
      fVar28 = fVar36 * (auVar111._8_4_ * 0.007874016 + auVar112._8_4_) - fVar40;
      uVar57 = SUB41(fVar28,0);
      uVar58 = (undefined1)((uint)fVar28 >> 8);
      uVar59 = (undefined1)((uint)fVar28 >> 0x10);
      uVar60 = (undefined1)((uint)fVar28 >> 0x18);
      fVar28 = fVar37 * (auVar111._12_4_ * 0.007874016 + auVar112._12_4_) - fVar42;
      uVar61 = SUB41(fVar28,0);
      uVar62 = (undefined1)((uint)fVar28 >> 8);
      uVar63 = (undefined1)((uint)fVar28 >> 0x10);
      uVar64 = (undefined1)((uint)fVar28 >> 0x18);
      iVar125 = -(uint)(auVar81._0_4_ < auVar97._0_4_);
      iVar126 = -(uint)(auVar81._4_4_ < auVar97._4_4_);
      iVar127 = -(uint)(auVar81._8_4_ < auVar97._8_4_);
      iVar128 = -(uint)(auVar81._12_4_ < auVar97._12_4_);
      auVar96[0] = (byte)iVar121 & (byte)iVar94 & (byte)iVar125;
      auVar96[1] = (byte)((uint)iVar121 >> 8) & (byte)((uint)iVar94 >> 8) &
                   (byte)((uint)iVar125 >> 8);
      auVar96[2] = (byte)((uint)iVar121 >> 0x10) & (byte)((uint)iVar94 >> 0x10) &
                   (byte)((uint)iVar125 >> 0x10);
      auVar96[3] = (byte)((uint)iVar121 >> 0x18) & (byte)((uint)iVar94 >> 0x18) &
                   (byte)((uint)iVar125 >> 0x18);
      auVar96[4] = (byte)iVar122 & (byte)iVar98 & (byte)iVar126;
      auVar96[5] = (byte)((uint)iVar122 >> 8) & (byte)((uint)iVar98 >> 8) &
                   (byte)((uint)iVar126 >> 8);
      auVar96[6] = (byte)((uint)iVar122 >> 0x10) & (byte)((uint)iVar98 >> 0x10) &
                   (byte)((uint)iVar126 >> 0x10);
      auVar96[7] = (byte)((uint)iVar122 >> 0x18) & (byte)((uint)iVar98 >> 0x18) &
                   (byte)((uint)iVar126 >> 0x18);
      auVar96[8] = (byte)iVar123 & (byte)iVar100 & (byte)iVar127;
      auVar96[9] = (byte)((uint)iVar123 >> 8) & (byte)((uint)iVar100 >> 8) &
                   (byte)((uint)iVar127 >> 8);
      auVar96[10] = (byte)((uint)iVar123 >> 0x10) & (byte)((uint)iVar100 >> 0x10) &
                    (byte)((uint)iVar127 >> 0x10);
      auVar96[0xb] = (byte)((uint)iVar123 >> 0x18) & (byte)((uint)iVar100 >> 0x18) &
                     (byte)((uint)iVar127 >> 0x18);
      auVar96[0xc] = (byte)iVar124 & (byte)iVar101 & (byte)iVar128;
      auVar96[0xd] = (byte)((uint)iVar124 >> 8) & (byte)((uint)iVar101 >> 8) &
                     (byte)((uint)iVar128 >> 8);
      auVar96[0xe] = (byte)((uint)iVar124 >> 0x10) & (byte)((uint)iVar101 >> 0x10) &
                     (byte)((uint)iVar128 >> 0x10);
      auVar96[0xf] = (byte)((uint)iVar124 >> 0x18) & (byte)((uint)iVar101 >> 0x18) &
                     (byte)((uint)iVar128 >> 0x18);
      auVar97 = auVar97 ^ (auVar97 ^ auVar81) & auVar96;
      *(long *)(*pauVar24 + 8) = auVar97._8_8_;
      *(long *)*pauVar24 = auVar97._0_8_;
      pauVar24 = pauVar24 + 1;
    } while (lVar25 != 0x108);
  }
  return fVar39 < 0.0;
}


