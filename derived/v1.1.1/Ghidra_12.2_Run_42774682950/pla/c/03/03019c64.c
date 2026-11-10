/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03019c64; name: FUN_03019c64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_03019c64(long param_1,long param_2,long param_3,float *param_4,undefined8 *param_5,
            undefined1 (*param_6) [16])

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [14];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined2 uVar16;
  uint uVar17;
  undefined8 *puVar18;
  undefined2 uVar19;
  undefined2 uVar20;
  uint *puVar21;
  uint *puVar22;
  undefined8 *puVar23;
  int iVar24;
  uint uVar25;
  float fVar26;
  undefined8 uVar27;
  int iVar39;
  int iVar41;
  undefined1 auVar28 [12];
  undefined1 auVar31 [12];
  undefined1 auVar32 [12];
  undefined1 auVar33 [16];
  undefined1 auVar29 [12];
  undefined1 auVar30 [12];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar40;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar42;
  undefined8 uVar43;
  undefined1 auVar44 [12];
  float fVar49;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar50;
  float fVar51;
  undefined1 auVar48 [16];
  int iVar52;
  float fVar53;
  float fVar54;
  int iVar59;
  float fVar60;
  float fVar61;
  int iVar62;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  int iVar63;
  int iVar66;
  int iVar67;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  int iVar68;
  int iVar73;
  undefined8 uVar69;
  int iVar74;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar75;
  undefined8 uVar77;
  float fVar84;
  float fVar85;
  float fVar86;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar76;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined8 uVar87;
  undefined1 auVar88 [12];
  undefined1 auVar89 [12];
  undefined1 auVar90 [16];
  float fVar96;
  float fVar97;
  float fVar98;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  float fVar109;
  float fVar110;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  float fVar114;
  float fVar118;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  float fVar119;
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  float fVar122;
  float fVar128;
  float fVar129;
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  float fVar130;
  double dVar131;
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  double dVar134;
  double dVar135;
  float local_120;
  float fStack_11c;
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if ((*(byte *)((long)param_5 + 0x59) >> 2 & 1) == 0) {
    uVar19 = 0;
    uVar20 = 0;
    uVar16 = 0;
  }
  else {
    if (param_5[0xf] == 0) goto LAB_03019cc4;
    fVar49 = *(float *)(param_6[3] + 4);
    fVar51 = (float)*(undefined8 *)(param_2 + 0x10);
    fVar122 = *(float *)(param_6[2] + 8) * fVar51;
    fVar50 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
    fVar128 = *(float *)(param_6[2] + 0xc) * fVar50;
    fVar129 = *(float *)param_6[3] * fVar51;
    auVar121._4_4_ = fVar49;
    auVar121._0_4_ = fVar49;
    auVar121._8_4_ = fVar49;
    auVar121._12_4_ = fVar49;
    fVar42 = *(float *)(param_5[0xf] + 0x20);
    auVar99._8_8_ = _UNK_03888e28;
    auVar99._0_8_ = _DAT_03888e20;
    auVar107._8_8_ = _UNK_03888d78;
    auVar107._0_8_ = _DAT_03888d70;
    auVar120._8_8_ = _UNK_03889108;
    auVar120._0_8_ = _DAT_03889100;
    auVar6._2_12_ = auVar121._4_12_;
    auVar6._0_2_ = *(ushort *)((long)param_5 + 0x94);
    auVar123._0_4_ = fVar122 * fVar122;
    auVar123._4_4_ = fVar128 * fVar128;
    auVar123._8_4_ = fVar129 * fVar129;
    auVar123._12_4_ = fVar49 * fVar50 * fVar49 * fVar50;
    auVar35 = NEON_ext(auVar123,auVar123,8,1);
    fVar128 = auVar35._0_4_ + auVar123._0_4_ + auVar123._4_4_;
    fVar122 = (float)*(undefined8 *)(param_6[3] + 8);
    auVar94._0_4_ = fVar122 * fVar122;
    fVar122 = (float)((ulong)*(undefined8 *)(param_6[3] + 8) >> 0x20);
    auVar94._4_4_ = fVar122 * fVar122;
    auVar94._8_4_ = fVar49 * fVar49;
    auVar94._12_4_ = 0;
    auVar100._0_4_ = -*(float *)(param_5 + 0x14);
    auVar100._4_4_ = -*(float *)((long)param_5 + 0xa4);
    auVar100._8_4_ = -*(float *)(param_5 + 0x15);
    auVar100._12_4_ = *(undefined4 *)((long)param_5 + 0xac);
    auVar35 = NEON_ext(auVar94,auVar94,8,1);
    auVar111._8_8_ = _UNK_038890f8;
    auVar111._0_8_ = _DAT_038890f0;
    auVar80 = a64_TBL(ZEXT816(0),*param_6,auVar99);
    auVar112 = a64_TBL(ZEXT816(0),*param_6,auVar111);
    auVar47 = NEON_frsqrte(ZEXT416((uint)fVar128),4);
    uVar43 = NEON_fmax(CONCAT44((float)((uint)*(ushort *)((long)param_5 + 0x94) << 0x10) - fVar42,
                                (float)(auVar6._0_4_ << 0x10) - fVar42),0,4);
    auVar121 = a64_TBL(ZEXT816(0),auVar100,auVar120);
    fVar42 = auVar47._0_4_;
    auVar124._0_4_ = fVar42 * fVar42;
    fVar49 = auVar47._4_4_;
    auVar124._4_4_ = fVar49 * fVar49;
    fVar129 = auVar47._8_4_;
    auVar124._8_4_ = fVar129 * fVar129;
    fVar118 = auVar47._12_4_;
    auVar124._12_4_ = fVar118 * fVar118;
    iVar24 = -(uint)(fVar128 <= 0.0);
    auVar47 = a64_TBL(ZEXT816(0),auVar100,auVar107);
    uVar27 = *(undefined8 *)(param_2 + 0x48);
    auVar70._0_4_ = auVar35._0_4_ + auVar94._0_4_ + auVar94._4_4_ + 1.4210855e-14;
    auVar70._4_4_ = 0x28800000;
    auVar70._8_4_ = 0x28800000;
    auVar70._12_4_ = 0x28800000;
    auVar35 = NEON_frsqrts(ZEXT416((uint)fVar128),auVar124,4);
    auVar100 = NEON_frsqrte(auVar70,4);
    fVar42 = fVar42 * auVar35._0_4_;
    fVar49 = fVar49 * auVar35._4_4_;
    fVar129 = fVar129 * auVar35._8_4_;
    fVar118 = fVar118 * auVar35._12_4_;
    fVar122 = auVar100._0_4_;
    auVar132._0_4_ = fVar122 * fVar122;
    fVar96 = auVar100._4_4_;
    auVar132._4_4_ = fVar96 * fVar96;
    fVar97 = auVar100._8_4_;
    auVar132._8_4_ = fVar97 * fVar97;
    fVar98 = auVar100._12_4_;
    auVar132._12_4_ = fVar98 * fVar98;
    auVar35 = NEON_frsqrts(auVar70,auVar132,4);
    auVar133._0_4_ = fVar42 * fVar42;
    auVar133._4_4_ = fVar49 * fVar49;
    auVar133._8_4_ = fVar129 * fVar129;
    auVar133._12_4_ = fVar118 * fVar118;
    auVar100 = NEON_frsqrts(ZEXT416((uint)fVar128),auVar133,4);
    fVar122 = fVar122 * auVar35._0_4_;
    fVar96 = fVar96 * auVar35._4_4_;
    fVar97 = fVar97 * auVar35._8_4_;
    fVar98 = fVar98 * auVar35._12_4_;
    auVar35 = NEON_fmov(0x3f800000,4);
    fVar42 = auVar100._0_4_ * fVar42;
    fVar128 = fVar128 * (float)CONCAT13((byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18)
                                        ,CONCAT12((byte)((uint)fVar42 >> 0x10) &
                                                  ~(byte)((uint)iVar24 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar42 >> 8) &
                                                           ~(byte)((uint)iVar24 >> 8),
                                                           SUB41(fVar42,0) & ~(byte)iVar24)));
    auVar35 = NEON_smin(ZEXT416((uint)fVar128),auVar35,4);
    auVar125._8_8_ = _UNK_038895d8;
    auVar125._0_8_ = _DAT_038895d0;
    fVar129 = (float)uVar43 * auVar35._0_4_;
    fVar86 = (float)((ulong)uVar43 >> 0x20);
    fVar118 = fVar86 * auVar35._4_4_;
    fVar84 = (float)uVar43 * auVar35._8_4_;
    fVar86 = fVar86 * auVar35._12_4_;
    auVar115._0_4_ = auVar80._0_4_ * auVar121._0_4_ - auVar112._0_4_ * auVar47._0_4_;
    auVar115._4_4_ = auVar80._4_4_ * auVar121._4_4_ - auVar112._4_4_ * auVar47._4_4_;
    auVar115._8_4_ = auVar80._8_4_ * auVar121._8_4_ - auVar112._8_4_ * auVar47._8_4_;
    auVar115._12_4_ = auVar80._12_4_ * auVar121._12_4_ - auVar112._12_4_ * auVar47._12_4_;
    uVar43 = NEON_fmov(0x3f800000,4);
    auVar35 = a64_TBL(ZEXT816(0),auVar115,auVar125);
    fVar49 = auVar35._12_4_ - (auVar80._12_4_ * auVar47._12_4_ + auVar112._12_4_ * auVar121._12_4_);
    fVar109 = -(auVar35._0_4_ - (auVar80._0_4_ * auVar47._0_4_ + auVar112._0_4_ * auVar121._0_4_));
    fVar53 = -(auVar35._4_4_ - (auVar80._4_4_ * auVar47._4_4_ + auVar112._4_4_ * auVar121._4_4_));
    auVar113._0_8_ = CONCAT44(fVar53,fVar109);
    auVar113._8_4_ =
         -(auVar35._8_4_ - (auVar80._8_4_ * auVar47._8_4_ + auVar112._8_4_ * auVar121._8_4_));
    auVar113._12_4_ = -fVar49;
    auVar116._8_8_ = auVar113._8_8_;
    auVar116._0_8_ = auVar113._0_8_;
    auVar117._0_12_ = auVar116._0_12_;
    auVar117._12_4_ = fVar49;
    auVar108._0_4_ = fVar109 + fVar109;
    auVar108._4_4_ = fVar53 + fVar53;
    auVar108._8_4_ = auVar113._8_4_ + auVar113._8_4_;
    auVar108._12_4_ = fVar49 + fVar49;
    auVar35 = NEON_ext(auVar117,auVar117,8,1);
    auVar47 = NEON_ext(auVar108,auVar108,8,1);
    fVar42 = auVar35._0_4_ * auVar47._0_4_;
    fVar75 = auVar108._4_4_ * fVar109 + auVar108._8_4_ * fVar49;
    fVar61 = auVar108._4_4_ * fVar109 - auVar108._8_4_ * fVar49;
    fVar40 = (float)uVar43;
    fVar60 = fVar40 - (auVar108._4_4_ * fVar53 + fVar42);
    fVar85 = fVar40 - (auVar108._0_4_ * fVar109 + fVar42);
    fVar119 = auVar108._8_4_ * fVar109 - auVar108._4_4_ * fVar49;
    fVar26 = auVar108._8_4_ * fVar53 + auVar108._0_4_ * fVar49;
    fVar54 = auVar108._8_4_ * fVar53 - auVar108._0_4_ * fVar49;
    fVar42 = auVar108._8_4_ * fVar109 + auVar108._4_4_ * fVar49;
    fVar40 = fVar40 - (auVar108._0_4_ * fVar109 + auVar108._4_4_ * fVar53);
    fVar76 = (float)((ulong)param_5[3] >> 0x20);
    iVar24 = -(uint)(auVar70._0_4_ <= 0.0);
    fVar53 = (float)((ulong)param_5[1] >> 0x20);
    fVar102 = (float)((ulong)param_5[5] >> 0x20);
    dVar134 = *(double *)param_6[2];
    dVar135 = *(double *)param_6[1];
    dVar131 = *(double *)(param_6[1] + 8);
    *param_5 = CONCAT44(fVar75,fVar60);
    param_5[2] = CONCAT44(fVar85,fVar61);
    param_5[4] = CONCAT44(fVar54,fVar42);
    dVar135 = dVar135 - (double)(fVar42 * fVar102 + fVar60 * fVar53 + fVar61 * fVar76);
    fVar42 = (float)uVar27;
    fVar49 = (float)((ulong)uVar27 >> 0x20);
    dVar131 = dVar131 - (double)(fVar54 * fVar102 + fVar75 * fVar53 + fVar85 * fVar76);
    auVar35._4_4_ = fVar96 * fVar96;
    auVar35._0_4_ = fVar122 * fVar122;
    auVar35._8_4_ = fVar97 * fVar97;
    auVar35._12_4_ = fVar98 * fVar98;
    auVar35 = NEON_frsqrts(auVar70,auVar35,4);
    fVar122 = fVar122 * auVar35._0_4_;
    fVar96 = fVar96 * auVar35._4_4_;
    fVar97 = fVar97 * auVar35._8_4_;
    fVar98 = fVar98 * auVar35._12_4_;
    fVar109 = (float)CONCAT13((byte)((uint)fVar122 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                              CONCAT12((byte)((uint)fVar122 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10)
                                       ,CONCAT11((byte)((uint)fVar122 >> 8) &
                                                 ~(byte)((uint)iVar24 >> 8),
                                                 SUB41(fVar122,0) & ~(byte)iVar24)));
    uVar27 = CONCAT17((char)((uint)fVar96 >> 0x18),
                      CONCAT16((char)((uint)fVar96 >> 0x10),
                               CONCAT15((char)((uint)fVar96 >> 8),CONCAT14(SUB41(fVar96,0),fVar109))
                              ));
    auVar88[8] = SUB41(fVar97,0);
    auVar88._0_8_ = uVar27;
    auVar88[9] = (undefined1)((uint)fVar97 >> 8);
    auVar88[10] = (undefined1)((uint)fVar97 >> 0x10);
    auVar88[0xb] = (undefined1)((uint)fVar97 >> 0x18);
    auVar91[0xc] = SUB41(fVar98,0);
    auVar91._0_12_ = auVar88;
    auVar91[0xd] = (undefined1)((uint)fVar98 >> 8);
    auVar91[0xe] = (undefined1)((uint)fVar98 >> 0x10);
    auVar91[0xf] = (undefined1)((uint)fVar98 >> 0x18);
    auVar126._0_4_ = (int)(fVar129 * fVar42 + 0.999);
    auVar126._4_4_ = (int)(fVar118 * fVar49 + 0.999);
    auVar126._8_4_ = (int)(fVar84 * fVar42 + 0.999);
    auVar126._12_4_ = (int)(fVar86 * fVar49 + 0.999);
    dVar134 = dVar134 - (double)(fVar40 * fVar102 + fVar119 * fVar53 + fVar26 * fVar76);
    fVar97 = (float)dVar135;
    *(float *)(param_5 + 1) = fVar119;
    fVar122 = (float)dVar131;
    fVar96 = (float)dVar134;
    auVar35 = NEON_smax(auVar126,ZEXT816(0),4);
    auVar127._8_8_ = 0xffff0000ffff;
    auVar127._0_8_ = 0xffff0000ffff;
    auVar35 = NEON_smin(auVar127,auVar35,4);
    uVar16 = auVar35._0_2_;
    *(float *)(param_5 + 3) = fVar26;
    auVar80._0_4_ = fVar128 * 41720.875 + 0.999;
    auVar80._4_4_ = 0x3f7fbe77;
    auVar80._8_4_ = 0x3f7fbe77;
    auVar80._12_4_ = 0x3f7fbe77;
    *(float *)(param_5 + 5) = fVar40;
    auVar112._8_4_ = 0x477fff00;
    auVar112._0_8_ = 0x477fff00477fff00;
    auVar112._12_4_ = 0x477fff00;
    *(float *)(param_5 + 7) = fVar96;
    auVar47._0_4_ = (int)(fVar42 * (fVar129 + fVar51 * auVar70._0_4_ * fVar109) + 0.999);
    auVar47._4_4_ =
         (int)(fVar49 * (fVar118 + fVar50 * (float)((ulong)uVar27 >> 0x20) * 1.4210855e-14) + 0.999)
    ;
    auVar47._8_4_ = (int)(fVar42 * (fVar84 + fVar51 * auVar88._8_4_ * 1.4210855e-14) + 0.999);
    auVar47._12_4_ = (int)(fVar49 * (fVar86 + fVar50 * auVar91._12_4_ * 1.4210855e-14) + 0.999);
    auVar35 = NEON_smax(auVar47,ZEXT816(0),4);
    auVar47 = NEON_fmin(auVar80,auVar112,4);
    auVar35 = NEON_smin(auVar127,auVar35,4);
    uVar19 = (undefined2)(int)auVar47._0_4_;
    uVar20 = auVar35._0_2_;
    param_5[6] = CONCAT44(fVar122,fVar97);
    *(float *)(param_5 + 9) = (float)(dVar134 - (double)fVar96);
    param_5[8] = CONCAT44((float)(dVar131 - (double)fVar122),(float)(dVar135 - (double)fVar97));
  }
  *(undefined2 *)((long)param_5 + 0x5a) = uVar19;
  *(undefined2 *)((long)param_5 + 0x5c) = uVar20;
  *(undefined2 *)((long)param_5 + 0x5e) = uVar16;
