/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031715c0; name: FUN_031715c0
 */


/* WARNING: Removing unreachable block (ram,0x03171f14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_031715c0(long param_1,long *param_2,undefined4 param_3,int *param_4,undefined8 param_5,
            undefined8 param_6,ulong param_7,long param_8,undefined8 param_9,undefined8 param_10,
            undefined8 *param_11,undefined1 (*param_12) [16],undefined8 *param_13,long param_14)

{
  long *plVar1;
  long *plVar2;
  short sVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  byte bVar12;
  undefined *puVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  float *pfVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  uint uVar31;
  uint uVar32;
  float fVar33;
  float fVar34;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar41;
  undefined8 uVar42;
  float fVar47;
  float fVar48;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar49;
  float fVar50;
  float fVar54;
  float fVar55;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar56;
  float fVar57;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar63;
  undefined8 uVar64;
  float fVar67;
  float fVar68;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined8 uVar69;
  int iVar70;
  int iVar71;
  undefined8 uVar72;
  float fVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  uint uVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  float fVar87;
  float fVar93;
  float fVar94;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  ulong uVar95;
  ulong uVar96;
  undefined1 auVar97 [16];
  byte bVar99;
  float fVar98;
  float fVar100;
  undefined8 uVar101;
  undefined8 uVar102;
  int iVar103;
  int iVar104;
  float fVar105;
  float fVar106;
  undefined8 uVar107;
  undefined1 auVar108 [16];
  float fVar109;
  float fVar110;
  undefined8 uVar111;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  long *plVar114;
  long *plVar115;
  float local_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  undefined8 local_120;
  undefined8 uStack_118;
  long local_110;
  ulong local_108;
  long local_100;
  int local_f8;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  long local_d0;
  undefined8 local_c8;
  long local_c0;
  int local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_98;
  char local_90;
  undefined4 local_78;
  float local_74;
  
  local_78 = param_3;
  lVar19 = nn::os::GetSystemTick();
  FUN_03171424(&local_98,param_1,&local_78);
  uStack_a8 = *(undefined8 *)(*param_12 + 8);
  local_b0 = *(undefined8 *)*param_12;
  auVar44 = *param_12;
  fStack_158 = (float)param_11[1];
  fStack_154 = (float)((ulong)param_11[1] >> 0x20);
  local_160 = (float)*param_11;
  fStack_15c = (float)((ulong)*param_11 >> 0x20);
  local_d0 = 0;
  local_c8 = 0x8000000000000000;
  local_b8 = 0x80;
  fStack_138 = auVar44._8_4_;
  fStack_134 = auVar44._12_4_;
  local_140 = auVar44._0_4_;
  fStack_13c = auVar44._4_4_;
  lVar23 = tpidr_el0;
  lVar26 = *(long *)(lVar23 + 0x38d490);
  if (lVar26 == 0) {
    lVar26 = FUN_0333d16c(0,1);
    *(long *)(lVar23 + 0x38d490) = lVar26;
  }
  lVar26 = *(long *)(lVar26 + 8);
  if (*(ulong *)(lVar26 + 0x10) < 0x1000) {
LAB_031723f8:
    lVar27 = FUN_032ce670(lVar26,0x1000);
  }
  else {
    lVar27 = *(long *)(lVar26 + 0x18);
    if (*(ulong *)(lVar26 + 0x20) < lVar27 + 0x1000U) goto LAB_031723f8;
    *(ulong *)(lVar26 + 0x18) = lVar27 + 0x1000U;
  }
  local_c8 = CONCAT44(0x80000080,(int)local_c8);
  local_d0 = lVar27;
  local_c0 = lVar27;
  if (param_2 == (long *)0x0) {
LAB_03171740:
    uVar21 = param_7 >> 0x16 & 0x3ff;
    fVar57 = *(float *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x38) + uVar21 * 0xf0) +
                                           0x20) + 0x68) + 0xb0);
    local_d8 = CONCAT44(fVar57,fVar57);
    fVar73 = (float)*param_13 - fVar57;
    local_e0 = CONCAT44((float)((ulong)*param_13 >> 0x20) - fVar57,fVar73);
    sVar3 = *(short *)(param_8 + 8);
    local_110 = 0;
    local_108 = 0x8000000000000000;
    local_f8 = (int)sVar3;
    if (local_f8 == 0) {
      local_100 = 0;
    }
    else {
      lVar26 = *(long *)(lVar23 + 0x38d490);
      if (lVar26 == 0) {
        lVar26 = FUN_0333d16c(0,1);
        *(long *)(lVar23 + 0x38d490) = lVar26;
      }
      lVar26 = *(long *)(lVar26 + 8);
      uVar24 = (long)(int)sVar3 * 0x20 + 0x7fU & 0xffffffffffffff80;
      if (uVar24 <= *(ulong *)(lVar26 + 0x10)) {
        local_100 = *(long *)(lVar26 + 0x18);
        uVar24 = local_100 + uVar24;
        if (uVar24 <= *(ulong *)(lVar26 + 0x20)) {
          *(ulong *)(lVar26 + 0x18) = uVar24;
          goto LAB_031717e0;
        }
      }
      local_100 = FUN_032ce670(lVar26);
    }
LAB_031717e0:
    local_108 = CONCAT44((int)sVar3,(undefined4)local_108) | 0x8000000000000000;
    lVar26 = param_14 + 0x18;
    pfVar28 = &local_f0;
    plVar115 = &local_110;
    plVar114 = &local_d0;
    local_110 = local_100;
    FUN_031684f0(param_1,param_2,param_7 & 0xffffffff,param_8);
    iVar18 = local_f8;
    lVar20 = local_100;
    lVar27 = local_110;
    if (local_100 == local_110) {
      local_108 = local_108 & 0xffffffff00000000;
    }
    lVar22 = *(long *)(lVar23 + 0x38d490);
    if (lVar22 == 0) {
      lVar22 = FUN_0333d16c(0,1);
      *(long *)(lVar23 + 0x38d490) = lVar22;
    }
    lVar22 = *(long *)(lVar22 + 8);
    uVar25 = (ulong)(int)(iVar18 * 0x20 + 0x7fU & 0xffffff80);
    uVar24 = local_108;
    if (((*(ulong *)(lVar22 + 0x10) < uVar25) || (*(long *)(lVar22 + 0x18) != uVar25 + lVar20)) ||
       (*(long *)(lVar22 + 0x28) == lVar20)) {
      if (lVar20 != 0) {
        if (*(ulong *)(lVar22 + 0x10) < uVar25) {
          *(int *)(*(long *)(lVar22 + 8) + 0x20) = *(int *)(*(long *)(lVar22 + 8) + 0x20) + -1;
          (**(code **)(**(long **)(lVar22 + 0x40) + 0x18))(*(long **)(lVar22 + 0x40),lVar20);
          uVar24 = local_108;
        }
        else if (*(long *)(lVar22 + 0x18) == uVar25 + lVar20) {
          *(long *)(lVar22 + 0x18) = lVar20;
          FUN_032ce944();
          uVar24 = local_108;
        }
        else {
          FUN_032ceaf0(lVar22,lVar20);
          uVar24 = local_108;
        }
      }
    }
    else {
      *(long *)(lVar22 + 0x18) = lVar20;
    }
    if (lVar27 != 0) {
      local_108 = uVar24 & 0xffffffff00000000;
      if (-1 < (long)local_108) {
        (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                  (PTR_PTR_0434a080,lVar27,(uVar24 >> 0x20 & 0x3fffffff) << 5);
      }
    }
    iVar18 = *param_4;
    iVar70 = param_4[1];
    lVar27 = *(long *)(*(long *)(param_1 + 0x38) + uVar21 * 0xf0);
    lVar20 = *(long *)(lVar27 + 0x20);
    iVar71 = *(int *)(lVar20 + 0x40);
    plVar1 = (long *)(lVar20 + 0x38);
    if (iVar71 <= iVar18) {
      plVar1 = (long *)(lVar20 + 0xf0);
    }
    iVar103 = 0;
    if (iVar71 <= iVar18) {
      iVar103 = iVar71;
    }
    plVar2 = (long *)(lVar20 + 0x38);
    if (iVar71 <= iVar70) {
      plVar2 = (long *)(lVar20 + 0xf0);
    }
    iVar104 = 0;
    if (iVar71 <= iVar70) {
      iVar104 = iVar71;
    }
    pfVar4 = (float *)(*plVar1 + (long)(iVar18 - iVar103) * 0x10);
    fVar34 = *pfVar4;
    fVar39 = pfVar4[1];
    fVar62 = pfVar4[2];
    pfVar4 = (float *)(*plVar2 + (long)(iVar70 - iVar104) * 0x10);
    fVar63 = *pfVar4;
    fVar67 = pfVar4[1];
    fVar68 = pfVar4[2];
    fVar49 = (float)*(undefined8 *)(lVar27 + 0x80);
    fVar50 = (float)((ulong)*(undefined8 *)(lVar27 + 0x80) >> 0x20);
    fVar54 = (float)*(undefined8 *)(lVar27 + 0x88);
    fVar87 = (float)((ulong)*(undefined8 *)(lVar27 + 0x88) >> 0x20);
    fVar41 = (float)*(undefined8 *)(lVar27 + 0x90);
    fVar33 = fVar41 + fVar49 * fVar62 +
                      *(float *)(lVar27 + 0x60) * fVar34 + *(float *)(lVar27 + 0x70) * fVar39;
    fVar47 = (float)((ulong)*(undefined8 *)(lVar27 + 0x90) >> 0x20);
    fVar38 = fVar47 + fVar50 * fVar62 +
                      *(float *)(lVar27 + 100) * fVar34 + *(float *)(lVar27 + 0x74) * fVar39;
    fVar48 = (float)*(undefined8 *)(lVar27 + 0x98);
    fVar40 = fVar48 + fVar54 * fVar62 +
                      *(float *)(lVar27 + 0x68) * fVar34 + *(float *)(lVar27 + 0x78) * fVar39;
    fVar93 = (float)((ulong)*(undefined8 *)(lVar27 + 0x98) >> 0x20);
    fVar41 = fVar41 + fVar49 * fVar68 +
                      *(float *)(lVar27 + 0x60) * fVar63 + *(float *)(lVar27 + 0x70) * fVar67;
    fVar47 = fVar47 + fVar50 * fVar68 +
                      *(float *)(lVar27 + 100) * fVar63 + *(float *)(lVar27 + 0x74) * fVar67;
    fVar48 = fVar48 + fVar54 * fVar68 +
                      *(float *)(lVar27 + 0x68) * fVar63 + *(float *)(lVar27 + 0x78) * fVar67;
    fVar49 = local_140 * fVar33;
    fVar54 = fStack_13c * fVar38;
    fVar55 = fStack_138 * fVar40;
    fVar56 = local_140 * fVar41;
    fVar60 = fStack_13c * fVar47;
    fVar61 = fStack_138 * fVar48;
    fVar50 = fVar49 + fVar54 + fVar55;
    fVar55 = fVar49 + fVar54 + fVar55;
    fVar49 = fVar56 + fVar60 + fVar61;
    fVar61 = fVar56 + fVar60 + fVar61;
    fVar33 = fVar33 - local_140 * fVar50;
    fVar38 = fVar38 - fStack_13c * fVar55;
    auVar43._0_8_ = CONCAT44(fVar38,fVar33);
    auVar43._8_4_ = fVar40 - fStack_138 * fVar50;
    auVar43._12_4_ =
         (fVar93 + fVar87 * fVar62 +
                   *(float *)(lVar27 + 0x6c) * fVar34 + *(float *)(lVar27 + 0x7c) * fVar39) -
         fStack_134 * fVar55;
    fVar41 = fVar41 - local_140 * fVar49;
    fVar47 = fVar47 - fStack_13c * fVar61;
    auVar51._0_8_ = CONCAT44(fVar47,fVar41);
    auVar51._8_4_ = fVar48 - fStack_138 * fVar49;
    auVar51._12_4_ =
         (fVar93 + fVar87 * fVar68 +
                   *(float *)(lVar27 + 0x6c) * fVar63 + *(float *)(lVar27 + 0x7c) * fVar67) -
         fStack_134 * fVar61;
    local_108 = auVar43._8_8_;
    uStack_118 = auVar51._8_8_;
    local_120 = auVar51._0_8_;
    local_110 = auVar43._0_8_;
    iVar18 = FUN_0316e900(&local_110,&local_120,param_13,&local_d8,&local_b0,&local_d0,&local_74,
                          param_14 + 0x58,plVar114,plVar115,pfVar28,lVar26);
    if (iVar18 == 0) {
LAB_03171e20:
      uVar69 = 0;
    }
    else {
      uVar72 = NEON_fmov(0x3f800000,4);
      fVar34 = local_160 * local_140 + fStack_15c * fStack_13c + fStack_158 * fStack_138;
      fVar39 = local_160 * local_140 + fStack_15c * fStack_13c + fStack_158 * fStack_138;
      iVar18 = (int)local_c8;
      uVar21 = local_c8 & 0xffffffff;
      auVar113._0_4_ = local_160 - local_140 * fVar34;
      auVar113._4_4_ = fStack_15c - fStack_13c * fVar39;
      auVar113._8_4_ = fStack_158 - fStack_138 * fVar34;
      auVar113._12_4_ = fStack_154 - fStack_134 * fVar39;
      if (0 < (int)local_c8) {
        pfVar28 = (float *)(local_d0 + 0x10);
        uVar24 = uVar21;
        do {
          fVar63 = *pfVar28 - pfVar28[-4];
          fVar67 = pfVar28[1] - pfVar28[-3];
          fVar68 = pfVar28[2] - pfVar28[-2];
          fVar34 = auVar113._0_4_ - pfVar28[-4];
          fVar39 = auVar113._4_4_ - pfVar28[-3];
          fVar62 = auVar113._8_4_ - pfVar28[-2];
          fVar40 = fVar34 * fVar63;
          fVar48 = fVar39 * fVar67;
          fVar49 = fVar62 * fVar68;
          fVar50 = fVar63 * fVar63 + fVar67 * fVar67 + fVar68 * fVar68;
          fVar54 = fVar63 * fVar63 + fVar67 * fVar67 + fVar68 * fVar68;
          uVar64 = CONCAT44(fVar54,fVar50);
          uVar69 = NEON_frecpe(uVar64,4);
          uVar42 = NEON_frecps(uVar64,uVar69,4);
          fVar55 = (float)uVar69 * (float)uVar42;
          fVar56 = (float)((ulong)uVar69 >> 0x20) * (float)((ulong)uVar42 >> 0x20);
          iVar70 = -(uint)(fVar50 == 0.0);
          iVar71 = -(uint)(fVar54 == 0.0);
          uVar69 = NEON_frecps(uVar64,CONCAT44(fVar56,fVar55),4);
          uVar25 = CONCAT44(fVar56 * (float)((ulong)uVar69 >> 0x20),fVar55 * (float)uVar69) &
                   CONCAT17(~(byte)((uint)iVar71 >> 0x18),
                            CONCAT16(~(byte)((uint)iVar71 >> 0x10),
                                     CONCAT15(~(byte)((uint)iVar71 >> 8),
                                              CONCAT14(~(byte)iVar71,
                                                       CONCAT13(~(byte)((uint)iVar70 >> 0x18),
                                                                CONCAT12(~(byte)((uint)iVar70 >>
                                                                                0x10),
                                                                         CONCAT11(~(byte)((uint)
                                                  iVar70 >> 8),~(byte)iVar70)))))));
          uVar69 = NEON_fminnm(CONCAT44((fVar40 + fVar48 + fVar49) * (float)(uVar25 >> 0x20),
                                        (fVar40 + fVar48 + fVar49) * (float)uVar25),uVar72,4);
          uVar69 = NEON_fmax(uVar69,0,4);
          fVar40 = (float)((ulong)uVar69 >> 0x20);
          fVar34 = fVar34 - fVar63 * (float)uVar69;
          fVar39 = fVar39 - fVar67 * fVar40;
          fVar62 = fVar62 - fVar68 * (float)uVar69;
          fVar63 = (auVar113._12_4_ - pfVar28[-1]) - (pfVar28[3] - pfVar28[-1]) * fVar40;
          auVar59._0_4_ = fVar34 * fVar34;
          auVar59._4_4_ = fVar39 * fVar39;
          auVar59._8_4_ = fVar62 * fVar62;
          auVar59._12_4_ = fVar63 * fVar63;
          auVar65 = NEON_ext(auVar59,auVar59,8,1);
          if (auVar59._0_4_ + auVar59._4_4_ + auVar65._0_4_ < fVar73 * fVar73) goto LAB_03171e20;
          uVar24 = uVar24 - 1;
          pfVar28 = pfVar28 + 8;
        } while (uVar24 != 0);
      }
      auVar35._0_4_ = fVar33 + (fVar41 - fVar33) * local_74;
      auVar35._4_4_ = fVar38 + (fVar47 - fVar38) * local_74;
      auVar35._8_4_ = auVar43._8_4_ + (auVar51._8_4_ - auVar43._8_4_) * local_74;
      auVar35._12_4_ = auVar43._12_4_ + (auVar51._12_4_ - auVar43._12_4_) * local_74;
      auVar78 = auVar35;
      auVar65 = auVar113;
      if ((int)local_c8 == 0) {
        lVar26 = 0;
        lVar27 = 0;
      }
      else {
        lVar27 = *(long *)(lVar23 + 0x38d490);
        if (lVar27 == 0) {
          lVar27 = FUN_0333d16c(0,1);
          auVar78._4_4_ = auVar35._4_4_;
          auVar78._0_4_ = auVar35._0_4_;
          auVar78._8_4_ = auVar35._8_4_;
          auVar78._12_4_ = auVar35._12_4_;
          auVar65._4_4_ = auVar113._4_4_;
          auVar65._0_4_ = auVar113._0_4_;
          auVar65._8_4_ = auVar113._8_4_;
          auVar65._12_4_ = auVar113._12_4_;
          *(long *)(lVar23 + 0x38d490) = lVar27;
        }
        lVar20 = *(long *)(lVar27 + 8);
        uVar24 = (ulong)(int)(iVar18 * 0x20 + 0x7fU & 0xffffff80);
        if (*(ulong *)(lVar20 + 0x10) < uVar24) {
LAB_0317248c:
          lVar26 = FUN_032ce670(lVar20,uVar24);
          auVar78._4_4_ = auVar35._4_4_;
          auVar78._0_4_ = auVar35._0_4_;
          auVar78._8_4_ = auVar35._8_4_;
          auVar78._12_4_ = auVar35._12_4_;
          auVar65._4_4_ = auVar113._4_4_;
          auVar65._0_4_ = auVar113._0_4_;
          auVar65._8_4_ = auVar113._8_4_;
          auVar65._12_4_ = auVar113._12_4_;
          lVar27 = *(long *)(lVar23 + 0x38d490);
        }
        else {
          lVar26 = *(long *)(lVar20 + 0x18);
          if (*(ulong *)(lVar20 + 0x20) < lVar26 + uVar24) goto LAB_0317248c;
          *(ulong *)(lVar20 + 0x18) = lVar26 + uVar24;
        }
        if (lVar27 == 0) {
          lVar27 = FUN_0333d16c(0,1);
          auVar78._4_4_ = auVar35._4_4_;
          auVar78._0_4_ = auVar35._0_4_;
          auVar78._8_4_ = auVar35._8_4_;
          auVar78._12_4_ = auVar35._12_4_;
          auVar65._4_4_ = auVar113._4_4_;
          auVar65._0_4_ = auVar113._0_4_;
          auVar65._8_4_ = auVar113._8_4_;
          auVar65._12_4_ = auVar113._12_4_;
          *(long *)(lVar23 + 0x38d490) = lVar27;
        }
        lVar20 = *(long *)(lVar27 + 8);
        if (uVar24 <= *(ulong *)(lVar20 + 0x10)) {
          lVar27 = *(long *)(lVar20 + 0x18);
          if (lVar27 + uVar24 <= *(ulong *)(lVar20 + 0x20)) {
            *(ulong *)(lVar20 + 0x18) = lVar27 + uVar24;
            goto LAB_03171b14;
          }
        }
        lVar27 = FUN_032ce670(lVar20,uVar24);
        auVar78._4_4_ = auVar35._4_4_;
        auVar78._0_4_ = auVar35._0_4_;
        auVar78._8_4_ = auVar35._8_4_;
        auVar78._12_4_ = auVar35._12_4_;
        auVar65._4_4_ = auVar113._4_4_;
        auVar65._0_4_ = auVar113._0_4_;
        auVar65._8_4_ = auVar113._8_4_;
        auVar65._12_4_ = auVar113._12_4_;
      }
LAB_03171b14:
      fVar73 = auVar65._0_4_ - auVar78._0_4_;
      fVar34 = auVar65._4_4_ - auVar78._4_4_;
      fVar39 = auVar65._8_4_ - auVar78._8_4_;
      fVar62 = local_140 * fVar73;
      fVar67 = fStack_13c * fVar34;
      fVar68 = fStack_138 * fVar39;
      fVar63 = fVar68 + fVar62 + fVar67;
      fVar68 = fVar68 + fVar62 + fVar67;
      fVar73 = fVar73 - local_140 * fVar63;
      fVar34 = fVar34 - fStack_13c * fVar68;
      fVar39 = fVar39 - fStack_138 * fVar63;
      fVar62 = (auVar65._12_4_ - auVar78._12_4_) - fStack_134 * fVar68;
      auVar36._0_4_ = fVar73 * fVar73 + fVar34 * fVar34 + fVar39 * fVar39;
      auVar36._4_4_ = fVar73 * fVar73 + fVar34 * fVar34 + fVar39 * fVar39;
      uVar69 = *param_13;
      lVar20 = nn::os::GetSystemTick();
      puVar13 = PTR_DAT_043723a0;
      if (iVar18 < 1) {
        uVar31 = 0;
        uVar32 = 0;
      }
      else {
        auVar36._12_4_ = auVar36._4_4_;
        auVar36._8_4_ = auVar36._0_4_;
        auVar79._4_4_ = fVar34;
        auVar79._0_4_ = fVar73;
        auVar79._8_4_ = fVar39;
        auVar79._12_4_ = fVar62;
        auVar43 = NEON_frecpe(auVar36,4);
        uVar31 = 0;
        auVar51 = NEON_frecps(auVar36,auVar43,4);
        uVar32 = 0;
        auVar83._0_4_ = auVar43._0_4_ * auVar51._0_4_;
        auVar83._4_4_ = auVar43._4_4_ * auVar51._4_4_;
        auVar83._8_4_ = auVar43._8_4_ * auVar51._8_4_;
        auVar83._12_4_ = auVar43._12_4_ * auVar51._12_4_;
        auVar43 = NEON_frecps(auVar36,auVar83,4);
        auVar37._0_4_ = fVar73 * auVar83._0_4_ * auVar43._0_4_;
        auVar37._4_4_ = fVar34 * auVar83._4_4_ * auVar43._4_4_;
        auVar37._8_4_ = fVar39 * auVar83._8_4_ * auVar43._8_4_;
        auVar89._0_4_ = auVar35._0_4_ * auVar37._0_4_;
        auVar89._4_4_ = auVar35._4_4_ * auVar37._4_4_;
        auVar89._8_4_ = auVar35._8_4_ * auVar37._8_4_;
        auVar89._12_4_ = auVar35._12_4_ * fVar62 * auVar83._12_4_ * auVar43._12_4_;
        auVar43 = NEON_ext(auVar89,auVar89,8,1);
        auVar51 = NEON_ext(auVar79,auVar79,4,1);
        fVar63 = -(auVar89._0_4_ + auVar89._4_4_ + auVar43._0_4_);
        auVar37._12_4_ = fVar63;
        auVar44 = NEON_ext(auVar44,auVar44,4,1);
        auVar45._0_4_ = local_140 * auVar51._0_4_ - auVar44._0_4_ * fVar73;
        auVar45._4_4_ = fStack_13c * auVar51._4_4_ - auVar44._4_4_ * fVar34;
        auVar45._8_4_ = fStack_138 * fVar73 - local_140 * fVar39;
        auVar45._12_4_ = fStack_134 * fVar34 - fStack_13c * fVar62;
        auVar44 = NEON_ext(auVar45,auVar45,4,1);
        fVar40 = auVar44._0_4_;
        fVar41 = auVar44._4_4_;
        fVar67 = fVar40 * fVar40 + fVar41 * fVar41 + auVar45._0_4_ * auVar45._0_4_;
        fVar33 = fVar40 * fVar40 + fVar41 * fVar41 + auVar45._0_4_ * auVar45._0_4_;
        uVar42 = CONCAT44(fVar33,fVar67);
        uVar64 = NEON_frsqrte(uVar42,4);
        fVar68 = (float)uVar64;
        fVar38 = (float)((ulong)uVar64 >> 0x20);
        uVar64 = NEON_frsqrts(uVar42,CONCAT44(fVar38 * fVar38,fVar68 * fVar68),4);
        fVar68 = fVar68 * (float)uVar64;
        fVar38 = fVar38 * (float)((ulong)uVar64 >> 0x20);
        iVar70 = -(uint)(fVar67 <= 0.0);
        iVar71 = -(uint)(fVar33 <= 0.0);
        uVar42 = NEON_frsqrts(uVar42,CONCAT44(fVar38 * fVar38,fVar68 * fVar68),4);
        fVar68 = (float)uVar42 * fVar68;
        fVar38 = (float)((ulong)uVar42 >> 0x20) * fVar38;
        fVar67 = (float)CONCAT13((byte)((uint)fVar68 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18),
                                 CONCAT12((byte)((uint)fVar68 >> 0x10) &
                                          ~(byte)((uint)iVar70 >> 0x10),
                                          CONCAT11((byte)((uint)fVar68 >> 8) &
                                                   ~(byte)((uint)iVar70 >> 8),
                                                   SUB41(fVar68,0) & ~(byte)iVar70)));
        auVar44._0_4_ = fVar40 * fVar67;
        fVar68 = (float)(CONCAT17((byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar71 >> 0x18),
                                  CONCAT16((byte)((uint)fVar38 >> 0x10) &
                                           ~(byte)((uint)iVar71 >> 0x10),
                                           CONCAT15((byte)((uint)fVar38 >> 8) &
                                                    ~(byte)((uint)iVar71 >> 8),
                                                    CONCAT14(SUB41(fVar38,0) & ~(byte)iVar71,fVar67)
                                                   ))) >> 0x20);
        auVar44._4_4_ = fVar41 * fVar68;
        auVar44._8_4_ = auVar45._0_4_ * fVar67;
        auVar52._0_4_ = auVar35._0_4_ * auVar44._0_4_;
        auVar52._4_4_ = auVar35._4_4_ * auVar44._4_4_;
        auVar52._8_4_ = auVar35._8_4_ * auVar44._8_4_;
        auVar52._12_4_ = auVar35._12_4_ * auVar45._4_4_ * fVar68;
        auVar43 = NEON_ext(auVar52,auVar52,8,1);
        fVar67 = -(auVar52._0_4_ + auVar52._4_4_ + auVar43._0_4_);
        auVar44._12_4_ = fVar67;
        auVar66._0_4_ = local_f0 * auVar44._0_4_;
        auVar66._4_4_ = fStack_ec * auVar44._4_4_;
        auVar66._8_4_ = fStack_e8 * auVar44._8_4_;
        auVar66._12_4_ = fStack_e4 * fVar67;
        auVar51 = NEON_ext(auVar66,auVar66,8,1);
        auVar58._8_8_ = _UNK_03889298;
        auVar58._0_8_ = _DAT_03889290;
        auVar43 = a64_TBL(ZEXT816(0),auVar44,auVar58);
        auVar59 = a64_TBL(ZEXT816(0),auVar37,auVar58);
        puVar29 = (undefined8 *)(local_d0 + 0x10);
        do {
          fVar40 = (float)puVar29[-1];
          fVar41 = (float)((ulong)puVar29[-1] >> 0x20);
          uVar111 = puVar29[-2];
          fVar38 = (float)((ulong)uVar111 >> 0x20);
          uVar64 = puVar29[1];
          fVar33 = (float)((ulong)uVar64 >> 0x20);
          uVar42 = *puVar29;
          fVar68 = (float)((ulong)uVar42 >> 0x20);
          auVar77._0_4_ = auVar44._0_4_ * (float)uVar42;
          auVar77._4_4_ = auVar44._4_4_ * fVar68;
          auVar77._8_4_ = auVar44._8_4_ * (float)uVar64;
          auVar77._12_4_ = fVar67 * fVar33;
          auVar88._0_4_ = auVar37._0_4_ * (float)uVar42;
          auVar88._4_4_ = auVar37._4_4_ * fVar68;
          auVar88._8_4_ = auVar37._8_4_ * (float)uVar64;
          auVar88._12_4_ = fVar63 * fVar33;
          auVar74._0_4_ = auVar44._0_4_ * (float)uVar111;
          auVar74._4_4_ = auVar44._4_4_ * fVar38;
          auVar74._8_4_ = auVar44._8_4_ * fVar40;
          auVar74._12_4_ = fVar67 * fVar41;
          auVar82._0_4_ = auVar37._0_4_ * (float)uVar111;
          auVar82._4_4_ = auVar37._4_4_ * fVar38;
          auVar82._8_4_ = auVar37._8_4_ * fVar40;
          auVar82._12_4_ = fVar63 * fVar41;
          auVar65 = NEON_ext(auVar74,auVar74,8,1);
          auVar78 = NEON_ext(auVar77,auVar77,8,1);
          auVar83 = NEON_ext(auVar82,auVar82,8,1);
          auVar89 = NEON_ext(auVar88,auVar88,8,1);
          auVar79 = auVar59 ^ (auVar59 ^ auVar43) & *(undefined1 (*) [16])(puVar13 + 0x30);
          auVar91._0_4_ = auVar65._0_4_ + auVar74._0_4_ + auVar74._4_4_ + auVar79._0_4_;
          auVar91._4_4_ = auVar78._0_4_ + auVar77._0_4_ + auVar77._4_4_ + auVar79._4_4_;
          auVar91._8_4_ = auVar83._0_4_ + auVar82._0_4_ + auVar82._4_4_ + auVar79._8_4_;
          auVar91._12_4_ = auVar89._0_4_ + auVar88._0_4_ + auVar88._4_4_ + auVar79._12_4_;
          auVar90._0_8_ =
               CONCAT44(-(uint)(auVar91._12_4_ < auVar91._8_4_),
                        -(uint)(auVar91._12_4_ < auVar91._8_4_));
          auVar65 = NEON_rev64(auVar91,4);
          auVar90._8_8_ = auVar90._0_8_;
          auVar91 = auVar91 ^ (auVar91 ^ auVar65) & auVar90;
          fVar33 = auVar91._4_4_;
          fVar68 = fVar33;
          if (0.0 <= auVar91._12_4_) {
            fVar68 = auVar91._0_4_;
            bVar99 = auVar91[3];
            if (auVar91._8_4_ <= 1.0) {
              auVar65 = NEON_ext(auVar91,auVar91,8,1);
              fVar41 = auVar65._0_4_;
              fVar38 = auVar65._4_4_ - fVar41;
              uVar101 = CONCAT44(auVar65._4_4_ - fVar41,fVar38);
              uVar107 = NEON_frecpe(uVar101,4);
              uVar102 = NEON_frecps(uVar101,uVar107,4);
              fVar47 = (float)uVar107 * (float)uVar102;
              iVar70 = -(uint)(fVar38 == 0.0);
              uVar102 = NEON_frecps(uVar101,CONCAT44((float)((ulong)uVar107 >> 0x20) *
                                                     (float)((ulong)uVar102 >> 0x20),fVar47),4);
              fVar47 = (float)((uint)(fVar47 * (float)uVar102) &
                              CONCAT13(~(byte)((uint)iVar70 >> 0x18),
                                       CONCAT12(~(byte)((uint)iVar70 >> 0x10),
                                                CONCAT11(~(byte)((uint)iVar70 >> 8),~(byte)iVar70)))
                              );
              fVar38 = fVar68;
              if (auVar91._8_4_ < 0.0) {
                fVar38 = fVar68 - (fVar33 - fVar68) * fVar41 * fVar47;
                bVar99 = (byte)((uint)fVar38 >> 0x18);
              }
              if (1.0 < auVar91._12_4_) {
                fVar33 = fVar68 + (fVar33 - fVar68) * ((float)uVar72 - fVar41) * fVar47;
              }
              fVar38 = ABS(fVar38);
              uVar81 = -(uint)(ABS(fVar33) < fVar38);
              uVar11 = (uint)fVar38 ^ ((uint)fVar38 ^ (uint)ABS(fVar33)) & uVar81;
              bVar12 = (byte)((uint)fVar33 >> 0x18);
              fVar68 = (float)CONCAT13((bVar12 ^ (bVar12 ^ bVar99) & (byte)(uVar81 >> 0x18)) & 0x80
                                       ^ (byte)(uVar11 >> 0x18),(int3)uVar11);
            }
          }
          fVar33 = fVar68;
          if (ABS(fVar68) < (float)uVar69 * 0.007874016) {
            fVar33 = fVar68 - (auVar66._0_4_ + auVar66._4_4_ + auVar51._0_4_ + fVar67);
          }
          if (fVar33 <= 0.0) {
            lVar22 = (long)(int)uVar31;
            uVar31 = uVar31 + 1;
            puVar30 = (undefined8 *)(lVar27 + lVar22 * 0x20);
          }
          else {
            lVar22 = (long)(int)uVar32;
            uVar32 = uVar32 + 1;
            puVar30 = (undefined8 *)(lVar26 + lVar22 * 0x20);
          }
          puVar30[1] = CONCAT44(ABS(fVar68),fVar40);
          *puVar30 = uVar111;
          uVar21 = uVar21 - 1;
          puVar29 = puVar29 + 4;
          puVar30[3] = uVar64;
          puVar30[2] = uVar42;
        } while (uVar21 != 0);
      }
      lVar22 = nn::os::GetSystemTick();
      *(long *)(param_14 + 0x78) = (lVar22 - lVar20) + *(long *)(param_14 + 0x78);
      *(int *)(param_14 + 0x80) = *(int *)(param_14 + 0x80) + 1;
      if (uVar32 - 1 != 0 && 0 < (int)uVar32) {
        FUN_03174c60(lVar26,0,uVar32 - 1);
      }
      if (1 < (int)uVar31) {
        FUN_03174c60(lVar27,0,uVar31 - 1);
      }
      lVar20 = nn::os::GetSystemTick();
      uVar69 = 1;
      if ((uVar31 != 0) && (uVar32 != 0)) {
        if (0 < (int)uVar32) {
          uVar69 = CONCAT44(auVar36._4_4_,auVar36._0_4_);
          uVar42 = NEON_frsqrte(uVar69,4);
          fVar63 = (float)uVar42;
          fVar67 = (float)((ulong)uVar42 >> 0x20);
          uVar42 = NEON_frsqrts(uVar69,CONCAT44(fVar67 * fVar67,fVar63 * fVar63),4);
          fVar63 = fVar63 * (float)uVar42;
          fVar67 = fVar67 * (float)((ulong)uVar42 >> 0x20);
          uVar69 = NEON_frsqrts(uVar69,CONCAT44(fVar67 * fVar67,fVar63 * fVar63),4);
          iVar70 = -(uint)(auVar36._0_4_ <= 0.0);
          iVar71 = -(uint)(auVar36._4_4_ <= 0.0);
          fVar63 = (float)uVar69 * fVar63;
          fVar67 = (float)((ulong)uVar69 >> 0x20) * fVar67;
          fVar63 = (float)CONCAT13((byte)((uint)fVar63 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18),
                                   CONCAT12((byte)((uint)fVar63 >> 0x10) &
                                            ~(byte)((uint)iVar70 >> 0x10),
                                            CONCAT11((byte)((uint)fVar63 >> 8) &
                                                     ~(byte)((uint)iVar70 >> 8),
                                                     SUB41(fVar63,0) & ~(byte)iVar70)));
          fVar73 = fVar73 * fVar63;
          fVar67 = (float)(CONCAT17((byte)((uint)fVar67 >> 0x18) & ~(byte)((uint)iVar71 >> 0x18),
                                    CONCAT16((byte)((uint)fVar67 >> 0x10) &
                                             ~(byte)((uint)iVar71 >> 0x10),
                                             CONCAT15((byte)((uint)fVar67 >> 8) &
                                                      ~(byte)((uint)iVar71 >> 8),
                                                      CONCAT14(SUB41(fVar67,0) & ~(byte)iVar71,
                                                               fVar63)))) >> 0x20);
          fVar34 = fVar34 * fVar67;
          fVar39 = fVar39 * fVar63;
          fVar62 = fVar62 * fVar67;
          auVar46._0_4_ = auVar35._0_4_ * fVar73;
          auVar46._4_4_ = auVar35._4_4_ * fVar34;
          auVar46._8_4_ = auVar35._8_4_ * fVar39;
          auVar46._12_4_ = auVar35._12_4_ * fVar62;
          auVar44 = NEON_ext(auVar46,auVar46,8,1);
          fVar63 = auVar46._0_4_ + auVar46._4_4_ + auVar44._0_4_;
          auVar53._0_4_ = auVar113._0_4_ * fVar73;
          auVar53._4_4_ = auVar113._4_4_ * fVar34;
          auVar53._8_4_ = auVar113._8_4_ * fVar39;
          auVar53._12_4_ = auVar113._12_4_ * fVar62;
          auVar44 = NEON_ext(auVar53,auVar53,8,1);
          fVar67 = auVar53._0_4_ + auVar53._4_4_ + auVar44._0_4_;
          fVar57 = (float)*param_13 - fVar57;
          fVar57 = fVar57 + fVar57;
          uVar21 = 0;
          do {
            puVar29 = (undefined8 *)(lVar26 + uVar21 * 0x20);
            uVar42 = puVar29[1];
            uVar69 = *puVar29;
            fVar68 = (float)((ulong)uVar42 >> 0x20);
            if (fVar57 < fVar68) break;
            if (0 < (int)uVar31) {
              lVar22 = lVar26 + uVar21 * 0x20;
              uVar111 = *(undefined8 *)(lVar22 + 0x18);
              uVar64 = *(undefined8 *)(lVar22 + 0x10);
              fVar33 = (float)uVar69;
              fVar41 = (float)uVar64 - fVar33;
              fVar38 = (float)((ulong)uVar69 >> 0x20);
              fVar47 = (float)((ulong)uVar64 >> 0x20) - fVar38;
              fVar40 = (float)uVar42;
              fVar48 = (float)uVar111 - fVar40;
              fVar49 = (float)((ulong)uVar111 >> 0x20) - fVar68;
              pfVar28 = (float *)(lVar27 + 0x10);
              uVar24 = (ulong)uVar31;
              do {
                fVar55 = (float)*(undefined8 *)(pfVar28 + -2);
                fVar56 = (float)((ulong)*(undefined8 *)(pfVar28 + -2) >> 0x20);
                fVar50 = (float)*(undefined8 *)(pfVar28 + -4);
                fVar54 = (float)((ulong)*(undefined8 *)(pfVar28 + -4) >> 0x20);
                if (fVar57 < fVar68 + fVar56) break;
                auVar75._0_4_ = *pfVar28 - fVar50;
                auVar75._4_4_ = pfVar28[1] - fVar54;
                auVar75._8_4_ = pfVar28[2] - fVar55;
                auVar75._12_4_ = pfVar28[3] - fVar56;
                auVar5._4_4_ = fVar47;
                auVar5._0_4_ = fVar41;
                auVar5._8_4_ = fVar48;
                auVar5._12_4_ = fVar49;
                auVar6._4_4_ = fVar47;
                auVar6._0_4_ = fVar41;
                auVar6._8_4_ = fVar48;
                auVar6._12_4_ = fVar49;
                auVar44 = NEON_ext(auVar5,auVar6,4,1);
                auVar43 = NEON_ext(auVar75,auVar75,4,1);
                fVar87 = fVar50 - fVar33;
                fVar93 = fVar54 - fVar38;
                fVar94 = fVar55 - fVar40;
                auVar84._0_4_ = fVar41 * fVar41;
                auVar84._4_4_ = fVar47 * fVar47;
                auVar84._8_4_ = fVar48 * fVar48;
                auVar84._12_4_ = fVar49 * fVar49;
                auVar51 = NEON_ext(auVar84,auVar84,8,1);
                fVar60 = auVar44._0_4_ * auVar75._0_4_ - fVar41 * auVar43._0_4_;
                fVar61 = auVar44._4_4_ * auVar75._4_4_ - fVar47 * auVar43._4_4_;
                auVar80._0_8_ = CONCAT44(fVar61,fVar60);
                auVar80._8_4_ = fVar41 * auVar75._8_4_ - fVar48 * auVar75._0_4_;
                auVar80._12_4_ = fVar47 * auVar75._12_4_ - fVar49 * auVar75._4_4_;
                auVar44 = NEON_ext(auVar80,auVar80,4,1);
                uVar64 = NEON_ext(auVar44._0_8_,auVar80._0_8_,4,1);
                fVar109 = auVar44._0_4_;
                fVar110 = auVar44._4_4_;
                fVar105 = fVar109 * fVar109 + fVar110 * fVar110 + fVar60 * fVar60;
                fVar106 = fVar109 * fVar109 + fVar110 * fVar110 + fVar60 * fVar60;
                uVar42 = CONCAT44(fVar106,fVar105);
                uVar69 = NEON_frecpe(uVar42,4);
                uVar111 = NEON_frecps(uVar42,uVar69,4);
                fVar98 = (float)uVar69 * (float)uVar111;
                fVar100 = (float)((ulong)uVar69 >> 0x20) * (float)((ulong)uVar111 >> 0x20);
                auVar97._0_4_ = auVar43._0_4_ * fVar109 - auVar75._0_4_ * (float)uVar64;
                auVar97._4_4_ =
                     auVar43._4_4_ * fVar110 - auVar75._4_4_ * (float)((ulong)uVar64 >> 0x20);
                auVar97._8_4_ = auVar75._0_4_ * fVar60 - auVar75._8_4_ * fVar109;
                auVar97._12_4_ = auVar75._4_4_ * fVar61 - auVar75._12_4_ * fVar110;
                auVar44 = NEON_ext(auVar97,auVar97,4,1);
                iVar70 = -(uint)(fVar105 == 0.0);
                iVar71 = -(uint)(fVar106 == 0.0);
                uVar69 = NEON_frecps(uVar42,CONCAT44(fVar100,fVar98),4);
                uVar25 = CONCAT17(~(byte)((uint)iVar71 >> 0x18),
                                  CONCAT16(~(byte)((uint)iVar71 >> 0x10),
                                           CONCAT15(~(byte)((uint)iVar71 >> 8),
                                                    CONCAT14(~(byte)iVar71,
                                                             CONCAT13(~(byte)((uint)iVar70 >> 0x18),
                                                                      CONCAT12(~(byte)((uint)iVar70
                                                                                      >> 0x10),
                                                                               CONCAT11(~(byte)((
                                                  uint)iVar70 >> 8),~(byte)iVar70)))))));
                fVar60 = fVar87 * auVar44._0_4_;
                fVar61 = fVar93 * auVar44._4_4_;
                fVar109 = fVar41 * fVar87;
                fVar110 = fVar47 * fVar93;
                fVar105 = fVar49 * (fVar56 - fVar68);
                auVar112._0_4_ = auVar75._0_4_ * auVar75._0_4_;
                auVar112._4_4_ = auVar75._4_4_ * auVar75._4_4_;
                auVar112._8_4_ = auVar75._8_4_ * auVar75._8_4_;
                auVar112._12_4_ = auVar75._12_4_ * auVar75._12_4_;
                auVar92._0_4_ = fVar87 * auVar75._0_4_;
                auVar92._4_4_ = fVar93 * auVar75._4_4_;
                auVar92._8_4_ = fVar94 * auVar75._8_4_;
                auVar92._12_4_ = (fVar56 - fVar68) * auVar75._12_4_;
                uVar95 = CONCAT44(fVar100 * (float)((ulong)uVar69 >> 0x20),fVar98 * (float)uVar69) &
                         uVar25;
                auVar9._4_4_ = fVar110;
                auVar9._0_4_ = fVar109;
                auVar9._8_4_ = fVar48 * fVar94;
                auVar9._12_4_ = fVar105;
                auVar10._4_4_ = fVar110;
                auVar10._0_4_ = fVar109;
                auVar10._8_4_ = fVar48 * fVar94;
                auVar10._12_4_ = fVar105;
                auVar43 = NEON_ext(auVar9,auVar10,8,1);
                auVar113 = NEON_ext(auVar112,auVar112,8,1);
                auVar44 = NEON_ext(auVar92,auVar92,8,1);
                uVar69 = NEON_fminnm(CONCAT44((float)(uVar95 >> 0x20) *
                                              (fVar60 + fVar61 + fVar94 * auVar97._0_4_),
                                              (float)uVar95 *
                                              (fVar60 + fVar61 + fVar94 * auVar97._0_4_)),uVar72,4);
                auVar85._0_4_ = auVar51._0_4_ + auVar84._0_4_ + auVar84._4_4_;
                auVar85._4_4_ = auVar43._0_4_ + fVar109 + fVar110;
                fVar60 = auVar113._0_4_ + auVar112._0_4_ + auVar112._4_4_;
                fVar94 = auVar44._0_4_ + auVar92._0_4_ + auVar92._4_4_;
                auVar85._12_4_ = fVar94;
                auVar85._8_4_ = fVar60;
                auVar44 = NEON_frecpe(auVar85,4);
                iVar70 = -(uint)(auVar85._0_4_ == 0.0);
                iVar71 = -(uint)(auVar85._4_4_ == 0.0);
                iVar103 = -(uint)(fVar60 == 0.0);
                iVar104 = -(uint)(fVar94 == 0.0);
                uVar96 = NEON_fmax(uVar69,0,4);
                auVar43 = NEON_frecps(auVar85,auVar44,4);
                fVar98 = fVar48 * auVar75._8_4_ + fVar41 * auVar75._0_4_ + fVar47 * auVar75._4_4_;
                fVar110 = fVar48 * auVar75._8_4_ + fVar41 * auVar75._0_4_ + fVar47 * auVar75._4_4_;
                auVar108._0_4_ = auVar44._0_4_ * auVar43._0_4_;
                auVar108._4_4_ = auVar44._4_4_ * auVar43._4_4_;
                auVar108._8_4_ = auVar44._8_4_ * auVar43._8_4_;
                auVar108._12_4_ = auVar44._12_4_ * auVar43._12_4_;
                auVar44 = NEON_frecps(auVar85,auVar108,4);
                fVar60 = auVar108._0_4_ * auVar44._0_4_;
                fVar61 = auVar108._4_4_ * auVar44._4_4_;
                fVar87 = auVar108._8_4_ * auVar44._8_4_;
                fVar93 = auVar108._12_4_ * auVar44._12_4_;
                auVar86._0_4_ =
                     (float)CONCAT13((byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18),
                                     CONCAT12((byte)((uint)fVar60 >> 0x10) &
                                              ~(byte)((uint)iVar70 >> 0x10),
                                              CONCAT11((byte)((uint)fVar60 >> 8) &
                                                       ~(byte)((uint)iVar70 >> 8),
                                                       SUB41(fVar60,0) & ~(byte)iVar70)));
                auVar86[4] = SUB41(fVar61,0) & ~(byte)iVar71;
                auVar86[5] = (byte)((uint)fVar61 >> 8) & ~(byte)((uint)iVar71 >> 8);
                auVar86[6] = (byte)((uint)fVar61 >> 0x10) & ~(byte)((uint)iVar71 >> 0x10);
                auVar86[7] = (byte)((uint)fVar61 >> 0x18) & ~(byte)((uint)iVar71 >> 0x18);
                auVar86[8] = SUB41(fVar87,0) & ~(byte)iVar103;
                auVar86[9] = (byte)((uint)fVar87 >> 8) & ~(byte)((uint)iVar103 >> 8);
                auVar86[10] = (byte)((uint)fVar87 >> 0x10) & ~(byte)((uint)iVar103 >> 0x10);
                auVar86[0xb] = (byte)((uint)fVar87 >> 0x18) & ~(byte)((uint)iVar103 >> 0x18);
                auVar86[0xc] = SUB41(fVar93,0) & ~(byte)iVar104;
                auVar86[0xd] = (byte)((uint)fVar93 >> 8) & ~(byte)((uint)iVar104 >> 8);
                auVar86[0xe] = (byte)((uint)fVar93 >> 0x10) & ~(byte)((uint)iVar104 >> 0x10);
                auVar86[0xf] = (byte)((uint)fVar93 >> 0x18) & ~(byte)((uint)iVar104 >> 0x18);
                auVar44 = NEON_ext(auVar86,auVar86,8,1);
                fVar60 = ((float)uVar96 * fVar98 - fVar94) * auVar44._0_4_;
                fVar61 = ((float)(uVar96 >> 0x20) * fVar110 - fVar94) * auVar44._0_4_;
                uVar69 = NEON_fminnm(CONCAT44(fVar61,fVar60),uVar72,4);
                uVar69 = NEON_fmax(uVar69,0,4);
                fVar94 = (float)uVar69;
                fVar109 = (float)((ulong)uVar69 >> 0x20);
                uVar69 = NEON_fminnm(CONCAT44((auVar85._4_4_ + fVar110 * fVar109) * auVar86._0_4_,
                                              (auVar85._4_4_ + fVar98 * fVar94) * auVar86._0_4_),
                                     uVar72,4);
                uVar95 = NEON_fmax(uVar69,0,4);
                uVar95 = uVar95 ^ (uVar95 ^ uVar96) &
                                  CONCAT44(-(uint)(fVar109 == fVar61),-(uint)(fVar94 == fVar60)) &
                                  uVar25;
                fVar60 = (float)uVar95;
                fVar87 = (float)(uVar95 >> 0x20);
                fVar61 = fVar33 + fVar41 * fVar60;
                fVar93 = fVar38 + fVar47 * fVar87;
                fVar60 = fVar40 + fVar48 * fVar60;
                fVar87 = fVar68 + fVar49 * fVar87;
                fVar50 = fVar61 - (fVar50 + auVar75._0_4_ * fVar94);
                fVar54 = fVar93 - (fVar54 + auVar75._4_4_ * fVar109);
                fVar55 = fVar60 - (fVar55 + auVar75._8_4_ * fVar94);
                fVar56 = fVar87 - (fVar56 + auVar75._12_4_ * fVar109);
                auVar76._0_4_ = fVar50 * fVar50;
                auVar76._4_4_ = fVar54 * fVar54;
                auVar76._8_4_ = fVar55 * fVar55;
                auVar76._12_4_ = fVar56 * fVar56;
                auVar43 = NEON_ext(auVar76,auVar76,8,1);
                fVar50 = fVar73 * (fVar61 + fVar50 * -0.5);
                fVar54 = fVar34 * (fVar93 + fVar54 * -0.5);
                fVar55 = fVar39 * (fVar60 + fVar55 * -0.5);
                fVar56 = fVar62 * (fVar87 + fVar56 * -0.5);
                auVar7._4_4_ = fVar54;
                auVar7._0_4_ = fVar50;
                auVar7._8_4_ = fVar55;
                auVar7._12_4_ = fVar56;
                auVar8._4_4_ = fVar54;
                auVar8._0_4_ = fVar50;
                auVar8._8_4_ = fVar55;
                auVar8._12_4_ = fVar56;
                auVar44 = NEON_ext(auVar7,auVar8,8,1);
                fVar50 = auVar44._0_4_ + fVar50 + fVar54;
                bVar14 = false;
                bVar16 = true;
                bVar17 = false;
                if (auVar76._0_4_ + auVar76._4_4_ + auVar43._0_4_ < fVar57 * fVar57) {
                  bVar14 = false;
                  bVar16 = false;
                  bVar17 = true;
                  if (!NAN(fVar50) && !NAN(fVar63)) {
                    bVar14 = fVar50 < fVar63;
                    bVar16 = fVar50 == fVar63;
                    bVar17 = false;
                  }
                }
                bVar15 = false;
                if ((!bVar16 && bVar14 == bVar17) && (bVar15 = false, !NAN(fVar50) && !NAN(fVar67)))
                {
                  bVar15 = fVar50 < fVar67;
                }
                if (bVar15) {
                  uVar69 = 0;
                  goto LAB_03172278;
                }
                uVar24 = uVar24 - 1;
                pfVar28 = pfVar28 + 8;
              } while (uVar24 != 0);
            }
            uVar21 = uVar21 + 1;
          } while (uVar21 != uVar32);
        }
        uVar69 = 1;
      }
LAB_03172278:
      lVar22 = nn::os::GetSystemTick();
      *(long *)(param_14 + 0x90) = (lVar22 - lVar20) + *(long *)(param_14 + 0x90);
      *(int *)(param_14 + 0x98) = *(int *)(param_14 + 0x98) + 1;
      lVar20 = *(long *)(lVar23 + 0x38d490);
      if (lVar20 == 0) {
        lVar20 = FUN_0333d16c(0,1);
        *(long *)(lVar23 + 0x38d490) = lVar20;
      }
      lVar22 = *(long *)(lVar20 + 8);
      uVar21 = (ulong)(int)(iVar18 * 0x20 + 0x7fU & 0xffffff80);
      if (((*(ulong *)(lVar22 + 0x10) < uVar21) || (*(long *)(lVar22 + 0x18) != lVar27 + uVar21)) ||
         (*(long *)(lVar22 + 0x28) == lVar27)) {
        if (lVar27 != 0) {
          if (*(ulong *)(lVar22 + 0x10) < uVar21) {
            *(int *)(*(long *)(lVar22 + 8) + 0x20) = *(int *)(*(long *)(lVar22 + 8) + 0x20) + -1;
            (**(code **)(**(long **)(lVar22 + 0x40) + 0x18))
                      (*(long **)(lVar22 + 0x40),lVar27,uVar21);
          }
          else if (*(long *)(lVar22 + 0x18) == lVar27 + uVar21) {
            *(long *)(lVar22 + 0x18) = lVar27;
            FUN_032ce944();
          }
          else {
            FUN_032ceaf0(lVar22,lVar27,uVar21);
          }
        }
        lVar20 = *(long *)(lVar23 + 0x38d490);
      }
      else {
        *(long *)(lVar22 + 0x18) = lVar27;
      }
      if (lVar20 == 0) {
        lVar20 = FUN_0333d16c(0,1);
        *(long *)(lVar23 + 0x38d490) = lVar20;
      }
      lVar27 = *(long *)(lVar20 + 8);
      if (((*(ulong *)(lVar27 + 0x10) < uVar21) || (*(long *)(lVar27 + 0x18) != lVar26 + uVar21)) ||
         (*(long *)(lVar27 + 0x28) == lVar26)) {
        if (lVar26 != 0) {
          if (*(ulong *)(lVar27 + 0x10) < uVar21) {
            *(int *)(*(long *)(lVar27 + 8) + 0x20) = *(int *)(*(long *)(lVar27 + 8) + 0x20) + -1;
            (**(code **)(**(long **)(lVar27 + 0x40) + 0x18))
                      (*(long **)(lVar27 + 0x40),lVar26,uVar21);
          }
          else if (*(long *)(lVar27 + 0x18) == lVar26 + uVar21) {
            *(long *)(lVar27 + 0x18) = lVar26;
            FUN_032ce944();
          }
          else {
            FUN_032ceaf0(lVar27,lVar26,uVar21);
          }
        }
      }
      else {
        *(long *)(lVar27 + 0x18) = lVar26;
      }
    }
    lVar27 = local_d0;
    lVar26 = local_c0;
    if (local_c0 != local_d0) goto LAB_03171e38;
  }
  else {
    lVar26 = nn::os::GetSystemTick();
    lVar20 = nn::os::GetSystemTick();
    uVar21 = (**(code **)(*param_2 + 0x20))
                       (param_2,param_1,param_7 & 0xffffffff,param_8,param_9,param_10);
    lVar22 = nn::os::GetSystemTick();
    *(long *)(param_14 + 0x38) = (lVar22 - lVar20) + *(long *)(param_14 + 0x38);
    *(int *)(param_14 + 0x40) = *(int *)(param_14 + 0x40) + 1;
    lVar20 = nn::os::GetSystemTick();
    *(long *)(param_14 + 0x20) = (lVar20 - lVar26) + *(long *)(param_14 + 0x20);
    *(int *)(param_14 + 0x28) = *(int *)(param_14 + 0x28) + 1;
    if ((uVar21 & 1) != 0) goto LAB_03171740;
    uVar69 = 0;
    lVar26 = lVar27;
  }
  local_c8 = local_c8 & 0xffffffff00000000;
LAB_03171e38:
  iVar18 = local_b8;
  lVar20 = *(long *)(lVar23 + 0x38d490);
  if (lVar20 == 0) {
    lVar20 = FUN_0333d16c(0,1);
    *(long *)(lVar23 + 0x38d490) = lVar20;
  }
  lVar23 = *(long *)(lVar20 + 8);
  uVar24 = (ulong)(int)(iVar18 * 0x20 + 0x7fU & 0xffffff80);
  uVar21 = local_c8;
  if (((*(ulong *)(lVar23 + 0x10) < uVar24) || (*(long *)(lVar23 + 0x18) != uVar24 + lVar26)) ||
     (*(long *)(lVar23 + 0x28) == lVar26)) {
    if (lVar26 != 0) {
      if (*(ulong *)(lVar23 + 0x10) < uVar24) {
        *(int *)(*(long *)(lVar23 + 8) + 0x20) = *(int *)(*(long *)(lVar23 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar23 + 0x40) + 0x18))(*(long **)(lVar23 + 0x40),lVar26);
        uVar21 = local_c8;
      }
      else if (*(long *)(lVar23 + 0x18) == uVar24 + lVar26) {
        *(long *)(lVar23 + 0x18) = lVar26;
        FUN_032ce944();
        uVar21 = local_c8;
      }
      else {
        FUN_032ceaf0(lVar23,lVar26);
        uVar21 = local_c8;
      }
    }
  }
  else {
    *(long *)(lVar23 + 0x18) = lVar26;
  }
  local_c8 = uVar21 & 0xffffffff00000000;
  if ((lVar27 != 0) && (-1 < (long)local_c8)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,lVar27,(uVar21 >> 0x20 & 0x3fffffff) << 5);
  }
  if ((local_98 != 0) && (local_90 != '\0')) {
    FUN_032d5b34(local_98,&DAT_0390f40e);
  }
  lVar23 = nn::os::GetSystemTick();
  *(long *)(param_14 + 8) = (lVar23 - lVar19) + *(long *)(param_14 + 8);
  *(int *)(param_14 + 0x10) = *(int *)(param_14 + 0x10) + 1;
  return uVar69;
}


