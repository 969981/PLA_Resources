/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f7855c; name: FUN_02f7855c
 */


void FUN_02f7855c(long *param_1,uint param_2)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  float *pfVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  byte *pbVar17;
  undefined1 (*pauVar18) [16];
  float fVar19;
  float fVar20;
  int iVar21;
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  float fVar28;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar37;
  int iVar39;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  int iVar32;
  int iVar38;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar40;
  float fVar44;
  float fVar45;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined8 uVar58;
  float fVar59;
  float local_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float local_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float local_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined2 local_1f0;
  undefined2 uStack_1ee;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 local_1e4;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  ulong uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  float local_120;
  float fStack_11c;
  undefined8 uStack_118;
  undefined8 local_110;
  ulong uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 local_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  ulong uStack_d8;
  undefined2 local_d0;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  long local_c0;
  undefined8 local_b8;
  float *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined2 local_70;
  undefined2 uStack_6e;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  
  lVar9 = *param_1;
  pauVar1 = (undefined1 (*) [16])
            (lVar9 + 0x48 + (ulong)(param_2 & 0xffff) * 0x40 + *(long *)(lVar9 + 0x48));
  pbVar17 = pauVar1[1] + 0xe;
  if ((*pbVar17 >> 6 & 1) == 0) {
    return;
  }
  uVar13 = *(undefined8 *)param_1[6];
  uVar58 = ((undefined8 *)param_1[6])[1];
  local_70 = (undefined2)uVar13;
  uStack_6e = (undefined2)((ulong)uVar13 >> 0x10);
  uStack_6c = (undefined4)((ulong)uVar13 >> 0x20);
  uStack_68 = (undefined4)uVar58;
  local_64 = (undefined4)((ulong)uVar58 >> 0x20);
  puVar10 = (undefined8 *)param_1[7];
  uVar12 = puVar10[3];
  iVar21 = (uint)*(byte *)(lVar9 + 0x1c) + (int)(uVar12 >> 0x20);
  uVar12 = (ulong)((param_2 + 1 << (ulong)(-iVar21 & 0x1f)) - 1) |
           uVar12 & (uint)(&DAT_03aa74b0)[(long)uVar12 >> 0x20];
  pauVar18 = pauVar1 + 3;
  if (*(long *)*pauVar18 == 0) {
    puVar15 = (undefined1 *)0x0;
  }
  else {
    puVar15 = *pauVar18 + *(long *)*pauVar18;
  }
  plVar8 = *(long **)param_1[4];
  uVar16 = (undefined4)uVar12;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x40))
              (plVar8,*(undefined2 *)(pauVar1[2] + 0xc),2,*puVar10,puVar10[1],lVar9,uVar12,puVar15,
               &local_70);
    lVar9 = param_1[4];
    if (*(long *)(lVar9 + 8) != 0) {
      local_1f0 = *(undefined2 *)(lVar9 + 0x10);
      local_1e4 = *(undefined4 *)(lVar9 + 0x1c);
      uStack_1ec = (undefined4)*(undefined8 *)(lVar9 + 0x14);
      uStack_1e8 = (undefined4)((ulong)*(undefined8 *)(lVar9 + 0x14) >> 0x20);
      puVar10 = (undefined8 *)param_1[5];
      local_1e0 = *puVar10;
      local_1d8 = puVar10[1];
      local_1d0 = puVar10[2];
      local_1c8 = CONCAT44(local_1c8._4_4_,*(undefined4 *)(puVar10 + 3));
      local_1c0 = *(undefined8 *)(lVar9 + 0x28);
      local_d0 = local_70;
      uStack_cc = uStack_6c;
      uStack_c8 = uStack_68;
      uStack_c4 = local_64;
      local_c0 = *(undefined8 *)param_1[7];
      local_b8 = ((undefined8 *)param_1[7])[1];
      local_b0 = (float *)*param_1;
      local_a8 = CONCAT44(local_a8._4_4_,uVar16);
      local_a0 = puVar15;
      uVar12 = (**(code **)(**(long **)(lVar9 + 8) + 0x40))
                         (*(long **)(lVar9 + 8),2,(char)param_1[8] == '\0',&local_1f0,&local_d0);
      if ((uVar12 & 1) == 0) {
        return;
      }
    }
  }
  puVar10 = (undefined8 *)param_1[7];
  NEON_fmov(0x3f800000,4);
  uVar58 = NEON_fmov(0x3f800000,4);
  uVar13 = *puVar10;
  local_d0 = (undefined2)uVar13;
  uStack_ce = (undefined2)((ulong)uVar13 >> 0x10);
  uStack_cc = (undefined4)((ulong)uVar13 >> 0x20);
  uStack_c8 = (undefined4)puVar10[1];
  uStack_c4 = (undefined4)((ulong)puVar10[1] >> 0x20);
  local_c0 = puVar10[2];
  local_b8 = puVar10[3];
  local_b0 = (float *)puVar10[4];
  local_a8 = 0;
  local_a0._0_4_ = (undefined4)CONCAT71((int7)((ulong)local_a0 >> 8),*(undefined1 *)(puVar10 + 6));
  local_a0 = (undefined1 *)CONCAT44(*(undefined4 *)((long)puVar10 + 0x34),(undefined4)local_a0);
  local_90 = puVar10[8];
  uStack_88 = puVar10[9];
  local_80 = puVar10[10];
  uStack_78 = puVar10[0xb];
  local_98[0] = *(undefined4 *)(puVar10 + 7);
  fVar50 = (float)*(undefined8 *)(pauVar1[2] + 8);
  fVar28 = (float)*(undefined8 *)pauVar1[2];
  fVar48 = (float)((ulong)*(undefined8 *)pauVar1[2] >> 0x20);
  auVar24 = *pauVar1;
  local_e0 = *(undefined8 *)pauVar1[1];
  uStack_d8 = *(ulong *)(pauVar1[1] + 8) & 0xffffffff;
  fVar51 = 1.0;
  fVar29 = auVar24._0_4_;
  auVar41._0_4_ = fVar29 + fVar29;
  fVar30 = auVar24._4_4_;
  auVar41._4_4_ = fVar30 + fVar30;
  auVar41._8_4_ = auVar24._8_4_ + auVar24._8_4_;
  fVar20 = auVar24._12_4_;
  auVar41._12_4_ = fVar20 + fVar20;
  auVar24 = NEON_ext(auVar24,auVar24,8,1);
  auVar33 = NEON_ext(auVar41,auVar41,8,1);
  fVar19 = auVar24._0_4_ * auVar33._0_4_;
  fVar53 = (float)uVar58;
  auVar24._0_8_ =
       CONCAT44(auVar41._4_4_ * fVar29 + auVar41._8_4_ * fVar20,
                fVar53 - (auVar41._4_4_ * fVar30 + fVar19));
  fVar59 = auVar41._8_4_ * fVar29 - auVar41._4_4_ * fVar20;
  auVar33._0_8_ =
       CONCAT44(fVar53 - (auVar41._0_4_ * fVar29 + fVar19),
                auVar41._4_4_ * fVar29 - auVar41._8_4_ * fVar20);
  uStack_108 = (ulong)(uint)fVar59;
  auVar24._8_4_ = fVar59;
  auVar24._12_4_ = 0;
  fVar19 = auVar41._8_4_ * fVar30 + auVar41._0_4_ * fVar20;
  fVar53 = fVar53 - (auVar41._0_4_ * fVar29 + auVar41._4_4_ * fVar30);
  auVar34._0_8_ =
       CONCAT44(auVar41._8_4_ * fVar30 - auVar41._0_4_ * fVar20,
                auVar41._8_4_ * fVar29 + auVar41._4_4_ * fVar20);
  uStack_f8 = (ulong)(uint)fVar19;
  auVar33._8_4_ = fVar19;
  auVar33._12_4_ = 0;
  uStack_e8 = (ulong)(uint)fVar53;
  auVar34._8_4_ = fVar53;
  auVar34._12_4_ = 0;
  local_110 = auVar24._0_8_;
  uStack_100 = auVar33._0_8_;
  local_f0 = auVar34._0_8_;
  if (*(char *)(puVar10 + 6) == '\0') {
    if ((*pbVar17 >> 3 & 1) == 0) goto LAB_02f78848;
  }
  else {
    auVar41 = *(undefined1 (*) [16])(puVar10 + 8);
    local_e0 = CONCAT44((float)((ulong)local_e0 >> 0x20) * auVar41._4_4_,
                        (float)local_e0 * auVar41._0_4_);
    uStack_d8 = CONCAT44(auVar41._12_4_ * 0.0,(float)*(ulong *)(pauVar1[1] + 8) * auVar41._8_4_);
    fVar28 = fVar28 * auVar41._0_4_;
    fVar48 = fVar48 * auVar41._4_4_;
    fVar50 = fVar50 * auVar41._8_4_;
    fVar51 = auVar41._12_4_ * 1.0;
  }
  uStack_88 = CONCAT44(fVar51,fVar50);
  local_90 = CONCAT44(fVar48,fVar28);
  local_a0 = (undefined1 *)CONCAT71(local_a0._1_7_,1);
  local_80 = 0;
  uStack_78 = 0;
  if ((*pbVar17 >> 3 & 1) == 0) {
    uVar2 = *(uint *)((long)puVar10 + 0x34);
  }
  else {
    uVar2 = (*pbVar17 >> 5 ^ 0xffffffff) & 1;
  }
  local_a0 = (undefined1 *)CONCAT44(uVar2,(undefined4)local_a0);
  puVar11 = *(undefined1 **)*pauVar18;
  if (puVar11 != (undefined1 *)0x0) {
    puVar11 = *pauVar18 + (long)puVar11;
  }
  local_98[0] = *(undefined4 *)(puVar11 + 0x20);
  if ((puVar11 != (undefined1 *)0x0) && ((*(ushort *)(puVar11 + 0x1a) & 1) != 0)) {
    iVar32 = *(int *)(puVar11 + 0x40);
    if (iVar32 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = (long)iVar32 + (long)(puVar11 + 0x40);
    }
    FUN_02ffe20c(lVar9,*(undefined4 *)(puVar11 + 0x44),uVar2,&local_90,local_98,&local_80);
    auVar34._8_8_ = uStack_e8;
    auVar34._0_8_ = local_f0;
    auVar24._8_8_ = uStack_108;
    auVar24._0_8_ = local_110;
    auVar33._8_8_ = uStack_f8;
    auVar33._0_8_ = uStack_100;
  }
