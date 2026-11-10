/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03074420; name: FUN_03074420
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_03074420(long param_1,undefined8 param_2,long *param_3,long *param_4,undefined8 *param_5,
            undefined8 *param_6,ulong param_7,long param_8,undefined4 *param_9)

{
  undefined1 (*pauVar1) [12];
  char cVar2;
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  undefined8 uVar12;
  long *plVar13;
  uint uVar14;
  ulong uVar15;
  unkbyte9 *pVar16;
  float *pfVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  int iVar39;
  int iVar41;
  undefined8 uVar40;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined4 uVar46;
  float fVar47;
  undefined8 uVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [12];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar54;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined8 uVar55;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined8 uVar67;
  undefined8 local_1b30;
  undefined8 uStack_1b28;
  long local_1b20;
  long lStack_1b18;
  long lStack_1b10;
  long local_1b08;
  long lStack_1b00;
  long local_1af8;
  undefined8 *local_1af0;
  long local_1ae0;
  long local_1ad8;
  long local_1ad0;
  long lStack_1ac8;
  long lStack_1ac0;
  long local_1ab8;
  undefined8 *local_1ab0;
  undefined8 local_1aa0;
  undefined8 uStack_1a98;
  undefined8 uStack_1a90;
  undefined8 uStack_1a88;
  float local_1a80;
  float fStack_1a7c;
  float fStack_1a78;
  float fStack_1a74;
  undefined8 local_1a70;
  undefined8 uStack_1a68;
  undefined8 local_1a60;
  undefined8 uStack_1a58;
  undefined8 local_1a50;
  undefined8 uStack_1a48;
  undefined8 local_1a40;
  undefined8 uStack_1a38;
  undefined8 local_1a30;
  undefined8 uStack_1a28;
  undefined8 local_1a20;
  undefined8 uStack_1a18;
  undefined8 local_1a10;
  undefined8 local_1a08;
  undefined8 local_1a00;
  undefined8 local_19f8;
  undefined8 local_19f0;
  undefined8 uStack_19e8;
  undefined8 local_19e0;
  undefined8 uStack_19d8;
  undefined8 local_19d0;
  undefined8 uStack_19c8;
  undefined8 local_19c0;
  undefined8 uStack_19b8;
  undefined8 local_1900;
  ulong uStack_18f8;
  undefined8 local_18e8;
  undefined8 local_18e0;
  undefined4 uStack_18d8;
  float local_18d4;
  float fStack_18d0;
  float local_18cc;
  float local_18c8;
  undefined1 auStack_18c0 [3024];
  float local_cf0;
  float fStack_cec;
  float fStack_ce8;
  float fStack_ce4;
  undefined8 local_ce0;
  undefined8 uStack_cd8;
  undefined8 local_cd0;
  float local_cc8;
  undefined4 local_120 [2];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_e0 [2];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulong local_98;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  
  uVar14 = *(uint *)(*param_4 + 0x54);
  if ((*(byte *)(*param_3 + 0x54) & 9) == 0) {
    if ((uVar14 & 1) != 0) {
      return 0;
    }
    if ((uVar14 & 9) == 0) {
      return 0;
    }
LAB_03074484:
    uVar18 = (ulong)*(byte *)(*param_3 + 0x89);
    lVar19 = *(long *)(param_1 + 0x10);
    uVar15 = (ulong)*(byte *)(*param_4 + 0x89);
    if (*(int *)(lVar19 + uVar15 * 0x40 + 0x18) <= *(int *)(lVar19 + uVar18 * 0x40 + 0x18)) {
      uVar15 = uVar18;
    }
    fVar58 = *(float *)(param_6 + 3);
    if (*(float *)(lVar19 + uVar15 * 0x40 + 0x3c) <= fVar58) {
      uVar67 = *(undefined8 *)(param_3[1] + 0x68);
      uVar48 = *(undefined8 *)(param_3[1] + 0x60);
      uVar40 = *(undefined8 *)(param_4[1] + 0x68);
      uVar55 = *(undefined8 *)(param_4[1] + 0x60);
      pVar16 = (unkbyte9 *)param_3[6];
      uVar12 = *(undefined8 *)((long)pVar16 + 8);
      uVar22 = (undefined1)((ulong)uVar12 >> 8);
      uVar23 = (undefined1)((ulong)uVar12 >> 0x10);
      uVar24 = (undefined1)((ulong)uVar12 >> 0x18);
      uVar25 = (undefined1)((ulong)uVar12 >> 0x20);
      uVar34 = (undefined1)((ulong)uVar12 >> 0x28);
      uVar35 = (undefined1)((ulong)uVar12 >> 0x30);
      uVar37 = (undefined1)((ulong)uVar12 >> 0x38);
      auVar9 = *(undefined1 (*) [16])(pVar16 + 1);
      pauVar1 = (undefined1 (*) [12])(pVar16 + 2);
      uVar46 = (undefined4)((ulong)*(undefined8 *)((long)pVar16 + 0x28) >> 0x20);
      fVar47 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
      fVar61 = (float)uVar55;
      fVar64 = (float)uVar48;
      fVar54 = fVar64 - fVar61;
      fVar62 = (float)((ulong)uVar55 >> 0x20);
      fVar65 = (float)((ulong)uVar48 >> 0x20);
      fVar56 = fVar65 - fVar62;
      fVar63 = (float)uVar40;
      fVar66 = (float)uVar67;
      fVar59 = fVar66 - fVar63;
      auVar52 = NEON_ext(auVar9,auVar9,8,1);
      auVar49[9] = uVar22;
      auVar49._0_9_ = *pVar16;
      auVar49[10] = uVar23;
      auVar49[0xb] = uVar24;
      auVar49[0xc] = uVar25;
      auVar49[0xd] = uVar34;
      auVar49[0xe] = uVar35;
      auVar49[0xf] = uVar37;
      auVar53[9] = uVar22;
      auVar53._0_9_ = *pVar16;
      auVar53[10] = uVar23;
      auVar53[0xb] = uVar24;
      auVar53[0xc] = uVar25;
      auVar53[0xd] = uVar34;
      auVar53[0xe] = uVar35;
      auVar53[0xf] = uVar37;
      auVar49 = NEON_ext(auVar49,auVar53,8,1);
      auVar7._12_4_ = uVar46;
      auVar7._0_12_ = *pauVar1;
      auVar8._12_4_ = uVar46;
      auVar8._0_12_ = *pauVar1;
      auVar53 = NEON_ext(auVar7,auVar8,8,1);
      fVar42 = auVar49._0_4_ * fVar59 +
               (float)*(undefined8 *)pVar16 * fVar54 +
               (float)((ulong)*(undefined8 *)pVar16 >> 0x20) * fVar56;
      fVar43 = auVar52._0_4_ * fVar59 + auVar9._0_4_ * fVar54 + auVar9._4_4_ * fVar56;
      fVar45 = auVar53._0_4_ * fVar59 + (float)*(undefined8 *)*pauVar1 * fVar54 + fVar47 * fVar56;
      fVar47 = auVar53._4_4_ * fVar59 + fVar47 * fVar54 + auVar53._4_4_ * fVar56;
      local_98 = *(ulong *)(*(long *)(param_1 + 8) + 0x540);
      fVar60 = fVar59 * fVar59 + fVar54 * fVar54 + fVar56 * fVar56;
      uVar12 = CONCAT44(fVar59 * fVar59 + fVar54 * fVar54 + fVar56 * fVar56,fVar60);
      if (fVar58 * fVar58 <= (float)local_98 * (float)local_98 * fVar60) {
        local_d8 = 0;
        uStack_d0 = 0;
        local_e0[0] = 7;
        local_120[0] = 7;
        local_110 = 0;
        local_118 = 0;
        local_100 = 0;
        local_108 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_90 = fVar42;
        fStack_8c = fVar43;
        fStack_88 = fVar45;
        fStack_84 = fVar47;
        (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(param_3[5] + 0x18) * 0x200 + 0xa8))
                  (param_3[5],local_e0,&local_cf0,local_120);
        (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(param_4[5] + 0x18) * 0x200 + 0xa8))
                  (param_4[5],local_120,auStack_18c0,&local_cf0);
        uVar15 = FUN_03072400(local_e0,local_120,param_5,&local_90,&local_98,1,
                              (undefined4 *)(param_8 + 0x10),&local_18e0,&local_18e8);
        uVar55 = local_18e8;
        bVar11 = false;
        uStack_18f8 = 0;
        local_1900 = 0;
        if ((float)local_18e8 <= 0.0) {
LAB_030749b4:
          auVar10._8_8_ = CONCAT44(fVar47,fVar45);
          auVar10._0_8_ = CONCAT44(fVar43,fVar42);
          auVar51 = auVar10._0_12_;
        }
        else {
          auVar9._8_8_ = CONCAT44(fVar47,fVar45);
          auVar9._0_8_ = CONCAT44(fVar43,fVar42);
          auVar51 = auVar9._0_12_;
          if ((uVar15 & 1) == 0) {
            fVar58 = fVar42 * local_18d4;
            fVar60 = fVar43 * fStack_18d0;
            uVar22 = (undefined1)((uint)fVar60 >> 8);
            uVar23 = (undefined1)((uint)fVar60 >> 0x10);
            uVar24 = (undefined1)((uint)fVar60 >> 0x18);
            fVar57 = fVar45 * local_18cc;
            uVar25 = (undefined1)((uint)fVar57 >> 8);
            uVar34 = (undefined1)((uint)fVar57 >> 0x10);
            uVar35 = (undefined1)((uint)fVar57 >> 0x18);
            fVar44 = fVar47 * (float)CONCAT13((char)((uint)local_18cc >> 0x18),
                                              CONCAT12((char)((uint)local_18cc >> 0x10),
                                                       (short)(CONCAT15((char)((uint)local_18cc >> 8
                                                                              ),CONCAT14(SUB41(
                                                  local_18cc,0),local_18cc)) >> 0x20)));
            uVar37 = (undefined1)((uint)fVar44 >> 8);
            uVar36 = (undefined1)((uint)fVar44 >> 0x10);
            uVar38 = (undefined1)((uint)fVar44 >> 0x18);
            auVar52[4] = SUB41(fVar60,0);
            auVar52._0_4_ = fVar58;
            auVar52[5] = uVar22;
            auVar52[6] = uVar23;
            auVar52[7] = uVar24;
            auVar52[8] = SUB41(fVar57,0);
            auVar52[9] = uVar25;
            auVar52[10] = uVar34;
            auVar52[0xb] = uVar35;
            auVar52[0xc] = SUB41(fVar44,0);
            auVar52[0xd] = uVar37;
            auVar52[0xe] = uVar36;
            auVar52[0xf] = uVar38;
            auVar6[4] = SUB41(fVar60,0);
            auVar6._0_4_ = fVar58;
            auVar6[5] = uVar22;
            auVar6[6] = uVar23;
            auVar6[7] = uVar24;
            auVar6[8] = SUB41(fVar57,0);
            auVar6[9] = uVar25;
            auVar6[10] = uVar34;
            auVar6[0xb] = uVar35;
            auVar6[0xc] = SUB41(fVar44,0);
            auVar6[0xd] = uVar37;
            auVar6[0xe] = uVar36;
            auVar6[0xf] = uVar38;
            auVar49 = NEON_ext(auVar52,auVar6,8,1);
            if (local_18c8 - (float)local_18e8 * (fVar58 + fVar60 + auVar49._0_4_) < 0.0) {
              fVar58 = local_90 * local_90 + fStack_8c * fStack_8c + fStack_88 * fStack_88;
              fVar57 = local_90 * local_90 + fStack_8c * fStack_8c + fStack_88 * fStack_88;
              uVar22 = SUB41(fVar57,0);
              uVar23 = (undefined1)((uint)fVar57 >> 8);
              uVar24 = (undefined1)((uint)fVar57 >> 0x10);
              uVar25 = (undefined1)((uint)fVar57 >> 0x18);
              uVar48 = NEON_frsqrte(CONCAT17(uVar25,CONCAT16(uVar24,CONCAT15(uVar23,CONCAT14(uVar22,
                                                  fVar58)))),4);
              fVar60 = (float)uVar48;
              fVar44 = (float)((ulong)uVar48 >> 0x20);
              uVar48 = NEON_frsqrts(CONCAT17(uVar25,CONCAT16(uVar24,CONCAT15(uVar23,CONCAT14(uVar22,
                                                  fVar58)))),
                                    CONCAT44(fVar44 * fVar44,fVar60 * fVar60),4);
              fVar60 = fVar60 * (float)uVar48;
              fVar44 = fVar44 * (float)((ulong)uVar48 >> 0x20);
              iVar39 = -(uint)(fVar58 <= 0.0);
              iVar41 = -(uint)(fVar57 <= 0.0);
              uVar48 = NEON_frsqrts(CONCAT17(uVar25,CONCAT16(uVar24,CONCAT15(uVar23,CONCAT14(uVar22,
                                                  fVar58)))),
                                    CONCAT44(fVar44 * fVar44,fVar60 * fVar60),4);
              fVar60 = (float)uVar48 * fVar60;
              fVar44 = (float)((ulong)uVar48 >> 0x20) * fVar44;
              bVar26 = SUB41(fVar60,0) & ~(byte)iVar39;
              bVar27 = (byte)((uint)fVar60 >> 8) & ~(byte)((uint)iVar39 >> 8);
              bVar28 = (byte)((uint)fVar60 >> 0x10) & ~(byte)((uint)iVar39 >> 0x10);
              bVar29 = (byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18);
              bVar30 = SUB41(fVar44,0) & ~(byte)iVar41;
              bVar31 = (byte)((uint)fVar44 >> 8) & ~(byte)((uint)iVar41 >> 8);
              bVar32 = (byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar41 >> 0x10);
              bVar33 = (byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18);
              fVar58 = fStack_8c * (float)CONCAT13(bVar33,CONCAT12(bVar32,CONCAT11(bVar31,bVar30)));
              fVar60 = fStack_84 * (float)CONCAT13(bVar33,CONCAT12(bVar32,CONCAT11(bVar31,bVar30)));
              lStack_1b18 = CONCAT17((char)((uint)fVar60 >> 0x18),
                                     CONCAT16((char)((uint)fVar60 >> 0x10),
                                              CONCAT15((char)((uint)fVar60 >> 8),
                                                       CONCAT14(SUB41(fVar60,0),
                                                                fStack_88 *
                                                                (float)CONCAT13(bVar29,CONCAT12(
                                                  bVar28,CONCAT11(bVar27,bVar26)))))));
              local_1b20 = CONCAT17((char)((uint)fVar58 >> 0x18),
                                    CONCAT16((char)((uint)fVar58 >> 0x10),
                                             CONCAT15((char)((uint)fVar58 >> 8),
                                                      CONCAT14(SUB41(fVar58,0),
                                                               local_90 *
                                                               (float)CONCAT13(bVar29,CONCAT12(
                                                  bVar28,CONCAT11(bVar27,bVar26)))))));
              FUN_030763bc(&local_1aa0,&local_1b20,param_5);
              uStack_1a48 = param_5[1];
              local_1a50 = *param_5;
              uStack_1a38 = param_5[3];
              local_1a40 = param_5[2];
              uStack_1a28 = param_5[5];
              local_1a30 = param_5[4];
              uStack_1a18 = param_5[7];
              local_1a20 = param_5[6];
              local_1a10 = 0x5f7ffff05f7ffff0;
              local_1a08 = 0x3fb3333300000001;
              local_1a60 = CONCAT44(CONCAT31(local_1a60._5_3_,*(undefined1 *)(param_8 + 0x14)),
                                    *(undefined4 *)(param_8 + 0x10));
              iVar39 = FUN_00180ef4(&local_1a00,&local_1aa0,local_e0,local_120,&local_1a50,
                                    &local_1a60,&local_1ae0);
              if (iVar39 == 0) {
                local_18e0 = *param_6;
                uVar55 = 0;
                bVar11 = true;
                local_18c8 = *(float *)(param_6 + 3);
                local_18e8 = 0;
                fStack_18d0 = (float)param_6[2];
                local_18cc = (float)((ulong)param_6[2] >> 0x20);
                uStack_18d8 = (undefined4)param_6[1];
                local_18d4 = (float)((ulong)param_6[1] >> 0x20);
                puVar20 = (undefined8 *)param_3[6];
                fVar60 = (float)((ulong)local_1ad0 >> 0x20);
                fVar58 = (float)local_1ad0;
                fVar57 = (float)((ulong)*puVar20 >> 0x20) * fVar58 +
                         *(float *)((long)puVar20 + 0x14) * fVar60 +
                         (float)((ulong)puVar20[4] >> 0x20) * (float)lStack_1ac8;
                uStack_18f8 = (ulong)(uint)((float)puVar20[1] * fVar58 +
                                            *(float *)(puVar20 + 3) * fVar60 +
                                           (float)puVar20[5] * (float)lStack_1ac8);
                local_1900 = CONCAT17((char)((uint)fVar57 >> 0x18),
                                      CONCAT16((char)((uint)fVar57 >> 0x10),
                                               CONCAT15((char)((uint)fVar57 >> 8),
                                                        CONCAT14(SUB41(fVar57,0),
                                                                 (float)*puVar20 * fVar58 +
                                                                 *(float *)(puVar20 + 2) * fVar60 +
                                                                 (float)puVar20[4] *
                                                                 (float)lStack_1ac8))));
              }
              else {
                bVar11 = false;
              }
              goto LAB_030749b4;
            }
          }
          bVar11 = false;
        }
        uStack_1a98 = param_5[1];
        local_1aa0 = *param_5;
        uStack_1a88 = param_5[3];
        uStack_1a90 = param_5[2];
        fVar47 = auVar51._4_4_;
        local_1ab0 = &local_1a00;
        local_1a80 = *(float *)(param_5 + 4);
        fStack_1a7c = *(float *)((long)param_5 + 0x24);
        fStack_1a78 = *(float *)(param_5 + 5);
        fStack_1a74 = *(float *)((long)param_5 + 0x2c);
        local_1af0 = &local_1a50;
        fVar42 = auVar51._0_4_;
        fVar43 = auVar51._8_4_;
        fVar45 = (float)uVar55;
        fVar57 = (float)((ulong)uVar55 >> 0x20);
        fVar60 = fVar45 * ((float)local_1aa0 * fVar42 + (float)uStack_1a90 * fVar47 +
                          local_1a80 * fVar43);
        fVar58 = fVar57 * ((float)((ulong)local_1aa0 >> 0x20) * fVar42 +
                           (float)((ulong)uStack_1a90 >> 0x20) * fVar47 + fStack_1a7c * fVar43);
        local_1a60 = CONCAT44(fVar58,fVar60);
        fVar44 = fVar45 * ((float)uStack_1a98 * fVar42 + (float)uStack_1a88 * fVar47 +
                          fStack_1a78 * fVar43);
        fVar42 = fVar57 * ((float)((ulong)uStack_1a98 >> 0x20) * fVar42 +
                           (float)((ulong)uStack_1a88 >> 0x20) * fVar47 + fStack_1a74 * fVar43);
        uStack_1a58 = CONCAT44(fVar42,fVar44);
        fVar58 = fVar58 + (float)((ulong)param_5[6] >> 0x20);
        fVar42 = fVar42 + (float)((ulong)param_5[7] >> 0x20);
        uStack_1a68 = CONCAT17((char)((uint)fVar42 >> 0x18),
                               CONCAT16((char)((uint)fVar42 >> 0x10),
                                        CONCAT15((char)((uint)fVar42 >> 8),
                                                 CONCAT14(SUB41(fVar42,0),fVar44 + (float)param_5[7]
                                                         ))));
        local_1a70 = CONCAT17((char)((uint)fVar58 >> 0x18),
                              CONCAT16((char)((uint)fVar58 >> 0x10),
                                       CONCAT15((char)((uint)fVar58 >> 8),
                                                CONCAT14(SUB41(fVar58,0),fVar60 + (float)param_5[6])
                                               )));
        local_1ae0 = *param_3;
        local_1ad8 = param_3[1];
        local_1ad0 = param_3[2];
        lStack_1ac8 = param_3[3];
        lStack_1ac0 = param_3[4];
        local_1ab8 = param_3[5];
        lStack_1b10 = param_4[2];
        local_1b20 = *param_4;
        lStack_1b18 = param_4[1];
        local_1b08 = param_4[3];
        lStack_1b00 = param_4[4];
        local_1af8 = param_4[5];
        puVar20 = (undefined8 *)param_3[6];
        local_1a00 = *puVar20;
        local_19f8 = puVar20[1];
        local_19f0 = puVar20[2];
        uStack_19e8 = puVar20[3];
        local_19e0 = puVar20[4];
        uStack_19d8 = puVar20[5];
        puVar21 = (undefined8 *)param_4[6];
        local_19d0._0_4_ = (float)puVar20[6];
        local_19d0._4_4_ = (float)((ulong)puVar20[6] >> 0x20);
        uStack_19c8._0_4_ = (float)puVar20[7];
        uStack_19c8._4_4_ = (float)((ulong)puVar20[7] >> 0x20);
        fVar47 = (float)local_19d0 + (float)puVar20[8] + fVar64 * fVar45;
        fVar58 = local_19d0._4_4_ + (float)((ulong)puVar20[8] >> 0x20) + fVar65 * fVar57;
        fVar43 = uStack_19c8._4_4_ + (float)((ulong)puVar20[9] >> 0x20) +
                 (float)((ulong)uVar67 >> 0x20) * fVar57;
        fVar42 = (float)uStack_19c8 + (float)puVar20[9] + fVar66 * fVar45;
        local_1a50 = *puVar21;
        uStack_1a48 = puVar21[1];
        local_1a40 = puVar21[2];
        uStack_1a38 = puVar21[3];
        local_1a30 = puVar21[4];
        uStack_1a28 = puVar21[5];
        local_19d0 = CONCAT44(fVar58,fVar47);
        auVar50._0_8_ = CONCAT44(fVar58 - fVar58,fVar47 - fVar47);
        fVar58 = fVar58 + (fVar58 - fVar58) + fVar62 * fVar57;
        fVar47 = fVar47 + (fVar47 - fVar47) + fVar61 * fVar45;
        auVar50._8_4_ = fVar42 - fVar42;
        uStack_19c8 = CONCAT44(fVar43,fVar42);
        fVar42 = fVar42 + (fVar42 - fVar42) + fVar63 * fVar45;
        auVar50._12_4_ = fVar43 - fVar43;
        fVar43 = fVar43 + (fVar43 - fVar43) + (float)((ulong)uVar40 >> 0x20) * fVar57;
        local_1a20 = CONCAT44(fVar58,fVar47);
        local_1a10 = CONCAT44(fVar58 - fVar58,fVar47 - fVar47);
        uStack_1a18 = CONCAT44(fVar43,fVar42);
        uStack_19b8 = auVar50._8_8_;
        local_1a08 = CONCAT44(fVar43 - fVar43,fVar42 - fVar42);
        puVar20 = (undefined8 *)param_3[6];
        fVar58 = (float)((ulong)*puVar20 >> 0x20) * local_18d4 +
                 (float)((ulong)puVar20[2] >> 0x20) * fStack_18d0 +
                 (float)((ulong)puVar20[4] >> 0x20) * local_18cc;
        fVar42 = (float)((ulong)puVar20[1] >> 0x20) * local_18d4 +
                 (float)((ulong)puVar20[3] >> 0x20) * fStack_18d0 +
                 (float)((ulong)puVar20[5] >> 0x20) * local_18cc;
        uStack_1b28 = CONCAT17((char)((uint)fVar42 >> 0x18),
                               CONCAT16((char)((uint)fVar42 >> 0x10),
                                        CONCAT15((char)((uint)fVar42 >> 8),
                                                 CONCAT14(SUB41(fVar42,0),
                                                          (float)puVar20[1] * local_18d4 +
                                                          (float)puVar20[3] * fStack_18d0 +
                                                          (float)puVar20[5] * local_18cc))));
        local_1b30 = CONCAT17((char)((uint)fVar58 >> 0x18),
                              CONCAT16((char)((uint)fVar58 >> 0x10),
                                       CONCAT15((char)((uint)fVar58 >> 8),
                                                CONCAT14(SUB41(fVar58,0),
                                                         (float)*puVar20 * local_18d4 +
                                                         (float)puVar20[2] * fStack_18d0 +
                                                         (float)puVar20[4] * local_18cc))));
        *(undefined1 *)(param_8 + 0x99) = 0x80;
        local_19c0 = auVar50._0_8_;
        FUN_03073750(param_1,&local_1ae0,&local_1b20,&local_1aa0,&local_18e0,&local_1b30,0,
                     &local_1a60,param_8,param_9);
        if (bVar11) {
          uVar40 = *(undefined8 *)(param_9 + 0xe);
          uVar55 = *(undefined8 *)(param_9 + 0xc);
          auVar3[9] = (char)((ulong)uVar40 >> 8);
          auVar3._0_9_ = *(unkbyte9 *)(param_9 + 0xc);
          auVar3[10] = (char)((ulong)uVar40 >> 0x10);
          auVar3[0xb] = (char)((ulong)uVar40 >> 0x18);
          auVar3[0xc] = (char)((ulong)uVar40 >> 0x20);
          auVar3[0xd] = (char)((ulong)uVar40 >> 0x28);
          auVar3[0xe] = (char)((ulong)uVar40 >> 0x30);
          auVar3[0xf] = (char)((ulong)uVar40 >> 0x38);
          fVar58 = (float)NEON_fminnmv(auVar3,4);
          iVar39 = -(uint)((float)uVar55 <= fVar58);
          iVar41 = -(uint)((float)((ulong)uVar55 >> 0x20) <= fVar58);
          iVar4 = -(uint)((float)uVar40 <= fVar58);
          iVar5 = -(uint)((float)((ulong)uVar40 >> 0x20) <= fVar58);
          uVar40 = *(undefined8 *)(param_9 + 0x22);
          uVar55 = *(undefined8 *)(param_9 + 0x20);
          cVar2 = (&DAT_03aadfc0)
                  [(uint)(CONCAT13((byte)((uint)iVar39 >> 0x18) &
                                   (byte)((ulong)_DAT_03889700 >> 0x18),
                                   CONCAT12((byte)((uint)iVar39 >> 0x10) &
                                            (byte)((ulong)_DAT_03889700 >> 0x10),
                                            CONCAT11((byte)((uint)iVar39 >> 8) &
                                                     (byte)((ulong)_DAT_03889700 >> 8),
                                                     (byte)iVar39 & (byte)_DAT_03889700))) +
                          CONCAT13((byte)((uint)iVar41 >> 0x18) &
                                   (byte)((ulong)_DAT_03889700 >> 0x38),
                                   CONCAT12((byte)((uint)iVar41 >> 0x10) &
                                            (byte)((ulong)_DAT_03889700 >> 0x30),
                                            CONCAT11((byte)((uint)iVar41 >> 8) &
                                                     (byte)((ulong)_DAT_03889700 >> 0x28),
                                                     (byte)iVar41 &
                                                     (byte)((ulong)_DAT_03889700 >> 0x20)))) +
                         CONCAT13((byte)((uint)iVar4 >> 0x18) & (byte)((ulong)_UNK_03889708 >> 0x18)
                                  ,CONCAT12((byte)((uint)iVar4 >> 0x10) &
                                            (byte)((ulong)_UNK_03889708 >> 0x10),
                                            CONCAT11((byte)((uint)iVar4 >> 8) &
                                                     (byte)((ulong)_UNK_03889708 >> 8),
                                                     (byte)iVar4 & (byte)_UNK_03889708))) +
                         CONCAT13((byte)((uint)iVar5 >> 0x18) & (byte)((ulong)_UNK_03889708 >> 0x38)
                                  ,CONCAT12((byte)((uint)iVar5 >> 0x10) &
                                            (byte)((ulong)_UNK_03889708 >> 0x30),
                                            CONCAT11((byte)((uint)iVar5 >> 8) &
                                                     (byte)((ulong)_UNK_03889708 >> 0x28),
                                                     (byte)iVar5 &
                                                     (byte)((ulong)_UNK_03889708 >> 0x20)))))];
          uVar46 = *(undefined4 *)(param_3[5] + 0x20);
          local_1a00 = CONCAT17((char)((uint)uVar46 >> 0x18),
                                CONCAT16((char)((uint)uVar46 >> 0x10),
                                         CONCAT15((char)((uint)uVar46 >> 8),
                                                  CONCAT14((char)uVar46,uVar46))));
          uVar46 = *(undefined4 *)(param_4[5] + 0x20);
          local_1a50 = CONCAT17((char)((uint)uVar46 >> 0x18),
                                CONCAT16((char)((uint)uVar46 >> 0x10),
                                         CONCAT15((char)((uint)uVar46 >> 8),
                                                  CONCAT14((char)uVar46,uVar46))));
          FUN_03076870(&local_1900,0,&local_1a00,&local_1a50,param_9);
          fVar54 = fVar54 * ((float)uVar55 -
                            (float)*(undefined8 *)(param_9 + (long)cVar2 * 4 + 0x10));
          fVar56 = fVar56 * ((float)((ulong)uVar55 >> 0x20) -
                            (float)((ulong)*(undefined8 *)(param_9 + (long)cVar2 * 4 + 0x10) >> 0x20
                                   ));
          fVar59 = fVar59 * ((float)uVar40 -
                            (float)*(undefined8 *)(param_9 + (long)cVar2 * 4 + 0x12));
          uVar55 = NEON_frecpe(uVar12,4);
          uVar40 = NEON_frecps(uVar12,uVar55,4);
          fVar58 = (float)uVar55 * (float)uVar40;
          fVar42 = (float)((ulong)uVar55 >> 0x20) * (float)((ulong)uVar40 >> 0x20);
          uVar12 = NEON_frecps(uVar12,CONCAT17((char)((uint)fVar42 >> 0x18),
                                               CONCAT16((char)((uint)fVar42 >> 0x10),
                                                        CONCAT15((char)((uint)fVar42 >> 8),
                                                                 CONCAT14(SUB41(fVar42,0),fVar58))))
                               ,4);
          fVar58 = (fVar54 + fVar56 + fVar59) * fVar58 * (float)uVar12;
          fVar54 = (fVar54 + fVar56 + fVar59) * fVar42 * (float)((ulong)uVar12 >> 0x20);
          uVar12 = NEON_fmax(local_98 ^
                             (local_98 ^
                             CONCAT17((char)((uint)fVar54 >> 0x18),
                                      CONCAT16((char)((uint)fVar54 >> 0x10),
                                               CONCAT15((char)((uint)fVar54 >> 8),
                                                        CONCAT14(SUB41(fVar54,0),fVar58))))) &
                             CONCAT44(-(uint)(fVar54 < (float)(local_98 >> 0x20)),
                                      -(uint)(fVar58 < (float)local_98)),0,4);
          uVar22 = (undefined1)uVar12;
          uVar23 = (undefined1)((ulong)uVar12 >> 8);
          uVar24 = (undefined1)((ulong)uVar12 >> 0x10);
          uVar25 = (undefined1)((ulong)uVar12 >> 0x18);
        }
        else {
          uVar22 = (undefined1)local_18e8;
          uVar23 = (undefined1)((ulong)local_18e8 >> 8);
          uVar24 = (undefined1)((ulong)local_18e8 >> 0x10);
          uVar25 = (undefined1)((ulong)local_18e8 >> 0x18);
        }
        param_9[0x2e] = CONCAT13(uVar25,CONCAT12(uVar24,CONCAT11(uVar23,uVar22)));
        *(undefined1 *)((long)param_9 + 0x96) = 0x20;
        goto LAB_03074d58;
      }
    }
    uVar12 = 0;
  }
  else {
    if ((uVar14 & 1) == 0) goto LAB_03074484;
    if ((param_7 & 1) != 0) {
      *(char *)(param_8 + 9) = *(char *)(param_8 + 9) + '\x04';
      *(undefined8 *)(param_8 + 0x88) = 0xffffffffffffffff;
    }
    *param_9 = 0;
    uVar12 = *(undefined8 *)((long)param_6 + 0xc);
    uVar46 = *(undefined4 *)((long)param_6 + 0x14);
    *(ulong *)(param_9 + 6) =
         CONCAT17((char)((uint)uVar46 >> 0x18),
                  CONCAT16((char)((uint)uVar46 >> 0x10),
                           CONCAT15((char)((uint)uVar46 >> 8),CONCAT14((char)uVar46,uVar46))));
    *(undefined8 *)(param_9 + 4) = uVar12;
    uVar46 = *(undefined4 *)(param_6 + 1);
    uVar12 = *param_6;
    *(ulong *)(param_9 + 0x22) =
         CONCAT17((char)((uint)uVar46 >> 0x18),
                  CONCAT16((char)((uint)uVar46 >> 0x10),
                           CONCAT15((char)((uint)uVar46 >> 8),CONCAT14((char)uVar46,uVar46))));
    *(undefined8 *)(param_9 + 0x20) = uVar12;
    param_9[1] = *(undefined4 *)(param_6 + 3);
    *(long *)(param_9 + 0x26) = param_8;
    param_9[0x28] = (int)param_3[3];
    param_9[0x29] = (int)param_4[3];
    *(undefined1 *)((long)param_9 + 0x96) = 0x10;
    *(undefined1 *)(param_9 + 0x24) = 0;
    *(long *)(param_9 + 0x2a) = param_3[2];
    *(long *)(param_9 + 0x2c) = param_4[2];
    *(undefined2 *)(param_8 + 0x9a) = 0xffff;
    *(undefined1 *)(param_8 + 0x99) = 0x80;
    param_9[0x2f] = *(uint *)(param_4[2] + 0x14) | *(uint *)(param_3[2] + 0x14);
    lVar19 = *(long *)(param_1 + 0x10);
    uVar15 = (ulong)*(byte *)(*param_4 + 0x89);
    if (*(int *)(lVar19 + (ulong)*(byte *)(*param_4 + 0x89) * 0x40 + 0x18) <=
        *(int *)(lVar19 + (ulong)*(byte *)(*param_3 + 0x89) * 0x40 + 0x18)) {
      uVar15 = (ulong)*(byte *)(*param_3 + 0x89);
    }
    lVar19 = lVar19 + uVar15 * 0x40;
    fVar54 = (float)param_9[1];
    fVar58 = *(float *)(lVar19 + 0x34);
    bVar11 = *(float *)(lVar19 + 0x30) <= fVar54;
    *(bool *)((long)param_9 + 0x97) = fVar58 < fVar54 && bVar11;
    if (fVar58 < fVar54 && bVar11) {
      bVar26 = *(byte *)(*(long *)(param_9 + 0x26) + 0xe) & 3;
      uVar14 = *(uint *)(*param_4 + 0x54) | *(uint *)(*param_3 + 0x54) |
               *(uint *)(param_3[2] + 0x14) | *(uint *)(param_4[2] + 0x14);
      if (bVar26 == 1) {
        uVar14 = uVar14 & 0xffffff7f;
      }
      else if (bVar26 == 2) {
        uVar14 = uVar14 | 0x80;
      }
      if (*(long *)(param_1 + 8) != 0) {
        uVar14 = *(uint *)(*(long *)(param_1 + 8) + 0x80c) | uVar14;
      }
      uVar14 = *(uint *)(*(long *)(param_1 + 0x30) + (ulong)*(ushort *)(param_4[1] + 0x58) * 0x70 +
                        4) |
               *(uint *)(*(long *)(param_1 + 0x30) + (ulong)*(ushort *)(param_3[1] + 0x58) * 0x70 +
                        4) | uVar14;
      if ((**(uint **)(param_1 + 0x40) & uVar14) != 0) {
        *(undefined2 *)(param_8 + 0x86) = 0;
        lVar19 = 0;
        *(undefined2 *)(param_8 + 0x94) = 0;
        local_cc8 = (float)param_9[1];
        local_cd0 = *(undefined8 *)(param_9 + 0x26);
        fVar58 = (float)*(undefined8 *)(param_9 + 4);
        fVar54 = (float)((ulong)*(undefined8 *)(param_9 + 4) >> 0x20);
        fVar56 = (float)*(undefined8 *)(param_9 + 6);
        pfVar17 = (float *)param_3[6];
        fVar59 = (float)*(undefined8 *)(param_9 + 0x20) - fVar58 * local_cc8;
        fVar42 = (float)((ulong)*(undefined8 *)(param_9 + 0x20) >> 0x20) - fVar54 * local_cc8;
        fVar47 = (float)*(undefined8 *)(param_9 + 0x22) - fVar56 * local_cc8;
        local_cf0 = (float)*(undefined8 *)(pfVar17 + 0xc) +
                    pfVar17[8] * fVar47 +
                    (float)*(undefined8 *)pfVar17 * fVar59 + pfVar17[4] * fVar42;
        fStack_cec = (float)((ulong)*(undefined8 *)(pfVar17 + 0xc) >> 0x20) +
                     pfVar17[9] * fVar47 +
                     (float)((ulong)*(undefined8 *)pfVar17 >> 0x20) * fVar59 + pfVar17[5] * fVar42;
        fStack_ce8 = (float)*(undefined8 *)(pfVar17 + 0xe) +
                     pfVar17[10] * fVar47 +
                     (float)*(undefined8 *)(pfVar17 + 2) * fVar59 + pfVar17[6] * fVar42;
        fStack_ce4 = (float)((ulong)*(undefined8 *)(pfVar17 + 0xe) >> 0x20) +
                     pfVar17[0xb] * fVar47 +
                     (float)((ulong)*(undefined8 *)(pfVar17 + 2) >> 0x20) * fVar59 +
                     pfVar17[7] * fVar42;
        fVar59 = pfVar17[9] * fVar56 + pfVar17[5] * fVar54 + pfVar17[1] * fVar58;
        fVar42 = pfVar17[0xb] * fVar56 + pfVar17[7] * fVar54 + pfVar17[3] * fVar58;
        uStack_cd8 = CONCAT17((char)((uint)fVar42 >> 0x18),
                              CONCAT16((char)((uint)fVar42 >> 0x10),
                                       CONCAT15((char)((uint)fVar42 >> 8),
                                                CONCAT14(SUB41(fVar42,0),
                                                         pfVar17[10] * fVar56 +
                                                         pfVar17[6] * fVar54 + pfVar17[2] * fVar58))
                                      ));
        local_ce0 = CONCAT17((char)((uint)fVar59 >> 0x18),
                             CONCAT16((char)((uint)fVar59 >> 0x10),
                                      CONCAT15((char)((uint)fVar59 >> 8),
                                               CONCAT14(SUB41(fVar59,0),
                                                        pfVar17[8] * fVar56 +
                                                        pfVar17[4] * fVar54 + *pfVar17 * fVar58))));
        puVar21 = *(undefined8 **)(param_1 + 0x40);
        puVar20 = puVar21;
        do {
          if ((*(uint *)(puVar20 + 1) & uVar14) != 0) {
            plVar13 = (long *)puVar20[2];
            (**(code **)(*plVar13 + 0x18))(plVar13,param_1,param_2,param_3,param_4,&local_cf0);
          }
          lVar19 = lVar19 + 1;
          puVar20 = puVar20 + 2;
        } while (lVar19 < *(int *)((long)puVar21 + 4));
      }
    }
LAB_03074d58:
    uVar12 = 1;
  }
  return uVar12;
}


