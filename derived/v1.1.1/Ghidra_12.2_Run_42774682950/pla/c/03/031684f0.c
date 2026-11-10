/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031684f0; name: FUN_031684f0
 */


void FUN_031684f0(long param_1,long *param_2,ulong param_3,int *param_4,undefined8 param_5,
                 undefined8 param_6,undefined1 (*param_7) [16],undefined8 *param_8,long *param_9,
                 long *param_10,undefined8 *param_11,long param_12)

{
  undefined8 *puVar1;
  byte bVar2;
  long *plVar3;
  uint uVar4;
  short sVar5;
  float *pfVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  bool bVar14;
  undefined *puVar15;
  uint uVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined4 *puVar28;
  uint *puVar29;
  ulong uVar30;
  long lVar31;
  int *piVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  float fVar40;
  float fVar41;
  undefined8 uVar42;
  float fVar52;
  float fVar53;
  float fVar55;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar54;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar63;
  float fVar64;
  float fVar67;
  float fVar68;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  int iVar65;
  float fVar66;
  int iVar69;
  int iVar70;
  undefined1 auVar62 [16];
  int iVar71;
  float fVar72;
  float fVar78;
  undefined8 uVar73;
  ulong uVar74;
  undefined1 auVar75 [16];
  int iVar77;
  undefined1 auVar76 [16];
  undefined8 uVar79;
  undefined8 uVar80;
  float fVar85;
  undefined1 auVar81 [16];
  float fVar84;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined8 uVar86;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar91;
  float fVar93;
  undefined8 uVar92;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  undefined8 uVar99;
  undefined8 uVar100;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  float fVar104;
  undefined8 uVar105;
  float fVar106;
  float fVar107;
  undefined8 uVar108;
  undefined8 uVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  undefined1 auVar114 [16];
  int iVar115;
  int iVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  undefined8 uVar121;
  undefined8 uVar122;
  undefined8 uVar123;
  float fVar124;
  undefined8 uVar125;
  float fVar126;
  undefined8 uVar127;
  float fVar128;
  undefined8 uVar129;
  float fVar130;
  undefined8 uVar131;
  float fVar132;
  undefined8 uVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  float local_1b0;
  float fStack_1ac;
  undefined8 uStack_1a8;
  undefined4 local_118;
  int local_114;
  undefined8 local_110;
  undefined4 local_108;
  long local_100;
  undefined8 local_f8;
  long local_f0;
  int local_e8;
  long local_e0;
  undefined8 local_d8;
  long local_d0;
  int local_c8;
  long local_c0;
  int local_b8;
  int local_b4;
  int iStack_b0;
  int iStack_ac;
  long local_98;
  
  lVar17 = nn::os::GetSystemTick();
  auVar101 = *param_7;
  uVar105 = *param_8;
  lVar20 = tpidr_el0;
  lVar35 = (long)(short)param_4[2];
  if (lVar35 == 0) {
    local_98 = 0;
  }
  else {
    lVar25 = *(long *)(lVar20 + 0x38d490);
    if (lVar25 == 0) {
      lVar25 = FUN_0333d16c(0,1);
      *(long *)(lVar20 + 0x38d490) = lVar25;
    }
    lVar25 = *(long *)(lVar25 + 8);
    uVar23 = lVar35 * 0x10 + 0x7fU & 0xffffffffffffff80;
    if (uVar23 <= *(ulong *)(lVar25 + 0x10)) {
      local_98 = *(long *)(lVar25 + 0x18);
      uVar23 = local_98 + uVar23;
      if (uVar23 <= *(ulong *)(lVar25 + 0x20)) {
        *(ulong *)(lVar25 + 0x18) = uVar23;
        goto LAB_031685a0;
      }
    }
    local_98 = FUN_032ce670();
  }
LAB_031685a0:
  lVar25 = *(long *)(lVar20 + 0x38d490);
  if (lVar25 == 0) {
    lVar25 = FUN_0333d16c(0,1);
    *(long *)(lVar20 + 0x38d490) = lVar25;
  }
  plVar18 = *(long **)(*(long *)(lVar25 + 8) + 0x58);
  lVar25 = (**(code **)(*plVar18 + 0x10))(plVar18,0x400,0);
  iStack_b0 = 0;
  iStack_ac = 0;
  local_b8 = 0x40;
  local_b4 = 0;
  local_c8 = 0x40;
  local_e0 = 0;
  local_d8 = 0x8000000000000000;
  lVar26 = *(long *)(lVar20 + 0x38d490);
  local_c0 = lVar25;
  if (lVar26 == 0) {
    lVar26 = FUN_0333d16c(0,1);
    *(long *)(lVar20 + 0x38d490) = lVar26;
  }
  lVar19 = *(long *)(lVar26 + 8);
  if (*(ulong *)(lVar19 + 0x10) < 0x300) {
LAB_03169428:
    local_d0 = FUN_032ce670(lVar19,0x300);
    lVar26 = *(long *)(lVar20 + 0x38d490);
  }
  else {
    local_d0 = *(long *)(lVar19 + 0x18);
    if (*(ulong *)(lVar19 + 0x20) < local_d0 + 0x300U) goto LAB_03169428;
    *(ulong *)(lVar19 + 0x18) = local_d0 + 0x300U;
  }
  fVar119 = auVar101._8_4_;
  fVar120 = auVar101._12_4_;
  fVar117 = auVar101._0_4_;
  fVar118 = auVar101._4_4_;
  local_100 = 0;
  local_f8 = 0x8000000000000000;
  local_d8 = CONCAT44(0x80000040,(uint)local_d8);
  local_e8 = 0x40;
  local_e0 = local_d0;
  if (lVar26 == 0) {
    lVar26 = FUN_0333d16c(0,1);
    *(long *)(lVar20 + 0x38d490) = lVar26;
  }
  lVar26 = *(long *)(lVar26 + 8);
  if (*(ulong *)(lVar26 + 0x10) < 0x100) {
LAB_03169454:
    lVar19 = FUN_032ce670(lVar26,0x100);
  }
  else {
    lVar19 = *(long *)(lVar26 + 0x18);
    if (*(ulong *)(lVar26 + 0x20) < lVar19 + 0x100U) goto LAB_03169454;
    *(ulong *)(lVar26 + 0x18) = lVar19 + 0x100U;
  }
  local_f8 = CONCAT44(0x80000040,(int)local_f8);
  uVar23 = param_3 >> 0x16 & 0x3ff;
  iVar65 = *param_4;
  lVar26 = (long)iVar65;
  lVar27 = *(long *)(*(long *)(param_1 + 0x38) + uVar23 * 0xf0);
  lVar36 = *(long *)(lVar27 + 0x20);
  uVar122 = *(undefined8 *)(lVar27 + 0x68);
  uVar121 = *(undefined8 *)(lVar27 + 0x60);
  uVar125 = *(undefined8 *)(lVar27 + 0x78);
  uVar123 = *(undefined8 *)(lVar27 + 0x70);
  uVar129 = *(undefined8 *)(lVar27 + 0x88);
  uVar127 = *(undefined8 *)(lVar27 + 0x80);
  uVar133 = *(undefined8 *)(lVar27 + 0x98);
  uVar131 = *(undefined8 *)(lVar27 + 0x90);
  sVar5 = (short)param_4[2];
  iVar69 = iVar65 + sVar5 + -1;
  iVar71 = *(int *)(lVar36 + 0x30);
  lVar27 = *(long *)(lVar36 + 0x28);
  if (iVar71 < iVar65 + sVar5) {
    iVar69 = iVar69 - iVar71;
    plVar18 = (long *)(lVar36 + 0xe0);
LAB_0316a100:
    lVar21 = *plVar18;
  }
  else {
    iVar70 = iVar69;
    if (*(int *)(lVar36 + 0x78) != 0) {
      iVar70 = *(int *)(*(long *)(lVar36 + 0x70) + (long)iVar69 * 4);
    }
    lVar21 = lVar27;
    if (iVar70 != -1) {
      plVar18 = (long *)(lVar36 + 0xc0);
      iVar69 = iVar70;
      goto LAB_0316a100;
    }
  }
  iVar69 = *(int *)(lVar21 + (long)iVar69 * 0x14 + 4);
  iVar70 = *(int *)(lVar36 + 0x40);
  if (iVar69 < iVar70) {
    iVar70 = 0;
    plVar18 = (long *)(lVar36 + 0x38);
  }
  else {
    plVar18 = (long *)(lVar36 + 0xf0);
  }
  lVar21 = local_98;
  local_100 = lVar19;
  local_f0 = lVar19;
  if (sVar5 != 0) {
    auVar101 = NEON_ext(auVar101,auVar101,4,1);
    fVar106 = 0.0;
    fVar107 = 0.0;
    pfVar6 = (float *)(*plVar18 + (long)(iVar69 - iVar70) * 0x10);
    fVar104 = *pfVar6;
    fVar41 = pfVar6[1];
    fVar53 = pfVar6[2];
    fVar91 = 0.0;
    fVar93 = 0.0;
    fVar96 = 0.0;
    fVar97 = 0.0;
    fVar85 = (float)((ulong)uVar121 >> 0x20);
    fVar98 = (float)((ulong)uVar122 >> 0x20);
    fVar124 = (float)((ulong)uVar123 >> 0x20);
    fVar126 = (float)((ulong)uVar125 >> 0x20);
    uVar37 = 0;
    fVar128 = (float)((ulong)uVar127 >> 0x20);
    fVar130 = (float)((ulong)uVar129 >> 0x20);
    iVar70 = 0;
    iVar115 = 0;
    iVar69 = 0;
    fVar40 = (float)uVar131 +
             (float)uVar127 * fVar53 + (float)uVar121 * fVar104 + (float)uVar123 * fVar41;
    fVar132 = (float)((ulong)uVar131 >> 0x20);
    fVar52 = fVar132 + fVar128 * fVar53 + fVar85 * fVar104 + fVar124 * fVar41;
    fVar55 = (float)uVar133 +
             (float)uVar129 * fVar53 + (float)uVar122 * fVar104 + (float)uVar125 * fVar41;
    fVar134 = (float)((ulong)uVar133 >> 0x20);
    fVar56 = fVar117 * fVar40;
    fVar63 = fVar118 * fVar52;
    fVar67 = fVar119 * fVar55;
    fVar57 = fVar67 + fVar56 + fVar63;
    fVar67 = fVar67 + fVar56 + fVar63;
    uVar38 = (uint)param_3 & 0xffc00000;
    fVar40 = fVar40 - fVar117 * fVar57;
    fVar52 = fVar52 - fVar118 * fVar67;
    fVar55 = fVar55 - fVar119 * fVar57;
    fVar104 = (fVar134 + fVar130 * fVar53 + fVar98 * fVar104 + fVar126 * fVar41) - fVar120 * fVar67;
    lVar33 = lVar26 * 0x14;
    iVar116 = 0x40;
    do {
      iVar77 = *(int *)(lVar36 + 0x60);
      lVar31 = (long)iVar77;
      if (lVar26 < iVar71) {
        if (*(int *)(lVar36 + 0x78) == 0) {
          iVar71 = iVar65 + uVar37;
        }
        else {
          iVar71 = *(int *)(*(long *)(lVar36 + 0x70) + lVar26 * 4);
        }
        if (iVar71 == -1) {
          lVar34 = *(long *)(lVar36 + 0x58) + lVar26 * lVar31 * 4;
          lVar31 = lVar34 + lVar31 * 4;
          puVar28 = (undefined4 *)(lVar27 + lVar33);
        }
        else {
          lVar34 = *(long *)(lVar36 + 0x130) + (long)(iVar71 * iVar77) * 4;
          lVar31 = lVar34 + lVar31 * 4;
          puVar28 = (undefined4 *)(*(long *)(lVar36 + 0xc0) + (long)iVar71 * 0x14);
        }
      }
      else {
        iVar71 = (iVar65 + uVar37) - iVar71;
        lVar34 = *(long *)(lVar36 + 0x150) + (long)(iVar77 * iVar71) * 4;
        lVar31 = lVar34 + lVar31 * 4;
        puVar28 = (undefined4 *)(*(long *)(lVar36 + 0xe0) + (long)iVar71 * 0x14);
      }
      local_118 = *puVar28;
      local_114 = puVar28[1];
      local_110 = *(undefined8 *)(puVar28 + 2);
      local_108 = puVar28[4];
      iVar71 = *(int *)(lVar36 + 0x40);
      plVar18 = (long *)(lVar36 + 0x38);
      if (iVar71 <= local_114) {
        plVar18 = (long *)(lVar36 + 0xf0);
      }
      iVar77 = 0;
      if (iVar71 <= local_114) {
        iVar77 = iVar71;
      }
      pfVar6 = (float *)(*plVar18 + (long)(local_114 - iVar77) * 0x10);
      fVar41 = *pfVar6;
      fVar53 = pfVar6[1];
      fVar56 = pfVar6[2];
      fVar57 = (float)uVar131 +
               (float)uVar127 * fVar56 + (float)uVar121 * fVar41 + (float)uVar123 * fVar53;
      fVar63 = fVar132 + fVar128 * fVar56 + fVar85 * fVar41 + fVar124 * fVar53;
      fVar67 = (float)uVar133 +
               (float)uVar129 * fVar56 + (float)uVar122 * fVar41 + (float)uVar125 * fVar53;
      fVar58 = fVar117 * fVar57;
      fVar64 = fVar118 * fVar63;
      fVar68 = fVar119 * fVar67;
      fVar59 = fVar58 + fVar64 + fVar68;
      fVar68 = fVar58 + fVar64 + fVar68;
      auVar103._0_4_ = fVar57 - fVar117 * fVar59;
      auVar103._4_4_ = fVar63 - fVar118 * fVar68;
      auVar103._8_4_ = fVar67 - fVar119 * fVar59;
      auVar103._12_4_ =
           (fVar134 + fVar130 * fVar56 + fVar98 * fVar41 + fVar126 * fVar53) - fVar120 * fVar68;
      auVar60._4_4_ = fVar52;
      auVar60._0_4_ = fVar40;
      auVar60._8_4_ = fVar55;
      auVar60._12_4_ = fVar104;
      auVar75._4_4_ = fVar52;
      auVar75._0_4_ = fVar40;
      auVar75._8_4_ = fVar55;
      auVar75._12_4_ = fVar104;
      auVar60 = NEON_ext(auVar60,auVar75,4,1);
      auVar75 = NEON_ext(auVar103,auVar103,4,1);
      fVar41 = fVar40 + auVar103._0_4_;
      fVar53 = fVar52 + auVar103._4_4_;
      fVar56 = fVar55 + auVar103._8_4_;
      fVar57 = fVar104 + auVar103._12_4_;
      auVar61._0_4_ = fVar40 * auVar75._0_4_ - auVar60._0_4_ * auVar103._0_4_;
      auVar61._4_4_ = fVar52 * auVar75._4_4_ - auVar60._4_4_ * auVar103._4_4_;
      auVar61._8_4_ = fVar55 * auVar103._0_4_ - fVar40 * auVar103._8_4_;
      auVar61._12_4_ = fVar104 * auVar103._4_4_ - fVar52 * auVar103._12_4_;
      auVar60 = NEON_ext(auVar61,auVar61,4,1);
      fVar63 = fVar117 * auVar60._0_4_;
      fVar67 = fVar118 * auVar60._4_4_;
      fVar58 = fVar63 + fVar67 + fVar119 * auVar61._0_4_;
      fVar63 = fVar63 + fVar67 + fVar119 * auVar61._0_4_;
      if ((int)local_110 == -1) {
LAB_03168a28:
        iVar77 = (int)param_9[1];
        lVar27 = *param_9;
        iVar71 = iVar77 + 1;
        if ((int)(*(uint *)((long)param_9 + 0xc) & 0x3fffffff) <= iVar77) {
          lVar27 = FUN_0317493c(PTR_PTR_0434a080,iVar71);
          iVar77 = (int)param_9[1];
          *param_9 = lVar27;
          lVar21 = local_98;
        }
        puVar1 = (undefined8 *)(lVar27 + (long)iVar77 * 0x20);
        *(int *)(param_9 + 1) = iVar71;
        puVar1[1] = CONCAT44(fVar104,fVar55);
        *puVar1 = CONCAT44(fVar52,fVar40);
        puVar1[3] = auVar103._8_8_;
        puVar1[2] = auVar103._0_8_;
      }
      else {
        if ((param_2 == (long *)0x0) || (((byte)local_108 >> 5 & 1) != 0)) {
          if (((byte)local_108 >> 5 & 1) != 0) goto LAB_03168a28;
        }
        else {
          uVar42 = auVar103._8_8_;
          lVar27 = nn::os::GetSystemTick();
          uVar39 = (**(code **)(*param_2 + 0x28))
                             (param_2,param_1,uVar38 | iVar65 + uVar37,&local_118,lVar34,lVar31);
          lVar21 = nn::os::GetSystemTick();
          auVar103._8_8_ = uVar42;
          *(long *)(param_12 + 0x20) = (lVar21 - lVar27) + *(long *)(param_12 + 0x20);
          *(int *)(param_12 + 0x28) = *(int *)(param_12 + 0x28) + 1;
          lVar21 = local_98;
          if ((uVar39 & 1) == 0) goto LAB_03168a28;
        }
        auVar43._0_4_ = auVar103._0_4_ - fVar40;
        auVar43._4_4_ = auVar103._4_4_ - fVar52;
        auVar43._8_4_ = auVar103._8_4_ - fVar55;
        auVar43._12_4_ = auVar103._12_4_ - fVar104;
        auVar60 = NEON_ext(auVar43,auVar43,4,1);
        auVar44._0_4_ = auVar101._0_4_ * auVar43._0_4_ - fVar117 * auVar60._0_4_;
        auVar44._4_4_ = auVar101._4_4_ * auVar43._4_4_ - fVar118 * auVar60._4_4_;
        auVar44._8_4_ = fVar117 * auVar43._8_4_ - fVar119 * auVar43._0_4_;
        auVar44._12_4_ = fVar118 * auVar43._12_4_ - fVar120 * auVar43._4_4_;
        auVar60 = NEON_ext(auVar44,auVar44,4,1);
        fVar135 = auVar60._0_4_;
        fVar54 = auVar60._4_4_;
        fVar67 = auVar44._0_4_ * auVar44._0_4_ + fVar135 * fVar135 + fVar54 * fVar54;
        fVar64 = auVar44._0_4_ * auVar44._0_4_ + fVar135 * fVar135 + fVar54 * fVar54;
        uVar42 = CONCAT44(fVar64,fVar67);
        uVar79 = NEON_frsqrte(uVar42,4);
        fVar59 = (float)uVar79;
        fVar68 = (float)((ulong)uVar79 >> 0x20);
        uVar79 = NEON_frsqrts(uVar42,CONCAT44(fVar68 * fVar68,fVar59 * fVar59),4);
        fVar59 = fVar59 * (float)uVar79;
        fVar68 = fVar68 * (float)((ulong)uVar79 >> 0x20);
        iVar71 = -(uint)(fVar67 <= 0.0);
        iVar77 = -(uint)(fVar64 <= 0.0);
        uVar42 = NEON_frsqrts(uVar42,CONCAT44(fVar68 * fVar68,fVar59 * fVar59),4);
        fVar59 = (float)uVar42 * fVar59;
        fVar68 = (float)((ulong)uVar42 >> 0x20) * fVar68;
        fVar67 = (float)CONCAT13((byte)((uint)fVar59 >> 0x18) & ~(byte)((uint)iVar71 >> 0x18),
                                 CONCAT12((byte)((uint)fVar59 >> 0x10) &
                                          ~(byte)((uint)iVar71 >> 0x10),
                                          CONCAT11((byte)((uint)fVar59 >> 8) &
                                                   ~(byte)((uint)iVar71 >> 8),
                                                   SUB41(fVar59,0) & ~(byte)iVar71)));
        fVar59 = (float)(CONCAT17((byte)((uint)fVar68 >> 0x18) & ~(byte)((uint)iVar77 >> 0x18),
                                  CONCAT16((byte)((uint)fVar68 >> 0x10) &
                                           ~(byte)((uint)iVar77 >> 0x10),
                                           CONCAT15((byte)((uint)fVar68 >> 8) &
                                                    ~(byte)((uint)iVar77 >> 8),
                                                    CONCAT14(SUB41(fVar68,0) & ~(byte)iVar77,fVar67)
                                                   ))) >> 0x20);
        fVar54 = fVar54 * fVar59;
        fVar59 = auVar44._4_4_ * fVar59;
        pfVar6 = (float *)(lVar21 + (long)iVar69 * 0x10);
        pfVar6[2] = auVar44._0_4_ * fVar67;
        pfVar6[3] = fVar59;
        *pfVar6 = fVar135 * fVar67;
        pfVar6[1] = fVar54;
        uVar16 = local_110._4_4_;
        if (((byte)local_108 >> 6 & 1) == 0) {
          if (local_110._4_4_ != 0xffffffff) {
            uVar16 = local_110._4_4_ & 0x3fffff | *(int *)(lVar36 + 0x17c) << 0x16;
          }
          lVar21 = local_98;
        }
        auVar45._0_4_ = fVar40 * fVar135 * fVar67;
        auVar45._4_4_ = fVar52 * fVar54;
        auVar45._8_4_ = fVar55 * auVar44._0_4_ * fVar67;
        auVar45._12_4_ = fVar104 * fVar59;
        uVar4 = *(uint *)(param_10 + 1);
        auVar60 = NEON_ext(auVar45,auVar45,8,1);
        if (iVar116 <= iVar115) {
          iVar71 = 8;
          if (iVar116 != 0) {
            iVar71 = iVar116 << 1;
          }
          FUN_031749c4(&local_c0,iVar71);
          lVar21 = local_98;
          iVar116 = local_b8;
          iVar70 = iStack_b0;
        }
        iVar69 = iVar69 + 1;
        if (iVar70 == iVar116) {
          iVar70 = 0;
        }
        puVar29 = (uint *)(local_c0 + (long)iVar70 * 0x10);
        iVar70 = iVar70 + 1;
        *puVar29 = uVar16;
        puVar29[1] = uVar38 | iVar65 + uVar37;
        puVar29[2] = uVar4;
        puVar29[3] = (uint)(auVar60._0_4_ + auVar45._0_4_ + auVar45._4_4_);
        iVar115 = iStack_ac + 1;
        auVar46._0_12_ = auVar103._0_12_;
        auVar46._12_4_ = uVar37 | 0x3f000000;
        puVar1 = (undefined8 *)(*param_10 + (long)(int)param_10[1] * 0x20);
        *(int *)(param_10 + 1) = (int)param_10[1] + 1;
        puVar1[1] = CONCAT44(fVar104,fVar55);
        *puVar1 = CONCAT44(fVar52,fVar40);
        puVar1[3] = auVar46._8_8_;
        puVar1[2] = auVar103._0_8_;
        lVar25 = local_c0;
        iStack_b0 = iVar70;
        iStack_ac = iVar115;
      }
      fVar106 = fVar106 + fVar58;
      fVar107 = fVar107 + fVar63;
      fVar91 = fVar91 + fVar41 * fVar58;
      fVar93 = fVar93 + fVar53 * fVar63;
      fVar96 = fVar96 + fVar56 * fVar58;
      fVar97 = fVar97 + fVar57 * fVar63;
      if ((int)sVar5 - 1U == uVar37) goto LAB_03168a88;
      lVar33 = lVar33 + 0x14;
      lVar27 = *(long *)(lVar36 + 0x28);
      uVar37 = uVar37 + 1;
      fVar55 = auVar103._8_4_;
      fVar104 = auVar103._12_4_;
      fVar40 = auVar103._0_4_;
      fVar52 = auVar103._4_4_;
      iVar71 = *(int *)(lVar36 + 0x30);
      lVar26 = lVar26 + 1;
    } while( true );
  }
  fVar91 = 0.0;
  fVar93 = 0.0;
  fVar96 = 0.0;
  fVar97 = 0.0;
  fVar106 = 0.0;
  fVar107 = 0.0;
  iVar115 = 0;
  iVar116 = 0x40;
LAB_03168a88:
  uVar42 = NEON_fmov(0x40400000,4);
  fVar106 = fVar106 * (float)uVar42;
  fVar107 = fVar107 * (float)((ulong)uVar42 >> 0x20);
  auVar101._0_8_ = CONCAT44(fVar107,fVar106);
  auVar101._8_8_ = auVar101._0_8_;
  auVar60 = NEON_frecpe(auVar101,4);
  iVar71 = -(uint)(fVar106 == 0.0);
  iVar65 = -(uint)(fVar107 == 0.0);
  iVar69 = -(uint)(fVar106 == 0.0);
  iVar70 = -(uint)(fVar107 == 0.0);
  auVar75 = NEON_frecps(auVar101,auVar60,4);
  auVar76._0_4_ = auVar60._0_4_ * auVar75._0_4_;
  auVar76._4_4_ = auVar60._4_4_ * auVar75._4_4_;
  auVar76._8_4_ = auVar60._8_4_ * auVar75._8_4_;
  auVar76._12_4_ = auVar60._12_4_ * auVar75._12_4_;
  auVar101 = NEON_frecps(auVar101,auVar76,4);
  fVar91 = fVar91 * auVar76._0_4_ * auVar101._0_4_;
  fVar93 = fVar93 * auVar76._4_4_ * auVar101._4_4_;
  fVar96 = fVar96 * auVar76._8_4_ * auVar101._8_4_;
  fVar97 = fVar97 * auVar76._12_4_ * auVar101._12_4_;
  auVar47._0_8_ =
       CONCAT17((byte)((uint)fVar93 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18),
                CONCAT16((byte)((uint)fVar93 >> 0x10) & ~(byte)((uint)iVar65 >> 0x10),
                         CONCAT15((byte)((uint)fVar93 >> 8) & ~(byte)((uint)iVar65 >> 8),
                                  CONCAT14(SUB41(fVar93,0) & ~(byte)iVar65,
                                           CONCAT13((byte)((uint)fVar91 >> 0x18) &
                                                    ~(byte)((uint)iVar71 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar91 >> 0x10) &
                                                             ~(byte)((uint)iVar71 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar91 >> 8) &
                                                                      ~(byte)((uint)iVar71 >> 8),
                                                                      SUB41(fVar91,0) &
                                                                      ~(byte)iVar71)))))));
  auVar47[8] = SUB41(fVar96,0) & ~(byte)iVar69;
  auVar47[9] = (byte)((uint)fVar96 >> 8) & ~(byte)((uint)iVar69 >> 8);
  auVar47[10] = (byte)((uint)fVar96 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10);
  auVar47[0xb] = (byte)((uint)fVar96 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18);
  auVar47[0xc] = SUB41(fVar97,0) & ~(byte)iVar70;
  auVar47[0xd] = (byte)((uint)fVar97 >> 8) & ~(byte)((uint)iVar70 >> 8);
  auVar47[0xe] = (byte)((uint)fVar97 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10);
  auVar47[0xf] = (byte)((uint)fVar97 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18);
  param_11[1] = auVar47._8_8_;
  *param_11 = auVar47._0_8_;
  lVar27 = (long)DAT_0444b53c;
  lVar26 = *(long *)(lVar20 + 0x38d490);
  if (lVar26 == 0) {
    lVar26 = FUN_0333d16c(0,1);
    *(long *)(lVar20 + 0x38d490) = lVar26;
    lVar21 = local_98;
  }
  puVar15 = PTR_PTR_0434a080;
  if (*(long *)(lVar26 + lVar27 * 8 + 0x18) != 0) {
    FUN_0332a954();
    puVar15 = PTR_PTR_0434a080;
    lVar21 = local_98;
  }
  PTR_PTR_0434a080 = puVar15;
  if (iVar115 != 0) {
    uVar37 = 0;
LAB_03168b2c:
    puVar29 = (uint *)(lVar25 + (long)local_b4 * 0x10);
    fVar104 = (float)puVar29[3];
    uVar38 = *puVar29;
    uVar16 = puVar29[1];
    uVar4 = puVar29[2];
    iVar71 = 0;
    if (local_b4 + 1 != iVar116) {
      iVar71 = local_b4 + 1;
    }
    iVar115 = iVar115 + -1;
    local_b4 = iVar71;
    iStack_ac = iVar115;
    if (0 < (int)uVar37) {
      lVar25 = 0;
      uVar39 = 0;
      puVar29 = (uint *)(local_e0 + 4);
      do {
        if ((puVar29[-1] == uVar38) && (*puVar29 == uVar4)) {
          if ((int)uVar39 < 0) {
            bVar14 = true;
          }
          else {
            if (*(float *)(local_e0 + (lVar25 >> 0x20) * 0xc + 8) <= fVar104)
            goto joined_r0x03168bc0;
            bVar14 = false;
          }
          goto LAB_03168bdc;
        }
        uVar39 = uVar39 + 1;
        lVar25 = lVar25 + 0x100000000;
        puVar29 = puVar29 + 3;
      } while (uVar37 != uVar39);
    }
    bVar14 = true;
    uVar39 = 0xffffffffffffffff;
LAB_03168bdc:
    uVar24 = uVar38 >> 0x16;
    if (uVar24 != (uint)uVar23) {
      lVar25 = *(long *)(*(long *)(param_1 + 0x38) + (ulong)uVar24 * 0xf0);
      uVar122 = *(undefined8 *)(lVar25 + 0x68);
      uVar121 = *(undefined8 *)(lVar25 + 0x60);
      uVar125 = *(undefined8 *)(lVar25 + 0x78);
      uVar123 = *(undefined8 *)(lVar25 + 0x70);
      uVar129 = *(undefined8 *)(lVar25 + 0x88);
      uVar127 = *(undefined8 *)(lVar25 + 0x80);
      uVar133 = *(undefined8 *)(lVar25 + 0x98);
      uVar131 = *(undefined8 *)(lVar25 + 0x90);
      lVar36 = *(long *)(lVar25 + 0x20);
      uVar23 = (ulong)uVar24;
    }
    uVar30 = (ulong)uVar38 & 0x3fffff;
    lVar26 = (long)(int)uVar4;
    iVar71 = *(int *)(lVar36 + 0x50);
    lVar25 = (long)iVar71;
    iVar69 = (int)uVar30;
    iVar65 = iVar69 - *(int *)(lVar36 + 0x20);
    if (*(int *)(lVar36 + 0x20) <= iVar69) {
      lVar19 = *(long *)(lVar36 + 0x140) + (long)(iVar71 * iVar65) * 4;
      lVar25 = lVar19 + lVar25 * 4;
      piVar32 = (int *)(*(long *)(lVar36 + 0xd0) + (long)iVar65 * 0x10);
joined_r0x03168c50:
      if (param_2 != (long *)0x0) goto LAB_03169728;
LAB_03168c54:
      lVar25 = local_e0;
      if (bVar14) {
        uVar24 = local_d8._4_4_;
        uVar16 = uVar37 + 1;
        if ((int)uVar37 < (int)(local_d8._4_4_ & 0x3fffffff)) {
        }
        else {
          if (0x3ffffffe < (int)uVar37) {
            FUN_032bd0a8(uVar16);
          }
          uVar24 = (uVar24 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar24) {
            uVar24 = 0x3fffffff;
          }
          uVar22 = uVar16;
          if ((int)uVar16 <= (int)uVar24) {
            uVar22 = uVar24;
          }
          local_e0 = FUN_032bd1d4(puVar15,uVar22,0xc,lVar25,uVar37,(long)&local_d8 + 4);
          lVar21 = local_98;
          uVar37 = (uint)local_d8;
        }
        puVar29 = (uint *)(local_e0 + (long)(int)uVar37 * 0xc);
        local_d8 = CONCAT44(local_d8._4_4_,uVar16);
        *puVar29 = uVar38;
        puVar29[1] = uVar4;
      }
      else {
        puVar29 = (uint *)(local_e0 + (long)(int)uVar39 * 0xc);
      }
      puVar29[2] = (uint)fVar104;
      puVar1 = (undefined8 *)(*param_10 + lVar26 * 0x20);
      iVar71 = *piVar32;
      puVar7 = (undefined8 *)(lVar21 + lVar26 * 0x10);
      uVar42 = *puVar7;
      iVar70 = piVar32[2];
      auVar101 = *(undefined1 (*) [16])(puVar1 + 2);
      iVar65 = *(int *)(lVar36 + 0x30);
      lVar26 = *(long *)(lVar36 + 0x28);
      lVar25 = (long)iVar71;
      iVar69 = iVar71 - iVar65;
      if (iVar71 < iVar65) {
        iVar69 = iVar71;
        if (*(int *)(lVar36 + 0x78) != 0) {
          iVar69 = *(int *)(*(long *)(lVar36 + 0x70) + lVar25 * 4);
        }
        lVar19 = lVar26;
        iVar116 = iVar71;
        if (iVar69 != -1) {
          plVar18 = (long *)(lVar36 + 0xc0);
          goto LAB_03169efc;
        }
      }
      else {
        plVar18 = (long *)(lVar36 + 0xe0);
LAB_03169efc:
        lVar19 = *plVar18;
        lVar21 = local_98;
        iVar116 = iVar69;
      }
      iVar116 = *(int *)(lVar19 + (long)iVar116 * 0x14);
      iVar69 = *(int *)(lVar36 + 0x40);
      plVar18 = (long *)(lVar36 + 0x38);
      if (iVar69 <= iVar116) {
        plVar18 = (long *)(lVar36 + 0xf0);
      }
      iVar77 = 0;
      if (iVar69 <= iVar116) {
        iVar77 = iVar69;
      }
      if ((short)iVar70 != 0) {
        fVar128 = (float)*puVar1;
        fVar68 = auVar101._0_4_ - fVar128;
        fVar130 = (float)((ulong)*puVar1 >> 0x20);
        fVar54 = auVar101._4_4_ - fVar130;
        fVar132 = (float)puVar1[1];
        fVar135 = auVar101._8_4_ - fVar132;
        fVar134 = (float)((ulong)puVar1[1] >> 0x20);
        fVar136 = auVar101._12_4_ - fVar134;
        auVar10._4_4_ = fVar54;
        auVar10._0_4_ = fVar68;
        auVar10._8_4_ = fVar135;
        auVar10._12_4_ = fVar136;
        auVar11._4_4_ = fVar54;
        auVar11._0_4_ = fVar68;
        auVar11._8_4_ = fVar135;
        auVar11._12_4_ = fVar136;
        auVar101 = NEON_ext(auVar10,auVar11,4,1);
        pfVar6 = (float *)(*plVar18 + (long)(iVar116 - iVar77) * 0x10);
        fVar41 = *pfVar6;
        fVar53 = pfVar6[1];
        fVar40 = pfVar6[2];
        uVar37 = (int)uVar23 << 0x16;
        fVar56 = (float)((ulong)uVar121 >> 0x20);
        fVar57 = (float)((ulong)uVar122 >> 0x20);
        fVar63 = (float)((ulong)uVar123 >> 0x20);
        fVar67 = (float)((ulong)uVar125 >> 0x20);
        fVar85 = (float)((ulong)uVar127 >> 0x20);
        fVar98 = (float)((ulong)uVar129 >> 0x20);
        fVar137 = fVar68 * fVar68;
        fVar138 = fVar54 * fVar54;
        auVar12._4_4_ = fVar138;
        auVar12._0_4_ = fVar137;
        auVar12._8_4_ = fVar135 * fVar135;
        auVar12._12_4_ = fVar136 * fVar136;
        auVar13._4_4_ = fVar138;
        auVar13._0_4_ = fVar137;
        auVar13._8_4_ = fVar135 * fVar135;
        auVar13._12_4_ = fVar136 * fVar136;
        auVar60 = NEON_ext(auVar12,auVar13,8,1);
        fVar106 = (float)uVar131 +
                  (float)uVar127 * fVar40 + (float)uVar121 * fVar41 + (float)uVar123 * fVar53;
        fVar124 = (float)((ulong)uVar131 >> 0x20);
        fVar52 = fVar124 + fVar85 * fVar40 + fVar56 * fVar41 + fVar63 * fVar53;
        fVar93 = (float)uVar133 +
                 (float)uVar129 * fVar40 + (float)uVar122 * fVar41 + (float)uVar125 * fVar53;
        fVar126 = (float)((ulong)uVar133 >> 0x20);
        fVar91 = fVar117 * fVar106;
        fVar55 = fVar118 * fVar52;
        fVar96 = fVar119 * fVar93;
        fVar107 = fVar91 + fVar55 + fVar96;
        fVar96 = fVar91 + fVar55 + fVar96;
        fVar106 = fVar106 - fVar117 * fVar107;
        fVar52 = fVar52 - fVar118 * fVar96;
        fVar93 = fVar93 - fVar119 * fVar107;
        fVar58 = (float)uVar42;
        fVar91 = fVar58 * fVar106;
        fVar59 = (float)((ulong)uVar42 >> 0x20);
        fVar107 = fVar59 * fVar52;
        fVar64 = (float)puVar7[1];
        fVar55 = fVar64 * fVar93;
        fVar97 = fVar91 + fVar107 + fVar55;
        uVar42 = CONCAT44(fVar52,fVar106);
        uVar79 = CONCAT44((fVar126 + fVar98 * fVar40 + fVar57 * fVar41 + fVar67 * fVar53) -
                          fVar120 * fVar96,fVar93);
        uVar100 = CONCAT44(fVar91 + fVar107 + fVar55,fVar97);
        bVar14 = fVar104 < fVar97;
        do {
          iVar69 = *(int *)(lVar36 + 0x60);
          lVar19 = (long)iVar69;
          uVar38 = (uint)lVar25;
          if (lVar25 < iVar65) {
            uVar16 = uVar38;
            if (*(int *)(lVar36 + 0x78) != 0) {
              uVar16 = *(uint *)(*(long *)(lVar36 + 0x70) + lVar25 * 4);
            }
            if (uVar16 == 0xffffffff) {
              lVar27 = *(long *)(lVar36 + 0x58) + lVar25 * lVar19 * 4;
              lVar19 = lVar27 + lVar19 * 4;
              lVar26 = lVar26 + lVar25 * 0x14;
            }
            else {
              lVar27 = *(long *)(lVar36 + 0x130) + (long)(int)(uVar16 * iVar69) * 4;
              lVar19 = lVar27 + lVar19 * 4;
              lVar26 = *(long *)(lVar36 + 0xc0) + (long)(int)uVar16 * 0x14;
            }
          }
          else {
            lVar27 = *(long *)(lVar36 + 0x150) + (long)(int)(iVar69 * (uVar38 - iVar65)) * 4;
            lVar19 = lVar27 + lVar19 * 4;
            lVar26 = *(long *)(lVar36 + 0xe0) + (long)(int)(uVar38 - iVar65) * 0x14;
          }
          iVar65 = *(int *)(lVar26 + 4);
          iVar69 = *(int *)(lVar36 + 0x40);
          plVar18 = (long *)(lVar36 + 0x38);
          if (iVar69 <= iVar65) {
            plVar18 = (long *)(lVar36 + 0xf0);
          }
          iVar115 = 0;
          if (iVar69 <= iVar65) {
            iVar115 = iVar69;
          }
          pfVar6 = (float *)(*plVar18 + (long)(iVar65 - iVar115) * 0x10);
          fVar41 = *pfVar6;
          fVar53 = pfVar6[1];
          fVar40 = pfVar6[2];
          fVar106 = (float)uVar131 +
                    (float)uVar127 * fVar40 + (float)uVar121 * fVar41 + (float)uVar123 * fVar53;
          fVar91 = fVar124 + fVar85 * fVar40 + fVar56 * fVar41 + fVar63 * fVar53;
          fVar52 = (float)uVar133 +
                   (float)uVar129 * fVar40 + (float)uVar122 * fVar41 + (float)uVar125 * fVar53;
          fVar107 = fVar117 * fVar106;
          fVar55 = fVar118 * fVar91;
          fVar96 = fVar119 * fVar52;
          fVar93 = fVar107 + fVar55 + fVar96;
          fVar96 = fVar107 + fVar55 + fVar96;
          fVar106 = fVar106 - fVar117 * fVar93;
          fVar91 = fVar91 - fVar118 * fVar96;
          uVar108 = CONCAT44(fVar91,fVar106);
          fVar52 = fVar52 - fVar119 * fVar93;
          fVar107 = (fVar126 + fVar98 * fVar40 + fVar57 * fVar41 + fVar67 * fVar53) -
                    fVar120 * fVar96;
          uVar109 = CONCAT44(fVar107,fVar52);
          fVar41 = fVar58 * fVar106;
          fVar53 = fVar59 * fVar91;
          fVar40 = fVar64 * fVar52;
          fVar93 = fVar41 + fVar53 + fVar40;
          fVar40 = fVar41 + fVar53 + fVar40;
          if ((bool)(bVar14 | fVar104 < fVar93)) {
            fVar110 = (float)uVar42 - fVar106;
            fVar111 = (float)((ulong)uVar42 >> 0x20) - fVar91;
            fVar112 = (float)uVar79 - fVar52;
            fVar113 = (float)((ulong)uVar79 >> 0x20) - fVar107;
            auVar8._4_4_ = fVar111;
            auVar8._0_4_ = fVar110;
            auVar8._8_4_ = fVar112;
            auVar8._12_4_ = fVar113;
            auVar9._4_4_ = fVar111;
            auVar9._0_4_ = fVar110;
            auVar9._8_4_ = fVar112;
            auVar9._12_4_ = fVar113;
            auVar75 = NEON_ext(auVar8,auVar9,4,1);
            uVar86 = NEON_fmov(0x3f800000,4);
            fVar41 = fVar128 - fVar106;
            fVar53 = fVar130 - fVar91;
            fVar55 = fVar132 - fVar52;
            fVar96 = fVar134 - fVar107;
            fVar97 = fVar68 * auVar75._0_4_ - auVar101._0_4_ * fVar110;
            fVar66 = fVar54 * auVar75._4_4_ - auVar101._4_4_ * fVar111;
            auVar62._0_8_ = CONCAT44(fVar66,fVar97);
            auVar62._8_4_ = fVar135 * fVar110 - fVar68 * fVar112;
            auVar62._12_4_ = fVar136 * fVar111 - fVar54 * fVar113;
            auVar75 = NEON_ext(auVar62,auVar62,4,1);
            uVar80 = NEON_ext(auVar75._0_8_,auVar62._0_8_,4,1);
            fVar84 = auVar75._0_4_;
            fVar94 = auVar75._4_4_;
            fVar72 = fVar97 * fVar97 + fVar84 * fVar84 + fVar94 * fVar94;
            fVar78 = fVar97 * fVar97 + fVar84 * fVar84 + fVar94 * fVar94;
            uVar73 = CONCAT44(fVar78,fVar72);
            uVar92 = NEON_frecpe(uVar73,4);
            uVar99 = NEON_frecps(uVar73,uVar92,4);
            auVar81._0_4_ = auVar101._0_4_ * fVar84 - fVar68 * (float)uVar80;
            auVar81._4_4_ = auVar101._4_4_ * fVar94 - fVar54 * (float)((ulong)uVar80 >> 0x20);
            auVar81._8_4_ = fVar68 * fVar97 - fVar135 * fVar84;
            auVar81._12_4_ = fVar54 * fVar66 - fVar136 * fVar94;
            auVar75 = NEON_ext(auVar81,auVar81,4,1);
            fVar66 = (float)uVar92 * (float)uVar99;
            fVar94 = (float)((ulong)uVar92 >> 0x20) * (float)((ulong)uVar99 >> 0x20);
            iVar65 = -(uint)(fVar72 == 0.0);
            iVar69 = -(uint)(fVar78 == 0.0);
            uVar73 = NEON_frecps(uVar73,CONCAT44(fVar94,fVar66),4);
            uVar39 = CONCAT17(~(byte)((uint)iVar69 >> 0x18),
                              CONCAT16(~(byte)((uint)iVar69 >> 0x10),
                                       CONCAT15(~(byte)((uint)iVar69 >> 8),
                                                CONCAT14(~(byte)iVar69,
                                                         CONCAT13(~(byte)((uint)iVar65 >> 0x18),
                                                                  CONCAT12(~(byte)((uint)iVar65 >>
                                                                                  0x10),
                                                                           CONCAT11(~(byte)((uint)
                                                  iVar65 >> 8),~(byte)iVar65)))))));
            fVar97 = fVar41 * auVar75._0_4_;
            fVar84 = fVar53 * auVar75._4_4_;
            auVar102._0_4_ = fVar110 * fVar110;
            auVar102._4_4_ = fVar111 * fVar111;
            auVar102._8_4_ = fVar112 * fVar112;
            auVar102._12_4_ = fVar113 * fVar113;
            uVar30 = CONCAT44(fVar94 * (float)((ulong)uVar73 >> 0x20),fVar66 * (float)uVar73) &
                     uVar39;
            auVar87._0_4_ = fVar41 * fVar110;
            auVar87._4_4_ = fVar53 * fVar111;
            auVar87._8_4_ = fVar55 * fVar112;
            auVar87._12_4_ = fVar96 * fVar113;
            auVar103 = NEON_ext(auVar102,auVar102,8,1);
            auVar75 = NEON_ext(auVar87,auVar87,8,1);
            auVar82._0_4_ = fVar68 * fVar41;
            auVar82._4_4_ = fVar54 * fVar53;
            auVar82._8_4_ = fVar135 * fVar55;
            auVar82._12_4_ = fVar136 * fVar96;
            auVar88._0_4_ = auVar103._0_4_ + auVar102._0_4_ + auVar102._4_4_;
            auVar88._4_4_ = auVar75._0_4_ + auVar87._0_4_ + auVar87._4_4_;
            auVar75 = NEON_ext(auVar82,auVar82,8,1);
            fVar66 = auVar60._0_4_ + fVar137 + fVar138;
            fVar72 = auVar75._0_4_ + auVar82._0_4_ + auVar82._4_4_;
            auVar88._12_4_ = fVar72;
            auVar88._8_4_ = fVar66;
            uVar73 = NEON_fminnm(CONCAT44((float)(uVar30 >> 0x20) *
                                          (fVar55 * auVar81._0_4_ + fVar97 + fVar84),
                                          (float)uVar30 * (fVar55 * auVar81._0_4_ + fVar97 + fVar84)
                                         ),uVar86,4);
            auVar75 = NEON_frecpe(auVar88,4);
            auVar103 = NEON_frecps(auVar88,auVar75,4);
            auVar114._0_4_ = auVar75._0_4_ * auVar103._0_4_;
            auVar114._4_4_ = auVar75._4_4_ * auVar103._4_4_;
            auVar114._8_4_ = auVar75._8_4_ * auVar103._8_4_;
            auVar114._12_4_ = auVar75._12_4_ * auVar103._12_4_;
            uVar74 = NEON_fmax(uVar73,0,4);
            iVar65 = -(uint)(auVar88._0_4_ == 0.0);
            iVar69 = -(uint)(auVar88._4_4_ == 0.0);
            iVar115 = -(uint)(fVar66 == 0.0);
            iVar116 = -(uint)(fVar72 == 0.0);
            fVar78 = fVar135 * fVar112 + fVar68 * fVar110 + fVar54 * fVar111;
            fVar95 = fVar135 * fVar112 + fVar68 * fVar110 + fVar54 * fVar111;
            auVar75 = NEON_frecps(auVar88,auVar114,4);
            fVar97 = auVar114._0_4_ * auVar75._0_4_;
            fVar66 = auVar114._4_4_ * auVar75._4_4_;
            fVar84 = auVar114._8_4_ * auVar75._8_4_;
            fVar94 = auVar114._12_4_ * auVar75._12_4_;
            auVar89._0_4_ =
                 (float)CONCAT13((byte)((uint)fVar97 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18),
                                 CONCAT12((byte)((uint)fVar97 >> 0x10) &
                                          ~(byte)((uint)iVar65 >> 0x10),
                                          CONCAT11((byte)((uint)fVar97 >> 8) &
                                                   ~(byte)((uint)iVar65 >> 8),
                                                   SUB41(fVar97,0) & ~(byte)iVar65)));
            auVar89[4] = SUB41(fVar66,0) & ~(byte)iVar69;
            auVar89[5] = (byte)((uint)fVar66 >> 8) & ~(byte)((uint)iVar69 >> 8);
            auVar89[6] = (byte)((uint)fVar66 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10);
            auVar89[7] = (byte)((uint)fVar66 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18);
            auVar89[8] = SUB41(fVar84,0) & ~(byte)iVar115;
            auVar89[9] = (byte)((uint)fVar84 >> 8) & ~(byte)((uint)iVar115 >> 8);
            auVar89[10] = (byte)((uint)fVar84 >> 0x10) & ~(byte)((uint)iVar115 >> 0x10);
            auVar89[0xb] = (byte)((uint)fVar84 >> 0x18) & ~(byte)((uint)iVar115 >> 0x18);
            auVar89[0xc] = SUB41(fVar94,0) & ~(byte)iVar116;
            auVar89[0xd] = (byte)((uint)fVar94 >> 8) & ~(byte)((uint)iVar116 >> 8);
            auVar89[0xe] = (byte)((uint)fVar94 >> 0x10) & ~(byte)((uint)iVar116 >> 0x10);
            auVar89[0xf] = (byte)((uint)fVar94 >> 0x18) & ~(byte)((uint)iVar116 >> 0x18);
            auVar75 = NEON_ext(auVar89,auVar89,8,1);
            fVar97 = ((float)uVar74 * fVar78 - fVar72) * auVar75._0_4_;
            fVar66 = ((float)(uVar74 >> 0x20) * fVar95 - fVar72) * auVar75._0_4_;
            uVar73 = NEON_fminnm(CONCAT44(fVar66,fVar97),uVar86,4);
            uVar73 = NEON_fmax(uVar73,0,4);
            fVar84 = (float)uVar73;
            fVar72 = (float)((ulong)uVar73 >> 0x20);
            uVar86 = NEON_fminnm(CONCAT44((auVar88._4_4_ + fVar95 * fVar72) * auVar89._0_4_,
                                          (auVar88._4_4_ + fVar78 * fVar84) * auVar89._0_4_),uVar86,
                                 4);
            uVar30 = NEON_fmax(uVar86,0,4);
            uVar30 = uVar30 ^ (uVar30 ^ uVar74) &
                              CONCAT44(-(uint)(fVar72 == fVar66),-(uint)(fVar84 == fVar97)) & uVar39
            ;
            fVar97 = (float)uVar30;
            fVar66 = (float)(uVar30 >> 0x20);
            fVar41 = fVar68 * fVar84 + (fVar41 - fVar110 * fVar97);
            fVar53 = fVar54 * fVar72 + (fVar53 - fVar111 * fVar66);
            fVar55 = fVar135 * fVar84 + (fVar55 - fVar112 * fVar97);
            fVar96 = fVar136 * fVar72 + (fVar96 - fVar113 * fVar66);
            auVar48._0_4_ = fVar41 * fVar41;
            auVar48._4_4_ = fVar53 * fVar53;
            auVar48._8_4_ = fVar55 * fVar55;
            auVar48._12_4_ = fVar96 * fVar96;
            auVar75 = NEON_ext(auVar48,auVar48,8,1);
            if (auVar48._0_4_ + auVar48._4_4_ + auVar75._0_4_ <= (float)uVar105 * (float)uVar105) {
              if (*(int *)(lVar26 + 8) == -1) {
LAB_03169070:
                lVar26 = local_100;
                uVar39 = local_f8 & 0xffffffff;
                if (0 < (int)local_f8) {
                  uVar30 = 0;
                  do {
                    if (*(uint *)(local_100 + uVar30 * 4) == (uVar37 | uVar38)) {
                      if (-1 < (int)uVar30) goto LAB_0316904c;
                      break;
                    }
                    uVar30 = uVar30 + 1;
                  } while (uVar39 != uVar30);
                }
                if (((float)uVar100 < fVar104) || (fVar93 < fVar104)) {
                  fVar41 = (float)uVar100 - fVar93;
                  fVar53 = (float)((ulong)uVar100 >> 0x20) - fVar40;
                  uVar100 = CONCAT44(fVar53,fVar41);
                  uVar86 = NEON_frecpe(uVar100,4);
                  uVar73 = NEON_frecps(uVar100,uVar86,4);
                  fVar55 = (float)uVar86 * (float)uVar73;
                  fVar96 = (float)((ulong)uVar86 >> 0x20) * (float)((ulong)uVar73 >> 0x20);
                  iVar65 = -(uint)(fVar41 == 0.0);
                  iVar69 = -(uint)(fVar53 == 0.0);
                  uVar100 = NEON_frecps(uVar100,CONCAT44(fVar96,fVar55),4);
                  uVar39 = CONCAT44(fVar96 * (float)((ulong)uVar100 >> 0x20),fVar55 * (float)uVar100
                                   ) &
                           CONCAT17(~(byte)((uint)iVar69 >> 0x18),
                                    CONCAT16(~(byte)((uint)iVar69 >> 0x10),
                                             CONCAT15(~(byte)((uint)iVar69 >> 8),
                                                      CONCAT14(~(byte)iVar69,
                                                               CONCAT13(~(byte)((uint)iVar65 >> 0x18
                                                                               ),CONCAT12(~(byte)((
                                                  uint)iVar65 >> 0x10),
                                                  CONCAT11(~(byte)((uint)iVar65 >> 8),~(byte)iVar65)
                                                  ))))));
                  fVar41 = (fVar104 - fVar93) * (float)uVar39;
                  fVar53 = (fVar104 - fVar40) * (float)(uVar39 >> 0x20);
                  auVar50._0_8_ = CONCAT44(fVar91 + fVar111 * fVar53,fVar106 + fVar110 * fVar41);
                  auVar50._8_4_ = fVar52 + fVar112 * fVar41;
                  auVar50._12_4_ = fVar107 + fVar113 * fVar53;
                  auVar49 = auVar50;
                  if (fVar104 <= fVar93) {
                    uVar79 = auVar50._8_8_;
                    auVar49._8_8_ = uVar109;
                    auVar49._0_8_ = uVar108;
                    uVar42 = auVar50._0_8_;
                  }
                }
                else {
                  uVar24 = local_f8._4_4_;
                  uVar16 = (int)local_f8 + 1;
                  if ((int)local_f8 < (int)(local_f8._4_4_ & 0x3fffffff)) {
                  }
                  else {
                    if (0x3ffffffe < (int)local_f8) {
                      FUN_032bd0a8(uVar16);
                    }
                    uVar24 = (uVar24 & 0x3fffffff) << 1;
                    if (0x3ffffffe < uVar24) {
                      uVar24 = 0x3fffffff;
                    }
                    uVar22 = uVar16;
                    if ((int)uVar16 <= (int)uVar24) {
                      uVar22 = uVar24;
                    }
                    local_100 = FUN_032bd1d4(puVar15,uVar22,4,lVar26,uVar39,(long)&local_f8 + 4);
                    lVar21 = local_98;
                  }
                  auVar49._8_8_ = uVar109;
                  auVar49._0_8_ = uVar108;
                  *(uint *)(local_100 + (long)(int)local_f8 * 4) = uVar37 | uVar38;
                  local_f8 = CONCAT44(local_f8._4_4_,uVar16);
                }
                iVar69 = (int)param_9[1];
                lVar26 = *param_9;
                iVar65 = iVar69 + 1;
                if ((int)(*(uint *)((long)param_9 + 0xc) & 0x3fffffff) <= iVar69) {
                  lVar26 = FUN_0317493c(puVar15,iVar65,lVar26,iVar69,(long)param_9 + 0xc);
                  iVar69 = (int)param_9[1];
                  *param_9 = lVar26;
                  lVar21 = local_98;
                }
                puVar1 = (undefined8 *)(lVar26 + (long)iVar69 * 0x20);
                *(int *)(param_9 + 1) = iVar65;
                puVar1[1] = uVar79;
                *puVar1 = uVar42;
                puVar1[3] = auVar49._8_8_;
                puVar1[2] = auVar49._0_8_;
              }
              else {
                bVar2 = (*(byte *)(lVar26 + 0x10) >> 5 ^ 0xff) & 1;
                if ((param_2 == (long *)0x0) || (bVar2 == 0)) {
                  if (bVar2 == 0) goto LAB_03169070;
                }
                else {
                  lVar21 = nn::os::GetSystemTick();
                  uVar16 = (**(code **)(*param_2 + 0x28))
                                     (param_2,param_1,uVar37 | uVar38,lVar26,lVar27,lVar19);
                  lVar19 = nn::os::GetSystemTick();
                  *(long *)(param_12 + 0x20) = (lVar19 - lVar21) + *(long *)(param_12 + 0x20);
                  *(int *)(param_12 + 0x28) = *(int *)(param_12 + 0x28) + 1;
                  lVar21 = local_98;
                  if ((uVar16 & 1) == 0) goto LAB_03169070;
                }
                uVar16 = *(uint *)(lVar26 + 0xc);
                if (((*(byte *)(lVar26 + 0x10) >> 6 & 1) == 0) &&
                   (lVar21 = local_98, uVar16 != 0xffffffff)) {
                  uVar16 = uVar16 & 0x3fffff | *(int *)(lVar36 + 0x17c) << 0x16;
                }
                if (uVar16 != (uint)param_3) {
                  uVar42 = NEON_fmin(uVar100,CONCAT44(fVar40,fVar93),4);
                  uVar42 = NEON_fmax(uVar42,CONCAT44(fVar104,fVar104),4);
                  if (local_b8 <= iStack_ac) {
                    iVar65 = 8;
                    if (local_b8 != 0) {
                      iVar65 = local_b8 << 1;
                    }
                    FUN_031749c4(&local_c0,iVar65);
                    lVar21 = local_98;
                  }
                  if (iStack_b0 == local_b8) {
                    iStack_b0 = 0;
                  }
                  puVar29 = (uint *)(local_c0 + (long)iStack_b0 * 0x10);
                  iStack_b0 = iStack_b0 + 1;
                  *puVar29 = uVar16;
                  puVar29[1] = uVar37 | uVar38;
                  puVar29[2] = uVar4;
                  puVar29[3] = (uint)uVar42;
                  iStack_ac = iStack_ac + 1;
                }
              }
            }
          }
LAB_0316904c:
          lVar25 = lVar25 + 1;
          if (iVar71 + (short)iVar70 == (int)lVar25) goto LAB_031691ec;
          lVar26 = *(long *)(lVar36 + 0x28);
          iVar65 = *(int *)(lVar36 + 0x30);
          uVar42 = uVar108;
          uVar79 = uVar109;
          uVar100 = CONCAT44(fVar40,fVar93);
          bVar14 = fVar104 < fVar93;
        } while( true );
      }
      goto LAB_031691f0;
    }
    if (*(int *)(lVar36 + 0x98) == 0) {
      iVar65 = iVar69;
    }
    else {
      iVar65 = *(int *)(*(long *)(lVar36 + 0x90) + uVar30 * 4);
      if (iVar65 == -1) {
        lVar19 = *(long *)(lVar36 + 0x48) + (long)(iVar71 * iVar69) * 4;
        lVar25 = lVar19 + lVar25 * 4;
        piVar32 = (int *)(*(long *)(lVar36 + 0x18) + uVar30 * 0x10);
        goto joined_r0x03168c50;
      }
    }
    lVar19 = *(long *)(lVar36 + 0x120) + (long)(iVar65 * iVar71) * 4;
    lVar25 = lVar19 + lVar25 * 4;
    piVar32 = (int *)(*(long *)(lVar36 + 0xb0) + (long)iVar65 * 0x10);
    if (param_2 == (long *)0x0) goto LAB_03168c54;
LAB_03169728:
    lVar27 = nn::os::GetSystemTick();
    uVar30 = (**(code **)(*param_2 + 0x20))(param_2,param_1,(ulong)uVar38,piVar32,lVar19,lVar25);
    lVar19 = nn::os::GetSystemTick();
    lVar25 = local_100;
    *(long *)(param_12 + 0x20) = (lVar19 - lVar27) + *(long *)(param_12 + 0x20);
    *(int *)(param_12 + 0x28) = *(int *)(param_12 + 0x28) + 1;
    lVar21 = local_98;
    if ((uVar30 & 1) != 0) goto LAB_03168c54;
    uVar39 = (ulong)uVar16 & 0x3fffff;
    lVar19 = *(long *)(*(long *)(param_1 + 0x38) + (ulong)(uVar16 >> 0x16) * 0xf0);
    lVar27 = *(long *)(lVar19 + 0x20);
    if ((int)uVar39 < *(int *)(lVar27 + 0x30)) {
      if (*(int *)(lVar27 + 0x78) != 0) {
        uVar37 = *(uint *)(*(long *)(lVar27 + 0x70) + uVar39 * 4);
        if (uVar37 == 0xffffffff) {
          piVar32 = (int *)(*(long *)(lVar27 + 0x28) + uVar39 * 0x14);
          goto LAB_03169828;
        }
        uVar39 = (ulong)uVar37;
      }
      piVar32 = (int *)(*(long *)(lVar27 + 0xc0) + (long)(int)uVar39 * 0x14);
    }
    else {
      piVar32 = (int *)(*(long *)(lVar27 + 0xe0) +
                       (long)((int)uVar39 - *(int *)(lVar27 + 0x30)) * 0x14);
    }
LAB_03169828:
    iVar69 = *(int *)(lVar27 + 0x40);
    iVar71 = *piVar32;
    iVar65 = piVar32[1];
    auVar101 = *(undefined1 (*) [16])(lVar19 + 0x60);
    auVar75 = *(undefined1 (*) [16])(lVar19 + 0x80);
    auVar60 = *(undefined1 (*) [16])(lVar19 + 0x90);
    plVar18 = (long *)(lVar27 + 0x38);
    if (iVar69 <= iVar71) {
      plVar18 = (long *)(lVar27 + 0xf0);
    }
    iVar70 = 0;
    if (iVar69 <= iVar71) {
      iVar70 = iVar69;
    }
    plVar3 = (long *)(lVar27 + 0x38);
    if (iVar69 <= iVar65) {
      plVar3 = (long *)(lVar27 + 0xf0);
    }
    iVar116 = 0;
    if (iVar69 <= iVar65) {
      iVar116 = iVar69;
    }
    auVar103 = *(undefined1 (*) [16])(local_98 + lVar26 * 0x10);
    auVar61 = *(undefined1 (*) [16])(*plVar18 + (long)(iVar71 - iVar70) * 0x10);
    uVar39 = local_f8 & 0xffffffff;
    auVar43 = *(undefined1 (*) [16])(*plVar3 + (long)(iVar65 - iVar116) * 0x10);
    if (0 < (int)local_f8) {
      uVar30 = 0;
      do {
        if (*(uint *)(local_100 + uVar30 * 4) == uVar16) {
          if (-1 < (int)uVar30) goto LAB_031699b4;
          break;
        }
        uVar30 = uVar30 + 1;
      } while (uVar39 != uVar30);
    }
    fVar97 = auVar61._0_4_;
    fVar57 = auVar61._4_4_;
    fVar107 = (float)*(undefined8 *)(lVar19 + 0x70);
    fVar93 = (float)((ulong)*(undefined8 *)(lVar19 + 0x70) >> 0x20);
    fVar55 = (float)*(undefined8 *)(lVar19 + 0x78);
    fVar98 = (float)((ulong)*(undefined8 *)(lVar19 + 0x78) >> 0x20);
    fVar41 = auVar43._0_4_;
    fVar40 = auVar43._4_4_;
    fVar91 = auVar43._8_4_;
    fVar67 = auVar61._8_4_;
    fVar53 = auVar60._0_4_ + auVar75._0_4_ * fVar91 + auVar101._0_4_ * fVar41 + fVar107 * fVar40;
    fVar106 = auVar60._4_4_ + auVar75._4_4_ * fVar91 + auVar101._4_4_ * fVar41 + fVar93 * fVar40;
    fVar52 = auVar60._8_4_ + auVar75._8_4_ * fVar91 + auVar101._8_4_ * fVar41 + fVar55 * fVar40;
    fVar56 = auVar60._0_4_ + auVar75._0_4_ * fVar67 + auVar101._0_4_ * fVar97 + fVar107 * fVar57;
    fVar63 = auVar60._4_4_ + auVar75._4_4_ * fVar67 + auVar101._4_4_ * fVar97 + fVar93 * fVar57;
    fVar85 = auVar60._8_4_ + auVar75._8_4_ * fVar67 + auVar101._8_4_ * fVar97 + fVar55 * fVar57;
    fVar107 = fVar117 * fVar53;
    fVar55 = fVar118 * fVar106;
    fVar96 = fVar119 * fVar52;
    fVar93 = fVar107 + fVar55 + fVar96;
    fVar96 = fVar107 + fVar55 + fVar96;
    auVar90._0_4_ = fVar53 - fVar117 * fVar93;
    auVar90._4_4_ = fVar106 - fVar118 * fVar96;
    auVar90._8_4_ = fVar52 - fVar119 * fVar93;
    auVar90._12_4_ =
         (auVar60._12_4_ + auVar75._12_4_ * fVar91 + auVar101._12_4_ * fVar41 + fVar98 * fVar40) -
         fVar120 * fVar96;
    fVar41 = fVar117 * fVar56;
    fVar40 = fVar118 * fVar63;
    fVar106 = fVar119 * fVar85;
    fVar53 = fVar41 + fVar40 + fVar106;
    fVar106 = fVar41 + fVar40 + fVar106;
    uStack_1a8 = auVar90._8_8_;
    fVar56 = fVar56 - fVar117 * fVar53;
    fVar63 = fVar63 - fVar118 * fVar106;
    auVar83._0_8_ = CONCAT44(fVar63,fVar56);
    auVar83._8_4_ = fVar85 - fVar119 * fVar53;
    auVar83._12_4_ =
         (auVar60._12_4_ + auVar75._12_4_ * fVar67 + auVar101._12_4_ * fVar97 + fVar98 * fVar57) -
         fVar120 * fVar106;
    fVar53 = auVar103._0_4_ * auVar90._0_4_;
    fVar52 = auVar103._4_4_ * auVar90._4_4_;
    fVar107 = auVar103._8_4_ * auVar90._8_4_;
    fVar41 = auVar103._0_4_ * fVar56;
    fVar40 = auVar103._4_4_ * fVar63;
    fVar106 = auVar103._8_4_ * auVar83._8_4_;
    fVar91 = fVar53 + fVar52 + fVar107;
    fVar107 = fVar53 + fVar52 + fVar107;
    fVar53 = fVar41 + fVar40 + fVar106;
    local_1e0 = auVar83._0_8_;
    uStack_1d8 = auVar83._8_8_;
    if ((fVar91 < fVar104) || (fVar53 < fVar104)) {
      fVar53 = fVar53 - fVar91;
      fVar41 = (fVar41 + fVar40 + fVar106) - fVar107;
      uVar42 = CONCAT44(fVar41,fVar53);
      uVar79 = NEON_frecpe(uVar42,4);
      uVar100 = NEON_frecps(uVar42,uVar79,4);
      fVar40 = (float)uVar79 * (float)uVar100;
      fVar106 = (float)((ulong)uVar79 >> 0x20) * (float)((ulong)uVar100 >> 0x20);
      iVar71 = -(uint)(fVar53 == 0.0);
      iVar65 = -(uint)(fVar41 == 0.0);
      uVar42 = NEON_frecps(uVar42,CONCAT44(fVar106,fVar40),4);
      uVar39 = CONCAT44(fVar106 * (float)((ulong)uVar42 >> 0x20),fVar40 * (float)uVar42) &
               CONCAT17(~(byte)((uint)iVar65 >> 0x18),
                        CONCAT16(~(byte)((uint)iVar65 >> 0x10),
                                 CONCAT15(~(byte)((uint)iVar65 >> 8),
                                          CONCAT14(~(byte)iVar65,
                                                   CONCAT13(~(byte)((uint)iVar71 >> 0x18),
                                                            CONCAT12(~(byte)((uint)iVar71 >> 0x10),
                                                                     CONCAT11(~(byte)((uint)iVar71
                                                                                     >> 8),
                                                                              ~(byte)iVar71)))))));
      fVar41 = (fVar104 - fVar91) * (float)uVar39;
      fVar53 = (fVar104 - fVar107) * (float)(uVar39 >> 0x20);
      local_1b0 = auVar90._0_4_ + (fVar56 - auVar90._0_4_) * fVar41;
      fStack_1ac = auVar90._4_4_ + (fVar63 - auVar90._4_4_) * fVar53;
      auVar51._0_8_ = CONCAT44(fStack_1ac,local_1b0);
      auVar51._8_4_ = auVar90._8_4_ + (auVar83._8_4_ - auVar90._8_4_) * fVar41;
      auVar51._12_4_ = auVar90._12_4_ + (auVar83._12_4_ - auVar90._12_4_) * fVar53;
      if (fVar104 <= fVar91) {
        local_1e0 = auVar51._0_8_;
        uStack_1d8 = auVar51._8_8_;
        local_1b0 = auVar90._0_4_;
        fStack_1ac = auVar90._4_4_;
      }
      else {
        uStack_1a8 = auVar51._8_8_;
      }
    }
    else {
      uVar38 = local_f8._4_4_;
      uVar37 = (int)local_f8 + 1;
      if ((int)(local_f8._4_4_ & 0x3fffffff) <= (int)local_f8) {
        if (0x3ffffffe < (int)local_f8) {
          FUN_032bd0a8(uVar37);
        }
        uVar38 = (uVar38 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar38) {
          uVar38 = 0x3fffffff;
        }
        uVar4 = uVar37;
        if ((int)uVar37 <= (int)uVar38) {
          uVar4 = uVar38;
        }
        local_100 = FUN_032bd1d4(puVar15,uVar4,4,lVar25,uVar39,(long)&local_f8 + 4);
      }
      *(uint *)(local_100 + (long)(int)local_f8 * 4) = uVar16;
      local_f8 = CONCAT44(local_f8._4_4_,uVar37);
      local_1b0 = auVar90._0_4_;
      fStack_1ac = auVar90._4_4_;
    }
    iVar65 = (int)param_9[1];
    lVar25 = *param_9;
    iVar71 = iVar65 + 1;
    if ((int)(*(uint *)((long)param_9 + 0xc) & 0x3fffffff) <= iVar65) {
      lVar25 = FUN_0317493c(puVar15,iVar71,lVar25,iVar65,(long)param_9 + 0xc);
      *param_9 = lVar25;
      iVar65 = (int)param_9[1];
    }
    puVar1 = (undefined8 *)(lVar25 + (long)iVar65 * 0x20);
    *(int *)(param_9 + 1) = iVar71;
    puVar1[1] = uStack_1d8;
    *puVar1 = local_1e0;
    puVar1[3] = uStack_1a8;
    puVar1[2] = CONCAT44(fStack_1ac,local_1b0);
LAB_031699b4:
    lVar26 = (long)DAT_0444b53c;
    lVar25 = *(long *)(lVar20 + 0x38d490);
    if (lVar25 == 0) {
      lVar25 = FUN_0333d16c(0,1);
      *(long *)(lVar20 + 0x38d490) = lVar25;
    }
    if (*(long *)(lVar25 + lVar26 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    lVar21 = local_98;
    if (iVar115 != 0) goto LAB_03168bc4;
    goto LAB_03169a14;
  }
  iVar65 = 0;
  iVar71 = 0;
  lVar25 = lVar19;
LAB_03169a24:
  iVar69 = local_e8;
  *(int *)(param_12 + 0x30) = *(int *)(param_12 + 0x30) + (int)param_9[1];
  *(int *)(param_12 + 0x34) = *(int *)(param_12 + 0x34) + iVar71;
  *(int *)(param_12 + 0x38) = *(int *)(param_12 + 0x38) + iVar65;
  if (lVar25 == lVar19) {
    local_f8 = local_f8 & 0xffffffff00000000;
  }
  lVar26 = *(long *)(lVar20 + 0x38d490);
  if (lVar26 == 0) {
    lVar26 = FUN_0333d16c(0,1);
    *(long *)(lVar20 + 0x38d490) = lVar26;
    lVar21 = local_98;
  }
  lVar26 = *(long *)(lVar26 + 8);
  uVar23 = (ulong)(int)(iVar69 * 4 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar26 + 0x10) < uVar23) || (*(long *)(lVar26 + 0x18) != uVar23 + lVar25)) ||
     (*(long *)(lVar26 + 0x28) == lVar25)) {
    if (lVar25 != 0) {
      if (*(ulong *)(lVar26 + 0x10) < uVar23) {
        *(int *)(*(long *)(lVar26 + 8) + 0x20) = *(int *)(*(long *)(lVar26 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar26 + 0x40) + 0x18))(*(long **)(lVar26 + 0x40),lVar25);
        lVar21 = local_98;
      }
      else {
        if (*(long *)(lVar26 + 0x18) == uVar23 + lVar25) {
          *(long *)(lVar26 + 0x18) = lVar25;
          FUN_032ce944();
        }
        else {
          FUN_032ceaf0(lVar26,lVar25);
        }
        lVar21 = local_98;
      }
    }
  }
  else {
    *(long *)(lVar26 + 0x18) = lVar25;
  }
  uVar39 = local_f8;
  puVar15 = PTR_PTR_0434a080;
  uVar23 = local_f8 >> 0x20;
  local_f8 = local_f8 & 0xffffffff00000000;
  if ((lVar19 != 0) && (-1 < (long)uVar39)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))(PTR_PTR_0434a080,lVar19,(int)uVar23 << 2);
    lVar21 = local_98;
  }
  lVar26 = local_d0;
  lVar25 = local_e0;
  if (local_d0 == local_e0) {
    local_d8 = local_d8 & 0xffffffff00000000;
  }
  lVar36 = (long)local_c8;
  lVar19 = *(long *)(lVar20 + 0x38d490);
  if (lVar19 == 0) {
    lVar19 = FUN_0333d16c(0,1);
    *(long *)(lVar20 + 0x38d490) = lVar19;
    lVar21 = local_98;
  }
  lVar19 = *(long *)(lVar19 + 8);
  uVar39 = lVar36 * 0xc + 0x7fU & 0xffffffffffffff80;
  uVar23 = local_d8;
  if (((*(ulong *)(lVar19 + 0x10) < uVar39) || (*(long *)(lVar19 + 0x18) != uVar39 + lVar26)) ||
     (*(long *)(lVar19 + 0x28) == lVar26)) {
    if (lVar26 != 0) {
      if (*(ulong *)(lVar19 + 0x10) < uVar39) {
        *(int *)(*(long *)(lVar19 + 8) + 0x20) = *(int *)(*(long *)(lVar19 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar19 + 0x40) + 0x18))(*(long **)(lVar19 + 0x40),lVar26);
        lVar21 = local_98;
        uVar23 = local_d8;
      }
      else if (*(long *)(lVar19 + 0x18) == uVar39 + lVar26) {
        *(long *)(lVar19 + 0x18) = lVar26;
        FUN_032ce944();
        lVar21 = local_98;
        uVar23 = local_d8;
      }
      else {
        FUN_032ceaf0(lVar19,lVar26);
        lVar21 = local_98;
        uVar23 = local_d8;
      }
    }
  }
  else {
    *(long *)(lVar19 + 0x18) = lVar26;
  }
  local_d8 = uVar23 & 0xffffffff00000000;
  if (lVar25 != 0) {
    if (-1 < (long)local_d8) {
      (**(code **)(*(long *)puVar15 + 0x18))(puVar15,lVar25,(uVar23 >> 0x20 & 0x3fffffff) * 0xc);
      lVar21 = local_98;
    }
  }
  lVar25 = local_c0;
  lVar26 = (long)local_b8;
  local_b4 = 0;
  iStack_b0 = 0;
  iStack_ac = 0;
  if (local_b8 != 0) {
    lVar19 = *(long *)(lVar20 + 0x38d490);
    if (lVar19 == 0) {
      lVar19 = FUN_0333d16c(0,1);
      *(long *)(lVar20 + 0x38d490) = lVar19;
    }
    plVar18 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
    (**(code **)(*plVar18 + 0x18))(plVar18,lVar25,lVar26 << 4);
    local_b8 = 0;
    local_c0 = 0;
    lVar21 = local_98;
  }
  lVar25 = *(long *)(lVar20 + 0x38d490);
  if (lVar25 == 0) {
    lVar25 = FUN_0333d16c(0,1);
    *(long *)(lVar20 + 0x38d490) = lVar25;
    lVar21 = local_98;
  }
  lVar20 = *(long *)(lVar25 + 8);
  uVar23 = lVar35 * 0x10 + 0x7fU & 0xffffffffffffff80;
  if (((*(ulong *)(lVar20 + 0x10) < uVar23) || (*(long *)(lVar20 + 0x18) != lVar21 + uVar23)) ||
     (*(long *)(lVar20 + 0x28) == lVar21)) {
    if (lVar21 != 0) {
      if (*(ulong *)(lVar20 + 0x10) < uVar23) {
        *(int *)(*(long *)(lVar20 + 8) + 0x20) = *(int *)(*(long *)(lVar20 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar20 + 0x40) + 0x18))(*(long **)(lVar20 + 0x40),lVar21);
      }
      else if (*(long *)(lVar20 + 0x18) == lVar21 + uVar23) {
        *(long *)(lVar20 + 0x18) = lVar21;
        FUN_032ce944();
      }
      else {
        FUN_032ceaf0(lVar20,lVar21);
      }
    }
  }
  else {
    *(long *)(lVar20 + 0x18) = lVar21;
  }
  lVar20 = nn::os::GetSystemTick();
  *(long *)(param_12 + 8) = (lVar20 - lVar17) + *(long *)(param_12 + 8);
  *(int *)(param_12 + 0x10) = *(int *)(param_12 + 0x10) + 1;
  return;
LAB_031691ec:
  iVar115 = iStack_ac;
LAB_031691f0:
  lVar26 = (long)DAT_0444b53c;
  lVar25 = *(long *)(lVar20 + 0x38d490);
  if (lVar25 == 0) {
    lVar25 = FUN_0333d16c(0,1);
    *(long *)(lVar20 + 0x38d490) = lVar25;
    lVar21 = local_98;
  }
  if (*(long *)(lVar25 + lVar26 * 8 + 0x18) != 0) {
    FUN_0332a954();
    lVar21 = local_98;
  }
joined_r0x03168bc0:
  if (iVar115 == 0) goto LAB_03169a14;
LAB_03168bc4:
  lVar25 = local_c0;
  iVar116 = local_b8;
  uVar37 = (uint)local_d8;
  goto LAB_03168b2c;
LAB_03169a14:
  lVar19 = local_100;
  lVar25 = local_f0;
  iVar71 = (uint)local_d8;
  iVar65 = (int)local_f8;
  goto LAB_03169a24;
}


