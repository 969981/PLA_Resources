/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f65e0c; name: FUN_02f65e0c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f65e0c(long *param_1,float *param_2,ulong *param_3,undefined8 *param_4)

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
  bool bVar31;
  long *plVar32;
  ulong uVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  ulong uVar37;
  long lVar38;
  uint uVar39;
  undefined8 uVar40;
  float fVar45;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  byte bVar46;
  byte bVar57;
  byte bVar58;
  float fVar47;
  int iVar48;
  byte bVar60;
  byte bVar63;
  byte bVar64;
  float fVar61;
  ulong uVar49;
  undefined1 auVar50 [12];
  undefined1 auVar51 [12];
  float fVar66;
  uint uVar67;
  uint uVar68;
  uint uVar70;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  byte bVar59;
  int iVar62;
  byte bVar65;
  int iVar69;
  int iVar71;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  int iVar72;
  int iVar75;
  int iVar76;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  int iVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  ulong uVar80;
  float fVar81;
  uint local_1100 [2];
  undefined8 auStack_10f8 [255];
  undefined1 local_900 [8];
  ulong auStack_8f8 [255];
  int local_100;
  long local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined5 uStack_c4;
  undefined8 local_bc;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined2 local_88 [2];
  undefined4 local_84;
  undefined8 local_80;
  
  uVar30 = _UNK_03889d78;
  uVar29 = _DAT_03889d70;
  uVar28 = _UNK_03889708;
  uVar27 = _DAT_03889700;
  uVar26 = _UNK_03889088;
  uVar25 = _DAT_03889080;
  if (*(char *)(param_4 + 0x11) == '\0') {
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
    auVar41 = *(undefined1 (*) [16])(param_2 + 4);
    uVar80 = *param_3;
    local_1100[0] = 2;
    fVar47 = auVar41._0_4_;
    fVar61 = auVar41._4_4_;
    fVar66 = auVar41._8_4_;
    auVar41 = NEON_fmov(0x3f800000,4);
    local_900._0_4_ = 0;
    local_100 = 1;
    uVar33 = uVar80;
    do {
      while( true ) {
        lVar36 = (long)local_100;
        *(ulong *)((long)auStack_8f8 + lVar36 * 4) = uVar33;
        *(ulong *)(local_900 + lVar36 * 4) = uVar80;
        uVar39 = local_100 + 3;
        uVar68 = uVar39 & 0xfffffffc;
        fVar45 = (float)uVar80;
        fVar81 = (float)(uVar33 >> 0x20);
        if ((int)uVar68 < 0x81) {
          uVar37 = CONCAT44(uVar39,uVar39) & 0xfffffffcfffffffc;
          uVar49 = uVar80 & 0xffffff00ffffff00;
          uVar67 = (uint)(float)uVar33 & 0xffffff00;
          uVar70 = (uint)fVar81 & 0xffffff00;
          auVar42[0] = (undefined1)uVar37;
          auVar42[1] = (byte)(uVar37 >> 8) | (byte)(uVar49 >> 8);
          auVar42[2] = (byte)(uVar37 >> 0x10) | (byte)(uVar49 >> 0x10);
          auVar42[3] = (byte)(uVar37 >> 0x18) | (byte)(uVar49 >> 0x18);
          auVar42[4] = (undefined1)(uVar37 >> 0x20);
          auVar42[5] = (byte)(uVar37 >> 0x28) | (byte)(uVar49 >> 0x28);
          auVar42[6] = (byte)(uVar37 >> 0x30) | (byte)(uVar49 >> 0x30);
          auVar42[7] = (byte)(uVar37 >> 0x38) | (byte)(uVar49 >> 0x38);
          auVar42[8] = (undefined1)uVar68;
          bVar46 = (byte)(uVar68 >> 8);
          auVar42[9] = bVar46 | (byte)(uVar67 >> 8);
          bVar57 = (byte)(uVar68 >> 0x10);
          auVar42[10] = bVar57 | (byte)(uVar67 >> 0x10);
          bVar58 = (byte)(uVar68 >> 0x18);
          auVar42[0xb] = bVar58 | (byte)(uVar67 >> 0x18);
          auVar42[0xc] = auVar42[8];
          auVar42[0xd] = bVar46 | (byte)(uVar70 >> 8);
          auVar42[0xe] = bVar57 | (byte)(uVar70 >> 0x10);
          auVar42[0xf] = bVar58 | (byte)(uVar70 >> 0x18);
          if (3 < (int)uVar68) {
            auVar74._4_12_ = stack0xfffffffffffff704;
            auVar74._0_4_ = local_900._0_4_;
            uVar37 = auVar74._0_8_ & 0xffffff00ffffff00;
            uVar68 = local_900._8_4_ & 0xffffff00;
            uVar67 = local_900._12_4_ & 0xffffff00;
            auVar79[1] = (byte)(uVar37 >> 8) | (byte)((ulong)uVar29 >> 8);
            auVar79[0] = (char)uVar29;
            auVar79[2] = (byte)(uVar37 >> 0x10) | (byte)((ulong)uVar29 >> 0x10);
            auVar79[3] = (byte)(uVar37 >> 0x18) | (byte)((ulong)uVar29 >> 0x18);
            auVar79[4] = (char)((ulong)uVar29 >> 0x20);
            auVar79[5] = (byte)(uVar37 >> 0x28) | (byte)((ulong)uVar29 >> 0x28);
            auVar79[6] = (byte)(uVar37 >> 0x30) | (byte)((ulong)uVar29 >> 0x30);
            auVar79[7] = (byte)(uVar37 >> 0x38) | (byte)((ulong)uVar29 >> 0x38);
            auVar79[8] = (char)uVar30;
            auVar79[9] = (byte)(uVar68 >> 8) | (byte)((ulong)uVar30 >> 8);
            auVar79[10] = (byte)(uVar68 >> 0x10) | (byte)((ulong)uVar30 >> 0x10);
            auVar79[0xb] = (byte)(uVar68 >> 0x18) | (byte)((ulong)uVar30 >> 0x18);
            auVar79[0xc] = (char)((ulong)uVar30 >> 0x20);
            auVar79[0xd] = (byte)(uVar67 >> 8) | (byte)((ulong)uVar30 >> 0x28);
            auVar79[0xe] = (byte)(uVar67 >> 0x10) | (byte)((ulong)uVar30 >> 0x30);
            auVar79[0xf] = (byte)(uVar67 >> 0x18) | (byte)((ulong)uVar30 >> 0x38);
            auVar42 = NEON_smin(auVar79,auVar42,4);
            if (7 < uVar39) {
              auVar52._8_8_ = uVar26;
              auVar52._0_8_ = uVar25;
              lVar36 = 0x81;
              do {
                uVar68 = (uint)*(undefined8 *)(local_1100 + lVar36 * 4) & 0xffffff00;
                uVar67 = (uint)((ulong)*(undefined8 *)(local_1100 + lVar36 * 4) >> 0x20) &
                         0xffffff00;
                uVar70 = (uint)auStack_10f8[lVar36 * 2] & 0xffffff00;
                uVar7 = (uint)((ulong)auStack_10f8[lVar36 * 2] >> 0x20) & 0xffffff00;
                auVar3[1] = (byte)(uVar68 >> 8) | auVar52[1];
                auVar3[0] = auVar52[0];
                auVar3[2] = (byte)(uVar68 >> 0x10) | auVar52[2];
                auVar3[3] = (byte)(uVar68 >> 0x18) | auVar52[3];
                auVar3[4] = auVar52[4];
                auVar3[5] = (byte)(uVar67 >> 8) | auVar52[5];
                auVar3[6] = (byte)(uVar67 >> 0x10) | auVar52[6];
                auVar3[7] = (byte)(uVar67 >> 0x18) | auVar52[7];
                auVar3[8] = auVar52[8];
                auVar3[9] = (byte)(uVar70 >> 8) | auVar52[9];
                auVar3[10] = (byte)(uVar70 >> 0x10) | auVar52[10];
                auVar3[0xb] = (byte)(uVar70 >> 0x18) | auVar52[0xb];
                auVar3[0xc] = auVar52[0xc];
                auVar3[0xd] = (byte)(uVar7 >> 8) | auVar52[0xd];
                auVar3[0xe] = (byte)(uVar7 >> 0x10) | auVar52[0xe];
                auVar3[0xf] = (byte)(uVar7 >> 0x18) | auVar52[0xf];
                auVar42 = NEON_smin(auVar3,auVar42,4);
                auVar53._0_4_ = auVar52._0_4_ + 4;
                auVar53._4_4_ = auVar52._4_4_ + 4;
                auVar53._8_4_ = auVar52._8_4_ + 4;
                auVar53._12_4_ = auVar52._12_4_ + 4;
                uVar37 = lVar36 - 0x7f;
                lVar36 = lVar36 + 1;
                auVar52 = auVar53;
              } while (uVar37 < uVar39 >> 2);
            }
          }
          uVar39 = NEON_sminv(auVar42,4);
          uVar39 = uVar39 & 0xff;
          if (local_100 <= (int)uVar39) {
            return;
          }
        }
        else {
          uVar39 = local_100 - 1;
        }
        local_100 = local_100 + -1;
        uVar37 = (ulong)uVar39;
        uVar39 = local_1100[uVar37];
        *(undefined4 *)(local_900 + uVar37 * 4) = *(undefined4 *)(local_900 + (long)local_100 * 4);
        local_1100[uVar37] = local_1100[local_100];
        if ((uVar39 & 1) == 0) break;
        lVar36 = param_4[1];
        uVar80 = (ulong)(uVar39 >> 1);
        lVar38 = lVar36 + uVar80 * 0xc0;
        if ((~*(uint *)(lVar38 + 0x50) & 0xffffff) != 0) {
          lVar34 = param_4[2];
          lVar35 = *(long *)(lVar34 + 0x38);
          if ((lVar35 == 0) || (*(uint *)(lVar38 + 0x50) != *(uint *)(lVar35 + 0x50))) {
            plVar32 = *(long **)(lVar34 + 8);
            if (plVar32 != (long *)0x0) {
              if (lVar35 != 0) {
                uVar33 = (**(code **)(*plVar32 + 0x38))
                                   (plVar32,5,*(undefined8 *)(lVar35 + 0xb0),
                                    *(undefined8 *)(lVar36 + uVar80 * 0xc0 + 0xb0));
                if ((uVar33 & 1) == 0) goto LAB_02f65f0c;
                lVar34 = param_4[2];
              }
              uVar33 = (**(code **)(**(long **)(lVar34 + 8) + 0x30))
                                 (*(long **)(lVar34 + 8),5,lVar34 + 0x10,lVar38);
              if ((uVar33 & 1) == 0) goto LAB_02f65f0c;
              lVar34 = param_4[2];
            }
            lVar36 = lVar36 + uVar80 * 0xc0;
            local_e8 = *(undefined8 *)(lVar36 + 0x78);
            local_88[0] = *(undefined2 *)(lVar36 + 0x8a);
            local_84 = *(undefined4 *)(lVar36 + 0x8c);
            local_80 = *(undefined8 *)(lVar36 + 0x98);
            local_d8 = 0xffffffff;
            uStack_e0 = 0;
            uStack_c4 = 0;
            local_d4 = 0;
            uStack_c8 = 0;
            local_bc = 0;
            local_a0 = 0;
            uStack_98 = 0;
            local_f0 = lVar38;
            local_b0 = auVar41._0_8_;
            uStack_a8 = auVar41._8_8_;
            uStack_d0 = lVar38;
            FUN_02ffa204(*param_4,lVar34,param_4 + 4,local_e8,local_88,&local_f0,param_4[0x10]);
            bVar31 = *(char *)(param_4[0x10] + 0x18) != '\0';
            uVar40 = NEON_fmax(*(undefined8 *)(param_4[0x10] + 0x10),0,4);
            *(bool *)(param_4 + 0x11) = bVar31;
            fVar45 = (float)((ulong)uVar40 >> 0x20);
            uVar80 = CONCAT44(fVar45 * fVar45,(float)uVar40 * (float)uVar40);
            uVar33 = uVar80;
            if (bVar31) {
              return;
            }
            goto LAB_02f65f1c;
          }
        }
LAB_02f65f0c:
        uVar80 = CONCAT44(fVar45,fVar45);
        uVar33 = uVar80;
        if (*(char *)(param_4 + 0x11) != '\0') {
          return;
        }
LAB_02f65f1c:
        if (local_100 == 0) {
          return;
        }
      }
      pfVar1 = (float *)((long)param_1 + (ulong)(uVar39 >> 1) * 0x80 + *param_1);
      auVar73._0_4_ = fVar19 - pfVar1[0xc];
      auVar73._4_4_ = fVar20 - pfVar1[0xd];
      auVar73._8_4_ = fVar21 - pfVar1[0xe];
      auVar73._12_4_ = fVar22 - pfVar1[0xf];
      fVar2 = (float)*(undefined8 *)(pfVar1 + 4);
      auVar43._0_4_ = fVar15 - fVar2;
      fVar4 = (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20);
      auVar43._4_4_ = fVar16 - fVar4;
      fVar5 = (float)*(undefined8 *)(pfVar1 + 6);
      auVar43._8_4_ = fVar17 - fVar5;
      fVar6 = (float)((ulong)*(undefined8 *)(pfVar1 + 6) >> 0x20);
      auVar43._12_4_ = fVar18 - fVar6;
      auVar78._0_4_ = fVar23 - pfVar1[0x14];
      auVar78._4_4_ =
           (float)(CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar12,CONCAT14(uVar11,fVar23)))) >>
                  0x20) - pfVar1[0x15];
      auVar78._8_4_ = fVar24 - pfVar1[0x16];
      auVar78._12_4_ =
           (float)(CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar12,CONCAT14(uVar11,fVar24)))) >>
                  0x20) - pfVar1[0x17];
      iVar48 = -(uint)(*pfVar1 <= fVar2);
      iVar62 = -(uint)(pfVar1[1] <= fVar4);
      iVar69 = -(uint)(pfVar1[2] <= fVar5);
      iVar71 = -(uint)(pfVar1[3] <= fVar6);
      auVar42 = NEON_smax(auVar43,ZEXT816(0),4);
      auVar74 = NEON_smax(auVar73,ZEXT816(0),4);
      auVar9._4_4_ = fVar47 - pfVar1[1];
      auVar9._0_4_ = fVar47 - *pfVar1;
      auVar9._8_4_ = fVar47 - pfVar1[2];
      auVar9._12_4_ = fVar47 - pfVar1[3];
      auVar42 = NEON_smin(auVar42,auVar9,4);
      auVar8._4_4_ = fVar61 - (float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20);
      auVar8._0_4_ = fVar61 - (float)*(undefined8 *)(pfVar1 + 8);
      auVar8._8_4_ = fVar61 - (float)*(undefined8 *)(pfVar1 + 10);
      auVar8._12_4_ = fVar61 - (float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20);
      auVar74 = NEON_smin(auVar74,auVar8,4);
      auVar79 = NEON_smax(auVar78,ZEXT816(0),4);
      auVar10._4_4_ = fVar66 - (float)((ulong)*(undefined8 *)(pfVar1 + 0x10) >> 0x20);
      auVar10._0_4_ = fVar66 - (float)*(undefined8 *)(pfVar1 + 0x10);
      auVar10._8_4_ = fVar66 - (float)*(undefined8 *)(pfVar1 + 0x12);
      auVar10._12_4_ = fVar66 - (float)((ulong)*(undefined8 *)(pfVar1 + 0x12) >> 0x20);
      auVar79 = NEON_smin(auVar79,auVar10,4);
      auVar44._0_4_ =
           auVar42._0_4_ * auVar42._0_4_ + auVar74._0_4_ * auVar74._0_4_ +
           auVar79._0_4_ * auVar79._0_4_;
      auVar44._4_4_ =
           auVar42._4_4_ * auVar42._4_4_ + auVar74._4_4_ * auVar74._4_4_ +
           auVar79._4_4_ * auVar79._4_4_;
      auVar44._8_4_ =
           auVar42._8_4_ * auVar42._8_4_ + auVar74._8_4_ * auVar74._8_4_ +
           auVar79._8_4_ * auVar79._8_4_;
      auVar44._12_4_ =
           auVar42._12_4_ * auVar42._12_4_ + auVar74._12_4_ * auVar74._12_4_ +
           auVar79._12_4_ * auVar79._12_4_;
      iVar72 = -(uint)(auVar44._0_4_ <= fVar45);
      iVar75 = -(uint)(auVar44._4_4_ <= (float)(uVar80 >> 0x20));
      iVar76 = -(uint)(auVar44._8_4_ <= (float)uVar33);
      iVar77 = -(uint)(auVar44._12_4_ <= fVar81);
      bVar46 = (byte)iVar72 & (byte)iVar48;
      bVar57 = (byte)((uint)iVar72 >> 8) & (byte)((uint)iVar48 >> 8);
      bVar58 = (byte)((uint)iVar72 >> 0x10) & (byte)((uint)iVar48 >> 0x10);
      bVar59 = (byte)((uint)iVar72 >> 0x18) & (byte)((uint)iVar48 >> 0x18);
      iVar48 = CONCAT13(bVar59,CONCAT12(bVar58,CONCAT11(bVar57,bVar46)));
      bVar60 = (byte)iVar75 & (byte)iVar62;
      bVar63 = (byte)((uint)iVar75 >> 8) & (byte)((uint)iVar62 >> 8);
      bVar64 = (byte)((uint)iVar75 >> 0x10) & (byte)((uint)iVar62 >> 0x10);
      bVar65 = (byte)((uint)iVar75 >> 0x18) & (byte)((uint)iVar62 >> 0x18);
      auVar50._0_8_ = CONCAT17(bVar65,CONCAT16(bVar64,CONCAT15(bVar63,CONCAT14(bVar60,iVar48))));
      auVar50[8] = (byte)iVar76 & (byte)iVar69;
      auVar50[9] = (byte)((uint)iVar76 >> 8) & (byte)((uint)iVar69 >> 8);
      auVar50[10] = (byte)((uint)iVar76 >> 0x10) & (byte)((uint)iVar69 >> 0x10);
      auVar50[0xb] = (byte)((uint)iVar76 >> 0x18) & (byte)((uint)iVar69 >> 0x18);
      auVar54[0xc] = (byte)iVar77 & (byte)iVar71;
      auVar54._0_12_ = auVar50;
      auVar54[0xd] = (byte)((uint)iVar77 >> 8) & (byte)((uint)iVar71 >> 8);
      auVar54[0xe] = (byte)((uint)iVar77 >> 0x10) & (byte)((uint)iVar71 >> 0x10);
      auVar54[0xf] = (byte)((uint)iVar77 >> 0x18) & (byte)((uint)iVar71 >> 0x18);
      if (((iVar48 == 0 && (int)((ulong)auVar50._0_8_ >> 0x20) == 0) && auVar50._8_4_ == 0) &&
          auVar54._12_4_ == 0) goto LAB_02f65f1c;
      iVar48 = CONCAT13(bVar59 & (byte)((ulong)uVar27 >> 0x18),
                        CONCAT12(bVar58 & (byte)((ulong)uVar27 >> 0x10),
                                 CONCAT11(bVar57 & (byte)((ulong)uVar27 >> 8),bVar46 & (byte)uVar27)
                                ));
      auVar51._0_8_ =
           CONCAT17(bVar65 & (byte)((ulong)uVar27 >> 0x38),
                    CONCAT16(bVar64 & (byte)((ulong)uVar27 >> 0x30),
                             CONCAT15(bVar63 & (byte)((ulong)uVar27 >> 0x28),
                                      CONCAT14(bVar60 & (byte)((ulong)uVar27 >> 0x20),iVar48))));
      auVar51[8] = auVar50[8] & (byte)uVar28;
      auVar51[9] = auVar50[9] & (byte)((ulong)uVar28 >> 8);
      auVar51[10] = auVar50[10] & (byte)((ulong)uVar28 >> 0x10);
      auVar51[0xb] = auVar50[0xb] & (byte)((ulong)uVar28 >> 0x18);
      auVar55[0xc] = auVar54[0xc] & (byte)((ulong)uVar28 >> 0x20);
      auVar55._0_12_ = auVar51;
      auVar55[0xd] = auVar54[0xd] & (byte)((ulong)uVar28 >> 0x28);
      auVar55[0xe] = auVar54[0xe] & (byte)((ulong)uVar28 >> 0x30);
      auVar55[0xf] = auVar54[0xf] & (byte)((ulong)uVar28 >> 0x38);
      uVar37 = (ulong)(uint)(iVar48 + (int)((ulong)auVar51._0_8_ >> 0x20) +
                            auVar51._8_4_ + auVar55._12_4_);
      iVar48 = *(int *)(&DAT_03aadfe0 + uVar37 * 4);
      auVar74 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pfVar1 + 0x18),
                        *(undefined1 (*) [16])(&DAT_03aae120 + uVar37 * 0x10));
      auVar42 = a64_TBL(ZEXT816(0),auVar44,*(undefined1 (*) [16])(&DAT_03aae120 + uVar37 * 0x10));
      iVar62 = auVar74._0_4_ << 1;
      iVar69 = auVar74._4_4_ << 1;
      iVar71 = auVar74._8_4_ << 1;
      iVar72 = auVar74._12_4_ << 1;
      bVar46 = -(*(char *)(pfVar1 + 0x1c) == '\0');
      auVar56._0_8_ =
           CONCAT17((char)((uint)iVar69 >> 0x18),
                    CONCAT16((char)((uint)iVar69 >> 0x10),
                             CONCAT15((char)((uint)iVar69 >> 8),
                                      CONCAT14(~bVar46 & 1 | (byte)iVar69,
                                               CONCAT13((char)((uint)iVar62 >> 0x18),
                                                        CONCAT12((char)((uint)iVar62 >> 0x10),
                                                                 CONCAT11((char)((uint)iVar62 >> 8),
                                                                          ~bVar46 & 1 | (byte)iVar62
                                                                         )))))));
      auVar56[8] = ~bVar46 & 1 | (byte)iVar71;
      auVar56[9] = (undefined1)((uint)iVar71 >> 8);
      auVar56[10] = (undefined1)((uint)iVar71 >> 0x10);
      auVar56[0xb] = (undefined1)((uint)iVar71 >> 0x18);
      auVar56[0xc] = ~bVar46 & 1 | (byte)iVar72;
      auVar56[0xd] = (undefined1)((uint)iVar72 >> 8);
      auVar56[0xe] = (undefined1)((uint)iVar72 >> 0x10);
      auVar56[0xf] = (undefined1)((uint)iVar72 >> 0x18);
      *(undefined8 *)(local_1100 + local_100) = auVar56._0_8_;
      auVar74 = NEON_ext(auVar56,auVar56,8,1);
      *(long *)((long)auStack_10f8 + (long)local_100 * 4) = auVar74._0_8_;
      lVar36 = (long)local_100;
      *(long *)((long)auStack_8f8 + lVar36 * 4) = auVar42._8_8_;
      *(long *)(local_900 + lVar36 * 4) = auVar42._0_8_;
      local_100 = local_100 + iVar48;
    } while (local_100 != 0);
  }
  return;
}


