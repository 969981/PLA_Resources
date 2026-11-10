/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f8a710; name: FUN_02f8a710
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_02f8a710(long *param_1,long *param_2,undefined8 *param_3,long param_4,undefined2 *param_5,
                 undefined8 *param_6,undefined8 param_7,uint param_8,undefined8 param_9)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long lVar10;
  undefined4 uVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  int iVar22;
  undefined8 *puVar23;
  undefined1 uVar24;
  float *pfVar25;
  undefined4 uVar26;
  float *pfVar27;
  float *pfVar28;
  long *plVar29;
  ulong uVar30;
  int iVar31;
  float *pfVar32;
  long lVar33;
  long lVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar42;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 uVar43;
  byte bVar44;
  undefined1 uVar45;
  byte bVar46;
  undefined1 uVar47;
  byte bVar48;
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
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar63 [16];
  float fVar64;
  undefined8 uVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined4 local_214;
  long local_1c0;
  long *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  long local_1a0;
  long local_198;
  long lStack_190;
  long local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  uint local_168;
  undefined4 local_164;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120 [2];
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float local_100 [4];
  float local_f0 [6];
  undefined2 local_d8 [8];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  long local_a8;
  undefined2 local_a0 [8];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  uint local_78;
  long local_70;
  
  lVar18 = param_2[5];
  plVar29 = *(long **)(lVar18 + 0x50);
  iVar13 = (**(code **)(*plVar29 + 0x60))(plVar29);
  lVar33 = uStack_1a8;
  lVar34 = local_1b0;
  iVar14 = (**(code **)(*plVar29 + 0x20))(plVar29);
  uStack_1a8 = lVar33;
  local_1b0 = lVar34;
  lVar33 = uStack_1a8;
  lVar34 = local_1b0;
  if (iVar13 < 1) {
    return;
  }
  iVar31 = 0;
