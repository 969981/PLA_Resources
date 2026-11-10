/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f7c40c; name: FUN_02f7c40c
 */


void FUN_02f7c40c(long *param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 (*pauVar2) [16];
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  undefined8 *puVar19;
  float *pfVar20;
  undefined1 *puVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined1 *puVar24;
  undefined4 uVar25;
  byte *pbVar26;
  undefined1 (*pauVar27) [16];
  long lVar28;
  long lVar29;
  float fVar30;
  float fVar33;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar40;
  float fVar41;
  undefined1 auVar39 [16];
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  float local_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float local_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  float local_1a0;
  undefined8 uStack_19c;
  float fStack_194;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  float fStack_178;
  float fStack_174;
  undefined8 local_170;
  float fStack_168;
  float fStack_164;
  undefined2 local_160;
  undefined2 uStack_15e;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  long local_150;
  undefined8 local_148;
  float *local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128 [2];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined2 local_100;
  undefined2 uStack_fe;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined2 local_f0 [2];
  undefined8 local_ec;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  undefined4 local_c8;
  undefined1 *local_c0;
  undefined2 local_b8 [2];
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  
  lVar18 = *param_1;
  pauVar2 = (undefined1 (*) [16])
            (lVar18 + 0x48 + (ulong)(param_2 & 0xffff) * 0x40 + *(long *)(lVar18 + 0x48));
  pbVar26 = pauVar2[1] + 0xe;
  if ((*pbVar26 >> 6 & 1) == 0) {
    return;
  }
  uVar23 = *(undefined8 *)param_1[7];
  uVar34 = ((undefined8 *)param_1[7])[1];
  local_100 = (undefined2)uVar23;
  uStack_fe = (undefined2)((ulong)uVar23 >> 0x10);
  uStack_fc = (undefined4)((ulong)uVar23 >> 0x20);
  uStack_f8 = (undefined4)uVar34;
  local_f4 = (undefined4)((ulong)uVar34 >> 0x20);
  puVar19 = (undefined8 *)param_1[6];
  uVar22 = puVar19[3];
  iVar1 = (uint)*(byte *)(lVar18 + 0x1c) + (int)(uVar22 >> 0x20);
  uVar22 = (ulong)((param_2 + 1 << (ulong)(-iVar1 & 0x1f)) - 1) |
           uVar22 & (uint)(&DAT_03aa74b0)[(long)uVar22 >> 0x20];
  pauVar27 = pauVar2 + 3;
  if (*(long *)*pauVar27 == 0) {
    puVar24 = (undefined1 *)0x0;
  }
  else {
    puVar24 = *pauVar27 + *(long *)*pauVar27;
  }
  plVar16 = *(long **)param_1[4];
  uVar25 = (undefined4)uVar22;
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x40))
              (plVar16,*(undefined2 *)(pauVar2[2] + 0xc),5,*puVar19,puVar19[1],lVar18,uVar22,puVar24
               ,&local_100);
    lVar18 = param_1[4];
    if (*(long *)(lVar18 + 8) != 0) {
      local_160 = *(undefined2 *)(lVar18 + 0x10);
      uStack_154 = *(undefined4 *)(lVar18 + 0x1c);
      uStack_15c = (undefined4)*(undefined8 *)(lVar18 + 0x14);
      uStack_158 = (undefined4)((ulong)*(undefined8 *)(lVar18 + 0x14) >> 0x20);
      puVar19 = (undefined8 *)param_1[5];
      local_150 = *puVar19;
      local_148 = puVar19[1];
      local_140 = (float *)puVar19[2];
      local_138 = CONCAT44(local_138._4_4_,*(undefined4 *)(puVar19 + 3));
      local_130 = *(undefined8 *)(lVar18 + 0x28);
      local_1a0 = (float)CONCAT22(local_1a0._2_2_,local_100);
      uStack_19c = CONCAT44(uStack_f8,uStack_fc);
      fStack_194 = (float)local_f4;
      local_190 = *(undefined8 *)param_1[6];
      local_188 = ((undefined8 *)param_1[6])[1];
      local_180 = *param_1;
      fStack_178 = (float)uVar25;
      local_170 = puVar24;
      uVar22 = (**(code **)(**(long **)(lVar18 + 8) + 0x40))
                         (*(long **)(lVar18 + 8),5,(char)param_1[0x10] == '\0',&local_160,&local_1a0
                         );
      if ((uVar22 & 1) == 0) {
        return;
      }
    }
  }
  puVar19 = (undefined8 *)param_1[6];
  NEON_fmov(0x3f800000,4);
  uVar23 = *puVar19;
  local_160 = (undefined2)uVar23;
  uStack_15e = (undefined2)((ulong)uVar23 >> 0x10);
  uStack_15c = (undefined4)((ulong)uVar23 >> 0x20);
  uStack_158 = (undefined4)puVar19[1];
  uStack_154 = (undefined4)((ulong)puVar19[1] >> 0x20);
  local_150 = puVar19[2];
  local_148 = puVar19[3];
  local_140 = (float *)puVar19[4];
  uVar23 = NEON_fmov(0x3f800000,4);
  local_138 = 0;
  local_130._0_4_ = (undefined4)CONCAT71((int7)((ulong)local_130 >> 8),*(undefined1 *)(puVar19 + 6))
  ;
  local_130 = CONCAT44(*(undefined4 *)((long)puVar19 + 0x34),(undefined4)local_130);
  local_120 = puVar19[8];
  uStack_118 = puVar19[9];
  local_110 = puVar19[10];
  uStack_108 = puVar19[0xb];
  local_128[0] = *(undefined4 *)(puVar19 + 7);
  auVar42 = *pauVar2;
  uVar34 = *(undefined8 *)pauVar2[1];
  fVar41 = (float)*(undefined8 *)(pauVar2[1] + 8);
  auVar39 = NEON_ext(auVar42,auVar42,8,1);
  fVar33 = auVar42._0_4_;
  auVar31._0_4_ = fVar33 + fVar33;
  fVar30 = auVar42._4_4_;
  auVar31._4_4_ = fVar30 + fVar30;
  auVar31._8_4_ = auVar42._8_4_ + auVar42._8_4_;
  fVar44 = auVar42._12_4_;
  auVar31._12_4_ = fVar44 + fVar44;
  auVar42 = NEON_ext(auVar31,auVar31,8,1);
  fVar37 = auVar39._0_4_ * auVar42._0_4_;
  auVar42 = pauVar2[2];
  auVar39._0_12_ = auVar42._0_12_;
  auVar39._12_4_ = 1.0;
  fVar47 = auVar31._4_4_ * fVar33 + auVar31._8_4_ * fVar44;
  fVar49 = auVar31._4_4_ * fVar33 - auVar31._8_4_ * fVar44;
  fVar46 = auVar31._8_4_ * fVar33 - auVar31._4_4_ * fVar44;
  fVar50 = auVar31._8_4_ * fVar33 + auVar31._4_4_ * fVar44;
  fVar43 = (float)uVar23;
  fVar48 = fVar43 - (auVar31._4_4_ * fVar30 + fVar37);
  fVar45 = auVar31._8_4_ * fVar30 + auVar31._0_4_ * fVar44;
  fVar44 = auVar31._8_4_ * fVar30 - auVar31._0_4_ * fVar44;
  fVar37 = fVar43 - (auVar31._0_4_ * fVar33 + fVar37);
  fVar43 = fVar43 - (auVar31._0_4_ * fVar33 + auVar31._4_4_ * fVar30);
  if (*(char *)(puVar19 + 6) == '\0') {
    if ((*pbVar26 >> 3 & 1) != 0) goto LAB_02f7c968;
  }
  else {
    auVar31 = *(undefined1 (*) [16])(puVar19 + 8);
    auVar39._0_4_ = auVar42._0_4_ * auVar31._0_4_;
    auVar39._4_4_ = auVar42._4_4_ * auVar31._4_4_;
    auVar39._8_4_ = auVar42._8_4_ * auVar31._8_4_;
    auVar39._12_4_ = auVar31._12_4_ * 1.0;
    uVar34 = CONCAT44((float)((ulong)uVar34 >> 0x20) * auVar31._4_4_,(float)uVar34 * auVar31._0_4_);
    fVar41 = fVar41 * auVar31._8_4_;
LAB_02f7c968:
    local_130 = CONCAT71(local_130._1_7_,1);
    uStack_118 = auVar39._8_8_;
    local_120 = auVar39._0_8_;
    local_110 = 0;
    uStack_108 = 0;
    if ((*pbVar26 >> 3 & 1) == 0) {
      uVar3 = *(uint *)((long)puVar19 + 0x34);
    }
    else {
      uVar3 = (*pbVar26 >> 5 ^ 0xffffffff) & 1;
    }
    local_130 = CONCAT44(uVar3,(undefined4)local_130);
    puVar21 = *(undefined1 **)*pauVar27;
    if (puVar21 != (undefined1 *)0x0) {
      puVar21 = *pauVar27 + (long)puVar21;
    }
    local_128[0] = *(undefined4 *)(puVar21 + 0x20);
    if ((puVar21 != (undefined1 *)0x0) && ((*(ushort *)(puVar21 + 0x1a) & 1) != 0)) {
      iVar4 = *(int *)(puVar21 + 0x40);
      if (iVar4 == 0) {
        lVar18 = 0;
      }
      else {
        lVar18 = (long)iVar4 + (long)(puVar21 + 0x40);
      }
      FUN_02ffe20c(lVar18,*(undefined4 *)(puVar21 + 0x44),uVar3,&local_120,local_128,&local_110);
    }
  }
  local_140 = &local_1a0;
  pfVar20 = *(float **)(param_1[6] + 0x20);
  fVar33 = *pfVar20;
  fVar30 = pfVar20[1];
  fVar5 = pfVar20[2];
  fVar6 = pfVar20[3];
  fVar7 = pfVar20[4];
  fVar8 = pfVar20[5];
  fVar9 = pfVar20[6];
  fVar10 = pfVar20[7];
  fVar40 = (float)((ulong)uVar34 >> 0x20);
  fVar11 = pfVar20[8];
  fVar12 = pfVar20[9];
  fVar13 = pfVar20[10];
  fVar14 = pfVar20[0xb];
  fVar38 = (float)uVar34;
  fStack_178 = fVar13 * fVar43 + fVar5 * fVar50 + fVar9 * fVar44;
  fStack_174 = fVar14 * fVar43 + fVar6 * fVar50 + fVar10 * fVar44;
  local_180 = CONCAT44(fVar12 * fVar43 + fVar30 * fVar50 + fVar8 * fVar44,
                       fVar11 * fVar43 + fVar33 * fVar50 + fVar7 * fVar44);
  local_1a0 = fVar11 * fVar46 + fVar33 * fVar48 + fVar7 * fVar47;
  fStack_194 = fVar14 * fVar46 + fVar6 * fVar48 + fVar10 * fVar47;
  uStack_19c = CONCAT44(fVar13 * fVar46 + fVar5 * fVar48 + fVar9 * fVar47,
                        fVar12 * fVar46 + fVar30 * fVar48 + fVar8 * fVar47);
  local_188 = CONCAT44(fVar14 * fVar45 + fVar6 * fVar49 + fVar10 * fVar37,
                       fVar13 * fVar45 + fVar5 * fVar49 + fVar9 * fVar37);
  local_190 = CONCAT44(fVar12 * fVar45 + fVar30 * fVar49 + fVar8 * fVar37,
                       fVar11 * fVar45 + fVar33 * fVar49 + fVar7 * fVar37);
  fStack_168 = fVar13 * fVar41 + fVar5 * fVar38 + fVar9 * fVar40 + pfVar20[0xe];
  fStack_164 = fVar14 * fVar41 + fVar6 * fVar38 + fVar10 * fVar40 + pfVar20[0xf];
  local_170 = (undefined1 *)
              CONCAT44(fVar12 * fVar41 + fVar30 * fVar38 + fVar8 * fVar40 + pfVar20[0xd],
                       fVar11 * fVar41 + fVar33 * fVar38 + fVar7 * fVar40 + pfVar20[0xc]);
  local_150 = *param_1;
  local_138 = 0;
  local_148 = CONCAT44(iVar1,uVar25);
  fVar33 = *(float *)(param_1 + 0xc);
  fVar30 = *(float *)((long)param_1 + 100);
  fVar5 = *(float *)(param_1 + 0xd);
  fVar38 = *(float *)(param_1 + 0xe) - fVar38;
  fVar40 = *(float *)((long)param_1 + 0x74) - fVar40;
  fVar41 = *(float *)(param_1 + 0xf) - fVar41;
  local_1c0 = fVar46 * fVar5 + fVar48 * fVar33 + fVar47 * fVar30;
  fStack_1bc = fVar45 * fVar5 + fVar49 * fVar33 + fVar37 * fVar30;
  fStack_1b8 = fVar43 * fVar5 + fVar50 * fVar33 + fVar44 * fVar30;
  fStack_1b4 = fVar5 * 0.0 + fVar44 * fVar33 + fVar30 * 0.0;
  fVar33 = *(float *)(param_1 + 10);
  fVar30 = *(float *)((long)param_1 + 0x54);
  fVar5 = *(float *)(param_1 + 0xb);
  local_1d0 = fVar46 * fVar5 + fVar48 * fVar33 + fVar47 * fVar30;
  fStack_1cc = fVar45 * fVar5 + fVar49 * fVar33 + fVar37 * fVar30;
  fStack_1c8 = fVar43 * fVar5 + fVar50 * fVar33 + fVar44 * fVar30;
  fStack_1c4 = fVar5 * 0.0 + fVar44 * fVar33 + fVar30 * 0.0;
  fVar33 = *(float *)(param_1 + 8);
  fVar30 = *(float *)((long)param_1 + 0x44);
  fVar5 = *(float *)(param_1 + 9);
  auVar36._0_8_ =
       CONCAT44(fVar45 * fVar5 + fVar49 * fVar33 + fVar37 * fVar30,
                fVar46 * fVar5 + fVar48 * fVar33 + fVar47 * fVar30);
  auVar36._8_4_ = fVar43 * fVar5 + fVar50 * fVar33 + fVar44 * fVar30;
  auVar36._12_4_ = fVar5 * 0.0 + fVar44 * fVar33 + fVar30 * 0.0;
  auVar42._0_8_ =
       CONCAT44(fVar45 * fVar41 + fVar49 * fVar38 + fVar37 * fVar40,
                fVar46 * fVar41 + fVar48 * fVar38 + fVar47 * fVar40);
  auVar42._8_4_ = fVar43 * fVar41 + fVar50 * fVar38 + fVar44 * fVar40;
  auVar42._12_4_ = fVar41 * 0.0 + fVar44 * fVar38 + fVar40 * 0.0;
  uStack_1a8 = auVar42._8_8_;
  uStack_1d8 = auVar36._8_8_;
  plVar16 = (long *)param_1[3];
  lVar18 = param_1[4];
  lVar29 = *plVar16;
  puVar19 = (undefined8 *)param_1[5];
  lVar15 = param_1[0x10];
  lVar28 = param_1[0x11];
  plVar17 = *(long **)(lVar18 + 8);
  local_1e0 = auVar36._0_8_;
  local_1b0 = auVar42._0_8_;
  if (plVar17 != (long *)0x0) {
    local_b8[0] = *(undefined2 *)(lVar18 + 0x10);
    local_ac = *(undefined4 *)(lVar18 + 0x1c);
    local_b4 = *(undefined8 *)(lVar18 + 0x14);
    local_a8 = *puVar19;
    local_a0 = puVar19[1];
    local_98 = puVar19[2];
    local_90 = *(undefined4 *)(puVar19 + 3);
    local_88 = *(undefined8 *)(lVar18 + 0x28);
    local_f0[0] = local_100;
    local_ec = CONCAT44(uStack_f8,uStack_fc);
    local_e4 = local_f4;
    local_e0 = CONCAT44(uStack_15c,CONCAT22(uStack_15e,local_160));
    uStack_d8 = CONCAT44(uStack_154,uStack_158);
    local_d0 = local_150;
    local_c8 = uVar25;
    local_c0 = puVar24;
    uVar22 = (**(code **)(*plVar17 + 0x40))(plVar17,5,(char)lVar15 == '\0',local_b8,local_f0);
    if ((uVar22 & 1) == 0) goto LAB_02f7c900;
  }
  (**(code **)(lVar29 + (ulong)*(byte *)(*(long *)(lVar18 + 0x28) + 0x18) * 0xf8 +
               (ulong)(byte)puVar24[0x18] * 8 + 0xa0))
            (plVar16,lVar18,puVar19,puVar24,&local_100,&local_160,&local_1e0,(char)lVar15 != '\0',
             lVar28);