LAB_03019cc4:
  fVar42 = (float)*(undefined8 *)(param_2 + 0x58) * 0.5;
  fVar49 = (float)((ulong)*(undefined8 *)(param_2 + 0x58) >> 0x20) * 0.5;
  uVar27 = NEON_fmax(CONCAT44(*(float *)((long)param_5 + 0x3c) - fVar49,
                              *(float *)((long)param_5 + 0x3c) - fVar42),CONCAT44(fVar49,fVar42),4);
  local_120 = (float)uVar27;
  fStack_11c = (float)((ulong)uVar27 >> 0x20);
  (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(param_5[0xf] + 0x18) * 0x200 + 0x18))
            (param_5[0xf],param_5,&local_f0);
  uVar14 = uStack_d8;
  uVar13 = uStack_e0;
  uVar43 = uStack_e8;
  uVar27 = local_f0;
  fVar50 = *(float *)param_6[6];
  fVar122 = *(float *)(param_6[6] + 4);
  fVar128 = *(float *)(param_6[6] + 8);
  fVar42 = *(float *)param_6[7];
  fVar49 = *(float *)(param_6[7] + 4);
  fVar51 = *(float *)(param_6[7] + 8);
  iVar52 = -(uint)(fVar42 == 0.0);
  iVar59 = -(uint)(fVar49 == 0.0);
  iVar62 = -(uint)(fVar51 == 0.0);
  fVar119 = *(float *)(param_2 + 0x68);
  iVar24 = -(uint)(fVar50 == 0.0);
  iVar39 = -(uint)(fVar122 == 0.0);
  iVar41 = -(uint)(fVar128 == 0.0);
  uVar25 = CONCAT13((byte)((uint)iVar52 >> 0x18) & (byte)((uint)iVar24 >> 0x18),
                    CONCAT12((byte)((uint)iVar52 >> 0x10) & (byte)((uint)iVar24 >> 0x10),
                             CONCAT11((byte)((uint)iVar52 >> 8) & (byte)((uint)iVar24 >> 8),
                                      (byte)iVar52 & (byte)iVar24)));
  auVar28._0_8_ =
       CONCAT17((byte)((uint)iVar59 >> 0x18) & (byte)((uint)iVar39 >> 0x18),
                CONCAT16((byte)((uint)iVar59 >> 0x10) & (byte)((uint)iVar39 >> 0x10),
                         CONCAT15((byte)((uint)iVar59 >> 8) & (byte)((uint)iVar39 >> 8),
                                  CONCAT14((byte)iVar59 & (byte)iVar39,uVar25))));
  auVar28[8] = (byte)iVar62 & (byte)iVar41;
  auVar28[9] = (byte)((uint)iVar62 >> 8) & (byte)((uint)iVar41 >> 8);
  auVar28[10] = (byte)((uint)iVar62 >> 0x10) & (byte)((uint)iVar41 >> 0x10);
  auVar28[0xb] = (byte)((uint)iVar62 >> 0x18) & (byte)((uint)iVar41 >> 0x18);
  auVar11._8_8_ = uStack_e8;
  auVar11._0_8_ = local_f0;
  auVar29 = auVar11._0_12_;
  auVar12._8_8_ = uStack_d8;
  auVar12._0_8_ = uStack_e0;
  auVar88 = auVar12._0_12_;
  fVar129 = (float)uStack_e0;
  fVar96 = (float)((ulong)uStack_e0 >> 0x20);
  fVar118 = (float)uStack_d8;
  fVar86 = (float)((ulong)uStack_d8 >> 0x20);
  fVar84 = (float)local_f0;
  fVar109 = (float)((ulong)local_f0 >> 0x20);
  fVar97 = (float)uStack_e8;
  fVar98 = (float)((ulong)uStack_e8 >> 0x20);
  if ((uVar25 & (uint)((ulong)auVar28._0_8_ >> 0x20) & auVar28._8_4_) == 0) {
    fVar26 = fVar51 * fVar51 + fVar42 * fVar42 + fVar49 * fVar49;
    fVar40 = fVar51 * fVar51 + fVar42 * fVar42 + fVar49 * fVar49;
    fVar53 = fVar128 * fVar128 + fVar50 * fVar50 + fVar122 * fVar122;
    fVar60 = fVar128 * fVar128 + fVar50 * fVar50 + fVar122 * fVar122;
    uVar69 = NEON_frsqrte(CONCAT44(fVar60,fVar53),4);
    fVar85 = (float)uVar69;
    fVar54 = (float)((ulong)uVar69 >> 0x20);
    uVar69 = NEON_frsqrts(CONCAT44(fVar60,fVar53),CONCAT44(fVar54 * fVar54,fVar85 * fVar85),4);
    iVar24 = -(uint)(fVar53 <= 0.0);
    iVar39 = -(uint)(fVar60 <= 0.0);
    fVar53 = fVar53 * fVar85 * (float)uVar69 * 1.0001;
    fVar60 = fVar60 * fVar54 * (float)((ulong)uVar69 >> 0x20) * 1.0001;
    fVar53 = (float)CONCAT13((byte)((uint)fVar53 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                             CONCAT12((byte)((uint)fVar53 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10),
                                      CONCAT11((byte)((uint)fVar53 >> 8) &
                                               ~(byte)((uint)iVar24 >> 8),
                                               SUB41(fVar53,0) & ~(byte)iVar24)));
    if (fVar26 <= 0.0) {
      uVar69 = *(undefined8 *)(param_2 + 0x30);
      fVar40 = local_120;
      fVar85 = fStack_11c;
    }
    else {
      uVar69 = NEON_frsqrte(CONCAT44(fVar40,fVar26),4);
      fVar54 = (float)uVar69;
      fVar61 = (float)((ulong)uVar69 >> 0x20);
      uVar69 = NEON_frsqrts(CONCAT44(fVar40,fVar26),CONCAT44(fVar61 * fVar61,fVar54 * fVar54),4);
      fVar85 = (float)((uint)*(ushort *)((long)param_5 + 0x94) << 0x10);
      iVar24 = -(uint)(fVar26 <= 0.0);
      iVar41 = -(uint)(fVar40 <= 0.0);
      fVar54 = fVar26 * fVar54 * (float)uVar69 * 1.0001;
      fVar61 = fVar40 * fVar61 * (float)((ulong)uVar69 >> 0x20) * 1.0001;
      fVar40 = (float)CONCAT13((byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                               CONCAT12((byte)((uint)fVar54 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar54 >> 8) &
                                                  ~(byte)((uint)iVar24 >> 8),
                                                  SUB41(fVar54,0) & ~(byte)iVar24)));
      uVar77 = NEON_fmax(CONCAT44(fVar85 - *(float *)(param_5[0xf] + 0x20),
                                  (float)((int)CONCAT42(fVar85,*(ushort *)((long)param_5 + 0x94)) <<
                                         0x10) - *(float *)(param_5[0xf] + 0x20)),0,4);
      uVar69 = *(undefined8 *)(param_2 + 0x30);
      uVar87 = NEON_fmov(0x3f800000,4);
      uVar87 = NEON_fmin(CONCAT44((float)(CONCAT17((byte)((uint)fVar61 >> 0x18) &
                                                   ~(byte)((uint)iVar41 >> 0x18),
                                                   CONCAT16((byte)((uint)fVar61 >> 0x10) &
                                                            ~(byte)((uint)iVar41 >> 0x10),
                                                            CONCAT15((byte)((uint)fVar61 >> 8) &
                                                                     ~(byte)((uint)iVar41 >> 8),
                                                                     CONCAT14(SUB41(fVar61,0) &
                                                                              ~(byte)iVar41,fVar40))
                                                           )) >> 0x20) *
                                  (float)((ulong)uVar69 >> 0x20),fVar40 * (float)uVar69),uVar87,4);
      fVar40 = local_120 + (float)uVar77 * (float)uVar87;
      fVar85 = fStack_11c + (float)((ulong)uVar77 >> 0x20) * (float)((ulong)uVar87 >> 0x20);
    }
    fVar76 = (float)uVar69;
    fVar104 = fVar53 * fVar76;
    fVar75 = (float)((ulong)uVar69 >> 0x20);
    fVar105 = (float)(CONCAT17((byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18),
                               CONCAT16((byte)((uint)fVar60 >> 0x10) & ~(byte)((uint)iVar39 >> 0x10)
                                        ,CONCAT15((byte)((uint)fVar60 >> 8) &
                                                  ~(byte)((uint)iVar39 >> 8),
                                                  CONCAT14(SUB41(fVar60,0) & ~(byte)iVar39,fVar53)))
                              ) >> 0x20) * fVar75;
    fVar102 = fVar40 + 0.0;
    fVar103 = fVar85 + 0.0;
    fVar53 = fVar50 * fVar76;
    fVar60 = fVar122 * fVar75;
    fVar54 = fVar128 * fVar76;
    fVar61 = *(float *)(param_6[6] + 0xc) * fVar75;
    if ((*(uint *)(param_3 + 0x20) & 0x380) == 0x80) {
      fVar42 = fVar54 * fVar54 + fVar53 * fVar53 + fVar60 * fVar60;
      fVar49 = fVar54 * fVar54 + fVar53 * fVar53 + fVar60 * fVar60;
      uVar27 = CONCAT44(fVar49,fVar42);
      uVar43 = NEON_frsqrte(uVar27,4);
      fVar51 = (float)uVar43;
      fVar26 = (float)((ulong)uVar43 >> 0x20);
      uVar43 = NEON_frsqrts(uVar27,CONCAT44(fVar26 * fVar26,fVar51 * fVar51),4);
      fVar51 = fVar51 * (float)uVar43;
      fVar26 = fVar26 * (float)((ulong)uVar43 >> 0x20);
      uVar27 = NEON_frsqrts(uVar27,CONCAT44(fVar26 * fVar26,fVar51 * fVar51),4);
      iVar24 = -(uint)(fVar42 <= 0.0);
      iVar39 = -(uint)(fVar49 <= 0.0);
      fVar42 = fVar42 * (float)uVar27 * fVar51 * 0.5;
      fVar49 = fVar49 * (float)((ulong)uVar27 >> 0x20) * fVar26 * 0.5;
      fVar42 = (float)CONCAT13((byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                               CONCAT12((byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar42 >> 8) &
                                                  ~(byte)((uint)iVar24 >> 8),
                                                  SUB41(fVar42,0) & ~(byte)iVar24)));
      fVar49 = (float)(CONCAT17((byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18),
                                CONCAT16((byte)((uint)fVar49 >> 0x10) &
                                         ~(byte)((uint)iVar39 >> 0x10),
                                         CONCAT15((byte)((uint)fVar49 >> 8) &
                                                  ~(byte)((uint)iVar39 >> 8),
                                                  CONCAT14(SUB41(fVar49,0) & ~(byte)iVar39,fVar42)))
                               ) >> 0x20);
      auVar95._0_4_ = fVar129 + fVar40 + fVar53 * 0.5 + fVar42;
      auVar95._4_4_ = fVar96 + fVar85 + fVar60 * 0.5 + fVar49;
      auVar95._8_4_ = fVar118 + fVar40 + fVar54 * 0.5 + fVar42;
      auVar95._12_4_ = fVar86 + fVar85 + fVar61 * 0.5 + fVar49;
      auVar83._0_4_ = fVar84 + ((fVar53 * 0.5 - fVar42) - fVar40);
      auVar83._4_4_ = fVar109 + ((fVar60 * 0.5 - fVar49) - fVar85);
      auVar83._8_4_ = fVar97 + ((fVar54 * 0.5 - fVar42) - fVar40);
      auVar83._12_4_ = fVar98 + ((fVar61 * 0.5 - fVar49) - fVar85);
    }
    else if (((*(uint *)(param_3 + 0x20) >> 0x11 & 1) == 0) ||
            (fVar106 = (float)*(undefined8 *)(param_2 + 0x18),
            fVar26 <= fVar106 * fVar106 * 0.010966227)) {
      auVar36._0_4_ = fVar84 + fVar53;
      auVar36._4_4_ = fVar109 + fVar60;
      auVar36._8_4_ = fVar97 + fVar54;
      auVar36._12_4_ = fVar98 + fVar61;
      auVar46._0_4_ = fVar129 + fVar53;
      auVar46._4_4_ = fVar96 + fVar60;
      auVar46._8_4_ = fVar118 + fVar54;
      auVar46._12_4_ = fVar86 + fVar61;
      auVar35 = NEON_fmin(auVar36,auVar11,4);
      auVar47 = NEON_fmax(auVar46,auVar12,4);
      auVar83._0_4_ = auVar35._0_4_ - fVar40;
      auVar83._4_4_ = auVar35._4_4_ - fVar85;
      auVar83._8_4_ = auVar35._8_4_ - fVar40;
      auVar83._12_4_ = auVar35._12_4_ - fVar85;
      auVar95._0_4_ = fVar40 + auVar47._0_4_;
      auVar95._4_4_ = fVar85 + auVar47._4_4_;
      auVar95._8_4_ = fVar40 + auVar47._8_4_;
      auVar95._12_4_ = fVar85 + auVar47._12_4_;
    }
    else {
      auVar55._0_4_ = fVar42 * fVar76 * 0.5;
      auVar55._4_4_ = fVar49 * fVar75 * 0.5;
      auVar55._8_4_ = fVar51 * fVar76 * 0.5;
      auVar55._12_4_ = *(float *)(param_6[7] + 0xc) * fVar75 * 0.5;
      auVar100 = NEON_ext(auVar55,auVar55,4,1);
      fVar42 = auVar55._8_4_ * auVar55._8_4_ +
               auVar55._0_4_ * auVar55._0_4_ + auVar55._4_4_ * auVar55._4_4_;
      fVar51 = auVar55._8_4_ * auVar55._8_4_ +
               auVar55._0_4_ * auVar55._0_4_ + auVar55._4_4_ * auVar55._4_4_;
      auVar35 = *param_6;
      auVar47 = NEON_ext(auVar35,auVar35,8,1);
      fVar26 = auVar35._0_4_;
      fVar40 = auVar35._4_4_;
      fVar85 = auVar35._8_4_;
      fVar76 = auVar35._12_4_;
      uVar69 = NEON_ext(auVar35._0_8_,auVar47._0_8_,4,1);
      auVar48._0_4_ = auVar100._0_4_ * fVar26 - auVar55._0_4_ * (float)uVar69;
      auVar48._4_4_ = auVar100._4_4_ * fVar40 - auVar55._4_4_ * (float)((ulong)uVar69 >> 0x20);
      auVar48._8_4_ = auVar55._0_4_ * fVar85 - auVar55._8_4_ * fVar26;
      auVar48._12_4_ = auVar55._4_4_ * fVar76 - auVar55._12_4_ * fVar40;
      auVar47 = NEON_ext(auVar48,auVar48,4,1);
      auVar56._0_4_ = auVar55._0_4_ * fVar26;
      auVar56._4_4_ = auVar55._4_4_ * fVar40;
      auVar56._8_4_ = auVar55._8_4_ * fVar85;
      auVar56._12_4_ = auVar55._12_4_ * fVar76;
      uVar69 = NEON_fmov(0x3f800000,4);
      fVar49 = (float)uVar69;
      fVar42 = fVar42 * (fVar42 * (fVar42 * -0.0029562549 + -0.02144013) + -0.33352822) + fVar49;
      auVar35 = NEON_ext(auVar56,auVar56,8,1);
      fVar75 = auVar55._0_4_ * fVar76 + auVar47._0_4_ + fVar26 * fVar42;
      fVar40 = auVar55._4_4_ * fVar76 + auVar47._4_4_ +
               fVar40 * (fVar51 * (fVar51 * (fVar51 * -0.0029562549 + -0.02144013) + -0.33352822) +
                        (float)((ulong)uVar69 >> 0x20));
      fVar85 = auVar55._8_4_ * fVar76 + auVar48._0_4_ + fVar85 * fVar42;
      fVar51 = fVar42 * fVar76 - (auVar56._0_4_ + auVar56._4_4_ + auVar35._0_4_);
      auVar57._0_4_ = fVar75 * fVar75;
      auVar57._4_4_ = fVar40 * fVar40;
      auVar57._8_4_ = fVar85 * fVar85;
      auVar57._12_4_ = fVar51 * fVar51;
      auVar35 = NEON_ext(auVar57,auVar57,8,1);
      fVar42 = auVar35._0_4_ + auVar35._4_4_;
      uVar69 = CONCAT44(auVar57._0_4_ + auVar57._4_4_ + fVar42,
                        auVar57._0_4_ + auVar57._4_4_ + fVar42);
      uVar87 = NEON_frsqrte(uVar69,4);
      fVar42 = (float)uVar87;
      fVar26 = (float)((ulong)uVar87 >> 0x20);
      uVar87 = NEON_frsqrts(uVar69,CONCAT44(fVar26 * fVar26,fVar42 * fVar42),4);
      fVar42 = fVar42 * (float)uVar87;
      fVar26 = fVar26 * (float)((ulong)uVar87 >> 0x20);
      uVar69 = NEON_frsqrts(uVar69,CONCAT44(fVar26 * fVar26,fVar42 * fVar42),4);
      fVar42 = (float)uVar69 * fVar42;
      fVar26 = (float)((ulong)uVar69 >> 0x20) * fVar26;
      auVar64._0_4_ = -*(float *)(param_5 + 0x14);
      auVar64._4_4_ = -*(float *)((long)param_5 + 0xa4);
      auVar64._8_4_ = -*(float *)(param_5 + 0x15);
      auVar64._12_4_ = *(undefined4 *)((long)param_5 + 0xac);
      auVar71._8_8_ = _UNK_038890f8;
      auVar71._0_8_ = _DAT_038890f0;
      auVar58._0_4_ = fVar42 * fVar75;
      auVar58._4_4_ = fVar26 * fVar40;
      auVar58._8_4_ = fVar42 * fVar85;
      auVar58._12_4_ = fVar26 * fVar51;
      auVar78._8_8_ = _UNK_03888e28;
      auVar78._0_8_ = _DAT_03888e20;
      auVar100 = a64_TBL(ZEXT816(0),auVar58,auVar71);
      auVar35 = a64_TBL(ZEXT816(0),auVar58,auVar78);
      auVar79._8_8_ = _UNK_03888d78;
      auVar79._0_8_ = _DAT_03888d70;
      auVar92._8_8_ = _UNK_03889108;
      auVar92._0_8_ = _DAT_03889100;
      auVar80 = a64_TBL(ZEXT816(0),auVar64,auVar79);
      auVar47 = a64_TBL(ZEXT816(0),auVar64,auVar92);
      auVar93._0_4_ = auVar35._0_4_ * auVar47._0_4_ - auVar100._0_4_ * auVar80._0_4_;
      auVar93._4_4_ = auVar35._4_4_ * auVar47._4_4_ - auVar100._4_4_ * auVar80._4_4_;
      auVar93._8_4_ = auVar35._8_4_ * auVar47._8_4_ - auVar100._8_4_ * auVar80._8_4_;
      auVar93._12_4_ = auVar35._12_4_ * auVar47._12_4_ - auVar100._12_4_ * auVar80._12_4_;
      auVar101._8_8_ = _UNK_038895d8;
      auVar101._0_8_ = _DAT_038895d0;
      auVar94 = a64_TBL(ZEXT816(0),auVar93,auVar101);
      fVar42 = auVar94._12_4_ - (auVar35._12_4_ * auVar80._12_4_ + auVar100._12_4_ * auVar47._12_4_)
      ;
      fVar40 = -(auVar94._0_4_ - (auVar35._0_4_ * auVar80._0_4_ + auVar100._0_4_ * auVar47._0_4_));
      fVar85 = -(auVar94._4_4_ - (auVar35._4_4_ * auVar80._4_4_ + auVar100._4_4_ * auVar47._4_4_));
      auVar72._0_8_ = CONCAT44(fVar85,fVar40);
      auVar72._8_4_ =
           -(auVar94._8_4_ - (auVar35._8_4_ * auVar80._8_4_ + auVar100._8_4_ * auVar47._8_4_));
      auVar72._12_4_ = -fVar42;
      auVar81._8_8_ = auVar72._8_8_;
      auVar81._0_8_ = auVar72._0_8_;
      auVar82._0_12_ = auVar81._0_12_;
      auVar82._12_4_ = fVar42;
      auVar65._0_4_ = fVar40 + fVar40;
      auVar65._4_4_ = fVar85 + fVar85;
      auVar65._8_4_ = auVar72._8_4_ + auVar72._8_4_;
      auVar65._12_4_ = fVar42 + fVar42;
      auVar47 = NEON_ext(auVar82,auVar82,8,1);
      auVar35 = NEON_ext(auVar65,auVar65,8,1);
      fVar26 = auVar47._0_4_ * auVar35._0_4_;
      fVar114 = auVar65._4_4_ * fVar40 + auVar65._8_4_ * fVar42;
      fVar106 = auVar65._4_4_ * fVar40 - auVar65._8_4_ * fVar42;
      fVar110 = auVar65._8_4_ * fVar85 + auVar65._0_4_ * fVar42;
      fVar51 = auVar65._8_4_ * fVar85 - auVar65._0_4_ * fVar42;
      fVar130 = auVar65._8_4_ * fVar40 - auVar65._4_4_ * fVar42;
      uStack_c8 = (ulong)(uint)fVar130;
      fVar75 = *(float *)((long)param_5 + 0x2c);
      fVar76 = fVar49 - (auVar65._4_4_ * fVar85 + fVar26);
      fVar26 = fVar49 - (auVar65._0_4_ * fVar40 + fVar26);
      fVar49 = fVar49 - (auVar65._0_4_ * fVar40 + auVar65._4_4_ * fVar85);
      uStack_b8 = (ulong)(uint)fVar110;
      uStack_c0 = CONCAT44(fVar26,fVar106);
      fVar85 = auVar65._8_4_ * fVar40 + auVar65._4_4_ * fVar42;
      local_d0 = CONCAT44(fVar114,fVar76);
      uStack_a8 = (ulong)(uint)fVar49;
      fVar40 = *(float *)((long)param_5 + 0x1c);
      local_b0 = CONCAT44(fVar51,fVar85);
      fVar42 = *(float *)((long)param_5 + 0xc);
      auVar38._0_8_ =
           CONCAT44((fVar60 + (float)*(double *)(param_6[1] + 8)) -
                    (fVar51 * fVar75 + fVar114 * fVar42 + fVar26 * fVar40),
                    (fVar53 + (float)*(double *)param_6[1]) -
                    (fVar85 * fVar75 + fVar76 * fVar42 + fVar106 * fVar40));
      auVar38._8_4_ =
           (fVar54 + (float)*(double *)param_6[2]) -
           (fVar49 * fVar75 + fVar130 * fVar42 + fVar110 * fVar40);
      auVar38._12_4_ = (fVar61 + 0.0) - (fVar75 * 0.0 + fVar42 * 0.0 + fVar40 * 0.0);
      uStack_98 = auVar38._8_8_;
      uStack_a0 = auVar38._0_8_;
      (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(param_5[0xf] + 0x18) * 0x200 + 0x18))
                (param_5[0xf],&local_d0,local_110);
      auVar7._4_4_ = fVar109 - fStack_11c;
      auVar7._0_4_ = fVar84 - local_120;
      auVar7._8_4_ = fVar97 - local_120;
      auVar7._12_4_ = fVar98 - fStack_11c;
      auVar83 = NEON_fmin(auVar7,local_110,4);
      auVar9._8_8_ = uVar43;
      auVar9._0_8_ = uVar27;
      auVar29 = auVar9._0_12_;
      auVar10._8_8_ = uVar14;
      auVar10._0_8_ = uVar13;
      auVar88 = auVar10._0_12_;
      auVar8._4_4_ = fStack_11c + fVar96;
      auVar8._0_4_ = local_120 + fVar129;
      auVar8._8_4_ = local_120 + fVar118;
      auVar8._12_4_ = fStack_11c + fVar86;
      auVar95 = NEON_fmax(auVar8,local_100,4);
    }
  }
  else {
    fVar104 = 0.0;
    fVar105 = 0.0;
    fVar102 = local_120 + 0.0;
    fVar103 = fStack_11c + 0.0;
    auVar95._0_8_ = CONCAT44(fStack_11c + fVar96,local_120 + fVar129);
    auVar95._8_4_ = local_120 + fVar118;
    auVar95._12_4_ = fStack_11c + fVar86;
    auVar83._0_8_ = CONCAT44(fVar109 - fStack_11c,fVar84 - local_120);
    auVar83._8_4_ = fVar97 - local_120;
    auVar83._12_4_ = fVar98 - fStack_11c;
    uStack_e8 = auVar83._8_8_;
    uStack_d8 = auVar95._8_8_;
    local_f0 = auVar83._0_8_;
    uStack_e0 = auVar95._0_8_;
  }
  auVar89 = auVar95._0_12_;
  fVar42 = (float)*(undefined8 *)(param_2 + 0x48);
  fVar49 = (float)((ulong)*(undefined8 *)(param_2 + 0x48) >> 0x20);
  auVar33._0_8_ = CONCAT44((int)((fVar105 + fVar103) * fVar49),(int)((fVar104 + fVar102) * fVar42));
  auVar45._0_8_ = CONCAT44((int)(fVar103 * fVar49),(int)(fVar102 * fVar42));
  auVar33._8_8_ = auVar33._0_8_;
  uVar27 = NEON_sqxtun(auVar33._0_8_,auVar33,4);
  auVar45._8_8_ = auVar45._0_8_;
  uVar43 = NEON_sqxtun(auVar45._0_8_,auVar45,4);
  *(short *)(param_5 + 0x12) = (short)uVar27;
  *(short *)((long)param_5 + 0x92) = (short)uVar43;
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  fVar42 = (float)uVar27;
  *(short *)param_6[5] = (short)((uint)(fVar50 * fVar42) >> 0x10);
  *(short *)(param_6[5] + 2) = (short)((uint)(fVar122 * (float)((ulong)uVar27 >> 0x20)) >> 0x10);
  *(short *)(param_6[5] + 4) = (short)((uint)(fVar128 * fVar42) >> 0x10);
  if (0.0 < fVar119) {
    iVar68 = -(uint)(fVar50 < 0.0);
    iVar73 = -(uint)(fVar122 < 0.0);
    iVar74 = -(uint)(fVar128 < 0.0);
    fVar42 = fVar119 * (float)*(undefined8 *)(param_2 + 0x18);
    fVar49 = fVar119 * (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
    iVar52 = -(uint)(ABS((float)*(undefined8 *)(param_6[3] + 8)) < fVar42);
    iVar59 = -(uint)(ABS((float)((ulong)*(undefined8 *)(param_6[3] + 8) >> 0x20)) < fVar49);
    iVar62 = -(uint)(ABS(*(float *)(param_6[3] + 4)) < fVar42);
    iVar24 = -(uint)(ABS(fVar50) < fVar42);
    iVar39 = -(uint)(ABS(fVar122) < fVar49);
    iVar41 = -(uint)(ABS(fVar128) < fVar42);
    iVar63 = -(uint)(0.0 < fVar50);
    iVar66 = -(uint)(0.0 < fVar122);
    iVar67 = -(uint)(0.0 < fVar128);
    uVar25 = CONCAT13((byte)((uint)iVar24 >> 0x18) &
                      ((byte)((uint)iVar68 >> 0x18) | (byte)((uint)iVar63 >> 0x18)) &
                      (byte)((uint)iVar52 >> 0x18),
                      CONCAT12((byte)((uint)iVar24 >> 0x10) &
                               ((byte)((uint)iVar68 >> 0x10) | (byte)((uint)iVar63 >> 0x10)) &
                               (byte)((uint)iVar52 >> 0x10),
                               CONCAT11((byte)((uint)iVar24 >> 8) &
                                        ((byte)((uint)iVar68 >> 8) | (byte)((uint)iVar63 >> 8)) &
                                        (byte)((uint)iVar52 >> 8),
                                        (byte)iVar24 & ((byte)iVar68 | (byte)iVar63) & (byte)iVar52)
                              ));
    auVar44._0_8_ =
         CONCAT17((byte)((uint)iVar39 >> 0x18) &
                  ((byte)((uint)iVar73 >> 0x18) | (byte)((uint)iVar66 >> 0x18)) &
                  (byte)((uint)iVar59 >> 0x18),
                  CONCAT16((byte)((uint)iVar39 >> 0x10) &
                           ((byte)((uint)iVar73 >> 0x10) | (byte)((uint)iVar66 >> 0x10)) &
                           (byte)((uint)iVar59 >> 0x10),
                           CONCAT15((byte)((uint)iVar39 >> 8) &
                                    ((byte)((uint)iVar73 >> 8) | (byte)((uint)iVar66 >> 8)) &
                                    (byte)((uint)iVar59 >> 8),
                                    CONCAT14((byte)iVar39 & ((byte)iVar73 | (byte)iVar66) &
                                             (byte)iVar59,uVar25))));
    auVar44[8] = (byte)iVar41 & ((byte)iVar74 | (byte)iVar67) & (byte)iVar62;
    auVar44[9] = (byte)((uint)iVar41 >> 8) & ((byte)((uint)iVar74 >> 8) | (byte)((uint)iVar67 >> 8))
                 & (byte)((uint)iVar62 >> 8);
    auVar44[10] = (byte)((uint)iVar41 >> 0x10) &
                  ((byte)((uint)iVar74 >> 0x10) | (byte)((uint)iVar67 >> 0x10)) &
                  (byte)((uint)iVar62 >> 0x10);
    auVar44[0xb] = (byte)((uint)iVar41 >> 0x18) &
                   ((byte)((uint)iVar74 >> 0x18) | (byte)((uint)iVar67 >> 0x18)) &
                   (byte)((uint)iVar62 >> 0x18);
    if ((uVar25 & (uint)((ulong)auVar44._0_8_ >> 0x20) & auVar44._8_4_) != 0) {
      fVar122 = auVar95._0_4_;
      iVar52 = -(uint)(fVar122 <= *(float *)(param_5 + 0xc));
      fVar128 = auVar95._4_4_;
      iVar59 = -(uint)(fVar128 <= *(float *)((long)param_5 + 100));
      fVar129 = auVar95._8_4_;
      iVar62 = -(uint)(fVar129 <= *(float *)(param_5 + 0xd));
      fVar42 = auVar83._0_4_;
      iVar24 = -(uint)((float)param_5[0xe] <= fVar42);
      fVar49 = auVar83._4_4_;
      iVar39 = -(uint)((float)((ulong)param_5[0xe] >> 0x20) <= fVar49);
      fVar51 = auVar83._8_4_;
      iVar41 = -(uint)(*(float *)((long)param_5 + 0x6c) <= fVar51);
      fVar50 = auVar83._12_4_;
      uVar25 = CONCAT13((byte)((uint)iVar24 >> 0x18) & (byte)((uint)iVar52 >> 0x18),
                        CONCAT12((byte)((uint)iVar24 >> 0x10) & (byte)((uint)iVar52 >> 0x10),
                                 CONCAT11((byte)((uint)iVar24 >> 8) & (byte)((uint)iVar52 >> 8),
                                          (byte)iVar24 & (byte)iVar52)));
      auVar31._0_8_ =
           CONCAT17((byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar59 >> 0x18),
                    CONCAT16((byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar59 >> 0x10),
                             CONCAT15((byte)((uint)iVar39 >> 8) & (byte)((uint)iVar59 >> 8),
                                      CONCAT14((byte)iVar39 & (byte)iVar59,uVar25))));
      auVar31[8] = (byte)iVar41 & (byte)iVar62;
      auVar31[9] = (byte)((uint)iVar41 >> 8) & (byte)((uint)iVar62 >> 8);
      auVar31[10] = (byte)((uint)iVar41 >> 0x10) & (byte)((uint)iVar62 >> 0x10);
      auVar31[0xb] = (byte)((uint)iVar41 >> 0x18) & (byte)((uint)iVar62 >> 0x18);
      if ((uVar25 & (uint)((ulong)auVar31._0_8_ >> 0x20) & auVar31._8_4_) != 0) {
        iVar59 = -(uint)(fVar122 <= param_4[4]);
        iVar62 = -(uint)(fVar128 <= param_4[5]);
        iVar63 = -(uint)(fVar129 <= param_4[6]);
        iVar66 = -(uint)(auVar95._12_4_ <= param_4[7]);
        iVar24 = -(uint)(*param_4 <= fVar42);
        iVar39 = -(uint)(param_4[1] <= fVar49);
        iVar41 = -(uint)(param_4[2] <= fVar51);
        iVar52 = -(uint)(param_4[3] <= fVar50);
        uVar25 = CONCAT13((byte)((uint)iVar59 >> 0x18) & (byte)((uint)iVar24 >> 0x18),
                          CONCAT12((byte)((uint)iVar59 >> 0x10) & (byte)((uint)iVar24 >> 0x10),
                                   CONCAT11((byte)((uint)iVar59 >> 8) & (byte)((uint)iVar24 >> 8),
                                            (byte)iVar59 & (byte)iVar24)));
        auVar32._0_8_ =
             CONCAT17((byte)((uint)iVar62 >> 0x18) & (byte)((uint)iVar39 >> 0x18),
                      CONCAT16((byte)((uint)iVar62 >> 0x10) & (byte)((uint)iVar39 >> 0x10),
                               CONCAT15((byte)((uint)iVar62 >> 8) & (byte)((uint)iVar39 >> 8),
                                        CONCAT14((byte)iVar62 & (byte)iVar39,uVar25))));
        auVar32[8] = (byte)iVar63 & (byte)iVar41;
        auVar32[9] = (byte)((uint)iVar63 >> 8) & (byte)((uint)iVar41 >> 8);
        auVar32[10] = (byte)((uint)iVar63 >> 0x10) & (byte)((uint)iVar41 >> 0x10);
        auVar32[0xb] = (byte)((uint)iVar63 >> 0x18) & (byte)((uint)iVar41 >> 0x18);
        auVar37[0xc] = (byte)iVar66 & (byte)iVar52;
        auVar37._0_12_ = auVar32;
        auVar37[0xd] = (byte)((uint)iVar66 >> 8) & (byte)((uint)iVar52 >> 8);
        auVar37[0xe] = (byte)((uint)iVar66 >> 0x10) & (byte)((uint)iVar52 >> 0x10);
        auVar37[0xf] = (byte)((uint)iVar66 >> 0x18) & (byte)((uint)iVar52 >> 0x18);
        if ((uVar25 & (uint)((ulong)auVar32._0_8_ >> 0x20) & auVar32._8_4_) != 0) {
          return auVar37;
        }
      }
      auVar89._0_4_ = fVar119 + fVar122;
      auVar89._4_4_ = fVar119 + fVar128;
      auVar89._8_4_ = fVar119 + fVar129;
      auVar83._0_4_ = fVar42 - fVar119;
      auVar83._4_4_ = fVar49 - fVar119;
      auVar83._8_4_ = fVar51 - fVar119;
      auVar83._12_4_ = fVar50 - fVar119;
    }
  }
  iVar24 = -(uint)(auVar88._0_4_ <= *(float *)(param_5 + 0xc));
  iVar39 = -(uint)(auVar88._4_4_ <= *(float *)((long)param_5 + 100));
  iVar41 = -(uint)(auVar88._8_4_ <= *(float *)(param_5 + 0xd));
  iVar52 = -(uint)((float)param_5[0xe] <= auVar29._0_4_);
  iVar59 = -(uint)((float)((ulong)param_5[0xe] >> 0x20) <= auVar29._4_4_);
  iVar62 = -(uint)(*(float *)((long)param_5 + 0x6c) <= auVar29._8_4_);
  uVar25 = CONCAT13((byte)((uint)iVar52 >> 0x18) & (byte)((uint)iVar24 >> 0x18),
                    CONCAT12((byte)((uint)iVar52 >> 0x10) & (byte)((uint)iVar24 >> 0x10),
                             CONCAT11((byte)((uint)iVar52 >> 8) & (byte)((uint)iVar24 >> 8),
                                      (byte)iVar52 & (byte)iVar24)));
  auVar29._0_8_ =
       CONCAT17((byte)((uint)iVar59 >> 0x18) & (byte)((uint)iVar39 >> 0x18),
                CONCAT16((byte)((uint)iVar59 >> 0x10) & (byte)((uint)iVar39 >> 0x10),
                         CONCAT15((byte)((uint)iVar59 >> 8) & (byte)((uint)iVar39 >> 8),
                                  CONCAT14((byte)iVar59 & (byte)iVar39,uVar25))));
  auVar29[8] = (byte)iVar62 & (byte)iVar41;
  auVar29[9] = (byte)((uint)iVar62 >> 8) & (byte)((uint)iVar41 >> 8);
  auVar29[10] = (byte)((uint)iVar62 >> 0x10) & (byte)((uint)iVar41 >> 0x10);
  auVar29[0xb] = (byte)((uint)iVar62 >> 0x18) & (byte)((uint)iVar41 >> 0x18);
  if ((uVar25 & (uint)((ulong)auVar29._0_8_ >> 0x20) & auVar29._8_4_) == 0) {
    puVar21 = *(uint **)(*(long *)(param_1 + 0x630) + (long)*(int *)(param_1 + 0x638) * 8 + -8);
    uVar2 = *(undefined4 *)(param_5 + 10);
    puVar23 = *(undefined8 **)(param_1 + 0x4e0);
    uVar25 = *puVar21;
    if (0xec < uVar25 >> 0x14) {
      puVar22 = puVar21;
      do {
        iVar24 = *(int *)(puVar23 + 0xb) + -1;
        if (*(int *)(puVar23 + 0xb) < 1) {
          lVar15 = puVar23[1];
          (**(code **)(*(long *)*puVar23 + 0x20))((long *)*puVar23,lVar15,6);
          puVar18 = (undefined8 *)(lVar15 + 0x28);
          *(undefined4 *)(puVar23 + 0xb) = 5;
        }
        else {
          *(int *)(puVar23 + 0xb) = iVar24;
          puVar18 = (undefined8 *)(puVar23[1] + (long)iVar24 * 8);
        }
        puVar21 = (uint *)*puVar18;
        puVar21[4] = 0;
        puVar21[5] = 0;
        puVar21[6] = 0;
        puVar21[7] = 0;
        puVar21[0] = 0;
        puVar21[1] = 0;
        puVar21[2] = 0;
        puVar21[3] = 0;
        puVar21[1] = *(uint *)(param_1 + 0x638);
        uVar17 = *(uint *)(param_1 + 0x63c);
        iVar24 = *(int *)(param_1 + 0x638);
        uVar25 = iVar24 + 1;
        if (iVar24 < (int)(uVar17 & 0x3fffffff)) {
          lVar15 = *(long *)(param_1 + 0x630);
        }
        else {
          uVar27 = *(undefined8 *)(param_1 + 0x630);
          if (0x3ffffffe < iVar24) {
            FUN_032bd0a8(uVar25);
            uVar17 = *(uint *)(param_1 + 0x63c);
          }
          uVar17 = (uVar17 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar17) {
            uVar17 = 0x3fffffff;
          }
          uVar1 = uVar25;
          if ((int)uVar25 <= (int)uVar17) {
            uVar1 = uVar17;
          }
          lVar15 = FUN_032bd1d4(PTR_PTR_0434a080,uVar1,8,uVar27,iVar24,(uint *)(param_1 + 0x63c));
          *(long *)(param_1 + 0x630) = lVar15;
          iVar24 = *(int *)(param_1 + 0x638);
        }
        *(uint **)(lVar15 + (long)iVar24 * 8) = puVar21;
        *(uint *)(param_1 + 0x638) = uVar25;
        *(uint **)(puVar22 + 2) = puVar21;
        uVar25 = *puVar21;
        puVar22 = puVar21;
      } while (0xec < uVar25 >> 0x14);
    }
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar21,0x10);
      if (bVar5) {
        *puVar21 = *puVar21 + 0x100001;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *(int *)(param_1 + 0x628) = *(int *)(param_1 + 0x628) + 1;
    *(undefined4 *)((long)puVar21 + (ulong)(uVar25 >> 0x10) + 0x28) = uVar2;
    *(undefined8 *)((long)puVar21 + (ulong)(uVar25 >> 0x10) + 0x20) = 0x403000010;
  }
  iVar24 = -(uint)(auVar83._0_4_ <= param_4[4]);
  iVar39 = -(uint)(auVar83._4_4_ <= param_4[5]);
  iVar41 = -(uint)(auVar83._8_4_ <= param_4[6]);
  iVar52 = -(uint)(*param_4 <= auVar89._0_4_);
  iVar59 = -(uint)(param_4[1] <= auVar89._4_4_);
  iVar62 = -(uint)(param_4[2] <= auVar89._8_4_);
  uVar25 = CONCAT13((byte)((uint)iVar52 >> 0x18) & (byte)((uint)iVar24 >> 0x18),
                    CONCAT12((byte)((uint)iVar52 >> 0x10) & (byte)((uint)iVar24 >> 0x10),
                             CONCAT11((byte)((uint)iVar52 >> 8) & (byte)((uint)iVar24 >> 8),
                                      (byte)iVar52 & (byte)iVar24)));
  auVar30._0_8_ =
       CONCAT17((byte)((uint)iVar59 >> 0x18) & (byte)((uint)iVar39 >> 0x18),
                CONCAT16((byte)((uint)iVar59 >> 0x10) & (byte)((uint)iVar39 >> 0x10),
                         CONCAT15((byte)((uint)iVar59 >> 8) & (byte)((uint)iVar39 >> 8),
                                  CONCAT14((byte)iVar59 & (byte)iVar39,uVar25))));
  auVar30[8] = (byte)iVar62 & (byte)iVar41;
  auVar30[9] = (byte)((uint)iVar62 >> 8) & (byte)((uint)iVar41 >> 8);
  auVar30[10] = (byte)((uint)iVar62 >> 0x10) & (byte)((uint)iVar41 >> 0x10);
  auVar30[0xb] = (byte)((uint)iVar62 >> 0x18) & (byte)((uint)iVar41 >> 0x18);
  if ((uVar25 & (uint)((ulong)auVar30._0_8_ >> 0x20) & auVar30._8_4_) == 0) {
    puVar23 = *(undefined8 **)(param_1 + 0x4e0);
    uVar2 = *(undefined4 *)(param_5 + 0x16);
    uVar3 = *(undefined4 *)((long)param_5 + 0xb4);
    puVar21 = *(uint **)(*(long *)(param_1 + 0x530) + (long)*(int *)(param_1 + 0x538) * 8 + -8);
    uVar25 = *puVar21;
    if (0xec < uVar25 >> 0x14) {
      puVar22 = puVar21;
      do {
        iVar24 = *(int *)(puVar23 + 0xb) + -1;
        if (*(int *)(puVar23 + 0xb) < 1) {
          lVar15 = puVar23[1];
          (**(code **)(*(long *)*puVar23 + 0x20))((long *)*puVar23,lVar15,6);
          *(undefined4 *)(puVar23 + 0xb) = 5;
          puVar18 = (undefined8 *)(lVar15 + 0x28);
        }
        else {
          *(int *)(puVar23 + 0xb) = iVar24;
          puVar18 = (undefined8 *)(puVar23[1] + (long)iVar24 * 8);
        }
        puVar21 = (uint *)*puVar18;
        puVar21[4] = 0;
        puVar21[5] = 0;
        puVar21[6] = 0;
        puVar21[7] = 0;
        puVar21[0] = 0;
        puVar21[1] = 0;
        puVar21[2] = 0;
        puVar21[3] = 0;
        puVar21[1] = *(uint *)(param_1 + 0x538);
        uVar17 = *(uint *)(param_1 + 0x53c);
        iVar24 = *(int *)(param_1 + 0x538);
        uVar25 = iVar24 + 1;
        if (iVar24 < (int)(uVar17 & 0x3fffffff)) {
          lVar15 = *(long *)(param_1 + 0x530);
        }
        else {
          uVar27 = *(undefined8 *)(param_1 + 0x530);
          if (0x3ffffffe < iVar24) {
            FUN_032bd0a8(uVar25);
            uVar17 = *(uint *)(param_1 + 0x53c);
          }
          uVar17 = (uVar17 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar17) {
            uVar17 = 0x3fffffff;
          }
          uVar1 = uVar25;
          if ((int)uVar25 <= (int)uVar17) {
            uVar1 = uVar17;
          }
          lVar15 = FUN_032bd1d4(PTR_PTR_0434a080,uVar1,8,uVar27,iVar24,(uint *)(param_1 + 0x53c));
          iVar24 = *(int *)(param_1 + 0x538);
          *(long *)(param_1 + 0x530) = lVar15;
        }
        *(uint **)(lVar15 + (long)iVar24 * 8) = puVar21;
        *(uint *)(param_1 + 0x538) = uVar25;
        *(uint **)(puVar22 + 2) = puVar21;
        uVar25 = *puVar21;
        puVar22 = puVar21;
      } while (0xec < uVar25 >> 0x14);
    }
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar21,0x10);
      if (bVar5) {
        *puVar21 = *puVar21 + 0x100001;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *(int *)(param_1 + 0x528) = *(int *)(param_1 + 0x528) + 1;
    uVar25 = uVar25 >> 0x10;
    *(undefined8 *)((long)puVar21 + (ulong)uVar25 + 0x20) = 0xe04000010;
    *(undefined4 *)((long)puVar21 + (ulong)uVar25 + 0x28) = uVar2;
    *(undefined4 *)((long)puVar21 + (ulong)uVar25 + 0x2c) = uVar3;
  }
  auVar34._8_8_ = _UNK_0388a1f8;
  auVar34._0_8_ = _DAT_0388a1f0;
  *(ushort *)(param_5 + 0xb) = *(ushort *)(param_5 + 0xb) | 0x10;
  param_5[0xe] = auVar83._0_8_;
  auVar35 = a64_TBL(ZEXT816(0),auVar83,auVar34);
  auVar90._12_4_ = auVar35._12_4_;
  auVar90._0_12_ = auVar89;
  param_5[0xd] = auVar90._8_8_;
  param_5[0xc] = auVar89._0_8_;
  return auVar35;
}


