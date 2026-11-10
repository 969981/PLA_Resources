/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030d7100; name: FUN_030d7100
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030d7100(long param_1,undefined1 (*param_2) [12],float *param_3,float *param_4,
                 float *param_5)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  ulong uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar33;
  undefined1 auVar32 [16];
  float fVar34;
  undefined1 auVar35 [16];
  int iVar36;
  int iVar38;
  undefined1 auVar37 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar44;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  undefined8 uVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar57;
  undefined1 auVar56 [16];
  float fVar58;
  float fVar63;
  float fVar64;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar65;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar66;
  float fVar67;
  float fVar70;
  undefined8 uVar68;
  float fVar71;
  undefined1 auVar69 [16];
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  undefined1 uVar77;
  byte bVar78;
  undefined1 uVar79;
  byte bVar80;
  undefined1 uVar81;
  byte bVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  undefined8 uVar97;
  undefined1 auVar98 [16];
  float fVar99;
  float fVar100;
  undefined1 auVar101 [16];
  float fVar102;
  uint uVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  
  auVar13 = NEON_fmov(0xbf800000,4);
  fVar34 = (float)*(undefined8 *)(param_1 + 0x38);
  fVar65 = (float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
  auVar30._0_4_ = -*(float *)param_2[8];
  auVar30._4_4_ = -*(float *)(param_2[8] + 4);
  auVar30._8_4_ = -*(float *)(param_2[8] + 8);
  fVar45 = (float)*(undefined8 *)(param_1 + 0xc0) + auVar13._0_4_;
  fVar46 = (float)((ulong)*(undefined8 *)(param_1 + 0xc0) >> 0x20) + auVar13._4_4_;
  fVar47 = (float)*(undefined8 *)(param_1 + 200) + auVar13._8_4_;
  fVar48 = (float)((ulong)*(undefined8 *)(param_1 + 200) >> 0x20) + auVar13._12_4_;
  auVar25._0_4_ = -*(float *)(param_2[6] + 8);
  auVar25._4_4_ = -*(float *)param_2[7];
  auVar25._8_4_ = -*(float *)(param_2[7] + 4);
  fVar16 = fVar34 * 0.5;
  auVar30._12_4_ = *(undefined4 *)param_2[9];
  auVar25._12_4_ = *(undefined4 *)(param_2[7] + 8);
  uVar23 = *(undefined8 *)(param_4 + 6);
  auVar54._8_8_ = _UNK_038890f8;
  auVar54._0_8_ = _DAT_038890f0;
  auVar59._8_8_ = _UNK_03888e28;
  auVar59._0_8_ = _DAT_03888e20;
  fVar20 = (float)*(undefined8 *)(param_4 + 4);
  fVar21 = (float)((ulong)*(undefined8 *)(param_4 + 4) >> 0x20);
  fVar22 = (float)uVar23;
  auVar69 = a64_TBL(ZEXT816(0),auVar25,auVar54);
  auVar26 = a64_TBL(ZEXT816(0),auVar25,auVar59);
  auVar55 = a64_TBL(ZEXT816(0),auVar30,auVar54);
  auVar31 = a64_TBL(ZEXT816(0),auVar30,auVar59);
  auVar49._0_4_ = (param_3[4] + fVar45 * (float)*(undefined8 *)(param_3 + 0x10)) * fVar16;
  auVar49._4_4_ =
       (param_3[5] + fVar46 * (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20)) *
       fVar65 * 0.5;
  auVar49._8_4_ = (param_3[6] + fVar47 * (float)*(undefined8 *)(param_3 + 0x12)) * fVar16;
  auVar17._0_4_ = (fVar20 + fVar45 * param_4[0x10]) * fVar16;
  auVar17._4_4_ = (fVar21 + fVar46 * param_4[0x11]) * fVar65 * 0.5;
  auVar17._8_4_ = (fVar22 + fVar47 * param_4[0x12]) * fVar16;
  auVar39._8_8_ = _UNK_03888d78;
  auVar39._0_8_ = _DAT_03888d70;
  auVar49._12_4_ = 0x3f800000;
  auVar60._8_8_ = _UNK_03889108;
  auVar60._0_8_ = _DAT_03889100;
  auVar17._12_4_ = 0x3f800000;
  auVar14 = a64_TBL(ZEXT816(0),auVar49,auVar39);
  auVar50 = a64_TBL(ZEXT816(0),auVar49,auVar60);
  auVar40 = a64_TBL(ZEXT816(0),auVar17,auVar39);
  auVar18 = a64_TBL(ZEXT816(0),auVar17,auVar60);
  auVar41._0_4_ = auVar26._0_4_ * auVar50._0_4_ - auVar69._0_4_ * auVar14._0_4_;
  auVar41._4_4_ = auVar26._4_4_ * auVar50._4_4_ - auVar69._4_4_ * auVar14._4_4_;
  auVar41._8_4_ = auVar26._8_4_ * auVar50._8_4_ - auVar69._8_4_ * auVar14._8_4_;
  auVar41._12_4_ = auVar26._12_4_ * auVar50._12_4_ - auVar69._12_4_ * auVar14._12_4_;
  auVar15._0_4_ = auVar31._0_4_ * auVar18._0_4_ - auVar55._0_4_ * auVar40._0_4_;
  auVar15._4_4_ = auVar31._4_4_ * auVar18._4_4_ - auVar55._4_4_ * auVar40._4_4_;
  auVar15._8_4_ = auVar31._8_4_ * auVar18._8_4_ - auVar55._8_4_ * auVar40._8_4_;
  auVar15._12_4_ = auVar31._12_4_ * auVar18._12_4_ - auVar55._12_4_ * auVar40._12_4_;
  auVar27._8_8_ = _UNK_038895d8;
  auVar27._0_8_ = _DAT_038895d0;
  auVar19 = a64_TBL(ZEXT816(0),auVar41,auVar27);
  auVar28 = a64_TBL(ZEXT816(0),auVar15,auVar27);
  fVar8 = *param_4;
  fVar9 = param_4[1];
  fVar10 = param_4[2];
  fVar11 = param_4[3];
  fVar33 = auVar28._12_4_ - (auVar31._12_4_ * auVar40._12_4_ + auVar55._12_4_ * auVar18._12_4_);
  auVar13 = *(undefined1 (*) [16])(param_2[5] + 4);
  fVar58 = -(auVar28._0_4_ - (auVar31._0_4_ * auVar40._0_4_ + auVar55._0_4_ * auVar18._0_4_));
  fVar63 = -(auVar28._4_4_ - (auVar31._4_4_ * auVar40._4_4_ + auVar55._4_4_ * auVar18._4_4_));
  fVar64 = -(auVar28._8_4_ - (auVar31._8_4_ * auVar40._8_4_ + auVar55._8_4_ * auVar18._8_4_));
  fVar44 = auVar19._12_4_ - (auVar26._12_4_ * auVar14._12_4_ + auVar69._12_4_ * auVar50._12_4_);
  fVar66 = -(auVar19._0_4_ - (auVar26._0_4_ * auVar14._0_4_ + auVar69._0_4_ * auVar50._0_4_));
  fVar70 = -(auVar19._4_4_ - (auVar26._4_4_ * auVar14._4_4_ + auVar69._4_4_ * auVar50._4_4_));
  fVar71 = -(auVar19._8_4_ - (auVar26._8_4_ * auVar14._8_4_ + auVar69._8_4_ * auVar50._8_4_));
  auVar32._0_4_ = fVar58 * fVar58;
  auVar32._4_4_ = fVar63 * fVar63;
  auVar32._8_4_ = fVar64 * fVar64;
  auVar32._12_4_ = fVar33 * fVar33;
  auVar14 = NEON_ext(auVar32,auVar32,8,1);
  fVar16 = auVar14._0_4_ + auVar14._4_4_;
  auVar42._0_4_ = fVar66 * fVar66;
  auVar42._4_4_ = fVar70 * fVar70;
  auVar42._8_4_ = fVar71 * fVar71;
  auVar42._12_4_ = fVar44 * fVar44;
  uVar68 = CONCAT44(auVar32._0_4_ + auVar32._4_4_ + fVar16,auVar32._0_4_ + auVar32._4_4_ + fVar16);
  auVar14 = NEON_ext(auVar42,auVar42,8,1);
  fVar16 = auVar14._0_4_ + auVar14._4_4_;
  uVar53 = NEON_frsqrte(uVar68,4);
  uVar12 = CONCAT44(auVar42._0_4_ + auVar42._4_4_ + fVar16,auVar42._0_4_ + auVar42._4_4_ + fVar16);
  fVar52 = (float)uVar53;
  fVar57 = (float)((ulong)uVar53 >> 0x20);
  fVar16 = fVar57 * fVar57;
  uVar29 = NEON_frsqrte(uVar12,4);
  uVar53 = NEON_frsqrts(uVar68,CONCAT17((char)((uint)fVar16 >> 0x18),
                                        CONCAT16((char)((uint)fVar16 >> 0x10),
                                                 CONCAT15((char)((uint)fVar16 >> 8),
                                                          CONCAT14(SUB41(fVar16,0),fVar52 * fVar52))
                                                )),4);
  fVar84 = (float)uVar29;
  fVar86 = (float)((ulong)uVar29 >> 0x20);
  uVar29 = NEON_frsqrts(uVar12,CONCAT44(fVar86 * fVar86,fVar84 * fVar84),4);
  fVar52 = fVar52 * (float)uVar53;
  fVar57 = fVar57 * (float)((ulong)uVar53 >> 0x20);
  fVar84 = fVar84 * (float)uVar29;
  fVar86 = fVar86 * (float)((ulong)uVar29 >> 0x20);
  auVar14 = *(undefined1 (*) [16])(param_2 + 4);
  auVar18 = NEON_ext(auVar14,auVar14,8,1);
  auVar19 = NEON_ext(auVar13,auVar13,8,1);
  uVar29 = NEON_ext(auVar14._0_8_,auVar18._0_8_,4,1);
  uVar97 = NEON_ext(auVar13._0_8_,auVar19._0_8_,4,1);
  uVar53 = NEON_frsqrts(uVar68,CONCAT44(fVar57 * fVar57,fVar52 * fVar52),4);
  fVar52 = (float)uVar53 * fVar52;
  fVar57 = (float)((ulong)uVar53 >> 0x20) * fVar57;
  uVar53 = NEON_frsqrts(uVar12,CONCAT44(fVar86 * fVar86,fVar84 * fVar84),4);
  fVar85 = auVar14._0_4_;
  fVar89 = auVar14._4_4_;
  auVar43._0_4_ = fVar58 * fVar52;
  auVar43._4_4_ = fVar63 * fVar57;
  auVar43._8_4_ = fVar64 * fVar52;
  auVar43._12_4_ = fVar33 * fVar57;
  fVar84 = (float)uVar53 * fVar84;
  fVar86 = (float)((ulong)uVar53 >> 0x20) * fVar86;
  fVar52 = (float)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  auVar18 = NEON_ext(auVar43,auVar43,8,1);
  auVar50 = NEON_ext(auVar43,auVar43,4,1);
  fVar16 = auVar13._0_4_;
  fVar33 = auVar13._4_4_;
  fVar57 = auVar13._8_4_;
  fVar58 = auVar13._12_4_;
  fVar106 = auVar18._4_4_ * auVar18._4_4_;
  auVar51._0_4_ = fVar66 * fVar84;
  auVar51._4_4_ = fVar70 * fVar86;
  auVar51._8_4_ = fVar71 * fVar84;
  auVar51._12_4_ = fVar44 * fVar86;
  auVar55 = NEON_ext(auVar51,auVar51,4,1);
  auVar13 = NEON_ext(auVar51,auVar51,8,1);
  fVar100 = auVar13._4_4_ * auVar13._4_4_;
  fVar84 = auVar14._8_4_;
  fVar86 = auVar51._0_4_ * fVar85 + auVar51._4_4_ * fVar89 + auVar51._8_4_ * fVar84;
  fVar63 = auVar51._0_4_ * fVar85 + auVar51._4_4_ * fVar89 + auVar51._8_4_ * fVar84;
  fVar99 = fVar100 + -0.5;
  fVar100 = fVar100 + -0.5;
  fVar44 = auVar14._12_4_;
  auVar98._0_4_ = auVar43._0_4_ * (float)uVar97 - fVar16 * auVar50._0_4_;
  auVar98._4_4_ = auVar43._4_4_ * (float)((ulong)uVar97 >> 0x20) - fVar33 * auVar50._4_4_;
  auVar98._8_4_ = auVar43._8_4_ * fVar16 - fVar57 * auVar43._0_4_;
  auVar98._12_4_ = auVar43._12_4_ * fVar33 - fVar58 * auVar43._4_4_;
  fVar102 = auVar43._0_4_ * fVar16 + auVar43._4_4_ * fVar33 + auVar43._8_4_ * fVar57;
  fVar104 = auVar43._0_4_ * fVar16 + auVar43._4_4_ * fVar33 + auVar43._8_4_ * fVar57;
  fVar70 = auVar51._0_4_ * (float)uVar29 - auVar55._0_4_ * fVar85;
  fVar91 = auVar51._4_4_ * (float)((ulong)uVar29 >> 0x20) - auVar55._4_4_ * fVar89;
  fVar64 = auVar51._8_4_ * fVar85 - auVar51._0_4_ * fVar84;
  fVar66 = auVar51._12_4_ * fVar89 - auVar51._4_4_ * fVar44;
  auVar13 = NEON_ext(auVar98,auVar98,4,1);
  auVar69._4_4_ = fVar91;
  auVar69._0_4_ = fVar70;
  auVar69._8_4_ = fVar64;
  auVar69._12_4_ = fVar66;
  auVar3._4_4_ = fVar91;
  auVar3._0_4_ = fVar70;
  auVar3._8_4_ = fVar64;
  auVar3._12_4_ = fVar66;
  auVar14 = NEON_ext(auVar69,auVar3,4,1);
  fVar67 = fVar106 + -0.5;
  fVar106 = fVar106 + -0.5;
  fVar64 = fVar85 * fVar99 + auVar51._0_4_ * fVar86 + auVar14._0_4_ * auVar51._12_4_;
  fVar66 = fVar89 * fVar100 + auVar51._4_4_ * fVar63 + auVar14._4_4_ * auVar51._12_4_;
  fVar71 = fVar84 * fVar99 + auVar51._8_4_ * fVar86 + fVar70 * auVar51._12_4_;
  fVar91 = fVar44 * fVar100 + auVar51._12_4_ * fVar63 + fVar91 * auVar51._12_4_;
  fVar84 = *(float *)(param_2[3] + 8);
  fVar64 = fVar64 + fVar64;
  fVar66 = fVar66 + fVar66;
  fVar71 = fVar71 + fVar71;
  fVar91 = fVar91 + fVar91;
  fVar89 = fVar16 * fVar67 + auVar43._0_4_ * fVar102 + auVar13._0_4_ * auVar43._12_4_;
  fVar92 = fVar33 * fVar106 + auVar43._4_4_ * fVar104 + auVar13._4_4_ * auVar43._12_4_;
  fVar94 = fVar57 * fVar67 + auVar43._8_4_ * fVar102 + auVar98._0_4_ * auVar43._12_4_;
  fVar96 = fVar58 * fVar106 + auVar43._12_4_ * fVar104 + auVar98._4_4_ * auVar43._12_4_;
  fVar89 = fVar89 + fVar89;
  fVar92 = fVar92 + fVar92;
  fVar94 = fVar94 + fVar94;
  fVar96 = fVar96 + fVar96;
  fVar16 = (float)*(undefined8 *)(param_2[1] + 4) -
           ((*param_3 + (float)*(undefined8 *)(param_3 + 0xc) * fVar45) * fVar34 + 0.0 + fVar64);
  fVar33 = (float)((ulong)*(undefined8 *)(param_2[1] + 4) >> 0x20) -
           ((param_3[1] + (float)((ulong)*(undefined8 *)(param_3 + 0xc) >> 0x20) * fVar46) * fVar65
            + 0.0 + fVar66);
  fVar63 = (float)*(undefined8 *)param_2[2] -
           ((param_3[2] + (float)*(undefined8 *)(param_3 + 0xe) * fVar47) * fVar34 + 0.0 + fVar71);
  fVar70 = (float)((ulong)*(undefined8 *)param_2[2] >> 0x20);
  fVar86 = ((float)*(undefined8 *)*param_2 +
            (fVar8 + fVar45 * (float)*(undefined8 *)(param_4 + 0xc)) * fVar34 + fVar89) -
           *(float *)(param_2[2] + 8);
  fVar45 = ((float)((ulong)*(undefined8 *)*param_2 >> 0x20) +
            (fVar9 + fVar46 * (float)((ulong)*(undefined8 *)(param_4 + 0xc) >> 0x20)) * fVar65 +
           fVar92) - *(float *)param_2[3];
  fVar47 = ((float)*(undefined8 *)(*param_2 + 8) +
            (fVar10 + fVar47 * (float)*(undefined8 *)(param_4 + 0xe)) * fVar34 + fVar94) -
           *(float *)(param_2[3] + 4);
  fVar108 = fVar86 * fVar86 + fVar45 * fVar45 + fVar47 * fVar47;
  fVar109 = fVar86 * fVar86 + fVar45 * fVar45 + fVar47 * fVar47;
  uVar68 = CONCAT44(fVar109,fVar108);
  fVar105 = fVar16 * fVar16 + fVar33 * fVar33 + fVar63 * fVar63;
  fVar107 = fVar16 * fVar16 + fVar33 * fVar33 + fVar63 * fVar63;
  uVar29 = CONCAT44(fVar107,fVar105);
  uVar53 = NEON_frsqrte(uVar29,4);
  fVar34 = (float)uVar53;
  fVar57 = (float)((ulong)uVar53 >> 0x20);
  uVar53 = NEON_frsqrts(uVar29,CONCAT44(fVar57 * fVar57,fVar34 * fVar34),4);
  fVar34 = fVar34 * (float)uVar53;
  fVar57 = fVar57 * (float)((ulong)uVar53 >> 0x20);
  uVar53 = NEON_frsqrts(uVar29,CONCAT44(fVar57 * fVar57,fVar34 * fVar34),4);
  fVar34 = (float)uVar53 * fVar34;
  fVar57 = (float)((ulong)uVar53 >> 0x20) * fVar57;
  iVar36 = -(uint)(fVar105 <= 0.0);
  iVar38 = -(uint)(fVar107 <= 0.0);
  fVar34 = (float)CONCAT13((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                           CONCAT12((byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10),
                                    CONCAT11((byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar36 >> 8),
                                             SUB41(fVar34,0) & ~(byte)iVar36)));
  auVar37._8_8_ = _UNK_03889a88;
  auVar37._0_8_ = _DAT_03889a80;
  fVar46 = (float)(CONCAT17((byte)((uint)fVar57 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                            CONCAT16((byte)((uint)fVar57 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10),
                                     CONCAT15((byte)((uint)fVar57 >> 8) & ~(byte)((uint)iVar38 >> 8)
                                              ,CONCAT14(SUB41(fVar57,0) & ~(byte)iVar38,fVar34))))
                  >> 0x20);
  fVar33 = fVar33 * fVar46;
  uVar77 = (undefined1)((uint)fVar33 >> 8);
  uVar79 = (undefined1)((uint)fVar33 >> 0x10);
  uVar81 = (undefined1)((uint)fVar33 >> 0x18);
  fVar57 = (fVar70 - ((param_3[3] + (float)((ulong)*(undefined8 *)(param_3 + 0xe) >> 0x20) * fVar48)
                      * fVar65 + 0.0 + fVar91)) * fVar46;
  auVar35._0_4_ = -(uint)(fVar105 * fVar34 < 1.1920929e-07);
  auVar35._4_4_ = auVar35._0_4_;
  auVar35._8_4_ = auVar35._0_4_;
  auVar35._12_4_ = auVar35._0_4_;
  auVar18[4] = SUB41(fVar33,0);
  auVar18._0_4_ = fVar16 * fVar34;
  auVar18[5] = uVar77;
  auVar18[6] = uVar79;
  auVar18[7] = uVar81;
  auVar18._8_4_ = fVar63 * fVar34;
  auVar18._12_4_ = fVar57;
  auVar19[4] = SUB41(fVar33,0);
  auVar19._0_4_ = fVar16 * fVar34;
  auVar19[5] = uVar77;
  auVar19[6] = uVar79;
  auVar19[7] = uVar81;
  auVar19._8_4_ = fVar63 * fVar34;
  auVar19._12_4_ = fVar57;
  auVar19 = auVar19 ^ (auVar18 ^ auVar37) & auVar35;
  uVar53 = NEON_frsqrte(uVar68,4);
  fVar16 = (float)uVar53;
  fVar33 = (float)((ulong)uVar53 >> 0x20);
  uVar53 = NEON_frsqrts(uVar68,CONCAT44(fVar33 * fVar33,fVar16 * fVar16),4);
  fVar16 = fVar16 * (float)uVar53;
  fVar33 = fVar33 * (float)((ulong)uVar53 >> 0x20);
  uVar53 = NEON_frsqrts(uVar68,CONCAT44(fVar33 * fVar33,fVar16 * fVar16),4);
  fVar16 = (float)uVar53 * fVar16;
  fVar33 = (float)((ulong)uVar53 >> 0x20) * fVar33;
  iVar36 = -(uint)(fVar108 <= 0.0);
  iVar38 = -(uint)(fVar109 <= 0.0);
  bVar72 = SUB41(fVar16,0) & ~(byte)iVar36;
  bVar73 = (byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar36 >> 8);
  bVar74 = (byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10);
  bVar75 = (byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18);
  bVar76 = SUB41(fVar33,0) & ~(byte)iVar38;
  bVar78 = (byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar38 >> 8);
  bVar80 = (byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10);
  bVar82 = (byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18);
  auVar26._4_4_ = fVar66;
  auVar26._0_4_ = fVar64;
  auVar26._8_4_ = fVar71;
  auVar26._12_4_ = fVar91;
  auVar28._4_4_ = fVar66;
  auVar28._0_4_ = fVar64;
  auVar28._8_4_ = fVar71;
  auVar28._12_4_ = fVar91;
  auVar13 = NEON_ext(auVar26,auVar28,4,1);
  fVar108 = fVar108 * (float)CONCAT13(bVar75,CONCAT12(bVar74,CONCAT11(bVar73,bVar72)));
  fVar16 = (float)CONCAT13(bVar75,CONCAT12(bVar74,CONCAT11(bVar73,bVar72)));
  uVar103 = -(uint)(fVar108 < 1.1920929e-07);
  fVar86 = fVar86 * (float)CONCAT13(bVar75,CONCAT12(bVar74,CONCAT11(bVar73,bVar72)));
  fVar45 = fVar45 * (float)CONCAT13(bVar82,CONCAT12(bVar80,CONCAT11(bVar78,bVar76)));
  fVar47 = fVar47 * fVar16;
  fVar65 = ((fVar52 + (fVar11 + fVar48 * (float)((ulong)*(undefined8 *)(param_4 + 0xe) >> 0x20)) *
                      fVar65 + fVar96) - fVar84) *
           (float)(CONCAT17(bVar82,CONCAT16(bVar80,CONCAT15(bVar78,CONCAT14(bVar76,fVar16)))) >>
                  0x20);
  auVar4._4_4_ = fVar92;
  auVar4._0_4_ = fVar89;
  auVar4._8_4_ = fVar94;
  auVar4._12_4_ = fVar96;
  auVar5._4_4_ = fVar92;
  auVar5._0_4_ = fVar89;
  auVar5._8_4_ = fVar94;
  auVar5._12_4_ = fVar96;
  auVar26 = NEON_ext(auVar4,auVar5,4,1);
  fVar16 = (float)((uint)fVar86 ^ ((uint)fVar86 ^ _DAT_03888db0) & uVar103) * fVar52;
  fVar33 = (float)((uint)fVar45 ^ ((uint)fVar45 ^ _UNK_03888db4) & uVar103) * fVar52;
  fVar104 = (float)((uint)fVar47 ^ ((uint)fVar47 ^ (uint)_UNK_03888db8) & uVar103) * fVar52;
  fVar83 = (float)((uint)fVar65 ^ ((uint)fVar65 ^ (uint)((ulong)_UNK_03888db8 >> 0x20)) & uVar103) *
           fVar52;
  fVar45 = auVar19._0_4_;
  fVar47 = auVar19._4_4_;
  auVar14 = NEON_ext(auVar19,auVar19,4,1);
  auVar101._0_4_ = 0.0 - fVar16;
  auVar101._4_4_ = 0.0 - fVar33;
  auVar101._8_4_ = 0.0 - fVar104;
  auVar101._12_4_ = 0.0 - fVar83;
  auVar18 = NEON_ext(auVar101,auVar101,4,1);
  fVar85 = fVar64 * auVar14._0_4_ - auVar13._0_4_ * fVar45;
  fVar87 = fVar66 * auVar14._4_4_ - auVar13._4_4_ * fVar47;
  fVar65 = fVar71 * fVar45 - fVar64 * auVar19._8_4_;
  fVar57 = fVar91 * fVar47 - fVar66 * auVar19._12_4_;
  auVar31._4_4_ = fVar87;
  auVar31._0_4_ = fVar85;
  auVar31._8_4_ = fVar65;
  auVar31._12_4_ = fVar57;
  auVar40._4_4_ = fVar87;
  auVar40._0_4_ = fVar85;
  auVar40._8_4_ = fVar65;
  auVar40._12_4_ = fVar57;
  auVar13 = NEON_ext(auVar31,auVar40,4,1);
  fVar64 = fVar89 * auVar18._0_4_ - auVar26._0_4_ * auVar101._0_4_;
  fVar102 = fVar92 * auVar18._4_4_ - auVar26._4_4_ * auVar101._4_4_;
  auVar61._0_8_ = CONCAT44(fVar102,fVar64);
  auVar61._8_4_ = fVar94 * auVar101._0_4_ - fVar89 * auVar101._8_4_;
  auVar61._12_4_ = fVar96 * auVar101._4_4_ - fVar92 * auVar101._12_4_;
  uVar53 = NEON_ext(auVar13._0_8_,CONCAT44(fVar87,fVar85),4,1);
  fVar71 = auVar13._0_4_;
  fVar91 = auVar13._4_4_;
  auVar13 = NEON_ext(auVar61,auVar61,4,1);
  uVar29 = NEON_ext(auVar13._0_8_,auVar61._0_8_,4,1);
  auVar62._0_4_ = auVar55._0_4_ * fVar71 - auVar51._0_4_ * (float)uVar53;
  auVar62._4_4_ = auVar55._4_4_ * fVar91 - auVar51._4_4_ * (float)((ulong)uVar53 >> 0x20);
  auVar62._8_4_ = auVar51._0_4_ * fVar85 - auVar51._8_4_ * fVar71;
  auVar62._12_4_ = auVar51._4_4_ * fVar87 - auVar51._12_4_ * fVar91;
  auVar26 = NEON_ext(auVar62,auVar62,4,1);
  fVar65 = auVar13._0_4_;
  fVar48 = auVar13._4_4_;
  fVar63 = auVar51._0_4_ * fVar71 + auVar51._4_4_ * fVar91 + auVar51._8_4_ * fVar85;
  fVar89 = auVar51._0_4_ * fVar71 + auVar51._4_4_ * fVar91 + auVar51._8_4_ * fVar85;
  pauVar1 = (undefined1 (*) [12])(param_4 + 8);
  fVar95 = (float)*(undefined8 *)(param_4 + 10);
  fVar57 = (float)((ulong)*(undefined8 *)(param_4 + 10) >> 0x20);
  fVar90 = (float)*(undefined8 *)*pauVar1;
  fVar93 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar56._0_4_ = auVar50._0_4_ * fVar65 - auVar43._0_4_ * (float)uVar29;
  auVar56._4_4_ = auVar50._4_4_ * fVar48 - auVar43._4_4_ * (float)((ulong)uVar29 >> 0x20);
  auVar56._8_4_ = auVar43._0_4_ * fVar64 - auVar43._8_4_ * fVar65;
  auVar56._12_4_ = auVar43._4_4_ * fVar102 - auVar43._12_4_ * fVar48;
  fVar66 = auVar43._0_4_ * fVar65 + auVar43._4_4_ * fVar48 + auVar43._8_4_ * fVar64;
  fVar92 = auVar43._0_4_ * fVar65 + auVar43._4_4_ * fVar48 + auVar43._8_4_ * fVar64;
  auVar28 = NEON_ext(auVar56,auVar56,4,1);
  auVar13._12_4_ = fVar52;
  auVar13._0_12_ = *param_2;
  auVar14._12_4_ = fVar52;
  auVar14._0_12_ = *param_2;
  auVar18 = NEON_ext(auVar13,auVar14,8,1);
  pauVar2 = (undefined1 (*) [12])(param_3 + 8);
  fVar88 = (float)*(undefined8 *)(param_3 + 10);
  fVar86 = (float)((ulong)*(undefined8 *)(param_3 + 10) >> 0x20);
  fVar94 = (float)*(undefined8 *)*pauVar2;
  fVar96 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
  auVar50._12_4_ = fVar86;
  auVar50._0_12_ = *pauVar2;
  auVar55._12_4_ = fVar86;
  auVar55._0_12_ = *pauVar2;
  auVar14 = NEON_ext(auVar50,auVar55,8,1);
  fVar71 = auVar26._0_4_ * auVar51._12_4_ + fVar99 * fVar71 + auVar51._0_4_ * fVar63;
  fVar91 = auVar26._4_4_ * auVar51._12_4_ + fVar100 * fVar91 + auVar51._4_4_ * fVar89;
  fVar85 = auVar62._0_4_ * auVar51._12_4_ + fVar99 * fVar85 + auVar51._8_4_ * fVar63;
  fVar89 = auVar62._4_4_ * auVar51._12_4_ + fVar100 * fVar87 + auVar51._12_4_ * fVar89;
  fVar71 = fVar71 + fVar71;
  fVar91 = fVar91 + fVar91;
  fVar85 = fVar85 + fVar85;
  auVar6._12_4_ = fVar57;
  auVar6._0_12_ = *pauVar1;
  auVar7._12_4_ = fVar57;
  auVar7._0_12_ = *pauVar1;
  auVar13 = NEON_ext(auVar6,auVar7,8,1);
  fVar63 = fVar67 * fVar65 + auVar43._0_4_ * fVar66 + auVar28._0_4_ * auVar43._12_4_;
  fVar48 = fVar106 * fVar48 + auVar43._4_4_ * fVar92 + auVar28._4_4_ * auVar43._12_4_;
  fVar64 = fVar67 * fVar64 + auVar43._8_4_ * fVar66 + auVar56._0_4_ * auVar43._12_4_;
  fVar66 = fVar106 * fVar102 + auVar43._12_4_ * fVar92 + auVar56._4_4_ * auVar43._12_4_;
  fVar63 = fVar63 + fVar63;
  fVar48 = fVar48 + fVar48;
  fVar64 = fVar64 + fVar64;
  fVar92 = auVar14._4_4_ + auVar18._4_4_ * auVar18._4_4_ * auVar13._4_4_;
  fVar102 = fVar94 * fVar71 * fVar71 + fVar90 * fVar63 * fVar63;
  fVar67 = fVar96 * fVar91 * fVar91 + fVar93 * fVar48 * fVar48;
  fVar106 = fVar88 * fVar85 * fVar85 + fVar95 * fVar64 * fVar64;
  fVar65 = fVar92 + 1.1920929e-07 + fVar102 + fVar67 + fVar106;
  fVar102 = fVar92 + 1.1920929e-07 + fVar102 + fVar67 + fVar106;
  uVar53 = CONCAT44(fVar102,fVar65);
  uVar29 = NEON_frecpe(uVar53,4);
  uVar68 = NEON_frecps(uVar53,uVar29,4);
  fVar92 = (float)uVar29 * (float)uVar68;
  fVar67 = (float)((ulong)uVar29 >> 0x20) * (float)((ulong)uVar68 >> 0x20);
  uVar53 = NEON_frecps(uVar53,CONCAT44(fVar67,fVar92),4);
  iVar36 = -(uint)(fVar65 == 0.0);
  iVar38 = -(uint)(fVar102 == 0.0);
  uVar24 = CONCAT44(fVar67 * (float)((ulong)uVar53 >> 0x20),fVar92 * (float)uVar53) &
           CONCAT17(~(byte)((uint)iVar38 >> 0x18),
                    CONCAT16(~(byte)((uint)iVar38 >> 0x10),
                             CONCAT15(~(byte)((uint)iVar38 >> 8),
                                      CONCAT14(~(byte)iVar38,
                                               CONCAT13(~(byte)((uint)iVar36 >> 0x18),
                                                        CONCAT12(~(byte)((uint)iVar36 >> 0x10),
                                                                 CONCAT11(~(byte)((uint)iVar36 >> 8)
                                                                          ,~(byte)iVar36)))))));
  fVar34 = (fVar70 + (((fVar105 * fVar34 + fVar108 * fVar52) - fVar44) - fVar58) *
                     (float)*(undefined8 *)(param_1 + 0x40) * fVar84) * (float)uVar24;
  fVar65 = (fVar70 + (((fVar107 * fVar46 +
                       fVar109 * (float)CONCAT13(bVar82,CONCAT12(bVar80,CONCAT11(bVar78,bVar76))) *
                       fVar52) - fVar44) - fVar58) *
                     (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) * fVar84) *
           (float)(uVar24 >> 0x20);
  fVar86 = fVar86 * fVar65;
  fVar57 = fVar57 * fVar65;
  param_3[2] = param_3[2] + auVar19._8_4_ * fVar86;
  param_3[3] = param_3[3] + auVar19._12_4_ * fVar86;
  *param_3 = *param_3 + fVar45 * fVar86;
  param_3[1] = param_3[1] + fVar47 * fVar86;
  param_3[6] = param_3[6] + fVar85 * fVar88 * fVar34;
  param_3[7] = param_3[7] + (fVar89 + fVar89) * fVar86;
  param_3[4] = param_3[4] + fVar71 * fVar94 * fVar34;
  param_3[5] = param_3[5] + fVar91 * fVar96 * fVar65;
  fVar84 = *param_5;
  param_4[2] = fVar10 - fVar104 * fVar57;
  param_4[3] = fVar11 - fVar83 * fVar57;
  *param_4 = fVar8 - fVar16 * fVar57;
  param_4[1] = fVar9 - fVar33 * fVar57;
  *(ulong *)(param_4 + 6) =
       CONCAT44((float)((ulong)uVar23 >> 0x20) + (fVar66 + fVar66) * fVar57,
                fVar22 + fVar64 * fVar95 * fVar34);
  *(ulong *)(param_4 + 4) =
       CONCAT44(fVar21 + fVar48 * fVar93 * fVar65,fVar20 + fVar63 * fVar90 * fVar34);
  *param_5 = fVar84 + fVar34;
  return;
}


