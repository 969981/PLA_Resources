/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ea6800; name: FUN_01ea6800
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ea6800(float param_1,undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5,undefined1 (*param_6) [16],
                 undefined1 (*param_7) [16],uint param_8)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
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
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 uVar28;
  undefined8 uVar29;
  long lVar30;
  float fVar31;
  byte bVar42;
  byte bVar43;
  undefined1 auVar34 [12];
  float fVar45;
  undefined1 auVar35 [16];
  float fVar32;
  int iVar33;
  undefined1 auVar36 [16];
  int iVar46;
  float fVar47;
  int iVar48;
  float fVar49;
  int iVar50;
  float fVar51;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  byte bVar44;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar52;
  float fVar61;
  float fVar62;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar63;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined8 uVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined8 uVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar88;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [12];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar95 [12];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  int iVar105;
  undefined1 auVar106 [12];
  int iVar111;
  undefined1 auVar107 [16];
  int iVar112;
  int iVar113;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  float fVar114;
  undefined8 uVar115;
  float fVar121;
  undefined1 auVar117 [16];
  undefined8 uVar116;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  float fVar122;
  undefined8 uVar123;
  undefined8 uVar124;
  undefined8 uVar125;
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined8 uVar126;
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined8 uVar133;
  undefined1 auVar136 [16];
  undefined8 uVar134;
  undefined8 uVar135;
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  float fVar140;
  undefined8 uVar141;
  float fVar143;
  float fVar144;
  undefined1 auVar142 [16];
  undefined8 uVar145;
  undefined1 auVar146 [16];
  undefined8 uVar147;
  float fVar148;
  float fVar149;
  float fVar150;
  float fVar151;
  float fVar152;
  undefined8 uVar153;
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  float fVar156;
  float fVar157;
  float fVar158;
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined8 uVar161;
  undefined1 auVar162 [16];
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  long *local_80;
  undefined8 uStack_78;
  
  FUN_00956dac(&local_80,param_5 + 0x1a8);
  (**(code **)(*local_80 + 0x40))();
  if (local_80 != (long *)0x0) {
    lVar30 = local_80[0xb];
    piVar1 = (int *)(lVar30 + 0xc);
    do {
      iVar33 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar33 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar33 + -1 == 0) {
      *(undefined8 *)(lVar30 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
    }
  }
  FUN_00956dac(&local_80,param_5 + 0x1a8);
  (**(code **)(*local_80 + 0x40))();
  auVar66 = *param_6;
  auVar54._0_4_ = auVar66._0_4_ - param_4._0_4_;
  auVar54._4_4_ = auVar66._4_4_ - param_4._4_4_;
  auVar54._8_4_ = auVar66._8_4_ - param_4._8_4_;
  auVar54._12_4_ = auVar66._12_4_ - param_4._12_4_;
  if (local_80 != (long *)0x0) {
    lVar30 = local_80[0xb];
    piVar1 = (int *)(lVar30 + 0xc);
    do {
      iVar33 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar33 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar33 + -1 == 0) {
      *(undefined8 *)(lVar30 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
    }
  }
  auVar66 = *param_7;
  iVar33 = -(uint)((param_8 & 1) != 0);
  fVar122 = 1.0;
  auVar53._0_4_ = auVar66._0_4_;
  auVar53._4_4_ = 0;
  auVar53._8_8_ = auVar66._8_8_;
  auVar65._4_4_ = iVar33;
  auVar65._0_4_ = iVar33;
  auVar65._8_4_ = iVar33;
  auVar65._12_4_ = iVar33;
  auVar66 = auVar66 ^ (auVar66 ^ auVar53) & auVar65;
  fVar52 = auVar54._0_4_;
  auVar35._0_4_ = fVar52 * fVar52;
  fVar61 = auVar54._4_4_;
  auVar35._4_4_ = fVar61 * fVar61;
  fVar62 = auVar54._8_4_;
  auVar35._8_4_ = fVar62 * fVar62;
  fVar63 = auVar54._12_4_;
  auVar35._12_4_ = fVar63 * fVar63;
  auVar54 = NEON_ext(auVar35,auVar35,8,1);
  fVar32 = auVar54._0_4_ + auVar35._0_4_;
  fVar45 = auVar54._4_4_ + auVar35._4_4_;
  fVar31 = fVar32 + fVar45;
  fVar32 = fVar32 + fVar45;
  auVar36._8_8_ = CONCAT44(fVar32,fVar31);
  auVar36._0_8_ = CONCAT44(fVar32,fVar31);
  auVar54 = NEON_frsqrte(auVar36,4);
  auVar74._0_4_ = auVar54._0_4_ * fVar31;
  auVar74._4_4_ = auVar54._4_4_ * fVar32;
  auVar74._8_4_ = auVar54._8_4_ * fVar31;
  auVar74._12_4_ = auVar54._12_4_ * fVar32;
  auVar75 = NEON_frsqrts(auVar54,auVar74,4);
  auVar55._0_4_ = auVar54._0_4_ * auVar75._0_4_;
  auVar55._4_4_ = auVar54._4_4_ * auVar75._4_4_;
  auVar55._8_4_ = auVar54._8_4_ * auVar75._8_4_;
  auVar55._12_4_ = auVar54._12_4_ * auVar75._12_4_;
  auVar76._0_4_ = fVar31 * auVar55._0_4_;
  auVar76._4_4_ = fVar32 * auVar55._4_4_;
  auVar76._8_4_ = fVar31 * auVar55._8_4_;
  auVar76._12_4_ = fVar32 * auVar55._12_4_;
  iVar33 = -(uint)(fVar31 == 0.0);
  iVar46 = -(uint)(fVar32 == 0.0);
  iVar48 = -(uint)(fVar31 == 0.0);
  iVar50 = -(uint)(fVar32 == 0.0);
  auVar54 = NEON_frsqrts(auVar55,auVar76,4);
  fVar45 = auVar66._0_4_;
  auVar77._0_4_ = fVar45 * fVar45;
  fVar47 = auVar66._4_4_;
  auVar77._4_4_ = fVar47 * fVar47;
  fVar49 = auVar66._8_4_;
  auVar77._8_4_ = fVar49 * fVar49;
  fVar51 = auVar66._12_4_;
  auVar77._12_4_ = fVar51 * fVar51;
  fVar52 = fVar52 * auVar55._0_4_ * auVar54._0_4_;
  fVar61 = fVar61 * auVar55._4_4_ * auVar54._4_4_;
  fVar62 = fVar62 * auVar55._8_4_ * auVar54._8_4_;
  fVar63 = fVar63 * auVar55._12_4_ * auVar54._12_4_;
  auVar66 = NEON_ext(auVar77,auVar77,8,1);
  fVar32 = auVar66._0_4_ + auVar77._0_4_;
  fVar88 = auVar66._4_4_ + auVar77._4_4_;
  fVar31 = fVar32 + fVar88;
  fVar32 = fVar32 + fVar88;
  auVar78._8_8_ = CONCAT44(fVar32,fVar31);
  auVar78._0_8_ = CONCAT44(fVar32,fVar31);
  auVar66 = NEON_frsqrte(auVar78,4);
  auVar96._0_4_ = auVar66._0_4_ * fVar31;
  auVar96._4_4_ = auVar66._4_4_ * fVar32;
  auVar96._8_4_ = auVar66._8_4_ * fVar31;
  auVar96._12_4_ = auVar66._12_4_ * fVar32;
  auVar54 = NEON_frsqrts(auVar66,auVar96,4);
  auVar89._0_4_ = auVar66._0_4_ * auVar54._0_4_;
  auVar89._4_4_ = auVar66._4_4_ * auVar54._4_4_;
  auVar89._8_4_ = auVar66._8_4_ * auVar54._8_4_;
  auVar89._12_4_ = auVar66._12_4_ * auVar54._12_4_;
  auVar97._0_4_ = fVar31 * auVar89._0_4_;
  auVar97._4_4_ = fVar32 * auVar89._4_4_;
  auVar97._8_4_ = fVar31 * auVar89._8_4_;
  auVar97._12_4_ = fVar32 * auVar89._12_4_;
  auVar66 = NEON_frsqrts(auVar89,auVar97,4);
  fVar88 = (float)CONCAT13((byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18),
                           CONCAT12((byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10),
                                    CONCAT11((byte)((uint)fVar52 >> 8) & ~(byte)((uint)iVar33 >> 8),
                                             SUB41(fVar52,0) & ~(byte)iVar33)));
  auVar94._0_8_ =
       CONCAT17((byte)((uint)fVar61 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18),
                CONCAT16((byte)((uint)fVar61 >> 0x10) & ~(byte)((uint)iVar46 >> 0x10),
                         CONCAT15((byte)((uint)fVar61 >> 8) & ~(byte)((uint)iVar46 >> 8),
                                  CONCAT14(SUB41(fVar61,0) & ~(byte)iVar46,fVar88))));
  auVar94[8] = SUB41(fVar62,0) & ~(byte)iVar48;
  auVar94[9] = (byte)((uint)fVar62 >> 8) & ~(byte)((uint)iVar48 >> 8);
  auVar94[10] = (byte)((uint)fVar62 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10);
  auVar94[0xb] = (byte)((uint)fVar62 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18);
  auVar98[0xc] = SUB41(fVar63,0) & ~(byte)iVar50;
  auVar98._0_12_ = auVar94;
  auVar98[0xd] = (byte)((uint)fVar63 >> 8) & ~(byte)((uint)iVar50 >> 8);
  auVar98[0xe] = (byte)((uint)fVar63 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10);
  auVar98[0xf] = (byte)((uint)fVar63 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18);
  iVar33 = -(uint)(fVar31 == 0.0);
  iVar46 = -(uint)(fVar32 == 0.0);
  iVar48 = -(uint)(fVar31 == 0.0);
  iVar50 = -(uint)(fVar32 == 0.0);
  fVar45 = fVar45 * auVar89._0_4_ * auVar66._0_4_;
  fVar47 = fVar47 * auVar89._4_4_ * auVar66._4_4_;
  fVar49 = fVar49 * auVar89._8_4_ * auVar66._8_4_;
  fVar51 = fVar51 * auVar89._12_4_ * auVar66._12_4_;
  fVar52 = (float)CONCAT13((byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18),
                           CONCAT12((byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10),
                                    CONCAT11((byte)((uint)fVar45 >> 8) & ~(byte)((uint)iVar33 >> 8),
                                             SUB41(fVar45,0) & ~(byte)iVar33)));
  auVar34._0_8_ =
       CONCAT17((byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18),
                CONCAT16((byte)((uint)fVar47 >> 0x10) & ~(byte)((uint)iVar46 >> 0x10),
                         CONCAT15((byte)((uint)fVar47 >> 8) & ~(byte)((uint)iVar46 >> 8),
                                  CONCAT14(SUB41(fVar47,0) & ~(byte)iVar46,fVar52))));
  auVar34[8] = SUB41(fVar49,0) & ~(byte)iVar48;
  auVar34[9] = (byte)((uint)fVar49 >> 8) & ~(byte)((uint)iVar48 >> 8);
  auVar34[10] = (byte)((uint)fVar49 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10);
  auVar34[0xb] = (byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18);
  auVar37[0xc] = SUB41(fVar51,0) & ~(byte)iVar50;
  auVar37._0_12_ = auVar34;
  auVar37[0xd] = (byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar50 >> 8);
  auVar37[0xe] = (byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10);
  auVar37[0xf] = (byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18);
  fStack_98 = auVar94._8_4_;
  fStack_94 = auVar98._12_4_;
  fStack_9c = (float)((ulong)auVar94._0_8_ >> 0x20);
  auVar38._0_4_ = fVar88 * fVar52;
  fVar51 = (float)((ulong)auVar34._0_8_ >> 0x20);
  auVar38._4_4_ = fStack_9c * fVar51;
  fVar61 = auVar34._8_4_;
  fVar62 = auVar37._12_4_;
  auVar38._8_4_ = fStack_98 * fVar61;
  auVar38._12_4_ = fStack_94 * fVar62;
  NEON_ext(auVar38,auVar38,8,1);
  fVar49 = (float)FUN_01009610();
  uVar29 = DAT_0388a880;
  uVar28 = DAT_0388a680;
  auVar56._0_4_ = fVar88 * fVar88;
  auVar56._4_4_ = fStack_9c * fStack_9c;
  auVar56._8_4_ = fStack_98 * fStack_98;
  auVar56._12_4_ = fStack_94 * fStack_94;
  auVar66 = NEON_ext(auVar56,auVar56,8,1);
  auVar67._0_4_ = fVar52 * fVar52;
  auVar67._4_4_ = fVar51 * fVar51;
  auVar67._8_4_ = fVar61 * fVar61;
  auVar67._12_4_ = fVar62 * fVar62;
  auVar54 = NEON_ext(auVar67,auVar67,8,1);
  fVar45 = auVar66._0_4_ + auVar56._0_4_;
  fVar32 = auVar66._4_4_ + auVar56._4_4_;
  fVar47 = auVar54._0_4_ + auVar67._0_4_;
  fVar63 = auVar54._4_4_ + auVar67._4_4_;
  fVar31 = fVar45 + fVar32;
  fVar45 = fVar45 + fVar32;
  fVar32 = fVar47 + fVar63;
  fVar47 = fVar47 + fVar63;
  auVar99._8_8_ = CONCAT44(fVar45,fVar31);
  auVar99._0_8_ = CONCAT44(fVar45,fVar31);
  auVar107._8_8_ = CONCAT44(fVar47,fVar32);
  auVar107._0_8_ = CONCAT44(fVar47,fVar32);
  auVar66 = NEON_frsqrte(auVar99,4);
  auVar54 = NEON_frsqrte(auVar107,4);
  auVar79._0_4_ = auVar66._0_4_ * fVar31;
  auVar79._4_4_ = auVar66._4_4_ * fVar45;
  auVar79._8_4_ = auVar66._8_4_ * fVar31;
  auVar79._12_4_ = auVar66._12_4_ * fVar45;
  auVar117._8_8_ = DAT_0388a148;
  auVar117._0_8_ = DAT_0388a140;
  auVar90._0_4_ = auVar54._0_4_ * fVar32;
  auVar90._4_4_ = auVar54._4_4_ * fVar47;
  auVar90._8_4_ = auVar54._8_4_ * fVar32;
  auVar90._12_4_ = auVar54._12_4_ * fVar47;
  auVar127 = NEON_frsqrts(auVar66,auVar79,4);
  auVar75 = NEON_frsqrts(auVar54,auVar90,4);
  auVar128._0_4_ = auVar66._0_4_ * auVar127._0_4_;
  auVar128._4_4_ = auVar66._4_4_ * auVar127._4_4_;
  auVar128._8_4_ = auVar66._8_4_ * auVar127._8_4_;
  auVar128._12_4_ = auVar66._12_4_ * auVar127._12_4_;
  auVar68._0_4_ = auVar54._0_4_ * auVar75._0_4_;
  auVar68._4_4_ = auVar54._4_4_ * auVar75._4_4_;
  auVar68._8_4_ = auVar54._8_4_ * auVar75._8_4_;
  auVar68._12_4_ = auVar54._12_4_ * auVar75._12_4_;
  auVar57._0_4_ = fVar31 * auVar128._0_4_;
  auVar57._4_4_ = fVar45 * auVar128._4_4_;
  auVar57._8_4_ = fVar31 * auVar128._8_4_;
  auVar57._12_4_ = fVar45 * auVar128._12_4_;
  iVar33 = -(uint)(fVar31 == 0.0);
  iVar46 = -(uint)(fVar45 == 0.0);
  iVar48 = -(uint)(fVar31 == 0.0);
  iVar50 = -(uint)(fVar45 == 0.0);
  auVar136._0_4_ = fVar32 * auVar68._0_4_;
  auVar136._4_4_ = fVar47 * auVar68._4_4_;
  auVar136._8_4_ = fVar32 * auVar68._8_4_;
  auVar136._12_4_ = fVar47 * auVar68._12_4_;
  uVar126 = a64_TBL(ZEXT816(0),auVar117,DAT_0388a880);
  fVar45 = (float)((ulong)uVar126 >> 0x20);
  auVar54 = NEON_frsqrts(auVar128,auVar57,4);
  uVar147 = a64_TBL(ZEXT816(0),auVar117,DAT_0388a680);
  auVar66 = NEON_frsqrts(auVar68,auVar136,4);
  iVar105 = -(uint)(fVar32 == 0.0);
  iVar111 = -(uint)(fVar47 == 0.0);
  iVar112 = -(uint)(fVar32 == 0.0);
  iVar113 = -(uint)(fVar47 == 0.0);
  fVar88 = fVar88 * auVar128._0_4_ * auVar54._0_4_;
  fStack_9c = fStack_9c * auVar128._4_4_ * auVar54._4_4_;
  fStack_98 = fStack_98 * auVar128._8_4_ * auVar54._8_4_;
  fStack_94 = fStack_94 * auVar128._12_4_ * auVar54._12_4_;
  auVar95._0_8_ =
       CONCAT17((byte)((uint)fStack_9c >> 0x18) & ~(byte)((uint)iVar46 >> 0x18),
                CONCAT16((byte)((uint)fStack_9c >> 0x10) & ~(byte)((uint)iVar46 >> 0x10),
                         CONCAT15((byte)((uint)fStack_9c >> 8) & ~(byte)((uint)iVar46 >> 8),
                                  CONCAT14(SUB41(fStack_9c,0) & ~(byte)iVar46,
                                           CONCAT13((byte)((uint)fVar88 >> 0x18) &
                                                    ~(byte)((uint)iVar33 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar88 >> 0x10) &
                                                             ~(byte)((uint)iVar33 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar88 >> 8) &
                                                                      ~(byte)((uint)iVar33 >> 8),
                                                                      SUB41(fVar88,0) &
                                                                      ~(byte)iVar33)))))));
  auVar95[8] = SUB41(fStack_98,0) & ~(byte)iVar48;
  auVar95[9] = (byte)((uint)fStack_98 >> 8) & ~(byte)((uint)iVar48 >> 8);
  auVar95[10] = (byte)((uint)fStack_98 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10);
  auVar95[0xb] = (byte)((uint)fStack_98 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18);
  auVar100[0xc] = SUB41(fStack_94,0) & ~(byte)iVar50;
  auVar100._0_12_ = auVar95;
  auVar100[0xd] = (byte)((uint)fStack_94 >> 8) & ~(byte)((uint)iVar50 >> 8);
  auVar100[0xe] = (byte)((uint)fStack_94 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10);
  auVar100[0xf] = (byte)((uint)fStack_94 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18);
  fVar52 = fVar52 * auVar68._0_4_ * auVar66._0_4_;
  fVar51 = fVar51 * auVar68._4_4_ * auVar66._4_4_;
  fVar61 = fVar61 * auVar68._8_4_ * auVar66._8_4_;
  fVar62 = fVar62 * auVar68._12_4_ * auVar66._12_4_;
  uVar141 = a64_TBL(ZEXT816(0),auVar117,DAT_0388a6f0);
  uVar115 = a64_TBL(ZEXT816(0),auVar117,DAT_0388a6d8);
  auVar106._0_8_ =
       CONCAT17((byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar111 >> 0x18),
                CONCAT16((byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar111 >> 0x10),
                         CONCAT15((byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar111 >> 8),
                                  CONCAT14(SUB41(fVar51,0) & ~(byte)iVar111,
                                           CONCAT13((byte)((uint)fVar52 >> 0x18) &
                                                    ~(byte)((uint)iVar105 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar52 >> 0x10) &
                                                             ~(byte)((uint)iVar105 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar52 >> 8) &
                                                                      ~(byte)((uint)iVar105 >> 8),
                                                                      SUB41(fVar52,0) &
                                                                      ~(byte)iVar105)))))));
  auVar106[8] = SUB41(fVar61,0) & ~(byte)iVar112;
  auVar106[9] = (byte)((uint)fVar61 >> 8) & ~(byte)((uint)iVar112 >> 8);
  auVar106[10] = (byte)((uint)fVar61 >> 0x10) & ~(byte)((uint)iVar112 >> 0x10);
  auVar106[0xb] = (byte)((uint)fVar61 >> 0x18) & ~(byte)((uint)iVar112 >> 0x18);
  auVar108[0xc] = SUB41(fVar62,0) & ~(byte)iVar113;
  auVar108._0_12_ = auVar106;
  auVar108[0xd] = (byte)((uint)fVar62 >> 8) & ~(byte)((uint)iVar113 >> 8);
  auVar108[0xe] = (byte)((uint)fVar62 >> 0x10) & ~(byte)((uint)iVar113 >> 0x10);
  auVar108[0xf] = (byte)((uint)fVar62 >> 0x18) & ~(byte)((uint)iVar113 >> 0x18);
  uVar125 = a64_TBL(ZEXT816(0),auVar100,DAT_0388a680);
  uVar133 = a64_TBL(ZEXT816(0),auVar100,DAT_0388a6d8);
  uVar116 = a64_TBL(ZEXT816(0),auVar100,DAT_0388a880);
  uVar145 = a64_TBL(ZEXT816(0),auVar108,DAT_0388a680);
  uVar135 = a64_TBL(ZEXT816(0),auVar108,DAT_0388a6d8);
  uVar64 = a64_TBL(ZEXT816(0),auVar108,DAT_0388a880);
  fVar62 = (float)((ulong)uVar64 >> 0x20);
  fVar88 = (float)((ulong)uVar116 >> 0x20);
  fVar31 = (float)((ulong)uVar125 >> 0x20);
  fVar52 = (float)((ulong)uVar141 >> 0x20);
  uVar73 = a64_TBL(ZEXT816(0),auVar100,DAT_0388a6f0);
  uVar153 = a64_TBL(ZEXT816(0),auVar108,DAT_0388a6f0);
  fVar51 = (float)((ulong)uVar145 >> 0x20);
  fVar32 = (float)((ulong)uVar147 >> 0x20);
  fVar61 = (float)((ulong)uVar115 >> 0x20);
  fVar63 = (float)uVar126 * (float)uVar125 - (float)uVar147 * (float)uVar116;
  fVar156 = fVar45 * fVar31 - fVar32 * fVar88;
  fVar157 = (float)uVar141 * (float)uVar133 - (float)uVar115 * (float)uVar73;
  fVar158 = fVar52 * (float)((ulong)uVar133 >> 0x20) - fVar61 * (float)((ulong)uVar73 >> 0x20);
  fVar140 = (float)uVar126 * (float)uVar145 - (float)uVar147 * (float)uVar64;
  fVar32 = fVar45 * fVar51 - fVar32 * fVar62;
  fVar47 = (float)uVar141 * (float)uVar135 - (float)uVar115 * (float)uVar153;
  fVar52 = fVar52 * (float)((ulong)uVar135 >> 0x20) - fVar61 * (float)((ulong)uVar153 >> 0x20);
  auVar19._4_4_ = fVar156;
  auVar19._0_4_ = fVar63;
  auVar19._8_4_ = fVar157;
  auVar19._12_4_ = fVar158;
  uVar126 = a64_TBL(ZEXT816(0),auVar19,DAT_0388a6f0);
  auVar20._4_4_ = fVar156;
  auVar20._0_4_ = fVar63;
  auVar20._8_4_ = fVar157;
  auVar20._12_4_ = fVar158;
  uVar147 = a64_TBL(ZEXT816(0),auVar20,DAT_0388a6d8);
  auVar21._4_4_ = fVar156;
  auVar21._0_4_ = fVar63;
  auVar21._8_4_ = fVar157;
  auVar21._12_4_ = fVar158;
  uVar161 = a64_TBL(ZEXT816(0),auVar21,DAT_0388a680);
  auVar66._4_4_ = fVar32;
  auVar66._0_4_ = fVar140;
  auVar66._8_4_ = fVar47;
  auVar66._12_4_ = fVar52;
  uVar124 = a64_TBL(ZEXT816(0),auVar66,DAT_0388a680);
  auVar75._4_4_ = fVar32;
  auVar75._0_4_ = fVar140;
  auVar75._8_4_ = fVar47;
  auVar75._12_4_ = fVar52;
  uVar141 = a64_TBL(ZEXT816(0),auVar75,DAT_0388a6d8);
  auVar127._4_4_ = fVar32;
  auVar127._0_4_ = fVar140;
  auVar127._8_4_ = fVar47;
  auVar127._12_4_ = fVar52;
  uVar123 = a64_TBL(ZEXT816(0),auVar127,DAT_0388a880);
  auVar4._4_4_ = fVar32;
  auVar4._0_4_ = fVar140;
  auVar4._8_4_ = fVar47;
  auVar4._12_4_ = fVar52;
  uVar115 = a64_TBL(ZEXT816(0),auVar4,DAT_0388a6f0);
  auVar22._4_4_ = fVar156;
  auVar22._0_4_ = fVar63;
  auVar22._8_4_ = fVar157;
  auVar22._12_4_ = fVar158;
  uVar134 = a64_TBL(ZEXT816(0),auVar22,DAT_0388a880);
  fVar150 = (float)uVar64 * (float)uVar124 - (float)uVar145 * (float)uVar123;
  fVar151 = fVar62 * (float)((ulong)uVar124 >> 0x20) - fVar51 * (float)((ulong)uVar123 >> 0x20);
  fVar152 = (float)uVar153 * (float)uVar141 - (float)uVar135 * (float)uVar115;
  fVar114 = (float)uVar116 * (float)uVar161 - (float)uVar125 * (float)uVar134;
  fVar45 = fVar88 * (float)((ulong)uVar161 >> 0x20) - fVar31 * (float)((ulong)uVar134 >> 0x20);
  fVar121 = (float)uVar73 * (float)uVar147 - (float)uVar133 * (float)uVar126;
  fVar143 = (float)((ulong)_DAT_03889820 >> 0x20);
  fVar144 = (float)((ulong)_UNK_03889828 >> 0x20);
  fVar51 = (float)((ulong)auVar95._0_8_ >> 0x20);
  uVar135 = NEON_ext(CONCAT44(fVar32,fVar140),auVar106._0_8_,4,1);
  fVar88 = (float)((ulong)auVar106._0_8_ >> 0x20);
  fVar148 = (float)((ulong)_DAT_0388a450 >> 0x20);
  fVar149 = (float)((ulong)_UNK_0388a458 >> 0x20);
  auVar23._4_4_ = fVar156;
  auVar23._0_4_ = fVar63;
  auVar23._8_4_ = fVar157;
  auVar23._12_4_ = fVar158;
  auVar24._4_4_ = fVar156;
  auVar24._0_4_ = fVar63;
  auVar24._8_4_ = fVar157;
  auVar24._12_4_ = fVar158;
  auVar75 = NEON_ext(auVar23,auVar24,8,1);
  uVar126 = NEON_ext(CONCAT44(fVar156,fVar63),auVar95._0_8_,4,1);
  auVar5._4_4_ = fVar32;
  auVar5._0_4_ = fVar140;
  auVar5._8_4_ = fVar47;
  auVar5._12_4_ = fVar52;
  auVar6._4_4_ = fVar32;
  auVar6._0_4_ = fVar140;
  auVar6._8_4_ = fVar47;
  auVar6._12_4_ = fVar52;
  auVar54 = NEON_ext(auVar5,auVar6,8,1);
  fVar31 = auVar95._8_4_;
  fVar32 = (float)((ulong)_DAT_03889eb0 >> 0x20);
  fVar47 = (float)((ulong)_UNK_03889eb8 >> 0x20);
  fVar156 = auVar106._8_4_;
  auVar66 = NEON_fmov(0x3f800000,4);
  fVar52 = (float)_DAT_03889820 * fVar63 + (float)_DAT_0388a450 * fVar45 +
           (float)_DAT_03889eb0 * fVar31 + auVar66._0_4_;
  fVar61 = fVar143 * fVar63 + fVar148 * fVar45 + fVar32 * fVar31 + auVar66._4_4_;
  fVar62 = (float)_UNK_03889828 * fVar63 + (float)_UNK_0388a458 * fVar45 +
           (float)_UNK_03889eb8 * fVar31 + auVar66._8_4_;
  fVar63 = fVar144 * fVar63 + fVar149 * fVar45 + fVar47 * fVar31 + auVar66._12_4_;
  fVar31 = (float)_DAT_03889820 * fVar140 + (float)_DAT_0388a450 * fVar151 +
           (float)_DAT_03889eb0 * fVar156 + auVar66._0_4_;
  fVar32 = fVar143 * fVar140 + fVar148 * fVar151 + fVar32 * fVar156 + auVar66._4_4_;
  fVar45 = (float)_UNK_03889828 * fVar140 + (float)_UNK_0388a458 * fVar151 +
           (float)_UNK_03889eb8 * fVar156 + auVar66._8_4_;
  fVar47 = fVar144 * fVar140 + fVar149 * fVar151 + fVar47 * fVar156 + auVar66._12_4_;
  auVar69._0_4_ = fVar114 + (float)uVar126;
  fVar156 = (float)((ulong)uVar126 >> 0x20);
  auVar69._4_4_ = auVar75._0_4_ + fVar156;
  auVar69._8_4_ = fVar51 + fVar121;
  auVar69._12_4_ = 0;
  auVar80._0_4_ = (float)uVar126 - fVar114;
  auVar80._4_4_ = fVar156 - auVar75._0_4_;
  auVar80._8_4_ = fVar121 - fVar51;
  auVar80._12_4_ = 0;
  auVar138._0_4_ = fVar150 + (float)uVar135;
  fVar51 = (float)((ulong)uVar135 >> 0x20);
  auVar138._4_4_ = auVar54._0_4_ + fVar51;
  auVar138._8_4_ = fVar88 + fVar152;
  auVar138._12_4_ = 0;
  fVar150 = (float)uVar135 - fVar150;
  fVar51 = fVar51 - auVar54._0_4_;
  fVar152 = fVar152 - fVar88;
  uVar116 = a64_TBL(ZEXT816(0),auVar69,auVar80,DAT_0388a888);
  uVar123 = a64_TBL(ZEXT816(0),auVar69,auVar80,DAT_0388a710);
  uVar125 = a64_TBL(ZEXT816(0),auVar69,auVar80,DAT_0388a758);
  uVar126 = a64_TBL(ZEXT816(0),auVar69,auVar80,DAT_0388a880);
  uVar134 = a64_TBL(ZEXT816(0),auVar69,auVar80,DAT_0388a640);
  uVar73 = a64_TBL(ZEXT816(0),auVar69,auVar80,DAT_0388a700);
  auVar7._4_4_ = fVar51;
  auVar7._0_4_ = fVar150;
  auVar7._8_4_ = fVar152;
  auVar7._12_4_ = 0;
  uVar141 = a64_TBL(ZEXT816(0),auVar138,auVar7,DAT_0388a888);
  uVar64 = a64_TBL(ZEXT816(0),auVar69,auVar80,DAT_0388a590);
  auVar8._4_4_ = fVar51;
  auVar8._0_4_ = fVar150;
  auVar8._8_4_ = fVar152;
  auVar8._12_4_ = 0;
  uVar115 = a64_TBL(ZEXT816(0),auVar138,auVar8,DAT_0388a710);
  auVar9._4_4_ = fVar51;
  auVar9._0_4_ = fVar150;
  auVar9._8_4_ = fVar152;
  auVar9._12_4_ = 0;
  uVar147 = a64_TBL(ZEXT816(0),auVar138,auVar9,DAT_0388a758);
  auVar10._4_4_ = fVar51;
  auVar10._0_4_ = fVar150;
  auVar10._8_4_ = fVar152;
  auVar10._12_4_ = 0;
  auVar81._0_8_ = a64_TBL(ZEXT816(0),auVar138,auVar10,DAT_0388a880);
  auVar11._4_4_ = fVar51;
  auVar11._0_4_ = fVar150;
  auVar11._8_4_ = fVar152;
  auVar11._12_4_ = 0;
  uVar133 = a64_TBL(ZEXT816(0),auVar138,auVar11,DAT_0388a640);
  auVar12._4_4_ = fVar51;
  auVar12._0_4_ = fVar150;
  auVar12._8_4_ = fVar152;
  auVar12._12_4_ = 0;
  uVar135 = a64_TBL(ZEXT816(0),auVar138,auVar12,DAT_0388a700);
  auVar13._4_4_ = fVar51;
  auVar13._0_4_ = fVar150;
  auVar13._8_4_ = fVar152;
  auVar13._12_4_ = 0;
  uVar124 = a64_TBL(ZEXT816(0),auVar138,auVar13,DAT_0388a590);
  auVar154._0_4_ = -(uint)(fVar52 <= fVar61);
  auVar154._4_4_ = -(uint)(fVar52 <= fVar61);
  auVar154._8_4_ = -(uint)(fVar52 <= fVar61);
  auVar154._12_4_ = -(uint)(fVar52 <= fVar61);
  auVar159._0_4_ = -(uint)(fVar31 <= fVar32);
  auVar159._4_4_ = -(uint)(fVar31 <= fVar32);
  auVar159._8_4_ = -(uint)(fVar31 <= fVar32);
  auVar159._12_4_ = -(uint)(fVar31 <= fVar32);
  auVar162._8_8_ = uVar123;
  auVar162._0_8_ = uVar116;
  auVar137._4_4_ = fVar62;
  auVar137._0_4_ = fVar62;
  auVar137._8_4_ = fVar62;
  auVar137._12_4_ = fVar62;
  auVar70._8_8_ = uVar115;
  auVar70._0_8_ = uVar141;
  auVar25._4_4_ = fVar52;
  auVar25._0_4_ = fVar52;
  auVar25._8_4_ = fVar52;
  auVar25._12_4_ = fVar52;
  auVar26._4_4_ = fVar61;
  auVar26._0_4_ = fVar61;
  auVar26._8_4_ = fVar61;
  auVar26._12_4_ = fVar61;
  auVar91._4_4_ = fVar52;
  auVar91._0_4_ = fVar52;
  auVar91._8_4_ = fVar52;
  auVar91._12_4_ = fVar52;
  auVar91 = auVar91 ^ (auVar25 ^ auVar26) & auVar154;
  auVar14._4_4_ = fVar31;
  auVar14._0_4_ = fVar31;
  auVar14._8_4_ = fVar31;
  auVar14._12_4_ = fVar31;
  auVar27._4_4_ = fVar32;
  auVar27._0_4_ = fVar32;
  auVar27._8_4_ = fVar32;
  auVar27._12_4_ = fVar32;
  auVar129._4_4_ = fVar31;
  auVar129._0_4_ = fVar31;
  auVar129._8_4_ = fVar31;
  auVar129._12_4_ = fVar31;
  auVar129 = auVar129 ^ (auVar14 ^ auVar27) & auVar159;
  auVar118._0_4_ = (undefined4)uVar116;
  auVar118._4_4_ = fVar61;
  auVar118._8_8_ = uVar125;
  auVar155._4_12_ = auVar162._4_12_;
  auVar155._0_4_ = fVar52;
  auVar142._0_4_ = -(uint)(auVar129._0_4_ <= fVar45);
  auVar142._4_4_ = -(uint)(auVar129._4_4_ <= fVar45);
  auVar142._8_4_ = -(uint)(auVar129._8_4_ <= fVar45);
  auVar142._12_4_ = -(uint)(auVar129._12_4_ <= fVar45);
  auVar109._0_4_ = (undefined4)uVar141;
  auVar109._4_4_ = fVar32;
  auVar109._8_8_ = uVar147;
  auVar160._4_12_ = auVar70._4_12_;
  auVar160._0_4_ = fVar31;
  auVar139._0_8_ = CONCAT44(-(uint)(auVar91._4_4_ <= fVar62),-(uint)(auVar91._0_4_ <= fVar62));
  auVar139._8_4_ = -(uint)(auVar91._8_4_ <= fVar62);
  auVar139._12_4_ = -(uint)(auVar91._12_4_ <= fVar62);
  auVar146._8_8_ = auVar139._8_8_;
  auVar146._0_8_ = auVar139._0_8_;
  auVar81._12_4_ = (undefined4)((ulong)uVar133 >> 0x20);
  auVar81._8_4_ = fVar45;
  auVar155 = auVar155 ^ (auVar155 ^ auVar118) & auVar154;
  auVar91 = auVar91 ^ (auVar91 ^ auVar137) & auVar146;
  auVar16._8_4_ = fVar62;
  auVar16._0_8_ = uVar126;
  auVar16._12_4_ = (int)((ulong)uVar134 >> 0x20);
  auVar155 = auVar155 ^ (auVar155 ^ auVar16) & auVar139;
  auVar160 = auVar160 ^ (auVar160 ^ auVar109) & auVar159;
  auVar15._4_4_ = fVar45;
  auVar15._0_4_ = fVar45;
  auVar15._8_4_ = fVar45;
  auVar15._12_4_ = fVar45;
  auVar129 = auVar129 ^ (auVar129 ^ auVar15) & auVar142;
  auVar101._0_4_ = -(uint)(auVar91._0_4_ <= fVar63);
  auVar101._4_4_ = -(uint)(auVar91._4_4_ <= fVar63);
  auVar101._8_4_ = -(uint)(auVar91._8_4_ <= fVar63);
  auVar101._12_4_ = -(uint)(auVar91._12_4_ <= fVar63);
  auVar160 = auVar160 ^ (auVar160 ^ auVar81) & auVar142;
  auVar58._0_4_ = -(uint)(auVar129._0_4_ <= fVar47);
  auVar58._4_4_ = -(uint)(auVar129._4_4_ <= fVar47);
  auVar58._8_4_ = -(uint)(auVar129._8_4_ <= fVar47);
  auVar58._12_4_ = -(uint)(auVar129._12_4_ <= fVar47);
  auVar18._8_4_ = (int)uVar64;
  auVar18._0_8_ = uVar73;
  auVar18._12_4_ = fVar63;
  auVar155 = auVar155 ^ (auVar155 ^ auVar18) & auVar101;
  auVar17._8_4_ = (int)uVar124;
  auVar17._0_8_ = uVar135;
  auVar17._12_4_ = fVar47;
  auVar160 = auVar160 ^ (auVar160 ^ auVar17) & auVar58;
  fVar88 = auVar155._0_4_;
  auVar71._0_4_ = fVar88 * fVar88;
  fVar156 = auVar155._4_4_;
  auVar71._4_4_ = fVar156 * fVar156;
  fVar114 = auVar155._8_4_;
  auVar71._8_4_ = fVar114 * fVar114;
  fVar121 = auVar155._12_4_;
  auVar71._12_4_ = fVar121 * fVar121;
  auVar66 = NEON_ext(auVar71,auVar71,8,1);
  fVar52 = auVar160._0_4_;
  auVar82._0_4_ = fVar52 * fVar52;
  fVar51 = auVar160._4_4_;
  auVar82._4_4_ = fVar51 * fVar51;
  fVar61 = auVar160._8_4_;
  auVar82._8_4_ = fVar61 * fVar61;
  fVar62 = auVar160._12_4_;
  auVar82._12_4_ = fVar62 * fVar62;
  auVar54 = NEON_ext(auVar82,auVar82,8,1);
  fVar45 = auVar66._0_4_ + auVar71._0_4_;
  fVar32 = auVar66._4_4_ + auVar71._4_4_;
  fVar47 = auVar54._0_4_ + auVar82._0_4_;
  fVar63 = auVar54._4_4_ + auVar82._4_4_;
  fVar31 = fVar45 + fVar32;
  fVar45 = fVar45 + fVar32;
  fVar32 = fVar47 + fVar63;
  fVar47 = fVar47 + fVar63;
  auVar72._8_8_ = CONCAT44(fVar45,fVar31);
  auVar72._0_8_ = CONCAT44(fVar45,fVar31);
  auVar83._8_8_ = CONCAT44(fVar47,fVar32);
  auVar83._0_8_ = CONCAT44(fVar47,fVar32);
  auVar66 = NEON_frsqrte(auVar72,4);
  auVar54 = NEON_frsqrte(auVar83,4);
  auVar119._0_4_ = auVar66._0_4_ * fVar31;
  auVar119._4_4_ = auVar66._4_4_ * fVar45;
  auVar119._8_4_ = auVar66._8_4_ * fVar31;
  auVar119._12_4_ = auVar66._12_4_ * fVar45;
  auVar130._0_4_ = auVar54._0_4_ * fVar32;
  auVar130._4_4_ = auVar54._4_4_ * fVar47;
  auVar130._8_4_ = auVar54._8_4_ * fVar32;
  auVar130._12_4_ = auVar54._12_4_ * fVar47;
  auVar75 = NEON_frsqrts(auVar66,auVar119,4);
  auVar127 = NEON_frsqrts(auVar54,auVar130,4);
  auVar92._0_4_ = auVar66._0_4_ * auVar75._0_4_;
  auVar92._4_4_ = auVar66._4_4_ * auVar75._4_4_;
  auVar92._8_4_ = auVar66._8_4_ * auVar75._8_4_;
  auVar92._12_4_ = auVar66._12_4_ * auVar75._12_4_;
  auVar110._0_4_ = auVar54._0_4_ * auVar127._0_4_;
  auVar110._4_4_ = auVar54._4_4_ * auVar127._4_4_;
  auVar110._8_4_ = auVar54._8_4_ * auVar127._8_4_;
  auVar110._12_4_ = auVar54._12_4_ * auVar127._12_4_;
  auVar120._0_4_ = fVar31 * auVar92._0_4_;
  auVar120._4_4_ = fVar45 * auVar92._4_4_;
  auVar120._8_4_ = fVar31 * auVar92._8_4_;
  auVar120._12_4_ = fVar45 * auVar92._12_4_;
  iVar33 = -(uint)(fVar31 == 0.0);
  iVar46 = -(uint)(fVar45 == 0.0);
  iVar48 = -(uint)(fVar31 == 0.0);
  iVar50 = -(uint)(fVar45 == 0.0);
  auVar131._0_4_ = fVar32 * auVar110._0_4_;
  auVar131._4_4_ = fVar47 * auVar110._4_4_;
  auVar131._8_4_ = fVar32 * auVar110._8_4_;
  auVar131._12_4_ = fVar47 * auVar110._12_4_;
  auVar66 = NEON_frsqrts(auVar92,auVar120,4);
  auVar54 = NEON_frsqrts(auVar110,auVar131,4);
  iVar105 = -(uint)(fVar32 == 0.0);
  iVar111 = -(uint)(fVar47 == 0.0);
  iVar112 = -(uint)(fVar32 == 0.0);
  iVar113 = -(uint)(fVar47 == 0.0);
  fVar88 = auVar92._0_4_ * auVar66._0_4_ * fVar88;
  fVar156 = auVar92._4_4_ * auVar66._4_4_ * fVar156;
  fVar114 = auVar92._8_4_ * auVar66._8_4_ * fVar114;
  fVar121 = auVar92._12_4_ * auVar66._12_4_ * fVar121;
  fVar52 = auVar110._0_4_ * auVar54._0_4_ * fVar52;
  fVar51 = auVar110._4_4_ * auVar54._4_4_ * fVar51;
  fVar61 = auVar110._8_4_ * auVar54._8_4_ * fVar61;
  fVar62 = auVar110._12_4_ * auVar54._12_4_ * fVar62;
  auVar39._0_8_ =
       (long *)CONCAT17((byte)((uint)fVar156 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18),
                        CONCAT16((byte)((uint)fVar156 >> 0x10) & ~(byte)((uint)iVar46 >> 0x10),
                                 CONCAT15((byte)((uint)fVar156 >> 8) & ~(byte)((uint)iVar46 >> 8),
                                          CONCAT14(SUB41(fVar156,0) & ~(byte)iVar46,
                                                   CONCAT13((byte)((uint)fVar88 >> 0x18) &
                                                            ~(byte)((uint)iVar33 >> 0x18),
                                                            CONCAT12((byte)((uint)fVar88 >> 0x10) &
                                                                     ~(byte)((uint)iVar33 >> 0x10),
                                                                     CONCAT11((byte)((uint)fVar88 >>
                                                                                    8) &
                                                                              ~(byte)((uint)iVar33
                                                                                     >> 8),
                                                                              SUB41(fVar88,0) &
                                                                              ~(byte)iVar33)))))));
  auVar39[8] = SUB41(fVar114,0) & ~(byte)iVar48;
  auVar39[9] = (byte)((uint)fVar114 >> 8) & ~(byte)((uint)iVar48 >> 8);
  auVar39[10] = (byte)((uint)fVar114 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10);
  auVar39[0xb] = (byte)((uint)fVar114 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18);
  auVar39[0xc] = SUB41(fVar121,0) & ~(byte)iVar50;
  auVar39[0xd] = (byte)((uint)fVar121 >> 8) & ~(byte)((uint)iVar50 >> 8);
  auVar39[0xe] = (byte)((uint)fVar121 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10);
  auVar39[0xf] = (byte)((uint)fVar121 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18);
  auVar41._0_8_ =
       CONCAT17((byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar111 >> 0x18),
                CONCAT16((byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar111 >> 0x10),
                         CONCAT15((byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar111 >> 8),
                                  CONCAT14(SUB41(fVar51,0) & ~(byte)iVar111,
                                           CONCAT13((byte)((uint)fVar52 >> 0x18) &
                                                    ~(byte)((uint)iVar105 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar52 >> 0x10) &
                                                             ~(byte)((uint)iVar105 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar52 >> 8) &
                                                                      ~(byte)((uint)iVar105 >> 8),
                                                                      SUB41(fVar52,0) &
                                                                      ~(byte)iVar105)))))));
  auVar41[8] = SUB41(fVar61,0) & ~(byte)iVar112;
  auVar41[9] = (byte)((uint)fVar61 >> 8) & ~(byte)((uint)iVar112 >> 8);
  auVar41[10] = (byte)((uint)fVar61 >> 0x10) & ~(byte)((uint)iVar112 >> 0x10);
  auVar41[0xb] = (byte)((uint)fVar61 >> 0x18) & ~(byte)((uint)iVar112 >> 0x18);
  auVar41[0xc] = SUB41(fVar62,0) & ~(byte)iVar113;
  auVar41[0xd] = (byte)((uint)fVar62 >> 8) & ~(byte)((uint)iVar113 >> 8);
  auVar41[0xe] = (byte)((uint)fVar62 >> 0x10) & ~(byte)((uint)iVar113 >> 0x10);
  auVar41[0xf] = (byte)((uint)fVar62 >> 0x18) & ~(byte)((uint)iVar113 >> 0x18);
  uStack_88 = auVar41._8_8_;
  uStack_78 = auVar39._8_8_;
  if (param_1 < fVar49) {
    if (0.0 < fVar49) {
      fVar122 = param_1 / fVar49;
    }
    local_90 = auVar41._0_8_;
    local_80 = auVar39._0_8_;
    auVar39 = FUN_009c6b1c(fVar122,&local_90,&local_80);
    auVar41._8_8_ = uStack_88;
    auVar41._0_8_ = local_90;
  }
  fVar47 = auVar39._0_4_;
  auVar84._0_4_ = fVar47 * fVar47;
  fVar52 = auVar39._4_4_;
  auVar84._4_4_ = fVar52 * fVar52;
  fVar49 = auVar39._8_4_;
  auVar84._8_4_ = fVar49 * fVar49;
  fVar51 = auVar39._12_4_;
  auVar84._12_4_ = fVar51 * fVar51;
  auVar66 = NEON_ext(auVar84,auVar84,8,1);
  fVar31 = *(float *)PTR_FloatQuaternionEpsilon_0437a118;
  fVar45 = auVar66._0_4_ + auVar84._0_4_;
  fVar61 = auVar66._4_4_ + auVar84._4_4_;
  fVar32 = fVar45 + fVar61;
  fVar45 = fVar45 + fVar61;
  auVar85._8_8_ = CONCAT44(fVar45,fVar32);
  auVar85._0_8_ = CONCAT44(fVar45,fVar32);
  auVar66 = NEON_frsqrte(auVar85,4);
  iVar33 = -(uint)(fVar32 < fVar31);
  iVar46 = -(uint)(fVar45 < fVar31);
  iVar48 = -(uint)(fVar32 < fVar31);
  iVar50 = -(uint)(fVar45 < fVar31);
  auVar102._0_4_ = auVar66._0_4_ * fVar32;
  auVar102._4_4_ = auVar66._4_4_ * fVar45;
  auVar102._8_4_ = auVar66._8_4_ * fVar32;
  auVar102._12_4_ = auVar66._12_4_ * fVar45;
  auVar54 = NEON_frsqrts(auVar66,auVar102,4);
  auVar93._0_4_ = auVar66._0_4_ * auVar54._0_4_;
  auVar93._4_4_ = auVar66._4_4_ * auVar54._4_4_;
  auVar93._8_4_ = auVar66._8_4_ * auVar54._8_4_;
  auVar93._12_4_ = auVar66._12_4_ * auVar54._12_4_;
  auVar103._0_4_ = fVar32 * auVar93._0_4_;
  auVar103._4_4_ = fVar45 * auVar93._4_4_;
  auVar103._8_4_ = fVar32 * auVar93._8_4_;
  auVar103._12_4_ = fVar45 * auVar93._12_4_;
  auVar66 = NEON_frsqrts(auVar93,auVar103,4);
  fVar47 = fVar47 * auVar93._0_4_ * auVar66._0_4_;
  fVar52 = fVar52 * auVar93._4_4_ * auVar66._4_4_;
  fVar49 = fVar49 * auVar93._8_4_ * auVar66._8_4_;
  fVar51 = fVar51 * auVar93._12_4_ * auVar66._12_4_;
  bVar42 = (byte)((uint)iVar33 >> 8);
  bVar43 = (byte)((uint)iVar33 >> 0x10);
  bVar44 = (byte)((uint)iVar33 >> 0x18);
  auVar59[0] = SUB41(fVar47,0) & ~(byte)iVar33;
  auVar59[1] = (byte)((uint)fVar47 >> 8) & ~bVar42;
  auVar59[2] = (byte)((uint)fVar47 >> 0x10) & ~bVar43;
  auVar59[3] = (byte)((uint)fVar47 >> 0x18) & ~bVar44;
  auVar59[4] = SUB41(fVar52,0) & ~(byte)iVar46;
  auVar59[5] = (byte)((uint)fVar52 >> 8) & ~(byte)((uint)iVar46 >> 8);
  auVar59[6] = (byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)iVar46 >> 0x10);
  auVar59[7] = (byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18);
  auVar59[8] = SUB41(fVar49,0) & ~(byte)iVar48;
  auVar59[9] = (byte)((uint)fVar49 >> 8) & ~(byte)((uint)iVar48 >> 8);
  auVar59[10] = (byte)((uint)fVar49 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10);
  auVar59[0xb] = (byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18);
  auVar59[0xc] = SUB41(fVar51,0) & ~(byte)iVar50;
  auVar59[0xd] = (byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar50 >> 8);
  auVar59[0xe] = (byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10);
  auVar59[0xf] = (byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18);
  iVar33 = -(uint)((float)CONCAT13((byte)((uint)fVar32 >> 0x18) & ~bVar44,
                                   CONCAT12((byte)((uint)fVar32 >> 0x10) & ~bVar43,
                                            CONCAT11((byte)((uint)fVar32 >> 8) & ~bVar42,
                                                     SUB41(fVar32,0) & ~(byte)iVar33))) == 0.0);
  auVar40._0_4_ =
       CONCAT13(~(byte)((uint)iVar33 >> 0x18),
                CONCAT12(~(byte)((uint)iVar33 >> 0x10),
                         CONCAT11(~(byte)((uint)iVar33 >> 8),~(byte)iVar33)));
  auVar40._4_4_ = auVar40._0_4_;
  auVar40._8_4_ = auVar40._0_4_;
  auVar40._12_4_ = auVar40._0_4_;
  auVar41 = auVar41 ^ (auVar41 ^ auVar59) & auVar40;
  auVar104._8_8_ = _UNK_03888d18;
  auVar104._0_8_ = _DAT_03888d10;
  uVar115 = a64_TBL(ZEXT816(0),auVar104,uVar28);
  fVar47 = auVar41._0_4_ * (float)_DAT_03889ac0;
  fVar52 = auVar41._4_4_ * (float)((ulong)_DAT_03889ac0 >> 0x20);
  auVar86._0_8_ = CONCAT44(fVar52,fVar47);
  auVar86._8_4_ = auVar41._8_4_ * (float)_UNK_03889ac8;
  auVar86._12_4_ = auVar41._12_4_ * (float)((ulong)_UNK_03889ac8 >> 0x20);
  uVar126 = a64_TBL(ZEXT816(0),auVar104,DAT_0388a580);
  uVar64 = a64_TBL(ZEXT816(0),auVar104,uVar29);
  uVar135 = a64_TBL(ZEXT816(0),auVar86,DAT_0388a580);
  uVar141 = a64_TBL(ZEXT816(0),auVar86,DAT_0388a6c8);
  fVar51 = (float)((ulong)uVar115 >> 0x20);
  uVar116 = a64_TBL(ZEXT816(0),auVar86,uVar28);
  uVar147 = a64_TBL(ZEXT816(0),auVar86,uVar29);
  uVar123 = a64_TBL(ZEXT816(0),auVar86,DAT_0388a790);
  fVar31 = (float)((ulong)uVar126 >> 0x20);
  auVar87._8_8_ = auVar86._0_8_;
  auVar87._0_8_ = auVar86._0_8_;
  fVar32 = (float)((ulong)_DAT_03889ad0 >> 0x20);
  fVar45 = (float)((ulong)_UNK_03889ad8 >> 0x20);
  uVar73 = a64_TBL(ZEXT816(0),auVar87,DAT_0388a648);
  fVar49 = (float)((ulong)uVar64 >> 0x20);
  a64_TBL(ZEXT816(0),auVar41,uVar28);
  auVar60._0_8_ =
       CONCAT44((fVar31 * fVar52 + fVar32 * (float)((ulong)uVar135 >> 0x20) * 0.0 +
                fVar32 * fVar49 * (float)((ulong)uVar116 >> 0x20)) -
                fVar51 * (float)((ulong)uVar147 >> 0x20),
                ((float)uVar126 * fVar47 + (float)_DAT_03889ad0 * (float)uVar135 * 0.0 +
                (float)_DAT_03889ad0 * (float)uVar64 * (float)uVar116) -
                (float)uVar115 * (float)uVar147);
  auVar60._8_4_ =
       ((float)uVar126 * auVar86._8_4_ + (float)_UNK_03889ad8 * (float)uVar115 * (float)uVar141 +
       (float)_UNK_03889ad8 * (float)uVar73 * 0.0) - (float)uVar64 * (float)uVar123;
  auVar60._12_4_ =
       (fVar31 * auVar86._12_4_ + fVar45 * fVar51 * (float)((ulong)uVar141 >> 0x20) +
       fVar45 * (float)((ulong)uVar73 >> 0x20) * 0.0) - fVar49 * (float)((ulong)uVar123 >> 0x20);
  a64_TBL(ZEXT816(0),auVar41,uVar29);
  a64_TBL(ZEXT816(0),auVar41,DAT_0388a580);
  a64_TBL(ZEXT816(0),auVar60,DAT_0388a580);
  a64_TBL(ZEXT816(0),auVar60,DAT_0388a6c8);
  a64_TBL(ZEXT816(0),auVar60,uVar29);
  auVar132._8_8_ = auVar60._0_8_;
  auVar132._0_8_ = auVar60._0_8_;
  a64_TBL(ZEXT816(0),auVar132,DAT_0388a648);
  a64_TBL(ZEXT816(0),auVar60,uVar28);
  a64_TBL(ZEXT816(0),auVar60,DAT_0388a790);
  return;
}