LAB_02f7c900:
  lVar18 = param_1[6];
  uVar23 = NEON_fmax(*(undefined8 *)(param_1[0x11] + 0x10),0,4);
  if (*(char *)(lVar18 + 0x30) != '\0') {
    auVar32._0_4_ = ABS(*(float *)(lVar18 + 0x40));
    auVar32._4_4_ = ABS(*(float *)(lVar18 + 0x44));
    auVar32._8_4_ = ABS(*(float *)(lVar18 + 0x48));
    auVar32._12_4_ = ABS(*(float *)(lVar18 + 0x4c));
    auVar42 = NEON_frecpe(auVar32,4);
    auVar39 = NEON_frecps(auVar32,auVar42,4);
    auVar35._0_4_ = auVar42._0_4_ * auVar39._0_4_;
    auVar35._4_4_ = auVar42._4_4_ * auVar39._4_4_;
    auVar35._8_4_ = auVar42._8_4_ * auVar39._8_4_;
    auVar35._12_4_ = auVar42._12_4_ * auVar39._12_4_;
    auVar42 = NEON_frecps(auVar32,auVar35,4);
    uVar34 = CONCAT44(auVar35._4_4_ * auVar42._4_4_,auVar35._0_4_ * auVar42._0_4_);
    fVar33 = auVar35._8_4_ * auVar42._8_4_;
    uVar34 = NEON_fmaxp(uVar34,uVar34,4);
    uVar34 = NEON_fmax(CONCAT44(fVar33,fVar33),uVar34,4);
    uVar23 = CONCAT44((float)((ulong)uVar23 >> 0x20) * (float)((ulong)uVar34 >> 0x20),
                      (float)uVar23 * (float)uVar34);
  }
  fVar33 = (float)((ulong)uVar23 >> 0x20);
  *param_3 = CONCAT44(fVar33 * fVar33,(float)uVar23 * (float)uVar23);
  return;
}


