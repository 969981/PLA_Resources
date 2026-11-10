/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0026f514; name: FUN_0026f514
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_0026f514(float param_1,undefined8 *param_2,undefined8 *param_3,long param_4,undefined8 param_5,
            undefined8 param_6,long param_7)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
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
  undefined8 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  long lVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined4 uVar40;
  float fVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
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
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  undefined1 uVar83;
  byte bVar84;
  undefined1 uVar85;
  byte bVar86;
  undefined1 uVar87;
  byte bVar88;
  undefined1 uVar89;
  byte bVar90;
  undefined1 uVar91;
  byte bVar92;
  undefined1 uVar93;
  byte bVar94;
  undefined1 uVar95;
  byte bVar96;
  undefined1 uVar97;
  byte bVar98;
  undefined1 uVar99;
  byte bVar100;
  undefined1 uVar101;
  byte bVar102;
  undefined1 uVar103;
  byte bVar104;
  undefined1 uVar105;
  undefined8 uVar106;
  undefined8 uVar107;
  undefined8 uVar108;
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined8 uVar111;
  undefined8 uVar112;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  float local_48;
  float local_44;
  
  lVar36 = *(long *)(param_4 + 0xa0);
  fVar47 = *(float *)(param_7 + 0x90);
  fVar41 = *(float *)(param_7 + 0x94);
  fVar64 = *(float *)(param_7 + 0x98);
  fVar38 = *(float *)(lVar36 + 0x85c);
  fVar39 = *(float *)(lVar36 + 0x860);
  fVar10 = *(float *)(lVar36 + 0x864);
  if (*(char *)(lVar36 + 0x83a) == '\x01') {
    uVar40 = *(undefined4 *)(lVar36 + 0x844);
    if (*(char *)(lVar36 + 0x839) == '\0') goto LAB_0026f5b0;
LAB_0026f58c:
    fVar45 = *(float *)PTR_FloatPi_04372db0 * param_1 + *(float *)PTR_FloatPi_04372db0 * param_1;
  }
  else {
    uVar40 = *(undefined4 *)(lVar36 + 0x840);
    if (*(char *)(lVar36 + 0x839) != '\0') goto LAB_0026f58c;
LAB_0026f5b0:
    fVar45 = *(float *)(lVar36 + 0x848);
  }
  FUN_00271330(uVar40,fVar45,lVar36 + 0x838,param_4 + 0xa8,&local_44,&local_48);
  if (*(char *)(lVar36 + 0x83a) != '\x01') {
    fVar45 = (float)*(uint *)(param_4 + 0xac) * 2.3283064e-10;
    fVar45 = fVar45 + fVar45 + -1.0;
    uVar53 = SUB41(fVar45,0);
    uVar54 = (undefined1)((uint)fVar45 >> 8);
    uVar55 = (undefined1)((uint)fVar45 >> 0x10);
    uVar56 = (undefined1)((uint)fVar45 >> 0x18);
    *(uint *)(param_4 + 0xac) = *(uint *)(param_4 + 0xac) * 0x41c64e6d + 0x3039;
    goto LAB_0026f730;
  }
  fVar45 = *(float *)(lVar36 + 0x844);
  fVar46 = 0.5;
  if (fVar45 < 0.0) {
    fVar46 = -0.5;
  }
  fVar45 = fVar45 - *(float *)PTR_Float2Pi_04372d30 *
                    (float)(int)(fVar46 + fVar45 * *(float *)PTR_Float1Divided2Pi_04372d20);
  if (fVar45 <= *(float *)PTR_FloatPiDivided2_04372d38) {
    if (fVar45 < -*(float *)PTR_FloatPiDivided2_04372d38) {
      fVar46 = -*(float *)PTR_FloatPi_04372cf0;
      goto LAB_0026f6b0;
    }
    fVar46 = 1.0;
  }
  else {
    fVar46 = *(float *)PTR_FloatPi_04372cf0;
LAB_0026f6b0:
    fVar45 = fVar46 - fVar45;
    fVar46 = -1.0;
  }
  fVar45 = fVar45 * fVar45;
  fVar48 = *(float *)PTR_CosCoefficients_04372d40;
  fVar37 = *(float *)(PTR_CosCoefficients_04372d40 + 4);
  fVar66 = *(float *)(PTR_CosCoefficients_04372d40 + 8);
  fVar65 = *(float *)(PTR_CosCoefficients_04372d40 + 0xc);
  fVar68 = *(float *)(PTR_CosCoefficients_04372d40 + 0x10);
  uVar1 = *(uint *)(param_4 + 0xac);
  *(uint *)(param_4 + 0xac) = uVar1 * 0x41c64e6d + 0x3039;
  fVar45 = (float)uVar1 * -2.3283064e-10 *
           (1.0 - fVar46 * (fVar45 * (fVar45 * (fVar65 + fVar45 * (fVar45 * (fVar37 - fVar48 * 
                                                  fVar45) - fVar66)) - fVar68) + 1.0)) + 1.0;
  uVar53 = SUB41(fVar45,0);
  uVar54 = (undefined1)((uint)fVar45 >> 8);
  uVar55 = (undefined1)((uint)fVar45 >> 0x10);
  uVar56 = (undefined1)((uint)fVar45 >> 0x18);