LAB_02f78848:
  puVar10 = *(undefined8 **)(param_1[7] + 0x20);
  fVar49 = (float)puVar10[1];
  fVar52 = (float)((ulong)puVar10[1] >> 0x20);
  fVar46 = (float)*puVar10;
  fVar47 = (float)((ulong)*puVar10 >> 0x20);
  fVar29 = *(float *)(puVar10 + 2);
  fVar19 = *(float *)((long)puVar10 + 0x14);
  fVar30 = *(float *)(puVar10 + 3);
  fVar20 = *(float *)((long)puVar10 + 0x1c);
  fVar53 = (float)((ulong)local_e0 >> 0x20);
  fVar28 = auVar34._8_4_;
  fVar54 = (float)puVar10[4];
  fVar55 = (float)((ulong)puVar10[4] >> 0x20);
  fVar56 = (float)puVar10[5];
  fVar57 = (float)((ulong)puVar10[5] >> 0x20);
  fVar51 = (float)local_e0;
  fVar59 = (float)uStack_d8;
  fVar37 = auVar34._4_4_;
  fVar31 = auVar34._0_4_;
  fVar44 = auVar33._4_4_;
  uStack_128 = CONCAT44(fVar57 * fVar28 + fVar52 * fVar31 + fVar20 * fVar37,
                        fVar56 * fVar28 + fVar49 * fVar31 + fVar30 * fVar37);
  fVar48 = auVar24._4_4_;
  fVar45 = auVar33._8_4_;
  local_130 = CONCAT44(fVar55 * fVar28 + fVar47 * fVar31 + fVar19 * fVar37,
                       fVar54 * fVar28 + fVar46 * fVar31 + fVar29 * fVar37);
  fVar40 = auVar33._0_4_;
  fVar28 = auVar24._0_4_;
  fVar50 = auVar24._8_4_;
  uStack_138 = CONCAT44(fVar57 * fVar45 + fVar52 * fVar40 + fVar20 * fVar44,
                        fVar56 * fVar45 + fVar49 * fVar40 + fVar30 * fVar44);
  local_150 = fVar54 * fVar50 + fVar46 * fVar28 + fVar29 * fVar48;
  fStack_14c = fVar55 * fVar50 + fVar47 * fVar28 + fVar19 * fVar48;
  fStack_148 = fVar56 * fVar50 + fVar49 * fVar28 + fVar30 * fVar48;
  fStack_144 = fVar57 * fVar50 + fVar52 * fVar28 + fVar20 * fVar48;
  local_140 = CONCAT44(fVar55 * fVar45 + fVar47 * fVar40 + fVar19 * fVar44,
                       fVar54 * fVar45 + fVar46 * fVar40 + fVar29 * fVar44);
  local_120 = fVar54 * fVar59 + fVar46 * fVar51 + fVar29 * fVar53 + *(float *)(puVar10 + 6);
  fStack_11c = fVar55 * fVar59 + fVar47 * fVar51 + fVar19 * fVar53 +
               *(float *)((long)puVar10 + 0x34);
  uStack_118 = CONCAT44(fVar57 * fVar59 + fVar52 * fVar51 + fVar20 * fVar53 +
                        *(float *)((long)puVar10 + 0x3c),
                        fVar56 * fVar59 + fVar49 * fVar51 + fVar30 * fVar53 +
                        *(float *)(puVar10 + 7));
  puVar10 = (undefined8 *)param_1[4];
  local_1d8 = puVar10[3];
  uStack_1e8 = (undefined4)puVar10[1];
  local_1e4 = (undefined4)((ulong)puVar10[1] >> 0x20);
  uVar13 = *puVar10;
  local_1f0 = (undefined2)uVar13;
  uStack_1ee = (undefined2)((ulong)uVar13 >> 0x10);
  uStack_1ec = (undefined4)((ulong)uVar13 >> 0x20);
  local_1e0 = puVar10[2];
  local_1d0 = puVar10[4];
  local_1c8 = puVar10[5];
  local_158 = puVar10[0x13];
  local_168 = puVar10[0x11];
  local_178 = puVar10[0xf];
  local_188 = puVar10[0xd];
  local_190 = puVar10[0xc];
  local_180 = puVar10[0xe];
  auVar24 = NEON_ext(auVar24,auVar24,8,1);
  auVar41 = NEON_ext(auVar33,auVar33,8,1);
  auVar33 = NEON_ext(auVar34,auVar34,8,1);
  local_170 = puVar10[0x10];
  local_160 = puVar10[0x12];
  fVar29 = *(float *)(puVar10 + 8);
  fVar19 = *(float *)((long)puVar10 + 0x44);
  fVar30 = *(float *)(puVar10 + 9);
  local_1c0 = 0;
  uStack_1b8 = 0;
  fVar20 = auVar24._0_4_ * fVar30 + fVar28 * fVar29 + fVar48 * fVar19;
  fVar28 = auVar41._0_4_ * fVar30 + fVar40 * fVar29 + fVar44 * fVar19;
  fVar19 = auVar33._0_4_ * fVar30 + fVar31 * fVar29 + fVar37 * fVar19;
  iVar32 = -(uint)(fVar20 == 0.0);
  iVar38 = -(uint)(fVar28 == 0.0);
  iVar39 = -(uint)(fVar19 == 0.0);
  fVar29 = (float)CONCAT13((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                           CONCAT12((byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10),
                                    CONCAT11((byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar32 >> 8),
                                             SUB41(fVar20,0) & ~(byte)iVar32)));
  auVar22._0_8_ =
       CONCAT17((byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                CONCAT16((byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10),
                         CONCAT15((byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar38 >> 8),
                                  CONCAT14(SUB41(fVar28,0) & ~(byte)iVar38,fVar29))));
  auVar22[8] = SUB41(fVar19,0) & ~(byte)iVar39;
  auVar22[9] = (byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar39 >> 8);
  auVar22[10] = (byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar39 >> 0x10);
  auVar22[0xb] = (byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18);
  auVar25._12_4_ = 0;
  auVar25._0_12_ = auVar22;
  auVar24 = NEON_frecpe(auVar25,4);
  iVar32 = -(uint)(fVar29 == 0.0);
  iVar38 = -(uint)((float)((ulong)auVar22._0_8_ >> 0x20) == 0.0);
  iVar39 = -(uint)(auVar22._8_4_ == 0.0);
  auVar35[0] = ~(byte)iVar32;
  auVar35[1] = ~(byte)((uint)iVar32 >> 8);
  auVar35[2] = ~(byte)((uint)iVar32 >> 0x10);
  auVar35[3] = ~(byte)((uint)iVar32 >> 0x18);
  auVar35[4] = ~(byte)iVar38;
  auVar35[5] = ~(byte)((uint)iVar38 >> 8);
  auVar35[6] = ~(byte)((uint)iVar38 >> 0x10);
  auVar35[7] = ~(byte)((uint)iVar38 >> 0x18);
  auVar35[8] = ~(byte)iVar39;
  auVar35[9] = ~(byte)((uint)iVar39 >> 8);
  auVar35[10] = ~(byte)((uint)iVar39 >> 0x10);
  auVar35[0xb] = ~(byte)((uint)iVar39 >> 0x18);
  auVar35._12_4_ = 0;
  auVar33 = NEON_frecps(auVar25,auVar24,4);
  auVar42._0_4_ = auVar24._0_4_ * auVar33._0_4_;
  auVar42._4_4_ = auVar24._4_4_ * auVar33._4_4_;
  auVar42._8_4_ = auVar24._8_4_ * auVar33._8_4_;
  auVar42._12_4_ = auVar24._12_4_ * auVar33._12_4_;
  auVar24 = NEON_frecps(auVar25,auVar42,4);
  auVar43._0_4_ = auVar42._0_4_ * auVar24._0_4_;
  auVar43._4_4_ = auVar42._4_4_ * auVar24._4_4_;
  auVar43._8_4_ = auVar42._8_4_ * auVar24._8_4_;
  auVar43._12_4_ = auVar42._12_4_ * auVar24._12_4_;
  auVar36._8_4_ = 0x7f7fffee;
  auVar36._0_8_ = 0x7f7fffee7f7fffee;
  auVar36._12_4_ = 0x7f7fffee;
  local_b0 = &local_150;
  auVar36 = auVar36 ^ (auVar36 ^ auVar43) & auVar35;
  uStack_1a8 = (ulong)(uint)auVar22._8_4_;
  uStack_198 = auVar36._8_8_;
  local_1a0 = auVar36._0_8_;
  local_c0 = *param_1;
  local_b8 = CONCAT44(iVar21,uVar16);
  local_a8 = *(undefined8 *)
              (param_1[1] + 0x28 + (long)(int)param_2 * 8 + *(long *)(param_1[1] + 0x28));
  local_1b0 = auVar22._0_8_;
  if ((char)param_1[8] == '\0') {
    bVar7 = false;
  }
  else {
    iVar21 = -(uint)(*(float *)(puVar10 + 0x10) == 0.0);
    iVar32 = -(uint)(*(float *)((long)puVar10 + 0x84) == 0.0);
    iVar38 = -(uint)(*(float *)(puVar10 + 0x11) == 0.0);
    iVar39 = -(uint)(*(float *)((long)puVar10 + 0x8c) == 0.0);
    iVar21 = CONCAT13(~(byte)((uint)iVar21 >> 0x18),
                      CONCAT12(~(byte)((uint)iVar21 >> 0x10),
                               CONCAT11(~(byte)((uint)iVar21 >> 8),~(byte)iVar21)));
    auVar23._0_8_ =
         CONCAT17(~(byte)((uint)iVar32 >> 0x18),
                  CONCAT16(~(byte)((uint)iVar32 >> 0x10),
                           CONCAT15(~(byte)((uint)iVar32 >> 8),CONCAT14(~(byte)iVar32,iVar21))));
    auVar23[8] = ~(byte)iVar38;
    auVar23[9] = ~(byte)((uint)iVar38 >> 8);
    auVar23[10] = ~(byte)((uint)iVar38 >> 0x10);
    auVar23[0xb] = ~(byte)((uint)iVar38 >> 0x18);
    auVar26[0xc] = ~(byte)iVar39;
    auVar26._0_12_ = auVar23;
    auVar26[0xd] = ~(byte)((uint)iVar39 >> 8);
    auVar26[0xe] = ~(byte)((uint)iVar39 >> 0x10);
    auVar26[0xf] = ~(byte)((uint)iVar39 >> 0x18);
    if (((iVar21 == 0 && (int)((ulong)auVar23._0_8_ >> 0x20) == 0) && auVar23._8_4_ == 0) &&
        auVar26._12_4_ == 0) {
      bVar7 = true;
    }
    else {
      FUN_02f77154(&local_1f0,&local_110);
      bVar7 = (char)param_1[8] != '\0';
    }
  }
  auVar5._8_8_ = uStack_138;
  auVar5._0_8_ = local_140;
  auVar6._8_8_ = uStack_128;
  auVar6._0_8_ = local_130;
  auVar3._4_4_ = fStack_14c;
  auVar3._0_4_ = local_150;
  auVar3._8_4_ = fStack_148;
  auVar3._12_4_ = fStack_144;
  auVar4._4_4_ = fStack_14c;
  auVar4._0_4_ = local_150;
  auVar4._8_4_ = fStack_148;
  auVar4._12_4_ = fStack_144;
  auVar24 = NEON_ext(auVar3,auVar4,8,1);
  fVar28 = (float)local_140;
  auVar33 = NEON_ext(auVar5,auVar5,8,1);
  fVar20 = auVar24._0_4_;
  fVar48 = auVar33._0_4_;
  auVar24 = NEON_ext(auVar6,auVar6,8,1);
  pfVar14 = *(float **)(param_1[5] + 0x20);
  fVar51 = (float)((ulong)local_130 >> 0x20);
  fVar50 = (float)((ulong)local_140 >> 0x20);
  fVar31 = (float)local_130;
  fVar53 = auVar24._4_4_;
  fVar59 = auVar24._0_4_;
  fVar29 = pfVar14[8];
  fVar19 = pfVar14[9];
  fVar30 = pfVar14[10];
  local_210 = fVar20 * fVar30 + local_150 * fVar29 + fStack_14c * fVar19;
  fStack_20c = fVar48 * fVar30 + fVar28 * fVar29 + fVar50 * fVar19;
  fStack_208 = fVar59 * fVar30 + fVar31 * fVar29 + fVar51 * fVar19;
  fStack_204 = fVar53 * fVar30 + fVar51 * fVar29 + fVar53 * fVar19;
  fVar29 = pfVar14[4];
  fVar19 = pfVar14[5];
  fVar30 = pfVar14[6];
  local_220 = fVar20 * fVar30 + local_150 * fVar29 + fStack_14c * fVar19;
  fStack_21c = fVar48 * fVar30 + fVar28 * fVar29 + fVar50 * fVar19;
  fStack_218 = fVar59 * fVar30 + fVar31 * fVar29 + fVar51 * fVar19;
  fStack_214 = fVar53 * fVar30 + fVar51 * fVar29 + fVar53 * fVar19;
  fVar29 = *pfVar14;
  fVar19 = pfVar14[1];
  fVar30 = pfVar14[2];
  local_230 = fVar20 * fVar30 + local_150 * fVar29 + fStack_14c * fVar19;
  fStack_22c = fVar48 * fVar30 + fVar28 * fVar29 + fVar50 * fVar19;
  fStack_228 = fVar59 * fVar30 + fVar31 * fVar29 + fVar51 * fVar19;
  fStack_224 = fVar53 * fVar30 + fVar51 * fVar29 + fVar53 * fVar19;
  fVar29 = pfVar14[0xc] - local_120;
  fVar19 = pfVar14[0xd] - fStack_11c;
  fVar30 = pfVar14[0xe] - (float)uStack_118;
  auVar27._0_8_ =
       CONCAT44(fVar48 * fVar30 + fVar28 * fVar29 + fVar50 * fVar19,
                fVar20 * fVar30 + local_150 * fVar29 + fStack_14c * fVar19);
  auVar27._8_4_ = fVar59 * fVar30 + fVar31 * fVar29 + fVar51 * fVar19;
  auVar27._12_4_ = fVar53 * fVar30 + fVar51 * fVar29 + fVar53 * fVar19;
  uStack_1f8 = auVar27._8_8_;
  local_200 = auVar27._0_8_;
  FUN_02f91438(*(undefined8 *)param_1[3],(undefined8 *)param_1[3],&local_1f0,param_1[5],puVar15,
               &local_70,&local_d0,&local_230,bVar7,param_1[9],param_1[10]);
  return;
}


