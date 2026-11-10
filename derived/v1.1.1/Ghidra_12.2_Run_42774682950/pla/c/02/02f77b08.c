/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f77b08; name: FUN_02f77b08
 */


void FUN_02f77b08(long *param_1,uint param_2)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  float *pfVar17;
  undefined1 *puVar18;
  undefined4 uVar19;
  byte *pbVar20;
  undefined1 (*pauVar21) [16];
  float fVar22;
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  float fVar26;
  undefined1 auVar25 [16];
  float fVar27;
  float fVar28;
  int iVar29;
  undefined1 auVar30 [12];
  undefined1 auVar31 [12];
  float fVar36;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar37;
  float fVar44;
  int iVar46;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  int iVar38;
  int iVar45;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar53;
  float fVar54;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined8 uVar64;
  float fVar65;
  float local_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float local_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float local_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined2 local_1e0;
  undefined2 uStack_1de;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  ulong uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  undefined8 local_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  ulong uStack_c8;
  undefined2 local_c0;
  undefined2 uStack_be;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long local_b0;
  undefined8 local_a8;
  float *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined2 local_60;
  undefined2 uStack_5e;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  
  lVar12 = *param_1;
  pauVar1 = (undefined1 (*) [16])
            (lVar12 + 0x48 + (ulong)(param_2 & 0xffff) * 0x40 + *(long *)(lVar12 + 0x48));
  pbVar20 = pauVar1[1] + 0xe;
  if ((*pbVar20 >> 6 & 1) == 0) {
    return;
  }
  uVar16 = *(undefined8 *)param_1[6];
  uVar64 = ((undefined8 *)param_1[6])[1];
  local_60 = (undefined2)uVar16;
  uStack_5e = (undefined2)((ulong)uVar16 >> 0x10);
  uStack_5c = (undefined4)((ulong)uVar16 >> 0x20);
  uStack_58 = (undefined4)uVar64;
  local_54 = (undefined4)((ulong)uVar64 >> 0x20);
  puVar13 = (undefined8 *)param_1[7];
  uVar15 = puVar13[3];
  iVar29 = (uint)*(byte *)(lVar12 + 0x1c) + (int)(uVar15 >> 0x20);
  uVar15 = (ulong)((param_2 + 1 << (ulong)(-iVar29 & 0x1f)) - 1) |
           uVar15 & (uint)(&DAT_03aa74b0)[(long)uVar15 >> 0x20];
  pauVar21 = pauVar1 + 3;
  if (*(long *)*pauVar21 == 0) {
    puVar18 = (undefined1 *)0x0;
  }
  else {
    puVar18 = *pauVar21 + *(long *)*pauVar21;
  }
  plVar11 = *(long **)param_1[4];
  uVar19 = (undefined4)uVar15;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x40))
              (plVar11,*(undefined2 *)(pauVar1[2] + 0xc),2,*puVar13,puVar13[1],lVar12,uVar15,puVar18
               ,&local_60);
    lVar12 = param_1[4];
    if (*(long *)(lVar12 + 8) != 0) {
      local_1e0 = *(undefined2 *)(lVar12 + 0x10);
      local_1d4 = *(undefined4 *)(lVar12 + 0x1c);
      uStack_1dc = (undefined4)*(undefined8 *)(lVar12 + 0x14);
      uStack_1d8 = (undefined4)((ulong)*(undefined8 *)(lVar12 + 0x14) >> 0x20);
      puVar13 = (undefined8 *)param_1[5];
      local_1d0 = *puVar13;
      local_1c8 = puVar13[1];
      local_1c0 = puVar13[2];
      local_1b8 = CONCAT44(local_1b8._4_4_,*(undefined4 *)(puVar13 + 3));
      local_1b0 = *(undefined8 *)(lVar12 + 0x28);
      local_c0 = local_60;
      uStack_bc = uStack_5c;
      uStack_b8 = uStack_58;
      uStack_b4 = local_54;
      local_b0 = *(undefined8 *)param_1[7];
      local_a8 = ((undefined8 *)param_1[7])[1];
      local_a0 = (float *)*param_1;
      local_98 = CONCAT44(local_98._4_4_,uVar19);
      local_90 = puVar18;
      uVar15 = (**(code **)(**(long **)(lVar12 + 8) + 0x40))
                         (*(long **)(lVar12 + 8),2,(char)param_1[8] == '\0',&local_1e0,&local_c0);
      if ((uVar15 & 1) == 0) {
        return;
      }
    }
  }
  puVar13 = (undefined8 *)param_1[7];
  NEON_fmov(0x3f800000,4);
  uVar64 = NEON_fmov(0x3f800000,4);
  uVar16 = *puVar13;
  local_c0 = (undefined2)uVar16;
  uStack_be = (undefined2)((ulong)uVar16 >> 0x10);
  uStack_bc = (undefined4)((ulong)uVar16 >> 0x20);
  uStack_b8 = (undefined4)puVar13[1];
  uStack_b4 = (undefined4)((ulong)puVar13[1] >> 0x20);
  local_b0 = puVar13[2];
  local_a8 = puVar13[3];
  local_a0 = (float *)puVar13[4];
  local_98 = 0;
  local_90._0_4_ = (undefined4)CONCAT71((int7)((ulong)local_90 >> 8),*(undefined1 *)(puVar13 + 6));
  local_90 = (undefined1 *)CONCAT44(*(undefined4 *)((long)puVar13 + 0x34),(undefined4)local_90);
  local_80 = puVar13[8];
  uStack_78 = puVar13[9];
  local_70 = puVar13[10];
  uStack_68 = puVar13[0xb];
  local_88[0] = *(undefined4 *)(puVar13 + 7);
  fVar48 = (float)*(undefined8 *)(pauVar1[2] + 8);
  fVar36 = (float)*(undefined8 *)pauVar1[2];
  fVar47 = (float)((ulong)*(undefined8 *)pauVar1[2] >> 0x20);
  fVar49 = 1.0;
  auVar32 = *pauVar1;
  auVar33 = pauVar1[1];
  auVar24 = auVar33._0_12_;
  fVar22 = auVar32._0_4_;
  auVar39._0_4_ = fVar22 + fVar22;
  fVar26 = auVar32._4_4_;
  auVar39._4_4_ = fVar26 + fVar26;
  auVar39._8_4_ = auVar32._8_4_ + auVar32._8_4_;
  fVar28 = auVar32._12_4_;
  auVar39._12_4_ = fVar28 + fVar28;
  auVar32 = NEON_ext(auVar32,auVar32,8,1);
  auVar40 = NEON_ext(auVar39,auVar39,8,1);
  fVar27 = auVar32._0_4_ * auVar40._0_4_;
  fVar55 = (float)uVar64;
  auVar32._0_8_ =
       CONCAT44(auVar39._4_4_ * fVar22 + auVar39._8_4_ * fVar28,
                fVar55 - (auVar39._4_4_ * fVar26 + fVar27));
  fVar65 = auVar39._8_4_ * fVar22 - auVar39._4_4_ * fVar28;
  auVar40._0_8_ =
       CONCAT44(fVar55 - (auVar39._0_4_ * fVar22 + fVar27),
                auVar39._4_4_ * fVar22 - auVar39._8_4_ * fVar28);
  uStack_f8 = (ulong)(uint)fVar65;
  auVar32._8_4_ = fVar65;
  auVar32._12_4_ = 0;
  fVar27 = auVar39._8_4_ * fVar26 + auVar39._0_4_ * fVar28;
  fVar55 = fVar55 - (auVar39._0_4_ * fVar22 + auVar39._4_4_ * fVar26);
  auVar41._0_8_ =
       CONCAT44(auVar39._8_4_ * fVar26 - auVar39._0_4_ * fVar28,
                auVar39._8_4_ * fVar22 + auVar39._4_4_ * fVar28);
  uStack_e8 = (ulong)(uint)fVar27;
  auVar40._8_4_ = fVar27;
  auVar40._12_4_ = 0;
  uStack_d8 = (ulong)(uint)fVar55;
  auVar41._8_4_ = fVar55;
  auVar41._12_4_ = 0;
  uStack_c8 = (ulong)(uint)auVar33._8_4_;
  local_d0 = auVar33._0_8_;
  local_100 = auVar32._0_8_;
  uStack_f0 = auVar40._0_8_;
  local_e0 = auVar41._0_8_;
  if (*(char *)(puVar13 + 6) == '\0') {
    if ((*pbVar20 >> 3 & 1) == 0) goto LAB_02f77de8;
  }
  else {
    fVar26 = (float)puVar13[9];
    fVar49 = (float)((ulong)puVar13[9] >> 0x20);
    fVar22 = (float)puVar13[8];
    fVar27 = (float)((ulong)puVar13[8] >> 0x20);
    auVar24._0_8_ = CONCAT44(auVar33._4_4_ * fVar27,auVar33._0_4_ * fVar22);
    auVar24._8_4_ = auVar33._8_4_ * fVar26;
    auVar33._12_4_ = fVar49 * 0.0;
    auVar33._0_12_ = auVar24;
    fVar36 = fVar36 * fVar22;
    fVar47 = fVar47 * fVar27;
    fVar48 = fVar48 * fVar26;
    fVar49 = fVar49 * 1.0;
    uStack_c8 = auVar33._8_8_;
    local_d0 = auVar24._0_8_;
  }
  uStack_78 = CONCAT44(fVar49,fVar48);
  local_80 = CONCAT44(fVar47,fVar36);
  local_90 = (undefined1 *)CONCAT71(local_90._1_7_,1);
  local_70 = 0;
  uStack_68 = 0;
  if ((*pbVar20 >> 3 & 1) == 0) {
    uVar2 = *(uint *)((long)puVar13 + 0x34);
  }
  else {
    uVar2 = (*pbVar20 >> 5 ^ 0xffffffff) & 1;
  }
  local_90 = (undefined1 *)CONCAT44(uVar2,(undefined4)local_90);
  puVar14 = *(undefined1 **)*pauVar21;
  if (puVar14 != (undefined1 *)0x0) {
    puVar14 = *pauVar21 + (long)puVar14;
  }
  local_88[0] = *(undefined4 *)(puVar14 + 0x20);
  if ((puVar14 != (undefined1 *)0x0) && ((*(ushort *)(puVar14 + 0x1a) & 1) != 0)) {
    iVar38 = *(int *)(puVar14 + 0x40);
    if (iVar38 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = (long)iVar38 + (long)(puVar14 + 0x40);
    }
    FUN_02ffe20c(lVar12,*(undefined4 *)(puVar14 + 0x44),uVar2,&local_80,local_88,&local_70);
    auVar41._8_8_ = uStack_d8;
    auVar41._0_8_ = local_e0;
    auVar9._8_8_ = uStack_c8;
    auVar9._0_8_ = local_d0;
    auVar24 = auVar9._0_12_;
    auVar32._8_8_ = uStack_f8;
    auVar32._0_8_ = local_100;
    auVar40._8_8_ = uStack_e8;
    auVar40._0_8_ = uStack_f0;
  }
