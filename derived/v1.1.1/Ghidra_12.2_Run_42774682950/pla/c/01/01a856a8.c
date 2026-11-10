/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a856a8; name: FUN_01a856a8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a856a8(undefined1 param_1 [16],long param_2,float *param_3,undefined4 param_4)

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
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar29 [12];
  undefined8 uVar26;
  undefined1 auVar30 [12];
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 uVar27;
  undefined8 uVar28;
  float fVar42;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  int iVar43;
  undefined1 auVar44 [12];
  int iVar59;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  int iVar61;
  int iVar62;
  undefined1 auVar49 [16];
  float fVar60;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar45 [12];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar46 [12];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar63;
  undefined8 uVar64;
  undefined1 auVar65 [12];
  float fVar73;
  float fVar74;
  float fVar75;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined8 uVar76;
  undefined1 auVar77 [16];
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
  undefined1 auVar88 [16];
  float fVar89;
  undefined8 uVar90;
  undefined8 uVar91;
  float fVar97;
  float fVar98;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  undefined4 uVar103;
  byte bVar104;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  undefined8 uVar105;
  byte bVar113;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  long lVar114;
  undefined8 uVar122;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  long *local_48;
  
  auVar47._0_8_ = param_1._0_8_;
  uVar26 = param_1._8_8_;
  if (*(long *)(param_2 + 0x628) == 0) {
    local_48 = (long *)0x0;
  }
  else {
    FUN_009b8474(&local_48);
    if (local_48 != (long *)0x0) {
      auVar47._8_8_ = uVar26;
      FUN_01827998(auVar47,local_48,param_3,param_4);
      if (local_48 == (long *)0x0) {
        return;
      }
      lVar23 = local_48[0xb];
      piVar1 = (int *)(lVar23 + 0xc);
      do {
        iVar43 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar43 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar43 + -1 == 0) {
        *(undefined8 *)(lVar23 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
        return;
      }
      return;
    }
  }
  fVar25 = *param_3;
  fVar40 = param_3[2];
  fVar63 = fVar40 * fVar40 + fVar25 * fVar25;
  fVar24 = fVar63 + 0.0;
  fVar63 = fVar63 + 0.0;
  auVar78._8_8_ = CONCAT44(fVar63,fVar24);
  auVar78._0_8_ = CONCAT44(fVar63,fVar24);
  if ((1.1920929e-07 <= SQRT(fVar24)) && (fVar24 != 0.0)) {
    auVar47 = NEON_frsqrte(auVar78,4);
    auVar77._0_4_ = fVar24 * auVar47._0_4_;
    auVar77._4_4_ = fVar63 * auVar47._4_4_;
    auVar77._8_4_ = fVar24 * auVar47._8_4_;
    auVar77._12_4_ = fVar63 * auVar47._12_4_;
    auVar78 = NEON_frsqrts(auVar47,auVar77,4);
    auVar48._0_4_ = auVar47._0_4_ * auVar78._0_4_;
    auVar48._4_4_ = auVar47._4_4_ * auVar78._4_4_;
    auVar48._8_4_ = auVar47._8_4_ * auVar78._8_4_;
    auVar48._12_4_ = auVar47._12_4_ * auVar78._12_4_;
    auVar79._0_4_ = fVar24 * auVar48._0_4_;
    auVar79._4_4_ = fVar63 * auVar48._4_4_;
    auVar79._8_4_ = fVar24 * auVar48._8_4_;
    auVar79._12_4_ = fVar63 * auVar48._12_4_;
    auVar47 = NEON_frsqrts(auVar48,auVar79,4);
    fVar25 = fVar25 * auVar48._0_4_ * auVar47._0_4_;
    fVar39 = auVar48._4_4_ * auVar47._4_4_ * 0.0;
    fVar40 = fVar40 * auVar48._8_4_ * auVar47._8_4_;
    fVar41 = auVar48._12_4_ * auVar47._12_4_ * 0.0;
    iVar43 = -(uint)(fVar24 == 0.0);
    iVar59 = -(uint)(fVar63 == 0.0);
    iVar61 = -(uint)(fVar24 == 0.0);
    iVar62 = -(uint)(fVar63 == 0.0);
    local_60 = (float)CONCAT13((byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18),
                               CONCAT12((byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar25 >> 8) &
                                                  ~(byte)((uint)iVar43 >> 8),
                                                  SUB41(fVar25,0) & ~(byte)iVar43)));
    auVar29._0_8_ =
         CONCAT17((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18),
                  CONCAT16((byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10),
                           CONCAT15((byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar59 >> 8),
                                    CONCAT14(SUB41(fVar39,0) & ~(byte)iVar59,local_60))));
    auVar29[8] = SUB41(fVar40,0) & ~(byte)iVar61;
    auVar29[9] = (byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar61 >> 8);
    auVar29[10] = (byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10);
    auVar29[0xb] = (byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18);
    auVar31[0xc] = SUB41(fVar41,0) & ~(byte)iVar62;
    auVar31._0_12_ = auVar29;
    auVar31[0xd] = (byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar62 >> 8);
    auVar31[0xe] = (byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar62 >> 0x10);
    auVar31[0xf] = (byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar62 >> 0x18);
    fStack_58 = auVar29._8_4_;
    fStack_54 = auVar31._12_4_;
    fStack_5c = (float)((ulong)auVar29._0_8_ >> 0x20);
    FUN_009c69bc(&local_48,param_2);
    lVar114 = local_48[0x19];
    lVar23 = local_48[0x18];
    fStack_64 = (float)((ulong)lVar114 >> 0x20);
    if (local_48 != (long *)0x0) {
      lVar22 = local_48[0xb];
      piVar1 = (int *)(lVar22 + 0xc);
      do {
        iVar43 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar43 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar43 + -1 == 0) {
        *(undefined8 *)(lVar22 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
    uVar21 = DAT_0388a880;
    uVar105 = DAT_0388a6f0;
    uVar27 = DAT_0388a6d8;
    uVar122 = DAT_0388a680;
    uVar28 = DAT_0388a5e0;
    bVar104 = (byte)_DAT_038897c0;
    bVar106 = (byte)((ulong)_DAT_038897c0 >> 8);
    bVar107 = (byte)((ulong)_DAT_038897c0 >> 0x10);
    bVar108 = (byte)((ulong)_DAT_038897c0 >> 0x18);
    fVar39 = (float)CONCAT13((byte)((ulong)lVar23 >> 0x18) & bVar108,
                             CONCAT12((byte)((ulong)lVar23 >> 0x10) & bVar107,
                                      CONCAT11((byte)((ulong)lVar23 >> 8) & bVar106,
                                               (byte)lVar23 & bVar104)));
    bVar109 = (byte)((ulong)_DAT_038897c0 >> 0x20);
    bVar110 = (byte)((ulong)_DAT_038897c0 >> 0x28);
    bVar111 = (byte)((ulong)_DAT_038897c0 >> 0x30);
    bVar112 = (byte)((ulong)_DAT_038897c0 >> 0x38);
    auVar44._0_8_ =
         CONCAT17((byte)((ulong)lVar23 >> 0x38) & bVar112,
                  CONCAT16((byte)((ulong)lVar23 >> 0x30) & bVar111,
                           CONCAT15((byte)((ulong)lVar23 >> 0x28) & bVar110,
                                    CONCAT14((byte)((ulong)lVar23 >> 0x20) & bVar109,fVar39))));
    bVar113 = (byte)_UNK_038897c8;
    auVar44[8] = (byte)lVar114 & bVar113;
    bVar115 = (byte)((ulong)_UNK_038897c8 >> 8);
    auVar44[9] = (byte)((ulong)lVar114 >> 8) & bVar115;
    bVar116 = (byte)((ulong)_UNK_038897c8 >> 0x10);
    auVar44[10] = (byte)((ulong)lVar114 >> 0x10) & bVar116;
    bVar117 = (byte)((ulong)_UNK_038897c8 >> 0x18);
    auVar44[0xb] = (byte)((ulong)lVar114 >> 0x18) & bVar117;
    bVar118 = (byte)((ulong)_UNK_038897c8 >> 0x20);
    auVar49[0xc] = (byte)((ulong)lVar114 >> 0x20) & bVar118;
    auVar49._0_12_ = auVar44;
    bVar119 = (byte)((ulong)_UNK_038897c8 >> 0x28);
    auVar49[0xd] = (byte)((ulong)lVar114 >> 0x28) & bVar119;
    bVar120 = (byte)((ulong)_UNK_038897c8 >> 0x30);
    auVar49[0xe] = (byte)((ulong)lVar114 >> 0x30) & bVar120;
    bVar121 = (byte)((ulong)_UNK_038897c8 >> 0x38);
    auVar49[0xf] = (byte)((ulong)lVar114 >> 0x38) & bVar121;
    uVar26 = NEON_ext(auVar44._0_8_,auVar44._0_8_,4,1);
    uVar64 = a64_TBL(ZEXT816(0),auVar49,DAT_0388a6f0);
    fVar25 = (float)uVar26 * (float)uVar26;
    fVar40 = (float)((ulong)uVar26 >> 0x20);
    fVar40 = fVar40 * fVar40;
    fVar24 = (float)uVar64;
    fVar63 = (float)((ulong)uVar64 >> 0x20);
    fVar101 = (float)_UNK_03888fc8;
    fVar102 = (float)((ulong)_UNK_03888fc8 >> 0x20);
    fVar99 = (float)_DAT_03888fc0;
    fVar100 = (float)((ulong)_DAT_03888fc0 >> 0x20);
    uVar90 = a64_TBL(ZEXT816(0),auVar49,DAT_0388a5e0);
    uVar26 = a64_TBL(ZEXT816(0),auVar49,DAT_0388a6d8);
    uVar64 = a64_TBL(ZEXT816(0),auVar49,DAT_0388a880);
    fVar89 = (float)uVar90 * (float)uVar90;
    fVar97 = (float)((ulong)uVar90 >> 0x20);
    fVar97 = fVar97 * fVar97;
    fVar42 = (float)uVar26;
    fVar98 = (float)((ulong)uVar26 >> 0x20);
    fVar39 = (float)uVar64 * fVar39;
    fVar73 = (float)((ulong)uVar64 >> 0x20) * (float)((ulong)auVar44._0_8_ >> 0x20);
    fVar74 = fVar24 * auVar44._8_4_;
    fVar75 = fVar63 * auVar49._12_4_;
    uVar26 = a64_TBL(ZEXT816(0),auVar49,DAT_0388a680);
    fVar39 = fVar39 + fVar39;
    fVar73 = fVar73 + fVar73;
    fVar74 = fVar74 + fVar74;
    fVar75 = fVar75 + fVar75;
    fVar41 = (float)uVar26 * fStack_64;
    fVar60 = (float)((ulong)uVar26 >> 0x20) * fStack_64;
    auVar80._0_4_ = fVar99 - (fVar25 + fVar25 + fVar89 + fVar89);
    auVar80._4_4_ = fVar100 - (fVar40 + fVar40 + fVar97 + fVar97);
    auVar80._8_4_ =
         fVar101 - (fVar24 * fVar24 + fVar24 * fVar24 + fVar42 * fVar42 + fVar42 * fVar42);
    auVar80._12_4_ =
         fVar102 - (fVar63 * fVar63 + fVar63 * fVar63 + fVar98 * fVar98 + fVar98 * fVar98);
    fVar41 = fVar41 + fVar41;
    fVar60 = fVar60 + fVar60;
    fVar25 = fVar42 * fStack_64 + fVar42 * fStack_64;
    fVar40 = fVar98 * fStack_64 + fVar98 * fStack_64;
    fVar24 = fVar39 + fVar41;
    fVar63 = fVar73 + fVar60;
    fVar89 = fVar74 + fVar25;
    fVar97 = fVar75 + fVar40;
    fVar39 = fVar39 - fVar41;
    fVar73 = fVar73 - fVar60;
    fVar74 = fVar74 - fVar25;
    fVar75 = fVar75 - fVar40;
    auVar4._4_4_ = fVar63;
    auVar4._0_4_ = fVar24;
    auVar4._8_4_ = fVar89;
    auVar4._12_4_ = fVar97;
    auVar12._4_4_ = fVar73;
    auVar12._0_4_ = fVar39;
    auVar12._8_4_ = fVar74;
    auVar12._12_4_ = fVar75;
    auVar92._0_8_ = a64_TBL(ZEXT816(0),auVar4,auVar12,DAT_0388a758);
    auVar5._4_4_ = fVar63;
    auVar5._0_4_ = fVar24;
    auVar5._8_4_ = fVar89;
    auVar5._12_4_ = fVar97;
    auVar13._4_4_ = fVar73;
    auVar13._0_4_ = fVar39;
    auVar13._8_4_ = fVar74;
    auVar13._12_4_ = fVar75;
    uVar26 = a64_TBL(ZEXT816(0),auVar5,auVar13,DAT_0388a720);
    auVar92._8_8_ = uVar26;
    uVar26 = a64_TBL(ZEXT816(0),auVar80,auVar92,DAT_0388a668);
    uVar64 = a64_TBL(ZEXT816(0),auVar80,auVar92,DAT_0388a5a8);
    fVar63 = (float)uVar26;
    fVar25 = (float)((ulong)uVar26 >> 0x20);
    fVar41 = (float)uVar64;
    fVar40 = (float)((ulong)uVar64 >> 0x20);
    fVar24 = fVar41 * fVar41 + fVar63 * fVar63;
    fVar39 = fVar40 * fVar40 + fVar25 * fVar25;
    fVar25 = fVar24 + fVar39;
    fVar24 = fVar24 + fVar39;
    auVar50._8_8_ = CONCAT44(fVar24,fVar25);
    auVar50._0_8_ = CONCAT44(fVar24,fVar25);
    auVar47 = NEON_frsqrte(auVar50,4);
    auVar93._0_4_ = auVar47._0_4_ * fVar25;
    auVar93._4_4_ = auVar47._4_4_ * fVar24;
    auVar93._8_4_ = auVar47._8_4_ * fVar25;
    auVar93._12_4_ = auVar47._12_4_ * fVar24;
    auVar78 = NEON_frsqrts(auVar47,auVar93,4);
    auVar66._0_4_ = auVar47._0_4_ * auVar78._0_4_;
    auVar66._4_4_ = auVar47._4_4_ * auVar78._4_4_;
    auVar66._8_4_ = auVar47._8_4_ * auVar78._8_4_;
    auVar66._12_4_ = auVar47._12_4_ * auVar78._12_4_;
    auVar94._0_4_ = fVar25 * auVar66._0_4_;
    auVar94._4_4_ = fVar24 * auVar66._4_4_;
    auVar94._8_4_ = fVar25 * auVar66._8_4_;
    auVar94._12_4_ = fVar24 * auVar66._12_4_;
    iVar43 = -(uint)(fVar25 == 0.0);
    iVar59 = -(uint)(fVar25 == 0.0);
    iVar61 = -(uint)(fVar24 == 0.0);
    auVar47 = NEON_frsqrts(auVar66,auVar94,4);
    fVar63 = fVar63 * auVar66._0_4_ * auVar47._0_4_;
    fVar41 = fVar41 * auVar66._8_4_ * auVar47._8_4_;
    fVar40 = fVar40 * auVar66._12_4_ * auVar47._12_4_;
    fVar63 = (float)CONCAT13((byte)((uint)fVar63 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18),
                             CONCAT12((byte)((uint)fVar63 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10),
                                      CONCAT11((byte)((uint)fVar63 >> 8) &
                                               ~(byte)((uint)iVar43 >> 8),
                                               SUB41(fVar63,0) & ~(byte)iVar43)));
    fVar25 = (float)CONCAT13((byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18),
                             CONCAT12((byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10),
                                      CONCAT11((byte)((uint)fVar41 >> 8) &
                                               ~(byte)((uint)iVar59 >> 8),
                                               SUB41(fVar41,0) & ~(byte)iVar59)));
    auVar67._0_4_ = fVar63 * fVar63;
    auVar67._4_4_ = 0;
    auVar67._8_4_ = fVar25 * fVar25;
    fVar39 = (float)(CONCAT17((byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18),
                              CONCAT16((byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10),
                                       CONCAT15((byte)((uint)fVar40 >> 8) &
                                                ~(byte)((uint)iVar61 >> 8),
                                                CONCAT14(SUB41(fVar40,0) & ~(byte)iVar61,fVar25))))
                    >> 0x20);
    auVar67._12_4_ = fVar39 * fVar39;
    auVar47 = NEON_ext(auVar67,auVar67,8,1);
    fVar24 = auVar47._0_4_ + auVar67._0_4_;
    fVar41 = auVar47._4_4_ + 0.0;
    fVar40 = fVar24 + fVar41;
    fVar24 = fVar24 + fVar41;
    auVar68._8_8_ = CONCAT44(fVar24,fVar40);
    auVar68._0_8_ = CONCAT44(fVar24,fVar40);
    auVar47 = NEON_frsqrte(auVar68,4);
    auVar95._0_4_ = auVar47._0_4_ * fVar40;
    auVar95._4_4_ = auVar47._4_4_ * fVar24;
    auVar95._8_4_ = auVar47._8_4_ * fVar40;
    auVar95._12_4_ = auVar47._12_4_ * fVar24;
    auVar78 = NEON_frsqrts(auVar47,auVar95,4);
    auVar81._0_4_ = auVar47._0_4_ * auVar78._0_4_;
    auVar81._4_4_ = auVar47._4_4_ * auVar78._4_4_;
    auVar81._8_4_ = auVar47._8_4_ * auVar78._8_4_;
    auVar81._12_4_ = auVar47._12_4_ * auVar78._12_4_;
    auVar96._0_4_ = fVar40 * auVar81._0_4_;
    auVar96._4_4_ = fVar24 * auVar81._4_4_;
    auVar96._8_4_ = fVar40 * auVar81._8_4_;
    auVar96._12_4_ = fVar24 * auVar81._12_4_;
    iVar43 = -(uint)(fVar40 == 0.0);
    iVar59 = -(uint)(fVar24 == 0.0);
    iVar61 = -(uint)(fVar40 == 0.0);
    iVar62 = -(uint)(fVar24 == 0.0);
    auVar47 = NEON_frsqrts(auVar81,auVar96,4);
    fVar63 = fVar63 * auVar81._0_4_ * auVar47._0_4_;
    fVar40 = auVar81._4_4_ * auVar47._4_4_ * 0.0;
    fVar25 = fVar25 * auVar81._8_4_ * auVar47._8_4_;
    fVar39 = fVar39 * auVar81._12_4_ * auVar47._12_4_;
    fVar24 = (float)CONCAT13((byte)((uint)fVar63 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18),
                             CONCAT12((byte)((uint)fVar63 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10),
                                      CONCAT11((byte)((uint)fVar63 >> 8) &
                                               ~(byte)((uint)iVar43 >> 8),
                                               SUB41(fVar63,0) & ~(byte)iVar43)));
    auVar65._0_8_ =
         CONCAT17((byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18),
                  CONCAT16((byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10),
                           CONCAT15((byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar59 >> 8),
                                    CONCAT14(SUB41(fVar40,0) & ~(byte)iVar59,fVar24))));
    auVar65[8] = SUB41(fVar25,0) & ~(byte)iVar61;
    auVar65[9] = (byte)((uint)fVar25 >> 8) & ~(byte)((uint)iVar61 >> 8);
    auVar65[10] = (byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10);
    auVar65[0xb] = (byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18);
    auVar69[0xc] = SUB41(fVar39,0) & ~(byte)iVar62;
    auVar69._0_12_ = auVar65;
    auVar69[0xd] = (byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar62 >> 8);
    auVar69[0xe] = (byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar62 >> 0x10);
    auVar69[0xf] = (byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar62 >> 0x18);
    auVar51._0_4_ = local_60 * fVar24;
    fVar25 = (float)((ulong)auVar65._0_8_ >> 0x20);
    auVar51._4_4_ = fStack_5c * fVar25;
    fVar40 = auVar65._8_4_;
    auVar51._8_4_ = fStack_58 * fVar40;
    fVar63 = auVar69._12_4_;
    auVar51._12_4_ = fStack_54 * fVar63;
    auVar47 = NEON_ext(auVar51,auVar51,8,1);
    if (auVar47._0_4_ + auVar51._0_4_ + auVar47._4_4_ + auVar51._4_4_ < -0.99) {
      FUN_009c69bc(&local_48,param_2);
      lVar114 = local_48[0x19];
      lVar23 = local_48[0x18];
      if (local_48 != (long *)0x0) {
        lVar22 = local_48[0xb];
        piVar1 = (int *)(lVar22 + 0xc);
        do {
          iVar43 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar43 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar43 + -1 == 0) {
          *(undefined8 *)(lVar22 + 0x18) = 0;
          (**(code **)(*local_48 + 0x20))();
        }
      }
      fVar60 = (float)CONCAT13((byte)((ulong)lVar23 >> 0x18) & bVar108,
                               CONCAT12((byte)((ulong)lVar23 >> 0x10) & bVar107,
                                        CONCAT11((byte)((ulong)lVar23 >> 8) & bVar106,
                                                 (byte)lVar23 & bVar104)));
      auVar45._0_8_ =
           CONCAT17((byte)((ulong)lVar23 >> 0x38) & bVar112,
                    CONCAT16((byte)((ulong)lVar23 >> 0x30) & bVar111,
                             CONCAT15((byte)((ulong)lVar23 >> 0x28) & bVar110,
                                      CONCAT14((byte)((ulong)lVar23 >> 0x20) & bVar109,fVar60))));
      auVar45[8] = (byte)lVar114 & bVar113;
      auVar45[9] = (byte)((ulong)lVar114 >> 8) & bVar115;
      auVar45[10] = (byte)((ulong)lVar114 >> 0x10) & bVar116;
      auVar45[0xb] = (byte)((ulong)lVar114 >> 0x18) & bVar117;
      auVar52[0xc] = (byte)((ulong)lVar114 >> 0x20) & bVar118;
      auVar52._0_12_ = auVar45;
      auVar52[0xd] = (byte)((ulong)lVar114 >> 0x28) & bVar119;
      auVar52[0xe] = (byte)((ulong)lVar114 >> 0x30) & bVar120;
      auVar52[0xf] = (byte)((ulong)lVar114 >> 0x38) & bVar121;
      uVar26 = NEON_ext(auVar45._0_8_,auVar45._0_8_,4,1);
      uVar64 = a64_TBL(ZEXT816(0),auVar52,uVar105);
      fVar39 = (float)uVar26 * (float)uVar26;
      fVar73 = (float)((ulong)uVar26 >> 0x20);
      fVar73 = fVar73 * fVar73;
      fVar89 = (float)uVar64;
      fVar42 = (float)((ulong)uVar64 >> 0x20);
      uVar64 = a64_TBL(ZEXT816(0),auVar52,uVar27);
      uVar26 = a64_TBL(ZEXT816(0),auVar52,uVar28);
      fVar41 = (float)uVar26 * (float)uVar26;
      fVar74 = (float)((ulong)uVar26 >> 0x20);
      fVar74 = fVar74 * fVar74;
      fVar75 = (float)uVar64;
      fVar97 = (float)((ulong)uVar64 >> 0x20);
      fVar99 = fVar99 - (fVar39 + fVar39 + fVar41 + fVar41);
      fVar100 = fVar100 - (fVar73 + fVar73 + fVar74 + fVar74);
      fVar101 = fVar101 - (fVar89 * fVar89 + fVar89 * fVar89 + fVar75 * fVar75 + fVar75 * fVar75);
      fVar102 = fVar102 - (fVar42 * fVar42 + fVar42 * fVar42 + fVar97 * fVar97 + fVar97 * fVar97);
      uVar26 = a64_TBL(ZEXT816(0),auVar52,uVar21);
      fVar60 = (float)uVar26 * fVar60;
      fVar39 = (float)((ulong)uVar26 >> 0x20) * (float)((ulong)auVar45._0_8_ >> 0x20);
      fVar89 = fVar89 * auVar45._8_4_;
      fVar42 = fVar42 * auVar52._12_4_;
      uVar26 = a64_TBL(ZEXT816(0),auVar52,uVar122);
      fVar60 = fVar60 + fVar60;
      fVar39 = fVar39 + fVar39;
      fVar89 = fVar89 + fVar89;
      fVar42 = fVar42 + fVar42;
      fVar98 = (float)((ulong)lVar114 >> 0x20);
      fVar41 = (float)uVar26 * fVar98;
      fVar73 = (float)((ulong)uVar26 >> 0x20) * fVar98;
      fVar41 = fVar41 + fVar41;
      fVar73 = fVar73 + fVar73;
      fVar74 = fVar75 * fVar98 + fVar75 * fVar98;
      fVar75 = fVar97 * fVar98 + fVar97 * fVar98;
      auVar70._0_4_ = fVar60 + fVar41;
      auVar70._4_4_ = fVar39 + fVar73;
      auVar70._8_4_ = fVar89 + fVar74;
      auVar70._12_4_ = fVar42 + fVar75;
      auVar82._0_4_ = fVar60 - fVar41;
      auVar82._4_4_ = fVar39 - fVar73;
      auVar82._8_4_ = fVar89 - fVar74;
      auVar82._12_4_ = fVar42 - fVar75;
      uVar26 = a64_TBL(ZEXT816(0),auVar70,auVar82,DAT_0388a898);
      uVar64 = a64_TBL(ZEXT816(0),auVar70,auVar82,DAT_0388a5e8);
      uVar103 = (undefined4)((ulong)uVar64 >> 0x20);
      auVar10._4_4_ = fVar100;
      auVar10._0_4_ = fVar99;
      auVar10._8_4_ = fVar101;
      auVar10._12_4_ = fVar102;
      auVar14._8_4_ = (int)uVar64;
      auVar14._0_8_ = uVar26;
      auVar14._12_4_ = uVar103;
      uVar28 = a64_TBL(ZEXT816(0),auVar10,auVar14,DAT_0388a640);
      auVar11._4_4_ = fVar100;
      auVar11._0_4_ = fVar99;
      auVar11._8_4_ = fVar101;
      auVar11._12_4_ = fVar102;
      auVar15._8_4_ = (int)uVar64;
      auVar15._0_8_ = uVar26;
      auVar15._12_4_ = uVar103;
      uVar26 = a64_TBL(ZEXT816(0),auVar11,auVar15,DAT_0388a7f0);
      fVar73 = (float)uVar28;
      fVar39 = (float)((ulong)uVar28 >> 0x20);
      fVar75 = (float)uVar26;
      fVar41 = (float)((ulong)uVar26 >> 0x20);
      fVar60 = fVar75 * fVar75 + fVar73 * fVar73;
      fVar74 = fVar41 * fVar41 + fVar39 * fVar39;
      fVar39 = fVar60 + fVar74;
      fVar60 = fVar60 + fVar74;
      auVar36._8_8_ = CONCAT44(fVar60,fVar39);
      auVar36._0_8_ = CONCAT44(fVar60,fVar39);
      auVar47 = NEON_frsqrte(auVar36,4);
      auVar83._0_4_ = auVar47._0_4_ * fVar39;
      auVar83._4_4_ = auVar47._4_4_ * fVar60;
      auVar83._8_4_ = auVar47._8_4_ * fVar39;
      auVar83._12_4_ = auVar47._12_4_ * fVar60;
      auVar78 = NEON_frsqrts(auVar47,auVar83,4);
      auVar53._0_4_ = auVar47._0_4_ * auVar78._0_4_;
      auVar53._4_4_ = auVar47._4_4_ * auVar78._4_4_;
      auVar53._8_4_ = auVar47._8_4_ * auVar78._8_4_;
      auVar53._12_4_ = auVar47._12_4_ * auVar78._12_4_;
      auVar84._0_4_ = fVar39 * auVar53._0_4_;
      auVar84._4_4_ = fVar60 * auVar53._4_4_;
      auVar84._8_4_ = fVar39 * auVar53._8_4_;
      auVar84._12_4_ = fVar60 * auVar53._12_4_;
      iVar43 = -(uint)(fVar39 == 0.0);
      iVar59 = -(uint)(fVar39 == 0.0);
      iVar61 = -(uint)(fVar60 == 0.0);
      auVar47 = NEON_frsqrts(auVar53,auVar84,4);
      fVar73 = fVar73 * auVar53._0_4_ * auVar47._0_4_;
      fVar75 = fVar75 * auVar53._8_4_ * auVar47._8_4_;
      fVar41 = fVar41 * auVar53._12_4_ * auVar47._12_4_;
      fVar73 = (float)CONCAT13((byte)((uint)fVar73 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18),
                               CONCAT12((byte)((uint)fVar73 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar73 >> 8) &
                                                  ~(byte)((uint)iVar43 >> 8),
                                                  SUB41(fVar73,0) & ~(byte)iVar43)));
      fVar39 = (float)CONCAT13((byte)((uint)fVar75 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18),
                               CONCAT12((byte)((uint)fVar75 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar75 >> 8) &
                                                  ~(byte)((uint)iVar59 >> 8),
                                                  SUB41(fVar75,0) & ~(byte)iVar59)));
      auVar54._0_4_ = fVar73 * fVar73;
      auVar54._4_4_ = 0;
      auVar54._8_4_ = fVar39 * fVar39;
      fVar74 = (float)(CONCAT17((byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18),
                                CONCAT16((byte)((uint)fVar41 >> 0x10) &
                                         ~(byte)((uint)iVar61 >> 0x10),
                                         CONCAT15((byte)((uint)fVar41 >> 8) &
                                                  ~(byte)((uint)iVar61 >> 8),
                                                  CONCAT14(SUB41(fVar41,0) & ~(byte)iVar61,fVar39)))
                               ) >> 0x20);
      auVar54._12_4_ = fVar74 * fVar74;
      auVar47 = NEON_ext(auVar54,auVar54,8,1);
      fVar60 = auVar47._0_4_ + auVar54._0_4_;
      fVar75 = auVar47._4_4_ + 0.0;
      fVar41 = fVar60 + fVar75;
      fVar60 = fVar60 + fVar75;
      auVar55._8_8_ = CONCAT44(fVar60,fVar41);
      auVar55._0_8_ = CONCAT44(fVar60,fVar41);
      auVar47 = NEON_frsqrte(auVar55,4);
      auVar85._0_4_ = auVar47._0_4_ * fVar41;
      auVar85._4_4_ = auVar47._4_4_ * fVar60;
      auVar85._8_4_ = auVar47._8_4_ * fVar41;
      auVar85._12_4_ = auVar47._12_4_ * fVar60;
      auVar78 = NEON_frsqrts(auVar47,auVar85,4);
      auVar71._0_4_ = auVar47._0_4_ * auVar78._0_4_;
      auVar71._4_4_ = auVar47._4_4_ * auVar78._4_4_;
      auVar71._8_4_ = auVar47._8_4_ * auVar78._8_4_;
      auVar71._12_4_ = auVar47._12_4_ * auVar78._12_4_;
      auVar86._0_4_ = fVar41 * auVar71._0_4_;
      auVar86._4_4_ = fVar60 * auVar71._4_4_;
      auVar86._8_4_ = fVar41 * auVar71._8_4_;
      auVar86._12_4_ = fVar60 * auVar71._12_4_;
      iVar43 = -(uint)(fVar41 == 0.0);
      iVar59 = -(uint)(fVar60 == 0.0);
      iVar61 = -(uint)(fVar41 == 0.0);
      iVar62 = -(uint)(fVar60 == 0.0);
      auVar47 = NEON_frsqrts(auVar71,auVar86,4);
      fVar73 = fVar73 * auVar71._0_4_ * auVar47._0_4_;
      fVar41 = auVar71._4_4_ * auVar47._4_4_ * 0.0;
      fVar39 = fVar39 * auVar71._8_4_ * auVar47._8_4_;
      fVar74 = fVar74 * auVar71._12_4_ * auVar47._12_4_;
      fVar73 = (float)CONCAT13((byte)((uint)fVar73 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18),
                               CONCAT12((byte)((uint)fVar73 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar73 >> 8) &
                                                  ~(byte)((uint)iVar43 >> 8),
                                                  SUB41(fVar73,0) & ~(byte)iVar43)));
      auVar46._0_8_ =
           CONCAT17((byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18),
                    CONCAT16((byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10),
                             CONCAT15((byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar59 >> 8),
                                      CONCAT14(SUB41(fVar41,0) & ~(byte)iVar59,fVar73))));
      auVar46[8] = SUB41(fVar39,0) & ~(byte)iVar61;
      auVar46[9] = (byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar61 >> 8);
      auVar46[10] = (byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10);
      auVar46[0xb] = (byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18);
      auVar56[0xc] = SUB41(fVar74,0) & ~(byte)iVar62;
      auVar56._0_12_ = auVar46;
      auVar56[0xd] = (byte)((uint)fVar74 >> 8) & ~(byte)((uint)iVar62 >> 8);
      auVar56[0xe] = (byte)((uint)fVar74 >> 0x10) & ~(byte)((uint)iVar62 >> 0x10);
      auVar56[0xf] = (byte)((uint)fVar74 >> 0x18) & ~(byte)((uint)iVar62 >> 0x18);
      auVar37._0_4_ = local_60 * fVar73;
      fVar39 = (float)((ulong)auVar46._0_8_ >> 0x20);
      auVar37._4_4_ = fStack_5c * fVar39;
      auVar37._8_4_ = fStack_58 * auVar46._8_4_;
      auVar37._12_4_ = fStack_54 * auVar56._12_4_;
      auVar47 = NEON_ext(auVar37,auVar37,8,1);
      fVar39 = fVar39 * 0.00999999;
      fVar41 = auVar46._8_4_ * 0.00999999;
      fVar60 = auVar56._12_4_ * 0.00999999;
      if (auVar47._0_4_ + auVar37._0_4_ + auVar47._4_4_ + auVar37._4_4_ <= 0.0) {
        fVar73 = local_60 * 0.99 - fVar73 * 0.00999999;
        fVar39 = fStack_5c * 0.99 - fVar39;
        fVar41 = fStack_58 * 0.99 - fVar41;
        fVar60 = fStack_54 * 0.99 - fVar60;
      }
      else {
        fVar73 = local_60 * 0.99 + fVar73 * 0.00999999;
        fVar39 = fStack_5c * 0.99 + fVar39;
        fVar41 = fStack_58 * 0.99 + fVar41;
        fVar60 = fStack_54 * 0.99 + fVar60;
      }
      auVar57._0_4_ = fVar73 * fVar73;
      auVar57._4_4_ = fVar39 * fVar39;
      auVar57._8_4_ = fVar41 * fVar41;
      auVar57._12_4_ = fVar60 * fVar60;
      auVar47 = NEON_ext(auVar57,auVar57,8,1);
      fVar75 = auVar47._0_4_ + auVar57._0_4_;
      fVar89 = auVar47._4_4_ + auVar57._4_4_;
      fVar74 = fVar75 + fVar89;
      fVar75 = fVar75 + fVar89;
      auVar58._8_8_ = CONCAT44(fVar75,fVar74);
      auVar58._0_8_ = CONCAT44(fVar75,fVar74);
      auVar47 = NEON_frsqrte(auVar58,4);
      auVar87._0_4_ = auVar47._0_4_ * fVar74;
      auVar87._4_4_ = auVar47._4_4_ * fVar75;
      auVar87._8_4_ = auVar47._8_4_ * fVar74;
      auVar87._12_4_ = auVar47._12_4_ * fVar75;
      auVar78 = NEON_frsqrts(auVar47,auVar87,4);
      auVar72._0_4_ = auVar47._0_4_ * auVar78._0_4_;
      auVar72._4_4_ = auVar47._4_4_ * auVar78._4_4_;
      auVar72._8_4_ = auVar47._8_4_ * auVar78._8_4_;
      auVar72._12_4_ = auVar47._12_4_ * auVar78._12_4_;
      auVar88._0_4_ = fVar74 * auVar72._0_4_;
      auVar88._4_4_ = fVar75 * auVar72._4_4_;
      auVar88._8_4_ = fVar74 * auVar72._8_4_;
      auVar88._12_4_ = fVar75 * auVar72._12_4_;
      iVar43 = -(uint)(fVar74 == 0.0);
      iVar59 = -(uint)(fVar75 == 0.0);
      iVar61 = -(uint)(fVar74 == 0.0);
      iVar62 = -(uint)(fVar75 == 0.0);
      auVar47 = NEON_frsqrts(auVar72,auVar88,4);
      fVar73 = fVar73 * auVar72._0_4_ * auVar47._0_4_;
      fVar39 = fVar39 * auVar72._4_4_ * auVar47._4_4_;
      fVar41 = fVar41 * auVar72._8_4_ * auVar47._8_4_;
      fVar60 = fVar60 * auVar72._12_4_ * auVar47._12_4_;
      local_60 = (float)CONCAT13((byte)((uint)fVar73 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18),
                                 CONCAT12((byte)((uint)fVar73 >> 0x10) &
                                          ~(byte)((uint)iVar43 >> 0x10),
                                          CONCAT11((byte)((uint)fVar73 >> 8) &
                                                   ~(byte)((uint)iVar43 >> 8),
                                                   SUB41(fVar73,0) & ~(byte)iVar43)));
      auVar30._0_8_ =
           CONCAT17((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18),
                    CONCAT16((byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10),
                             CONCAT15((byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar59 >> 8),
                                      CONCAT14(SUB41(fVar39,0) & ~(byte)iVar59,local_60))));
      auVar30[8] = SUB41(fVar41,0) & ~(byte)iVar61;
      auVar30[9] = (byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar61 >> 8);
      auVar30[10] = (byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10);
      auVar30[0xb] = (byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18);
      auVar38[0xc] = SUB41(fVar60,0) & ~(byte)iVar62;
      auVar38._0_12_ = auVar30;
      auVar38[0xd] = (byte)((uint)fVar60 >> 8) & ~(byte)((uint)iVar62 >> 8);
      auVar38[0xe] = (byte)((uint)fVar60 >> 0x10) & ~(byte)((uint)iVar62 >> 0x10);
      auVar38[0xf] = (byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar62 >> 0x18);
      fStack_58 = auVar30._8_4_;
      fStack_54 = auVar38._12_4_;
      fStack_5c = (float)((ulong)auVar30._0_8_ >> 0x20);
    }
    FUN_009c69bc(&local_48,param_2);
    auVar47 = *(undefined1 (*) [16])(local_48 + 0x18);
    *(long *)(param_2 + 0x8f8) = auVar47._8_8_;
    *(long *)(param_2 + 0x8f0) = auVar47._0_8_;
    if (local_48 != (long *)0x0) {
      lVar23 = local_48[0xb];
      piVar1 = (int *)(lVar23 + 0xc);
      do {
        iVar43 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar43 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar43 + -1 == 0) {
        *(undefined8 *)(lVar23 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
    auVar9._8_4_ = fVar40;
    auVar9._0_8_ = auVar65._0_8_;
    auVar8._8_4_ = fVar40;
    auVar8._0_8_ = auVar65._0_8_;
    auVar7._8_4_ = fVar40;
    auVar7._0_8_ = auVar65._0_8_;
    auVar6._8_4_ = fVar40;
    auVar6._0_8_ = auVar65._0_8_;
    auVar19._4_4_ = fStack_5c;
    auVar19._0_4_ = local_60;
    auVar19._8_4_ = fStack_58;
    auVar18._4_4_ = fStack_5c;
    auVar18._0_4_ = local_60;
    auVar18._8_4_ = fStack_58;
    auVar17._4_4_ = fStack_5c;
    auVar17._0_4_ = local_60;
    auVar17._8_4_ = fStack_58;
    auVar16._4_4_ = fStack_5c;
    auVar16._0_4_ = local_60;
    auVar16._8_4_ = fStack_58;
    auVar16._12_4_ = fStack_54;
    uVar28 = a64_TBL(ZEXT816(0),auVar16,uVar27);
    auVar32._0_4_ = fVar24 * local_60;
    auVar32._4_4_ = fVar25 * fStack_5c;
    auVar32._8_4_ = fVar40 * fStack_58;
    auVar32._12_4_ = fVar63 * fStack_54;
    auVar47 = NEON_ext(auVar32,auVar32,8,1);
    fVar24 = auVar47._0_4_ + auVar32._0_4_;
    fVar25 = auVar47._4_4_ + auVar32._4_4_;
    fVar40 = fVar24 + fVar25;
    fVar24 = fVar24 + fVar25;
    auVar6._12_4_ = fVar63;
    uVar90 = a64_TBL(ZEXT816(0),auVar6,uVar21);
    auVar7._12_4_ = fVar63;
    uVar76 = a64_TBL(ZEXT816(0),auVar7,uVar105);
    auVar8._12_4_ = fVar63;
    uVar91 = a64_TBL(ZEXT816(0),auVar8,uVar122);
    auVar9._12_4_ = fVar63;
    uVar26 = a64_TBL(ZEXT816(0),auVar9,uVar27);
    auVar17._12_4_ = fStack_54;
    uVar64 = a64_TBL(ZEXT816(0),auVar17,uVar122);
    auVar47 = NEON_fmov(0x3f800000,4);
    fVar63 = fVar40 + auVar47._0_4_;
    fVar39 = fVar24 + auVar47._4_4_;
    fVar40 = fVar40 + auVar47._8_4_;
    fVar24 = fVar24 + auVar47._12_4_;
    auVar18._12_4_ = fStack_54;
    uVar105 = a64_TBL(ZEXT816(0),auVar18,uVar105);
    auVar19._12_4_ = fStack_54;
    uVar27 = a64_TBL(ZEXT816(0),auVar19,uVar21);
    auVar34._0_4_ =
         ((float)uVar90 * (float)uVar64 - (float)uVar91 * (float)uVar27) / SQRT(fVar63 + fVar63);
    auVar34._4_4_ =
         ((float)((ulong)uVar90 >> 0x20) * (float)((ulong)uVar64 >> 0x20) -
         (float)((ulong)uVar91 >> 0x20) * (float)((ulong)uVar27 >> 0x20)) / SQRT(fVar39 + fVar39);
    auVar34._8_4_ =
         ((float)uVar76 * (float)uVar28 - (float)uVar26 * (float)uVar105) / SQRT(fVar40 + fVar40);
    auVar47 = *(undefined1 (*) [16])(param_2 + 0x8f0);
    fVar25 = *(float *)PTR_FloatUlp_04372e58;
    uVar76 = a64_TBL(ZEXT816(0),auVar47,DAT_0388a580);
    auVar33._0_4_ = -(uint)(fVar63 <= fVar25);
    auVar33._4_4_ = -(uint)(fVar39 <= fVar25);
    auVar33._8_4_ = -(uint)(fVar40 <= fVar25);
    auVar33._12_4_ = -(uint)(fVar24 <= fVar25);
    auVar34._12_4_ = SQRT(fVar24 + fVar24) * 0.5;
    auVar20._8_4_ = (int)_UNK_03889a88;
    auVar20._0_8_ = _DAT_03889a80;
    auVar20._12_4_ = (int)((ulong)_UNK_03889a88 >> 0x20);
    auVar34 = auVar34 ^ (auVar34 ^ auVar20) & auVar33;
    fVar63 = (float)((ulong)uVar76 >> 0x20);
    uVar26 = a64_TBL(ZEXT816(0),auVar34,DAT_0388a580);
    uVar105 = a64_TBL(ZEXT816(0),auVar34,DAT_0388a6c8);
    uVar64 = a64_TBL(ZEXT816(0),auVar34,uVar122);
    uVar91 = a64_TBL(ZEXT816(0),auVar34,uVar21);
    uVar90 = a64_TBL(ZEXT816(0),auVar34,DAT_0388a790);
    auVar35._0_8_ = auVar34._0_8_;
    auVar35._8_8_ = auVar35._0_8_;
    uVar27 = a64_TBL(ZEXT816(0),auVar35,DAT_0388a648);
    uVar28 = a64_TBL(ZEXT816(0),auVar47,uVar122);
    fVar39 = (float)((ulong)uVar28 >> 0x20);
    uVar122 = a64_TBL(ZEXT816(0),auVar47,uVar21);
    fVar41 = (float)((ulong)uVar122 >> 0x20);
    *(int *)(param_2 + 0x8e0) = param_1._0_4_;
    fVar25 = (float)_DAT_03889ad0;
    fVar40 = (float)((ulong)_DAT_03889ad0 >> 0x20);
    fVar24 = (float)((ulong)_UNK_03889ad8 >> 0x20);
    *(float *)(param_2 + 0x908) =
         ((float)uVar76 * auVar34._8_4_ + (float)_UNK_03889ad8 * (float)uVar28 * (float)uVar105 +
         (float)_UNK_03889ad8 * auVar47._0_4_ * (float)uVar27) - (float)uVar122 * (float)uVar90;
    *(float *)(param_2 + 0x90c) =
         (fVar63 * auVar34._12_4_ + fVar24 * fVar39 * (float)((ulong)uVar105 >> 0x20) +
         fVar24 * auVar47._4_4_ * (float)((ulong)uVar27 >> 0x20)) -
         fVar41 * (float)((ulong)uVar90 >> 0x20);
    *(float *)(param_2 + 0x900) =
         ((float)uVar76 * auVar34._0_4_ + fVar25 * auVar47._0_4_ * (float)uVar26 +
         fVar25 * (float)uVar122 * (float)uVar64) - (float)uVar28 * (float)uVar91;
    *(float *)(param_2 + 0x904) =
         (fVar63 * auVar34._4_4_ + fVar40 * auVar47._4_4_ * (float)((ulong)uVar26 >> 0x20) +
         fVar40 * fVar41 * (float)((ulong)uVar64 >> 0x20)) - fVar39 * (float)((ulong)uVar91 >> 0x20)
    ;
    *(undefined4 *)(param_2 + 0x8e4) = 0;
    *(undefined4 *)(param_2 + 0x8e8) = param_4;
  }
  return;
}


