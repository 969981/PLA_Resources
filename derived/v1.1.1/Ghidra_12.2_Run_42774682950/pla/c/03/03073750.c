/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03073750; name: FUN_03073750
 */


undefined8
FUN_03073750(long param_1,long *param_2,long *param_3,float *param_4,undefined8 *param_5,
            undefined8 *param_6,ulong param_7,undefined8 *param_8,long param_9,undefined4 *param_10)

{
  undefined1 (*pauVar1) [12];
  int *piVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  char cVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  long lVar26;
  bool bVar27;
  unkbyte9 *pVar28;
  long lVar29;
  ulong uVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  byte *pbVar33;
  float *pfVar34;
  ulong uVar35;
  uint uVar36;
  undefined1 extraout_b0;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  undefined4 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  int iVar74;
  undefined1 auVar73 [16];
  float fVar75;
  undefined8 uVar76;
  float fVar79;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fStack_98c;
  float fStack_984;
  undefined8 local_958;
  undefined8 local_950;
  undefined8 uStack_948;
  undefined8 auStack_940 [16];
  undefined8 local_8c0;
  undefined8 uStack_8b8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ushort local_a8 [4];
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  ushort local_88 [4];
  undefined8 local_80;
  float fStack_78;
  float fStack_74;
  
  fVar11 = *(float *)(param_5 + 3) + 0.0;
  pfVar34 = (float *)param_2[6];
  fVar12 = (float)*param_5 - (float)*(undefined8 *)((long)param_5 + 0xc) * fVar11;
  fVar55 = (float)((ulong)*param_5 >> 0x20) -
           (float)((ulong)*(undefined8 *)((long)param_5 + 0xc) >> 0x20) * fVar11;
  fVar11 = *(float *)(param_5 + 1) - *(float *)((long)param_5 + 0x14) * fVar11;
  uVar37 = (undefined1)((uint)fVar11 >> 8);
  uVar38 = (undefined1)((uint)fVar11 >> 0x10);
  uVar39 = (undefined1)((uint)fVar11 >> 0x18);
  fVar53 = *pfVar34;
  fVar56 = pfVar34[1];
  fVar60 = pfVar34[2];
  fVar61 = pfVar34[3];
  uVar76 = *(undefined8 *)(pfVar34 + 6);
  uVar72 = *(undefined8 *)(pfVar34 + 4);
  uVar18 = *(undefined8 *)(pfVar34 + 10);
  uVar71 = *(undefined8 *)(pfVar34 + 8);
  auVar73 = *(undefined1 (*) [16])(pfVar34 + 0xc);
  *param_10 = 0;
  *(undefined1 *)((long)param_10 + 0x92) = 0;
  *(undefined1 *)((long)param_10 + 0x95) = 0;
  fVar53 = auVar73._0_4_ + (float)uVar71 * fVar11 + fVar53 * fVar12 + (float)uVar72 * fVar55;
  fVar56 = auVar73._4_4_ +
           (float)((ulong)uVar71 >> 0x20) * fVar11 +
           fVar56 * fVar12 + (float)((ulong)uVar72 >> 0x20) * fVar55;
  fVar60 = auVar73._8_4_ + (float)uVar18 * fVar11 + fVar60 * fVar12 + (float)uVar76 * fVar55;
  fVar61 = auVar73._12_4_ +
           (float)((ulong)uVar18 >> 0x20) * fVar11 +
           fVar61 * fVar12 + (float)((ulong)uVar76 >> 0x20) * fVar55;
  param_10[0x22] = fVar60;
  param_10[0x23] = fVar61;
  param_10[0x20] = fVar53;
  param_10[0x21] = fVar56;
  uVar72 = *param_6;
  pfVar34 = (float *)(param_10 + 4);
  *(undefined8 *)(param_10 + 6) = param_6[1];
  *(undefined8 *)pfVar34 = uVar72;
  *(undefined8 *)(param_10 + 8) = 0;
  *(undefined8 *)(param_10 + 10) = 0;
  if ((*(byte *)(param_9 + 10) >> 2 & 1) == 0) {
    local_4c0 = *(undefined8 *)((long)param_5 + 0xc);
    fVar58 = *(float *)((long)param_5 + 0x14);
    uStack_4b8 = (undefined4 *)CONCAT44(fVar58,fVar58);
    fVar58 = *(float *)(param_5 + 1);
    local_8c0 = *param_5;
    uStack_8b8 = CONCAT17((char)((uint)fVar58 >> 0x18),
                          CONCAT16((char)((uint)fVar58 >> 0x10),
                                   CONCAT15((char)((uint)fVar58 >> 8),
                                            CONCAT14(SUB41(fVar58,0),fVar58))));
    uVar22 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(param_2[5] + 0x18) * 0x200 + 0x90))
                       (param_2[5],&local_4c0,&local_8c0,param_9 + 0x10,0,0xffffffff,&local_80,
                        local_88);
    pVar28 = (unkbyte9 *)param_3[6];
    uVar72 = *(undefined8 *)((long)pVar28 + 8);
    uVar40 = (undefined1)((ulong)uVar72 >> 8);
    uVar41 = (undefined1)((ulong)uVar72 >> 0x10);
    uVar42 = (undefined1)((ulong)uVar72 >> 0x18);
    uVar43 = (undefined1)((ulong)uVar72 >> 0x20);
    uVar44 = (undefined1)((ulong)uVar72 >> 0x28);
    uVar45 = (undefined1)((ulong)uVar72 >> 0x30);
    uVar46 = (undefined1)((ulong)uVar72 >> 0x38);
    auVar6 = *(undefined1 (*) [16])(pVar28 + 1);
    pauVar1 = (undefined1 (*) [12])(pVar28 + 2);
    uVar70 = (undefined4)((ulong)*(undefined8 *)((long)pVar28 + 0x28) >> 0x20);
    auVar77 = NEON_ext(auVar6,auVar6,8,1);
    auVar73[9] = uVar40;
    auVar73._0_9_ = *pVar28;
    auVar73[10] = uVar41;
    auVar73[0xb] = uVar42;
    auVar73[0xc] = uVar43;
    auVar73[0xd] = uVar44;
    auVar73[0xe] = uVar45;
    auVar73[0xf] = uVar46;
    auVar78[9] = uVar40;
    auVar78._0_9_ = *pVar28;
    auVar78[10] = uVar41;
    auVar78[0xb] = uVar42;
    auVar78[0xc] = uVar43;
    auVar78[0xd] = uVar44;
    auVar78[0xe] = uVar45;
    auVar78[0xf] = uVar46;
    auVar73 = NEON_ext(auVar73,auVar78,8,1);
    auVar13._12_4_ = uVar70;
    auVar13._0_12_ = *pauVar1;
    auVar14._12_4_ = uVar70;
    auVar14._0_12_ = *pauVar1;
    auVar78 = NEON_ext(auVar13,auVar14,8,1);
    fVar75 = *pfVar34;
    fVar54 = (float)param_10[5];
    fVar17 = (float)param_10[6];
    fVar79 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
    fVar58 = auVar73._0_4_ * fVar17 +
             (float)*(undefined8 *)pVar28 * fVar75 +
             (float)((ulong)*(undefined8 *)pVar28 >> 0x20) * fVar54;
    fVar57 = auVar77._0_4_ * fVar17 + auVar6._0_4_ * fVar75 + auVar6._4_4_ * fVar54;
    fVar59 = auVar78._0_4_ * fVar17 + (float)*(undefined8 *)*pauVar1 * fVar75 + fVar79 * fVar54;
    fVar75 = auVar78._4_4_ * fVar17 + fVar79 * fVar75 + auVar78._4_4_ * fVar54;
    uStack_b8 = CONCAT17((char)((uint)fVar75 >> 0x18),
                         CONCAT16((char)((uint)fVar75 >> 0x10),
                                  CONCAT15((char)((uint)fVar75 >> 8),
                                           CONCAT14(SUB41(fVar75,0),fVar59))));
    local_c0 = CONCAT17((char)((uint)fVar57 >> 0x18),
                        CONCAT16((char)((uint)fVar57 >> 0x10),
                                 CONCAT15((char)((uint)fVar57 >> 8),CONCAT14(SUB41(fVar57,0),fVar58)
                                         )));
    auVar73 = *(undefined1 (*) [16])(param_4 + 0xc);
    uStack_4b8 = (undefined4 *)
                 CONCAT44(auVar73._12_4_ +
                          (float)(CONCAT17(uVar39,CONCAT16(uVar38,CONCAT15(uVar37,CONCAT14(SUB41(
                                                  fVar11,0),fVar11)))) >> 0x20) * param_4[0xb] +
                          fVar12 * param_4[3] +
                          fVar55 * (float)((ulong)*(undefined8 *)(param_4 + 6) >> 0x20),
                          auVar73._8_4_ +
                          fVar11 * param_4[10] +
                          fVar12 * param_4[2] + fVar55 * (float)*(undefined8 *)(param_4 + 6));
    local_4c0 = CONCAT44(auVar73._4_4_ +
                         (float)(CONCAT17(uVar39,CONCAT16(uVar38,CONCAT15(uVar37,CONCAT14(SUB41(
                                                  fVar11,0),fVar11)))) >> 0x20) * param_4[9] +
                         fVar12 * param_4[1] +
                         fVar55 * (float)((ulong)*(undefined8 *)(param_4 + 4) >> 0x20),
                         auVar73._0_4_ +
                         fVar11 * param_4[8] +
                         fVar12 * *param_4 + fVar55 * (float)*(undefined8 *)(param_4 + 4));
    fVar58 = 0.0 - fVar58;
    fVar57 = 0.0 - fVar57;
    uVar37 = (undefined1)((uint)fVar57 >> 8);
    uVar38 = (undefined1)((uint)fVar57 >> 0x10);
    uVar39 = (undefined1)((uint)fVar57 >> 0x18);
    fVar59 = 0.0 - fVar59;
    fVar75 = 0.0 - fVar75;
    uVar40 = (undefined1)((uint)fVar75 >> 8);
    uVar41 = (undefined1)((uint)fVar75 >> 0x10);
    uVar42 = (undefined1)((uint)fVar75 >> 0x18);
    uStack_8b8 = CONCAT17(uVar42,CONCAT16(uVar41,CONCAT15(uVar40,CONCAT14(SUB41(fVar75,0),fVar59))))
    ;
    local_8c0 = CONCAT17(uVar39,CONCAT16(uVar38,CONCAT15(uVar37,CONCAT14(SUB41(fVar57,0),fVar58))));
    fStack_984 = (float)(CONCAT17(uVar42,CONCAT16(uVar41,CONCAT15(uVar40,CONCAT14(SUB41(fVar75,0),
                                                                                  fVar59)))) >> 0x20
                        );
    fStack_98c = (float)(CONCAT17(uVar39,CONCAT16(uVar38,CONCAT15(uVar37,CONCAT14(SUB41(fVar57,0),
                                                                                  fVar58)))) >> 0x20
                        );
    uVar23 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(param_3[5] + 0x18) * 0x200 + 0x90))
                       (param_3[5],&local_8c0,&local_4c0,param_9 + 0x10,1,0xffffffff,&local_a0,
                        local_a8);
    auVar16._8_4_ = fStack_78;
    auVar16._0_8_ = local_80;
    auVar15._8_4_ = fStack_78;
    auVar15._0_8_ = local_80;
    auVar15._12_4_ = fStack_74;
    auVar16._12_4_ = fStack_74;
    auVar73 = NEON_ext(auVar15,auVar16,8,1);
    uVar72 = *(undefined8 *)((long)param_5 + 0xc);
    fVar54 = *(float *)((long)param_5 + 0x14);
    uVar76 = NEON_ext(uVar72,(ulong)(uint)fVar54,4,1);
    fVar75 = (float)((ulong)local_80 >> 0x20);
    uVar71 = NEON_ext(local_80,auVar73._0_8_,4,1);
    fVar11 = (float)((ulong)uVar72 >> 0x20);
    fVar12 = (float)local_80 * (float)uVar76 - (float)uVar72 * (float)uVar71;
    fVar55 = fVar75 * (float)((ulong)uVar76 >> 0x20) - fVar11 * (float)((ulong)uVar71 >> 0x20);
    uVar37 = (undefined1)((uint)fVar55 >> 8);
    uVar38 = (undefined1)((uint)fVar55 >> 0x10);
    uVar39 = (undefined1)((uint)fVar55 >> 0x18);
    fVar57 = fStack_78 * (float)uVar72 - (float)local_80 * fVar54;
    uVar40 = (undefined1)((uint)fVar57 >> 8);
    uVar41 = (undefined1)((uint)fVar57 >> 0x10);
    uVar42 = (undefined1)((uint)fVar57 >> 0x18);
    fVar11 = fStack_74 * fVar11 - fVar75 * fVar54;
    uVar43 = (undefined1)((uint)fVar11 >> 8);
    uVar44 = (undefined1)((uint)fVar11 >> 0x10);
    uVar45 = (undefined1)((uint)fVar11 >> 0x18);
    auVar6[4] = SUB41(fVar55,0);
    auVar6._0_4_ = fVar12;
    auVar6[5] = uVar37;
    auVar6[6] = uVar38;
    auVar6[7] = uVar39;
    auVar6[8] = SUB41(fVar57,0);
    auVar6[9] = uVar40;
    auVar6[10] = uVar41;
    auVar6[0xb] = uVar42;
    auVar6[0xc] = SUB41(fVar11,0);
    auVar6[0xd] = uVar43;
    auVar6[0xe] = uVar44;
    auVar6[0xf] = uVar45;
    auVar77[4] = SUB41(fVar55,0);
    auVar77._0_4_ = fVar12;
    auVar77[5] = uVar37;
    auVar77[6] = uVar38;
    auVar77[7] = uVar39;
    auVar77[8] = SUB41(fVar57,0);
    auVar77[9] = uVar40;
    auVar77[10] = uVar41;
    auVar77[0xb] = uVar42;
    auVar77[0xc] = SUB41(fVar11,0);
    auVar77[0xd] = uVar43;
    auVar77[0xe] = uVar44;
    auVar77[0xf] = uVar45;
    auVar73 = NEON_ext(auVar6,auVar77,4,1);
    fVar55 = auVar73._0_4_ * auVar73._0_4_;
    fVar57 = auVar73._4_4_ * auVar73._4_4_;
    fVar11 = fVar55 + fVar57 + fVar12 * fVar12;
    fVar12 = fVar55 + fVar57 + fVar12 * fVar12;
    uVar37 = (undefined1)((uint)fVar12 >> 8);
    uVar38 = (undefined1)((uint)fVar12 >> 0x10);
    uVar39 = (undefined1)((uint)fVar12 >> 0x18);
    uVar72 = NEON_frsqrte(CONCAT17(uVar39,CONCAT16(uVar38,CONCAT15(uVar37,CONCAT14(SUB41(fVar12,0),
                                                                                   fVar11)))),4);
    fVar55 = (float)uVar72;
    fVar57 = (float)((ulong)uVar72 >> 0x20);
    uVar72 = NEON_frsqrts(CONCAT17(uVar39,CONCAT16(uVar38,CONCAT15(uVar37,CONCAT14(SUB41(fVar12,0),
                                                                                   fVar11)))),
                          CONCAT44(fVar57 * fVar57,fVar55 * fVar55),4);
    fVar12 = fVar55 * (float)uVar72 * fVar11 * 41720.875 + 0.5;
    uVar37 = (undefined1)((uint)fStack_98 >> 8);
    uVar38 = (undefined1)((uint)fStack_98 >> 0x10);
    uVar39 = (undefined1)((uint)fStack_98 >> 0x18);
    uVar40 = (undefined1)((uint)fStack_94 >> 8);
    uVar41 = (undefined1)((uint)fStack_94 >> 0x10);
    uVar42 = (undefined1)((uint)fStack_94 >> 0x18);
    auVar8._4_4_ = fStack_9c;
    auVar8._0_4_ = local_a0;
    auVar8[8] = fStack_98._0_1_;
    auVar7._4_4_ = fStack_9c;
    auVar7._0_4_ = local_a0;
    auVar7[8] = fStack_98._0_1_;
    auVar20._4_4_ = fStack_98c;
    auVar20._0_4_ = fVar58;
    auVar20._8_4_ = fVar59;
    auVar19._4_4_ = fStack_98c;
    auVar19._0_4_ = fVar58;
    auVar19._8_4_ = fVar59;
    auVar19._12_4_ = fStack_984;
    auVar20._12_4_ = fStack_984;
    auVar78 = NEON_ext(auVar19,auVar20,4,1);
    auVar7[9] = uVar37;
    auVar7[10] = uVar38;
    auVar7[0xb] = uVar39;
    auVar7[0xc] = SUB41(fStack_94,0);
    auVar7[0xd] = uVar40;
    auVar7[0xe] = uVar41;
    auVar7[0xf] = uVar42;
    auVar8[9] = uVar37;
    auVar8[10] = uVar38;
    auVar8[0xb] = uVar39;
    auVar8[0xc] = SUB41(fStack_94,0);
    auVar8[0xd] = uVar40;
    auVar8[0xe] = uVar41;
    auVar8[0xf] = uVar42;
    auVar73 = NEON_ext(auVar7,auVar8,8,1);
    uVar72 = NEON_ext(CONCAT44(fStack_9c,local_a0),auVar73._0_8_,4,1);
    iVar25 = (uint)local_88[0] -
             (int)(float)((uint)fVar12 ^ ((uint)fVar12 ^ 0x3f000000) & -(uint)(fVar11 <= 0.0));
    fVar11 = auVar78._0_4_ * local_a0 - fVar58 * (float)uVar72;
    fVar12 = auVar78._4_4_ * fStack_9c - fStack_98c * (float)((ulong)uVar72 >> 0x20);
    uVar37 = (undefined1)((uint)fVar12 >> 8);
    uVar38 = (undefined1)((uint)fVar12 >> 0x10);
    uVar39 = (undefined1)((uint)fVar12 >> 0x18);
    fVar55 = fVar58 * fStack_98 - fVar59 * local_a0;
    uVar40 = (undefined1)((uint)fVar55 >> 8);
    uVar41 = (undefined1)((uint)fVar55 >> 0x10);
    uVar42 = (undefined1)((uint)fVar55 >> 0x18);
    fVar58 = fStack_98c * fStack_94 - fStack_984 * fStack_9c;
    uVar43 = (undefined1)((uint)fVar58 >> 8);
    uVar44 = (undefined1)((uint)fVar58 >> 0x10);
    uVar45 = (undefined1)((uint)fVar58 >> 0x18);
    auVar9[4] = SUB41(fVar12,0);
    auVar9._0_4_ = fVar11;
    auVar9[5] = uVar37;
    auVar9[6] = uVar38;
    auVar9[7] = uVar39;
    auVar9[8] = SUB41(fVar55,0);
    auVar9[9] = uVar40;
    auVar9[10] = uVar41;
    auVar9[0xb] = uVar42;
    auVar9[0xc] = SUB41(fVar58,0);
    auVar9[0xd] = uVar43;
    auVar9[0xe] = uVar44;
    auVar9[0xf] = uVar45;
    auVar10[4] = SUB41(fVar12,0);
    auVar10._0_4_ = fVar11;
    auVar10[5] = uVar37;
    auVar10[6] = uVar38;
    auVar10[7] = uVar39;
    auVar10[8] = SUB41(fVar55,0);
    auVar10[9] = uVar40;
    auVar10[10] = uVar41;
    auVar10[0xb] = uVar42;
    auVar10[0xc] = SUB41(fVar58,0);
    auVar10[0xd] = uVar43;
    auVar10[0xe] = uVar44;
    auVar10[0xf] = uVar45;
    auVar73 = NEON_ext(auVar9,auVar10,4,1);
    fVar55 = auVar73._0_4_ * auVar73._0_4_;
    fVar58 = auVar73._4_4_ * auVar73._4_4_;
    fVar12 = fVar55 + fVar58 + fVar11 * fVar11;
    fVar11 = fVar55 + fVar58 + fVar11 * fVar11;
    uVar37 = (undefined1)((uint)fVar11 >> 8);
    uVar38 = (undefined1)((uint)fVar11 >> 0x10);
    uVar39 = (undefined1)((uint)fVar11 >> 0x18);
    uVar72 = NEON_frsqrte(CONCAT17(uVar39,CONCAT16(uVar38,CONCAT15(uVar37,CONCAT14(SUB41(fVar11,0),
                                                                                   fVar12)))),4);
    fVar55 = (float)uVar72;
    fVar58 = (float)((ulong)uVar72 >> 0x20);
    uVar72 = NEON_frsqrts(CONCAT17(uVar39,CONCAT16(uVar38,CONCAT15(uVar37,CONCAT14(SUB41(fVar11,0),
                                                                                   fVar12)))),
                          CONCAT44(fVar58 * fVar58,fVar55 * fVar55),4);
    fVar11 = fVar55 * (float)uVar72 * fVar12 * 41720.875 + 0.5;
    iVar24 = (uint)local_a8[0] -
             (int)(float)((uint)fVar11 ^ ((uint)fVar11 ^ 0x3f000000) & -(uint)(fVar12 <= 0.0));
    if (iVar24 <= iVar25) {
      iVar25 = iVar24;
    }
    if ((uint)local_a8[0] <= (uint)local_88[0]) {
      local_88[0] = local_a8[0];
    }
    uVar36 = (uint)local_88[0];
    uVar5 = uVar36;
    if ((int)uVar36 <= iVar25 * 4) {
      uVar5 = iVar25 * 4;
    }
    *(short *)(param_9 + 0x94) = (short)(uVar36 + uVar5 + 3 >> 2);
    iVar24 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(param_2[5] + 0x18) * 0x200 + 0x88))
                       (param_2[5],uVar22,&local_80,&local_4c0);
    iVar25 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(param_3[5] + 0x18) * 0x200 + 0x88))
                       (param_3[5],uVar23,&local_a0,&local_8c0);
    lVar29 = param_3[5];
    bVar4 = *(byte *)(param_9 + 0x99);
    if ((*(byte *)(lVar29 + 0x1b) >> 1 & 1) == 0) {
      puVar31 = &local_8c0;
      uVar36 = *(uint *)(param_9 + 0x8c) ^ uVar23 | *(uint *)(param_9 + 0x88) ^ uVar22;
      if ((uVar36 == 0) && ((param_7 & 1) != 0)) {
        return 0;
      }
    }
    else {
      uVar36 = *(uint *)(param_9 + 0x88) ^ uVar22 | (uint)(*(byte *)(param_9 + 0x2b) < 2) |
               (*(uint *)(param_9 + 0x8c) ^ uVar23) & 1;
      if ((uVar36 == 0) && ((param_7 & 1) != 0)) {
        return 0;
      }
      iVar3 = *(int *)(lVar29 + 0x44);
      if (((bVar4 & 0x7f) == 1) ||
         ((bVar62 = *(byte *)(param_9 + 0x9c) & 3, bVar62 != 3 &&
          ((bVar62 != 2 || ((~*(byte *)(param_9 + 0x9f) & 0xf) == 0)))))) {
joined_r0x030741c4:
        puVar31 = &local_8c0;
        iVar25 = iVar3;
      }
      else {
        fVar11 = 0.0 - (float)*param_8;
        fVar12 = 0.0 - (float)((ulong)*param_8 >> 0x20);
        fVar55 = 0.0 - (float)param_8[1];
        if (bVar62 == 3) {
          fVar58 = fVar11 * local_a0 + fVar12 * fStack_9c + fVar55 * fStack_98;
          fVar57 = fVar11 * local_a0 + fVar12 * fStack_9c + fVar55 * fStack_98;
          fVar11 = fVar11 - local_a0 * fVar58;
          uVar37 = SUB41(fVar11,0);
          uVar38 = (undefined1)((uint)fVar11 >> 8);
          uVar39 = (undefined1)((uint)fVar11 >> 0x10);
          uVar40 = (undefined1)((uint)fVar11 >> 0x18);
          fVar12 = fVar12 - fStack_9c * fVar57;
          uVar41 = SUB41(fVar12,0);
          uVar42 = (undefined1)((uint)fVar12 >> 8);
          uVar43 = (undefined1)((uint)fVar12 >> 0x10);
          uVar44 = (undefined1)((uint)fVar12 >> 0x18);
          fVar55 = fVar55 - fStack_98 * fVar58;
          uVar45 = SUB41(fVar55,0);
          uVar46 = (undefined1)((uint)fVar55 >> 8);
          uVar47 = (undefined1)((uint)fVar55 >> 0x10);
          uVar48 = (undefined1)((uint)fVar55 >> 0x18);
          fVar11 = (0.0 - (float)((ulong)param_8[1] >> 0x20)) -
                   fStack_94 *
                   (float)(CONCAT17((char)((uint)fVar57 >> 0x18),
                                    CONCAT16((char)((uint)fVar57 >> 0x10),
                                             CONCAT15((char)((uint)fVar57 >> 8),
                                                      CONCAT14(SUB41(fVar57,0),fVar58)))) >> 0x20);
          uVar49 = SUB41(fVar11,0);
          uVar50 = (undefined1)((uint)fVar11 >> 8);
          uVar51 = (undefined1)((uint)fVar11 >> 0x10);
          uVar52 = (undefined1)((uint)fVar11 >> 0x18);
        }
        else {
          piVar2 = (int *)(lVar29 + 0x40);
          puVar32 = (undefined8 *)
                    ((long)piVar2 + ((ulong)*(byte *)(param_9 + 0x9f) & 0xf) * 0xc + (long)*piVar2);
          puVar31 = (undefined8 *)
                    ((long)piVar2 + (ulong)(*(byte *)(param_9 + 0x9f) >> 4) * 0xc + (long)*piVar2);
          uVar72 = *puVar31;
          uVar71 = *puVar32;
          fVar57 = (float)uVar71 - (float)uVar72;
          fVar59 = (float)((ulong)uVar71 >> 0x20) - (float)((ulong)uVar72 >> 0x20);
          fVar17 = *(float *)(puVar32 + 1) - *(float *)(puVar31 + 1);
          fVar58 = fVar57 * fVar57 + fVar59 * fVar59 + fVar17 * fVar17;
          fVar54 = fVar57 * fVar57 + fVar59 * fVar59 + fVar17 * fVar17;
          uVar37 = SUB41(fVar54,0);
          uVar38 = (undefined1)((uint)fVar54 >> 8);
          uVar39 = (undefined1)((uint)fVar54 >> 0x10);
          uVar40 = (undefined1)((uint)fVar54 >> 0x18);
          uVar72 = NEON_frsqrte(CONCAT17(uVar40,CONCAT16(uVar39,CONCAT15(uVar38,CONCAT14(uVar37,
                                                  fVar58)))),4);
          fVar75 = (float)uVar72;
          fVar79 = (float)((ulong)uVar72 >> 0x20);
          uVar72 = NEON_frsqrts(CONCAT17(uVar40,CONCAT16(uVar39,CONCAT15(uVar38,CONCAT14(uVar37,
                                                  fVar58)))),
                                CONCAT44(fVar79 * fVar79,fVar75 * fVar75),4);
          fVar75 = fVar75 * (float)uVar72;
          fVar79 = fVar79 * (float)((ulong)uVar72 >> 0x20);
          iVar25 = -(uint)(fVar58 <= 0.0);
          iVar74 = -(uint)(fVar54 <= 0.0);
          uVar72 = NEON_frsqrts(CONCAT17(uVar40,CONCAT16(uVar39,CONCAT15(uVar38,CONCAT14(uVar37,
                                                  fVar58)))),
                                CONCAT44(fVar79 * fVar79,fVar75 * fVar75),4);
          fVar75 = (float)uVar72 * fVar75;
          fVar79 = (float)((ulong)uVar72 >> 0x20) * fVar79;
          bVar62 = SUB41(fVar75,0) & ~(byte)iVar25;
          bVar63 = (byte)((uint)fVar75 >> 8) & ~(byte)((uint)iVar25 >> 8);
          bVar64 = (byte)((uint)fVar75 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10);
          bVar65 = (byte)((uint)fVar75 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18);
          bVar66 = SUB41(fVar79,0) & ~(byte)iVar74;
          bVar67 = (byte)((uint)fVar79 >> 8) & ~(byte)((uint)iVar74 >> 8);
          bVar68 = (byte)((uint)fVar79 >> 0x10) & ~(byte)((uint)iVar74 >> 0x10);
          bVar69 = (byte)((uint)fVar79 >> 0x18) & ~(byte)((uint)iVar74 >> 0x18);
          fVar54 = (float)CONCAT13(bVar65,CONCAT12(bVar64,CONCAT11(bVar63,bVar62)));
          fVar57 = fVar57 * (float)CONCAT13(bVar65,CONCAT12(bVar64,CONCAT11(bVar63,bVar62)));
          fVar59 = fVar59 * (float)CONCAT13(bVar69,CONCAT12(bVar68,CONCAT11(bVar67,bVar66)));
          fVar75 = fVar17 * fVar54;
          fVar11 = fVar11 * fVar57;
          fVar12 = fVar12 * fVar59;
          fVar55 = fVar55 * fVar75;
          fVar58 = fVar11 + fVar12 + fVar55;
          fVar55 = fVar11 + fVar12 + fVar55;
          fVar57 = fVar57 * fVar58;
          uVar37 = SUB41(fVar57,0);
          uVar38 = (undefined1)((uint)fVar57 >> 8);
          uVar39 = (undefined1)((uint)fVar57 >> 0x10);
          uVar40 = (undefined1)((uint)fVar57 >> 0x18);
          fVar59 = fVar59 * fVar55;
          uVar41 = SUB41(fVar59,0);
          uVar42 = (undefined1)((uint)fVar59 >> 8);
          uVar43 = (undefined1)((uint)fVar59 >> 0x10);
          uVar44 = (undefined1)((uint)fVar59 >> 0x18);
          fVar75 = fVar75 * fVar58;
          uVar45 = SUB41(fVar75,0);
          uVar46 = (undefined1)((uint)fVar75 >> 8);
          uVar47 = (undefined1)((uint)fVar75 >> 0x10);
          uVar48 = (undefined1)((uint)fVar75 >> 0x18);
          fVar11 = fVar17 * (float)(CONCAT17(bVar69,CONCAT16(bVar68,CONCAT15(bVar67,CONCAT14(bVar66,
                                                  fVar54)))) >> 0x20) *
                   (float)CONCAT13((char)((uint)fVar55 >> 0x18),
                                   CONCAT12((char)((uint)fVar55 >> 0x10),
                                            (short)(CONCAT15((char)((uint)fVar55 >> 8),
                                                             CONCAT14(SUB41(fVar55,0),fVar58)) >>
                                                   0x20)));
          uVar49 = SUB41(fVar11,0);
          uVar50 = (undefined1)((uint)fVar11 >> 8);
          uVar51 = (undefined1)((uint)fVar11 >> 0x10);
          uVar52 = (undefined1)((uint)fVar11 >> 0x18);
        }
        local_958 = (ulong)local_958._4_4_ << 0x20;
        uStack_948 = CONCAT17(uVar52,CONCAT16(uVar51,CONCAT15(uVar50,CONCAT14(uVar49,CONCAT13(uVar48
                                                  ,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)))))));
        local_950 = CONCAT17(uVar44,CONCAT16(uVar43,CONCAT15(uVar42,CONCAT14(uVar41,CONCAT13(uVar40,
                                                  CONCAT12(uVar39,CONCAT11(uVar38,uVar37)))))));
        iVar25 = FUN_030742e0(&local_8c0,iVar3,&local_a0,&local_950,auStack_940,&local_958);
        if (iVar25 < 1) goto joined_r0x030741c4;
        uVar23 = uVar23 | (int)local_958 << 1;
        puVar31 = auStack_940;
      }
      if (uVar36 == 0) {
        if (*(uint *)(param_9 + 0x8c) != uVar23) {
          uVar36 = iVar24 + 3U & 0xfffffffc;
          bVar62 = *(byte *)(param_9 + 0x2b);
          uVar30 = (ulong)bVar62;
          cVar21 = (char)uVar36;
          if ((*(uint *)(param_9 + 0x8c) >> 1 & 1) == 0) {
            if (*(char *)(param_9 + 0x98) == '\0') {
              if (bVar62 != 0) {
                pbVar33 = (byte *)(param_9 + 0x90);
                uVar35 = uVar30;
                do {
                  if ((int)uVar36 <= (int)(uint)*pbVar33) {
                    *pbVar33 = ((*pbVar33 - cVar21) * '\x02' | 1) + cVar21;
                  }
                  uVar35 = uVar35 - 1;
                  pbVar33 = pbVar33 + 1;
                } while (uVar35 != 0);
                goto LAB_03074280;
              }
            }
            else if (bVar62 != 0) {
              pbVar33 = (byte *)(param_9 + 0x90);
              uVar35 = uVar30;
              do {
                bVar64 = *pbVar33;
                bVar63 = bVar64 << 1;
                if (3 < bVar64) {
                  bVar63 = bVar64 + 4;
                }
                uVar35 = uVar35 - 1;
                *pbVar33 = bVar63;
                pbVar33 = pbVar33 + 1;
              } while (uVar35 != 0);
              goto LAB_03074280;
            }
          }
          else if (*(char *)(param_9 + 0x98) == '\0') {
            if (bVar62 != 0) {
              pbVar33 = (byte *)(param_9 + 0x90);
              uVar35 = uVar30;
              do {
                if ((int)uVar36 <= (int)(uint)*pbVar33) {
                  uVar5 = *pbVar33 - uVar36;
                  if ((int)uVar5 < 0) {
                    uVar5 = uVar5 + 1;
                  }
                  *pbVar33 = cVar21 + (char)(uVar5 >> 1);
                }
                uVar35 = uVar35 - 1;
                pbVar33 = pbVar33 + 1;
              } while (uVar35 != 0);
              goto LAB_03074280;
            }
          }
          else if (bVar62 != 0) {
            pbVar33 = (byte *)(param_9 + 0x90);
            uVar35 = uVar30;
            do {
              bVar64 = *pbVar33;
              bVar63 = bVar64 >> 1;
              if (7 < bVar64) {
                bVar63 = bVar64 - 4;
              }
              uVar35 = uVar35 - 1;
              *pbVar33 = bVar63;
              pbVar33 = pbVar33 + 1;
            } while (uVar35 != 0);
LAB_03074280:
            if (3 < bVar62) goto LAB_03073e80;
          }
          if ((bVar62 & 1) != 0) {
            ((undefined1 *)(param_9 + 0x90))[uVar30] = *(undefined1 *)(param_9 + 0x90);
            uVar30 = uVar30 + 1;
          }
          if (bVar62 != 3) {
            do {
              lVar29 = param_9 + uVar30;
              uVar30 = uVar30 + 2;
              *(undefined1 *)(lVar29 + 0x90) = *(undefined1 *)(param_9 + 0x90);
              *(undefined1 *)(lVar29 + 0x91) = *(undefined1 *)(param_9 + 0x90);
            } while (uVar30 != 4);
          }
        }
LAB_03073e80:
        uVar36 = 0;
      }
    }
    local_958 = 0x5f7ffff05f7ffff0;
    uVar70 = *(undefined4 *)((long)param_5 + 0x14);
    local_950 = *(undefined8 *)((long)param_5 + 0xc);
    uStack_948 = CONCAT17((char)((uint)uVar70 >> 0x18),
                          CONCAT16((char)((uint)uVar70 >> 0x10),
                                   CONCAT15((char)((uint)uVar70 >> 8),CONCAT14((char)uVar70,uVar70))
                                  ));
    iVar25 = FUN_001791e4(*(long *)(param_1 + 8) + 0x530,&local_958,param_2,param_3,uVar22,uVar23,
                          uVar36 != 0,1,&local_4c0,puVar31,iVar24,iVar25,&local_80,&local_a0,param_4
                          ,&local_950,&local_c0,pfVar34,param_9,param_10);
    if (iVar25 == 2) {
      if ((char)bVar4 < '\0') {
        bVar27 = true;
      }
      else {
        bVar27 = false;
        *param_10 = 0;
        *(undefined8 *)(param_10 + 0x1c) = 0;
        *(undefined8 *)(param_10 + 0x1e) = 0;
        *(undefined8 *)(param_10 + 0x18) = 0;
        *(undefined8 *)(param_10 + 0x1a) = 0;
        *(undefined8 *)(param_10 + 0x14) = 0;
        *(undefined8 *)(param_10 + 0x16) = 0;
        *(undefined8 *)(param_10 + 0x10) = 0;
        *(undefined8 *)(param_10 + 0x12) = 0;
        *(undefined8 *)(param_10 + 0xc) = 0;
        *(undefined8 *)(param_10 + 0xe) = 0;
        *(undefined8 *)(param_9 + 0x88) = 0xffffffffffffffff;
        *(undefined1 *)(param_9 + 0x2b) = 0;
        *(undefined8 *)(param_9 + 0x50) = 0;
        *(undefined8 *)(param_9 + 0x58) = 0;
        *(undefined8 *)(param_9 + 0x40) = 0;
        *(undefined8 *)(param_9 + 0x48) = 0;
        *(undefined8 *)(param_9 + 0x60) = 0;
        *(undefined8 *)(param_9 + 0x68) = 0;
      }
    }
    else {
      bVar27 = false;
    }
    param_7 = param_7 & 0xffffffff;
    uVar37 = extraout_b0;
    if (!bVar27) goto LAB_03073c44;
  }
  if ((param_7 & 1) != 0) {
    return 0;
  }
  *param_10 = 1;
  uVar70 = *(undefined4 *)(param_5 + 3);
  uVar37 = (undefined1)((uint)uVar70 >> 8);
  uVar38 = (undefined1)((uint)uVar70 >> 0x10);
  uVar39 = (undefined1)((uint)uVar70 >> 0x18);
  *(ulong *)(param_10 + 0xe) =
       CONCAT17(uVar39,CONCAT16(uVar38,CONCAT15(uVar37,CONCAT14((char)uVar70,uVar70))));
  *(ulong *)(param_10 + 0xc) =
       CONCAT17(uVar39,CONCAT16(uVar38,CONCAT15(uVar37,CONCAT14((char)uVar70,uVar70))));
  uVar71 = CONCAT44(fVar61,fVar60);
  uVar72 = CONCAT44(fVar56,fVar53);
  *(undefined8 *)(param_10 + 0x12) = uVar71;
  *(undefined8 *)(param_10 + 0x10) = uVar72;
  *(undefined8 *)(param_10 + 0x16) = uVar71;
  *(undefined8 *)(param_10 + 0x14) = uVar72;
  *(undefined8 *)(param_10 + 0x1a) = uVar71;
  *(undefined8 *)(param_10 + 0x18) = uVar72;
  *(undefined8 *)(param_10 + 0x1e) = uVar71;
  *(undefined8 *)(param_10 + 0x1c) = uVar72;
  *(undefined8 *)(param_10 + 0x22) = uVar71;
  *(undefined8 *)(param_10 + 0x20) = uVar72;
  param_10[1] = *(undefined4 *)(param_5 + 3);
  *(undefined8 *)(param_9 + 0x88) = 0xffffffffffffffff;
  if (*(byte *)(param_9 + 0x2b) != 1) {
    uVar71 = *(undefined8 *)
              ((long)(PTR_DAT_043723a0 +
                     (ulong)(0xf >> (ulong)(4 - *(byte *)(param_9 + 0x2b) & 0x1f)) * 0x10) + 8);
    uVar72 = *(undefined8 *)
              (PTR_DAT_043723a0 +
              (ulong)(0xf >> (ulong)(4 - *(byte *)(param_9 + 0x2b) & 0x1f)) * 0x10);
    *(undefined8 *)(param_9 + 0x50) = 0;
    *(undefined8 *)(param_9 + 0x58) = 0;
    *(undefined1 *)(param_9 + 0x2b) = 1;
    *(undefined8 *)(param_9 + 0x60) = 0;
    *(undefined8 *)(param_9 + 0x68) = 0;
    *(ulong *)(param_9 + 0x48) =
         CONCAT17(*(byte *)(param_9 + 0x4f) & (byte)((ulong)uVar71 >> 0x38),
                  CONCAT16(*(byte *)(param_9 + 0x4e) & (byte)((ulong)uVar71 >> 0x30),
                           CONCAT15(*(byte *)(param_9 + 0x4d) & (byte)((ulong)uVar71 >> 0x28),
                                    CONCAT14(*(byte *)(param_9 + 0x4c) &
                                             (byte)((ulong)uVar71 >> 0x20),
                                             CONCAT13(*(byte *)(param_9 + 0x4b) &
                                                      (byte)((ulong)uVar71 >> 0x18),
                                                      CONCAT12(*(byte *)(param_9 + 0x4a) &
                                                               (byte)((ulong)uVar71 >> 0x10),
                                                               CONCAT11(*(byte *)(param_9 + 0x49) &
                                                                        (byte)((ulong)uVar71 >> 8),
                                                                        *(byte *)(param_9 + 0x48) &
                                                                        (byte)uVar71)))))));
    *(ulong *)(param_9 + 0x40) =
         CONCAT17(*(byte *)(param_9 + 0x47) & (byte)((ulong)uVar72 >> 0x38),
                  CONCAT16(*(byte *)(param_9 + 0x46) & (byte)((ulong)uVar72 >> 0x30),
                           CONCAT15(*(byte *)(param_9 + 0x45) & (byte)((ulong)uVar72 >> 0x28),
                                    CONCAT14(*(byte *)(param_9 + 0x44) &
                                             (byte)((ulong)uVar72 >> 0x20),
                                             CONCAT13(*(byte *)(param_9 + 0x43) &
                                                      (byte)((ulong)uVar72 >> 0x18),
                                                      CONCAT12(*(byte *)(param_9 + 0x42) &
                                                               (byte)((ulong)uVar72 >> 0x10),
                                                               CONCAT11(*(byte *)(param_9 + 0x41) &
                                                                        (byte)((ulong)uVar72 >> 8),
                                                                        *(byte *)(param_9 + 0x40) &
                                                                        (byte)uVar72)))))));
  }
  fVar11 = (float)param_10[5];
  fVar12 = (float)param_10[6];
  uVar37 = (undefined1)(int)(*pfVar34 * 1.96608e+09);
  *(ushort *)(param_9 + 0x80) = (ushort)((uint)(int)(*pfVar34 * 1.96608e+09) >> 0x10) ^ 0x8000;
  *(ushort *)(param_9 + 0x82) = (ushort)((uint)(int)(fVar11 * 1.96608e+09) >> 0x10) ^ 0x8000;
  *(ushort *)(param_9 + 0x84) = (ushort)((uint)(int)(fVar12 * 1.96608e+09) >> 0x10) ^ 0x8000;
