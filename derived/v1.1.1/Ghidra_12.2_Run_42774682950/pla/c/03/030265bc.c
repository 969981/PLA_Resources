/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030265bc; name: FUN_030265bc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_030265bc(undefined1 param_1 [16],long param_2,long param_3,int param_4,int param_5,long param_6,
            long param_7)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [14];
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uVar21;
  long lVar22;
  undefined8 *puVar23;
  long lVar24;
  float *pfVar25;
  undefined1 (*pauVar26) [16];
  int iVar27;
  long lVar28;
  float fVar29;
  float fVar30;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 extraout_q0 [16];
  undefined1 extraout_q0_00 [16];
  undefined1 auVar31 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [12];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 uVar49;
  byte bVar50;
  undefined1 uVar51;
  byte bVar52;
  undefined1 uVar53;
  byte bVar54;
  undefined1 uVar55;
  byte bVar56;
  undefined1 uVar57;
  byte bVar58;
  undefined1 uVar59;
  byte bVar60;
  undefined1 uVar61;
  byte bVar62;
  undefined1 uVar63;
  byte bVar64;
  float fVar65;
  float fVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  byte bVar76;
  undefined1 uVar77;
  byte bVar78;
  undefined1 uVar79;
  byte bVar80;
  undefined1 uVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  float fVar87;
  int iVar88;
  int iVar89;
  undefined8 uVar90;
  int iVar91;
  int iVar92;
  int iVar93;
  int iVar94;
  float fVar95;
  float fVar97;
  undefined8 uVar96;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar20 = _DAT_0388a1f0;
  uVar19 = _UNK_0388a1f8;
  if (param_7 != 0) {
    puVar23 = *(undefined8 **)(param_7 + 8);
    uVar21 = (long)puVar23 + 0x17U & 0xfffffffffffffff8;
    if ((uVar21 <= *(ulong *)(param_7 + 0x10)) &&
       (*(ulong *)(param_7 + 8) = uVar21, uVar20 = _DAT_0388a1f0, uVar19 = _UNK_0388a1f8,
       puVar23 != (undefined8 *)0x0)) {
      *puVar23 = "TtSubIntegrate";
      uVar20 = nn::os::GetSystemTick();
      puVar23[1] = uVar20;
      param_1 = extraout_q0;
      uVar20 = _DAT_0388a1f0;
      uVar19 = _UNK_0388a1f8;
    }
  }
  _DAT_0388a1f0 = uVar20;
  _UNK_0388a1f8 = uVar19;
  if (0 < param_5) {
    pauVar26 = (undefined1 (*) [16])(*(long *)(param_3 + 0x90) + (long)param_4 * 0x20);
    lVar28 = *(long *)(param_3 + 0x10);
    iVar27 = 0;
    pfVar25 = (float *)(*(long *)(param_3 + 0x68) + (long)param_4 * 0x20);
    do {
      auVar36 = *pauVar26;
      fVar35 = auVar36._12_4_;
      fVar34 = auVar36._0_4_;
      auVar40._0_4_ = *pfVar25 - fVar34;
      fVar32 = auVar36._4_4_;
      auVar40._4_4_ = pfVar25[1] - fVar32;
      fVar33 = auVar36._8_4_;
      auVar40._8_4_ = pfVar25[2] - fVar33;
      auVar40._12_4_ = pfVar25[3] - fVar35;
      fVar29 = (float)*(undefined8 *)pauVar26[1];
      fVar46 = (float)*(undefined8 *)(pfVar25 + 4) - fVar29;
      fVar30 = (float)((ulong)*(undefined8 *)pauVar26[1] >> 0x20);
      fVar47 = (float)((ulong)*(undefined8 *)(pfVar25 + 4) >> 0x20) - fVar30;
      fVar48 = pfVar25[3] - fVar35;
      if (*(long *)(pfVar25 + 6) == 0) {
        fVar29 = fVar29 + fVar46 * *(float *)(lVar28 + 0xb0);
        uVar49 = SUB41(fVar29,0);
        uVar51 = (undefined1)((uint)fVar29 >> 8);
        uVar53 = (undefined1)((uint)fVar29 >> 0x10);
        uVar55 = (undefined1)((uint)fVar29 >> 0x18);
        fVar30 = fVar30 + fVar47 * *(float *)(lVar28 + 0xb4);
        uVar57 = SUB41(fVar30,0);
        uVar59 = (undefined1)((uint)fVar30 >> 8);
        uVar61 = (undefined1)((uint)fVar30 >> 0x10);
        uVar63 = (undefined1)((uint)fVar30 >> 0x18);
        fVar65 = fVar35 + fVar48 * *(float *)(lVar28 + 0xb8);
        fVar66 = *(float *)(lVar28 + 0xbc) * 0.0 + 0.0;
        fVar34 = fVar34 + auVar40._0_4_ * *(float *)(lVar28 + 0xb0);
        uVar67 = SUB41(fVar34,0);
        uVar68 = (undefined1)((uint)fVar34 >> 8);
        uVar69 = (undefined1)((uint)fVar34 >> 0x10);
        uVar70 = (undefined1)((uint)fVar34 >> 0x18);
        fVar32 = fVar32 + auVar40._4_4_ * *(float *)(lVar28 + 0xb4);
        uVar71 = SUB41(fVar32,0);
        uVar72 = (undefined1)((uint)fVar32 >> 8);
        uVar73 = (undefined1)((uint)fVar32 >> 0x10);
        uVar74 = (undefined1)((uint)fVar32 >> 0x18);
        fVar33 = fVar33 + auVar40._8_4_ * *(float *)(lVar28 + 0xb8);
        uVar75 = SUB41(fVar33,0);
        uVar77 = (undefined1)((uint)fVar33 >> 8);
        uVar79 = (undefined1)((uint)fVar33 >> 0x10);
        uVar81 = (undefined1)((uint)fVar33 >> 0x18);
        auVar41._0_4_ = fVar46 + fVar29;
        auVar41._4_4_ = fVar47 + fVar30;
        auVar41._8_4_ = fVar48 + fVar65;
        auVar41._12_4_ = fVar66 + 0.0;
        auVar37._0_4_ = auVar40._0_4_ + fVar34;
        auVar37._4_4_ = auVar40._4_4_ + fVar32;
        auVar37._8_4_ = auVar40._8_4_ + fVar33;
      }
      else {
        uVar21 = (ulong)*(ushort *)(pauVar26[1] + 0xc);
        lVar22 = param_6 + uVar21 * 0x70;
        fVar12 = fVar48 * fVar48 + fVar46 * fVar46 + fVar47 * fVar47;
        fVar13 = fVar48 * fVar48 + fVar46 * fVar46 + fVar47 * fVar47;
        uVar49 = (undefined1)((uint)fVar13 >> 8);
        uVar51 = (undefined1)((uint)fVar13 >> 0x10);
        uVar53 = (undefined1)((uint)fVar13 >> 0x18);
        uVar90 = NEON_frsqrte(CONCAT17(uVar53,CONCAT16(uVar51,CONCAT15(uVar49,CONCAT14(SUB41(fVar13,
                                                  0),fVar12)))),4);
        fVar87 = (float)uVar90;
        fVar65 = (float)((ulong)uVar90 >> 0x20);
        uVar90 = NEON_frsqrts(CONCAT17(uVar53,CONCAT16(uVar51,CONCAT15(uVar49,CONCAT14(SUB41(fVar13,
                                                  0),fVar12)))),
                              CONCAT44(fVar65 * fVar65,fVar87 * fVar87),4);
        iVar89 = -(uint)(fVar12 <= 0.0);
        iVar92 = -(uint)(fVar13 <= 0.0);
        fVar87 = fVar87 * (float)uVar90;
        fVar65 = fVar65 * (float)((ulong)uVar90 >> 0x20);
        bVar50 = SUB41(fVar87,0) & ~(byte)iVar89;
        bVar52 = (byte)((uint)fVar87 >> 8) & ~(byte)((uint)iVar89 >> 8);
        bVar54 = (byte)((uint)fVar87 >> 0x10) & ~(byte)((uint)iVar89 >> 0x10);
        bVar56 = (byte)((uint)fVar87 >> 0x18) & ~(byte)((uint)iVar89 >> 0x18);
        bVar58 = SUB41(fVar65,0) & ~(byte)iVar92;
        bVar60 = (byte)((uint)fVar65 >> 8) & ~(byte)((uint)iVar92 >> 8);
        bVar62 = (byte)((uint)fVar65 >> 0x10) & ~(byte)((uint)iVar92 >> 0x10);
        bVar64 = (byte)((uint)fVar65 >> 0x18) & ~(byte)((uint)iVar92 >> 0x18);
        fVar95 = fVar12 * (float)CONCAT13(bVar56,CONCAT12(bVar54,CONCAT11(bVar52,bVar50)));
        fVar97 = fVar13 * (float)CONCAT13(bVar64,CONCAT12(bVar62,CONCAT11(bVar60,bVar58)));
        uVar90 = NEON_fmin(CONCAT44((float)((ulong)*(undefined8 *)(lVar28 + 0x38) >> 0x20) *
                                    *(float *)(lVar22 + 0x24),
                                    (float)*(undefined8 *)(lVar28 + 0x38) *
                                    *(float *)(lVar22 + 0x24)),CONCAT44(fVar97,fVar95),4);
        fVar87 = (float)CONCAT13(bVar56,CONCAT12(bVar54,CONCAT11(bVar52,bVar50)));
        auVar42._0_8_ =
             CONCAT44(-(uint)(*(float *)(lVar22 + 0x20) < fVar97),
                      -(uint)(*(float *)(lVar22 + 0x20) < fVar95));
        fVar95 = fVar95 - (float)uVar90;
        fVar97 = fVar97 - (float)((ulong)uVar90 >> 0x20);
        auVar42._8_8_ = auVar42._0_8_;
        fVar65 = fVar46 * (float)CONCAT13(bVar56,CONCAT12(bVar54,CONCAT11(bVar52,bVar50))) * fVar95;
        fVar66 = fVar47 * (float)CONCAT13(bVar64,CONCAT12(bVar62,CONCAT11(bVar60,bVar58))) * fVar97;
        uVar49 = (undefined1)((uint)fVar66 >> 8);
        uVar51 = (undefined1)((uint)fVar66 >> 0x10);
        uVar53 = (undefined1)((uint)fVar66 >> 0x18);
        fVar95 = fVar48 * fVar87 * fVar95;
        fVar97 = (float)(CONCAT17(bVar64,CONCAT16(bVar62,CONCAT15(bVar60,CONCAT14(bVar58,fVar87))))
                        >> 0x20) * 0.0 * fVar97;
        auVar3._4_4_ = fVar47;
        auVar3._0_4_ = fVar46;
        auVar3._8_4_ = fVar48;
        auVar3._12_4_ = 0;
        auVar7[4] = SUB41(fVar66,0);
        auVar7._0_4_ = fVar65;
        auVar7[5] = uVar49;
        auVar7[6] = uVar51;
        auVar7[7] = uVar53;
        auVar7._8_4_ = fVar95;
        auVar7._12_4_ = fVar97;
        auVar43[4] = SUB41(fVar66,0);
        auVar43._0_4_ = fVar65;
        auVar43[5] = uVar49;
        auVar43[6] = uVar51;
        auVar43[7] = uVar53;
        auVar43._8_4_ = fVar95;
        auVar43._12_4_ = fVar97;
        auVar43 = auVar43 ^ (auVar7 ^ auVar3) & auVar42;
        fVar47 = *(float *)(lVar22 + 0x10);
        fVar46 = fVar47 * fVar47;
        if (fVar46 < fVar12 && fVar46 < fVar13) {
          iVar89 = -(uint)(0.0 <= auVar43._0_4_);
          iVar92 = -(uint)(0.0 <= auVar43._4_4_);
          iVar14 = -(uint)(0.0 <= auVar43._8_4_);
          iVar15 = -(uint)(0.0 <= auVar43._12_4_);
          iVar88 = -(uint)(auVar43._0_4_ < 0.0);
          iVar91 = -(uint)(auVar43._4_4_ < 0.0);
          iVar93 = -(uint)(auVar43._8_4_ < 0.0);
          iVar94 = -(uint)(auVar43._12_4_ < 0.0);
          bVar50 = auVar43[0] & ((byte)iVar88 | (byte)iVar89);
          bVar52 = auVar43[1] & ((byte)((uint)iVar88 >> 8) | (byte)((uint)iVar89 >> 8));
          bVar54 = auVar43[2] & ((byte)((uint)iVar88 >> 0x10) | (byte)((uint)iVar89 >> 0x10));
          bVar56 = auVar43[3] & ((byte)((uint)iVar88 >> 0x18) | (byte)((uint)iVar89 >> 0x18));
          bVar58 = auVar43[4] & ((byte)iVar91 | (byte)iVar92);
          bVar60 = auVar43[5] & ((byte)((uint)iVar91 >> 8) | (byte)((uint)iVar92 >> 8));
          bVar62 = auVar43[6] & ((byte)((uint)iVar91 >> 0x10) | (byte)((uint)iVar92 >> 0x10));
          bVar64 = auVar43[7] & ((byte)((uint)iVar91 >> 0x18) | (byte)((uint)iVar92 >> 0x18));
          bVar76 = auVar43[8] & ((byte)iVar93 | (byte)iVar14);
          bVar78 = auVar43[9] & ((byte)((uint)iVar93 >> 8) | (byte)((uint)iVar14 >> 8));
          bVar80 = auVar43[10] & ((byte)((uint)iVar93 >> 0x10) | (byte)((uint)iVar14 >> 0x10));
          bVar82 = auVar43[0xb] & ((byte)((uint)iVar93 >> 0x18) | (byte)((uint)iVar14 >> 0x18));
          bVar83 = auVar43[0xc] & ((byte)iVar94 | (byte)iVar15);
          bVar84 = auVar43[0xd] & ((byte)((uint)iVar94 >> 8) | (byte)((uint)iVar15 >> 8));
          bVar85 = auVar43[0xe] & ((byte)((uint)iVar94 >> 0x10) | (byte)((uint)iVar15 >> 0x10));
          bVar86 = auVar43[0xf] & ((byte)((uint)iVar94 >> 0x18) | (byte)((uint)iVar15 >> 0x18));
          fVar48 = (float)CONCAT13(bVar56,CONCAT12(bVar54,CONCAT11(bVar52,bVar50))) *
                   (float)CONCAT13(bVar56,CONCAT12(bVar54,CONCAT11(bVar52,bVar50)));
          fVar65 = (float)CONCAT13(bVar64,CONCAT12(bVar62,CONCAT11(bVar60,bVar58))) *
                   (float)CONCAT13(bVar64,CONCAT12(bVar62,CONCAT11(bVar60,bVar58)));
          fVar66 = (float)CONCAT13(bVar82,CONCAT12(bVar80,CONCAT11(bVar78,bVar76))) *
                   (float)CONCAT13(bVar82,CONCAT12(bVar80,CONCAT11(bVar78,bVar76)));
          fVar87 = fVar66 + fVar48 + fVar65;
          fVar66 = fVar66 + fVar48 + fVar65;
          uVar90 = CONCAT44(fVar66,fVar87);
          uVar96 = NEON_frsqrte(uVar90,4);
          fVar48 = (float)uVar96;
          fVar65 = (float)((ulong)uVar96 >> 0x20);
          uVar96 = NEON_frsqrts(uVar90,CONCAT44(fVar65 * fVar65,fVar48 * fVar48),4);
          fVar48 = fVar48 * (float)uVar96;
          fVar65 = fVar65 * (float)((ulong)uVar96 >> 0x20);
          uVar90 = NEON_frsqrts(uVar90,CONCAT44(fVar65 * fVar65,fVar48 * fVar48),4);
          iVar89 = -(uint)(fVar87 <= 0.0);
          iVar92 = -(uint)(fVar66 <= 0.0);
          auVar44._0_8_ = CONCAT44(-(uint)(fVar46 < fVar66),-(uint)(fVar46 < fVar87));
          fVar48 = (float)uVar90 * fVar48;
          fVar65 = (float)((ulong)uVar90 >> 0x20) * fVar65;
          auVar44._8_8_ = auVar44._0_8_;
          fVar48 = (float)CONCAT13((byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar89 >> 0x18),
                                   CONCAT12((byte)((uint)fVar48 >> 0x10) &
                                            ~(byte)((uint)iVar89 >> 0x10),
                                            CONCAT11((byte)((uint)fVar48 >> 8) &
                                                     ~(byte)((uint)iVar89 >> 8),
                                                     SUB41(fVar48,0) & ~(byte)iVar89)));
          fVar46 = fVar48 * fVar47;
          fVar47 = (float)(CONCAT17((byte)((uint)fVar65 >> 0x18) & ~(byte)((uint)iVar92 >> 0x18),
                                    CONCAT16((byte)((uint)fVar65 >> 0x10) &
                                             ~(byte)((uint)iVar92 >> 0x10),
                                             CONCAT15((byte)((uint)fVar65 >> 8) &
                                                      ~(byte)((uint)iVar92 >> 8),
                                                      CONCAT14(SUB41(fVar65,0) & ~(byte)iVar92,
                                                               fVar48)))) >> 0x20) * fVar47;
          auVar5._4_4_ = (float)CONCAT13(bVar64,CONCAT12(bVar62,CONCAT11(bVar60,bVar58))) * fVar47;
          auVar5._0_4_ = (float)CONCAT13(bVar56,CONCAT12(bVar54,CONCAT11(bVar52,bVar50))) * fVar46;
          auVar5._8_4_ = (float)CONCAT13(bVar82,CONCAT12(bVar80,CONCAT11(bVar78,bVar76))) * fVar46;
          auVar5._12_4_ = (float)CONCAT13(bVar86,CONCAT12(bVar85,CONCAT11(bVar84,bVar83))) * fVar47;
          auVar10[1] = bVar52;
          auVar10[0] = bVar50;
          auVar10[2] = bVar54;
          auVar10[3] = bVar56;
          auVar10[4] = bVar58;
          auVar10[5] = bVar60;
          auVar10[6] = bVar62;
          auVar10[7] = bVar64;
          auVar10[8] = bVar76;
          auVar10[9] = bVar78;
          auVar10[10] = bVar80;
          auVar10[0xb] = bVar82;
          auVar10[0xc] = bVar83;
          auVar10[0xd] = bVar84;
          auVar10[0xe] = bVar85;
          auVar10[0xf] = bVar86;
          auVar11[1] = bVar52;
          auVar11[0] = bVar50;
          auVar11[2] = bVar54;
          auVar11[3] = bVar56;
          auVar11[4] = bVar58;
          auVar11[5] = bVar60;
          auVar11[6] = bVar62;
          auVar11[7] = bVar64;
          auVar11[8] = bVar76;
          auVar11[9] = bVar78;
          auVar11[10] = bVar80;
          auVar11[0xb] = bVar82;
          auVar11[0xc] = bVar83;
          auVar11[0xd] = bVar84;
          auVar11[0xe] = bVar85;
          auVar11[0xf] = bVar86;
          auVar43 = auVar11 ^ (auVar10 ^ auVar5) & auVar44;
        }
        uVar2 = *(undefined4 *)(param_6 + uVar21 * 0x70 + 0x14);
        uVar90 = NEON_fmin(CONCAT17((char)((uint)uVar2 >> 0x18),
                                    CONCAT16((char)((uint)uVar2 >> 0x10),
                                             CONCAT15((char)((uint)uVar2 >> 8),
                                                      CONCAT14((char)uVar2,uVar2)))),
                           (ulong)CONCAT42((uint)*(ushort *)(pauVar26[1] + 0xe) << 0x10,
                                           *(ushort *)(pauVar26[1] + 0xe)) << 0x10,4);
        fVar46 = (float)uVar90;
        fVar47 = (float)((ulong)uVar90 >> 0x20);
        if (fVar46 * fVar46 <
            auVar40._8_4_ * auVar40._8_4_ +
            auVar40._0_4_ * auVar40._0_4_ + auVar40._4_4_ * auVar40._4_4_ &&
            fVar47 * fVar47 <
            auVar40._8_4_ * auVar40._8_4_ +
            auVar40._0_4_ * auVar40._0_4_ + auVar40._4_4_ * auVar40._4_4_) {
          iVar89 = -(uint)(0.0 <= auVar40._0_4_);
          iVar92 = -(uint)(0.0 <= auVar40._4_4_);
          iVar14 = -(uint)(0.0 <= auVar40._8_4_);
          iVar15 = -(uint)(0.0 <= auVar40._12_4_);
          iVar88 = -(uint)(auVar40._0_4_ < 0.0);
          iVar91 = -(uint)(auVar40._4_4_ < 0.0);
          iVar93 = -(uint)(auVar40._8_4_ < 0.0);
          iVar94 = -(uint)(auVar40._12_4_ < 0.0);
          bVar50 = SUB41(auVar40._0_4_,0) & ((byte)iVar88 | (byte)iVar89);
          bVar52 = (byte)((uint)auVar40._0_4_ >> 8) &
                   ((byte)((uint)iVar88 >> 8) | (byte)((uint)iVar89 >> 8));
          bVar54 = (byte)((uint)auVar40._0_4_ >> 0x10) &
                   ((byte)((uint)iVar88 >> 0x10) | (byte)((uint)iVar89 >> 0x10));
          bVar56 = (byte)((uint)auVar40._0_4_ >> 0x18) &
                   ((byte)((uint)iVar88 >> 0x18) | (byte)((uint)iVar89 >> 0x18));
          bVar58 = SUB41(auVar40._4_4_,0) & ((byte)iVar91 | (byte)iVar92);
          bVar60 = (byte)((uint)auVar40._4_4_ >> 8) &
                   ((byte)((uint)iVar91 >> 8) | (byte)((uint)iVar92 >> 8));
          bVar62 = (byte)((uint)auVar40._4_4_ >> 0x10) &
                   ((byte)((uint)iVar91 >> 0x10) | (byte)((uint)iVar92 >> 0x10));
          bVar64 = (byte)((uint)auVar40._4_4_ >> 0x18) &
                   ((byte)((uint)iVar91 >> 0x18) | (byte)((uint)iVar92 >> 0x18));
          bVar76 = SUB41(auVar40._8_4_,0) & ((byte)iVar93 | (byte)iVar14);
          bVar78 = (byte)((uint)auVar40._8_4_ >> 8) &
                   ((byte)((uint)iVar93 >> 8) | (byte)((uint)iVar14 >> 8));
          bVar80 = (byte)((uint)auVar40._8_4_ >> 0x10) &
                   ((byte)((uint)iVar93 >> 0x10) | (byte)((uint)iVar14 >> 0x10));
          bVar82 = (byte)((uint)auVar40._8_4_ >> 0x18) &
                   ((byte)((uint)iVar93 >> 0x18) | (byte)((uint)iVar14 >> 0x18));
          bVar83 = SUB41(auVar40._12_4_,0) & ((byte)iVar94 | (byte)iVar15);
          bVar84 = (byte)((uint)auVar40._12_4_ >> 8) &
                   ((byte)((uint)iVar94 >> 8) | (byte)((uint)iVar15 >> 8));
          bVar85 = (byte)((uint)auVar40._12_4_ >> 0x10) &
                   ((byte)((uint)iVar94 >> 0x10) | (byte)((uint)iVar15 >> 0x10));
          bVar86 = (byte)((uint)auVar40._12_4_ >> 0x18) &
                   ((byte)((uint)iVar94 >> 0x18) | (byte)((uint)iVar15 >> 0x18));
          fVar48 = (float)CONCAT13(bVar56,CONCAT12(bVar54,CONCAT11(bVar52,bVar50))) *
                   (float)CONCAT13(bVar56,CONCAT12(bVar54,CONCAT11(bVar52,bVar50)));
          fVar65 = (float)CONCAT13(bVar64,CONCAT12(bVar62,CONCAT11(bVar60,bVar58))) *
                   (float)CONCAT13(bVar64,CONCAT12(bVar62,CONCAT11(bVar60,bVar58)));
          fVar66 = (float)CONCAT13(bVar82,CONCAT12(bVar80,CONCAT11(bVar78,bVar76))) *
                   (float)CONCAT13(bVar82,CONCAT12(bVar80,CONCAT11(bVar78,bVar76)));
          fVar87 = fVar66 + fVar48 + fVar65;
          fVar66 = fVar66 + fVar48 + fVar65;
          uVar90 = CONCAT44(fVar66,fVar87);
          uVar96 = NEON_frsqrte(uVar90,4);
          fVar48 = (float)uVar96;
          fVar65 = (float)((ulong)uVar96 >> 0x20);
          uVar96 = NEON_frsqrts(uVar90,CONCAT44(fVar65 * fVar65,fVar48 * fVar48),4);
          fVar48 = fVar48 * (float)uVar96;
          fVar65 = fVar65 * (float)((ulong)uVar96 >> 0x20);
          uVar90 = NEON_frsqrts(uVar90,CONCAT44(fVar65 * fVar65,fVar48 * fVar48),4);
          iVar89 = -(uint)(fVar87 <= 0.0);
          iVar92 = -(uint)(fVar66 <= 0.0);
          auVar39._0_8_ =
               CONCAT44(-(uint)(fVar47 * fVar47 < fVar66),-(uint)(fVar46 * fVar46 < fVar87));
          fVar48 = (float)uVar90 * fVar48;
          fVar65 = (float)((ulong)uVar90 >> 0x20) * fVar65;
          auVar39._8_8_ = auVar39._0_8_;
          fVar48 = (float)CONCAT13((byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar89 >> 0x18),
                                   CONCAT12((byte)((uint)fVar48 >> 0x10) &
                                            ~(byte)((uint)iVar89 >> 0x10),
                                            CONCAT11((byte)((uint)fVar48 >> 8) &
                                                     ~(byte)((uint)iVar89 >> 8),
                                                     SUB41(fVar48,0) & ~(byte)iVar89)));
          fVar46 = fVar46 * fVar48;
          fVar47 = fVar47 * (float)(CONCAT17((byte)((uint)fVar65 >> 0x18) &
                                             ~(byte)((uint)iVar92 >> 0x18),
                                             CONCAT16((byte)((uint)fVar65 >> 0x10) &
                                                      ~(byte)((uint)iVar92 >> 0x10),
                                                      CONCAT15((byte)((uint)fVar65 >> 8) &
                                                               ~(byte)((uint)iVar92 >> 8),
                                                               CONCAT14(SUB41(fVar65,0) &
                                                                        ~(byte)iVar92,fVar48)))) >>
                                   0x20);
          auVar4._4_4_ = (float)CONCAT13(bVar64,CONCAT12(bVar62,CONCAT11(bVar60,bVar58))) * fVar47;
          auVar4._0_4_ = (float)CONCAT13(bVar56,CONCAT12(bVar54,CONCAT11(bVar52,bVar50))) * fVar46;
          auVar4._8_4_ = (float)CONCAT13(bVar82,CONCAT12(bVar80,CONCAT11(bVar78,bVar76))) * fVar46;
          auVar4._12_4_ = (float)CONCAT13(bVar86,CONCAT12(bVar85,CONCAT11(bVar84,bVar83))) * fVar47;
          auVar8[1] = bVar52;
          auVar8[0] = bVar50;
          auVar8[2] = bVar54;
          auVar8[3] = bVar56;
          auVar8[4] = bVar58;
          auVar8[5] = bVar60;
          auVar8[6] = bVar62;
          auVar8[7] = bVar64;
          auVar8[8] = bVar76;
          auVar8[9] = bVar78;
          auVar8[10] = bVar80;
          auVar8[0xb] = bVar82;
          auVar8[0xc] = bVar83;
          auVar8[0xd] = bVar84;
          auVar8[0xe] = bVar85;
          auVar8[0xf] = bVar86;
          auVar9[1] = bVar52;
          auVar9[0] = bVar50;
          auVar9[2] = bVar54;
          auVar9[3] = bVar56;
          auVar9[4] = bVar58;
          auVar9[5] = bVar60;
          auVar9[6] = bVar62;
          auVar9[7] = bVar64;
          auVar9[8] = bVar76;
          auVar9[9] = bVar78;
          auVar9[10] = bVar80;
          auVar9[0xb] = bVar82;
          auVar9[0xc] = bVar83;
          auVar9[0xd] = bVar84;
          auVar9[0xe] = bVar85;
          auVar9[0xf] = bVar86;
          auVar40 = auVar9 ^ (auVar8 ^ auVar4) & auVar39;
        }
        fVar48 = (float)*(undefined8 *)(lVar28 + 0xb8);
        fVar87 = (float)((ulong)*(undefined8 *)(lVar28 + 0xb8) >> 0x20);
        fVar46 = (float)*(undefined8 *)(lVar28 + 0xb0);
        fVar47 = (float)((ulong)*(undefined8 *)(lVar28 + 0xb0) >> 0x20);
        fVar29 = fVar29 + auVar43._0_4_ * fVar46;
        uVar49 = SUB41(fVar29,0);
        uVar51 = (undefined1)((uint)fVar29 >> 8);
        uVar53 = (undefined1)((uint)fVar29 >> 0x10);
        uVar55 = (undefined1)((uint)fVar29 >> 0x18);
        fVar30 = fVar30 + auVar43._4_4_ * fVar47;
        uVar57 = SUB41(fVar30,0);
        uVar59 = (undefined1)((uint)fVar30 >> 8);
        uVar61 = (undefined1)((uint)fVar30 >> 0x10);
        uVar63 = (undefined1)((uint)fVar30 >> 0x18);
        fVar65 = fVar35 + auVar43._8_4_ * fVar48;
        fVar66 = auVar43._12_4_ * fVar87 + 0.0;
        fVar34 = fVar34 + auVar40._0_4_ * fVar46;
        uVar67 = SUB41(fVar34,0);
        uVar68 = (undefined1)((uint)fVar34 >> 8);
        uVar69 = (undefined1)((uint)fVar34 >> 0x10);
        uVar70 = (undefined1)((uint)fVar34 >> 0x18);
        fVar32 = fVar32 + auVar40._4_4_ * fVar47;
        uVar71 = SUB41(fVar32,0);
        uVar72 = (undefined1)((uint)fVar32 >> 8);
        uVar73 = (undefined1)((uint)fVar32 >> 0x10);
        uVar74 = (undefined1)((uint)fVar32 >> 0x18);
        fVar33 = fVar33 + auVar40._8_4_ * fVar48;
        uVar75 = SUB41(fVar33,0);
        uVar77 = (undefined1)((uint)fVar33 >> 8);
        uVar79 = (undefined1)((uint)fVar33 >> 0x10);
        uVar81 = (undefined1)((uint)fVar33 >> 0x18);
        auVar18._2_12_ = auVar36._4_12_;
        auVar18._0_2_ = *(undefined2 *)((long)pfVar25 + 0x1e);
        auVar41._0_8_ = CONCAT44(auVar43._4_4_ + fVar30,auVar43._0_4_ + fVar29);
        auVar41._8_4_ = auVar43._8_4_ + fVar65;
        auVar41._12_4_ = auVar43._12_4_ + fVar66;
        auVar37._0_8_ = CONCAT44(auVar40._4_4_ + fVar32,auVar40._0_4_ + fVar34);
        auVar37._8_4_ = auVar40._8_4_ + fVar33;
        auVar36._12_4_ = auVar40._12_4_ + fVar35 + auVar40._12_4_ * fVar87;
        auVar36._0_12_ = auVar37;
        if ((float)(auVar18._0_4_ << 0x10) != 0.0) {
          lVar22 = param_6 + uVar21 * 0x70;
          fVar29 = *(float *)(lVar22 + 8);
          lVar24 = *(long *)(param_2 + 0x40);
          uVar1 = *(uint *)(lVar22 + 4) | 2;
          fVar30 = *(float *)(lVar28 + 0x90) * fVar29;
          fVar32 = *(float *)(lVar28 + 0x94) * fVar29;
          fVar34 = *(float *)(lVar28 + 0x98) * fVar29;
          fVar29 = *(float *)(lVar28 + 0x9c) * fVar29;
          auVar45 = auVar41;
          if ((*(uint *)(lVar24 + 0xb58) & uVar1) != 0) {
            lVar22 = 0;
            puVar23 = (undefined8 *)(lVar24 + 0xb68);
            uVar90 = auVar36._8_8_;
            fVar33 = (float)*(undefined8 *)(lVar28 + 0x40);
            fVar35 = (float)((ulong)*(undefined8 *)(lVar28 + 0x40) >> 0x20);
            auVar31._0_8_ = CONCAT44(fVar32 * fVar35,fVar30 * fVar33);
            auVar31._8_4_ = fVar34 * fVar33;
            auVar31._12_4_ = fVar29 * fVar35;
            uStack_68 = auVar31._8_8_;
            local_70 = auVar31._0_8_;
            do {
              if ((*(uint *)(puVar23 + -1) & uVar1) != 0) {
                (**(code **)(*(long *)*puVar23 + 0xa0))
                          ((long *)*puVar23,param_2,*(uint *)(pauVar26[1] + 8) & 0x7fffffff,
                           &local_70);
                auVar45._8_8_ = auVar41._8_8_;
                auVar45._0_8_ = auVar41._0_8_;
                auVar36._8_8_ = uVar90;
                auVar36._0_8_ = auVar37._0_8_;
              }
              lVar22 = lVar22 + 1;
              puVar23 = puVar23 + 2;
            } while (lVar22 < *(int *)(lVar24 + 0xb5c));
            fVar34 = (float)*(undefined8 *)(lVar28 + 0x38);
            fVar30 = fVar34 * (float)local_70;
            fVar29 = (float)((ulong)*(undefined8 *)(lVar28 + 0x38) >> 0x20);
            fVar32 = fVar29 * local_70._4_4_;
            fVar34 = fVar34 * (float)uStack_68;
            fVar29 = fVar29 * uStack_68._4_4_;
            auVar37 = auVar36._0_12_;
          }
          auVar41._0_4_ = auVar45._0_4_ + fVar30;
          auVar41._4_4_ = auVar45._4_4_ + fVar32;
          auVar41._8_4_ = auVar45._8_4_ + fVar34;
          auVar41._12_4_ = auVar45._12_4_ + fVar29;
        }
      }
      auVar16._8_8_ = uVar19;
      auVar16._0_8_ = uVar20;
      param_1 = a64_TBL(ZEXT816(0),auVar41,auVar16);
      auVar6[1] = uVar51;
      auVar6[0] = uVar49;
      auVar6[2] = uVar53;
      auVar6[3] = uVar55;
      auVar6[4] = uVar57;
      auVar6[5] = uVar59;
      auVar6[6] = uVar61;
      auVar6[7] = uVar63;
      auVar6._8_4_ = fVar65;
      auVar6._12_4_ = fVar66;
      auVar17._8_8_ = uVar19;
      auVar17._0_8_ = uVar20;
      auVar36 = a64_TBL(ZEXT816(0),auVar6,auVar17);
      iVar27 = iVar27 + 1;
      *(long *)(pfVar25 + 4) = auVar41._0_8_;
      auVar38._12_4_ = param_1._12_4_;
      auVar38._0_12_ = auVar37;
      *(long *)(pfVar25 + 2) = auVar38._8_8_;
      *(long *)pfVar25 = auVar37._0_8_;
      *(ulong *)pauVar26[1] =
           CONCAT17(uVar63,CONCAT16(uVar61,CONCAT15(uVar59,CONCAT14(uVar57,CONCAT13(uVar55,CONCAT12(
                                                  uVar53,CONCAT11(uVar51,uVar49)))))));
      *(ulong *)(*pauVar26 + 8) =
           CONCAT17(auVar36[0xf],
                    CONCAT16(auVar36[0xe],
                             CONCAT15(auVar36[0xd],
                                      CONCAT14(auVar36[0xc],
                                               CONCAT13(uVar81,CONCAT12(uVar79,CONCAT11(uVar77,
                                                  uVar75)))))));
      *(ulong *)*pauVar26 =
           CONCAT17(uVar74,CONCAT16(uVar73,CONCAT15(uVar72,CONCAT14(uVar71,CONCAT13(uVar70,CONCAT12(
                                                  uVar69,CONCAT11(uVar68,uVar67)))))));
      pauVar26 = pauVar26 + 2;
      pfVar25 = pfVar25 + 8;
    } while (iVar27 != param_5);
  }
  if (param_7 != 0) {
    puVar23 = *(undefined8 **)(param_7 + 8);
    uVar21 = (long)puVar23 + 0x17U & 0xfffffffffffffff8;
    if ((uVar21 <= *(ulong *)(param_7 + 0x10)) &&
       (*(ulong *)(param_7 + 8) = uVar21, puVar23 != (undefined8 *)0x0)) {
      *puVar23 = &DAT_0390f40e;
      uVar20 = nn::os::GetSystemTick();
      puVar23[1] = uVar20;
      param_1 = extraout_q0_00;
    }
  }
  return param_1;
}


