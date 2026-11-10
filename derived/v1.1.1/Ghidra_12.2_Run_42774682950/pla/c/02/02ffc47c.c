/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ffc47c; name: FUN_02ffc47c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02ffc47c(float param_1,long param_2,undefined8 *param_3,uint param_4,float *param_5)

{
  float *pfVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  undefined8 *puVar24;
  ulong uVar25;
  long lVar26;
  float *pfVar27;
  undefined8 *puVar28;
  long lVar29;
  undefined8 *puVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  undefined8 local_190;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  long local_110;
  undefined8 local_108;
  long local_100;
  uint local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [64];
  
  fVar42 = (float)*param_3;
  fVar43 = (float)((ulong)*param_3 >> 0x20);
  fVar44 = *(float *)(param_3 + 1);
  fVar45 = fVar44;
  if (1 < (int)param_4) {
    lVar22 = (ulong)param_4 - 1;
    pfVar27 = (float *)((long)param_3 + 0x14);
    do {
      fVar46 = *pfVar27;
      lVar22 = lVar22 + -1;
      pfVar1 = pfVar27 + -2;
      pfVar27 = pfVar27 + 3;
      fVar42 = fVar42 + (float)*(undefined8 *)pfVar1;
      fVar43 = fVar43 + (float)((ulong)*(undefined8 *)pfVar1 >> 0x20);
      fVar44 = fVar44 + fVar46;
      fVar45 = fVar45 + fVar46;
    } while (lVar22 != 0);
  }
  fVar46 = 1.0 / (float)(int)param_4;
  local_110 = 0;
  local_108 = 0x8000000000000000;
  lVar22 = tpidr_el0;
  local_f8 = param_4;
  if (param_4 == 0) {
    local_100 = 0;
  }
  else {
    lVar23 = *(long *)(lVar22 + 0x38d490);
    if (lVar23 == 0) {
      lVar23 = FUN_0333d16c(0,1);
      *(long *)(lVar22 + 0x38d490) = lVar23;
    }
    lVar23 = *(long *)(lVar23 + 8);
    uVar21 = (ulong)(int)(param_4 * 0x90 + 0x7f & 0xffffff80);
    if (uVar21 <= *(ulong *)(lVar23 + 0x10)) {
      local_100 = *(long *)(lVar23 + 0x18);
      uVar21 = local_100 + uVar21;
      if (uVar21 <= *(ulong *)(lVar23 + 0x20)) {
        *(ulong *)(lVar23 + 0x18) = uVar21;
        goto LAB_02ffc568;
      }
    }
    local_100 = FUN_032ce670();
  }
LAB_02ffc568:
  local_108 = CONCAT44(param_4,(int)local_108) | 0x8000000000000000;
  local_110 = local_100;
  if ((int)param_4 < 0x40000000) {
    iVar20 = 0;
  }
  else {
    local_110 = FUN_02f79b68(PTR_PTR_0434a080,param_4,local_100,0,(long)&local_108 + 4);
    iVar20 = (int)local_108;
  }
  uVar17 = DAT_0388a148;
  uVar16 = DAT_0388a140;
  uVar15 = _UNK_0388a138;
  uVar14 = _DAT_0388a130;
  uVar13 = _UNK_03889a88;
  uVar12 = _DAT_03889a80;
  uVar11 = _UNK_03888d18;
  uVar47 = _DAT_03888d10;
  auVar31._0_8_ = CONCAT44(fVar43 * fVar46,fVar42 * fVar46);
  auVar31._8_4_ = fVar44 * fVar46;
  auVar31._12_4_ = fVar45 * fVar46;
  if (iVar20 < (int)param_4) {
    puVar28 = (undefined8 *)(local_110 + (long)iVar20 * 0x90);
    local_108 = CONCAT44(local_108._4_4_,param_4);
    do {
      *puVar28 = 0;
      puVar28[2] = 0;
      puVar28[3] = 0;
      puVar28[4] = 0;
      puVar28[5] = 0;
      puVar28[6] = 0;
      puVar28[7] = 0;
      puVar28[8] = 0;
      puVar28[9] = 0;
      puVar28[0xb] = uVar13;
      puVar28[10] = uVar12;
      puVar28[0xd] = uVar17;
      puVar28[0xc] = uVar16;
      puVar28[0xf] = uVar11;
      puVar28[0xe] = uVar47;
      puVar28[0x11] = uVar15;
      puVar28[0x10] = uVar14;
      puVar28 = puVar28 + 0x12;
    } while (puVar28 != (undefined8 *)(local_110 + (long)(int)param_4 * 0x90));
  }
  else if ((int)param_4 < iVar20) {
    local_108 = CONCAT44(local_108._4_4_,param_4);
  }
  puVar18 = PTR_DAT_043723a0;
  fVar45 = *(float *)(param_2 + 0x1c);
  fVar44 = *(float *)(param_2 + 0x20);
  if (0.0 <= fVar44) {
    fVar44 = fVar46 * fVar44;
  }
  uStack_138 = auVar31._8_8_;
  local_140 = auVar31._0_8_;
  if (0 < (int)param_4) {
    if (param_1 <= 0.0001) {
      param_1 = 0.0001;
    }
    uVar21 = (ulong)param_4;
    if (0.0 <= fVar44) {
      fVar45 = fVar45 * fVar44;
      uVar47 = 0;
      puVar28 = param_3 + 1;
      lVar23 = 0x20;
      uVar25 = 0;
      do {
        uStack_128 = CONCAT44(*(undefined4 *)puVar28,*(undefined4 *)puVar28);
        uVar2 = uVar25 + 1;
        local_130 = puVar28[-1];
        uVar3 = 0;
        if (uVar21 - 1 != uVar25) {
          uVar3 = uVar2 & 0xffffffff;
        }
        puVar24 = (undefined8 *)((long)param_3 + uVar3 * 0xc);
        uVar4 = *(undefined4 *)(puVar24 + 1);
        uStack_118 = CONCAT44(uVar4,uVar4);
        local_120 = *puVar24;
        puVar24 = (undefined8 *)(local_110 + lVar23);
        puVar30 = puVar24 + -4;
        auVar34._8_8_ = uVar47;
        auVar34._0_8_ = 0x3f800000;
        iVar20 = FUN_0328f204(auVar34,param_1,&local_140,&local_130,&local_120,puVar30);
        if ((iVar20 < 0) || (*(float *)(puVar24 + -4) == 0.0)) goto LAB_02ffc9d4;
        uStack_178 = SUB168(*(undefined1 (*) [16])(puVar24 + -2),8);
        local_180 = SUB168(*(undefined1 (*) [16])(puVar24 + -2),0);
        local_190 = puVar24[-4];
        uStack_c8 = (undefined4)puVar24[5];
        uStack_c4 = (undefined4)((ulong)puVar24[5] >> 0x20);
        local_d8 = (undefined4)puVar24[3];
        uStack_d4 = (undefined4)((ulong)puVar24[3] >> 0x20);
        uStack_e8 = puVar24[1];
        local_f0 = *puVar24;
        local_e0 = puVar24[2];
        local_d0 = puVar24[4];
        FUN_032911c0(&local_f0,auStack_c0);
        auVar40._8_8_ = uStack_e8;
        auVar40._0_8_ = local_f0;
        auVar9._8_4_ = local_d8;
        auVar9._0_8_ = local_e0;
        auVar9._12_4_ = uStack_d4;
        auVar7._8_4_ = uStack_c8;
        auVar7._0_8_ = local_d0;
        auVar40 = auVar40 ^ (auVar40 ^ auVar9) & *(undefined1 (*) [16])(puVar18 + 0x20);
        auVar7._12_4_ = uStack_c4;
        auVar40 = auVar40 ^ (auVar40 ^ auVar7) & *(undefined1 (*) [16])(puVar18 + 0x40);
        local_170 = auVar40._0_8_;
        auVar35._0_12_ = auVar40._0_12_;
        auVar35._12_4_ = *(undefined4 *)puVar30;
        uStack_168 = auVar35._8_8_;
        FUN_032cb060(&local_160,auStack_c0);
        auVar36._0_8_ = CONCAT44(fVar45 * local_170._4_4_,fVar45 * (float)local_170);
        auVar36._8_4_ = fVar45 * (float)uStack_168;
        auVar36._12_4_ = fVar45 * uStack_168._4_4_;
        uStack_168 = auVar36._8_8_;
        local_190 = CONCAT44(fVar44,(float)local_190);
        local_170 = auVar36._0_8_;
        FUN_0328f03c(&local_190,puVar30);
        lVar23 = lVar23 + 0x90;
        puVar28 = (undefined8 *)((long)puVar28 + 0xc);
        uVar25 = uVar2;
      } while (uVar21 != uVar2);
    }
    else {
      uVar47 = 0;
      puVar28 = param_3 + 1;
      lVar23 = 0x20;
      uVar25 = 0;
      do {
        uStack_128 = CONCAT44(*(undefined4 *)puVar28,*(undefined4 *)puVar28);
        uVar2 = uVar25 + 1;
        local_130 = puVar28[-1];
        uVar3 = 0;
        if (uVar21 - 1 != uVar25) {
          uVar3 = uVar2 & 0xffffffff;
        }
        puVar24 = (undefined8 *)((long)param_3 + uVar3 * 0xc);
        uVar4 = *(undefined4 *)(puVar24 + 1);
        uStack_118 = CONCAT44(uVar4,uVar4);
        local_120 = *puVar24;
        puVar24 = (undefined8 *)(local_110 + lVar23);
        puVar30 = puVar24 + -4;
        auVar32._8_8_ = uVar47;
        auVar32._0_8_ = 0x3f800000;
        iVar20 = FUN_0328f204(auVar32,param_1,&local_140,&local_130,&local_120,puVar30);
        if ((iVar20 < 0) || (*(float *)(puVar24 + -4) == 0.0)) goto LAB_02ffc9d4;
        uStack_178 = SUB168(*(undefined1 (*) [16])(puVar24 + -2),8);
        local_180 = SUB168(*(undefined1 (*) [16])(puVar24 + -2),0);
        local_190 = puVar24[-4];
        uStack_c8 = (undefined4)puVar24[5];
        uStack_c4 = (undefined4)((ulong)puVar24[5] >> 0x20);
        local_d8 = (undefined4)puVar24[3];
        uStack_d4 = (undefined4)((ulong)puVar24[3] >> 0x20);
        uStack_e8 = puVar24[1];
        local_f0 = *puVar24;
        local_e0 = puVar24[2];
        local_d0 = puVar24[4];
        FUN_032911c0(&local_f0,auStack_c0);
        auVar38._8_8_ = uStack_e8;
        auVar38._0_8_ = local_f0;
        auVar8._8_4_ = local_d8;
        auVar8._0_8_ = local_e0;
        auVar8._12_4_ = uStack_d4;
        auVar5._8_4_ = uStack_c8;
        auVar5._0_8_ = local_d0;
        auVar38 = auVar38 ^ (auVar38 ^ auVar8) & *(undefined1 (*) [16])(puVar18 + 0x20);
        auVar5._12_4_ = uStack_c4;
        auVar38 = auVar38 ^ (auVar38 ^ auVar5) & *(undefined1 (*) [16])(puVar18 + 0x40);
        local_170 = auVar38._0_8_;
        auVar33._0_12_ = auVar38._0_12_;
        auVar33._12_4_ = *(undefined4 *)puVar30;
        uStack_168 = auVar33._8_8_;
        FUN_032cb060(&local_160,auStack_c0);
        fVar42 = fVar45 * -(fVar44 * (float)local_190);
        auVar39._0_8_ = CONCAT44(local_170._4_4_ * fVar42,(float)local_170 * fVar42);
        auVar39._8_4_ = (float)uStack_168 * fVar42;
        auVar39._12_4_ = uStack_168._4_4_ * fVar42;
        local_190 = CONCAT44(-(fVar44 * (float)local_190),(float)local_190);
        uStack_168 = auVar39._8_8_;
        local_170 = auVar39._0_8_;
        FUN_0328f03c(&local_190,puVar30);
        lVar23 = lVar23 + 0x90;
        puVar28 = (undefined8 *)((long)puVar28 + 0xc);
        uVar25 = uVar2;
      } while (uVar21 != uVar2);
    }
  }
  local_190 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  uStack_148 = 0;
  iVar20 = FUN_03290038(&local_110,&local_190);
  if (iVar20 < 0) {
LAB_02ffc9d4:
    uVar47 = 0x80040200;
  }
  else {
    uVar47 = 0x80040200;
    if ((float)local_190 != 0.0) {
      *(undefined8 *)(param_5 + 6) = uStack_178;
      *(undefined8 *)(param_5 + 4) = local_180;
      *param_5 = (float)local_190;
      param_5[1] = local_190._4_4_;
      local_e0 = local_160;
      local_d8 = (undefined4)uStack_158;
      uStack_d4 = (undefined4)((ulong)uStack_158 >> 0x20);
      local_d0 = local_150;
      uStack_c8 = (undefined4)uStack_148;
      uStack_c4 = (undefined4)((ulong)uStack_148 >> 0x20);
      local_f0 = local_170;
      uStack_e8 = uStack_168;
      FUN_032911c0(&local_f0,auStack_c0);
      auVar41._8_8_ = uStack_e8;
      auVar41._0_8_ = local_f0;
      auVar6._8_4_ = local_d8;
      auVar6._0_8_ = local_e0;
      *(undefined8 *)(param_5 + 10) = uStack_e8;
      *(undefined8 *)(param_5 + 8) = local_f0;
      puVar18 = PTR_DAT_043723a0;
      auVar6._12_4_ = uStack_d4;
      auVar41 = auVar41 ^ (auVar41 ^ auVar6) & *(undefined1 (*) [16])(PTR_DAT_043723a0 + 0x20);
      *(long *)(param_5 + 10) = auVar41._8_8_;
      *(long *)(param_5 + 8) = auVar41._0_8_;
      auVar10._8_4_ = uStack_c8;
      auVar10._0_8_ = local_d0;
      auVar37._0_12_ =
           auVar41._0_12_ ^
           (auVar41._0_12_ ^ auVar10) & SUB1612(*(undefined1 (*) [16])(puVar18 + 0x40),0);
      auVar37._12_4_ = (float)local_190;
      *(long *)(param_5 + 10) = auVar37._8_8_;
      *(long *)(param_5 + 8) = auVar37._0_8_;
      FUN_032cb060(param_5 + 0xc,auStack_c0);
      uVar47 = 0;
    }
  }
  lVar23 = local_100;
  if (local_100 == local_110) {
    local_108 = local_108 & 0xffffffff00000000;
  }
  lVar29 = (long)(int)local_f8;
  lVar26 = *(long *)(lVar22 + 0x38d490);
  if (lVar26 == 0) {
    lVar26 = FUN_0333d16c(0,1);
    *(long *)(lVar22 + 0x38d490) = lVar26;
  }
  lVar22 = *(long *)(lVar26 + 8);
  uVar21 = lVar29 * 0x90 + 0x7fU & 0xffffffffffffff80;
  if (((*(ulong *)(lVar22 + 0x10) < uVar21) || (*(long *)(lVar22 + 0x18) != uVar21 + lVar23)) ||
     (*(long *)(lVar22 + 0x28) == lVar23)) {
    FUN_032cedf0(lVar22,lVar23);
  }
  else {
    *(long *)(lVar22 + 0x18) = lVar23;
  }
  uVar21 = local_108;
  uVar19 = local_108._4_4_;
  local_108 = (ulong)local_108._4_4_ << 0x20;
  if ((-1 < (long)uVar21) && (local_110 != 0)) {
    FUN_032cf244(PTR_PTR_0434a080,local_110,0x90,uVar19 & 0x3fffffff);
  }
  return uVar47;
}