LAB_03073c44:
  FUN_0305be28(uVar37,&local_8c0,*(undefined8 *)(param_1 + 8));
  *(long *)(param_10 + 0x26) = param_9;
  lVar29 = param_2[2];
  *(long *)(param_10 + 0x2a) = lVar29;
  lVar26 = param_3[2];
  *(long *)(param_10 + 0x2c) = lVar26;
  param_10[0x28] = (int)param_2[3];
  param_10[0x29] = (int)param_3[3];
  bVar4 = *(byte *)(param_9 + 10);
  *(undefined1 *)(param_10 + 0x24) = 0;
  *(undefined1 *)((long)param_10 + 0x95) = 0;
  *(undefined1 *)((long)param_10 + 0x93) = 0;
  *(byte *)((long)param_10 + 0x91) = bVar4 >> 6 & 1;
  uVar23 = *(uint *)(lVar26 + 0x14) | *(uint *)(lVar29 + 0x14);
  param_10[0x2f] = uVar23;
  if (*(int *)(param_9 + 0x1c) == 0xaaa00) {
    uVar23 = *(uint *)(*param_2 + 0x54) | uVar23 | *(uint *)(*param_3 + 0x54);
    bVar4 = *(byte *)(param_9 + 0xe) & 3;
    uVar22 = *(uint *)(*(long *)(param_1 + 0x30) + (ulong)*(ushort *)(param_2[1] + 0x58) * 0x70 + 4)
    ;
    uVar36 = *(uint *)(*(long *)(param_1 + 0x30) + (ulong)*(ushort *)(param_3[1] + 0x58) * 0x70 + 4)
    ;
    if (bVar4 == 1) {
      uVar23 = uVar23 & 0xffffff7f;
    }
    else if (bVar4 == 2) {
      uVar23 = uVar23 | 0x80;
    }
    if (*(long *)(param_1 + 8) != 0) {
      uVar23 = *(uint *)(*(long *)(param_1 + 8) + 0x80c) | uVar23;
    }
    *(undefined2 *)((long)param_10 + 0x92) = 0x101;
    *(undefined4 *)(param_9 + 0x1c) = 0;
    *(uint *)(param_9 + 0x2c) = uVar36 | uVar22 | uVar23 | *(uint *)(param_9 + 0x2c);
    FUN_03048f60(param_9,lVar29,lVar26,param_2[5],param_3[5]);
    lVar29 = *(long *)(param_1 + 0x40);
    uVar23 = *(uint *)(param_9 + 0x2c);
    if ((*(uint *)(lVar29 + 0x108) & uVar23) != 0) {
      uStack_4b8 = param_10;
      local_4c0 = param_9;
      if ((*(uint *)(lVar29 + 0x110) & uVar23) != 0) {
        (**(code **)(**(long **)(lVar29 + 0x118) + 0x20))
                  (*(long **)(lVar29 + 0x118),param_1,&local_8c0,param_2,param_3,&local_4c0);
      }
      if (1 < *(int *)(lVar29 + 0x10c)) {
        if ((*(uint *)(lVar29 + 0x120) & uVar23) != 0) {
          (**(code **)(**(long **)(lVar29 + 0x128) + 0x20))
                    (*(long **)(lVar29 + 0x128),param_1,&local_8c0,param_2,param_3,&local_4c0);
        }
        if (2 < *(int *)(lVar29 + 0x10c)) {
          if ((*(uint *)(lVar29 + 0x130) & uVar23) != 0) {
            (**(code **)(**(long **)(lVar29 + 0x138) + 0x20))
                      (*(long **)(lVar29 + 0x138),param_1,&local_8c0,param_2,param_3,&local_4c0);
          }
          if (3 < *(int *)(lVar29 + 0x10c)) {
            if ((*(uint *)(lVar29 + 0x140) & uVar23) != 0) {
              (**(code **)(**(long **)(lVar29 + 0x148) + 0x20))
                        (*(long **)(lVar29 + 0x148),param_1,&local_8c0,param_2,param_3,&local_4c0);
            }
            if (4 < *(int *)(lVar29 + 0x10c)) {
              if ((*(uint *)(lVar29 + 0x150) & uVar23) != 0) {
                (**(code **)(**(long **)(lVar29 + 0x158) + 0x20))
                          (*(long **)(lVar29 + 0x158),param_1,&local_8c0,param_2,param_3,&local_4c0)
                ;
              }
              if (5 < *(int *)(lVar29 + 0x10c)) {
                puVar31 = (undefined8 *)(lVar29 + 0x168);
                lVar26 = 5;
                do {
                  if ((*(uint *)(puVar31 + -1) & uVar23) != 0) {
                    (**(code **)(*(long *)*puVar31 + 0x20))
                              ((long *)*puVar31,param_1,&local_8c0,param_2,param_3,&local_4c0);
                  }
                  lVar26 = lVar26 + 1;
                  puVar31 = puVar31 + 2;
                } while (lVar26 < *(int *)(lVar29 + 0x10c));
              }
            }
          }
        }
      }
    }
  }
  return 1;
}


