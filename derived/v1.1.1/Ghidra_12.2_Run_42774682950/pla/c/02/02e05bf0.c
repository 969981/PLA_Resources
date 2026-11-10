/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e05bf0; name: FUN_02e05bf0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02e05bf0(float *param_1,undefined8 *param_2,long param_3)

{
  undefined1 (*pauVar1) [16];
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 (*pauVar10) [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar15;
  float fVar16;
  undefined1 auVar14 [16];
  float fVar17;
  uint uVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  undefined1 auVar35 [12];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  undefined1 auVar42 [12];
  undefined1 auVar43 [12];
  float fVar46;
  undefined1 auVar44 [16];
  float fVar47;
  float fVar48;
  undefined1 auVar45 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar57;
  float fVar58;
  undefined1 auVar56 [16];
  float fVar59;
  float fVar60;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 auVar61 [16];
  float fVar65;
  float fVar66;
  float fVar68;
  float fVar69;
  undefined1 auVar67 [16];
  float fVar70;
  byte bVar71;
  undefined1 auVar72 [12];
  byte bVar74;
  byte bVar75;
  byte bVar76;
  undefined1 auVar73 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  undefined1 auVar84 [12];
  undefined1 auVar85 [16];
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  undefined1 auVar90 [16];
  ulong uVar91;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined8 uVar94;
  undefined8 uVar95;
  
  uVar18 = -(uint)(*(int *)(param_3 + 4) == 0);
  uVar2 = param_2[0x300];
  fVar63 = (float)(uVar2 >> 0x20);
  auVar49._0_8_ = param_2[0x100];
  auVar49._8_8_ = 0;
  uVar91 = param_2[0x140];
  auVar36 = NEON_ext(auVar49,auVar49,8,1);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar91;
  auVar37 = NEON_ext(auVar36,auVar4,8,1);
  uVar6 = param_2[0x340];
  fVar53 = (float)(uVar6 >> 0x20);
  auVar36._8_8_ = 0;
  auVar36._0_8_ = uVar2;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar2;
  auVar36 = NEON_ext(auVar36,auVar11,8,1);
  fVar13 = (float)(_DAT_03889f60 ^ (_DAT_03889f60 ^ _DAT_0388a450) & uVar18);
  fVar15 = (float)(_UNK_03889f64 ^ (_UNK_03889f64 ^ _UNK_0388a454) & uVar18);
  fVar16 = (float)(_UNK_03889f68 ^ (_UNK_03889f68 ^ _UNK_0388a458) & uVar18);
  fVar17 = (float)(_UNK_03889f6c ^ (_UNK_03889f6c ^ _UNK_0388a45c) & uVar18);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar6;
  auVar36 = NEON_ext(auVar36,auVar5,8,1);
  fVar41 = (float)*param_2;
  fVar68 = (float)param_2[0x200];
  fVar46 = (float)((ulong)*param_2 >> 0x20);
  fVar69 = (float)((ulong)param_2[0x200] >> 0x20);
  fVar47 = (float)param_2[0x40];
  fVar70 = (float)param_2[0x240];
  fVar48 = (float)((ulong)param_2[0x40] >> 0x20);
  fVar66 = (float)((ulong)param_2[0x240] >> 0x20);
  auVar36 = NEON_rev64(auVar36,4);
  pauVar10 = *(undefined1 (**) [16])(param_3 + 0x50);
  fVar64 = (float)param_2[0x80];
  fVar55 = (float)((ulong)param_2[0x80] >> 0x20);
  fVar60 = (float)(auVar49._0_8_ >> 0x20);
  fVar62 = (float)(uVar91 >> 0x20);
  fVar86 = auVar36._0_4_ * fVar13;
  fVar87 = auVar36._4_4_ * fVar15;
  fVar88 = auVar36._8_4_ * fVar16;
  fVar89 = auVar36._12_4_ * fVar17;
  auVar11 = NEON_rev64(auVar37,4);
  auVar14._0_4_ = fVar68 + fVar41 + (float)auVar49._0_8_ + (float)uVar2;
  auVar14._4_4_ = fVar69 + fVar46 + fVar60 + fVar63;
  auVar14._8_4_ = fVar70 + fVar47 + (float)uVar91 + (float)uVar6;
  auVar14._12_4_ = fVar66 + fVar48 + fVar62 + fVar53;
  auVar36 = *pauVar10;
  uVar95 = *(undefined8 *)(pauVar10[1] + 8);
  uVar94 = *(undefined8 *)pauVar10[1];
  fVar57 = (float)param_2[0xc0];
  fVar58 = (float)((ulong)param_2[0xc0] >> 0x20);
  auVar12._0_4_ = ((fVar68 + fVar41) - (float)auVar49._0_8_) - (float)uVar2;
  auVar12._4_4_ = ((fVar69 + fVar46) - fVar60) - fVar63;
  auVar12._8_4_ = ((fVar70 + fVar47) - (float)uVar91) - (float)uVar6;
  auVar12._12_4_ = ((fVar66 + fVar48) - fVar62) - fVar53;
  auVar67._0_8_ = param_2[0x180];
  auVar67._8_8_ = 0;
  auVar77._0_8_ = param_2[0x1c0];
  auVar77._8_8_ = 0;
  auVar50._0_4_ = ((fVar41 - auVar11._0_4_ * fVar13) - fVar68) + fVar86;
  auVar50._4_4_ = ((fVar46 - auVar11._4_4_ * fVar15) - fVar69) + fVar87;
  auVar50._8_4_ = ((fVar47 - auVar11._8_4_ * fVar16) - fVar70) + fVar88;
  auVar50._12_4_ = ((fVar48 - auVar11._12_4_ * fVar17) - fVar66) + fVar89;
  auVar92 = NEON_ext(auVar50,auVar14,8,1);
  uVar91 = param_2[0x3c0];
  uVar2 = param_2[0x380];
  fVar52 = (float)(uVar2 >> 0x20);
  auVar37 = NEON_ext(auVar67,auVar67,8,1);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar2;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar2;
  auVar90 = NEON_ext(auVar8,auVar9,8,1);
  auVar37 = NEON_ext(auVar37,auVar77,8,1);
  auVar37 = NEON_rev64(auVar37,4);
  fVar54 = (float)(uVar91 >> 0x20);
  fVar53 = (float)(auVar67._0_8_ >> 0x20);
  fVar65 = (float)(auVar77._0_8_ >> 0x20);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar91;
  auVar90 = NEON_ext(auVar90,auVar7,8,1);
  fVar60 = (float)param_2[0x280];
  fVar62 = (float)((ulong)param_2[0x280] >> 0x20);
  fVar63 = (float)param_2[0x2c0];
  fVar59 = (float)((ulong)param_2[0x2c0] >> 0x20);
  auVar92 = NEON_ext(auVar14,auVar92,8,1);
  bVar19 = (byte)_DAT_038891d0;
  bVar20 = (byte)((ulong)_DAT_038891d0 >> 8);
  bVar21 = (byte)((ulong)_DAT_038891d0 >> 0x10);
  bVar22 = (byte)((ulong)_DAT_038891d0 >> 0x18);
  fVar51 = (float)CONCAT13(auVar36[7] ^ bVar22,
                           CONCAT12(auVar36[6] ^ bVar21,
                                    CONCAT11(auVar36[5] ^ bVar20,auVar36[4] ^ bVar19)));
  bVar23 = (byte)((ulong)_DAT_038891d0 >> 0x20);
  bVar24 = (byte)((ulong)_DAT_038891d0 >> 0x28);
  bVar25 = (byte)((ulong)_DAT_038891d0 >> 0x30);
  bVar26 = (byte)((ulong)_DAT_038891d0 >> 0x38);
  auVar84._0_8_ =
       CONCAT17(auVar36[7] ^ bVar26,
                CONCAT16(auVar36[6] ^ bVar25,
                         CONCAT15(auVar36[5] ^ bVar24,CONCAT14(auVar36[4] ^ bVar23,fVar51))));
  bVar27 = (byte)_UNK_038891d8;
  auVar84[8] = auVar36[0xc] ^ bVar27;
  bVar28 = (byte)((ulong)_UNK_038891d8 >> 8);
  auVar84[9] = auVar36[0xd] ^ bVar28;
  bVar29 = (byte)((ulong)_UNK_038891d8 >> 0x10);
  auVar84[10] = auVar36[0xe] ^ bVar29;
  bVar30 = (byte)((ulong)_UNK_038891d8 >> 0x18);
  auVar84[0xb] = auVar36[0xf] ^ bVar30;
  bVar31 = (byte)((ulong)_UNK_038891d8 >> 0x20);
  auVar85[0xc] = auVar36[0xc] ^ bVar31;
  auVar85._0_12_ = auVar84;
  bVar32 = (byte)((ulong)_UNK_038891d8 >> 0x28);
  auVar85[0xd] = auVar36[0xd] ^ bVar32;
  bVar33 = (byte)((ulong)_UNK_038891d8 >> 0x30);
  auVar85[0xe] = auVar36[0xe] ^ bVar33;
  bVar34 = (byte)((ulong)_UNK_038891d8 >> 0x38);
  auVar85[0xf] = auVar36[0xf] ^ bVar34;
  auVar93 = NEON_rev64(auVar92,4);
  fVar80 = auVar36._0_4_ * auVar92._0_4_ + fVar51 * auVar93._0_4_;
  fVar81 = auVar36._0_4_ * auVar92._4_4_ + (float)((ulong)auVar84._0_8_ >> 0x20) * auVar93._4_4_;
  fVar82 = auVar36._8_4_ * auVar92._8_4_ + auVar84._8_4_ * auVar93._8_4_;
  fVar83 = auVar36._8_4_ * auVar92._12_4_ + auVar85._12_4_ * auVar93._12_4_;
  auVar78._0_4_ = fVar60 + fVar64 + (float)auVar67._0_8_ + (float)uVar2;
  auVar78._4_4_ = fVar62 + fVar55 + fVar53 + fVar52;
  auVar78._8_4_ = fVar63 + fVar57 + (float)auVar77._0_8_ + (float)uVar91;
  auVar78._12_4_ = fVar59 + fVar58 + fVar65 + fVar54;
  auVar36 = pauVar10[2];
  fVar51 = ((fVar60 + fVar64) - (float)auVar67._0_8_) - (float)uVar2;
  fVar52 = ((fVar62 + fVar55) - fVar53) - fVar52;
  fVar53 = ((fVar63 + fVar57) - (float)auVar77._0_8_) - (float)uVar91;
  fVar54 = ((fVar59 + fVar58) - fVar65) - fVar54;
  auVar90 = NEON_rev64(auVar90,4);
  auVar38._0_4_ = ((fVar41 + fVar13 * auVar11._0_4_) - fVar68) - fVar86;
  auVar38._4_4_ = ((fVar46 + fVar15 * auVar11._4_4_) - fVar69) - fVar87;
  auVar38._8_4_ = ((fVar47 + fVar16 * auVar11._8_4_) - fVar70) - fVar88;
  auVar38._12_4_ = ((fVar48 + fVar17 * auVar11._12_4_) - fVar66) - fVar89;
  fVar65 = auVar90._0_4_ * fVar13;
  fVar68 = auVar90._4_4_ * fVar15;
  fVar69 = auVar90._8_4_ * fVar16;
  fVar70 = auVar90._12_4_ * fVar17;
  fVar41 = (float)CONCAT13(auVar36[7] ^ bVar22,
                           CONCAT12(auVar36[6] ^ bVar21,
                                    CONCAT11(auVar36[5] ^ bVar20,auVar36[4] ^ bVar19)));
  auVar42._0_8_ =
       CONCAT17(auVar36[7] ^ bVar26,
                CONCAT16(auVar36[6] ^ bVar25,
                         CONCAT15(auVar36[5] ^ bVar24,CONCAT14(auVar36[4] ^ bVar23,fVar41))));
  auVar42[8] = auVar36[0xc] ^ bVar27;
  auVar42[9] = auVar36[0xd] ^ bVar28;
  auVar42[10] = auVar36[0xe] ^ bVar29;
  auVar42[0xb] = auVar36[0xf] ^ bVar30;
  auVar44[0xc] = auVar36[0xc] ^ bVar31;
  auVar44._0_12_ = auVar42;
  auVar44[0xd] = auVar36[0xd] ^ bVar32;
  auVar44[0xe] = auVar36[0xe] ^ bVar33;
  auVar44[0xf] = auVar36[0xf] ^ bVar34;
  auVar56._0_4_ = ((fVar64 - auVar37._0_4_ * fVar13) - fVar60) + fVar65;
  auVar56._4_4_ = ((fVar55 - auVar37._4_4_ * fVar15) - fVar62) + fVar68;
  auVar56._8_4_ = ((fVar57 - auVar37._8_4_ * fVar16) - fVar63) + fVar69;
  auVar56._12_4_ = ((fVar58 - auVar37._12_4_ * fVar17) - fVar59) + fVar70;
  auVar90 = NEON_ext(auVar56,auVar78,8,1);
  fVar65 = ((fVar64 + fVar13 * auVar37._0_4_) - fVar60) - fVar65;
  fVar68 = ((fVar55 + fVar15 * auVar37._4_4_) - fVar62) - fVar68;
  fVar69 = ((fVar57 + fVar16 * auVar37._8_4_) - fVar63) - fVar69;
  fVar70 = ((fVar58 + fVar17 * auVar37._12_4_) - fVar59) - fVar70;
  auVar11 = NEON_ext(auVar78,auVar78,8,1);
  auVar37 = NEON_ext(auVar78,auVar90,8,1);
  auVar11 = NEON_ext(auVar11,auVar56,8,1);
  auVar90 = NEON_rev64(auVar37,4);
  fVar60 = auVar37._0_4_ * auVar36._0_4_ + fVar41 * auVar90._0_4_;
  fVar62 = auVar37._4_4_ * auVar36._0_4_ + (float)((ulong)auVar42._0_8_ >> 0x20) * auVar90._4_4_;
  fVar63 = auVar37._8_4_ * auVar36._8_4_ + auVar42._8_4_ * auVar90._8_4_;
  fVar64 = auVar37._12_4_ * auVar36._8_4_ + auVar44._12_4_ * auVar90._12_4_;
  bVar71 = (byte)((ulong)uVar94 >> 0x20);
  bVar74 = (byte)((ulong)uVar94 >> 0x28);
  bVar75 = (byte)((ulong)uVar94 >> 0x30);
  bVar76 = (byte)((ulong)uVar94 >> 0x38);
  fVar41 = (float)CONCAT13(bVar76 ^ bVar22,
                           CONCAT12(bVar75 ^ bVar21,CONCAT11(bVar74 ^ bVar20,bVar71 ^ bVar19)));
  auVar72._0_8_ =
       CONCAT17(bVar76 ^ bVar26,
                CONCAT16(bVar75 ^ bVar25,CONCAT15(bVar74 ^ bVar24,CONCAT14(bVar71 ^ bVar23,fVar41)))
               );
  bVar71 = (byte)((ulong)uVar95 >> 0x20);
  auVar72[8] = bVar71 ^ bVar27;
  bVar74 = (byte)((ulong)uVar95 >> 0x28);
  auVar72[9] = bVar74 ^ bVar28;
  bVar75 = (byte)((ulong)uVar95 >> 0x30);
  auVar72[10] = bVar75 ^ bVar29;
  bVar76 = (byte)((ulong)uVar95 >> 0x38);
  auVar72[0xb] = bVar76 ^ bVar30;
  auVar73[0xc] = bVar71 ^ bVar31;
  auVar73._0_12_ = auVar72;
  auVar73[0xd] = bVar74 ^ bVar32;
  auVar73[0xe] = bVar75 ^ bVar33;
  auVar73[0xf] = bVar76 ^ bVar34;
  auVar36 = NEON_rev64(auVar11,4);
  fVar41 = (float)uVar94 * auVar78._0_4_ + fVar41 * auVar36._0_4_;
  fVar46 = (float)uVar94 * auVar78._4_4_ + (float)((ulong)auVar72._0_8_ >> 0x20) * auVar36._4_4_;
  fVar47 = (float)uVar95 * auVar56._0_4_ + auVar72._8_4_ * auVar36._8_4_;
  fVar48 = (float)uVar95 * auVar56._4_4_ + auVar73._12_4_ * auVar36._12_4_;
  fVar66 = fVar60 + fVar80;
  fVar86 = fVar62 + fVar81;
  fVar87 = fVar63 + fVar82;
  fVar88 = fVar64 + fVar83;
  auVar61._0_4_ = fVar80 - fVar60;
  auVar61._4_4_ = fVar81 - fVar62;
  auVar61._8_4_ = fVar82 - fVar63;
  auVar61._12_4_ = fVar83 - fVar64;
  auVar37._4_4_ = fVar52;
  auVar37._0_4_ = fVar51;
  auVar37._8_4_ = fVar53;
  auVar37._12_4_ = fVar54;
  auVar90._4_4_ = fVar52;
  auVar90._0_4_ = fVar51;
  auVar90._8_4_ = fVar53;
  auVar90._12_4_ = fVar54;
  auVar11 = NEON_ext(auVar37,auVar90,8,1);
  fVar55 = auVar14._0_4_ - fVar41;
  fVar57 = auVar14._4_4_ - fVar46;
  fVar58 = auVar50._0_4_ - fVar47;
  fVar59 = auVar50._4_4_ - fVar48;
  auVar92._4_4_ = fVar52;
  auVar92._0_4_ = fVar51;
  auVar92._8_4_ = fVar53;
  auVar92._12_4_ = fVar54;
  auVar79._4_4_ = fVar68;
  auVar79._0_4_ = fVar65;
  auVar79._8_4_ = fVar69;
  auVar79._12_4_ = fVar70;
  auVar37 = NEON_ext(auVar79,auVar92,8,1);
  fVar41 = fVar41 + auVar14._0_4_;
  fVar46 = fVar46 + auVar14._4_4_;
  fVar47 = fVar47 + auVar50._0_4_;
  fVar48 = fVar48 + auVar50._4_4_;
  auVar36 = NEON_rev64(auVar61,4);
  fVar60 = auVar36._0_4_ * -fVar13;
  fVar62 = auVar36._4_4_ * -fVar15;
  fVar63 = auVar36._8_4_ * -fVar16;
  fVar64 = auVar36._12_4_ * -fVar17;
  auVar93._4_4_ = fVar52;
  auVar93._0_4_ = fVar51;
  auVar93._8_4_ = fVar53;
  auVar93._12_4_ = fVar54;
  auVar79 = NEON_ext(auVar93,auVar37,8,1);
  auVar3._4_4_ = fVar68;
  auVar3._0_4_ = fVar65;
  auVar3._8_4_ = fVar69;
  auVar3._12_4_ = fVar70;
  auVar36 = NEON_ext(auVar11,auVar3,8,1);
  auVar11 = NEON_ext(auVar38,auVar12,8,1);
  auVar92 = NEON_ext(auVar12,auVar11,8,1);
  auVar93 = NEON_rev64(auVar92,4);
  auVar90 = NEON_rev64(auVar36,4);
  param_1[10] = fVar63 + fVar58;
  param_1[0xb] = fVar64 + fVar59;
  param_1[8] = fVar60 + fVar55;
  param_1[9] = fVar62 + fVar57;
  *(ulong *)(param_1 + 0x12) = CONCAT44(fVar48 - fVar88,fVar47 - fVar87);
  *(ulong *)(param_1 + 0x10) = CONCAT44(fVar46 - fVar86,fVar41 - fVar66);
  param_1[2] = fVar47 + fVar87;
  param_1[3] = fVar48 + fVar88;
  *param_1 = fVar41 + fVar66;
  param_1[1] = fVar46 + fVar86;
  param_1[0x1a] = fVar58 - fVar63;
  param_1[0x1b] = fVar59 - fVar64;
  param_1[0x18] = fVar55 - fVar60;
  param_1[0x19] = fVar57 - fVar62;
  pauVar1 = pauVar10 + 4;
  uVar95 = *(undefined8 *)(pauVar10[4] + 8);
  uVar94 = *(undefined8 *)*pauVar1;
  auVar42 = *(undefined1 (*) [12])*pauVar1;
  auVar36 = pauVar10[5];
  auVar11 = pauVar10[3];
  auVar37 = NEON_rev64(auVar79,4);
  fVar41 = (float)CONCAT13(auVar36[7] ^ bVar22,
                           CONCAT12(auVar36[6] ^ bVar21,
                                    CONCAT11(auVar36[5] ^ bVar20,auVar36[4] ^ bVar19)));
  auVar35._0_8_ =
       CONCAT17(auVar36[7] ^ bVar26,
                CONCAT16(auVar36[6] ^ bVar25,
                         CONCAT15(auVar36[5] ^ bVar24,CONCAT14(auVar36[4] ^ bVar23,fVar41))));
  auVar35[8] = auVar36[0xc] ^ bVar27;
  auVar35[9] = auVar36[0xd] ^ bVar28;
  auVar35[10] = auVar36[0xe] ^ bVar29;
  auVar35[0xb] = auVar36[0xf] ^ bVar30;
  auVar39[0xc] = auVar36[0xc] ^ bVar31;
  auVar39._0_12_ = auVar35;
  auVar39[0xd] = auVar36[0xd] ^ bVar32;
  auVar39[0xe] = auVar36[0xe] ^ bVar33;
  auVar39[0xf] = auVar36[0xf] ^ bVar34;
  fVar46 = (float)CONCAT13(auVar11[7] ^ bVar22,
                           CONCAT12(auVar11[6] ^ bVar21,
                                    CONCAT11(auVar11[5] ^ bVar20,auVar11[4] ^ bVar19)));
  auVar43._0_8_ =
       CONCAT17(auVar11[7] ^ bVar26,
                CONCAT16(auVar11[6] ^ bVar25,
                         CONCAT15(auVar11[5] ^ bVar24,CONCAT14(auVar11[4] ^ bVar23,fVar46))));
  auVar43[8] = auVar11[0xc] ^ bVar27;
  auVar43[9] = auVar11[0xd] ^ bVar28;
  auVar43[10] = auVar11[0xe] ^ bVar29;
  auVar43[0xb] = auVar11[0xf] ^ bVar30;
  auVar45[0xc] = auVar11[0xc] ^ bVar31;
  auVar45._0_12_ = auVar43;
  auVar45[0xd] = auVar11[0xd] ^ bVar32;
  auVar45[0xe] = auVar11[0xe] ^ bVar33;
  auVar45[0xf] = auVar11[0xf] ^ bVar34;
  fVar53 = auVar36._0_4_ * auVar79._0_4_ + fVar41 * auVar37._0_4_;
  fVar54 = auVar36._0_4_ * auVar79._4_4_ + (float)((ulong)auVar35._0_8_ >> 0x20) * auVar37._4_4_;
  fVar55 = auVar36._8_4_ * auVar79._8_4_ + auVar35._8_4_ * auVar37._8_4_;
  fVar57 = auVar36._8_4_ * auVar79._12_4_ + auVar39._12_4_ * auVar37._12_4_;
  fVar60 = auVar11._0_4_ * auVar92._0_4_ + fVar46 * auVar93._0_4_;
  fVar62 = auVar11._0_4_ * auVar92._4_4_ + (float)((ulong)auVar43._0_8_ >> 0x20) * auVar93._4_4_;
  fVar63 = auVar11._8_4_ * auVar92._8_4_ + auVar43._8_4_ * auVar93._8_4_;
  fVar64 = auVar11._8_4_ * auVar92._12_4_ + auVar45._12_4_ * auVar93._12_4_;
  fVar46 = (float)CONCAT13(auVar42[7] ^ bVar22,
                           CONCAT12(auVar42[6] ^ bVar21,
                                    CONCAT11(auVar42[5] ^ bVar20,auVar42[4] ^ bVar19)));
  bVar19 = (byte)((ulong)uVar95 >> 0x20);
  bVar20 = (byte)((ulong)uVar95 >> 0x28);
  bVar21 = (byte)((ulong)uVar95 >> 0x30);
  bVar22 = (byte)((ulong)uVar95 >> 0x38);
  fVar48 = (float)CONCAT13(bVar22 ^ bVar30,
                           CONCAT12(bVar21 ^ bVar29,CONCAT11(bVar20 ^ bVar28,bVar19 ^ bVar27)));
  fVar41 = SUB124(*(undefined1 (*) [12])*pauVar1,0) * fVar51 + fVar46 * auVar90._0_4_;
  fVar46 = SUB124(*(undefined1 (*) [12])*pauVar1,0) * fVar52 +
           (float)(CONCAT17((byte)((ulong)uVar94 >> 0x38) ^ bVar26,
                            CONCAT16((byte)((ulong)uVar94 >> 0x30) ^ bVar25,
                                     CONCAT15((byte)((ulong)uVar94 >> 0x28) ^ bVar24,
                                              CONCAT14((byte)((ulong)uVar94 >> 0x20) ^ bVar23,fVar46
                                                      )))) >> 0x20) * auVar90._4_4_;
  fVar47 = SUB124(*(undefined1 (*) [12])*pauVar1,8) * fVar65 + fVar48 * auVar90._8_4_;
  fVar48 = SUB124(*(undefined1 (*) [12])*pauVar1,8) * fVar68 +
           (float)(CONCAT17(bVar22 ^ bVar34,
                            CONCAT16(bVar21 ^ bVar33,
                                     CONCAT15(bVar20 ^ bVar32,CONCAT14(bVar19 ^ bVar31,fVar48)))) >>
                  0x20) * auVar90._12_4_;
  auVar40._0_4_ = fVar60 - fVar53;
  auVar40._4_4_ = fVar62 - fVar54;
  auVar40._8_4_ = fVar63 - fVar55;
  auVar40._12_4_ = fVar64 - fVar57;
  fVar53 = fVar53 + fVar60;
  fVar54 = fVar54 + fVar62;
  fVar55 = fVar55 + fVar63;
  fVar57 = fVar57 + fVar64;
  fVar60 = auVar12._0_4_ - fVar41;
  fVar62 = auVar12._4_4_ - fVar46;
  fVar63 = auVar38._0_4_ - fVar47;
  fVar64 = auVar38._4_4_ - fVar48;
  fVar41 = fVar41 + auVar12._0_4_;
  fVar46 = fVar46 + auVar12._4_4_;
  fVar47 = fVar47 + auVar38._0_4_;
  fVar48 = fVar48 + auVar38._4_4_;
  auVar36 = NEON_rev64(auVar40,4);
  fVar13 = auVar36._0_4_ * -fVar13;
  fVar15 = auVar36._4_4_ * -fVar15;
  fVar16 = auVar36._8_4_ * -fVar16;
  fVar17 = auVar36._12_4_ * -fVar17;
  param_1[6] = fVar47 + fVar55;
  param_1[7] = fVar48 + fVar57;
  param_1[4] = fVar41 + fVar53;
  param_1[5] = fVar46 + fVar54;
  param_1[0x16] = fVar47 - fVar55;
  param_1[0x17] = fVar48 - fVar57;
  param_1[0x14] = fVar41 - fVar53;
  param_1[0x15] = fVar46 - fVar54;
  param_1[0xe] = fVar16 + fVar63;
  param_1[0xf] = fVar17 + fVar64;
  param_1[0xc] = fVar13 + fVar60;
  param_1[0xd] = fVar15 + fVar62;
  param_1[0x1e] = fVar63 - fVar16;
  param_1[0x1f] = fVar64 - fVar17;
  param_1[0x1c] = fVar60 - fVar13;
  param_1[0x1d] = fVar62 - fVar15;
  return;
}