LAB_0026f730:
  fVar45 = 1.0 - (float)CONCAT13(uVar56,CONCAT12(uVar55,CONCAT11(uVar54,uVar53))) *
                 (float)CONCAT13(uVar56,CONCAT12(uVar55,CONCAT11(uVar54,uVar53)));
  if (fVar45 <= 0.0) {
    fVar46 = 0.0;
  }
  else {
    fVar46 = SQRT(fVar45);
    if (NAN(fVar46)) {
      fVar46 = sqrtf(fVar45);
    }
  }
  fVar48 = 0.0;
  fVar68 = 0.0;
  fVar66 = 0.0;
  fVar37 = 0.0;
  local_44 = fVar46 * local_44;
  fVar46 = fVar46 * local_48;
  fVar45 = (float)CONCAT13(uVar56,CONCAT12(uVar55,CONCAT11(uVar54,uVar53)));
  fVar65 = 0.0;
  if (*(char *)(lVar36 + 0x83a) == '\x01') {
    fVar49 = (float)((ulong)DAT_0388a148 >> 0x20);
    fVar44 = (float)((ulong)DAT_0388a140 >> 0x20);
    switch(*(undefined1 *)(lVar36 + 0x83e)) {
    case 0:
      fVar68 = (float)_UNK_03889a88;
      fVar48 = (float)((ulong)_UNK_03889a88 >> 0x20);
      fVar37 = (float)_DAT_03889a80;
      fVar66 = (float)((ulong)_DAT_03889a80 >> 0x20);
    default:
      break;
    case 1:
      fVar37 = (float)_DAT_03888db0;
      fVar66 = (float)((ulong)_DAT_03888db0 >> 0x20);
      fVar68 = (float)_UNK_03888db8;
      fVar48 = (float)((ulong)_UNK_03888db8 >> 0x20);
      break;
    case 2:
      fVar37 = (float)DAT_0388a140;
      fVar66 = fVar44;
      fVar68 = (float)DAT_0388a148;
      fVar48 = fVar49;
      break;
    case 3:
      fVar37 = (float)_DAT_03889fd0;
      fVar66 = (float)((ulong)_DAT_03889fd0 >> 0x20);
      fVar68 = (float)_UNK_03889fd8;
      fVar48 = (float)((ulong)_UNK_03889fd8 >> 0x20);
      break;
    case 4:
      fVar68 = (float)_UNK_03888d18;
      fVar48 = (float)((ulong)_UNK_03888d18 >> 0x20);
      fVar37 = (float)_DAT_03888d10;
      fVar66 = (float)((ulong)_DAT_03888d10 >> 0x20);
      break;
    case 5:
      fVar68 = (float)_UNK_03888d28;
      fVar48 = (float)((ulong)_UNK_03888d28 >> 0x20);
      fVar37 = (float)_DAT_03888d20;
      fVar66 = (float)((ulong)_DAT_03888d20 >> 0x20);
    }
    if (((fVar68 != 0.0) || (fVar37 != 0.0)) || (fVar66 != 1.0)) {
      uVar53 = (undefined1)DAT_0388a148;
      uVar54 = (undefined1)((ulong)DAT_0388a148 >> 8);
      uVar55 = (undefined1)((ulong)DAT_0388a148 >> 0x10);
      uVar56 = (undefined1)((ulong)DAT_0388a148 >> 0x18);
      uVar57 = (undefined1)((ulong)DAT_0388a148 >> 0x20);
      uVar58 = (undefined1)((ulong)DAT_0388a148 >> 0x28);
      uVar59 = (undefined1)((ulong)DAT_0388a148 >> 0x30);
      uVar61 = (undefined1)((ulong)DAT_0388a148 >> 0x38);
      auVar113[8] = uVar53;
      auVar113._0_8_ = DAT_0388a140;
      auVar113[9] = uVar54;
      auVar113[10] = uVar55;
      auVar113[0xb] = uVar56;
      auVar113[0xc] = uVar57;
      auVar113[0xd] = uVar58;
      auVar113[0xe] = uVar59;
      auVar113[0xf] = uVar61;
      uVar43 = a64_TBL(ZEXT816(0),auVar113,DAT_0388a880);
      auVar2[8] = uVar53;
      auVar2._0_8_ = DAT_0388a140;
      auVar2[9] = uVar54;
      auVar2[10] = uVar55;
      auVar2[0xb] = uVar56;
      auVar2[0xc] = uVar57;
      auVar2[0xd] = uVar58;
      auVar2[0xe] = uVar59;
      auVar2[0xf] = uVar61;
      uVar27 = a64_TBL(ZEXT816(0),auVar2,DAT_0388a6f0);
      auVar32._4_4_ = fVar66;
      auVar32._0_4_ = fVar37;
      auVar32._8_4_ = fVar68;
      auVar32._12_4_ = fVar48;
      uVar106 = a64_TBL(ZEXT816(0),auVar32,DAT_0388a680);
      auVar33._4_4_ = fVar66;
      auVar33._0_4_ = fVar37;
      auVar33._8_4_ = fVar68;
      auVar33._12_4_ = fVar48;
      uVar111 = a64_TBL(ZEXT816(0),auVar33,DAT_0388a6d8);
      auVar3[8] = uVar53;
      auVar3._0_8_ = DAT_0388a140;
      auVar3[9] = uVar54;
      auVar3[10] = uVar55;
      auVar3[0xb] = uVar56;
      auVar3[0xc] = uVar57;
      auVar3[0xd] = uVar58;
      auVar3[0xe] = uVar59;
      auVar3[0xf] = uVar61;
      uVar107 = a64_TBL(ZEXT816(0),auVar3,DAT_0388a6d8);
      auVar34._4_4_ = fVar66;
      auVar34._0_4_ = fVar37;
      auVar34._8_4_ = fVar68;
      auVar34._12_4_ = fVar48;
      uVar112 = a64_TBL(ZEXT816(0),auVar34,DAT_0388a6f0);
      auVar4[8] = uVar53;
      auVar4._0_8_ = DAT_0388a140;
      auVar4[9] = uVar54;
      auVar4[10] = uVar55;
      auVar4[0xb] = uVar56;
      auVar4[0xc] = uVar57;
      auVar4[0xd] = uVar58;
      auVar4[0xe] = uVar59;
      auVar4[0xf] = uVar61;
      uVar42 = a64_TBL(ZEXT816(0),auVar4,DAT_0388a680);
      fVar65 = fVar37 * (float)DAT_0388a140;
      fVar44 = fVar66 * fVar44;
      uVar53 = (undefined1)((uint)fVar44 >> 8);
      uVar54 = (undefined1)((uint)fVar44 >> 0x10);
      uVar55 = (undefined1)((uint)fVar44 >> 0x18);
      fVar50 = fVar68 * (float)DAT_0388a148;
      uVar56 = (undefined1)((uint)fVar50 >> 8);
      uVar57 = (undefined1)((uint)fVar50 >> 0x10);
      uVar58 = (undefined1)((uint)fVar50 >> 0x18);
      fVar49 = fVar48 * fVar49;
      uVar59 = (undefined1)((uint)fVar49 >> 8);
      uVar61 = (undefined1)((uint)fVar49 >> 0x10);
      uVar62 = (undefined1)((uint)fVar49 >> 0x18);
      auVar35._4_4_ = fVar66;
      auVar35._0_4_ = fVar37;
      auVar35._8_4_ = fVar68;
      auVar35._12_4_ = fVar48;
      uVar108 = a64_TBL(ZEXT816(0),auVar35,DAT_0388a880);
      auVar5[4] = SUB41(fVar44,0);
      auVar5._0_4_ = fVar65;
      auVar5[5] = uVar53;
      auVar5[6] = uVar54;
      auVar5[7] = uVar55;
      auVar5[8] = SUB41(fVar50,0);
      auVar5[9] = uVar56;
      auVar5[10] = uVar57;
      auVar5[0xb] = uVar58;
      auVar5[0xc] = SUB41(fVar49,0);
      auVar5[0xd] = uVar59;
      auVar5[0xe] = uVar61;
      auVar5[0xf] = uVar62;
      auVar6[4] = SUB41(fVar44,0);
      auVar6._0_4_ = fVar65;
      auVar6[5] = uVar53;
      auVar6[6] = uVar54;
      auVar6[7] = uVar55;
      auVar6[8] = SUB41(fVar50,0);
      auVar6[9] = uVar56;
      auVar6[10] = uVar57;
      auVar6[0xb] = uVar58;
      auVar6[0xc] = SUB41(fVar49,0);
      auVar6[0xd] = uVar59;
      auVar6[0xe] = uVar61;
      auVar6[0xf] = uVar62;
      auVar113 = NEON_ext(auVar5,auVar6,8,1);
      fVar65 = auVar113._0_4_ + fVar65;
      fVar44 = auVar113._4_4_ + fVar44;
      fVar37 = fVar65 + fVar44;
      fVar65 = fVar65 + fVar44;
      auVar113 = NEON_fmov(0x3f800000,4);
      fVar66 = fVar37 + auVar113._0_4_;
      fVar68 = fVar65 + auVar113._4_4_;
      fVar48 = fVar37 + auVar113._8_4_;
      fVar65 = (float)CONCAT13((char)((uint)fVar65 >> 0x18),
                               CONCAT12((char)((uint)fVar65 >> 0x10),
                                        (short)(CONCAT15((char)((uint)fVar65 >> 8),
                                                         CONCAT14(SUB41(fVar65,0),fVar37)) >> 0x20))
                              ) + auVar113._12_4_;
      fVar37 = *(float *)PTR_FloatUlp_04372e58;
      auVar109._0_4_ = -(uint)(fVar66 <= fVar37);
      auVar109._4_4_ = -(uint)(fVar68 <= fVar37);
      auVar109._8_4_ = -(uint)(fVar48 <= fVar37);
      auVar109._12_4_ = -(uint)(fVar65 <= fVar37);
      fVar66 = ((float)uVar43 * (float)uVar106 - (float)uVar42 * (float)uVar108) /
               SQRT(fVar66 + fVar66);
      fVar68 = ((float)((ulong)uVar43 >> 0x20) * (float)((ulong)uVar106 >> 0x20) -
               (float)((ulong)uVar42 >> 0x20) * (float)((ulong)uVar108 >> 0x20)) /
               SQRT(fVar68 + fVar68);
      fVar48 = ((float)uVar27 * (float)uVar111 - (float)uVar107 * (float)uVar112) /
               SQRT(fVar48 + fVar48);
      fVar37 = SQRT(fVar65 + fVar65) * 0.5;
      auVar7[8] = (char)_UNK_03889a88;
      auVar7._0_8_ = _DAT_03889a80;
      auVar7[9] = (char)((ulong)_UNK_03889a88 >> 8);
      auVar7[10] = (char)((ulong)_UNK_03889a88 >> 0x10);
      auVar7[0xb] = (char)((ulong)_UNK_03889a88 >> 0x18);
      auVar7[0xc] = (char)((ulong)_UNK_03889a88 >> 0x20);
      auVar7[0xd] = (char)((ulong)_UNK_03889a88 >> 0x28);
      auVar7[0xe] = (char)((ulong)_UNK_03889a88 >> 0x30);
      auVar7[0xf] = (char)((ulong)_UNK_03889a88 >> 0x38);
      auVar11._4_4_ = fVar68;
      auVar11._0_4_ = fVar66;
      auVar11._8_4_ = fVar48;
      auVar11._12_4_ = fVar37;
      auVar110._4_4_ = fVar68;
      auVar110._0_4_ = fVar66;
      auVar110._8_4_ = fVar48;
      auVar110._12_4_ = fVar37;
      auVar110 = auVar110 ^ (auVar11 ^ auVar7) & auVar109;
      bVar78 = auVar110[0] & (byte)_DAT_038897c0;
      bVar79 = auVar110[1] & (byte)((ulong)_DAT_038897c0 >> 8);
      bVar80 = auVar110[2] & (byte)((ulong)_DAT_038897c0 >> 0x10);
      bVar81 = auVar110[3] & (byte)((ulong)_DAT_038897c0 >> 0x18);
      bVar82 = auVar110[4] & (byte)((ulong)_DAT_038897c0 >> 0x20);
      bVar84 = auVar110[5] & (byte)((ulong)_DAT_038897c0 >> 0x28);
      bVar86 = auVar110[6] & (byte)((ulong)_DAT_038897c0 >> 0x30);
      bVar88 = auVar110[7] & (byte)((ulong)_DAT_038897c0 >> 0x38);
      bVar90 = auVar110[8] & (byte)_UNK_038897c8;
      bVar92 = auVar110[9] & (byte)((ulong)_UNK_038897c8 >> 8);
      bVar94 = auVar110[10] & (byte)((ulong)_UNK_038897c8 >> 0x10);
      bVar96 = auVar110[0xb] & (byte)((ulong)_UNK_038897c8 >> 0x18);
      bVar98 = auVar110[0xc] & (byte)((ulong)_UNK_038897c8 >> 0x20);
      bVar100 = auVar110[0xd] & (byte)((ulong)_UNK_038897c8 >> 0x28);
      bVar102 = auVar110[0xe] & (byte)((ulong)_UNK_038897c8 >> 0x30);
      bVar104 = auVar110[0xf] & (byte)((ulong)_UNK_038897c8 >> 0x38);
      uVar43 = NEON_ext(CONCAT17(bVar88,CONCAT16(bVar86,CONCAT15(bVar84,CONCAT14(bVar82,CONCAT13(
                                                  bVar81,CONCAT12(bVar80,CONCAT11(bVar79,bVar78)))))
                                                )),
                        CONCAT17(bVar88,CONCAT16(bVar86,CONCAT15(bVar84,CONCAT14(bVar82,CONCAT13(
                                                  bVar81,CONCAT12(bVar80,CONCAT11(bVar79,bVar78)))))
                                                )),4,1);
      auVar18[1] = bVar79;
      auVar18[0] = bVar78;
      auVar18[2] = bVar80;
      auVar18[3] = bVar81;
      auVar18[4] = bVar82;
      auVar18[5] = bVar84;
      auVar18[6] = bVar86;
      auVar18[7] = bVar88;
      auVar18[8] = bVar90;
      auVar18[9] = bVar92;
      auVar18[10] = bVar94;
      auVar18[0xb] = bVar96;
      auVar18[0xc] = bVar98;
      auVar18[0xd] = bVar100;
      auVar18[0xe] = bVar102;
      auVar18[0xf] = bVar104;
      uVar27 = a64_TBL(ZEXT816(0),auVar18,DAT_0388a6f0);
      fVar72 = (float)uVar27;
      fVar74 = (float)((ulong)uVar27 >> 0x20);
      auVar19[1] = bVar79;
      auVar19[0] = bVar78;
      auVar19[2] = bVar80;
      auVar19[3] = bVar81;
      auVar19[4] = bVar82;
      auVar19[5] = bVar84;
      auVar19[6] = bVar86;
      auVar19[7] = bVar88;
      auVar19[8] = bVar90;
      auVar19[9] = bVar92;
      auVar19[10] = bVar94;
      auVar19[0xb] = bVar96;
      auVar19[0xc] = bVar98;
      auVar19[0xd] = bVar100;
      auVar19[0xe] = bVar102;
      auVar19[0xf] = bVar104;
      uVar27 = a64_TBL(ZEXT816(0),auVar19,DAT_0388a5e0);
      fVar69 = (float)((ulong)uVar27 >> 0x20);
      auVar20[1] = bVar79;
      auVar20[0] = bVar78;
      auVar20[2] = bVar80;
      auVar20[3] = bVar81;
      auVar20[4] = bVar82;
      auVar20[5] = bVar84;
      auVar20[6] = bVar86;
      auVar20[7] = bVar88;
      auVar20[8] = bVar90;
      auVar20[9] = bVar92;
      auVar20[10] = bVar94;
      auVar20[0xb] = bVar96;
      auVar20[0xc] = bVar98;
      auVar20[0xd] = bVar100;
      auVar20[0xe] = bVar102;
      auVar20[0xf] = bVar104;
      uVar107 = a64_TBL(ZEXT816(0),auVar20,DAT_0388a6d8);
      auVar21[1] = bVar79;
      auVar21[0] = bVar78;
      auVar21[2] = bVar80;
      auVar21[3] = bVar81;
      auVar21[4] = bVar82;
      auVar21[5] = bVar84;
      auVar21[6] = bVar86;
      auVar21[7] = bVar88;
      auVar21[8] = bVar90;
      auVar21[9] = bVar92;
      auVar21[10] = bVar94;
      auVar21[0xb] = bVar96;
      auVar21[0xc] = bVar98;
      auVar21[0xd] = bVar100;
      auVar21[0xe] = bVar102;
      auVar21[0xf] = bVar104;
      uVar42 = a64_TBL(ZEXT816(0),auVar21,DAT_0388a880);
      auVar22[1] = bVar79;
      auVar22[0] = bVar78;
      auVar22[2] = bVar80;
      auVar22[3] = bVar81;
      auVar22[4] = bVar82;
      auVar22[5] = bVar84;
      auVar22[6] = bVar86;
      auVar22[7] = bVar88;
      auVar22[8] = bVar90;
      auVar22[9] = bVar92;
      auVar22[10] = bVar94;
      auVar22[0xb] = bVar96;
      auVar22[0xc] = bVar98;
      auVar22[0xd] = bVar100;
      auVar22[0xe] = bVar102;
      auVar22[0xf] = bVar104;
      uVar106 = a64_TBL(ZEXT816(0),auVar22,DAT_0388a680);
      fVar70 = (float)uVar107;
      fVar71 = (float)((ulong)uVar107 >> 0x20);
      fVar66 = (float)uVar43 * (float)uVar43;
      fVar37 = (float)((ulong)uVar43 >> 0x20);
      fVar37 = fVar37 * fVar37;
      fVar67 = (float)uVar27 * (float)uVar27;
      fVar69 = fVar69 * fVar69;
      fVar48 = (float)uVar42 * (float)CONCAT13(bVar81,CONCAT12(bVar80,CONCAT11(bVar79,bVar78)));
      fVar68 = (float)((ulong)uVar42 >> 0x20) *
               (float)CONCAT13(bVar88,CONCAT12(bVar86,CONCAT11(bVar84,bVar82)));
      fVar65 = fVar72 * (float)CONCAT13(bVar96,CONCAT12(bVar94,CONCAT11(bVar92,bVar90)));
      fVar44 = fVar74 * (float)CONCAT13(bVar104,CONCAT12(bVar102,CONCAT11(bVar100,bVar98)));
      fVar52 = auVar110._12_4_;
      fVar49 = (float)uVar106 * fVar52;
      fVar50 = (float)((ulong)uVar106 >> 0x20) * fVar52;
      fVar48 = fVar48 + fVar48;
      fVar68 = fVar68 + fVar68;
      fVar65 = fVar65 + fVar65;
      fVar44 = fVar44 + fVar44;
      fVar49 = fVar49 + fVar49;
      fVar50 = fVar50 + fVar50;
      fVar51 = fVar70 * fVar52 + fVar70 * fVar52;
      fVar52 = fVar71 * fVar52 + fVar71 * fVar52;
      fVar73 = fVar49 + fVar48;
      fVar75 = fVar50 + fVar68;
      fVar76 = fVar51 + fVar65;
      fVar77 = fVar52 + fVar44;
      fVar48 = fVar48 - fVar49;
      fVar68 = fVar68 - fVar50;
      uVar83 = SUB41(fVar68,0);
      uVar85 = (undefined1)((uint)fVar68 >> 8);
      uVar87 = (undefined1)((uint)fVar68 >> 0x10);
      uVar89 = (undefined1)((uint)fVar68 >> 0x18);
      fVar65 = fVar65 - fVar51;
      uVar91 = SUB41(fVar65,0);
      uVar93 = (undefined1)((uint)fVar65 >> 8);
      uVar95 = (undefined1)((uint)fVar65 >> 0x10);
      uVar97 = (undefined1)((uint)fVar65 >> 0x18);
      fVar44 = fVar44 - fVar52;
      uVar99 = SUB41(fVar44,0);
      uVar101 = (undefined1)((uint)fVar44 >> 8);
      uVar103 = (undefined1)((uint)fVar44 >> 0x10);
      uVar105 = (undefined1)((uint)fVar44 >> 0x18);
      fVar66 = (float)_DAT_03888fc0 - (fVar67 + fVar67 + fVar66 + fVar66);
      fVar37 = (float)((ulong)_DAT_03888fc0 >> 0x20) - (fVar69 + fVar69 + fVar37 + fVar37);
      uVar53 = SUB41(fVar37,0);
      uVar54 = (undefined1)((uint)fVar37 >> 8);
      uVar55 = (undefined1)((uint)fVar37 >> 0x10);
      uVar56 = (undefined1)((uint)fVar37 >> 0x18);
      fVar37 = (float)_UNK_03888fc8 -
               (fVar70 * fVar70 + fVar70 * fVar70 + fVar72 * fVar72 + fVar72 * fVar72);
      uVar57 = (undefined1)((uint)fVar37 >> 8);
      uVar58 = (undefined1)((uint)fVar37 >> 0x10);
      uVar59 = (undefined1)((uint)fVar37 >> 0x18);
      fVar68 = (float)((ulong)_UNK_03888fc8 >> 0x20) -
               (fVar71 * fVar71 + fVar71 * fVar71 + fVar74 * fVar74 + fVar74 * fVar74);
      uVar61 = SUB41(fVar68,0);
      uVar62 = (undefined1)((uint)fVar68 >> 8);
      uVar60 = (undefined1)((uint)fVar68 >> 0x10);
      uVar63 = (undefined1)((uint)fVar68 >> 0x18);
      auVar14._4_4_ = fVar75;
      auVar14._0_4_ = fVar73;
      auVar14._8_4_ = fVar76;
      auVar14._12_4_ = fVar77;
      auVar23[4] = uVar83;
      auVar23._0_4_ = fVar48;
      auVar23[5] = uVar85;
      auVar23[6] = uVar87;
      auVar23[7] = uVar89;
      auVar23[8] = uVar91;
      auVar23[9] = uVar93;
      auVar23[10] = uVar95;
      auVar23[0xb] = uVar97;
      auVar23[0xc] = uVar99;
      auVar23[0xd] = uVar101;
      auVar23[0xe] = uVar103;
      auVar23[0xf] = uVar105;
      uVar42 = a64_TBL(ZEXT816(0),auVar14,auVar23,DAT_0388a758);
      auVar15._4_4_ = fVar75;
      auVar15._0_4_ = fVar73;
      auVar15._8_4_ = fVar76;
      auVar15._12_4_ = fVar77;
      auVar24[4] = uVar83;
      auVar24._0_4_ = fVar48;
      auVar24[5] = uVar85;
      auVar24[6] = uVar87;
      auVar24[7] = uVar89;
      auVar24[8] = uVar91;
      auVar24[9] = uVar93;
      auVar24[10] = uVar95;
      auVar24[0xb] = uVar97;
      auVar24[0xc] = uVar99;
      auVar24[0xd] = uVar101;
      auVar24[0xe] = uVar103;
      auVar24[0xf] = uVar105;
      uVar106 = a64_TBL(ZEXT816(0),auVar15,auVar24,DAT_0388a720);
      uVar40 = (undefined4)((ulong)uVar106 >> 0x20);
      auVar16._4_4_ = fVar75;
      auVar16._0_4_ = fVar73;
      auVar16._8_4_ = fVar76;
      auVar16._12_4_ = fVar77;
      auVar25[4] = uVar83;
      auVar25._0_4_ = fVar48;
      auVar25[5] = uVar85;
      auVar25[6] = uVar87;
      auVar25[7] = uVar89;
      auVar25[8] = uVar91;
      auVar25[9] = uVar93;
      auVar25[10] = uVar95;
      auVar25[0xb] = uVar97;
      auVar25[0xc] = uVar99;
      auVar25[0xd] = uVar101;
      auVar25[0xe] = uVar103;
      auVar25[0xf] = uVar105;
      auVar114._0_8_ = a64_TBL(ZEXT816(0),auVar16,auVar25,DAT_0388a898);
      auVar17._4_4_ = fVar75;
      auVar17._0_4_ = fVar73;
      auVar17._8_4_ = fVar76;
      auVar17._12_4_ = fVar77;
      auVar26[4] = uVar83;
      auVar26._0_4_ = fVar48;
      auVar26[5] = uVar85;
      auVar26[6] = uVar87;
      auVar26[7] = uVar89;
      auVar26[8] = uVar91;
      auVar26[9] = uVar93;
      auVar26[10] = uVar95;
      auVar26[0xb] = uVar97;
      auVar26[0xc] = uVar99;
      auVar26[0xd] = uVar101;
      auVar26[0xe] = uVar103;
      auVar26[0xf] = uVar105;
      uVar43 = a64_TBL(ZEXT816(0),auVar17,auVar26,DAT_0388a5e8);
      auVar114._8_8_ = uVar43;
      uVar27 = CONCAT17(uVar63,CONCAT16(uVar60,CONCAT15(uVar62,CONCAT14(uVar61,fVar37))));
      uVar43 = CONCAT17(uVar56,CONCAT16(uVar55,CONCAT15(uVar54,CONCAT14(uVar53,fVar66))));
      auVar28._8_8_ = uVar27;
      auVar28._0_8_ = uVar43;
      uVar107 = a64_TBL(ZEXT816(0),auVar28,auVar114,DAT_0388a640);
      auVar29._8_8_ = uVar27;
      auVar29._0_8_ = uVar43;
      uVar108 = a64_TBL(ZEXT816(0),auVar29,auVar114,DAT_0388a7f0);
      auVar30._8_8_ = uVar27;
      auVar30._0_8_ = uVar43;
      uVar111 = a64_TBL(ZEXT816(0),auVar30,auVar114,DAT_0388a5c0);
      auVar31._8_8_ = uVar27;
      auVar31._0_8_ = uVar43;
      uVar43 = a64_TBL(ZEXT816(0),auVar31,auVar114,DAT_0388a5a0);
      fVar65 = (float)((ulong)uVar107 >> 0x20) * local_44;
      fVar44 = (float)uVar108 * local_44;
      fVar49 = (float)((ulong)uVar108 >> 0x20) * local_44;
      fVar68 = (float)uVar43 * fVar45;
      fVar48 = (float)((ulong)uVar43 >> 0x20) * fVar45;
      auVar8[4] = uVar53;
      auVar8._0_4_ = fVar66;
      auVar8[5] = uVar54;
      auVar8[6] = uVar55;
      auVar8[7] = uVar56;
      auVar8[8] = SUB41(fVar37,0);
      auVar8[9] = uVar57;
      auVar8[10] = uVar58;
      auVar8[0xb] = uVar59;
      auVar8[0xc] = uVar61;
      auVar8[0xd] = uVar62;
      auVar8[0xe] = uVar60;
      auVar8[0xf] = uVar63;
      auVar12._8_4_ = (int)uVar106;
      auVar12._0_8_ = uVar42;
      auVar12._12_4_ = uVar40;
      uVar27 = a64_TBL(ZEXT816(0),auVar8,auVar12,DAT_0388a668);
      auVar9[4] = uVar53;
      auVar9._0_4_ = fVar66;
      auVar9[5] = uVar54;
      auVar9[6] = uVar55;
      auVar9[7] = uVar56;
      auVar9[8] = SUB41(fVar37,0);
      auVar9[9] = uVar57;
      auVar9[10] = uVar58;
      auVar9[0xb] = uVar59;
      auVar9[0xc] = uVar61;
      auVar9[0xd] = uVar62;
      auVar9[0xe] = uVar60;
      auVar9[0xf] = uVar63;
      auVar13._8_4_ = (int)uVar106;
      auVar13._0_8_ = uVar42;
      auVar13._12_4_ = uVar40;
      uVar43 = a64_TBL(ZEXT816(0),auVar9,auVar13,DAT_0388a5a8);
      fVar37 = (float)((ulong)uVar43 >> 0x20) * fVar46;
      local_44 = (float)uVar107 * local_44 + (float)uVar111 * fVar45 + (float)uVar27 * fVar46 + 0.0;
      fVar45 = fVar65 + (float)((ulong)uVar111 >> 0x20) * fVar45 +
               (float)((ulong)uVar27 >> 0x20) * fVar46 + 0.0;
      fVar46 = fVar44 + fVar68 + (float)uVar43 * fVar46 + 0.0;
      fVar65 = fVar49 + fVar48 + fVar37 + 0.0;
    }
  }
  param_2[1] = CONCAT44(fVar65 * 0.0,fVar10 * fVar64 * fVar46);
  *param_2 = CONCAT44(fVar39 * fVar41 * fVar45,fVar38 * fVar47 * local_44);
  fVar41 = *(float *)(param_7 + 0x6c);
  param_3[1] = CONCAT44(fVar65 * fVar41,fVar46 * fVar41);
  *param_3 = CONCAT44(fVar45 * fVar41,local_44 * fVar41);
  return 1;
}


