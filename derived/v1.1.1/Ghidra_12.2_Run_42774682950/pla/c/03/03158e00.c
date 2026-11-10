/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03158e00; name: FUN_03158e00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_03158e00(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
            undefined8 *param_4,undefined8 *param_5,float *param_6,float *param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulong uVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  byte bVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  byte bVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  byte bVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  byte bVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  int iVar40;
  int iVar42;
  undefined1 auVar41 [16];
  float fVar43;
  undefined8 uVar44;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar45 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined8 uVar53;
  float fVar54;
  undefined8 uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  undefined1 auVar79 [16];
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  
  if (param_4 != param_5) {
    fVar39 = param_1._0_4_ - param_2._0_4_;
    fVar36 = param_1._4_4_ - param_2._4_4_;
    uVar23 = SUB41(fVar36,0);
    uVar26 = (undefined1)((uint)fVar36 >> 8);
    uVar29 = (undefined1)((uint)fVar36 >> 0x10);
    uVar32 = (undefined1)((uint)fVar36 >> 0x18);
    fVar35 = param_1._8_4_ - param_2._8_4_;
    fVar38 = param_1._12_4_ - param_2._12_4_;
    auVar41 = NEON_ext(param_3,param_3,4,1);
    auVar45[4] = uVar23;
    auVar45._0_4_ = fVar39;
    auVar45[5] = uVar26;
    auVar45[6] = uVar29;
    auVar45[7] = uVar32;
    auVar45._8_4_ = fVar35;
    auVar45._12_4_ = fVar38;
    auVar79[4] = uVar23;
    auVar79._0_4_ = fVar39;
    auVar79[5] = uVar26;
    auVar79[6] = uVar29;
    auVar79[7] = uVar32;
    auVar79._8_4_ = fVar35;
    auVar79._12_4_ = fVar38;
    auVar45 = NEON_ext(auVar45,auVar79,4,1);
    fVar8 = auVar45._0_4_ * param_3._0_4_ - fVar39 * auVar41._0_4_;
    fVar36 = auVar45._4_4_ * param_3._4_4_ - fVar36 * auVar41._4_4_;
    uVar24 = SUB41(fVar36,0);
    uVar27 = (undefined1)((uint)fVar36 >> 8);
    uVar30 = (undefined1)((uint)fVar36 >> 0x10);
    uVar33 = (undefined1)((uint)fVar36 >> 0x18);
    fVar36 = fVar39 * param_3._8_4_ - fVar35 * param_3._0_4_;
    fVar39 = (float)(CONCAT17(uVar32,CONCAT16(uVar29,CONCAT15(uVar26,CONCAT14(uVar23,fVar39)))) >>
                    0x20) * param_3._12_4_ - fVar38 * param_3._4_4_;
    auVar41[4] = uVar24;
    auVar41._0_4_ = fVar8;
    auVar41[5] = uVar27;
    auVar41[6] = uVar30;
    auVar41[7] = uVar33;
    auVar41._8_4_ = fVar36;
    auVar41._12_4_ = fVar39;
    auVar5[4] = uVar24;
    auVar5._0_4_ = fVar8;
    auVar5[5] = uVar27;
    auVar5[6] = uVar30;
    auVar5[7] = uVar33;
    auVar5._8_4_ = fVar36;
    auVar5._12_4_ = fVar39;
    auVar45 = NEON_ext(auVar41,auVar5,4,1);
    fVar43 = auVar45._0_4_;
    fVar46 = auVar45._4_4_;
    fVar39 = fVar8 * fVar8 + fVar43 * fVar43 + fVar46 * fVar46;
    fVar35 = fVar8 * fVar8 + fVar43 * fVar43 + fVar46 * fVar46;
    uVar23 = SUB41(fVar35,0);
    uVar26 = (undefined1)((uint)fVar35 >> 8);
    uVar29 = (undefined1)((uint)fVar35 >> 0x10);
    uVar32 = (undefined1)((uint)fVar35 >> 0x18);
    uVar44 = NEON_frsqrte(CONCAT17(uVar32,CONCAT16(uVar29,CONCAT15(uVar26,CONCAT14(uVar23,fVar39))))
                          ,4);
    fVar36 = (float)uVar44;
    fVar38 = (float)((ulong)uVar44 >> 0x20);
    uVar44 = NEON_frsqrts(CONCAT17(uVar32,CONCAT16(uVar29,CONCAT15(uVar26,CONCAT14(uVar23,fVar39))))
                          ,CONCAT44(fVar38 * fVar38,fVar36 * fVar36),4);
    fVar36 = fVar36 * (float)uVar44;
    fVar38 = fVar38 * (float)((ulong)uVar44 >> 0x20);
    iVar40 = -(uint)(fVar39 <= 0.0);
    iVar42 = -(uint)(fVar35 <= 0.0);
    uVar44 = NEON_frsqrts(CONCAT17(uVar32,CONCAT16(uVar29,CONCAT15(uVar26,CONCAT14(uVar23,fVar39))))
                          ,CONCAT44(fVar38 * fVar38,fVar36 * fVar36),4);
    fVar36 = (float)uVar44 * fVar36;
    fVar38 = (float)((ulong)uVar44 >> 0x20) * fVar38;
    bVar19 = SUB41(fVar36,0) & ~(byte)iVar40;
    bVar20 = (byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar40 >> 8);
    bVar21 = (byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10);
    bVar22 = (byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18);
    bVar25 = SUB41(fVar38,0) & ~(byte)iVar42;
    bVar28 = (byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar42 >> 8);
    bVar31 = (byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar42 >> 0x10);
    bVar34 = (byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18);
    fVar39 = (float)CONCAT13(bVar22,CONCAT12(bVar21,CONCAT11(bVar20,bVar19)));
    fVar43 = fVar43 * (float)CONCAT13(bVar22,CONCAT12(bVar21,CONCAT11(bVar20,bVar19)));
    fVar46 = fVar46 * (float)CONCAT13(bVar34,CONCAT12(bVar31,CONCAT11(bVar28,bVar25)));
    fVar47 = fVar8 * fVar39;
    fVar36 = fVar43 * param_2._0_4_;
    fVar35 = fVar46 * param_2._4_4_;
    uVar23 = (undefined1)((uint)fVar35 >> 8);
    uVar26 = (undefined1)((uint)fVar35 >> 0x10);
    uVar29 = (undefined1)((uint)fVar35 >> 0x18);
    fVar38 = fVar47 * param_2._8_4_;
    fVar39 = (float)(CONCAT17(uVar33,CONCAT16(uVar30,CONCAT15(uVar27,CONCAT14(uVar24,fVar8)))) >>
                    0x20) *
             (float)(CONCAT17(bVar34,CONCAT16(bVar31,CONCAT15(bVar28,CONCAT14(bVar25,fVar39)))) >>
                    0x20) * param_2._12_4_;
    auVar6[4] = SUB41(fVar35,0);
    auVar6._0_4_ = fVar36;
    auVar6[5] = uVar23;
    auVar6[6] = uVar26;
    auVar6[7] = uVar29;
    auVar6._8_4_ = fVar38;
    auVar6._12_4_ = fVar39;
    auVar7[4] = SUB41(fVar35,0);
    auVar7._0_4_ = fVar36;
    auVar7[5] = uVar23;
    auVar7[6] = uVar26;
    auVar7[7] = uVar29;
    auVar7._8_4_ = fVar38;
    auVar7._12_4_ = fVar39;
    auVar45 = NEON_ext(auVar6,auVar7,8,1);
    fVar50 = -(fVar36 + fVar35 + auVar45._0_4_);
    fVar39 = param_6[8];
    fVar8 = param_6[9];
    fVar36 = param_6[10];
    fVar35 = param_6[0xb];
    uVar55 = *(undefined8 *)(param_6 + 0xe);
    fVar37 = (float)uVar55;
    uVar44 = *(undefined8 *)(param_6 + 0xc);
    fVar15 = *param_6;
    fVar16 = param_6[1];
    fVar17 = param_6[2];
    fVar70 = param_6[3];
    fVar38 = param_6[4];
    fVar13 = param_6[5];
    fVar14 = param_6[6];
    uVar53 = uVar44;
    fVar59 = fVar39;
    fVar60 = fVar8;
    fVar62 = fVar36;
    fVar48 = fVar38;
    fVar49 = fVar13;
    fVar51 = fVar14;
    fVar52 = param_6[7];
    fVar64 = fVar15;
    fVar66 = fVar16;
    fVar68 = fVar17;
    do {
      fVar76 = (float)param_4[1];
      fVar71 = (float)*param_4;
      fVar73 = (float)((ulong)*param_4 >> 0x20);
      fVar84 = (float)param_4[3];
      fVar61 = (float)param_4[2];
      fVar63 = (float)((ulong)param_4[2] >> 0x20);
      fVar57 = (float)uVar53;
      fVar58 = (float)((ulong)uVar53 >> 0x20);
      fVar54 = (float)uVar55;
      fVar56 = (float)((ulong)uVar55 >> 0x20);
      fVar65 = fVar43 * (fVar59 * fVar76 + fVar48 * fVar73 + fVar57 + fVar64 * fVar71);
      fVar67 = fVar46 * (fVar60 * fVar76 + fVar49 * fVar73 + fVar58 + fVar66 * fVar71);
      fVar69 = fVar47 * (fVar62 * fVar76 + fVar51 * fVar73 + fVar54 + fVar68 * fVar71);
      fVar71 = fVar50 * (fVar35 * fVar76 + fVar52 * fVar73 + fVar56 + fVar70 * fVar71);
      auVar9._4_4_ = fVar67;
      auVar9._0_4_ = fVar65;
      auVar9._8_4_ = fVar69;
      auVar9._12_4_ = fVar71;
      auVar10._4_4_ = fVar67;
      auVar10._0_4_ = fVar65;
      auVar10._8_4_ = fVar69;
      auVar10._12_4_ = fVar71;
      auVar45 = NEON_ext(auVar9,auVar10,8,1);
      fVar73 = fVar43 * (fVar59 * fVar84 + fVar48 * fVar63 + fVar57 + fVar64 * fVar61);
      fVar76 = fVar46 * (fVar60 * fVar84 + fVar49 * fVar63 + fVar58 + fVar66 * fVar61);
      fVar71 = fVar47 * (fVar62 * fVar84 + fVar51 * fVar63 + fVar54 + fVar68 * fVar61);
      fVar69 = fVar50 * (fVar35 * fVar84 + fVar52 * fVar63 + fVar56 + fVar70 * fVar61);
      auVar11._4_4_ = fVar76;
      auVar11._0_4_ = fVar73;
      auVar11._8_4_ = fVar71;
      auVar11._12_4_ = fVar69;
      auVar12._4_4_ = fVar76;
      auVar12._0_4_ = fVar73;
      auVar12._8_4_ = fVar71;
      auVar12._12_4_ = fVar69;
      auVar79 = NEON_ext(auVar11,auVar12,8,1);
      fVar71 = fVar65 + fVar67 + auVar45._0_4_ + fVar50;
      fVar65 = fVar73 + fVar76 + auVar79._0_4_ + fVar50;
      if ((fVar71 < 0.0) && (fVar65 < 0.0)) {
        if (param_7 != (float *)0x0) {
          fVar51 = fVar43 + fVar43;
          fVar59 = fVar46 + fVar46;
          fVar66 = fVar47 + fVar47;
          fVar52 = (float)_DAT_03889a80 - fVar51 * fVar43;
          fVar64 = (float)((ulong)_DAT_03889a80 >> 0x20) - fVar59 * fVar43;
          fVar68 = (float)_UNK_03889a88 - fVar66 * fVar43;
          fVar43 = (float)((ulong)_UNK_03889a88 >> 0x20) - fVar43 * 0.0;
          fVar71 = (float)DAT_0388a140 - fVar51 * fVar46;
          fVar65 = (float)((ulong)DAT_0388a140 >> 0x20) - fVar59 * fVar46;
          fVar57 = (float)DAT_0388a148 - fVar66 * fVar46;
          fVar58 = (float)((ulong)DAT_0388a148 >> 0x20) - fVar46 * 0.0;
          fVar60 = (float)_DAT_03888d10 - fVar51 * fVar47;
          fVar62 = (float)((ulong)_DAT_03888d10 >> 0x20) - fVar59 * fVar47;
          fVar48 = (float)_UNK_03888d18 - fVar66 * fVar47;
          fVar49 = (float)((ulong)_UNK_03888d18 >> 0x20) - fVar47 * 0.0;
          fVar46 = (float)_DAT_0388a130;
          fVar47 = (float)_UNK_0388a138;
          uVar18 = (ulong)_UNK_0388a138 >> 0x20;
          fVar35 = (float)uVar44;
          fVar70 = (float)((ulong)uVar44 >> 0x20);
          fVar59 = fVar62 * fVar37 +
                   fVar65 * fVar70 +
                   ((float)((ulong)_DAT_0388a130 >> 0x20) - fVar59 * fVar50) + fVar64 * fVar35;
          param_7[2] = fVar48 * fVar17 + fVar68 * fVar15 + fVar57 * fVar16;
          param_7[3] = fVar49 * fVar17 + fVar43 * fVar15 + fVar58 * fVar16;
          *param_7 = fVar60 * fVar17 + fVar52 * fVar15 + fVar71 * fVar16;
          param_7[1] = fVar62 * fVar17 + fVar64 * fVar15 + fVar65 * fVar16;
          param_7[6] = fVar48 * fVar14 + fVar68 * fVar38 + fVar57 * fVar13;
          param_7[7] = fVar49 * fVar14 + fVar43 * fVar38 + fVar58 * fVar13;
          param_7[4] = fVar60 * fVar14 + fVar52 * fVar38 + fVar71 * fVar13;
          param_7[5] = fVar62 * fVar14 + fVar64 * fVar38 + fVar65 * fVar13;
          param_7[10] = fVar48 * fVar36 + fVar68 * fVar39 + fVar57 * fVar8;
          param_7[0xb] = fVar49 * fVar36 + fVar43 * fVar39 + fVar58 * fVar8;
          param_7[8] = fVar60 * fVar36 + fVar52 * fVar39 + fVar71 * fVar8;
          param_7[9] = fVar62 * fVar36 + fVar64 * fVar39 + fVar65 * fVar8;
          *(ulong *)(param_7 + 0xe) =
               CONCAT44(fVar49 * fVar37 +
                        fVar58 * fVar70 + ((float)uVar18 - fVar50 * 0.0) + fVar43 * fVar35,
                        fVar48 * fVar37 +
                        fVar57 * fVar70 + (fVar47 - fVar66 * fVar50) + fVar68 * fVar35);
          *(ulong *)(param_7 + 0xc) =
               CONCAT17((char)((uint)fVar59 >> 0x18),
                        CONCAT16((char)((uint)fVar59 >> 0x10),
                                 CONCAT15((char)((uint)fVar59 >> 8),
                                          CONCAT14(SUB41(fVar59,0),
                                                   fVar60 * fVar37 +
                                                   fVar71 * fVar70 +
                                                   (fVar46 - fVar51 * fVar50) + fVar52 * fVar35))));
        }
        return 1;
      }
      if ((0.0 <= fVar71) && (0.0 <= fVar65)) {
        return 0;
      }
      fVar73 = (float)param_4[7];
      fVar71 = (float)param_4[6];
      fVar65 = (float)((ulong)param_4[6] >> 0x20);
      fVar78 = (float)param_4[9];
      fVar84 = (float)param_4[8];
      fVar74 = (float)((ulong)param_4[8] >> 0x20);
      fVar81 = fVar64 * fVar84;
      fVar82 = fVar66 * fVar84;
      fVar83 = fVar68 * fVar84;
      fVar84 = fVar70 * fVar84;
      fVar72 = fVar59 * fVar78;
      fVar75 = fVar60 * fVar78;
      fVar77 = fVar62 * fVar78;
      fVar78 = fVar35 * fVar78;
      puVar1 = param_4 + 10;
      puVar4 = param_4 + 0xb;
      puVar2 = param_4 + 0xc;
      puVar3 = param_4 + 0xd;
      param_4 = param_4 + 0x12;
      fVar90 = (float)*puVar2;
      fVar87 = fVar64 * fVar90;
      fVar88 = fVar66 * fVar90;
      fVar89 = fVar68 * fVar90;
      fVar90 = fVar70 * fVar90;
      fVar63 = (float)*puVar1;
      fVar76 = fVar64 * fVar63;
      fVar69 = fVar66 * fVar63;
      fVar61 = fVar68 * fVar63;
      fVar63 = fVar70 * fVar63;
      fVar64 = fVar59 * fVar73 + fVar64 * fVar71 + fVar48 * fVar65;
      fVar66 = fVar60 * fVar73 + fVar66 * fVar71 + fVar49 * fVar65;
      fVar68 = fVar62 * fVar73 + fVar68 * fVar71 + fVar51 * fVar65;
      fVar70 = fVar35 * fVar73 + fVar70 * fVar71 + fVar52 * fVar65;
      fVar85 = (float)((ulong)*puVar1 >> 0x20);
      fVar80 = (float)((ulong)*puVar2 >> 0x20);
      fVar86 = (float)*puVar4;
      fVar67 = (float)*puVar3;
      fVar71 = fVar59 * fVar67;
      fVar65 = fVar60 * fVar67;
      fVar73 = fVar62 * fVar67;
      fVar67 = fVar35 * fVar67;
      fVar59 = fVar59 * fVar86 + fVar76 + fVar48 * fVar85;
      fVar60 = fVar60 * fVar86 + fVar69 + fVar49 * fVar85;
      fVar62 = fVar62 * fVar86 + fVar61 + fVar51 * fVar85;
      fVar35 = fVar35 * fVar86 + fVar63 + fVar52 * fVar85;
      uVar53 = CONCAT44(fVar65 + fVar49 * fVar80 + fVar58 + fVar88,
                        fVar71 + fVar48 * fVar80 + fVar57 + fVar87);
      uVar55 = CONCAT44(fVar67 + fVar52 * fVar80 + fVar56 + fVar90,
                        fVar73 + fVar51 * fVar80 + fVar54 + fVar89);
      fVar48 = fVar72 + fVar81 + fVar48 * fVar74;
      fVar49 = fVar75 + fVar82 + fVar49 * fVar74;
      fVar51 = fVar77 + fVar83 + fVar51 * fVar74;
      fVar52 = fVar78 + fVar84 + fVar52 * fVar74;
    } while (param_4 != param_5);
  }
  return 0;
}


