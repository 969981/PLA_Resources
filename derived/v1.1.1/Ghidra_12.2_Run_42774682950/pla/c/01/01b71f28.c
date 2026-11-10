/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b71f28; name: FUN_01b71f28
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b71f28(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined2 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined3 uVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  float fVar12;
  float extraout_s0;
  float fVar13;
  float extraout_var;
  float extraout_var_00;
  float fVar15;
  float fVar16;
  float extraout_var_01;
  float fVar17;
  undefined1 auVar14 [16];
  byte bVar18;
  undefined1 uVar19;
  byte bVar20;
  undefined1 uVar21;
  byte bVar22;
  byte bVar23;
  undefined1 uVar24;
  byte bVar25;
  byte bVar26;
  undefined1 uVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  undefined1 uVar42;
  byte bVar43;
  byte bVar44;
  undefined1 uVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  undefined1 uVar50;
  byte bVar51;
  byte bVar52;
  undefined1 uVar53;
  byte bVar54;
  byte bVar55;
  undefined1 uVar56;
  byte bVar57;
  undefined7 uVar58;
  undefined1 auVar59 [12];
  byte bVar63;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar64;
  float fVar65;
  float fVar74;
  int iVar76;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  int iVar75;
  int iVar77;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  int iVar84;
  undefined8 uVar78;
  int iVar85;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar86;
  float fVar94;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined8 uVar95;
  undefined8 uVar96;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined8 *local_48 [2];
  long *local_38;
  long *local_30;
  long *local_28;
  undefined8 local_18;
  
  FUN_01b70fc8();
  FUN_01b74640(param_5,1);
  FUN_009c69bc(&local_28,param_5);
  bVar38 = (byte)_UNK_0388a138;
  bVar40 = (byte)((ulong)_UNK_0388a138 >> 8);
  bVar43 = (byte)((ulong)_UNK_0388a138 >> 0x10);
  bVar46 = (byte)((ulong)_UNK_0388a138 >> 0x18);
  bVar48 = (byte)((ulong)_UNK_0388a138 >> 0x20);
  bVar51 = (byte)((ulong)_UNK_0388a138 >> 0x28);
  bVar54 = (byte)((ulong)_UNK_0388a138 >> 0x30);
  bVar57 = (byte)((ulong)_UNK_0388a138 >> 0x38);
  bVar23 = (byte)_DAT_0388a130;
  bVar26 = (byte)((ulong)_DAT_0388a130 >> 8);
  bVar63 = (byte)((ulong)_DAT_0388a130 >> 0x10);
  bVar28 = (byte)((ulong)_DAT_0388a130 >> 0x18);
  bVar30 = (byte)((ulong)_DAT_0388a130 >> 0x20);
  bVar32 = (byte)((ulong)_DAT_0388a130 >> 0x28);
  bVar34 = (byte)((ulong)_DAT_0388a130 >> 0x30);
  bVar36 = (byte)((ulong)_DAT_0388a130 >> 0x38);
  if (local_28 == (long *)0x0) {
    param_4 = ZEXT816(0);
    lVar11 = *(long *)(param_5 + 0x3d0);
  }
  else {
    bVar18 = bVar23;
    bVar20 = bVar26;
    bVar22 = bVar63;
    bVar25 = bVar28;
    bVar29 = bVar30;
    bVar31 = bVar32;
    bVar33 = bVar34;
    bVar35 = bVar36;
    bVar37 = bVar38;
    bVar39 = bVar40;
    bVar41 = bVar43;
    bVar44 = bVar46;
    bVar47 = bVar48;
    bVar49 = bVar51;
    bVar52 = bVar54;
    bVar55 = bVar57;
    (**(code **)(*local_28 + 0x40))();
    if (local_28 == (long *)0x0) {
      lVar11 = *(long *)(param_5 + 0x3d0);
    }
    else {
      (**(code **)(*local_28 + 0x40))();
      auVar66._0_4_ = extraout_s0 * extraout_s0;
      auVar66._4_4_ = extraout_var * extraout_var;
      auVar66._8_4_ = extraout_var_00 * extraout_var_00;
      auVar66._12_4_ = extraout_var_01 * extraout_var_01;
      auVar79 = NEON_ext(auVar66,auVar66,8,1);
      fVar64 = auVar79._0_4_ + auVar66._0_4_;
      fVar74 = auVar79._4_4_ + auVar66._4_4_;
      fVar12 = fVar64 + fVar74;
      fVar64 = fVar64 + fVar74;
      auVar67._8_8_ = CONCAT44(fVar64,fVar12);
      auVar67._0_8_ = CONCAT44(fVar64,fVar12);
      auVar79 = NEON_frsqrte(auVar67,4);
      auVar87._0_4_ = auVar79._0_4_ * fVar12;
      auVar87._4_4_ = auVar79._4_4_ * fVar64;
      auVar87._8_4_ = auVar79._8_4_ * fVar12;
      auVar87._12_4_ = auVar79._12_4_ * fVar64;
      auVar88 = NEON_frsqrts(auVar79,auVar87,4);
      auVar80._0_4_ = auVar79._0_4_ * auVar88._0_4_;
      auVar80._4_4_ = auVar79._4_4_ * auVar88._4_4_;
      auVar80._8_4_ = auVar79._8_4_ * auVar88._8_4_;
      auVar80._12_4_ = auVar79._12_4_ * auVar88._12_4_;
      auVar89._0_4_ = fVar12 * auVar80._0_4_;
      auVar89._4_4_ = fVar64 * auVar80._4_4_;
      auVar89._8_4_ = fVar12 * auVar80._8_4_;
      auVar89._12_4_ = fVar64 * auVar80._12_4_;
      iVar10 = -(uint)(fVar12 == 0.0);
      iVar75 = -(uint)(fVar64 == 0.0);
      iVar76 = -(uint)(fVar12 == 0.0);
      iVar77 = -(uint)(fVar64 == 0.0);
      auVar79 = NEON_frsqrts(auVar80,auVar89,4);
      fVar12 = extraout_s0 * auVar80._0_4_ * auVar79._0_4_;
      fVar64 = extraout_var * auVar80._4_4_ * auVar79._4_4_;
      fVar74 = extraout_var_00 * auVar80._8_4_ * auVar79._8_4_;
      fVar17 = extraout_var_01 * auVar80._12_4_ * auVar79._12_4_;
      fVar65 = (float)CONCAT13((byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18),
                               CONCAT12((byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar10 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar12 >> 8) &
                                                  ~(byte)((uint)iVar10 >> 8),
                                                  SUB41(fVar12,0) & ~(byte)iVar10)));
      auVar68._0_8_ =
           CONCAT17((byte)((uint)fVar64 >> 0x18) & ~(byte)((uint)iVar75 >> 0x18),
                    CONCAT16((byte)((uint)fVar64 >> 0x10) & ~(byte)((uint)iVar75 >> 0x10),
                             CONCAT15((byte)((uint)fVar64 >> 8) & ~(byte)((uint)iVar75 >> 8),
                                      CONCAT14(SUB41(fVar64,0) & ~(byte)iVar75,fVar65))));
      auVar68[8] = SUB41(fVar74,0) & ~(byte)iVar76;
      auVar68[9] = (byte)((uint)fVar74 >> 8) & ~(byte)((uint)iVar76 >> 8);
      auVar68[10] = (byte)((uint)fVar74 >> 0x10) & ~(byte)((uint)iVar76 >> 0x10);
      auVar68[0xb] = (byte)((uint)fVar74 >> 0x18) & ~(byte)((uint)iVar76 >> 0x18);
      auVar68[0xc] = SUB41(fVar17,0) & ~(byte)iVar77;
      auVar68[0xd] = (byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar77 >> 8);
      auVar68[0xe] = (byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar77 >> 0x10);
      auVar68[0xf] = (byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar77 >> 0x18);
      auVar81._0_4_ =
           (float)CONCAT13(bVar25,CONCAT12(bVar22,CONCAT11(bVar20,bVar18))) *
           (float)CONCAT13(bVar25,CONCAT12(bVar22,CONCAT11(bVar20,bVar18)));
      auVar81._4_4_ =
           (float)CONCAT13(bVar35,CONCAT12(bVar33,CONCAT11(bVar31,bVar29))) *
           (float)CONCAT13(bVar35,CONCAT12(bVar33,CONCAT11(bVar31,bVar29)));
      auVar81._8_4_ =
           (float)CONCAT13(bVar44,CONCAT12(bVar41,CONCAT11(bVar39,bVar37))) *
           (float)CONCAT13(bVar44,CONCAT12(bVar41,CONCAT11(bVar39,bVar37)));
      auVar81._12_4_ =
           (float)CONCAT13(bVar55,CONCAT12(bVar52,CONCAT11(bVar49,bVar47))) *
           (float)CONCAT13(bVar55,CONCAT12(bVar52,CONCAT11(bVar49,bVar47)));
      auVar79 = NEON_ext(auVar81,auVar81,8,1);
      fVar64 = auVar79._0_4_ + auVar81._0_4_;
      fVar74 = auVar79._4_4_ + auVar81._4_4_;
      fVar12 = fVar64 + fVar74;
      fVar64 = fVar64 + fVar74;
      auVar82._8_8_ = CONCAT44(fVar64,fVar12);
      auVar82._0_8_ = CONCAT44(fVar64,fVar12);
      auVar79 = NEON_frsqrte(auVar82,4);
      auVar97._0_4_ = auVar79._0_4_ * fVar12;
      auVar97._4_4_ = auVar79._4_4_ * fVar64;
      auVar97._8_4_ = auVar79._8_4_ * fVar12;
      auVar97._12_4_ = auVar79._12_4_ * fVar64;
      auVar88 = NEON_frsqrts(auVar79,auVar97,4);
      auVar90._0_4_ = auVar79._0_4_ * auVar88._0_4_;
      auVar90._4_4_ = auVar79._4_4_ * auVar88._4_4_;
      auVar90._8_4_ = auVar79._8_4_ * auVar88._8_4_;
      auVar90._12_4_ = auVar79._12_4_ * auVar88._12_4_;
      auVar98._0_4_ = fVar12 * auVar90._0_4_;
      auVar98._4_4_ = fVar64 * auVar90._4_4_;
      auVar98._8_4_ = fVar12 * auVar90._8_4_;
      auVar98._12_4_ = fVar64 * auVar90._12_4_;
      iVar77 = -(uint)(fVar12 == 0.0);
      iVar84 = -(uint)(fVar64 == 0.0);
      iVar85 = -(uint)(fVar12 == 0.0);
      auVar79 = NEON_frsqrts(auVar90,auVar98,4);
      fVar64 = (float)CONCAT13(bVar25,CONCAT12(bVar22,CONCAT11(bVar20,bVar18))) *
               auVar90._0_4_ * auVar79._0_4_;
      fVar12 = (float)CONCAT13(bVar35,CONCAT12(bVar33,CONCAT11(bVar31,bVar29))) *
               auVar90._4_4_ * auVar79._4_4_;
      fVar74 = (float)CONCAT13(bVar44,CONCAT12(bVar41,CONCAT11(bVar39,bVar37))) *
               auVar90._8_4_ * auVar79._8_4_;
      bVar23 = (byte)((uint)fVar64 >> 0x10) & ~(byte)((uint)iVar77 >> 0x10);
      bVar26 = (byte)((uint)fVar64 >> 0x18) & ~(byte)((uint)iVar77 >> 0x18);
      fVar13 = param_3._0_4_;
      auVar91._0_4_ = fVar13 * fVar13;
      fVar15 = param_3._4_4_;
      auVar91._4_4_ = fVar15 * fVar15;
      fVar16 = param_3._8_4_;
      auVar91._8_4_ = fVar16 * fVar16;
      auVar91._12_4_ = param_3._12_4_ * param_3._12_4_;
      auVar79 = NEON_ext(auVar91,auVar91,8,1);
      fVar86 = auVar79._0_4_ + auVar91._0_4_;
      fVar94 = auVar79._4_4_ + auVar91._4_4_;
      fVar17 = fVar86 + fVar94;
      fVar86 = fVar86 + fVar94;
      auVar92._8_8_ = CONCAT44(fVar86,fVar17);
      auVar92._0_8_ = CONCAT44(fVar86,fVar17);
      auVar79 = NEON_frsqrte(auVar92,4);
      auVar102._0_4_ = auVar79._0_4_ * fVar17;
      auVar102._4_4_ = auVar79._4_4_ * fVar86;
      auVar102._8_4_ = auVar79._8_4_ * fVar17;
      auVar102._12_4_ = auVar79._12_4_ * fVar86;
      auVar88 = NEON_frsqrts(auVar79,auVar102,4);
      auVar99._0_4_ = auVar79._0_4_ * auVar88._0_4_;
      auVar99._4_4_ = auVar79._4_4_ * auVar88._4_4_;
      auVar99._8_4_ = auVar79._8_4_ * auVar88._8_4_;
      auVar99._12_4_ = auVar79._12_4_ * auVar88._12_4_;
      auVar103._0_4_ = fVar17 * auVar99._0_4_;
      auVar103._4_4_ = fVar86 * auVar99._4_4_;
      auVar103._8_4_ = fVar17 * auVar99._8_4_;
      auVar103._12_4_ = fVar86 * auVar99._12_4_;
      auVar79 = NEON_frsqrts(auVar99,auVar103,4);
      fVar13 = fVar13 * auVar99._0_4_ * auVar79._0_4_;
      fVar15 = fVar15 * auVar99._4_4_ * auVar79._4_4_;
      fVar16 = fVar16 * auVar99._8_4_ * auVar79._8_4_;
      iVar10 = -(uint)(fVar17 == 0.0);
      iVar75 = -(uint)(fVar86 == 0.0);
      iVar76 = -(uint)(fVar17 == 0.0);
      uVar58 = CONCAT16((byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar75 >> 0x10),
                        CONCAT15((byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar75 >> 8),
                                 CONCAT14(SUB41(fVar15,0) & ~(byte)iVar75,
                                          CONCAT13((byte)((uint)fVar13 >> 0x18) &
                                                   ~(byte)((uint)iVar10 >> 0x18),
                                                   CONCAT12((byte)((uint)fVar13 >> 0x10) &
                                                            ~(byte)((uint)iVar10 >> 0x10),
                                                            CONCAT11((byte)((uint)fVar13 >> 8) &
                                                                     ~(byte)((uint)iVar10 >> 8),
                                                                     SUB41(fVar13,0) & ~(byte)iVar10
                                                                    ))))));
      bVar63 = (byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar75 >> 0x18);
      auVar59._0_8_ = CONCAT17(bVar63,uVar58);
      auVar59[8] = SUB41(fVar16,0) & ~(byte)iVar76;
      auVar59[9] = (byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar76 >> 8);
      auVar59[10] = (byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar76 >> 0x10);
      auVar59[0xb] = (byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar76 >> 0x18);
      uVar95 = NEON_ext(auVar68._0_8_,auVar59._0_8_,4,1);
      auVar79 = NEON_ext(auVar68,auVar68,8,1);
      fVar12 = (float)CONCAT13((byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar84 >> 0x18),
                               CONCAT12((byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar84 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar12 >> 8) &
                                                  ~(byte)((uint)iVar84 >> 8),
                                                  SUB41(fVar12,0) & ~(byte)iVar84)));
      fVar15 = auVar59._8_4_;
      auVar88 = NEON_fmov(0x3f800000,4);
      fVar17 = (float)_DAT_03889820 * fVar65 + (float)_DAT_0388a450 * fVar12 +
               (float)_DAT_03889eb0 * fVar15 + auVar88._0_4_;
      fVar86 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar65 +
               (float)((ulong)_DAT_0388a450 >> 0x20) * fVar12 +
               (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar15 + auVar88._4_4_;
      fVar13 = (float)_UNK_03889828 * fVar65 + (float)_UNK_0388a458 * fVar12 +
               (float)_UNK_03889eb8 * fVar15 + auVar88._8_4_;
      fVar15 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar65 +
               (float)((ulong)_UNK_0388a458 >> 0x20) * fVar12 +
               (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar15 + auVar88._12_4_;
      fVar12 = (float)CONCAT13((byte)((uint)fVar74 >> 0x18) & ~(byte)((uint)iVar85 >> 0x18),
                               CONCAT12((byte)((uint)fVar74 >> 0x10) & ~(byte)((uint)iVar85 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar74 >> 8) &
                                                  ~(byte)((uint)iVar85 >> 8),
                                                  SUB41(fVar74,0) & ~(byte)iVar85)));
      uVar4 = CONCAT11((byte)((uint)fVar64 >> 8) & ~(byte)((uint)iVar77 >> 8),
                       SUB41(fVar64,0) & ~(byte)iVar77);
      auVar60._0_4_ = (float)uVar95 + (float)CONCAT13(bVar26,CONCAT12(bVar23,uVar4));
      fVar64 = (float)((ulong)uVar95 >> 0x20);
      auVar60._4_4_ = fVar64 + auVar79._0_4_;
      uVar8 = (undefined3)((uint7)uVar58 >> 0x20);
      auVar60._8_4_ = fVar12 + (float)CONCAT13(bVar63,uVar8);
      auVar60._12_4_ = 0;
      auVar69._0_4_ = (float)uVar95 - (float)CONCAT13(bVar26,CONCAT12(bVar23,uVar4));
      auVar69._4_4_ = fVar64 - auVar79._0_4_;
      auVar69._8_4_ = fVar12 - (float)CONCAT13(bVar63,uVar8);
      auVar69._12_4_ = 0;
      uVar9 = a64_TBL(ZEXT816(0),auVar60,auVar69,DAT_0388a888);
      uVar95 = a64_TBL(ZEXT816(0),auVar60,auVar69,DAT_0388a710);
      auVar93._8_8_ = uVar95;
      auVar93._0_8_ = uVar9 & 0xffffffff00000000;
      uVar78 = a64_TBL(ZEXT816(0),auVar60,auVar69,DAT_0388a758);
      auVar105._4_12_ = auVar93._4_12_;
      auVar105._0_4_ = fVar17;
      auVar83._0_8_ = a64_TBL(ZEXT816(0),auVar60,auVar69,DAT_0388a880);
      uVar96 = a64_TBL(ZEXT816(0),auVar60,auVar69,DAT_0388a640);
      auVar100._0_8_ = a64_TBL(ZEXT816(0),auVar60,auVar69,DAT_0388a700);
      uVar95 = a64_TBL(ZEXT816(0),auVar60,auVar69,DAT_0388a590);
      auVar70._4_4_ = fVar86;
      auVar70._0_4_ = fVar86;
      auVar70._8_4_ = fVar86;
      auVar70._12_4_ = fVar86;
      auVar83._12_4_ = (undefined4)((ulong)uVar96 >> 0x20);
      auVar83._8_4_ = fVar13;
      auVar100._8_8_ = uVar95;
      auVar107._4_4_ = fVar17;
      auVar107._0_4_ = fVar17;
      auVar107._8_4_ = fVar17;
      auVar107._12_4_ = fVar17;
      auVar104._0_8_ = CONCAT44(-(uint)(fVar17 <= fVar86),-(uint)(fVar17 <= fVar86));
      auVar104._8_4_ = -(uint)(fVar17 <= fVar86);
      auVar104._12_4_ = -(uint)(fVar17 <= fVar86);
      auVar106._8_8_ = auVar104._8_8_;
      auVar106._0_8_ = auVar104._0_8_;
      auVar79[4] = SUB41(fVar86,0);
      auVar79._0_4_ = (int)uVar9;
      auVar79[5] = (char)((uint)fVar86 >> 8);
      auVar79[6] = (char)((uint)fVar86 >> 0x10);
      auVar79[7] = (char)((uint)fVar86 >> 0x18);
      auVar79[8] = (char)uVar78;
      auVar79[9] = (char)((ulong)uVar78 >> 8);
      auVar79[10] = (char)((ulong)uVar78 >> 0x10);
      auVar79[0xb] = (char)((ulong)uVar78 >> 0x18);
      auVar79[0xc] = (char)((ulong)uVar78 >> 0x20);
      auVar79[0xd] = (char)((ulong)uVar78 >> 0x28);
      auVar79[0xe] = (char)((ulong)uVar78 >> 0x30);
      auVar79[0xf] = (char)((ulong)uVar78 >> 0x38);
      auVar105 = auVar105 ^ (auVar105 ^ auVar79) & auVar104;
      uVar19 = SUB41(fVar13,0);
      uVar21 = (undefined1)((uint)fVar13 >> 8);
      uVar24 = (undefined1)((uint)fVar13 >> 0x10);
      uVar27 = (undefined1)((uint)fVar13 >> 0x18);
      auVar101._0_12_ = auVar100._0_12_;
      auVar101._12_4_ = fVar15;
      auVar107 = auVar107 ^ (auVar107 ^ auVar70) & auVar106;
      auVar61._0_8_ = CONCAT44(-(uint)(auVar107._4_4_ <= fVar13),-(uint)(auVar107._0_4_ <= fVar13));
      auVar61._8_4_ = -(uint)(auVar107._8_4_ <= fVar13);
      auVar61._12_4_ = -(uint)(auVar107._12_4_ <= fVar13);
      auVar71._8_8_ = auVar61._8_8_;
      auVar71._0_8_ = auVar61._0_8_;
      auVar105 = auVar105 ^ (auVar105 ^ auVar83) & auVar61;
      auVar88[4] = uVar19;
      auVar88._0_4_ = fVar13;
      auVar88[5] = uVar21;
      auVar88[6] = uVar24;
      auVar88[7] = uVar27;
      auVar88[8] = uVar19;
      auVar88[9] = uVar21;
      auVar88[10] = uVar24;
      auVar88[0xb] = uVar27;
      auVar88[0xc] = uVar19;
      auVar88[0xd] = uVar21;
      auVar88[0xe] = uVar24;
      auVar88[0xf] = uVar27;
      auVar107 = auVar107 ^ (auVar107 ^ auVar88) & auVar71;
      auVar14._0_4_ = -(uint)(auVar107._0_4_ <= fVar15);
      auVar14._4_4_ = -(uint)(auVar107._4_4_ <= fVar15);
      auVar14._8_4_ = -(uint)(auVar107._8_4_ <= fVar15);
      auVar14._12_4_ = -(uint)(auVar107._12_4_ <= fVar15);
      auVar105 = auVar105 ^ (auVar105 ^ auVar101) & auVar14;
      fVar86 = auVar105._0_4_;
      fVar12 = fVar86 * fVar86;
      fVar13 = auVar105._4_4_;
      fVar64 = fVar13 * fVar13;
      uVar19 = (undefined1)((uint)fVar64 >> 8);
      uVar21 = (undefined1)((uint)fVar64 >> 0x10);
      uVar24 = (undefined1)((uint)fVar64 >> 0x18);
      fVar15 = auVar105._8_4_;
      fVar74 = fVar15 * fVar15;
      uVar27 = (undefined1)((uint)fVar74 >> 8);
      uVar42 = (undefined1)((uint)fVar74 >> 0x10);
      uVar45 = (undefined1)((uint)fVar74 >> 0x18);
      fVar16 = auVar105._12_4_;
      fVar17 = fVar16 * fVar16;
      uVar50 = (undefined1)((uint)fVar17 >> 8);
      uVar53 = (undefined1)((uint)fVar17 >> 0x10);
      uVar56 = (undefined1)((uint)fVar17 >> 0x18);
      auVar5[4] = SUB41(fVar64,0);
      auVar5._0_4_ = fVar12;
      auVar5[5] = uVar19;
      auVar5[6] = uVar21;
      auVar5[7] = uVar24;
      auVar5[8] = SUB41(fVar74,0);
      auVar5[9] = uVar27;
      auVar5[10] = uVar42;
      auVar5[0xb] = uVar45;
      auVar5[0xc] = SUB41(fVar17,0);
      auVar5[0xd] = uVar50;
      auVar5[0xe] = uVar53;
      auVar5[0xf] = uVar56;
      auVar6[4] = SUB41(fVar64,0);
      auVar6._0_4_ = fVar12;
      auVar6[5] = uVar19;
      auVar6[6] = uVar21;
      auVar6[7] = uVar24;
      auVar6[8] = SUB41(fVar74,0);
      auVar6[9] = uVar27;
      auVar6[10] = uVar42;
      auVar6[0xb] = uVar45;
      auVar6[0xc] = SUB41(fVar17,0);
      auVar6[0xd] = uVar50;
      auVar6[0xe] = uVar53;
      auVar6[0xf] = uVar56;
      auVar79 = NEON_ext(auVar5,auVar6,8,1);
      fVar12 = auVar79._0_4_ + fVar12;
      fVar64 = auVar79._4_4_ + fVar64;
      fVar74 = fVar12 + fVar64;
      fVar12 = fVar12 + fVar64;
      uVar19 = SUB41(fVar12,0);
      uVar21 = (undefined1)((uint)fVar12 >> 8);
      uVar24 = (undefined1)((uint)fVar12 >> 0x10);
      uVar27 = (undefined1)((uint)fVar12 >> 0x18);
      auVar7[4] = uVar19;
      auVar7._0_4_ = fVar74;
      auVar7[5] = uVar21;
      auVar7[6] = uVar24;
      auVar7[7] = uVar27;
      auVar7[8] = SUB41(fVar74,0);
      auVar7[9] = (char)((uint)fVar74 >> 8);
      auVar7[10] = (char)((uint)fVar74 >> 0x10);
      auVar7[0xb] = (char)((uint)fVar74 >> 0x18);
      auVar7[0xc] = uVar19;
      auVar7[0xd] = uVar21;
      auVar7[0xe] = uVar24;
      auVar7[0xf] = uVar27;
      auVar79 = NEON_frsqrte(auVar7,4);
      auVar72._0_4_ = auVar79._0_4_ * fVar74;
      auVar72._4_4_ = auVar79._4_4_ * fVar12;
      auVar72._8_4_ = auVar79._8_4_ * fVar74;
      uVar4 = (undefined2)(CONCAT15(uVar21,CONCAT14(uVar19,fVar74)) >> 0x20);
      auVar72._12_4_ = auVar79._12_4_ * (float)CONCAT13(uVar27,CONCAT12(uVar24,uVar4));
      auVar88 = NEON_frsqrts(auVar79,auVar72,4);
      auVar62._0_4_ = auVar79._0_4_ * auVar88._0_4_;
      auVar62._4_4_ = auVar79._4_4_ * auVar88._4_4_;
      auVar62._8_4_ = auVar79._8_4_ * auVar88._8_4_;
      auVar62._12_4_ = auVar79._12_4_ * auVar88._12_4_;
      auVar73._0_4_ = fVar74 * auVar62._0_4_;
      auVar73._4_4_ = fVar12 * auVar62._4_4_;
      auVar73._8_4_ = fVar74 * auVar62._8_4_;
      auVar73._12_4_ = (float)CONCAT13(uVar27,CONCAT12(uVar24,uVar4)) * auVar62._12_4_;
      iVar10 = -(uint)(fVar74 == 0.0);
      iVar75 = -(uint)(fVar12 == 0.0);
      iVar76 = -(uint)(fVar74 == 0.0);
      iVar77 = -(uint)((float)CONCAT13(uVar27,CONCAT12(uVar24,uVar4)) == 0.0);
      auVar79 = NEON_frsqrts(auVar62,auVar73,4);
      fVar86 = auVar62._0_4_ * auVar79._0_4_ * fVar86;
      fVar13 = auVar62._4_4_ * auVar79._4_4_ * fVar13;
      fVar15 = auVar62._8_4_ * auVar79._8_4_ * fVar15;
      fVar16 = auVar62._12_4_ * auVar79._12_4_ * fVar16;
      bVar23 = SUB41(fVar86,0) & ~(byte)iVar10;
      bVar26 = (byte)((uint)fVar86 >> 8) & ~(byte)((uint)iVar10 >> 8);
      bVar63 = (byte)((uint)fVar86 >> 0x10) & ~(byte)((uint)iVar10 >> 0x10);
      bVar28 = (byte)((uint)fVar86 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18);
      bVar30 = SUB41(fVar13,0) & ~(byte)iVar75;
      bVar32 = (byte)((uint)fVar13 >> 8) & ~(byte)((uint)iVar75 >> 8);
      bVar34 = (byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar75 >> 0x10);
      bVar36 = (byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar75 >> 0x18);
      bVar38 = SUB41(fVar15,0) & ~(byte)iVar76;
      bVar40 = (byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar76 >> 8);
      bVar43 = (byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar76 >> 0x10);
      bVar46 = (byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar76 >> 0x18);
      bVar48 = SUB41(fVar16,0) & ~(byte)iVar77;
      bVar51 = (byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar77 >> 8);
      bVar54 = (byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar77 >> 0x10);
      bVar57 = (byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar77 >> 0x18);
      lVar11 = *(long *)(param_5 + 0x3d0);
    }
  }
  if (lVar11 == 0) {
    local_30 = (long *)0x0;
  }
  else {
    FUN_01a111e4(&local_30);
    if (local_30 != (long *)0x0) {
      FUN_02be88ac(local_48,local_30,0);
      FUN_00ab5ae0(&local_38,local_48);
      if (local_48[0] != (undefined8 *)0x0) {
        piVar1 = (int *)(local_48[0] + 1);
        do {
          iVar10 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar10 + -1 == 0) {
          local_48[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_18 = *local_48[0];
          FUN_02a44274(lVar11 + 0xd8,&local_18);
        }
      }
      if (local_38 != (long *)0x0) {
        *(undefined1 *)(local_38 + 0x10) = 1;
        local_38[0x13] = param_4._8_8_;
        local_38[0x12] = param_4._0_8_;
        lVar11 = local_38[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        local_38[0x15] =
             CONCAT17(bVar57,CONCAT16(bVar54,CONCAT15(bVar51,CONCAT14(bVar48,CONCAT13(bVar46,
                                                  CONCAT12(bVar43,CONCAT11(bVar40,bVar38)))))));
        local_38[0x14] =
             CONCAT17(bVar36,CONCAT16(bVar34,CONCAT15(bVar32,CONCAT14(bVar30,CONCAT13(bVar28,
                                                  CONCAT12(bVar63,CONCAT11(bVar26,bVar23)))))));
        do {
          iVar10 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_38 + 0x20))();
        }
      }
      if (local_30 != (long *)0x0) {
        lVar11 = local_30[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar10 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_30 + 0x20))();
        }
      }
    }
  }
  if (local_28 != (long *)0x0) {
    lVar11 = local_28[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


