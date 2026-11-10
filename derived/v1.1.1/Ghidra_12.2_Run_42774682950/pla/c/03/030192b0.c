/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030192b0; name: FUN_030192b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030192b0(long param_1,long param_2,float *param_3,undefined8 *param_4,
                 undefined1 (*param_5) [16])

{
  undefined1 auVar1 [14];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  float fVar16;
  float fVar18;
  int iVar19;
  int iVar20;
  undefined1 auVar17 [16];
  int iVar21;
  int iVar30;
  int iVar31;
  undefined1 auVar22 [12];
  float fVar29;
  undefined1 auVar23 [16];
  float fVar32;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar33;
  undefined8 uVar35;
  float fVar46;
  undefined1 auVar36 [12];
  undefined1 auVar39 [16];
  uint uVar34;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar37 [12];
  undefined1 auVar38 [12];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined8 uVar47;
  undefined1 auVar49 [12];
  undefined8 uVar48;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar54;
  undefined1 auVar53 [16];
  float fVar55;
  int iVar56;
  undefined1 auVar57 [12];
  float fVar65;
  float fVar67;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  int iVar66;
  int iVar68;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  int iVar69;
  int iVar72;
  undefined8 uVar70;
  int iVar73;
  undefined1 auVar71 [16];
  float fVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar77;
  float fVar78;
  float fVar79;
  undefined1 auVar82 [12];
  double dVar80;
  undefined8 uVar81;
  undefined1 auVar83 [16];
  float fVar85;
  float fVar86;
  float fVar87;
  undefined1 auVar84 [16];
  undefined8 uVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  int iVar96;
  float fVar97;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  float fVar101;
  float fVar102;
  double dVar103;
  float fVar107;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  double dVar108;
  undefined1 auVar109 [16];
  float fVar110;
  float fVar111;
  undefined1 auVar112 [16];
  float fVar113;
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  undefined4 uStack_108;
  undefined4 uStack_104;
  float local_100;
  float fStack_fc;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
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
  
  uVar14 = _UNK_038895d8;
  uVar13 = _DAT_038895d0;
  auVar44 = _DAT_03889100;
  uVar70 = _UNK_038890f8;
  uVar12 = _DAT_038890f0;
  uVar11 = _UNK_03888e28;
  uVar10 = _DAT_03888e20;
  uVar48 = _UNK_03888d78;
  uVar35 = _DAT_03888d70;
  lVar15 = param_4[0xf];
  fVar46 = 0.0;
  fVar54 = 0.0;
  uVar88 = NEON_fmov(0x3f800000,4);
  fVar33 = (float)uVar88;
  if (lVar15 != 0) {
    auVar75._0_4_ = -*(float *)(param_4 + 0x14);
    auVar75._4_4_ = -*(float *)((long)param_4 + 0xa4);
    auVar75._8_4_ = -*(float *)(param_4 + 0x15);
    fVar29 = *(float *)(param_5[3] + 4);
    auVar75._12_4_ = *(undefined4 *)((long)param_4 + 0xac);
    auVar76._8_8_ = _UNK_038890f8;
    auVar76._0_8_ = _DAT_038890f0;
    auVar98 = a64_TBL(ZEXT816(0),*param_5,auVar76);
    auVar83._8_8_ = _UNK_03888e28;
    auVar83._0_8_ = _DAT_03888e20;
    auVar83 = a64_TBL(ZEXT816(0),*param_5,auVar83);
    fVar16 = (float)*(undefined8 *)(param_1 + 0x10);
    fVar55 = *(float *)(param_5[2] + 8) * fVar16;
    fVar18 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
    fVar65 = *(float *)(param_5[2] + 0xc) * fVar18;
    fVar67 = *(float *)param_5[3] * fVar16;
    auVar93 = a64_TBL(ZEXT816(0),auVar75,_DAT_03889100);
    auVar94._8_8_ = _UNK_03888d78;
    auVar94._0_8_ = _DAT_03888d70;
    auVar76 = a64_TBL(ZEXT816(0),auVar75,auVar94);
    auVar58._0_4_ = fVar55 * fVar55;
    auVar58._4_4_ = fVar65 * fVar65;
    auVar58._8_4_ = fVar67 * fVar67;
    auVar58._12_4_ = fVar29 * fVar18 * fVar29 * fVar18;
    auVar112 = NEON_ext(auVar58,auVar58,8,1);
    fVar55 = (float)*(undefined8 *)(param_5[3] + 8);
    auVar23._0_4_ = fVar55 * fVar55;
    fVar55 = (float)((ulong)*(undefined8 *)(param_5[3] + 8) >> 0x20);
    auVar23._4_4_ = fVar55 * fVar55;
    auVar23._8_4_ = fVar29 * fVar29;
    auVar23._12_4_ = 0;
    fVar67 = auVar112._0_4_ + auVar58._0_4_ + auVar58._4_4_;
    auVar99._0_4_ = auVar83._0_4_ * auVar93._0_4_ - auVar98._0_4_ * auVar76._0_4_;
    auVar99._4_4_ = auVar83._4_4_ * auVar93._4_4_ - auVar98._4_4_ * auVar76._4_4_;
    auVar99._8_4_ = auVar83._8_4_ * auVar93._8_4_ - auVar98._8_4_ * auVar76._8_4_;
    auVar99._12_4_ = auVar83._12_4_ * auVar93._12_4_ - auVar98._12_4_ * auVar76._12_4_;
    auVar94 = NEON_ext(auVar23,auVar23,8,1);
    auVar112._8_8_ = _UNK_038895d8;
    auVar112._0_8_ = _DAT_038895d0;
    auVar112 = a64_TBL(ZEXT816(0),auVar99,auVar112);
    fVar77 = auVar112._12_4_ - (auVar83._12_4_ * auVar76._12_4_ + auVar98._12_4_ * auVar93._12_4_);
    auVar109._4_12_ = SUB1612(ZEXT816(0),4);
    auVar109._0_4_ = fVar67;
    fVar101 = -(auVar112._0_4_ - (auVar83._0_4_ * auVar76._0_4_ + auVar98._0_4_ * auVar93._0_4_));
    fVar107 = -(auVar112._4_4_ - (auVar83._4_4_ * auVar76._4_4_ + auVar98._4_4_ * auVar93._4_4_));
    auVar104._0_8_ = CONCAT44(fVar107,fVar101);
    auVar104._8_4_ =
         -(auVar112._8_4_ - (auVar83._8_4_ * auVar76._8_4_ + auVar98._8_4_ * auVar93._8_4_));
    auVar104._12_4_ = -fVar77;
    auVar114._8_8_ = auVar104._8_8_;
    auVar114._0_8_ = auVar104._0_8_;
    auVar76 = NEON_frsqrte(auVar109,4);
    fVar55 = auVar76._0_4_;
    auVar98._0_4_ = fVar55 * fVar55;
    fVar29 = auVar76._4_4_;
    auVar98._4_4_ = fVar29 * fVar29;
    fVar65 = auVar76._8_4_;
    auVar98._8_4_ = fVar65 * fVar65;
    fVar32 = auVar76._12_4_;
    auVar98._12_4_ = fVar32 * fVar32;
    auVar115._0_12_ = auVar114._0_12_;
    auVar115._12_4_ = fVar77;
    auVar76 = NEON_frsqrts(auVar109,auVar98,4);
    auVar39._0_4_ = auVar94._0_4_ + auVar23._0_4_ + auVar23._4_4_ + 1.4210855e-14;
    auVar39._4_4_ = 0x28800000;
    auVar39._8_4_ = 0x28800000;
    auVar39._12_4_ = 0x28800000;
    auVar1._2_12_ = auVar112._4_12_;
    auVar1._0_2_ = *(ushort *)((long)param_4 + 0x94);
    auVar83 = NEON_frsqrte(auVar39,4);
    uVar47 = NEON_fmax(CONCAT44((float)((uint)*(ushort *)((long)param_4 + 0x94) << 0x10) -
                                *(float *)(lVar15 + 0x20),
                                (float)(auVar1._0_4_ << 0x10) - *(float *)(lVar15 + 0x20)),0,4);
    auVar95._0_4_ = fVar101 + fVar101;
    auVar95._4_4_ = fVar107 + fVar107;
    auVar95._8_4_ = auVar104._8_4_ + auVar104._8_4_;
    auVar95._12_4_ = fVar77 + fVar77;
    auVar112 = NEON_ext(auVar115,auVar115,8,1);
    auVar94 = NEON_ext(auVar95,auVar95,8,1);
    fVar113 = auVar112._0_4_ * auVar94._0_4_;
    fVar55 = fVar55 * auVar76._0_4_;
    fVar29 = fVar29 * auVar76._4_4_;
    fVar65 = fVar65 * auVar76._8_4_;
    fVar32 = fVar32 * auVar76._12_4_;
    fVar116 = auVar95._4_4_ * fVar101 + auVar95._8_4_ * fVar77;
    fVar117 = auVar95._4_4_ * fVar101 - auVar95._8_4_ * fVar77;
    fVar118 = auVar95._8_4_ * fVar101 - auVar95._4_4_ * fVar77;
    fVar74 = auVar95._8_4_ * fVar101 + auVar95._4_4_ * fVar77;
    fVar110 = auVar95._8_4_ * fVar107 + auVar95._0_4_ * fVar77;
    fVar102 = auVar95._8_4_ * fVar107 - auVar95._0_4_ * fVar77;
    fVar78 = auVar83._0_4_;
    auVar100._0_4_ = fVar78 * fVar78;
    fVar85 = auVar83._4_4_;
    auVar100._4_4_ = fVar85 * fVar85;
    fVar86 = auVar83._8_4_;
    auVar100._8_4_ = fVar86 * fVar86;
    fVar87 = auVar83._12_4_;
    auVar100._12_4_ = fVar87 * fVar87;
    auVar76 = NEON_frsqrts(auVar39,auVar100,4);
    auVar105._0_4_ = fVar55 * fVar55;
    auVar105._4_4_ = fVar29 * fVar29;
    auVar105._8_4_ = fVar65 * fVar65;
    auVar105._12_4_ = fVar32 * fVar32;
    auVar83 = NEON_frsqrts(auVar109,auVar105,4);
    fVar91 = fVar33 - (auVar95._4_4_ * fVar107 + fVar113);
    fVar78 = fVar78 * auVar76._0_4_;
    fVar85 = fVar85 * auVar76._4_4_;
    fVar86 = fVar86 * auVar76._8_4_;
    fVar87 = fVar87 * auVar76._12_4_;
    fVar119 = fVar33 - (auVar95._0_4_ * fVar101 + auVar95._4_4_ * fVar107);
    iVar96 = -(uint)(fVar67 <= 0.0);
    fVar113 = fVar33 - (auVar95._0_4_ * fVar101 + fVar113);
    fVar29 = *(float *)((long)param_4 + 0x2c);
    fVar55 = auVar83._0_4_ * fVar55;
    auVar106._0_4_ = fVar78 * fVar78;
    auVar106._4_4_ = fVar85 * fVar85;
    auVar106._8_4_ = fVar86 * fVar86;
    auVar106._12_4_ = fVar87 * fVar87;
    auVar76 = NEON_frsqrts(auVar39,auVar106,4);
    fVar67 = fVar67 * (float)CONCAT13((byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar96 >> 0x18),
                                      CONCAT12((byte)((uint)fVar55 >> 0x10) &
                                               ~(byte)((uint)iVar96 >> 0x10),
                                               CONCAT11((byte)((uint)fVar55 >> 8) &
                                                        ~(byte)((uint)iVar96 >> 8),
                                                        SUB41(fVar55,0) & ~(byte)iVar96)));
    fVar78 = fVar78 * auVar76._0_4_;
    fVar85 = fVar85 * auVar76._4_4_;
    fVar86 = fVar86 * auVar76._8_4_;
    fVar87 = fVar87 * auVar76._12_4_;
    fVar55 = *(float *)((long)param_4 + 0xc);
    fVar65 = *(float *)((long)param_4 + 0x1c);
    auVar59._0_4_ = fVar67 * 41720.875 + 0.999;
    auVar59._4_4_ = 0x3f7fbe77;
    auVar59._8_4_ = 0x3f7fbe77;
    auVar59._12_4_ = 0x3f7fbe77;
    auVar76 = NEON_fmov(0x3f800000,4);
    auVar76 = NEON_smin(ZEXT416((uint)fVar67),auVar76,4);
    dVar108 = *(double *)param_5[2];
    fVar67 = (float)uVar47 * auVar76._0_4_;
    fVar101 = (float)((ulong)uVar47 >> 0x20);
    fVar32 = fVar101 * auVar76._4_4_;
    fVar77 = (float)uVar47 * auVar76._8_4_;
    fVar101 = fVar101 * auVar76._12_4_;
    auVar50._8_4_ = 0x477fff00;
    auVar50._0_8_ = 0x477fff00477fff00;
    auVar50._12_4_ = 0x477fff00;
    iVar96 = -(uint)(auVar39._0_4_ <= 0.0);
    fVar107 = (float)CONCAT13((byte)((uint)fVar78 >> 0x18) & ~(byte)((uint)iVar96 >> 0x18),
                              CONCAT12((byte)((uint)fVar78 >> 0x10) & ~(byte)((uint)iVar96 >> 0x10),
                                       CONCAT11((byte)((uint)fVar78 >> 8) &
                                                ~(byte)((uint)iVar96 >> 8),
                                                SUB41(fVar78,0) & ~(byte)iVar96)));
    auVar82._0_8_ =
         CONCAT17((char)((uint)fVar85 >> 0x18),
                  CONCAT16((char)((uint)fVar85 >> 0x10),
                           CONCAT15((char)((uint)fVar85 >> 8),CONCAT14(SUB41(fVar85,0),fVar107))));
    auVar82[8] = SUB41(fVar86,0);
    auVar82[9] = (undefined1)((uint)fVar86 >> 8);
    auVar82[10] = (undefined1)((uint)fVar86 >> 0x10);
    auVar82[0xb] = (undefined1)((uint)fVar86 >> 0x18);
    auVar84[0xc] = SUB41(fVar87,0);
    auVar84._0_12_ = auVar82;
    auVar84[0xd] = (undefined1)((uint)fVar87 >> 8);
    auVar84[0xe] = (undefined1)((uint)fVar87 >> 0x10);
    auVar84[0xf] = (undefined1)((uint)fVar87 >> 0x18);
    auVar83 = NEON_fmin(auVar59,auVar50,4);
    uVar47 = *(undefined8 *)(param_1 + 0x48);
    dVar80 = *(double *)param_5[1];
    dVar103 = *(double *)(param_5[1] + 8);
    param_4[4] = CONCAT44(fVar102,fVar74);
    *param_4 = CONCAT44(fVar116,fVar91);
    param_4[2] = CONCAT44(fVar113,fVar117);
    *(float *)(param_4 + 1) = fVar118;
    *(float *)(param_4 + 3) = fVar110;
    fVar78 = (float)uVar47;
    fVar85 = (float)((ulong)uVar47 >> 0x20);
    auVar60._8_8_ = 0xffff0000ffff;
    auVar60._0_8_ = 0xffff0000ffff;
    dVar80 = dVar80 - (double)(fVar74 * fVar29 + fVar91 * fVar55 + fVar117 * fVar65);
    auVar51._0_4_ = (int)(fVar67 * fVar78 + 0.999);
    auVar51._4_4_ = (int)(fVar32 * fVar85 + 0.999);
    auVar51._8_4_ = (int)(fVar77 * fVar78 + 0.999);
    auVar51._12_4_ = (int)(fVar101 * fVar85 + 0.999);
    fVar74 = (float)dVar80;
    dVar108 = dVar108 - (double)(fVar119 * fVar29 + fVar118 * fVar55 + fVar110 * fVar65);
    auVar76 = NEON_smax(auVar51,ZEXT816(0),4);
    dVar103 = dVar103 - (double)(fVar102 * fVar29 + fVar116 * fVar55 + fVar113 * fVar65);
    auVar112 = NEON_smin(auVar60,auVar76,4);
    fVar55 = (float)dVar108;
    fVar29 = (float)dVar103;
    *(float *)(param_4 + 7) = fVar55;
    *(float *)(param_4 + 5) = fVar119;
    auVar93._0_4_ = (int)(fVar78 * (fVar67 + fVar16 * auVar39._0_4_ * fVar107) + 0.999);
    auVar93._4_4_ =
         (int)(fVar85 * (fVar32 + fVar18 * (float)((ulong)auVar82._0_8_ >> 0x20) * 1.4210855e-14) +
              0.999);
    auVar93._8_4_ = (int)(fVar78 * (fVar77 + fVar16 * auVar82._8_4_ * 1.4210855e-14) + 0.999);
    auVar93._12_4_ = (int)(fVar85 * (fVar101 + fVar18 * auVar84._12_4_ * 1.4210855e-14) + 0.999);
    auVar76 = NEON_smax(auVar93,ZEXT816(0),4);
    auVar76 = NEON_smin(auVar60,auVar76,4);
    *(short *)((long)param_4 + 0x5c) = auVar76._0_2_;
    param_4[6] = CONCAT44(fVar29,fVar74);
    *(float *)(param_4 + 9) = (float)(dVar108 - (double)fVar55);
    param_4[8] = CONCAT44((float)(dVar103 - (double)fVar29),(float)(dVar80 - (double)fVar74));
    *(short *)((long)param_4 + 0x5a) = (short)(int)auVar83._0_4_;
    *(short *)((long)param_4 + 0x5e) = auVar112._0_2_;
  }
  fVar29 = (float)*(undefined8 *)(param_1 + 0x58) * 0.5;
  fVar55 = (float)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20) * 0.5;
  uVar47 = NEON_fmax(CONCAT44(*(float *)((long)param_4 + 0x3c) - fVar55,
                              *(float *)((long)param_4 + 0x3c) - fVar29),CONCAT44(fVar55,fVar29),4);
  uStack_108 = (undefined4)uVar70;
  uStack_104 = (undefined4)((ulong)uVar70 >> 0x20);
  (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar15 + 0x18) * 0x200 + 0x18))
            (lVar15,param_4,&local_d0);
  fVar16 = *(float *)param_5[6];
  fVar18 = *(float *)(param_5[6] + 4);
  fVar67 = *(float *)(param_5[6] + 8);
  fVar29 = *(float *)param_5[7];
  fVar55 = *(float *)(param_5[7] + 4);
  fVar65 = *(float *)(param_5[7] + 8);
  iVar21 = -(uint)(fVar29 == 0.0);
  iVar30 = -(uint)(fVar55 == 0.0);
  iVar31 = -(uint)(fVar65 == 0.0);
  fVar87 = *(float *)(param_1 + 0x68);
  iVar96 = -(uint)(fVar16 == 0.0);
  iVar19 = -(uint)(fVar18 == 0.0);
  iVar20 = -(uint)(fVar67 == 0.0);
  uVar34 = CONCAT13((byte)((uint)iVar21 >> 0x18) & (byte)((uint)iVar96 >> 0x18),
                    CONCAT12((byte)((uint)iVar21 >> 0x10) & (byte)((uint)iVar96 >> 0x10),
                             CONCAT11((byte)((uint)iVar21 >> 8) & (byte)((uint)iVar96 >> 8),
                                      (byte)iVar21 & (byte)iVar96)));
  auVar49._0_8_ =
       CONCAT17((byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar19 >> 0x18),
                CONCAT16((byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar19 >> 0x10),
                         CONCAT15((byte)((uint)iVar30 >> 8) & (byte)((uint)iVar19 >> 8),
                                  CONCAT14((byte)iVar30 & (byte)iVar19,uVar34))));
  auVar49[8] = (byte)iVar31 & (byte)iVar20;
  auVar49[9] = (byte)((uint)iVar31 >> 8) & (byte)((uint)iVar20 >> 8);
  auVar49[10] = (byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar20 >> 0x10);
  auVar49[0xb] = (byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar20 >> 0x18);
  auVar8._8_8_ = uStack_c8;
  auVar8._0_8_ = local_d0;
  auVar9._8_8_ = uStack_b8;
  auVar9._0_8_ = uStack_c0;
  fVar85 = (float)uStack_c0;
  fVar32 = (float)local_d0;
  fVar74 = (float)((ulong)uStack_c0 >> 0x20);
  fVar107 = (float)uStack_b8;
  fVar86 = (float)((ulong)uStack_b8 >> 0x20);
  fVar77 = (float)((ulong)local_d0 >> 0x20);
  fVar101 = (float)uStack_c8;
  fVar78 = (float)((ulong)uStack_c8 >> 0x20);
  local_100 = (float)uVar47;
  fStack_fc = (float)((ulong)uVar47 >> 0x20);
  if ((uVar34 & (uint)((ulong)auVar49._0_8_ >> 0x20) & auVar49._8_4_) == 0) {
    fVar110 = fVar65 * fVar65 + fVar29 * fVar29 + fVar55 * fVar55;
    fVar113 = fVar65 * fVar65 + fVar29 * fVar29 + fVar55 * fVar55;
    fVar46 = fVar67 * fVar67 + fVar16 * fVar16 + fVar18 * fVar18;
    fVar54 = fVar67 * fVar67 + fVar16 * fVar16 + fVar18 * fVar18;
    uVar70 = NEON_frsqrte(CONCAT44(fVar54,fVar46),4);
    fVar91 = (float)uVar70;
    fVar102 = (float)((ulong)uVar70 >> 0x20);
    uVar70 = NEON_frsqrts(CONCAT44(fVar54,fVar46),CONCAT44(fVar102 * fVar102,fVar91 * fVar91),4);
    iVar96 = -(uint)(fVar46 <= 0.0);
    iVar19 = -(uint)(fVar54 <= 0.0);
    fVar46 = fVar46 * fVar91 * (float)uVar70 * 1.0001;
    fVar91 = fVar54 * fVar102 * (float)((ulong)uVar70 >> 0x20) * 1.0001;
    fVar54 = (float)CONCAT13((byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar96 >> 0x18),
                             CONCAT12((byte)((uint)fVar46 >> 0x10) & ~(byte)((uint)iVar96 >> 0x10),
                                      CONCAT11((byte)((uint)fVar46 >> 8) &
                                               ~(byte)((uint)iVar96 >> 8),
                                               SUB41(fVar46,0) & ~(byte)iVar96)));
    if (fVar110 <= 0.0) {
      uVar70 = *(undefined8 *)(param_1 + 0x30);
      fVar102 = local_100;
      fVar113 = fStack_fc;
    }
    else {
      uVar70 = NEON_frsqrte(CONCAT44(fVar113,fVar110),4);
      fVar102 = (float)uVar70;
      fVar116 = (float)((ulong)uVar70 >> 0x20);
      uVar70 = NEON_frsqrts(CONCAT44(fVar113,fVar110),CONCAT44(fVar116 * fVar116,fVar102 * fVar102),
                            4);
      fVar46 = (float)((uint)*(ushort *)((long)param_4 + 0x94) << 0x10);
      iVar96 = -(uint)(fVar110 <= 0.0);
      iVar20 = -(uint)(fVar113 <= 0.0);
      fVar102 = fVar110 * fVar102 * (float)uVar70 * 1.0001;
      fVar113 = fVar113 * fVar116 * (float)((ulong)uVar70 >> 0x20) * 1.0001;
      uVar81 = NEON_fmax(CONCAT44(fVar46 - *(float *)(param_4[0xf] + 0x20),
                                  (float)((int)CONCAT42(fVar46,*(ushort *)((long)param_4 + 0x94)) <<
                                         0x10) - *(float *)(param_4[0xf] + 0x20)),0,4);
      uVar70 = *(undefined8 *)(param_1 + 0x30);
      fVar46 = (float)CONCAT13((byte)((uint)fVar102 >> 0x18) & ~(byte)((uint)iVar96 >> 0x18),
                               CONCAT12((byte)((uint)fVar102 >> 0x10) &
                                        ~(byte)((uint)iVar96 >> 0x10),
                                        CONCAT11((byte)((uint)fVar102 >> 8) &
                                                 ~(byte)((uint)iVar96 >> 8),
                                                 SUB41(fVar102,0) & ~(byte)iVar96)));
      uVar47 = NEON_fmin(CONCAT44((float)(CONCAT17((byte)((uint)fVar113 >> 0x18) &
                                                   ~(byte)((uint)iVar20 >> 0x18),
                                                   CONCAT16((byte)((uint)fVar113 >> 0x10) &
                                                            ~(byte)((uint)iVar20 >> 0x10),
                                                            CONCAT15((byte)((uint)fVar113 >> 8) &
                                                                     ~(byte)((uint)iVar20 >> 8),
                                                                     CONCAT14(SUB41(fVar113,0) &
                                                                              ~(byte)iVar20,fVar46))
                                                           )) >> 0x20) *
                                  (float)((ulong)uVar70 >> 0x20),fVar46 * (float)uVar70),uVar88,4);
      fVar102 = local_100 + (float)uVar81 * (float)uVar47;
      fVar113 = fStack_fc + (float)((ulong)uVar81 >> 0x20) * (float)((ulong)uVar47 >> 0x20);
    }
    fVar119 = (float)uVar70;
    fVar46 = fVar54 * fVar119;
    fVar79 = (float)((ulong)uVar70 >> 0x20);
    fVar54 = (float)(CONCAT17((byte)((uint)fVar91 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                              CONCAT16((byte)((uint)fVar91 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10),
                                       CONCAT15((byte)((uint)fVar91 >> 8) &
                                                ~(byte)((uint)iVar19 >> 8),
                                                CONCAT14(SUB41(fVar91,0) & ~(byte)iVar19,fVar54))))
                    >> 0x20) * fVar79;
    fVar89 = fVar102 + 0.0;
    fVar90 = fVar113 + 0.0;
    fVar91 = fVar16 * fVar119;
    fVar116 = fVar18 * fVar79;
    fVar117 = fVar67 * fVar119;
    fVar118 = *(float *)(param_5[6] + 0xc) * fVar79;
    if ((*(uint *)(param_2 + 0x20) & 0x380) == 0x80) {
      fVar33 = fVar117 * fVar117 + fVar91 * fVar91 + fVar116 * fVar116;
      fVar29 = fVar117 * fVar117 + fVar91 * fVar91 + fVar116 * fVar116;
      uVar35 = CONCAT44(fVar29,fVar33);
      uVar48 = NEON_frsqrte(uVar35,4);
      fVar55 = (float)uVar48;
      fVar65 = (float)((ulong)uVar48 >> 0x20);
      uVar48 = NEON_frsqrts(uVar35,CONCAT44(fVar65 * fVar65,fVar55 * fVar55),4);
      fVar55 = fVar55 * (float)uVar48;
      fVar65 = fVar65 * (float)((ulong)uVar48 >> 0x20);
      uVar35 = NEON_frsqrts(uVar35,CONCAT44(fVar65 * fVar65,fVar55 * fVar55),4);
      iVar96 = -(uint)(fVar33 <= 0.0);
      iVar19 = -(uint)(fVar29 <= 0.0);
      fVar33 = fVar33 * (float)uVar35 * fVar55 * 0.5;
      fVar29 = fVar29 * (float)((ulong)uVar35 >> 0x20) * fVar65 * 0.5;
      fVar33 = (float)CONCAT13((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar96 >> 0x18),
                               CONCAT12((byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar96 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar33 >> 8) &
                                                  ~(byte)((uint)iVar96 >> 8),
                                                  SUB41(fVar33,0) & ~(byte)iVar96)));
      fVar29 = (float)(CONCAT17((byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                                CONCAT16((byte)((uint)fVar29 >> 0x10) &
                                         ~(byte)((uint)iVar19 >> 0x10),
                                         CONCAT15((byte)((uint)fVar29 >> 8) &
                                                  ~(byte)((uint)iVar19 >> 8),
                                                  CONCAT14(SUB41(fVar29,0) & ~(byte)iVar19,fVar33)))
                               ) >> 0x20);
      auVar22._0_4_ = fVar85 + fVar102 + fVar91 * 0.5 + fVar33;
      auVar22._4_4_ = fVar74 + fVar113 + fVar116 * 0.5 + fVar29;
      auVar22._8_4_ = fVar107 + fVar102 + fVar117 * 0.5 + fVar33;
      auVar44._0_4_ = fVar32 + ((fVar91 * 0.5 - fVar33) - fVar102);
      auVar44._4_4_ = fVar77 + ((fVar116 * 0.5 - fVar29) - fVar113);
      auVar44._8_4_ = fVar101 + ((fVar117 * 0.5 - fVar33) - fVar102);
      auVar44._12_4_ = fVar78 + ((fVar118 * 0.5 - fVar29) - fVar113);
    }
    else if (((*(uint *)(param_2 + 0x20) >> 0x11 & 1) == 0) ||
            (fVar92 = (float)*(undefined8 *)(param_1 + 0x18),
            fVar110 <= fVar92 * fVar92 * 0.010966227)) {
      auVar42._0_4_ = fVar32 + fVar91;
      auVar42._4_4_ = fVar77 + fVar116;
      auVar42._8_4_ = fVar101 + fVar117;
      auVar42._12_4_ = fVar78 + fVar118;
      auVar61._0_4_ = fVar85 + fVar91;
      auVar61._4_4_ = fVar74 + fVar116;
      auVar61._8_4_ = fVar107 + fVar117;
      auVar61._12_4_ = fVar86 + fVar118;
      auVar76 = NEON_fmin(auVar42,auVar8,4);
      auVar83 = NEON_fmax(auVar61,auVar9,4);
      auVar44._0_4_ = auVar76._0_4_ - fVar102;
      auVar44._4_4_ = auVar76._4_4_ - fVar113;
      auVar44._8_4_ = auVar76._8_4_ - fVar102;
      auVar44._12_4_ = auVar76._12_4_ - fVar113;
      auVar22._0_4_ = fVar102 + auVar83._0_4_;
      auVar22._4_4_ = fVar113 + auVar83._4_4_;
      auVar22._8_4_ = fVar102 + auVar83._8_4_;
    }
    else {
      auVar25._0_4_ = fVar29 * fVar119 * 0.5;
      auVar25._4_4_ = fVar55 * fVar79 * 0.5;
      auVar25._8_4_ = fVar65 * fVar119 * 0.5;
      auVar25._12_4_ = *(float *)(param_5[7] + 0xc) * fVar79 * 0.5;
      auVar112 = NEON_ext(auVar25,auVar25,4,1);
      fVar29 = auVar25._8_4_ * auVar25._8_4_ +
               auVar25._0_4_ * auVar25._0_4_ + auVar25._4_4_ * auVar25._4_4_;
      fVar55 = auVar25._8_4_ * auVar25._8_4_ +
               auVar25._0_4_ * auVar25._0_4_ + auVar25._4_4_ * auVar25._4_4_;
      auVar76 = *param_5;
      auVar83 = NEON_ext(auVar76,auVar76,8,1);
      uVar70 = NEON_ext(auVar76._0_8_,auVar83._0_8_,4,1);
      fVar65 = auVar76._0_4_;
      fVar110 = auVar76._4_4_;
      fVar113 = auVar76._8_4_;
      fVar119 = auVar76._12_4_;
      auVar62._0_4_ = auVar112._0_4_ * fVar65 - auVar25._0_4_ * (float)uVar70;
      auVar62._4_4_ = auVar112._4_4_ * fVar110 - auVar25._4_4_ * (float)((ulong)uVar70 >> 0x20);
      auVar62._8_4_ = auVar25._0_4_ * fVar113 - auVar25._8_4_ * fVar65;
      auVar62._12_4_ = auVar25._4_4_ * fVar119 - auVar25._12_4_ * fVar110;
      fVar29 = fVar29 * (fVar29 * (fVar29 * -0.0029562549 + -0.02144013) + -0.33352822) + fVar33;
      auVar76 = NEON_ext(auVar62,auVar62,4,1);
      auVar26._0_4_ = auVar25._0_4_ * fVar65;
      auVar26._4_4_ = auVar25._4_4_ * fVar110;
      auVar26._8_4_ = auVar25._8_4_ * fVar113;
      auVar26._12_4_ = auVar25._12_4_ * fVar119;
      fVar102 = auVar25._0_4_ * fVar119 + auVar76._0_4_ + fVar65 * fVar29;
      fVar110 = auVar25._4_4_ * fVar119 + auVar76._4_4_ +
                fVar110 * (fVar55 * (fVar55 * (fVar55 * -0.0029562549 + -0.02144013) + -0.33352822)
                          + (float)((ulong)uVar88 >> 0x20));
      fVar113 = auVar25._8_4_ * fVar119 + auVar62._0_4_ + fVar113 * fVar29;
      auVar76 = NEON_ext(auVar26,auVar26,8,1);
      fVar55 = fVar29 * fVar119 - (auVar26._0_4_ + auVar26._4_4_ + auVar76._0_4_);
      auVar27._0_4_ = fVar102 * fVar102;
      auVar27._4_4_ = fVar110 * fVar110;
      auVar27._8_4_ = fVar113 * fVar113;
      auVar27._12_4_ = fVar55 * fVar55;
      auVar76 = NEON_ext(auVar27,auVar27,8,1);
      fVar29 = auVar76._0_4_ + auVar76._4_4_;
      uVar70 = CONCAT44(auVar27._0_4_ + auVar27._4_4_ + fVar29,
                        auVar27._0_4_ + auVar27._4_4_ + fVar29);
      uVar88 = NEON_frsqrte(uVar70,4);
      fVar29 = (float)uVar88;
      fVar65 = (float)((ulong)uVar88 >> 0x20);
      uVar88 = NEON_frsqrts(uVar70,CONCAT44(fVar65 * fVar65,fVar29 * fVar29),4);
      fVar29 = fVar29 * (float)uVar88;
      fVar65 = fVar65 * (float)((ulong)uVar88 >> 0x20);
      uVar70 = NEON_frsqrts(uVar70,CONCAT44(fVar65 * fVar65,fVar29 * fVar29),4);
      fVar29 = (float)uVar70 * fVar29;
      fVar65 = (float)((ulong)uVar70 >> 0x20) * fVar65;
      auVar28._0_4_ = fVar29 * fVar102;
      auVar28._4_4_ = fVar65 * fVar110;
      auVar28._8_4_ = fVar29 * fVar113;
      auVar28._12_4_ = fVar65 * fVar55;
      auVar43._0_4_ = -*(float *)(param_4 + 0x14);
      auVar43._4_4_ = -*(float *)((long)param_4 + 0xa4);
      auVar43._8_4_ = -*(float *)(param_4 + 0x15);
      auVar43._12_4_ = *(undefined4 *)((long)param_4 + 0xac);
      auVar6._8_8_ = uVar11;
      auVar6._0_8_ = uVar10;
      auVar7._8_4_ = uStack_108;
      auVar7._0_8_ = uVar12;
      auVar7._12_4_ = uStack_104;
      auVar83 = a64_TBL(ZEXT816(0),auVar28,auVar7);
      auVar76 = a64_TBL(ZEXT816(0),auVar28,auVar6);
      auVar4._8_8_ = uVar48;
      auVar4._0_8_ = uVar35;
      auVar112 = a64_TBL(ZEXT816(0),auVar43,auVar4);
      auVar44 = a64_TBL(ZEXT816(0),auVar43,auVar44);
      auVar71._0_4_ = auVar76._0_4_ * auVar44._0_4_ - auVar83._0_4_ * auVar112._0_4_;
      auVar71._4_4_ = auVar76._4_4_ * auVar44._4_4_ - auVar83._4_4_ * auVar112._4_4_;
      auVar71._8_4_ = auVar76._8_4_ * auVar44._8_4_ - auVar83._8_4_ * auVar112._8_4_;
      auVar71._12_4_ = auVar76._12_4_ * auVar44._12_4_ - auVar83._12_4_ * auVar112._12_4_;
      auVar5._8_8_ = uVar14;
      auVar5._0_8_ = uVar13;
      auVar94 = a64_TBL(ZEXT816(0),auVar71,auVar5);
      fVar55 = auVar94._12_4_ - (auVar76._12_4_ * auVar112._12_4_ + auVar83._12_4_ * auVar44._12_4_)
      ;
      fVar110 = -(auVar94._0_4_ - (auVar76._0_4_ * auVar112._0_4_ + auVar83._0_4_ * auVar44._0_4_));
      fVar119 = -(auVar94._4_4_ - (auVar76._4_4_ * auVar112._4_4_ + auVar83._4_4_ * auVar44._4_4_));
      auVar53._0_8_ = CONCAT44(fVar119,fVar110);
      auVar53._8_4_ =
           -(auVar94._8_4_ - (auVar76._8_4_ * auVar112._8_4_ + auVar83._8_4_ * auVar44._8_4_));
      auVar53._12_4_ = -fVar55;
      auVar63._8_8_ = auVar53._8_8_;
      auVar63._0_8_ = auVar53._0_8_;
      auVar64._0_12_ = auVar63._0_12_;
      auVar64._12_4_ = fVar55;
      auVar45._0_4_ = fVar110 + fVar110;
      auVar45._4_4_ = fVar119 + fVar119;
      auVar45._8_4_ = auVar53._8_4_ + auVar53._8_4_;
      auVar45._12_4_ = fVar55 + fVar55;
      auVar76 = NEON_ext(auVar64,auVar64,8,1);
      auVar44 = NEON_ext(auVar45,auVar45,8,1);
      fVar65 = auVar76._0_4_ * auVar44._0_4_;
      fVar97 = auVar45._4_4_ * fVar110 + auVar45._8_4_ * fVar55;
      fVar79 = auVar45._4_4_ * fVar110 - auVar45._8_4_ * fVar55;
      fVar92 = auVar45._8_4_ * fVar119 + auVar45._0_4_ * fVar55;
      fVar29 = auVar45._8_4_ * fVar119 - auVar45._0_4_ * fVar55;
      fVar111 = auVar45._8_4_ * fVar110 - auVar45._4_4_ * fVar55;
      uStack_a8 = (ulong)(uint)fVar111;
      fVar113 = fVar33 - (auVar45._0_4_ * fVar110 + auVar45._4_4_ * fVar119);
      uStack_88 = (ulong)(uint)fVar113;
      fVar102 = fVar33 - (auVar45._0_4_ * fVar110 + fVar65);
      fVar33 = fVar33 - (auVar45._4_4_ * fVar119 + fVar65);
      fVar119 = *(float *)((long)param_4 + 0x2c);
      uStack_98 = (ulong)(uint)fVar92;
      uStack_a0 = CONCAT44(fVar102,fVar79);
      fVar110 = auVar45._8_4_ * fVar110 + auVar45._4_4_ * fVar55;
      local_b0 = CONCAT44(fVar97,fVar33);
      local_90 = CONCAT44(fVar29,fVar110);
      fVar65 = *(float *)((long)param_4 + 0x1c);
      fVar55 = *(float *)((long)param_4 + 0xc);
      auVar17._0_8_ =
           CONCAT44((fVar116 + (float)*(double *)(param_5[1] + 8)) -
                    (fVar29 * fVar119 + fVar97 * fVar55 + fVar102 * fVar65),
                    (fVar91 + (float)*(double *)param_5[1]) -
                    (fVar110 * fVar119 + fVar33 * fVar55 + fVar79 * fVar65));
      auVar17._8_4_ =
           (fVar117 + (float)*(double *)param_5[2]) -
           (fVar113 * fVar119 + fVar111 * fVar55 + fVar92 * fVar65);
      auVar17._12_4_ = (fVar118 + 0.0) - (fVar119 * 0.0 + fVar55 * 0.0 + fVar65 * 0.0);
      uStack_78 = auVar17._8_8_;
      uStack_80 = auVar17._0_8_;
      (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(param_4[0xf] + 0x18) * 0x200 + 0x18))
                (param_4[0xf],&local_b0,local_f0);
      auVar2._4_4_ = fVar77 - fStack_fc;
      auVar2._0_4_ = fVar32 - local_100;
      auVar2._8_4_ = fVar101 - local_100;
      auVar2._12_4_ = fVar78 - fStack_fc;
      auVar3._4_4_ = fStack_fc + fVar74;
      auVar3._0_4_ = local_100 + fVar85;
      auVar3._8_4_ = local_100 + fVar107;
      auVar3._12_4_ = fStack_fc + fVar86;
      auVar44 = NEON_fmin(auVar2,local_f0,4);
      auVar76 = NEON_fmax(auVar3,local_e0,4);
      auVar22 = auVar76._0_12_;
    }
  }
  else {
    fVar89 = local_100 + 0.0;
    fVar90 = fStack_fc + 0.0;
    auVar22._0_4_ = local_100 + fVar85;
    auVar22._4_4_ = fStack_fc + fVar74;
    auVar22._8_4_ = local_100 + fVar107;
    auVar44._0_4_ = fVar32 - local_100;
    auVar44._4_4_ = fVar77 - fStack_fc;
    auVar44._8_4_ = fVar101 - local_100;
    auVar44._12_4_ = fVar78 - fStack_fc;
  }
  fVar33 = (float)*(undefined8 *)(param_1 + 0x48);
  fVar29 = (float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20);
  auVar40._0_8_ = CONCAT44((int)((fVar54 + fVar90) * fVar29),(int)((fVar46 + fVar89) * fVar33));
  auVar52._0_8_ = CONCAT44((int)(fVar90 * fVar29),(int)(fVar89 * fVar33));
  auVar40._8_8_ = auVar40._0_8_;
  uVar35 = NEON_sqxtun(auVar40._0_8_,auVar40,4);
  auVar52._8_8_ = auVar52._0_8_;
  uVar48 = NEON_sqxtun(auVar52._0_8_,auVar52,4);
  *(short *)(param_4 + 0x12) = (short)uVar35;
  *(short *)((long)param_4 + 0x92) = (short)uVar48;
  uVar35 = *(undefined8 *)(param_1 + 0x10);
  fVar33 = (float)uVar35;
  *(short *)param_5[5] = (short)((uint)(fVar16 * fVar33) >> 0x10);
  *(short *)(param_5[5] + 2) = (short)((uint)(fVar18 * (float)((ulong)uVar35 >> 0x20)) >> 0x10);
  *(short *)(param_5[5] + 4) = (short)((uint)(fVar67 * fVar33) >> 0x10);
  uVar48 = _UNK_0388a1f8;
  uVar35 = _DAT_0388a1f0;
  if (0.0 < fVar87) {
    iVar69 = -(uint)(fVar16 < 0.0);
    iVar72 = -(uint)(fVar18 < 0.0);
    iVar73 = -(uint)(fVar67 < 0.0);
    fVar33 = fVar87 * (float)*(undefined8 *)(param_1 + 0x18);
    fVar46 = fVar87 * (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
    iVar21 = -(uint)(ABS((float)*(undefined8 *)(param_5[3] + 8)) < fVar33);
    iVar30 = -(uint)(ABS((float)((ulong)*(undefined8 *)(param_5[3] + 8) >> 0x20)) < fVar46);
    iVar31 = -(uint)(ABS(*(float *)(param_5[3] + 4)) < fVar33);
    iVar96 = -(uint)(ABS(fVar16) < fVar33);
    iVar19 = -(uint)(ABS(fVar18) < fVar46);
    iVar20 = -(uint)(ABS(fVar67) < fVar33);
    iVar56 = -(uint)(0.0 < fVar16);
    iVar66 = -(uint)(0.0 < fVar18);
    iVar68 = -(uint)(0.0 < fVar67);
    uVar34 = CONCAT13((byte)((uint)iVar96 >> 0x18) &
                      ((byte)((uint)iVar69 >> 0x18) | (byte)((uint)iVar56 >> 0x18)) &
                      (byte)((uint)iVar21 >> 0x18),
                      CONCAT12((byte)((uint)iVar96 >> 0x10) &
                               ((byte)((uint)iVar69 >> 0x10) | (byte)((uint)iVar56 >> 0x10)) &
                               (byte)((uint)iVar21 >> 0x10),
                               CONCAT11((byte)((uint)iVar96 >> 8) &
                                        ((byte)((uint)iVar69 >> 8) | (byte)((uint)iVar56 >> 8)) &
                                        (byte)((uint)iVar21 >> 8),
                                        (byte)iVar96 & ((byte)iVar69 | (byte)iVar56) & (byte)iVar21)
                              ));
    auVar36._0_8_ =
         CONCAT17((byte)((uint)iVar19 >> 0x18) &
                  ((byte)((uint)iVar72 >> 0x18) | (byte)((uint)iVar66 >> 0x18)) &
                  (byte)((uint)iVar30 >> 0x18),
                  CONCAT16((byte)((uint)iVar19 >> 0x10) &
                           ((byte)((uint)iVar72 >> 0x10) | (byte)((uint)iVar66 >> 0x10)) &
                           (byte)((uint)iVar30 >> 0x10),
                           CONCAT15((byte)((uint)iVar19 >> 8) &
                                    ((byte)((uint)iVar72 >> 8) | (byte)((uint)iVar66 >> 8)) &
                                    (byte)((uint)iVar30 >> 8),
                                    CONCAT14((byte)iVar19 & ((byte)iVar72 | (byte)iVar66) &
                                             (byte)iVar30,uVar34))));
    auVar36[8] = (byte)iVar20 & ((byte)iVar73 | (byte)iVar68) & (byte)iVar31;
    auVar36[9] = (byte)((uint)iVar20 >> 8) & ((byte)((uint)iVar73 >> 8) | (byte)((uint)iVar68 >> 8))
                 & (byte)((uint)iVar31 >> 8);
    auVar36[10] = (byte)((uint)iVar20 >> 0x10) &
                  ((byte)((uint)iVar73 >> 0x10) | (byte)((uint)iVar68 >> 0x10)) &
                  (byte)((uint)iVar31 >> 0x10);
    auVar36[0xb] = (byte)((uint)iVar20 >> 0x18) &
                   ((byte)((uint)iVar73 >> 0x18) | (byte)((uint)iVar68 >> 0x18)) &
                   (byte)((uint)iVar31 >> 0x18);
    if ((uVar34 & (uint)((ulong)auVar36._0_8_ >> 0x20) & auVar36._8_4_) != 0) {
      fVar55 = auVar22._0_4_;
      iVar96 = -(uint)(fVar55 <= *(float *)(param_4 + 0xc));
      fVar65 = auVar22._4_4_;
      iVar19 = -(uint)(fVar65 <= *(float *)((long)param_4 + 100));
      fVar16 = auVar22._8_4_;
      iVar20 = -(uint)(fVar16 <= *(float *)(param_4 + 0xd));
      fVar33 = auVar44._0_4_;
      iVar21 = -(uint)((float)param_4[0xe] <= fVar33);
      fVar46 = auVar44._4_4_;
      iVar30 = -(uint)((float)((ulong)param_4[0xe] >> 0x20) <= fVar46);
      fVar54 = auVar44._8_4_;
      iVar31 = -(uint)(*(float *)((long)param_4 + 0x6c) <= fVar54);
      fVar29 = auVar44._12_4_;
      uVar34 = CONCAT13((byte)((uint)iVar21 >> 0x18) & (byte)((uint)iVar96 >> 0x18),
                        CONCAT12((byte)((uint)iVar21 >> 0x10) & (byte)((uint)iVar96 >> 0x10),
                                 CONCAT11((byte)((uint)iVar21 >> 8) & (byte)((uint)iVar96 >> 8),
                                          (byte)iVar21 & (byte)iVar96)));
      auVar37._0_8_ =
           CONCAT17((byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar19 >> 0x18),
                    CONCAT16((byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar19 >> 0x10),
                             CONCAT15((byte)((uint)iVar30 >> 8) & (byte)((uint)iVar19 >> 8),
                                      CONCAT14((byte)iVar30 & (byte)iVar19,uVar34))));
      auVar37[8] = (byte)iVar31 & (byte)iVar20;
      auVar37[9] = (byte)((uint)iVar31 >> 8) & (byte)((uint)iVar20 >> 8);
      auVar37[10] = (byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar20 >> 0x10);
      auVar37[0xb] = (byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar20 >> 0x18);
      if ((uVar34 & (uint)((ulong)auVar37._0_8_ >> 0x20) & auVar37._8_4_) == 0) {
        fVar18 = *param_3;
        fVar67 = param_3[1];
        fVar32 = param_3[2];
        fVar77 = param_3[4];
        fVar101 = param_3[5];
        fVar78 = param_3[6];
      }
      else {
        fVar18 = *param_3;
        fVar67 = param_3[1];
        fVar32 = param_3[2];
        fVar77 = param_3[4];
        fVar101 = param_3[5];
        fVar78 = param_3[6];
        iVar21 = -(uint)(fVar55 <= fVar77);
        iVar30 = -(uint)(fVar65 <= fVar101);
        iVar31 = -(uint)(fVar16 <= fVar78);
        iVar96 = -(uint)(fVar18 <= fVar33);
        iVar19 = -(uint)(fVar67 <= fVar46);
        iVar20 = -(uint)(fVar32 <= fVar54);
        uVar34 = CONCAT13((byte)((uint)iVar21 >> 0x18) & (byte)((uint)iVar96 >> 0x18),
                          CONCAT12((byte)((uint)iVar21 >> 0x10) & (byte)((uint)iVar96 >> 0x10),
                                   CONCAT11((byte)((uint)iVar21 >> 8) & (byte)((uint)iVar96 >> 8),
                                            (byte)iVar21 & (byte)iVar96)));
        auVar57._0_8_ =
             CONCAT17((byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar19 >> 0x18),
                      CONCAT16((byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar19 >> 0x10),
                               CONCAT15((byte)((uint)iVar30 >> 8) & (byte)((uint)iVar19 >> 8),
                                        CONCAT14((byte)iVar30 & (byte)iVar19,uVar34))));
        auVar57[8] = (byte)iVar31 & (byte)iVar20;
        auVar57[9] = (byte)((uint)iVar31 >> 8) & (byte)((uint)iVar20 >> 8);
        auVar57[10] = (byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar20 >> 0x10);
        auVar57[0xb] = (byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar20 >> 0x18);
        if ((uVar34 & (uint)((ulong)auVar57._0_8_ >> 0x20) & auVar57._8_4_) != 0) {
          return;
        }
      }
      auVar22._0_4_ = fVar87 + fVar55;
      auVar22._4_4_ = fVar87 + fVar65;
      auVar22._8_4_ = fVar87 + fVar16;
      auVar44._0_4_ = fVar33 - fVar87;
      auVar44._4_4_ = fVar46 - fVar87;
      auVar44._8_4_ = fVar54 - fVar87;
      auVar44._12_4_ = fVar29 - fVar87;
      iVar21 = -(uint)(auVar44._0_4_ <= fVar77);
      iVar30 = -(uint)(auVar44._4_4_ <= fVar101);
      iVar31 = -(uint)(auVar44._8_4_ <= fVar78);
      iVar96 = -(uint)(fVar18 <= auVar22._0_4_);
      iVar19 = -(uint)(fVar67 <= auVar22._4_4_);
      iVar20 = -(uint)(fVar32 <= auVar22._8_4_);
      uVar34 = CONCAT13((byte)((uint)iVar21 >> 0x18) & (byte)((uint)iVar96 >> 0x18),
                        CONCAT12((byte)((uint)iVar21 >> 0x10) & (byte)((uint)iVar96 >> 0x10),
                                 CONCAT11((byte)((uint)iVar21 >> 8) & (byte)((uint)iVar96 >> 8),
                                          (byte)iVar21 & (byte)iVar96)));
      auVar38._0_8_ =
           CONCAT17((byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar19 >> 0x18),
                    CONCAT16((byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar19 >> 0x10),
                             CONCAT15((byte)((uint)iVar30 >> 8) & (byte)((uint)iVar19 >> 8),
                                      CONCAT14((byte)iVar30 & (byte)iVar19,uVar34))));
      auVar38[8] = (byte)iVar31 & (byte)iVar20;
      auVar38[9] = (byte)((uint)iVar31 >> 8) & (byte)((uint)iVar20 >> 8);
      auVar38[10] = (byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar20 >> 0x10);
      auVar38[0xb] = (byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar20 >> 0x18);
      if ((uVar34 & (uint)((ulong)auVar38._0_8_ >> 0x20) & auVar38._8_4_) == 0) goto LAB_03019774;
    }
  }
  *(ushort *)(param_4 + 0xb) = *(ushort *)(param_4 + 0xb) | 0x10;
LAB_03019774:
  auVar41._8_8_ = uVar48;
  auVar41._0_8_ = uVar35;
  auVar76 = a64_TBL(ZEXT816(0),auVar44,auVar41);
  auVar24._12_4_ = auVar76._12_4_;
  auVar24._0_12_ = auVar22;
  param_4[0xd] = auVar24._8_8_;
  param_4[0xc] = auVar22._0_8_;
  param_4[0xe] = auVar44._0_8_;
  return;
}