LAB_02f77de8:
  puVar13 = *(undefined8 **)(param_1[7] + 0x20);
  fVar58 = (float)puVar13[1];
  fVar59 = (float)((ulong)puVar13[1] >> 0x20);
  fVar56 = (float)*puVar13;
  fVar57 = (float)((ulong)*puVar13 >> 0x20);
  fVar22 = *(float *)(puVar13 + 2);
  fVar27 = *(float *)((long)puVar13 + 0x14);
  fVar26 = *(float *)(puVar13 + 3);
  fVar28 = *(float *)((long)puVar13 + 0x1c);
  fVar47 = auVar24._4_4_;
  fVar49 = auVar41._8_4_;
  fVar60 = (float)puVar13[4];
  fVar61 = (float)((ulong)puVar13[4] >> 0x20);
  fVar62 = (float)puVar13[5];
  fVar63 = (float)((ulong)puVar13[5] >> 0x20);
  fVar36 = auVar24._0_4_;
  fVar48 = auVar24._8_4_;
  fVar54 = auVar40._8_4_;
  fVar44 = auVar41._4_4_;
  fVar65 = auVar32._8_4_;
  fVar37 = auVar41._0_4_;
  fVar50 = auVar40._0_4_;
  local_120 = fVar60 * fVar49 + fVar56 * fVar37 + fVar22 * fVar44;
  fStack_11c = fVar61 * fVar49 + fVar57 * fVar37 + fVar27 * fVar44;
  fStack_118 = fVar62 * fVar49 + fVar58 * fVar37 + fVar26 * fVar44;
  fStack_114 = fVar63 * fVar49 + fVar59 * fVar37 + fVar28 * fVar44;
  fVar53 = auVar40._4_4_;
  fVar49 = auVar32._0_4_;
  fVar55 = auVar32._4_4_;
  fStack_130 = fVar60 * fVar54 + fVar56 * fVar50 + fVar22 * fVar53;
  fStack_12c = fVar61 * fVar54 + fVar57 * fVar50 + fVar27 * fVar53;
  fStack_128 = fVar62 * fVar54 + fVar58 * fVar50 + fVar26 * fVar53;
  fStack_124 = fVar63 * fVar54 + fVar59 * fVar50 + fVar28 * fVar53;
  local_140 = fVar60 * fVar65 + fVar56 * fVar49 + fVar22 * fVar55;
  fStack_13c = fVar61 * fVar65 + fVar57 * fVar49 + fVar27 * fVar55;
  fStack_138 = fVar62 * fVar65 + fVar58 * fVar49 + fVar26 * fVar55;
  fStack_134 = fVar63 * fVar65 + fVar59 * fVar49 + fVar28 * fVar55;
  auVar23._0_4_ = fVar60 * fVar48 + fVar56 * fVar36 + fVar22 * fVar47 + *(float *)(puVar13 + 6);
  auVar23._4_4_ =
       fVar61 * fVar48 + fVar57 * fVar36 + fVar27 * fVar47 + *(float *)((long)puVar13 + 0x34);
  auVar23._8_4_ = fVar62 * fVar48 + fVar58 * fVar36 + fVar26 * fVar47 + *(float *)(puVar13 + 7);
  fStack_104 = fVar63 * fVar48 + fVar59 * fVar36 + fVar28 * fVar47 +
               *(float *)((long)puVar13 + 0x3c);
  puVar13 = (undefined8 *)param_1[4];
  local_1c8 = puVar13[3];
  uStack_1d8 = (undefined4)puVar13[1];
  local_1d4 = (undefined4)((ulong)puVar13[1] >> 0x20);
  uVar16 = *puVar13;
  local_1e0 = (undefined2)uVar16;
  uStack_1de = (undefined2)((ulong)uVar16 >> 0x10);
  uStack_1dc = (undefined4)((ulong)uVar16 >> 0x20);
  local_1d0 = puVar13[2];
  local_1c0 = puVar13[4];
  local_1b8 = puVar13[5];
  local_148 = puVar13[0x13];
  local_158 = puVar13[0x11];
  local_168 = puVar13[0xf];
  local_178 = puVar13[0xd];
  local_180 = puVar13[0xc];
  local_170 = puVar13[0xe];
  auVar33 = NEON_ext(auVar32,auVar32,8,1);
  auVar40 = NEON_ext(auVar40,auVar40,8,1);
  auVar32 = NEON_ext(auVar41,auVar41,8,1);
  local_160 = puVar13[0x10];
  local_150 = puVar13[0x12];
  fVar22 = *(float *)(puVar13 + 8);
  fVar27 = *(float *)((long)puVar13 + 0x44);
  fVar26 = *(float *)(puVar13 + 9);
  local_1b0 = 0;
  uStack_1a8 = 0;
  fVar28 = auVar33._0_4_ * fVar26 + fVar49 * fVar22 + fVar55 * fVar27;
  fVar36 = auVar40._0_4_ * fVar26 + fVar50 * fVar22 + fVar53 * fVar27;
  fVar27 = auVar32._0_4_ * fVar26 + fVar37 * fVar22 + fVar44 * fVar27;
  iVar38 = -(uint)(fVar28 == 0.0);
  iVar45 = -(uint)(fVar36 == 0.0);
  iVar46 = -(uint)(fVar27 == 0.0);
  fVar22 = (float)CONCAT13((byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                           CONCAT12((byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10),
                                    CONCAT11((byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar38 >> 8),
                                             SUB41(fVar28,0) & ~(byte)iVar38)));
  auVar30._0_8_ =
       CONCAT17((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18),
                CONCAT16((byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar45 >> 0x10),
                         CONCAT15((byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar45 >> 8),
                                  CONCAT14(SUB41(fVar36,0) & ~(byte)iVar45,fVar22))));
  auVar30[8] = SUB41(fVar27,0) & ~(byte)iVar46;
  auVar30[9] = (byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar46 >> 8);
  auVar30[10] = (byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar46 >> 0x10);
  auVar30[0xb] = (byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18);
  auVar34._12_4_ = 0;
  auVar34._0_12_ = auVar30;
  auVar33 = NEON_frecpe(auVar34,4);
  iVar38 = -(uint)(fVar22 == 0.0);
  iVar45 = -(uint)((float)((ulong)auVar30._0_8_ >> 0x20) == 0.0);
  iVar46 = -(uint)(auVar30._8_4_ == 0.0);
  auVar42[0] = ~(byte)iVar38;
  auVar42[1] = ~(byte)((uint)iVar38 >> 8);
  auVar42[2] = ~(byte)((uint)iVar38 >> 0x10);
  auVar42[3] = ~(byte)((uint)iVar38 >> 0x18);
  auVar42[4] = ~(byte)iVar45;
  auVar42[5] = ~(byte)((uint)iVar45 >> 8);
  auVar42[6] = ~(byte)((uint)iVar45 >> 0x10);
  auVar42[7] = ~(byte)((uint)iVar45 >> 0x18);
  auVar42[8] = ~(byte)iVar46;
  auVar42[9] = ~(byte)((uint)iVar46 >> 8);
  auVar42[10] = ~(byte)((uint)iVar46 >> 0x10);
  auVar42[0xb] = ~(byte)((uint)iVar46 >> 0x18);
  auVar42._12_4_ = 0;
  auVar32 = NEON_frecps(auVar34,auVar33,4);
  auVar51._0_4_ = auVar33._0_4_ * auVar32._0_4_;
  auVar51._4_4_ = auVar33._4_4_ * auVar32._4_4_;
  auVar51._8_4_ = auVar33._8_4_ * auVar32._8_4_;
  auVar51._12_4_ = auVar33._12_4_ * auVar32._12_4_;
  auVar33 = NEON_frecps(auVar34,auVar51,4);
  auVar52._0_4_ = auVar51._0_4_ * auVar33._0_4_;
  auVar52._4_4_ = auVar51._4_4_ * auVar33._4_4_;
  auVar52._8_4_ = auVar51._8_4_ * auVar33._8_4_;
  auVar52._12_4_ = auVar51._12_4_ * auVar33._12_4_;
  auVar43._8_4_ = 0x7f7fffee;
  auVar43._0_8_ = 0x7f7fffee7f7fffee;
  auVar43._12_4_ = 0x7f7fffee;
  local_a0 = &local_140;
  local_98 = 0;
  auVar43 = auVar43 ^ (auVar43 ^ auVar52) & auVar42;
  uStack_198 = (ulong)(uint)auVar30._8_4_;
  uStack_188 = auVar43._8_8_;
  local_190 = auVar43._0_8_;
  local_b0 = *param_1;
  local_a8 = CONCAT44(iVar29,uVar19);
  local_1a0 = auVar30._0_8_;
  local_110 = auVar23._0_4_;
  fStack_10c = auVar23._4_4_;
  fStack_108 = auVar23._8_4_;
  if ((char)param_1[8] == '\0') {
    bVar10 = false;
  }
  else {
    iVar29 = -(uint)(*(float *)(puVar13 + 0x10) == 0.0);
    iVar38 = -(uint)(*(float *)((long)puVar13 + 0x84) == 0.0);
    iVar45 = -(uint)(*(float *)(puVar13 + 0x11) == 0.0);
    iVar46 = -(uint)(*(float *)((long)puVar13 + 0x8c) == 0.0);
    iVar29 = CONCAT13(~(byte)((uint)iVar29 >> 0x18),
                      CONCAT12(~(byte)((uint)iVar29 >> 0x10),
                               CONCAT11(~(byte)((uint)iVar29 >> 8),~(byte)iVar29)));
    auVar31._0_8_ =
         CONCAT17(~(byte)((uint)iVar38 >> 0x18),
                  CONCAT16(~(byte)((uint)iVar38 >> 0x10),
                           CONCAT15(~(byte)((uint)iVar38 >> 8),CONCAT14(~(byte)iVar38,iVar29))));
    auVar31[8] = ~(byte)iVar45;
    auVar31[9] = ~(byte)((uint)iVar45 >> 8);
    auVar31[10] = ~(byte)((uint)iVar45 >> 0x10);
    auVar31[0xb] = ~(byte)((uint)iVar45 >> 0x18);
    auVar35[0xc] = ~(byte)iVar46;
    auVar35._0_12_ = auVar31;
    auVar35[0xd] = ~(byte)((uint)iVar46 >> 8);
    auVar35[0xe] = ~(byte)((uint)iVar46 >> 0x10);
    auVar35[0xf] = ~(byte)((uint)iVar46 >> 0x18);
    if (((iVar29 == 0 && (int)((ulong)auVar31._0_8_ >> 0x20) == 0) && auVar31._8_4_ == 0) &&
        auVar35._12_4_ == 0) {
      bVar10 = true;
    }
    else {
      FUN_02f77154(&local_1e0,&local_100);
      bVar10 = (char)param_1[8] != '\0';
      auVar23._4_4_ = fStack_10c;
      auVar23._0_4_ = local_110;
      auVar23._8_4_ = fStack_108;
    }
  }
  auVar7._4_4_ = fStack_13c;
  auVar7._0_4_ = local_140;
  auVar7._8_4_ = fStack_138;
  auVar7._12_4_ = fStack_134;
  auVar8._4_4_ = fStack_13c;
  auVar8._0_4_ = local_140;
  auVar8._8_4_ = fStack_138;
  auVar8._12_4_ = fStack_134;
  auVar33 = NEON_ext(auVar7,auVar8,8,1);
  auVar5._4_4_ = fStack_12c;
  auVar5._0_4_ = fStack_130;
  auVar5._8_4_ = fStack_128;
  auVar5._12_4_ = fStack_124;
  auVar6._4_4_ = fStack_12c;
  auVar6._0_4_ = fStack_130;
  auVar6._8_4_ = fStack_128;
  auVar6._12_4_ = fStack_124;
  auVar32 = NEON_ext(auVar5,auVar6,8,1);
  fVar28 = auVar33._0_4_;
  fVar36 = auVar32._0_4_;
  auVar3._4_4_ = fStack_11c;
  auVar3._0_4_ = local_120;
  auVar3._8_4_ = fStack_118;
  auVar3._12_4_ = fStack_114;
  auVar4._4_4_ = fStack_11c;
  auVar4._0_4_ = local_120;
  auVar4._8_4_ = fStack_118;
  auVar4._12_4_ = fStack_114;
  auVar33 = NEON_ext(auVar3,auVar4,8,1);
  pfVar17 = *(float **)(param_1[5] + 0x20);
  fVar48 = auVar33._4_4_;
  fVar47 = auVar33._0_4_;
  fVar22 = pfVar17[8];
  fVar27 = pfVar17[9];
  fVar26 = pfVar17[10];
  local_200 = fVar28 * fVar26 + local_140 * fVar22 + fStack_13c * fVar27;
  fStack_1fc = fVar36 * fVar26 + fStack_130 * fVar22 + fStack_12c * fVar27;
  fStack_1f8 = fVar47 * fVar26 + local_120 * fVar22 + fStack_11c * fVar27;
  fStack_1f4 = fVar48 * fVar26 + fStack_11c * fVar22 + fVar48 * fVar27;
  fVar22 = pfVar17[4];
  fVar27 = pfVar17[5];
  fVar26 = pfVar17[6];
  local_210 = fVar28 * fVar26 + local_140 * fVar22 + fStack_13c * fVar27;
  fStack_20c = fVar36 * fVar26 + fStack_130 * fVar22 + fStack_12c * fVar27;
  fStack_208 = fVar47 * fVar26 + local_120 * fVar22 + fStack_11c * fVar27;
  fStack_204 = fVar48 * fVar26 + fStack_11c * fVar22 + fVar48 * fVar27;
  fVar22 = *pfVar17;
  fVar27 = pfVar17[1];
  fVar26 = pfVar17[2];
  local_220 = fVar28 * fVar26 + local_140 * fVar22 + fStack_13c * fVar27;
  fStack_21c = fVar36 * fVar26 + fStack_130 * fVar22 + fStack_12c * fVar27;
  fStack_218 = fVar47 * fVar26 + local_120 * fVar22 + fStack_11c * fVar27;
  fStack_214 = fVar48 * fVar26 + fStack_11c * fVar22 + fVar48 * fVar27;
  fVar22 = pfVar17[0xc] - auVar23._0_4_;
  fVar27 = pfVar17[0xd] - auVar23._4_4_;
  fVar26 = pfVar17[0xe] - auVar23._8_4_;
  auVar25._0_8_ =
       CONCAT44(fVar36 * fVar26 + fStack_130 * fVar22 + fStack_12c * fVar27,
                fVar28 * fVar26 + local_140 * fVar22 + fStack_13c * fVar27);
  auVar25._8_4_ = fVar47 * fVar26 + local_120 * fVar22 + fStack_11c * fVar27;
  auVar25._12_4_ = fVar48 * fVar26 + fStack_11c * fVar22 + fVar48 * fVar27;
  uStack_1e8 = auVar25._8_8_;
  local_1f0 = auVar25._0_8_;
  FUN_02f91438(*(undefined8 *)param_1[3],(undefined8 *)param_1[3],&local_1e0,param_1[5],puVar18,
               &local_60,&local_c0,&local_220,bVar10,param_1[9],param_1[10]);
  return;
}


