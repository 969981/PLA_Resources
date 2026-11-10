/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fea97c; name: FUN_02fea97c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fea97c(long *param_1,float *param_2,ulong *param_3,long param_4)

{
  float *pfVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 *puVar38;
  long lVar39;
  int *piVar40;
  ulong uVar41;
  ulong uVar42;
  long lVar43;
  ulong uVar44;
  float fVar45;
  ulong uVar46;
  uint uVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  byte bVar51;
  byte bVar61;
  byte bVar62;
  float fVar52;
  int iVar53;
  undefined1 auVar54 [12];
  undefined1 auVar55 [12];
  byte bVar64;
  byte bVar67;
  byte bVar68;
  float fVar65;
  float fVar70;
  uint uVar71;
  uint uVar72;
  uint uVar74;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  byte bVar63;
  int iVar66;
  byte bVar69;
  int iVar73;
  int iVar75;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  int iVar76;
  int iVar79;
  int iVar80;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  int iVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  uint local_1170 [2];
  undefined8 auStack_1168 [255];
  undefined1 local_970 [8];
  ulong auStack_968 [255];
  int local_170;
  undefined1 auStack_160 [64];
  undefined8 local_120;
  undefined8 local_118;
  long local_110;
  uint local_108;
  undefined4 uStack_104;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  uVar36 = DAT_0388a148;
  uVar35 = DAT_0388a140;
  uVar34 = _UNK_03889d78;
  uVar33 = _DAT_03889d70;
  uVar32 = _UNK_03889a88;
  uVar31 = _DAT_03889a80;
  uVar30 = _UNK_03889708;
  uVar29 = _DAT_03889700;
  uVar28 = _UNK_03889088;
  uVar27 = _DAT_03889080;
  uVar26 = _UNK_03888d18;
  uVar25 = _DAT_03888d10;
  if (*(char *)(*(long *)(param_4 + 0x138) + 0x18) == '\0') {
    fVar18 = *param_2;
    fVar17 = *param_2;
    fVar16 = *param_2;
    fVar15 = *param_2;
    pfVar1 = param_2 + 1;
    fVar22 = *pfVar1;
    fVar21 = *pfVar1;
    fVar20 = *pfVar1;
    fVar19 = *pfVar1;
    pfVar1 = param_2 + 2;
    uVar11 = *(undefined1 *)pfVar1;
    uVar12 = *(undefined1 *)((long)param_2 + 9);
    uVar13 = *(undefined1 *)((long)param_2 + 10);
    uVar14 = *(undefined1 *)((long)param_2 + 0xb);
    fVar24 = *pfVar1;
    fVar23 = *pfVar1;
    auVar48 = *(undefined1 (*) [16])(param_2 + 4);
    uVar44 = *param_3;
    local_1170[0] = 2;
    fVar52 = auVar48._0_4_;
    fVar65 = auVar48._4_4_;
    fVar70 = auVar48._8_4_;
    NEON_fmov(0x3f800000,4);
    local_970._0_4_ = 0;
    local_170 = 1;
    uVar46 = uVar44;
    do {
      while( true ) {
        lVar39 = (long)local_170;
        *(ulong *)((long)auStack_968 + lVar39 * 4) = uVar46;
        *(ulong *)(local_970 + lVar39 * 4) = uVar44;
        uVar47 = local_170 + 3;
        uVar72 = uVar47 & 0xfffffffc;
        fVar45 = (float)(uVar46 >> 0x20);
        if ((int)uVar72 < 0x81) {
          uVar41 = CONCAT44(uVar47,uVar47) & 0xfffffffcfffffffc;
          uVar42 = uVar44 & 0xffffff00ffffff00;
          uVar71 = (uint)(float)uVar46 & 0xffffff00;
          uVar74 = (uint)fVar45 & 0xffffff00;
          auVar48[0] = (undefined1)uVar41;
          auVar48[1] = (byte)(uVar41 >> 8) | (byte)(uVar42 >> 8);
          auVar48[2] = (byte)(uVar41 >> 0x10) | (byte)(uVar42 >> 0x10);
          auVar48[3] = (byte)(uVar41 >> 0x18) | (byte)(uVar42 >> 0x18);
          auVar48[4] = (undefined1)(uVar41 >> 0x20);
          auVar48[5] = (byte)(uVar41 >> 0x28) | (byte)(uVar42 >> 0x28);
          auVar48[6] = (byte)(uVar41 >> 0x30) | (byte)(uVar42 >> 0x30);
          auVar48[7] = (byte)(uVar41 >> 0x38) | (byte)(uVar42 >> 0x38);
          auVar48[8] = (undefined1)uVar72;
          bVar51 = (byte)(uVar72 >> 8);
          auVar48[9] = bVar51 | (byte)(uVar71 >> 8);
          bVar61 = (byte)(uVar72 >> 0x10);
          auVar48[10] = bVar61 | (byte)(uVar71 >> 0x10);
          bVar62 = (byte)(uVar72 >> 0x18);
          auVar48[0xb] = bVar62 | (byte)(uVar71 >> 0x18);
          auVar48[0xc] = auVar48[8];
          auVar48[0xd] = bVar51 | (byte)(uVar74 >> 8);
          auVar48[0xe] = bVar61 | (byte)(uVar74 >> 0x10);
          auVar48[0xf] = bVar62 | (byte)(uVar74 >> 0x18);
          if (3 < (int)uVar72) {
            auVar78._4_12_ = stack0xfffffffffffff694;
            auVar78._0_4_ = local_970._0_4_;
            uVar41 = auVar78._0_8_ & 0xffffff00ffffff00;
            uVar72 = local_970._8_4_ & 0xffffff00;
            uVar71 = local_970._12_4_ & 0xffffff00;
            auVar83[1] = (byte)(uVar41 >> 8) | (byte)((ulong)uVar33 >> 8);
            auVar83[0] = (char)uVar33;
            auVar83[2] = (byte)(uVar41 >> 0x10) | (byte)((ulong)uVar33 >> 0x10);
            auVar83[3] = (byte)(uVar41 >> 0x18) | (byte)((ulong)uVar33 >> 0x18);
            auVar83[4] = (char)((ulong)uVar33 >> 0x20);
            auVar83[5] = (byte)(uVar41 >> 0x28) | (byte)((ulong)uVar33 >> 0x28);
            auVar83[6] = (byte)(uVar41 >> 0x30) | (byte)((ulong)uVar33 >> 0x30);
            auVar83[7] = (byte)(uVar41 >> 0x38) | (byte)((ulong)uVar33 >> 0x38);
            auVar83[8] = (char)uVar34;
            auVar83[9] = (byte)(uVar72 >> 8) | (byte)((ulong)uVar34 >> 8);
            auVar83[10] = (byte)(uVar72 >> 0x10) | (byte)((ulong)uVar34 >> 0x10);
            auVar83[0xb] = (byte)(uVar72 >> 0x18) | (byte)((ulong)uVar34 >> 0x18);
            auVar83[0xc] = (char)((ulong)uVar34 >> 0x20);
            auVar83[0xd] = (byte)(uVar71 >> 8) | (byte)((ulong)uVar34 >> 0x28);
            auVar83[0xe] = (byte)(uVar71 >> 0x10) | (byte)((ulong)uVar34 >> 0x30);
            auVar83[0xf] = (byte)(uVar71 >> 0x18) | (byte)((ulong)uVar34 >> 0x38);
            auVar48 = NEON_smin(auVar83,auVar48,4);
            if (7 < uVar47) {
              auVar56._8_8_ = uVar28;
              auVar56._0_8_ = uVar27;
              lVar39 = 0x81;
              do {
                uVar72 = (uint)*(undefined8 *)(local_1170 + lVar39 * 4) & 0xffffff00;
                uVar71 = (uint)((ulong)*(undefined8 *)(local_1170 + lVar39 * 4) >> 0x20) &
                         0xffffff00;
                uVar74 = (uint)auStack_1168[lVar39 * 2] & 0xffffff00;
                uVar7 = (uint)((ulong)auStack_1168[lVar39 * 2] >> 0x20) & 0xffffff00;
                auVar3[1] = (byte)(uVar72 >> 8) | auVar56[1];
                auVar3[0] = auVar56[0];
                auVar3[2] = (byte)(uVar72 >> 0x10) | auVar56[2];
                auVar3[3] = (byte)(uVar72 >> 0x18) | auVar56[3];
                auVar3[4] = auVar56[4];
                auVar3[5] = (byte)(uVar71 >> 8) | auVar56[5];
                auVar3[6] = (byte)(uVar71 >> 0x10) | auVar56[6];
                auVar3[7] = (byte)(uVar71 >> 0x18) | auVar56[7];
                auVar3[8] = auVar56[8];
                auVar3[9] = (byte)(uVar74 >> 8) | auVar56[9];
                auVar3[10] = (byte)(uVar74 >> 0x10) | auVar56[10];
                auVar3[0xb] = (byte)(uVar74 >> 0x18) | auVar56[0xb];
                auVar3[0xc] = auVar56[0xc];
                auVar3[0xd] = (byte)(uVar7 >> 8) | auVar56[0xd];
                auVar3[0xe] = (byte)(uVar7 >> 0x10) | auVar56[0xe];
                auVar3[0xf] = (byte)(uVar7 >> 0x18) | auVar56[0xf];
                auVar48 = NEON_smin(auVar3,auVar48,4);
                auVar57._0_4_ = auVar56._0_4_ + 4;
                auVar57._4_4_ = auVar56._4_4_ + 4;
                auVar57._8_4_ = auVar56._8_4_ + 4;
                auVar57._12_4_ = auVar56._12_4_ + 4;
                uVar41 = lVar39 - 0x7f;
                lVar39 = lVar39 + 1;
                auVar56 = auVar57;
              } while (uVar41 < uVar47 >> 2);
            }
          }
          uVar47 = NEON_sminv(auVar48,4);
          uVar47 = uVar47 & 0xff;
          if (local_170 <= (int)uVar47) {
            return;
          }
        }
        else {
          uVar47 = local_170 - 1;
        }
        local_170 = local_170 + -1;
        uVar41 = (ulong)uVar47;
        uVar47 = local_1170[uVar41];
        uVar72 = uVar47 >> 1;
        uVar42 = (ulong)uVar72;
        *(undefined4 *)(local_970 + uVar41 * 4) = *(undefined4 *)(local_970 + (long)local_170 * 4);
        local_1170[uVar41] = local_1170[local_170];
        if ((uVar47 & 1) == 0) break;
        lVar39 = *(long *)(param_4 + 0xb8);
        lVar43 = *(long *)(lVar39 + 0x50);
        puVar38 = (undefined8 *)(*(long *)(lVar43 + 0x110) + uVar42 * 0x20);
        uStack_88 = puVar38[1];
        local_90 = *puVar38;
        if (*(char *)(lVar43 + 0x15dc) == '\0') {
          uStack_b8 = uVar32;
          local_c0 = uVar31;
          uStack_98 = uVar26;
          local_a0 = uVar25;
          uStack_a8 = uVar36;
          local_b0 = uVar35;
        }
        else {
          FUN_032c9fc0(&local_c0,*(long *)(lVar43 + 0x120) + uVar42 * 0x10);
          lVar39 = *(long *)(param_4 + 0xb8);
        }
        puVar38 = *(undefined8 **)(param_4 + 0xd8);
        local_120 = *puVar38;
        local_118 = puVar38[1];
        local_f8 = 0;
        local_f0 = *(undefined1 *)(puVar38 + 6);
        local_ec = *(undefined4 *)((long)puVar38 + 0x34);
        uStack_d8 = puVar38[9];
        local_e0 = puVar38[8];
        uStack_c8 = puVar38[0xb];
        local_d0 = puVar38[10];
        local_e8 = *(undefined4 *)(puVar38 + 7);
        _local_108 = CONCAT44(0x20,uVar72);
        local_110 = lVar39;
        local_100 = &local_c0;
        FUN_032ca498(auStack_160,&local_c0,param_4 + 0xf0);
        lVar39 = *(long *)(param_4 + 200);
        if (*(char *)(lVar39 + 0x20) == '\x02') {
          if (*(int *)(lVar43 + 0x30) == 0) {
            piVar40 = (int *)(lVar43 + 0x20);
          }
          else {
            piVar40 = (int *)(*(long *)(lVar43 + 0x28) + (long)*(int *)(lVar43 + 0x34) * uVar42);
          }
          *(int *)(*(long *)(param_4 + 0xb0) + 0x20) =
               (int)*(undefined8 *)
                     (*(long *)(*(long *)(*(long *)(lVar43 + 0x18) + 0x18) + (long)*piVar40 * 8) +
                     0x10);
          uVar37 = *(undefined8 *)(param_4 + 0xb0);
          lVar39 = *(long *)(param_4 + 200);
        }
        else {
          if (*(int *)(lVar43 + 0x30) == 0) {
            piVar40 = (int *)(lVar43 + 0x20);
          }
          else {
            piVar40 = (int *)(*(long *)(lVar43 + 0x28) + (long)*(int *)(lVar43 + 0x34) * uVar42);
          }
          uVar37 = *(undefined8 *)
                    (*(long *)(*(long *)(*(long *)(lVar43 + 0x18) + 0x18) + (long)*piVar40 * 8) +
                    0xa0);
        }
        FUN_02f912e0(**(undefined8 **)(param_4 + 0xc0),*(undefined8 **)(param_4 + 0xc0),lVar39,
                     *(undefined8 *)(param_4 + 0xd0),uVar37,*(undefined8 *)(param_4 + 0xe0),
                     &local_120,auStack_160,*(undefined1 *)(param_4 + 0x130),
                     *(undefined8 *)(param_4 + 0x138));
        uVar37 = NEON_fmax(*(undefined8 *)(*(long *)(param_4 + 0x138) + 0x10),0,4);
        fVar45 = (float)((ulong)uVar37 >> 0x20);
        uVar44 = CONCAT44(fVar45 * fVar45,(float)uVar37 * (float)uVar37);
        uVar46 = uVar44;
        if (*(char *)(*(long *)(param_4 + 0x138) + 0x18) != '\0') {
          return;
        }
LAB_02feab18:
        if (local_170 == 0) {
          return;
        }
      }
      pfVar1 = (float *)((long)param_1 + uVar42 * 0x80 + *param_1);
      auVar77._0_4_ = fVar19 - pfVar1[0xc];
      auVar77._4_4_ = fVar20 - pfVar1[0xd];
      auVar77._8_4_ = fVar21 - pfVar1[0xe];
      auVar77._12_4_ = fVar22 - pfVar1[0xf];
      fVar2 = (float)*(undefined8 *)(pfVar1 + 4);
      auVar49._0_4_ = fVar15 - fVar2;
      fVar4 = (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20);
      auVar49._4_4_ = fVar16 - fVar4;
      fVar5 = (float)*(undefined8 *)(pfVar1 + 6);
      auVar49._8_4_ = fVar17 - fVar5;
      fVar6 = (float)((ulong)*(undefined8 *)(pfVar1 + 6) >> 0x20);
      auVar49._12_4_ = fVar18 - fVar6;
      auVar82._0_4_ = fVar23 - pfVar1[0x14];
      auVar82._4_4_ =
           (float)(CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar12,CONCAT14(uVar11,fVar23)))) >>
                  0x20) - pfVar1[0x15];
      auVar82._8_4_ = fVar24 - pfVar1[0x16];
      auVar82._12_4_ =
           (float)(CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar12,CONCAT14(uVar11,fVar24)))) >>
                  0x20) - pfVar1[0x17];
      iVar53 = -(uint)(*pfVar1 <= fVar2);
      iVar66 = -(uint)(pfVar1[1] <= fVar4);
      iVar73 = -(uint)(pfVar1[2] <= fVar5);
      iVar75 = -(uint)(pfVar1[3] <= fVar6);
      auVar48 = NEON_smax(auVar49,ZEXT816(0),4);
      auVar78 = NEON_smax(auVar77,ZEXT816(0),4);
      auVar9._4_4_ = fVar52 - pfVar1[1];
      auVar9._0_4_ = fVar52 - *pfVar1;
      auVar9._8_4_ = fVar52 - pfVar1[2];
      auVar9._12_4_ = fVar52 - pfVar1[3];
      auVar48 = NEON_smin(auVar48,auVar9,4);
      auVar8._4_4_ = fVar65 - (float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20);
      auVar8._0_4_ = fVar65 - (float)*(undefined8 *)(pfVar1 + 8);
      auVar8._8_4_ = fVar65 - (float)*(undefined8 *)(pfVar1 + 10);
      auVar8._12_4_ = fVar65 - (float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20);
      auVar78 = NEON_smin(auVar78,auVar8,4);
      auVar83 = NEON_smax(auVar82,ZEXT816(0),4);
      auVar10._4_4_ = fVar70 - (float)((ulong)*(undefined8 *)(pfVar1 + 0x10) >> 0x20);
      auVar10._0_4_ = fVar70 - (float)*(undefined8 *)(pfVar1 + 0x10);
      auVar10._8_4_ = fVar70 - (float)*(undefined8 *)(pfVar1 + 0x12);
      auVar10._12_4_ = fVar70 - (float)((ulong)*(undefined8 *)(pfVar1 + 0x12) >> 0x20);
      auVar83 = NEON_smin(auVar83,auVar10,4);
      auVar50._0_4_ =
           auVar48._0_4_ * auVar48._0_4_ + auVar78._0_4_ * auVar78._0_4_ +
           auVar83._0_4_ * auVar83._0_4_;
      auVar50._4_4_ =
           auVar48._4_4_ * auVar48._4_4_ + auVar78._4_4_ * auVar78._4_4_ +
           auVar83._4_4_ * auVar83._4_4_;
      auVar50._8_4_ =
           auVar48._8_4_ * auVar48._8_4_ + auVar78._8_4_ * auVar78._8_4_ +
           auVar83._8_4_ * auVar83._8_4_;
      auVar50._12_4_ =
           auVar48._12_4_ * auVar48._12_4_ + auVar78._12_4_ * auVar78._12_4_ +
           auVar83._12_4_ * auVar83._12_4_;
      iVar76 = -(uint)(auVar50._0_4_ <= (float)uVar44);
      iVar79 = -(uint)(auVar50._4_4_ <= (float)(uVar44 >> 0x20));
      iVar80 = -(uint)(auVar50._8_4_ <= (float)uVar46);
      iVar81 = -(uint)(auVar50._12_4_ <= fVar45);
      bVar51 = (byte)iVar76 & (byte)iVar53;
      bVar61 = (byte)((uint)iVar76 >> 8) & (byte)((uint)iVar53 >> 8);
      bVar62 = (byte)((uint)iVar76 >> 0x10) & (byte)((uint)iVar53 >> 0x10);
      bVar63 = (byte)((uint)iVar76 >> 0x18) & (byte)((uint)iVar53 >> 0x18);
      iVar53 = CONCAT13(bVar63,CONCAT12(bVar62,CONCAT11(bVar61,bVar51)));
      bVar64 = (byte)iVar79 & (byte)iVar66;
      bVar67 = (byte)((uint)iVar79 >> 8) & (byte)((uint)iVar66 >> 8);
      bVar68 = (byte)((uint)iVar79 >> 0x10) & (byte)((uint)iVar66 >> 0x10);
      bVar69 = (byte)((uint)iVar79 >> 0x18) & (byte)((uint)iVar66 >> 0x18);
      auVar54._0_8_ = CONCAT17(bVar69,CONCAT16(bVar68,CONCAT15(bVar67,CONCAT14(bVar64,iVar53))));
      auVar54[8] = (byte)iVar80 & (byte)iVar73;
      auVar54[9] = (byte)((uint)iVar80 >> 8) & (byte)((uint)iVar73 >> 8);
      auVar54[10] = (byte)((uint)iVar80 >> 0x10) & (byte)((uint)iVar73 >> 0x10);
      auVar54[0xb] = (byte)((uint)iVar80 >> 0x18) & (byte)((uint)iVar73 >> 0x18);
      auVar58[0xc] = (byte)iVar81 & (byte)iVar75;
      auVar58._0_12_ = auVar54;
      auVar58[0xd] = (byte)((uint)iVar81 >> 8) & (byte)((uint)iVar75 >> 8);
      auVar58[0xe] = (byte)((uint)iVar81 >> 0x10) & (byte)((uint)iVar75 >> 0x10);
      auVar58[0xf] = (byte)((uint)iVar81 >> 0x18) & (byte)((uint)iVar75 >> 0x18);
      if (((iVar53 == 0 && (int)((ulong)auVar54._0_8_ >> 0x20) == 0) && auVar54._8_4_ == 0) &&
          auVar58._12_4_ == 0) goto LAB_02feab18;
      iVar53 = CONCAT13(bVar63 & (byte)((ulong)uVar29 >> 0x18),
                        CONCAT12(bVar62 & (byte)((ulong)uVar29 >> 0x10),
                                 CONCAT11(bVar61 & (byte)((ulong)uVar29 >> 8),bVar51 & (byte)uVar29)
                                ));
      auVar55._0_8_ =
           CONCAT17(bVar69 & (byte)((ulong)uVar29 >> 0x38),
                    CONCAT16(bVar68 & (byte)((ulong)uVar29 >> 0x30),
                             CONCAT15(bVar67 & (byte)((ulong)uVar29 >> 0x28),
                                      CONCAT14(bVar64 & (byte)((ulong)uVar29 >> 0x20),iVar53))));
      auVar55[8] = auVar54[8] & (byte)uVar30;
      auVar55[9] = auVar54[9] & (byte)((ulong)uVar30 >> 8);
      auVar55[10] = auVar54[10] & (byte)((ulong)uVar30 >> 0x10);
      auVar55[0xb] = auVar54[0xb] & (byte)((ulong)uVar30 >> 0x18);
      auVar59[0xc] = auVar58[0xc] & (byte)((ulong)uVar30 >> 0x20);
      auVar59._0_12_ = auVar55;
      auVar59[0xd] = auVar58[0xd] & (byte)((ulong)uVar30 >> 0x28);
      auVar59[0xe] = auVar58[0xe] & (byte)((ulong)uVar30 >> 0x30);
      auVar59[0xf] = auVar58[0xf] & (byte)((ulong)uVar30 >> 0x38);
      uVar41 = (ulong)(uint)(iVar53 + (int)((ulong)auVar55._0_8_ >> 0x20) +
                            auVar55._8_4_ + auVar59._12_4_);
      iVar53 = *(int *)(&DAT_03aadfe0 + uVar41 * 4);
      auVar78 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pfVar1 + 0x18),
                        *(undefined1 (*) [16])(&DAT_03aae120 + uVar41 * 0x10));
      auVar48 = a64_TBL(ZEXT816(0),auVar50,*(undefined1 (*) [16])(&DAT_03aae120 + uVar41 * 0x10));
      iVar66 = auVar78._0_4_ << 1;
      iVar73 = auVar78._4_4_ << 1;
      iVar75 = auVar78._8_4_ << 1;
      iVar76 = auVar78._12_4_ << 1;
      bVar51 = -(*(char *)(pfVar1 + 0x1c) == '\0');
      auVar60._0_8_ =
           CONCAT17((char)((uint)iVar73 >> 0x18),
                    CONCAT16((char)((uint)iVar73 >> 0x10),
                             CONCAT15((char)((uint)iVar73 >> 8),
                                      CONCAT14(~bVar51 & 1 | (byte)iVar73,
                                               CONCAT13((char)((uint)iVar66 >> 0x18),
                                                        CONCAT12((char)((uint)iVar66 >> 0x10),
                                                                 CONCAT11((char)((uint)iVar66 >> 8),
                                                                          ~bVar51 & 1 | (byte)iVar66
                                                                         )))))));
      auVar60[8] = ~bVar51 & 1 | (byte)iVar75;
      auVar60[9] = (undefined1)((uint)iVar75 >> 8);
      auVar60[10] = (undefined1)((uint)iVar75 >> 0x10);
      auVar60[0xb] = (undefined1)((uint)iVar75 >> 0x18);
      auVar60[0xc] = ~bVar51 & 1 | (byte)iVar76;
      auVar60[0xd] = (undefined1)((uint)iVar76 >> 8);
      auVar60[0xe] = (undefined1)((uint)iVar76 >> 0x10);
      auVar60[0xf] = (undefined1)((uint)iVar76 >> 0x18);
      *(undefined8 *)(local_1170 + local_170) = auVar60._0_8_;
      auVar78 = NEON_ext(auVar60,auVar60,8,1);
      *(long *)((long)auStack_1168 + (long)local_170 * 4) = auVar78._0_8_;
      lVar39 = (long)local_170;
      *(long *)((long)auStack_968 + lVar39 * 4) = auVar48._8_8_;
      *(long *)(local_970 + lVar39 * 4) = auVar48._0_8_;
      local_170 = local_170 + iVar53;
    } while (local_170 != 0);
  }
  return;
}