LAB_02f8a814:
  uStack_1a8 = lVar33;
  local_1b0 = lVar34;
  uVar11 = uStack_1a8._4_4_;
  uVar26 = local_1b0._4_4_;
  lVar34 = local_1b0;
  local_1b0._4_4_ = uVar26;
  lVar33 = uStack_1a8;
  uStack_1a8._4_4_ = uVar11;
  (**(code **)(*plVar29 + 0x68))(plVar29,iVar31,local_120);
  lVar33 = uStack_1a8;
  lVar34 = local_1b0;
  if (iVar31 < iVar14) {
    bVar12 = false;
    uVar19 = 1;
  }
  else {
    uVar26 = local_1b0._4_4_;
    local_1b0 = lVar34;
    uVar11 = uStack_1a8._4_4_;
    uStack_1a8 = lVar33;
    lVar34 = local_1b0;
    local_1b0._4_4_ = uVar26;
    lVar33 = uStack_1a8;
    uStack_1a8._4_4_ = uVar11;
    uVar15 = (**(code **)(*plVar29 + 0x78))(plVar29,iVar31);
    bVar12 = (uVar15 & 7) == 7;
    uVar19 = 1;
    if (!bVar12) {
      uVar19 = 2;
    }
  }
  lVar34 = param_1[2];
  *(undefined4 *)(lVar34 + 0x20) = *(undefined4 *)(lVar18 + 0x20);
  local_180 = *param_3;
  local_178 = param_3[1];
  local_170 = param_3[2];
  local_214 = 0;
  uVar30 = 0;
  piVar1 = (int *)(lVar34 + 0x40);
  piVar2 = (int *)(lVar34 + 0x48);
  uVar15 = *(uint *)(param_3 + 3);
  iVar22 = *(int *)((long)param_3 + 0x1c);
  local_160 = param_3[4];
  uStack_158 = 0;
  local_150 = *(undefined1 *)(param_3 + 6);
  local_14c = *(undefined4 *)((long)param_3 + 0x34);
  uStack_138 = param_3[9];
  local_140 = param_3[8];
  uStack_128 = param_3[0xb];
  local_130 = param_3[10];
  local_148 = *(undefined4 *)(param_3 + 7);
  pfVar32 = local_100;
  do {
    local_168 = ((iVar31 << 1 | (uint)uVar30) + 1 <<
                (ulong)(-(iVar22 + (uint)*(byte *)(lVar18 + 0x1c)) & 0x1f)) - 1 |
                (&DAT_03aa74b0)[iVar22] & uVar15;
    local_164 = 0x20;
    fVar35 = (float)local_120[0];
    fVar37 = (float)((ulong)local_120[0] >> 0x20);
    fVar42 = (float)local_120[1];
    fVar36 = (float)((ulong)local_120[1] >> 0x20);
    if (bVar12) {
      if (*piVar1 == 0) {
        puVar21 = (undefined8 *)0x0;
        iVar22 = *piVar2;
        if (iVar22 == 0) goto LAB_02f8acbc;
LAB_02f8a964:
        puVar23 = (undefined8 *)((long)iVar22 + (long)piVar2);
      }
      else {
        puVar21 = (undefined8 *)((long)*piVar1 + (long)piVar1);
        iVar22 = *piVar2;
        if (iVar22 != 0) goto LAB_02f8a964;
LAB_02f8acbc:
        puVar23 = (undefined8 *)0x0;
      }
      auVar38._0_4_ = local_110 - fVar35;
      auVar38._4_4_ = fStack_10c - fVar37;
      auVar38._8_4_ = fStack_108 - fVar42;
      auVar38._12_4_ = fStack_104 - fVar36;
      fVar62 = local_100[0] - fVar35;
      fVar60 = local_100[1] - fVar37;
      uVar43 = SUB41(fVar60,0);
      uVar47 = (undefined1)((uint)fVar60 >> 8);
      uVar51 = (undefined1)((uint)fVar60 >> 0x10);
      uVar55 = (undefined1)((uint)fVar60 >> 0x18);
      fVar59 = local_100[2] - fVar42;
      fVar61 = local_100[3] - fVar36;
      auVar4[4] = uVar43;
      auVar4._0_4_ = fVar62;
      auVar4[5] = uVar47;
      auVar4[6] = uVar51;
      auVar4[7] = uVar55;
      auVar4._8_4_ = fVar59;
      auVar4._12_4_ = fVar61;
      auVar5[4] = uVar43;
      auVar5._0_4_ = fVar62;
      auVar5[5] = uVar47;
      auVar5[6] = uVar51;
      auVar5[7] = uVar55;
      auVar5._8_4_ = fVar59;
      auVar5._12_4_ = fVar61;
      auVar66 = NEON_ext(auVar4,auVar5,4,1);
      auVar63 = NEON_ext(auVar38,auVar38,4,1);
      uVar24 = 3;
      uVar26 = 4;
      fVar64 = auVar38._0_4_ * auVar66._0_4_ - fVar62 * auVar63._0_4_;
      fVar60 = auVar38._4_4_ * auVar66._4_4_ - fVar60 * auVar63._4_4_;
      uVar45 = SUB41(fVar60,0);
      uVar49 = (undefined1)((uint)fVar60 >> 8);
      uVar53 = (undefined1)((uint)fVar60 >> 0x10);
      uVar57 = (undefined1)((uint)fVar60 >> 0x18);
      fVar60 = auVar38._8_4_ * fVar62 - fVar59 * auVar38._0_4_;
      fVar62 = auVar38._12_4_ *
               (float)(CONCAT17(uVar55,CONCAT16(uVar51,CONCAT15(uVar47,CONCAT14(uVar43,fVar62)))) >>
                      0x20) - fVar61 * auVar38._4_4_;
      auVar6[4] = uVar45;
      auVar6._0_4_ = fVar64;
      auVar6[5] = uVar49;
      auVar6[6] = uVar53;
      auVar6[7] = uVar57;
      auVar6._8_4_ = fVar60;
      auVar6._12_4_ = fVar62;
      auVar7[4] = uVar45;
      auVar7._0_4_ = fVar64;
      auVar7[5] = uVar49;
      auVar7[6] = uVar53;
      auVar7[7] = uVar57;
      auVar7._8_4_ = fVar60;
      auVar7._12_4_ = fVar62;
      auVar63 = NEON_ext(auVar6,auVar7,4,1);
      fVar62 = auVar63._0_4_ * auVar63._0_4_;
      fVar59 = auVar63._4_4_ * auVar63._4_4_;
      auVar39._0_8_ = auVar63._0_8_;
      auVar39[0xc] = uVar45;
      auVar39._8_4_ = fVar64;
      auVar39[0xd] = uVar49;
      auVar39[0xe] = uVar53;
      auVar39[0xf] = uVar57;
      fVar60 = fVar62 + fVar59 + fVar64 * fVar64;
      fVar62 = fVar62 + fVar59 + fVar64 * fVar64;
      uVar20 = CONCAT44(fVar62,fVar60);
      uVar65 = NEON_frsqrte(uVar20,4);
      fVar64 = (float)uVar65;
      fVar59 = (float)((ulong)uVar65 >> 0x20);
      uVar65 = NEON_frsqrts(uVar20,CONCAT44(fVar59 * fVar59,fVar64 * fVar64),4);
      fVar64 = fVar64 * (float)uVar65;
      fVar59 = fVar59 * (float)((ulong)uVar65 >> 0x20);
      uVar20 = NEON_frsqrts(uVar20,CONCAT44(fVar59 * fVar59,fVar64 * fVar64),4);
      uVar43 = (undefined1)uVar20;
      uVar45 = (undefined1)((ulong)uVar20 >> 8);
      uVar47 = (undefined1)((ulong)uVar20 >> 0x10);
      uVar49 = (undefined1)((ulong)uVar20 >> 0x18);
      uVar51 = (undefined1)((ulong)uVar20 >> 0x20);
      uVar53 = (undefined1)((ulong)uVar20 >> 0x28);
      uVar55 = (undefined1)((ulong)uVar20 >> 0x30);
      uVar57 = (undefined1)((ulong)uVar20 >> 0x38);
      uVar65 = CONCAT44(-(uint)(fVar62 <= 0.0),-(uint)(fVar60 <= 0.0));
      pfVar25 = &local_110;
      pfVar27 = local_f0;
      pfVar28 = local_100;
    }
    else {
      if (*piVar1 == 0) {
        puVar21 = (undefined8 *)0x0;
        iVar22 = *piVar2;
        if (iVar22 == 0) goto LAB_02f8acd0;
LAB_02f8a9f4:
        puVar23 = (undefined8 *)((long)iVar22 + (long)piVar2);
      }
      else {
        puVar21 = (undefined8 *)((long)*piVar1 + (long)piVar1);
        iVar22 = *piVar2;
        if (iVar22 != 0) goto LAB_02f8a9f4;
LAB_02f8acd0:
        puVar23 = (undefined8 *)0x0;
      }
      pfVar25 = pfVar32 + -4;
      uVar24 = 0;
      fVar62 = (float)*(undefined8 *)pfVar25 - fVar35;
      fVar60 = (float)((ulong)*(undefined8 *)pfVar25 >> 0x20) - fVar37;
      uVar43 = SUB41(fVar60,0);
      uVar47 = (undefined1)((uint)fVar60 >> 8);
      uVar51 = (undefined1)((uint)fVar60 >> 0x10);
      uVar55 = (undefined1)((uint)fVar60 >> 0x18);
      fVar59 = (float)*(undefined8 *)(pfVar32 + -2) - fVar42;
      fVar61 = (float)((ulong)*(undefined8 *)(pfVar32 + -2) >> 0x20) - fVar36;
      auVar63[4] = uVar43;
      auVar63._0_4_ = fVar62;
      auVar63[5] = uVar47;
      auVar63[6] = uVar51;
      auVar63[7] = uVar55;
      auVar63._8_4_ = fVar59;
      auVar63._12_4_ = fVar61;
      auVar66[4] = uVar43;
      auVar66._0_4_ = fVar62;
      auVar66[5] = uVar47;
      auVar66[6] = uVar51;
      auVar66[7] = uVar55;
      auVar66._8_4_ = fVar59;
      auVar66._12_4_ = fVar61;
      auVar63 = NEON_ext(auVar63,auVar66,4,1);
      auVar40._0_4_ = *pfVar32 - fVar35;
      auVar40._4_4_ = pfVar32[1] - fVar37;
      auVar40._8_4_ = pfVar32[2] - fVar42;
      auVar40._12_4_ = pfVar32[3] - fVar36;
      auVar66 = NEON_ext(auVar40,auVar40,4,1);
      uVar26 = 3;
      fVar64 = fVar62 * auVar66._0_4_ - auVar40._0_4_ * auVar63._0_4_;
      fVar60 = fVar60 * auVar66._4_4_ - auVar40._4_4_ * auVar63._4_4_;
      uVar45 = SUB41(fVar60,0);
      uVar49 = (undefined1)((uint)fVar60 >> 8);
      uVar53 = (undefined1)((uint)fVar60 >> 0x10);
      uVar57 = (undefined1)((uint)fVar60 >> 0x18);
      fVar60 = fVar59 * auVar40._0_4_ - auVar40._8_4_ * fVar62;
      fVar62 = fVar61 * auVar40._4_4_ -
               auVar40._12_4_ *
               (float)(CONCAT17(uVar55,CONCAT16(uVar51,CONCAT15(uVar47,CONCAT14(uVar43,fVar62)))) >>
                      0x20);
      auVar8[4] = uVar45;
      auVar8._0_4_ = fVar64;
      auVar8[5] = uVar49;
      auVar8[6] = uVar53;
      auVar8[7] = uVar57;
      auVar8._8_4_ = fVar60;
      auVar8._12_4_ = fVar62;
      auVar9[4] = uVar45;
      auVar9._0_4_ = fVar64;
      auVar9[5] = uVar49;
      auVar9[6] = uVar53;
      auVar9[7] = uVar57;
      auVar9._8_4_ = fVar60;
      auVar9._12_4_ = fVar62;
      auVar63 = NEON_ext(auVar8,auVar9,4,1);
      fVar60 = auVar63._0_4_ * auVar63._0_4_;
      fVar59 = auVar63._4_4_ * auVar63._4_4_;
      auVar39[0xc] = uVar45;
      auVar39._8_4_ = fVar64;
      auVar39[0xd] = uVar49;
      auVar39[0xe] = uVar53;
      auVar39[0xf] = uVar57;
      auVar39._0_8_ = auVar63._0_8_;
      fVar62 = fVar60 + fVar59 + fVar64 * fVar64;
      fVar60 = fVar60 + fVar59 + fVar64 * fVar64;
      uVar43 = SUB41(fVar60,0);
      uVar45 = (undefined1)((uint)fVar60 >> 8);
      uVar47 = (undefined1)((uint)fVar60 >> 0x10);
      uVar49 = (undefined1)((uint)fVar60 >> 0x18);
      uVar20 = NEON_frsqrte(CONCAT17(uVar49,CONCAT16(uVar47,CONCAT15(uVar45,CONCAT14(uVar43,fVar62))
                                                    )),4);
      fVar64 = (float)uVar20;
      fVar59 = (float)((ulong)uVar20 >> 0x20);
      uVar20 = NEON_frsqrts(CONCAT17(uVar49,CONCAT16(uVar47,CONCAT15(uVar45,CONCAT14(uVar43,fVar62))
                                                    )),CONCAT44(fVar59 * fVar59,fVar64 * fVar64),4);
      fVar64 = fVar64 * (float)uVar20;
      fVar59 = fVar59 * (float)((ulong)uVar20 >> 0x20);
      uVar65 = CONCAT44(-(uint)(fVar60 <= 0.0),-(uint)(fVar62 <= 0.0));
      uVar20 = NEON_frsqrts(CONCAT17(uVar49,CONCAT16(uVar47,CONCAT15(uVar45,CONCAT14(uVar43,fVar62))
                                                    )),CONCAT44(fVar59 * fVar59,fVar64 * fVar64),4);
      uVar43 = (undefined1)uVar20;
      uVar45 = (undefined1)((ulong)uVar20 >> 8);
      uVar47 = (undefined1)((ulong)uVar20 >> 0x10);
      uVar49 = (undefined1)((ulong)uVar20 >> 0x18);
      uVar51 = (undefined1)((ulong)uVar20 >> 0x20);
      uVar53 = (undefined1)((ulong)uVar20 >> 0x28);
      uVar55 = (undefined1)((ulong)uVar20 >> 0x30);
      uVar57 = (undefined1)((ulong)uVar20 >> 0x38);
      pfVar27 = pfVar32;
      pfVar28 = pfVar32;
    }
    fVar64 = (float)CONCAT13(uVar49,CONCAT12(uVar47,CONCAT11(uVar45,uVar43))) * fVar64;
    fVar59 = (float)CONCAT13(uVar57,CONCAT12(uVar55,CONCAT11(uVar53,uVar51))) * fVar59;
    auVar67._0_4_ = fVar35 * auVar39._0_4_;
    auVar67._4_4_ = fVar37 * auVar39._4_4_;
    auVar67._8_4_ = fVar42 * auVar39._8_4_;
    auVar67._12_4_ = fVar36 * auVar39._12_4_;
    bVar44 = SUB41(fVar64,0) & ~(byte)uVar65;
    bVar46 = (byte)((uint)fVar64 >> 8) & ~(byte)((ulong)uVar65 >> 8);
    bVar48 = (byte)((uint)fVar64 >> 0x10) & ~(byte)((ulong)uVar65 >> 0x10);
    bVar50 = (byte)((uint)fVar64 >> 0x18) & ~(byte)((ulong)uVar65 >> 0x18);
    bVar52 = SUB41(fVar59,0) & ~(byte)((ulong)uVar65 >> 0x20);
    bVar54 = (byte)((uint)fVar59 >> 8) & ~(byte)((ulong)uVar65 >> 0x28);
    bVar56 = (byte)((uint)fVar59 >> 0x10) & ~(byte)((ulong)uVar65 >> 0x30);
    bVar58 = (byte)((uint)fVar59 >> 0x18) & ~(byte)((ulong)uVar65 >> 0x38);
    auVar63 = NEON_ext(auVar67,auVar67,8,1);
    *puVar21 = local_120[0];
    *(float *)(puVar21 + 1) = fVar42;
    uVar20 = *(undefined8 *)(pfVar25 + 2);
    fVar35 = (float)CONCAT13(bVar50,CONCAT12(bVar48,CONCAT11(bVar46,bVar44)));
    *(undefined8 *)((long)puVar21 + 0xc) = *(undefined8 *)pfVar25;
    *(int *)((long)puVar21 + 0x14) = (int)uVar20;
    uVar20 = *(undefined8 *)(pfVar28 + 2);
    puVar21[3] = *(undefined8 *)pfVar28;
    *(int *)(puVar21 + 4) = (int)uVar20;
    uVar20 = *(undefined8 *)(pfVar27 + 2);
    fVar37 = auVar39._0_4_ * (float)CONCAT13(bVar50,CONCAT12(bVar48,CONCAT11(bVar46,bVar44)));
    fVar42 = auVar39._4_4_ * (float)CONCAT13(bVar58,CONCAT12(bVar56,CONCAT11(bVar54,bVar52)));
    auVar41._0_8_ = CONCAT44(fVar42,fVar37);
    auVar41._8_4_ = auVar39._8_4_ * fVar35;
    auVar41._12_4_ =
         -(auVar67._0_4_ + auVar67._4_4_ + auVar63._0_4_) *
         (float)(CONCAT17(bVar58,CONCAT16(bVar56,CONCAT15(bVar54,CONCAT14(bVar52,fVar35)))) >> 0x20)
    ;
    *(undefined8 *)((long)puVar21 + 0x24) = *(undefined8 *)pfVar27;
    *(int *)((long)puVar21 + 0x2c) = (int)uVar20;
    lVar33 = 0;
    if (*(int *)(lVar34 + 0x58) != 0) {
      lVar33 = (long)*(int *)(lVar34 + 0x58) + lVar34 + 0x58;
    }
    *(undefined4 *)(lVar34 + 0x44) = uVar26;
    *(undefined1 *)(lVar33 + 3) = uVar24;
    *(undefined1 *)(lVar33 + 7) = uVar24;
    uVar20 = auVar41._8_8_;
    puVar23[1] = uVar20;
    *puVar23 = auVar41._0_8_;
    puVar23[3] = CONCAT44(-auVar41._12_4_,-auVar41._8_4_);
    puVar23[2] = CONCAT44(-fVar42,-fVar37);
    puVar23[5] = uVar20;
    puVar23[4] = auVar41._0_8_;
    puVar23[7] = uVar20;
    puVar23[6] = auVar41._0_8_;
    lStack_190 = param_2[6];
    local_188 = param_2[7];
    local_1a0 = param_2[4];
    local_1c0 = *param_2;
    local_1b8 = (long *)param_2[1];
    lVar33 = param_2[2];
    lVar3 = param_2[3];
    local_1b0._4_4_ = (undefined4)((ulong)lVar33 >> 0x20);
    uStack_1a8._4_4_ = (undefined4)((ulong)lVar3 >> 0x20);
    plVar16 = (long *)*param_2;
    local_198 = lVar34;
    if (plVar16 != (long *)0x0) {
      if (uVar30 == 0) {
        uVar26 = local_1b0._4_4_;
        local_1b0 = lVar33;
        uVar11 = uStack_1a8._4_4_;
        uStack_1a8 = lVar3;
        lVar33 = local_1b0;
        local_1b0._4_4_ = uVar26;
        lVar3 = uStack_1a8;
        uStack_1a8._4_4_ = uVar11;
        local_214 = (**(code **)(*plVar29 + 0x70))(plVar29,iVar31);
        lVar3 = uStack_1a8;
        lVar33 = local_1b0;
        plVar16 = (long *)*param_2;
      }
      uStack_1a8 = lVar3;
      local_1b0 = lVar33;
      uVar11 = uStack_1a8._4_4_;
      uVar26 = local_1b0._4_4_;
      lVar33 = local_1b0;
      local_1b0._4_4_ = uVar26;
      lVar3 = uStack_1a8;
      uStack_1a8._4_4_ = uVar11;
      (**(code **)(*plVar16 + 0x40))
                (plVar16,local_214,5,*param_3,param_3[1],lVar18,local_168,lVar34,&local_1b0);
      lVar3 = uStack_1a8;
      lVar33 = local_1b0;
    }
    uStack_1a8 = lVar3;
    local_1b0 = lVar33;
    uVar11 = uStack_1a8._4_4_;
    uVar26 = local_1b0._4_4_;
    lVar33 = *param_1;
    if (local_1b8 == (long *)0x0) {
LAB_02f8ac30:
      uStack_1a8._4_4_ = uVar11;
      local_1b0._4_4_ = uVar26;
      uVar11 = uStack_1a8._4_4_;
      uVar26 = local_1b0._4_4_;
      lVar3 = local_1b0;
      local_1b0._4_4_ = uVar26;
      lVar10 = uStack_1a8;
      uStack_1a8._4_4_ = uVar11;
      (**(code **)(lVar33 + (ulong)*(byte *)(local_198 + 0x18) * 0xf8 +
                   (ulong)*(byte *)(param_4 + 0x18) * 8 + 0xa0))
                (param_1,&local_1c0,&local_180,param_4,param_5,param_6,param_7,param_8 & 1,param_9);
      lVar10 = uStack_1a8;
      lVar3 = local_1b0;
      uVar26 = local_1b0._4_4_;
      uVar11 = uStack_1a8._4_4_;
    }
    else {
      local_a0[0] = (undefined2)local_1b0;
      *(undefined4 *)((undefined8 *)((ulong)local_a0 | 4) + 1) = uVar11;
      *(undefined8 *)((ulong)local_a0 | 4) = CONCAT84(uStack_1a8,uVar26);
      local_90 = local_180;
      uStack_88 = local_178;
      local_80 = local_170;
      local_78 = local_168;
      local_70 = local_198;
      local_d8[0] = *param_5;
      uVar20 = *(undefined8 *)(param_5 + 2);
      *(undefined4 *)((undefined8 *)((ulong)local_d8 | 4) + 1) = *(undefined4 *)(param_5 + 6);
      *(undefined8 *)((ulong)local_d8 | 4) = uVar20;
      local_c8 = *param_6;
      local_c0 = param_6[1];
      local_b8 = param_6[2];
      local_b0 = *(undefined4 *)(param_6 + 3);
      local_a8 = param_4;
      lVar3 = local_1b0;
      local_1b0._4_4_ = uVar26;
      lVar10 = uStack_1a8;
      uStack_1a8._4_4_ = uVar11;
      uVar17 = (**(code **)(*local_1b8 + 0x40))(local_1b8,5,(param_8 ^ 1) & 1,local_a0,local_d8);
      uVar11 = uStack_1a8._4_4_;
      uVar26 = local_1b0._4_4_;
      lVar3 = local_1b0;
      lVar10 = uStack_1a8;
      if ((uVar17 & 1) != 0) goto LAB_02f8ac30;
    }
    uStack_1a8._4_4_ = uVar11;
    local_1b0._4_4_ = uVar26;
    uStack_1a8 = lVar10;
    local_1b0 = lVar3;
    uVar11 = uStack_1a8._4_4_;
    uVar26 = local_1b0._4_4_;
    uVar30 = uVar30 + 1;
    if (uVar19 <= uVar30) break;
    uVar15 = *(uint *)(param_3 + 3);
    iVar22 = *(int *)((long)param_3 + 0x1c);
    pfVar32 = pfVar32 + 4;
  } while( true );
  iVar31 = iVar31 + 1;
  lVar34 = local_1b0;
  lVar33 = uStack_1a8;
  local_1b0._4_4_ = uVar26;
  uStack_1a8._4_4_ = uVar11;
  if (iVar31 == iVar13) {
    return;
  }
  goto LAB_02f8a814;
}


