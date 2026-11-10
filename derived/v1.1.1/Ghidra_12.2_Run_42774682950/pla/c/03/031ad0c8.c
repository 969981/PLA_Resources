/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ad0c8; name: FUN_031ad0c8
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_031ad0c8(undefined1 (*param_1) [16],undefined1 (*param_2) [16],uint param_3,long param_4,
                undefined1 (*param_5) [16],long *param_6)

{
  uint *puVar1;
  byte bVar2;
  int *piVar3;
  long *plVar4;
  uint uVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [14];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined *puVar23;
  undefined7 uVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  int *piVar32;
  uint *puVar33;
  void *__s;
  long lVar34;
  long lVar35;
  int *piVar36;
  short sVar37;
  long *plVar38;
  byte bVar39;
  byte bVar40;
  float *pfVar41;
  uint *puVar42;
  long lVar43;
  undefined8 *puVar44;
  uint *puVar45;
  int *piVar46;
  uint uVar47;
  uint uVar48;
  ulong uVar49;
  long lVar50;
  uint uVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  uint uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar83;
  undefined8 uVar59;
  float fVar84;
  float fVar85;
  undefined1 auVar60 [12];
  undefined1 auVar62 [16];
  undefined1 auVar61 [12];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar86;
  int iVar112;
  undefined1 auVar88 [12];
  float fVar110;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  float fVar87;
  float fVar111;
  float fVar113;
  undefined1 auVar97 [16];
  int iVar114;
  int iVar115;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar89 [12];
  undefined1 auVar101 [16];
  undefined1 auVar90 [12];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar91 [12];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar92 [12];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar93 [12];
  undefined1 auVar94 [12];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  int iVar116;
  undefined1 auVar119 [12];
  float fVar118;
  int iVar132;
  undefined1 auVar121 [16];
  float fVar117;
  float fVar133;
  float fVar134;
  undefined1 auVar120 [12];
  float fVar135;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  float fVar136;
  undefined8 uVar137;
  float fVar151;
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  float fVar152;
  undefined8 uVar153;
  float fVar161;
  float fVar162;
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  float fVar163;
  float fVar164;
  ulong uVar165;
  undefined8 uVar166;
  float fVar170;
  float fVar171;
  float fVar172;
  undefined1 auVar168 [16];
  ulong uVar167;
  undefined1 auVar169 [16];
  undefined8 uVar173;
  undefined8 uVar174;
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  float fVar178;
  float fVar182;
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined8 uVar183;
  undefined8 uVar184;
  float fVar185;
  float fVar186;
  undefined8 uVar187;
  undefined8 uVar188;
  undefined8 uVar189;
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined8 uVar193;
  int iVar195;
  undefined1 auVar194 [16];
  int iVar196;
  undefined1 auVar197 [16];
  float *pfVar198;
  float *pfVar199;
  float fVar200;
  float fVar201;
  float fVar202;
  float fVar203;
  float fVar204;
  float fVar205;
  float local_10b0;
  float fStack_10ac;
  float fStack_10a8;
  float fStack_10a4;
  long local_1038;
  float local_1010;
  float fStack_100c;
  float fStack_1008;
  float fStack_1004;
  int local_fe4;
  float local_fe0;
  float fStack_fdc;
  float fStack_fd8;
  float fStack_fd4;
  uint local_fac;
  float local_f90;
  undefined8 local_f80;
  float local_f60;
  float fStack_f5c;
  float fStack_f58;
  float fStack_f54;
  float local_f50;
  float fStack_f4c;
  float fStack_f48;
  float fStack_f44;
  uint local_f40 [2];
  int local_f38;
  int local_f34;
  undefined8 local_f30;
  undefined4 local_f28;
  uint local_f20 [2];
  int *local_f18;
  long local_f10;
  long local_f08;
  long local_f00;
  float *pfStack_ef8;
  uint local_ef0;
  int *local_ee8;
  long local_ee0;
  long local_ed8;
  long local_ed0;
  float *pfStack_ec8;
  uint local_ec0;
  int *local_eb8;
  long local_eb0;
  long local_ea8;
  undefined8 local_ea0;
  undefined8 uStack_e98;
  long local_e90;
  undefined4 local_e88;
  long *local_e80;
  undefined8 local_e78;
  long local_e70;
  int local_e68;
  float local_e64;
  float local_e60;
  undefined4 local_e5c;
  undefined8 local_e58;
  undefined1 auStack_e50 [3264];
  int local_190;
  int local_18c;
  ulong local_188;
  uint local_180;
  uint local_178 [2];
  float local_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float local_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  uint *local_f0;
  int local_e8;
  long local_e0;
  float *pfStack_d8;
  uint *local_d0;
  byte bStack_c8;
  undefined7 uStack_c7;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  
  uVar5 = *(uint *)param_5[2];
  if (uVar5 == 0xffffffff) {
    return 0;
  }
  plVar38 = (long *)(*(long *)(param_4 + 0x38) + (ulong)(uVar5 >> 0x16) * 0xf0);
  lVar52 = *plVar38;
  pfVar41 = (float *)(param_5[2] + 8);
  fVar56 = *pfVar41 * 0.5;
  fVar185 = *(float *)param_5[3];
  bVar25 = false;
  bVar26 = true;
  bVar27 = false;
  if (0.0 < fVar185) {
    bVar25 = false;
    bVar26 = false;
    bVar27 = true;
    if (!NAN(fVar56) && !NAN(fVar185)) {
      bVar25 = fVar56 < fVar185;
      bVar26 = fVar56 == fVar185;
      bVar27 = false;
    }
  }
  if (!bVar26 && bVar25 == bVar27) {
    return 0;
  }
  auVar96 = param_5[1];
  fStack_168 = auVar96._8_4_;
  fVar85 = fStack_168;
  fStack_164 = auVar96._12_4_;
  fVar86 = fStack_164;
  local_170 = auVar96._0_4_;
  fVar58 = local_170;
  fStack_16c = auVar96._4_4_;
  fVar84 = fStack_16c;
  auVar154 = *param_1;
  fVar56 = fVar56 - *(float *)(*(long *)(*(long *)(lVar52 + 0x20) + 0x68) + 0xb0);
  if (fVar56 <= 0.0) {
    fVar56 = 0.0;
  }
  fStack_10a8 = auVar154._8_4_;
  fStack_10a4 = auVar154._12_4_;
  local_10b0 = auVar154._0_4_;
  fStack_10ac = auVar154._4_4_;
  auVar192 = auVar154;
  if (param_5[6][3] != '\0') {
    local_178[0] = uVar5 & 0x3fffff;
    FUN_031934ec(*plVar38,local_178,&local_170);
    auVar96._4_4_ = fStack_16c;
    auVar96._0_4_ = local_170;
    auVar96._8_4_ = fStack_168;
    auVar96._12_4_ = fStack_164;
    fVar185 = *(float *)param_5[3];
    auVar192 = *param_1;
  }
  auVar95 = NEON_ext(auVar96,auVar96,4,1);
  auVar121 = NEON_ext(auVar154,auVar154,4,1);
  fVar186 = *(float *)(param_5[3] + 4);
  uVar183 = CONCAT44(fVar56,fVar56);
  uVar184 = 0;
  auVar154._0_4_ = auVar121._0_4_ * auVar96._0_4_ - local_10b0 * auVar95._0_4_;
  auVar154._4_4_ = auVar121._4_4_ * auVar96._4_4_ - fStack_10ac * auVar95._4_4_;
  auVar154._8_4_ = local_10b0 * auVar96._8_4_ - fStack_10a8 * auVar96._0_4_;
  auVar154._12_4_ = fStack_10ac * auVar96._12_4_ - fStack_10a4 * auVar96._4_4_;
  auVar96 = NEON_ext(auVar154,auVar154,4,1);
  local_f50 = auVar96._0_4_;
  fStack_f4c = auVar96._4_4_;
  fVar57 = local_f50 * local_f50 + fStack_f4c * fStack_f4c + auVar154._0_4_ * auVar154._0_4_;
  fVar83 = local_f50 * local_f50 + fStack_f4c * fStack_f4c + auVar154._0_4_ * auVar154._0_4_;
  uVar59 = CONCAT44(fVar83,fVar57);
  uVar137 = NEON_frsqrte(uVar59,4);
  fVar136 = (float)uVar137;
  fVar151 = (float)((ulong)uVar137 >> 0x20);
  uVar137 = NEON_frsqrts(uVar59,CONCAT44(fVar151 * fVar151,fVar136 * fVar136),4);
  fVar136 = fVar136 * (float)uVar137;
  fVar151 = fVar151 * (float)((ulong)uVar137 >> 0x20);
  iVar116 = -(uint)(fVar57 <= 0.0);
  iVar132 = -(uint)(fVar83 <= 0.0);
  uVar59 = NEON_frsqrts(uVar59,CONCAT44(fVar151 * fVar151,fVar136 * fVar136),4);
  fVar136 = (float)uVar59 * fVar136;
  fVar151 = (float)((ulong)uVar59 >> 0x20) * fVar151;
  auVar96 = *param_5;
  local_188 = 0xffffffffffffffff;
  local_180 = 4;
  fStack_f48 = (float)CONCAT13((byte)((uint)fVar136 >> 0x18) & ~(byte)((uint)iVar116 >> 0x18),
                               CONCAT12((byte)((uint)fVar136 >> 0x10) &
                                        ~(byte)((uint)iVar116 >> 0x10),
                                        CONCAT11((byte)((uint)fVar136 >> 8) &
                                                 ~(byte)((uint)iVar116 >> 8),
                                                 SUB41(fVar136,0) & ~(byte)iVar116)));
  local_f50 = local_f50 * fStack_f48;
  fVar57 = (float)(CONCAT17((byte)((uint)fVar151 >> 0x18) & ~(byte)((uint)iVar132 >> 0x18),
                            CONCAT16((byte)((uint)fVar151 >> 0x10) & ~(byte)((uint)iVar132 >> 0x10),
                                     CONCAT15((byte)((uint)fVar151 >> 8) &
                                              ~(byte)((uint)iVar132 >> 8),
                                              CONCAT14(SUB41(fVar151,0) & ~(byte)iVar132,fStack_f48)
                                             ))) >> 0x20);
  fStack_f4c = fStack_f4c * fVar57;
  fStack_f48 = auVar154._0_4_ * fStack_f48;
  auVar95._0_4_ = auVar96._0_4_ * local_f50;
  auVar95._4_4_ = auVar96._4_4_ * fStack_f4c;
  auVar95._8_4_ = auVar96._8_4_ * fStack_f48;
  auVar95._12_4_ = auVar96._12_4_ * auVar154._4_4_ * fVar57;
  auVar154 = NEON_ext(auVar95,auVar95,8,1);
  if (param_5[6][2] == '\0') {
    fVar57 = -fVar56;
    fVar136 = -fVar56;
    uVar59 = uVar183;
  }
  else {
    fVar57 = 0.0;
    fVar136 = 0.0;
    uVar59 = 0;
  }
  fVar83 = fVar58 * auVar192._0_4_;
  fVar110 = fVar84 * auVar192._4_4_;
  fVar113 = fVar85 * auVar192._8_4_;
  fVar151 = fVar83 + fVar110 + fVar113;
  fVar113 = fVar83 + fVar110 + fVar113;
  auVar121._0_4_ = fVar58 * fVar151;
  auVar121._4_4_ = fVar84 * fVar113;
  auVar121._8_4_ = fVar85 * fVar151;
  auVar121._12_4_ = fVar86 * fVar113;
  lVar10 = tpidr_el0;
  auVar74._0_8_ = *(long *)(lVar10 + 0x38d490);
  if (auVar74._0_8_ == 0) {
    uVar137 = auVar121._8_8_;
    auVar74._0_8_ = FUN_0333d16c(0,1);
    auVar121._8_8_ = uVar137;
    *(long *)(lVar10 + 0x38d490) = auVar74._0_8_;
  }
  auVar74._0_8_ = *(long *)(auVar74._0_8_ + 8);
  fVar58 = auVar192._0_4_ - auVar121._0_4_;
  fVar84 = auVar192._4_4_ - auVar121._4_4_;
  fVar85 = auVar192._8_4_ - auVar121._8_4_;
  if (0x7f < *(ulong *)(auVar74._0_8_ + 0x10)) {
    local_1038 = *(long *)(auVar74._0_8_ + 0x18);
    if (local_1038 + 0x80U <= *(ulong *)(auVar74._0_8_ + 0x20)) {
      *(ulong *)(auVar74._0_8_ + 0x18) = local_1038 + 0x80U;
      goto LAB_031ad2a4;
    }
  }
  local_1038 = FUN_032ce670(auVar74._0_8_,0x80);
LAB_031ad2a4:
  puVar23 = PTR_PTR_0434a080;
  fStack_f44 = -(auVar95._0_4_ + auVar95._4_4_ + auVar154._0_4_);
  cVar6 = param_5[6][4];
  auVar154 = *param_5;
  puVar42 = (uint *)((long)param_6 + 0x2c);
  uVar29 = *puVar42;
  auVar119._0_4_ = fVar58 * auVar154._0_4_;
  auVar119._4_4_ = fVar84 * auVar154._4_4_;
  auVar119._8_4_ = fVar85 * auVar154._8_4_;
  auVar192._12_4_ = (auVar192._12_4_ - auVar121._12_4_) * auVar154._12_4_;
  auVar192._0_12_ = auVar119;
  fVar86 = fVar185 - fVar56;
  iVar116 = (int)param_6[5];
  if (((char)param_6[6] == '\0') || (iVar116 < (int)(uVar29 & 0x3fffffff))) {
    uVar47 = iVar116 + 1;
    if (iVar116 < (int)(uVar29 & 0x3fffffff)) {
      auVar74._0_8_ = param_6[4];
    }
    else {
      auVar74._0_8_ = param_6[4];
      if (0x3ffffffe < iVar116) {
        FUN_032bd0a8(uVar47);
        uVar29 = *puVar42;
      }
      uVar29 = (uVar29 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar29) {
        uVar29 = 0x3fffffff;
      }
      uVar30 = uVar47;
      if ((int)uVar47 <= (int)uVar29) {
        uVar30 = uVar29;
      }
      auVar74._0_8_ = FUN_032bd1d4(puVar23,uVar30,0x10,auVar74._0_8_,iVar116,puVar42);
      param_6[4] = auVar74._0_8_;
      auVar11._4_4_ = auVar119._4_4_;
      auVar11._0_4_ = auVar119._0_4_;
      auVar11._8_8_ = auVar192._8_8_;
      auVar119 = auVar11._0_12_;
      iVar116 = (int)param_6[5];
    }
    puVar44 = (undefined8 *)(auVar74._0_8_ + (long)iVar116 * 0x10);
    puVar44[1] = *(undefined8 *)(*param_5 + 8);
    *puVar44 = *(undefined8 *)*param_5;
    *(uint *)(param_6 + 5) = uVar47;
  }
  local_e78 = *(undefined8 *)param_5[4];
  local_e90 = *(long *)(param_5[4] + 8);
  local_e88 = *(undefined4 *)param_5[5];
  local_e5c = *(undefined4 *)(param_5[2] + 0xc);
  local_e68 = *(int *)(*(long *)(lVar52 + 0x20) + 0x180);
  plVar38 = *(long **)(param_5[5] + 8);
  local_e80 = (long *)0x0;
  local_e60 = 0.001;
  local_e58 = 0;
  uStack_e98 = SUB168(param_5[1],8);
  local_ea0 = SUB168(param_5[1],0);
  local_e70 = param_4;
  local_e64 = fVar56;
  FUN_0316017c();
  puVar23 = PTR_PTR_0434a080;
  if (*(float *)(local_e70 + (long)local_e68 * 4 + 0x60) + local_e60 < local_e64) {
    if (-1 < local_e90) {
      plVar38 = *(long **)(*(long *)(*(long *)(*(long *)(local_e70 + 0x58) + 0x18) +
                                    (long)(int)local_e90 * 0x18) + (local_e90 >> 0x20) * 0x18);
    }
    local_e80 = plVar38;
  }
  puVar44 = (undefined8 *)((ulong)local_f20 | 8);
  puVar1 = (uint *)((long)param_6 + 0x1c);
  local_f80 = CONCAT44(auVar119._0_4_ + auVar119._4_4_ + auVar119._8_4_,
                       auVar119._0_4_ + auVar119._4_4_ + auVar119._8_4_);
  uVar137 = 0;
  local_fac = 0;
  local_fe4 = 0;
  local_f90 = -NAN;
  lVar52 = auVar96._0_8_;
  pfVar199 = auVar96._8_8_;
LAB_031ad460:
  lVar53 = (long)DAT_0444b53c;
  auVar74._0_8_ = *(long *)(lVar10 + 0x38d490);
  fStack_f58 = SUB84(pfVar199,0);
  fStack_f54 = (float)((ulong)pfVar199 >> 0x20);
  local_f60 = (float)lVar52;
  fStack_f5c = (float)((ulong)lVar52 >> 0x20);
  if (auVar74._0_8_ == 0) {
    auVar74._0_8_ = FUN_0333d16c(0,1);
    *(long *)(lVar10 + 0x38d490) = auVar74._0_8_;
  }
  if (*(long *)(auVar74._0_8_ + lVar53 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  local_ef0 = 0xffffffff;
  local_ee0 = 0;
  local_ed8 = 0;
  local_ee8 = (int *)0x0;
  local_f20[0] = 0xffffffff;
  puVar44[1] = 0;
  puVar44[2] = 0;
  *puVar44 = 0;
  pfStack_ef8 = SUB168(*param_5,8);
  local_f00 = SUB168(*param_5,0);
  uVar29 = uVar5 & 0x3fffff;
  lVar53 = *(long *)(*(long *)(param_4 + 0x38) + (ulong)(uVar5 >> 0x16) * 0xf0);
  local_f30 = 0xffffffffffffffff;
  local_f28 = 4;
  auVar190 = *param_2;
  auVar74._0_8_ = *(long *)(lVar53 + 0x20);
  iVar116 = *(int *)(auVar74._0_8_ + 0x50);
  uVar47 = uVar29 - *(int *)(auVar74._0_8_ + 0x20);
  if ((int)uVar29 < *(int *)(auVar74._0_8_ + 0x20)) {
    if (*(int *)(auVar74._0_8_ + 0x98) == 0) {
      uVar47 = uVar29;
LAB_031ad520:
      local_eb0 = *(long *)(auVar74._0_8_ + 0x120) + (long)(int)(uVar47 * iVar116) * 4;
      auVar74._0_8_ = *(long *)(auVar74._0_8_ + 0xb0);
      goto LAB_031ad544;
    }
    uVar47 = *(uint *)(*(long *)(auVar74._0_8_ + 0x90) + (ulong)uVar29 * 4);
    if (uVar47 != 0xffffffff) goto LAB_031ad520;
    local_eb0 = *(long *)(auVar74._0_8_ + 0x48) + (long)(int)(iVar116 * uVar29) * 4;
    piVar46 = (int *)(*(long *)(auVar74._0_8_ + 0x18) + (ulong)uVar29 * 0x10);
  }
  else {
    local_eb0 = *(long *)(auVar74._0_8_ + 0x140) + (long)(int)(iVar116 * uVar47) * 4;
    auVar74._0_8_ = *(long *)(auVar74._0_8_ + 0xd0);
LAB_031ad544:
    piVar46 = (int *)(auVar74._0_8_ + (long)(int)uVar47 * 0x10);
  }
  local_ea8 = local_eb0 + (long)iVar116 * 4;
  uVar187 = NEON_fmov(0x3f800000,4);
  local_fe0 = auVar190._0_4_;
  fStack_100c = auVar190._4_4_;
  fStack_1008 = auVar190._8_4_;
  fStack_1004 = auVar190._12_4_;
  local_ec0 = uVar5;
  local_eb8 = piVar46;
  auVar74._0_8_ = lVar52;
  pfVar198 = pfVar199;
  fStack_fdc = fStack_100c;
  fStack_fd8 = fStack_1008;
  fStack_fd4 = fStack_1004;
  if ((local_e80 == (long *)0x0) ||
     (uVar31 = (**(code **)(*local_e80 + 0x20))(local_e80,local_e70,uVar5,piVar46),
     (uVar31 & 1) != 0)) {
    plVar38 = *(long **)param_5[4];
    if (plVar38 != (long *)0x0) {
      local_d0 = local_f20;
      bStack_c8 = 2;
      local_e0 = param_4;
      pfStack_d8 = pfVar41;
      uVar31 = (**(code **)(*plVar38 + 0x20))(plVar38,&local_e0);
      if ((uVar31 & 1) == 0) goto LAB_031af200;
    }
    if (uVar5 != param_3) {
      bVar39 = param_5[6][5];
      iVar116 = -1;
      if ((bVar39 & 4) == 0 || (bVar39 & 8) != 0) {
        iVar116 = 1;
      }
      uVar29 = (uint)((bVar39 & 8) == 0 & bVar39 >> 2);
      if ((bVar39 >> 2 & 1) == 0) {
        uVar47 = 1;
        iVar116 = 1;
      }
      else {
        uVar47 = 2;
      }
      bVar25 = false;
      uVar30 = 0;
      lVar50 = 0;
      lVar35 = 0;
      uVar51 = 0xffffffff;
      do {
        if ((uVar51 != 0xffffffff) && (bVar25)) goto LAB_031ad920;
        piVar32 = (int *)((long)piVar46 + 10);
        if (uVar29 != 1) {
          piVar32 = piVar46 + 2;
        }
        if (0 < (long)(short)*piVar32) {
          uVar31 = 0;
          piVar3 = piVar46 + 1;
          if (uVar29 != 1) {
            piVar3 = piVar46;
          }
          do {
            lVar43 = uVar31 + (long)*piVar3;
            uVar28 = (uint)lVar43;
            if ((float)(uVar5 & 0xffc00000 | uVar28) != local_f90) {
              lVar54 = *(long *)(lVar53 + 0x20);
              iVar132 = *(int *)(lVar54 + 0x60);
              lVar34 = (long)iVar132;
              if (lVar43 < *(int *)(lVar54 + 0x30)) {
                uVar55 = uVar28;
                if (*(int *)(lVar54 + 0x78) != 0) {
                  uVar55 = *(uint *)(*(long *)(lVar54 + 0x70) + lVar43 * 4);
                }
                if (uVar55 == 0xffffffff) {
                  piVar36 = (int *)(*(long *)(lVar54 + 0x28) + lVar43 * 0x14);
                  lVar43 = *(long *)(lVar54 + 0x58) + lVar43 * lVar34 * 4;
                  lVar34 = lVar43 + lVar34 * 4;
                }
                else {
                  lVar43 = *(long *)(lVar54 + 0x130) + (long)(int)(uVar55 * iVar132) * 4;
                  lVar34 = lVar43 + lVar34 * 4;
                  piVar36 = (int *)(*(long *)(lVar54 + 0xc0) + (long)(int)uVar55 * 0x14);
                }
              }
              else {
                iVar112 = uVar28 - *(int *)(lVar54 + 0x30);
                lVar43 = *(long *)(lVar54 + 0x150) + (long)(iVar132 * iVar112) * 4;
                lVar34 = lVar43 + lVar34 * 4;
                piVar36 = (int *)(*(long *)(lVar54 + 0xe0) + (long)iVar112 * 0x14);
              }
              iVar115 = *(int *)(lVar54 + 0x40);
              iVar112 = *piVar36;
              iVar114 = piVar36[1];
              auVar96 = *(undefined1 (*) [16])(lVar53 + 0x60);
              auVar154 = *(undefined1 (*) [16])(lVar53 + 0x70);
              auVar95 = *(undefined1 (*) [16])(lVar53 + 0x80);
              auVar192 = *(undefined1 (*) [16])(lVar53 + 0x90);
              iVar132 = 0;
              if (iVar115 <= iVar112) {
                iVar132 = iVar115;
              }
              plVar38 = (long *)(lVar54 + 0x38);
              if (iVar115 <= iVar112) {
                plVar38 = (long *)(lVar54 + 0xf0);
              }
              auVar121 = *(undefined1 (*) [16])(*plVar38 + (long)(iVar112 - iVar132) * 0x10);
              plVar38 = (long *)(lVar54 + 0x38);
              if (iVar115 <= iVar114) {
                plVar38 = (long *)(lVar54 + 0xf0);
              }
              bVar39 = *(byte *)(piVar36 + 4);
              iVar132 = 0;
              if (iVar115 <= iVar114) {
                iVar132 = iVar115;
              }
              auVar11 = *(undefined1 (*) [16])(*plVar38 + (long)(iVar114 - iVar132) * 0x10);
              if ((bVar39 >> 4 & 1) != 0) {
                if (((param_5[6][5] & 3) == 0) && ((bVar39 & 0x20) != 0 || piVar36[2] == -1))
                goto LAB_031ad688;
              }
              fVar83 = auVar121._0_4_;
              fVar151 = auVar121._4_4_;
              fVar110 = auVar121._8_4_;
              fVar113 = auVar11._0_4_;
              fVar135 = auVar11._4_4_;
              fVar118 = auVar11._8_4_;
              fVar87 = auVar192._0_4_ +
                       auVar95._0_4_ * fVar110 + auVar96._0_4_ * fVar83 + auVar154._0_4_ * fVar151;
              fVar111 = auVar192._4_4_ +
                        auVar95._4_4_ * fVar110 + auVar96._4_4_ * fVar83 + auVar154._4_4_ * fVar151;
              auVar97._0_8_ = CONCAT44(fVar111,fVar87);
              auVar97._8_4_ =
                   auVar192._8_4_ +
                   auVar95._8_4_ * fVar110 + auVar96._8_4_ * fVar83 + auVar154._8_4_ * fVar151;
              auVar97._12_4_ =
                   auVar192._12_4_ +
                   auVar95._12_4_ * fVar110 + auVar96._12_4_ * fVar83 + auVar154._12_4_ * fVar151;
              fVar117 = auVar192._0_4_ +
                        auVar95._0_4_ * fVar118 + auVar96._0_4_ * fVar113 + auVar154._0_4_ * fVar135
              ;
              fVar133 = auVar192._4_4_ +
                        auVar95._4_4_ * fVar118 + auVar96._4_4_ * fVar113 + auVar154._4_4_ * fVar135
              ;
              fVar134 = auVar192._8_4_ +
                        auVar95._8_4_ * fVar118 + auVar96._8_4_ * fVar113 + auVar154._8_4_ * fVar135
              ;
              fVar135 = auVar192._12_4_ +
                        auVar95._12_4_ * fVar118 +
                        auVar96._12_4_ * fVar113 + auVar154._12_4_ * fVar135;
              auVar138._0_4_ = local_f50 * fVar87;
              auVar138._4_4_ = fStack_f4c * fVar111;
              auVar138._8_4_ = fStack_f48 * auVar97._8_4_;
              auVar138._12_4_ = fStack_f44 * auVar97._12_4_;
              auVar96 = NEON_ext(auVar138,auVar138,8,1);
              fVar110 = auVar96._0_4_ + fStack_f44;
              auVar155._0_4_ = local_f50 * fVar117;
              auVar155._4_4_ = fStack_f4c * fVar133;
              auVar155._8_4_ = fStack_f48 * fVar134;
              auVar155._12_4_ = fStack_f44 * fVar135;
              auVar96 = NEON_ext(auVar155,auVar155,8,1);
              fVar113 = auVar96._0_4_ + fStack_f44;
              fVar83 = auVar138._0_4_ + auVar138._4_4_ + fVar110;
              fVar110 = auVar138._0_4_ + auVar138._4_4_ + fVar110;
              fVar151 = auVar155._0_4_ + auVar155._4_4_ + fVar113;
              fVar113 = auVar155._0_4_ + auVar155._4_4_ + fVar113;
              fVar118 = (float)((ulong)uVar59 >> 0x20);
              uVar165 = CONCAT44(-(uint)(fVar118 <= fVar113),-(uint)((float)uVar59 <= fVar151)) &
                        CONCAT44(-(uint)(fVar110 <= fVar136),-(uint)(fVar83 <= fVar57));
              if ((bVar39 >> 4 & 1) == 0) {
                if ((int)uVar165 != 0 || (int)(uVar165 >> 0x20) != 0) {
                  uVar153 = CONCAT44(fVar110 - fVar113,fVar83 - fVar151);
                  uVar166 = NEON_frecpe(uVar153,4);
                  uVar173 = NEON_frecps(uVar153,uVar166,4);
                  fVar151 = (float)uVar166 * (float)uVar173;
                  fVar113 = (float)((ulong)uVar166 >> 0x20) * (float)((ulong)uVar173 >> 0x20);
                  uVar153 = NEON_frecps(uVar153,CONCAT44(fVar113,fVar151),4);
                  uVar166 = CONCAT44(fVar110 * fVar113 * (float)((ulong)uVar153 >> 0x20),
                                     fVar83 * fVar151 * (float)uVar153);
                  auVar139._0_4_ = fVar117 - fVar87;
                  auVar139._4_4_ = fVar133 - fVar111;
                  auVar139._8_4_ = fVar134 - auVar97._8_4_;
                  auVar139._12_4_ = fVar135 - auVar97._12_4_;
LAB_031ad80c:
                  uVar153 = NEON_fmov(0x3f800000,4);
                  uVar153 = NEON_fminnm(uVar166,uVar153,4);
                  uVar153 = NEON_fmax(uVar153,0,4);
                  fVar83 = (float)((ulong)uVar153 >> 0x20);
                  fVar87 = fVar87 + auVar139._0_4_ * (float)uVar153;
                  fVar111 = fVar111 + auVar139._4_4_ * fVar83;
                  auVar140._0_8_ = CONCAT44(fVar111,fVar87);
                  auVar140._8_4_ = auVar97._8_4_ + auVar139._8_4_ * (float)uVar153;
                  auVar140._12_4_ = auVar97._12_4_ + auVar139._12_4_ * fVar83;
                  fVar87 = fVar58 * fVar87;
                  fVar111 = fVar84 * fVar111;
                  fVar151 = fVar85 * auVar140._8_4_;
                  fVar83 = fVar87 + fVar111 + fVar151;
                  if (param_5[6][3] == '\0') {
                    if ((float)local_f80 < fVar83) {
                      local_fac = 0;
                    }
                    else {
                      iVar132 = -1;
                      if (0 < (int)local_fac) {
                        uVar165 = 0;
                        do {
                          if (*(uint *)(local_1038 + uVar165 * 4) == uVar5) {
                            iVar132 = (int)uVar165;
                            break;
                          }
                          uVar165 = uVar165 + 1;
                          iVar132 = -1;
                        } while (local_fac != uVar165);
                      }
                      if ((local_fac == 8) || (iVar132 != -1)) goto LAB_031ad688;
                      *(uint *)(local_1038 + (long)(int)local_fac * 4) = uVar5;
                      local_fac = local_fac + 1;
                    }
                  }
                  if (piVar36[2] == -1) {
                    bVar39 = 0;
                  }
                  else {
                    bVar39 = (*(byte *)(piVar36 + 4) >> 5 ^ 0xff) & 1;
                  }
                  local_f38 = *piVar36;
                  local_f34 = piVar36[1];
                  local_f28 = piVar36[4];
                  uVar51 = piVar36[2];
                  bVar25 = bVar39 != 0;
                  if ((*(byte *)(piVar36 + 4) >> 6 & 1) == 0) {
                    iVar132 = *(int *)(*(long *)(lVar53 + 0x20) + 0x17c);
                    if (uVar51 != 0xffffffff) {
                      uVar51 = uVar51 & 0x3fffff | iVar132 << 0x16;
                    }
                    uVar55 = piVar36[3];
                    if (uVar55 != 0xffffffff) {
                      uVar55 = uVar55 & 0x3fffff | iVar132 << 0x16;
                    }
                  }
                  else {
                    uVar55 = piVar36[3];
                  }
                  pfVar198 = auVar140._8_8_;
                  local_f80 = NEON_fmax(local_f80,CONCAT44(fVar87 + fVar111 + fVar151,fVar83),4);
                  auVar190._8_8_ = auVar97._8_8_;
                  auVar190._0_8_ = auVar97._0_8_;
                  local_f30 = CONCAT44(uVar55,uVar51);
                  lVar35 = lVar34;
                  lVar50 = lVar43;
                  auVar74._0_8_ = auVar140._0_8_;
                  uVar51 = uVar28;
                  local_fe0 = fVar117;
                  fStack_fdc = fVar133;
                  fStack_fd8 = fVar134;
                  fStack_fd4 = fVar135;
                  break;
                }
              }
              else {
                if (((byte)param_5[6][5] >> 4 & 1) != 0) {
                  uVar49 = CONCAT44(-(uint)(fVar113 <= fVar136),-(uint)(fVar151 <= fVar57)) &
                           CONCAT44(-(uint)(fVar118 <= fVar110),-(uint)((float)uVar59 <= fVar83));
                  uVar165 = CONCAT44((int)((uint)(byte)((byte)(uVar165 >> 0x20) |
                                                       (byte)(uVar49 >> 0x20)) << 0x1f) >> 0x1f,
                                     (int)((uint)(byte)((byte)uVar165 | (byte)uVar49) << 0x1f) >>
                                     0x1f);
                }
                iVar132 = (int)(uVar165 >> 0x20);
                if ((((int)uVar165 != 0 || iVar132 != 0) || (int)uVar165 != 0) || iVar132 != 0) {
                  uVar153 = CONCAT44(fVar110 - fVar113,fVar83 - fVar151);
                  uVar166 = NEON_frecpe(uVar153,4);
                  uVar173 = NEON_frecps(uVar153,uVar166,4);
                  fVar151 = (float)uVar166 * (float)uVar173;
                  fVar113 = (float)((ulong)uVar166 >> 0x20) * (float)((ulong)uVar173 >> 0x20);
                  uVar153 = NEON_frecps(uVar153,CONCAT44(fVar113,fVar151),4);
                  uVar166 = CONCAT44(fVar110 * fVar113 * (float)((ulong)uVar153 >> 0x20),
                                     fVar83 * fVar151 * (float)uVar153);
                  uVar153 = NEON_fmov(0x3f800000,4);
                  uVar153 = NEON_fminnm(uVar166,uVar153,4);
                  auVar139._0_4_ = fVar117 - fVar87;
                  auVar139._4_4_ = fVar133 - fVar111;
                  auVar139._8_4_ = fVar134 - auVar97._8_4_;
                  auVar139._12_4_ = fVar135 - auVar97._12_4_;
                  uVar153 = NEON_fmax(uVar153,0,4);
                  fVar83 = (float)((ulong)uVar153 >> 0x20);
                  auVar169._0_4_ = local_f60 * local_10b0;
                  auVar169._4_4_ = fStack_f5c * fStack_10ac;
                  auVar169._8_4_ = fStack_f58 * fStack_10a8;
                  auVar169._12_4_ = fStack_f54 * fStack_10a4;
                  auVar96 = NEON_ext(auVar169,auVar169,8,1);
                  auVar177._0_4_ = local_10b0 * (fVar87 + auVar139._0_4_ * (float)uVar153);
                  auVar177._4_4_ = fStack_10ac * (fVar111 + auVar139._4_4_ * fVar83);
                  auVar177._8_4_ = fStack_10a8 * (auVar97._8_4_ + auVar139._8_4_ * (float)uVar153);
                  auVar177._12_4_ = fStack_10a4 * (auVar97._12_4_ + auVar139._12_4_ * fVar83);
                  auVar154 = NEON_ext(auVar177,auVar177,8,1);
                  if (auVar96._0_4_ + auVar169._0_4_ + auVar169._4_4_ <
                      auVar177._0_4_ + auVar177._4_4_ + auVar154._0_4_) goto LAB_031ad80c;
                }
              }
            }
LAB_031ad688:
            uVar31 = uVar31 + 1;
          } while (uVar31 != ((long)(short)*piVar32 & 0xffffffffU));
        }
        uVar30 = uVar30 + 1;
        uVar29 = uVar29 + iVar116;
      } while (uVar30 < uVar47);
      if (uVar51 != 0xffffffff) {
LAB_031ad920:
        uVar51 = uVar51 | uVar5 & 0xffc00000;
        fStack_1008 = auVar190._8_4_;
        fStack_1004 = auVar190._12_4_;
        local_1010 = auVar190._0_4_;
        fStack_100c = auVar190._4_4_;
        if ((cVar6 == '\0') || (bVar25)) {
          uVar153 = 0x3f8000003f800000;
          if (!bVar25) {
            iVar116 = 4;
            goto LAB_031adcdc;
          }
          iVar116 = 3;
        }
        else {
          local_110 = 0x3f8000003f800000;
          local_100 = (uint *)CONCAT44(fStack_fdc,local_fe0);
          auVar17._8_4_ = fStack_fd8;
          auVar17._0_8_ = local_100;
          auVar17._12_4_ = fStack_fd4;
          auVar65._8_8_ = pfVar199;
          auVar65._0_8_ = lVar52;
          auVar101._8_8_ = pfVar198;
          auVar101._0_8_ = auVar74._0_8_;
          auVar89 = auVar101._0_12_;
          uStack_f8 = auVar17._8_8_;
          local_160 = local_1010;
          fStack_15c = fStack_100c;
          fStack_158 = fStack_1008;
          fStack_154 = fStack_1004;
          if (param_5[6][1] != '\0') {
            fVar117 = (float)auVar74._0_8_ * local_170;
            fVar134 = (float)((ulong)auVar74._0_8_ >> 0x20);
            fVar133 = fVar134 * fStack_16c;
            fVar118 = SUB84(pfVar198,0) * fStack_168;
            fVar83 = local_f60 * local_170 + fStack_f5c * fStack_16c + fStack_f58 * fStack_168;
            fVar151 = local_f60 * local_170 + fStack_f5c * fStack_16c + fStack_f58 * fStack_168;
            fVar110 = fStack_1008 * fStack_168 + local_1010 * local_170 + fStack_100c * fStack_16c;
            fVar113 = fStack_1008 * fStack_168 + local_1010 * local_170 + fStack_100c * fStack_16c;
            fVar87 = fStack_fd8 * fStack_168 + local_fe0 * local_170 + fStack_fdc * fStack_16c;
            fVar111 = fStack_fd8 * fStack_168 + local_fe0 * local_170 + fStack_fdc * fStack_16c;
            fVar135 = fVar117 + fVar133 + fVar118;
            auVar65._0_4_ = local_f60 - local_170 * fVar83;
            auVar65._4_4_ = fStack_f5c - fStack_16c * fVar151;
            auVar65._8_4_ = fStack_f58 - fStack_168 * fVar83;
            auVar65._12_4_ = fStack_f54 - fStack_164 * fVar151;
            local_160 = local_1010 - local_170 * fVar110;
            fStack_15c = fStack_100c - fStack_16c * fVar113;
            fStack_158 = fStack_1008 - fStack_168 * fVar110;
            fStack_154 = fStack_1004 - fStack_164 * fVar113;
            auVar89._0_4_ = (float)auVar74._0_8_ - local_170 * fVar135;
            auVar89._4_4_ = fVar134 - fStack_16c * (fVar117 + fVar133 + fVar118);
            auVar89._8_4_ = SUB84(pfVar198,0) - fStack_168 * fVar135;
            uStack_f8 = CONCAT44(fStack_fd4 - fStack_164 * fVar111,fStack_fd8 - fStack_168 * fVar87)
            ;
            local_100 = (uint *)CONCAT44(fStack_fdc - fStack_16c * fVar111,
                                         local_fe0 - local_170 * fVar87);
          }
          fVar151 = auVar89._0_4_ - auVar65._0_4_;
          fVar110 = auVar89._4_4_ - auVar65._4_4_;
          fVar113 = auVar89._8_4_ - auVar65._8_4_;
          auVar96 = ZEXT816(0x3f800000);
          fVar83 = auVar96._0_4_;
          iVar116 = -(uint)(fVar151 == 0.0);
          iVar132 = -(uint)(fVar110 == 0.0);
          iVar112 = -(uint)(fVar113 == 0.0);
          fVar151 = (float)CONCAT13((byte)((uint)fVar151 >> 0x18) & ~(byte)((uint)iVar116 >> 0x18),
                                    CONCAT12((byte)((uint)fVar151 >> 0x10) &
                                             ~(byte)((uint)iVar116 >> 0x10),
                                             CONCAT11((byte)((uint)fVar151 >> 8) &
                                                      ~(byte)((uint)iVar116 >> 8),
                                                      SUB41(fVar151,0) & ~(byte)iVar116)));
          auVar90._0_8_ =
               (uint *)CONCAT17((byte)((uint)fVar110 >> 0x18) & ~(byte)((uint)iVar132 >> 0x18),
                                CONCAT16((byte)((uint)fVar110 >> 0x10) &
                                         ~(byte)((uint)iVar132 >> 0x10),
                                         CONCAT15((byte)((uint)fVar110 >> 8) &
                                                  ~(byte)((uint)iVar132 >> 8),
                                                  CONCAT14(SUB41(fVar110,0) & ~(byte)iVar132,fVar151
                                                          ))));
          auVar90[8] = SUB41(fVar113,0) & ~(byte)iVar112;
          auVar90[9] = (byte)((uint)fVar113 >> 8) & ~(byte)((uint)iVar112 >> 8);
          auVar90[10] = (byte)((uint)fVar113 >> 0x10) & ~(byte)((uint)iVar112 >> 0x10);
          auVar90[0xb] = (byte)((uint)fVar113 >> 0x18) & ~(byte)((uint)iVar112 >> 0x18);
          auVar102._12_2_ = 0;
          auVar102._0_12_ = auVar90;
          auVar102[0xe] = auVar96[2] & ~(byte)(-(uint)(fVar83 == 0.0) >> 0x10);
          auVar102[0xf] = auVar96[3] & ~(byte)(-(uint)(fVar83 == 0.0) >> 0x18);
          auVar96 = NEON_frecpe(auVar102,4);
          pfStack_d8 = auVar65._8_8_;
          local_e0 = auVar65._0_8_;
          uStack_c7 = auVar102._9_7_;
          auVar154 = NEON_frecps(auVar102,auVar96,4);
          auVar123._0_4_ = auVar96._0_4_ * auVar154._0_4_;
          auVar123._4_4_ = auVar96._4_4_ * auVar154._4_4_;
          auVar123._8_4_ = auVar96._8_4_ * auVar154._8_4_;
          auVar123._12_4_ = auVar96._12_4_ * auVar154._12_4_;
          auVar143._0_4_ = fVar151 * fVar151;
          fVar110 = (float)((ulong)auVar90._0_8_ >> 0x20);
          auVar143._4_4_ = fVar110 * fVar110;
          fVar113 = auVar90._8_4_;
          auVar143._8_4_ = fVar113 * fVar113;
          fVar87 = auVar102._12_4_;
          auVar143._12_4_ = fVar87 * fVar87;
          auVar154 = NEON_frecps(auVar102,auVar123,4);
          auVar96 = NEON_ext(auVar143,auVar143,8,1);
          iVar116 = -(uint)(fVar151 == 0.0);
          iVar132 = -(uint)(fVar110 == 0.0);
          iVar112 = -(uint)(fVar113 == 0.0);
          iVar114 = -(uint)(fVar87 == 0.0);
          auVar124._0_4_ = auVar123._0_4_ * auVar154._0_4_;
          auVar124._4_4_ = auVar123._4_4_ * auVar154._4_4_;
          auVar124._8_4_ = auVar123._8_4_ * auVar154._8_4_;
          auVar124._12_4_ = auVar123._12_4_ * auVar154._12_4_;
          auVar145._8_4_ = 0x7f7fffee;
          auVar145._0_8_ = 0x7f7fffee7f7fffee;
          auVar145._12_4_ = 0x7f7fffee;
          auVar144[0] = ~(byte)iVar116;
          auVar144[1] = ~(byte)((uint)iVar116 >> 8);
          auVar144[2] = ~(byte)((uint)iVar116 >> 0x10);
          auVar144[3] = ~(byte)((uint)iVar116 >> 0x18);
          auVar144[4] = ~(byte)iVar132;
          auVar144[5] = ~(byte)((uint)iVar132 >> 8);
          auVar144[6] = ~(byte)((uint)iVar132 >> 0x10);
          auVar144[7] = ~(byte)((uint)iVar132 >> 0x18);
          auVar144[8] = ~(byte)iVar112;
          auVar144[9] = ~(byte)((uint)iVar112 >> 8);
          auVar144[10] = ~(byte)((uint)iVar112 >> 0x10);
          auVar144[0xb] = ~(byte)((uint)iVar112 >> 0x18);
          auVar144[0xc] = ~(byte)iVar114;
          auVar144[0xd] = ~(byte)((uint)iVar114 >> 8);
          auVar144[0xe] = ~(byte)((uint)iVar114 >> 0x10);
          auVar144[0xf] = ~(byte)((uint)iVar114 >> 0x18);
          auVar145 = auVar145 ^ (auVar145 ^ auVar124) & auVar144;
          uStack_b8 = auVar145._8_8_;
          local_c0 = auVar145._0_8_;
          uVar153 = uVar187;
          local_d0 = auVar90._0_8_;
          bStack_c8 = auVar90[8];
          if (0.0 < auVar96._0_4_ + auVar143._0_4_ + auVar143._4_4_) {
            auVar66._8_8_ = uVar184;
            auVar66._0_8_ = uVar183;
            FUN_031b0310(auVar66,&local_e0,&local_160,&local_100,&local_110);
            fVar83 = (float)local_110;
            uVar153 = local_110;
          }
          if (1.0 <= fVar83) {
            uVar153 = 0x3f8000003f800000;
          }
          iVar116 = 4;
        }
        goto LAB_031ad96c;
      }
      fStack_1008 = auVar190._8_4_;
      fStack_1004 = auVar190._12_4_;
      local_1010 = auVar190._0_4_;
      fStack_100c = auVar190._4_4_;
      uVar153 = 0;
      iVar116 = 1;
LAB_031adcdc:
      uVar166 = 0;
      goto LAB_031adbbc;
    }
    lVar35 = 0;
    lVar50 = 0;
    uVar153 = 0x3f8000003f800000;
    iVar116 = 9;
    pfVar198 = *(float **)(*param_2 + 8);
    auVar74._0_8_ = *(long *)*param_2;
    uVar51 = 0xffffffff;
    fStack_fd8 = SUB84(pfVar198,0);
    fStack_fd4 = (float)((ulong)pfVar198 >> 0x20);
    local_fe0 = (float)auVar74._0_8_;
    fStack_fdc = (float)((ulong)auVar74._0_8_ >> 0x20);
    local_1010 = local_fe0;
    fStack_100c = fStack_fdc;
    fStack_1008 = fStack_fd8;
    fStack_1004 = fStack_fd4;
LAB_031ad96c:
    fVar87 = (float)auVar74._0_8_;
    fVar111 = (float)((ulong)auVar74._0_8_ >> 0x20);
    fVar117 = SUB84(pfVar198,0);
    fVar83 = (local_f60 - fVar87) * (local_f60 - fVar87);
    fVar110 = (fStack_f5c - fVar111) * (fStack_f5c - fVar111);
    fVar113 = (fStack_f58 - fVar117) * (fStack_f58 - fVar117);
    fVar151 = fVar113 + fVar83 + fVar110;
    fVar113 = fVar113 + fVar83 + fVar110;
    uVar166 = CONCAT44(fVar113,fVar151);
    uVar173 = NEON_frsqrte(uVar166,4);
    fVar83 = (float)uVar173;
    fVar110 = (float)((ulong)uVar173 >> 0x20);
    uVar173 = NEON_frsqrts(uVar166,CONCAT44(fVar110 * fVar110,fVar83 * fVar83),4);
    fVar83 = fVar83 * (float)uVar173;
    fVar110 = fVar110 * (float)((ulong)uVar173 >> 0x20);
    uVar166 = NEON_frsqrts(uVar166,CONCAT44(fVar110 * fVar110,fVar83 * fVar83),4);
    iVar132 = -(uint)(fVar151 <= 0.0);
    iVar112 = -(uint)(fVar113 <= 0.0);
    fVar151 = fVar151 * (float)uVar166 * fVar83;
    fVar113 = fVar113 * (float)((ulong)uVar166 >> 0x20) * fVar110;
    uVar166 = CONCAT17((byte)((uint)fVar113 >> 0x18) & ~(byte)((uint)iVar112 >> 0x18),
                       CONCAT16((byte)((uint)fVar113 >> 0x10) & ~(byte)((uint)iVar112 >> 0x10),
                                CONCAT15((byte)((uint)fVar113 >> 8) & ~(byte)((uint)iVar112 >> 8),
                                         CONCAT14(SUB41(fVar113,0) & ~(byte)iVar112,
                                                  CONCAT13((byte)((uint)fVar151 >> 0x18) &
                                                           ~(byte)((uint)iVar132 >> 0x18),
                                                           CONCAT12((byte)((uint)fVar151 >> 0x10) &
                                                                    ~(byte)((uint)iVar132 >> 0x10),
                                                                    CONCAT11((byte)((uint)fVar151 >>
                                                                                   8) &
                                                                             ~(byte)((uint)iVar132
                                                                                    >> 8),
                                                                             SUB41(fVar151,0) &
                                                                             ~(byte)iVar132)))))));
    if (0.0 < fVar185) {
      auVar96 = *param_5;
      auVar60 = auVar96._0_12_;
      if (param_5[6][1] == '\0') {
        auVar125._8_8_ = pfVar199;
        auVar125._0_8_ = lVar52;
        auVar120 = auVar125._0_12_;
        auVar104._8_8_ = pfVar198;
        auVar104._0_8_ = auVar74._0_8_;
        auVar88 = auVar104._0_12_;
      }
      else {
        fVar83 = auVar96._0_4_ * local_170;
        fVar110 = auVar96._4_4_ * fStack_16c;
        fVar113 = auVar96._8_4_ * fStack_168;
        fVar151 = fVar83 + fVar110 + fVar113;
        fVar135 = fVar87 * local_170 + fVar111 * fStack_16c + fVar117 * fStack_168;
        auVar60._0_4_ = auVar96._0_4_ - local_170 * fVar151;
        auVar60._4_4_ = auVar96._4_4_ - fStack_16c * (fVar83 + fVar110 + fVar113);
        auVar60._8_4_ = auVar96._8_4_ - fStack_168 * fVar151;
        auVar88._0_4_ = fVar87 - local_170 * fVar135;
        auVar88._4_4_ =
             fVar111 - fStack_16c *
                       (fVar87 * local_170 + fVar111 * fStack_16c + fVar117 * fStack_168);
        auVar88._8_4_ = fVar117 - fStack_168 * fVar135;
        fVar83 = fStack_f58 * fStack_168 + local_f60 * local_170 + fStack_f5c * fStack_16c;
        auVar120._0_4_ = local_f60 - local_170 * fVar83;
        auVar120._4_4_ =
             fStack_f5c -
             fStack_16c *
             (fStack_f58 * fStack_168 + local_f60 * local_170 + fStack_f5c * fStack_16c);
        auVar120._8_4_ = fStack_f58 - fStack_168 * fVar83;
      }
      fVar83 = auVar88._0_4_ - auVar60._0_4_;
      fVar110 = auVar88._4_4_ - auVar60._4_4_;
      fVar113 = auVar88._8_4_ - auVar60._8_4_;
      fVar83 = fVar83 * fVar83;
      fVar110 = fVar110 * fVar110;
      fVar113 = fVar113 * fVar113;
      fVar151 = fVar83 + fVar110 + fVar113;
      fVar113 = fVar83 + fVar110 + fVar113;
      uVar173 = CONCAT44(fVar113,fVar151);
      if (fVar151 <= fVar86 * fVar86) goto LAB_031ad9b4;
      fVar83 = auVar120._0_4_ - auVar60._0_4_;
      fVar135 = auVar120._4_4_ - auVar60._4_4_;
      fVar133 = auVar120._8_4_ - auVar60._8_4_;
      fVar83 = fVar83 * fVar83;
      fVar135 = fVar135 * fVar135;
      fVar133 = fVar133 * fVar133;
      fVar110 = fVar83 + fVar135 + fVar133;
      fVar133 = fVar83 + fVar135 + fVar133;
      uVar174 = CONCAT44(fVar133,fVar110);
      uVar188 = NEON_frsqrte(uVar174,4);
      fVar83 = (float)uVar188;
      fVar135 = (float)((ulong)uVar188 >> 0x20);
      uVar188 = NEON_frsqrts(uVar174,CONCAT44(fVar135 * fVar135,fVar83 * fVar83),4);
      fVar83 = fVar83 * (float)uVar188;
      fVar135 = fVar135 * (float)((ulong)uVar188 >> 0x20);
      uVar174 = NEON_frsqrts(uVar174,CONCAT44(fVar135 * fVar135,fVar83 * fVar83),4);
      iVar132 = -(uint)(fVar110 <= 0.0);
      iVar112 = -(uint)(fVar133 <= 0.0);
      fVar110 = fVar110 * (float)uVar174 * fVar83;
      fVar133 = fVar133 * (float)((ulong)uVar174 >> 0x20) * fVar135;
      uVar174 = NEON_frsqrte(uVar173,4);
      fVar135 = (float)uVar174;
      fVar118 = (float)((ulong)uVar174 >> 0x20);
      uVar174 = NEON_frsqrts(uVar173,CONCAT44(fVar118 * fVar118,fVar135 * fVar135),4);
      fVar135 = fVar135 * (float)uVar174;
      fVar118 = fVar118 * (float)((ulong)uVar174 >> 0x20);
      uVar173 = NEON_frsqrts(uVar173,CONCAT44(fVar118 * fVar118,fVar135 * fVar135),4);
      fVar83 = (float)CONCAT13((byte)((uint)fVar110 >> 0x18) & ~(byte)((uint)iVar132 >> 0x18),
                               CONCAT12((byte)((uint)fVar110 >> 0x10) &
                                        ~(byte)((uint)iVar132 >> 0x10),
                                        CONCAT11((byte)((uint)fVar110 >> 8) &
                                                 ~(byte)((uint)iVar132 >> 8),
                                                 SUB41(fVar110,0) & ~(byte)iVar132)));
      iVar132 = -(uint)(fVar151 <= 0.0);
      iVar114 = -(uint)(fVar113 <= 0.0);
      fVar151 = fVar151 * (float)uVar173 * fVar135;
      fVar113 = fVar113 * (float)((ulong)uVar173 >> 0x20) * fVar118;
      fVar110 = (float)CONCAT13((byte)((uint)fVar151 >> 0x18) & ~(byte)((uint)iVar132 >> 0x18),
                                CONCAT12((byte)((uint)fVar151 >> 0x10) &
                                         ~(byte)((uint)iVar132 >> 0x10),
                                         CONCAT11((byte)((uint)fVar151 >> 8) &
                                                  ~(byte)((uint)iVar132 >> 8),
                                                  SUB41(fVar151,0) & ~(byte)iVar132)));
      fVar151 = (float)(CONCAT17((byte)((uint)fVar133 >> 0x18) & ~(byte)((uint)iVar112 >> 0x18),
                                 CONCAT16((byte)((uint)fVar133 >> 0x10) &
                                          ~(byte)((uint)iVar112 >> 0x10),
                                          CONCAT15((byte)((uint)fVar133 >> 8) &
                                                   ~(byte)((uint)iVar112 >> 8),
                                                   CONCAT14(SUB41(fVar133,0) & ~(byte)iVar112,fVar83
                                                           )))) >> 0x20);
      uVar173 = CONCAT44((float)(CONCAT17((byte)((uint)fVar113 >> 0x18) &
                                          ~(byte)((uint)iVar114 >> 0x18),
                                          CONCAT16((byte)((uint)fVar113 >> 0x10) &
                                                   ~(byte)((uint)iVar114 >> 0x10),
                                                   CONCAT15((byte)((uint)fVar113 >> 8) &
                                                            ~(byte)((uint)iVar114 >> 8),
                                                            CONCAT14(SUB41(fVar113,0) &
                                                                     ~(byte)iVar114,fVar110)))) >>
                                0x20) - fVar151,fVar110 - fVar83);
      uVar174 = NEON_frecpe(uVar173,4);
      uVar188 = NEON_frecps(uVar173,uVar174,4);
      fVar110 = (float)uVar174 * (float)uVar188;
      fVar113 = (float)((ulong)uVar174 >> 0x20) * (float)((ulong)uVar188 >> 0x20);
      uVar173 = NEON_frecps(uVar173,CONCAT44(fVar113,fVar110),4);
      uVar173 = NEON_fminnm(CONCAT44((fVar86 - fVar151) * fVar113 * (float)((ulong)uVar173 >> 0x20),
                                     (fVar86 - fVar83) * fVar110 * (float)uVar173),
                            0x7f7fffee7f7fffee,4);
      uVar173 = NEON_fmax(uVar173,0,4);
      if ((float)uVar153 <= (float)uVar173) goto LAB_031ad9b4;
      iVar116 = 6;
      if (cVar6 == '\0') {
        uVar153 = uVar173;
        goto LAB_031adbbc;
      }
LAB_031adb10:
      if (((uint)local_f30 != -1) && (((byte)local_f28 >> 5 & 1) == 0)) {
        bVar25 = false;
        uVar153 = uVar173;
        if ((local_f28 & 0x30) != 0) {
LAB_031adb38:
          plVar38 = *(long **)param_5[4];
          uVar173 = uVar153;
          bVar26 = bVar25;
          goto joined_r0x031b0158;
        }
LAB_031adb30:
        uVar153 = uVar173;
        if (local_e80 == (long *)0x0) goto LAB_031adb38;
        uVar31 = (**(code **)(*local_e80 + 0x28))(local_e80,local_e70,uVar51,&local_f38,lVar50);
        if ((uVar31 & 1) != 0) {
          plVar38 = *(long **)param_5[4];
          bVar26 = bVar25;
          goto joined_r0x031b0158;
        }
        iVar132 = iVar116;
        if (cVar6 == '\0') goto LAB_031af2d8;
LAB_031af328:
        auVar68._8_8_ = pfVar199;
        auVar68._0_8_ = lVar52;
        auVar105._8_8_ = pfVar198;
        auVar105._0_8_ = auVar74._0_8_;
        auVar91 = auVar105._0_12_;
        local_100 = (uint *)CONCAT44(fStack_fdc,local_fe0);
        auVar18._8_4_ = fStack_fd8;
        auVar18._0_8_ = local_100;
        auVar18._12_4_ = fStack_fd4;
        uStack_f8 = auVar18._8_8_;
        fStack_158 = fStack_1008;
        fStack_154 = fStack_1004;
        local_160 = local_1010;
        fStack_15c = fStack_100c;
        if (param_5[6][1] != '\0') {
          fVar83 = local_f60 * local_170 + fStack_f5c * fStack_16c + fStack_f58 * fStack_168;
          fVar151 = local_f60 * local_170 + fStack_f5c * fStack_16c + fStack_f58 * fStack_168;
          fVar110 = fStack_1008 * fStack_168 + local_1010 * local_170 + fStack_100c * fStack_16c;
          fVar113 = fStack_1008 * fStack_168 + local_1010 * local_170 + fStack_100c * fStack_16c;
          fVar135 = fStack_fd8 * fStack_168 + local_fe0 * local_170 + fStack_fdc * fStack_16c;
          fVar133 = fStack_fd8 * fStack_168 + local_fe0 * local_170 + fStack_fdc * fStack_16c;
          fVar118 = fVar87 * local_170 + fVar111 * fStack_16c + fVar117 * fStack_168;
          auVar68._0_4_ = local_f60 - local_170 * fVar83;
          auVar68._4_4_ = fStack_f5c - fStack_16c * fVar151;
          auVar68._8_4_ = fStack_f58 - fStack_168 * fVar83;
          auVar68._12_4_ = fStack_f54 - fStack_164 * fVar151;
          local_160 = local_1010 - local_170 * fVar110;
          fStack_15c = fStack_100c - fStack_16c * fVar113;
          fStack_158 = fStack_1008 - fStack_168 * fVar110;
          fStack_154 = fStack_1004 - fStack_164 * fVar113;
          auVar91._0_4_ = fVar87 - local_170 * fVar118;
          auVar91._4_4_ =
               fVar111 - fStack_16c *
                         (fVar87 * local_170 + fVar111 * fStack_16c + fVar117 * fStack_168);
          auVar91._8_4_ = fVar117 - fStack_168 * fVar118;
          uStack_f8 = CONCAT44(fStack_fd4 - fStack_164 * fVar133,fStack_fd8 - fStack_168 * fVar135);
          local_100 = (uint *)CONCAT44(fStack_fdc - fStack_16c * fVar133,
                                       local_fe0 - local_170 * fVar135);
        }
        fVar83 = auVar91._0_4_ - auVar68._0_4_;
        fVar151 = auVar91._4_4_ - auVar68._4_4_;
        fVar110 = auVar91._8_4_ - auVar68._8_4_;
        fVar135 = (float)uVar173;
        iVar116 = -(uint)(fVar83 == 0.0);
        iVar112 = -(uint)(fVar151 == 0.0);
        iVar114 = -(uint)(fVar110 == 0.0);
        iVar115 = -(uint)(fVar135 == 0.0);
        fVar83 = (float)CONCAT13((byte)((uint)fVar83 >> 0x18) & ~(byte)((uint)iVar116 >> 0x18),
                                 CONCAT12((byte)((uint)fVar83 >> 0x10) &
                                          ~(byte)((uint)iVar116 >> 0x10),
                                          CONCAT11((byte)((uint)fVar83 >> 8) &
                                                   ~(byte)((uint)iVar116 >> 8),
                                                   SUB41(fVar83,0) & ~(byte)iVar116)));
        auVar92._0_8_ =
             (uint *)CONCAT17((byte)((uint)fVar151 >> 0x18) & ~(byte)((uint)iVar112 >> 0x18),
                              CONCAT16((byte)((uint)fVar151 >> 0x10) &
                                       ~(byte)((uint)iVar112 >> 0x10),
                                       CONCAT15((byte)((uint)fVar151 >> 8) &
                                                ~(byte)((uint)iVar112 >> 8),
                                                CONCAT14(SUB41(fVar151,0) & ~(byte)iVar112,fVar83)))
                             );
        auVar92[8] = SUB41(fVar110,0) & ~(byte)iVar114;
        auVar92[9] = (byte)((uint)fVar110 >> 8) & ~(byte)((uint)iVar114 >> 8);
        auVar92[10] = (byte)((uint)fVar110 >> 0x10) & ~(byte)((uint)iVar114 >> 0x10);
        auVar92[0xb] = (byte)((uint)fVar110 >> 0x18) & ~(byte)((uint)iVar114 >> 0x18);
        auVar106[0xc] = (byte)uVar173 & ~(byte)iVar115;
        auVar106._0_12_ = auVar92;
        auVar106[0xd] = (byte)((ulong)uVar173 >> 8) & ~(byte)((uint)iVar115 >> 8);
        auVar106[0xe] = (byte)((ulong)uVar173 >> 0x10) & ~(byte)((uint)iVar115 >> 0x10);
        auVar106[0xf] = (byte)((ulong)uVar173 >> 0x18) & ~(byte)((uint)iVar115 >> 0x18);
        auVar96 = NEON_frecpe(auVar106,4);
        pfStack_d8 = auVar68._8_8_;
        local_e0 = auVar68._0_8_;
        uStack_c7 = auVar106._9_7_;
        auVar160._0_4_ = fVar83 * fVar83;
        fVar151 = (float)((ulong)auVar92._0_8_ >> 0x20);
        auVar160._4_4_ = fVar151 * fVar151;
        fVar110 = auVar92._8_4_;
        auVar160._8_4_ = fVar110 * fVar110;
        fVar113 = auVar106._12_4_;
        auVar160._12_4_ = fVar113 * fVar113;
        auVar154 = NEON_frecps(auVar106,auVar96,4);
        auVar126._0_4_ = auVar96._0_4_ * auVar154._0_4_;
        auVar126._4_4_ = auVar96._4_4_ * auVar154._4_4_;
        auVar126._8_4_ = auVar96._8_4_ * auVar154._8_4_;
        auVar126._12_4_ = auVar96._12_4_ * auVar154._12_4_;
        auVar128._8_4_ = 0x7f7fffee;
        auVar128._0_8_ = 0x7f7fffee7f7fffee;
        auVar128._12_4_ = 0x7f7fffee;
        auVar96 = NEON_frecps(auVar106,auVar126,4);
        auVar69._0_4_ = auVar126._0_4_ * auVar96._0_4_;
        auVar69._4_4_ = auVar126._4_4_ * auVar96._4_4_;
        auVar69._8_4_ = auVar126._8_4_ * auVar96._8_4_;
        auVar69._12_4_ = auVar126._12_4_ * auVar96._12_4_;
        iVar116 = -(uint)(fVar83 == 0.0);
        iVar112 = -(uint)(fVar151 == 0.0);
        iVar114 = -(uint)(fVar110 == 0.0);
        iVar115 = -(uint)(fVar113 == 0.0);
        auVar127[0] = ~(byte)iVar116;
        auVar127[1] = ~(byte)((uint)iVar116 >> 8);
        auVar127[2] = ~(byte)((uint)iVar116 >> 0x10);
        auVar127[3] = ~(byte)((uint)iVar116 >> 0x18);
        auVar127[4] = ~(byte)iVar112;
        auVar127[5] = ~(byte)((uint)iVar112 >> 8);
        auVar127[6] = ~(byte)((uint)iVar112 >> 0x10);
        auVar127[7] = ~(byte)((uint)iVar112 >> 0x18);
        auVar127[8] = ~(byte)iVar114;
        auVar127[9] = ~(byte)((uint)iVar114 >> 8);
        auVar127[10] = ~(byte)((uint)iVar114 >> 0x10);
        auVar127[0xb] = ~(byte)((uint)iVar114 >> 0x18);
        auVar127[0xc] = ~(byte)iVar115;
        auVar127[0xd] = ~(byte)((uint)iVar115 >> 8);
        auVar127[0xe] = ~(byte)((uint)iVar115 >> 0x10);
        auVar127[0xf] = ~(byte)((uint)iVar115 >> 0x18);
        auVar128 = auVar128 ^ (auVar128 ^ auVar69) & auVar127;
        auVar96 = NEON_ext(auVar160,auVar160,8,1);
        uStack_b8 = auVar128._8_8_;
        local_c0 = auVar128._0_8_;
        local_110 = uVar173;
        local_d0 = auVar92._0_8_;
        bStack_c8 = auVar92[8];
        fVar83 = fVar135;
        if (0.0 < auVar96._0_4_ + auVar160._0_4_ + auVar160._4_4_) {
          auVar70._8_8_ = uVar184;
          auVar70._0_8_ = uVar183;
          FUN_031b0310(auVar70,&local_e0,&local_160,&local_100,&local_110);
          fVar83 = (float)local_110;
        }
        uVar153 = local_110;
        if (fVar135 <= fVar83) {
          uVar153 = uVar173;
        }
        uVar173 = uVar153;
        iVar116 = 5;
        if (fVar135 <= fVar83 && iVar132 != 3) {
          iVar116 = iVar132;
        }
      }
    }
    else {
LAB_031ad9b4:
      uVar173 = uVar153;
      if (iVar116 != 9) goto LAB_031adb10;
      bVar25 = true;
      bVar26 = true;
      if ((uint)local_f30 != -1) {
        iVar116 = 9;
        if ((local_f28 & 0x30) == 0) goto LAB_031adb30;
        goto LAB_031adb38;
      }
      iVar116 = 9;
      plVar38 = *(long **)param_5[4];
joined_r0x031b0158:
      if ((plVar38 != (long *)0x0) || (*(long *)(param_5[3] + 8) != 0)) {
        if (bVar26) {
          local_ef0 = 0xffffffff;
          local_ee0 = 0;
          local_ed8 = 0;
          local_ee8 = (int *)0x0;
        }
        else {
          local_ee8 = &local_f38;
          local_ef0 = uVar51;
          local_ee0 = lVar50;
          local_ed8 = lVar35;
        }
        bVar39 = 0x40;
        if (!bVar26) {
          bVar39 = 0;
        }
        bVar39 = bVar39 | (local_fe4 == 0) << 4;
        bVar2 = 0x20;
        if (bVar39 != 0) {
          bVar2 = bVar39;
        }
        local_ed0 = auVar74._0_8_;
        pfStack_ec8 = pfVar198;
        if (plVar38 == (long *)0x0) {
          uVar31 = 1;
        }
        else {
          local_d0 = local_f20;
          bStack_c8 = bVar2 | 2;
          local_e0 = param_4;
          pfStack_d8 = pfVar41;
          uVar31 = (**(code **)(*plVar38 + 0x20))(plVar38,&local_e0);
          uVar31 = uVar31 & 0xffffffff;
        }
        plVar38 = *(long **)(param_5[3] + 8);
        if (plVar38 != (long *)0x0) {
          local_d0 = local_f20;
          bStack_c8 = bVar2 | 2;
          local_e0 = param_4;
          pfStack_d8 = pfVar41;
          local_c0 = uVar137;
          uStack_b8 = uVar166;
          auVar96 = (**(code **)(*plVar38 + 0x20))(plVar38,&local_e0);
          uVar166 = auVar96._0_8_;
        }
        if ((uVar31 & 1) == 0) {
          iVar132 = iVar116;
          if (cVar6 == '\0' || (uVar31 & 1) != 0) goto LAB_031af2d8;
          goto LAB_031af328;
        }
      }
    }
    if (((byte)local_f28 >> 4 & 1) != 0) {
      if ((param_5[6][2] == '\0') || (((byte)param_5[6][5] >> 5 & 1) != 0)) goto LAB_031adb58;
LAB_031adce8:
      if (*(long *)(lVar10 + 0x38d490) == 0) {
        lVar53 = FUN_0333d16c(0,1);
        *(long *)(lVar10 + 0x38d490) = lVar53;
        lVar53 = *(long *)(lVar53 + 0x10);
      }
      else {
        lVar53 = *(long *)(*(long *)(lVar10 + 0x38d490) + 0x10);
      }
      if (lVar53 != 0) {
        puVar9 = *(undefined8 **)(lVar53 + 8);
        uVar31 = (long)puVar9 + 0x17U & 0xfffffffffffffff8;
        if ((uVar31 <= *(ulong *)(lVar53 + 0x10)) &&
           (*(ulong *)(lVar53 + 8) = uVar31, puVar9 != (undefined8 *)0x0)) {
          *puVar9 = "TtcheckAgainstNearbyBoundaries";
          uVar153 = nn::os::GetSystemTick();
          puVar9[1] = uVar153;
        }
      }
      fVar135 = fVar87 - local_f60;
      fVar133 = fVar111 - fStack_f5c;
      auVar157._0_8_ = CONCAT44(fVar133,fVar135);
      auVar157._8_4_ = fVar117 - fStack_f58;
      auVar157._12_4_ = (float)((ulong)pfVar198 >> 0x20) - fStack_f54;
      auVar96 = ZEXT816(0x3f800000);
      auVar168._8_4_ = 0x7f7fffee;
      auVar168._0_8_ = 0x7f7fffee7f7fffee;
      auVar168._12_4_ = 0x7f7fffee;
      bVar39 = param_5[6][5];
      iVar132 = -(uint)(fVar135 == 0.0);
      iVar112 = -(uint)(fVar133 == 0.0);
      iVar114 = -(uint)(auVar157._8_4_ == 0.0);
      iVar115 = -(uint)(auVar96._0_4_ == 0.0);
      fVar83 = (float)CONCAT13((byte)((uint)fVar135 >> 0x18) & ~(byte)((uint)iVar132 >> 0x18),
                               CONCAT12((byte)((uint)fVar135 >> 0x10) &
                                        ~(byte)((uint)iVar132 >> 0x10),
                                        CONCAT11((byte)((uint)fVar135 >> 8) &
                                                 ~(byte)((uint)iVar132 >> 8),
                                                 SUB41(fVar135,0) & ~(byte)iVar132)));
      auVar61._0_8_ =
           (uint *)CONCAT17((byte)((uint)fVar133 >> 0x18) & ~(byte)((uint)iVar112 >> 0x18),
                            CONCAT16((byte)((uint)fVar133 >> 0x10) & ~(byte)((uint)iVar112 >> 0x10),
                                     CONCAT15((byte)((uint)fVar133 >> 8) &
                                              ~(byte)((uint)iVar112 >> 8),
                                              CONCAT14(SUB41(fVar133,0) & ~(byte)iVar112,fVar83))));
      auVar61[8] = SUB41(auVar157._8_4_,0) & ~(byte)iVar114;
      auVar61[9] = (byte)((uint)auVar157._8_4_ >> 8) & ~(byte)((uint)iVar114 >> 8);
      auVar61[10] = (byte)((uint)auVar157._8_4_ >> 0x10) & ~(byte)((uint)iVar114 >> 0x10);
      auVar61[0xb] = (byte)((uint)auVar157._8_4_ >> 0x18) & ~(byte)((uint)iVar114 >> 0x18);
      auVar63._12_2_ = 0;
      auVar63._0_12_ = auVar61;
      auVar63[0xe] = auVar96[2] & ~(byte)((uint)iVar115 >> 0x10);
      auVar63[0xf] = auVar96[3] & ~(byte)((uint)iVar115 >> 0x18);
      auVar96 = NEON_frecpe(auVar63,4);
      auVar141._0_4_ = fVar83 * fVar83;
      fVar151 = (float)((ulong)auVar61._0_8_ >> 0x20);
      auVar141._4_4_ = fVar151 * fVar151;
      fVar110 = auVar61._8_4_;
      auVar141._8_4_ = fVar110 * fVar110;
      fVar113 = auVar63._12_4_;
      auVar141._12_4_ = fVar113 * fVar113;
      uStack_c7 = auVar63._9_7_;
      auVar154 = NEON_frecps(auVar63,auVar96,4);
      auVar98._0_4_ = auVar96._0_4_ * auVar154._0_4_;
      auVar98._4_4_ = auVar96._4_4_ * auVar154._4_4_;
      auVar98._8_4_ = auVar96._8_4_ * auVar154._8_4_;
      auVar98._12_4_ = auVar96._12_4_ * auVar154._12_4_;
      auVar96 = NEON_frecps(auVar63,auVar98,4);
      auVar99._0_4_ = auVar98._0_4_ * auVar96._0_4_;
      auVar99._4_4_ = auVar98._4_4_ * auVar96._4_4_;
      auVar99._8_4_ = auVar98._8_4_ * auVar96._8_4_;
      auVar99._12_4_ = auVar98._12_4_ * auVar96._12_4_;
      iVar132 = -(uint)(fVar83 == 0.0);
      iVar112 = -(uint)(fVar151 == 0.0);
      iVar114 = -(uint)(fVar110 == 0.0);
      iVar115 = -(uint)(fVar113 == 0.0);
      auVar122[0] = ~(byte)iVar132;
      auVar122[1] = ~(byte)((uint)iVar132 >> 8);
      auVar122[2] = ~(byte)((uint)iVar132 >> 0x10);
      auVar122[3] = ~(byte)((uint)iVar132 >> 0x18);
      auVar122[4] = ~(byte)iVar112;
      auVar122[5] = ~(byte)((uint)iVar112 >> 8);
      auVar122[6] = ~(byte)((uint)iVar112 >> 0x10);
      auVar122[7] = ~(byte)((uint)iVar112 >> 0x18);
      auVar122[8] = ~(byte)iVar114;
      auVar122[9] = ~(byte)((uint)iVar114 >> 8);
      auVar122[10] = ~(byte)((uint)iVar114 >> 0x10);
      auVar122[0xb] = ~(byte)((uint)iVar114 >> 0x18);
      auVar122[0xc] = ~(byte)iVar115;
      auVar122[0xd] = ~(byte)((uint)iVar115 >> 8);
      auVar122[0xe] = ~(byte)((uint)iVar115 >> 0x10);
      auVar122[0xf] = ~(byte)((uint)iVar115 >> 0x18);
      auVar154 = auVar168 ^ (auVar168 ^ auVar99) & auVar122;
      auVar96 = NEON_ext(auVar141,auVar141,8,1);
      uStack_b8 = auVar154._8_8_;
      local_c0 = auVar154._0_8_;
      local_f90 = (float)uVar173;
      local_e0 = lVar52;
      pfStack_d8 = pfVar199;
      local_d0 = auVar61._0_8_;
      bStack_c8 = auVar61[8];
      local_b0 = lVar53;
      if (0.0 < auVar96._0_4_ + auVar141._0_4_ + auVar141._4_4_) {
        local_100 = (uint *)0x0;
        uStack_f8 = 0x8000000000000000;
        local_e8 = 0x40;
        lVar52 = *(long *)(lVar10 + 0x38d490);
        if (lVar52 == 0) {
          lVar52 = FUN_0333d16c(0,1);
          *(long *)(lVar10 + 0x38d490) = lVar52;
        }
        lVar53 = *(long *)(lVar52 + 8);
        if (*(ulong *)(lVar53 + 0x10) < 0x100) {
LAB_031aeb68:
          puVar33 = (uint *)FUN_032ce670(lVar53,0x100);
          lVar52 = *(long *)(lVar10 + 0x38d490);
        }
        else {
          puVar33 = *(uint **)(lVar53 + 0x18);
          if (*(uint **)(lVar53 + 0x20) < puVar33 + 0x40) goto LAB_031aeb68;
          *(uint **)(lVar53 + 0x18) = puVar33 + 0x40;
        }
        uStack_f8 = CONCAT44(0x80000040,(uint)uStack_f8);
        local_100 = puVar33;
        local_f0 = puVar33;
        if (lVar52 == 0) {
          lVar52 = FUN_0333d16c(0,1);
          *(long *)(lVar10 + 0x38d490) = lVar52;
        }
        lVar52 = *(long *)(lVar52 + 8);
        if (0x1ff < *(ulong *)(lVar52 + 0x10)) {
          __s = *(void **)(lVar52 + 0x18);
          if ((long)__s + 0x200U <= *(ulong *)(lVar52 + 0x20)) {
            *(ulong *)(lVar52 + 0x18) = (long)__s + 0x200U;
            goto LAB_031ade28;
          }
        }
        __s = (void *)FUN_032ce670(lVar52,0x200);
LAB_031ade28:
        memset(__s,0xff,0x200);
        *puVar33 = uVar5;
        iVar132 = 0;
        bVar25 = false;
        uVar31 = 1;
        iVar112 = 3;
        uStack_f8 = uStack_f8 & 0xffffffff00000000;
LAB_031ade64:
        uVar31 = (long)(int)uVar31 - 1;
        uVar30 = puVar33[uVar31];
        uVar165 = (ulong)uVar30;
        iVar114 = (int)uVar31;
        uStack_f8 = CONCAT44(uStack_f8._4_4_,iVar114);
        uVar29 = uVar30 * -0x61c8864f >> 0x18 & 0x7f;
        puVar45 = (uint *)((long)__s + (ulong)uVar29 * 4);
        uVar47 = *puVar45;
        if (uVar47 != 0xffffffff) {
          uVar55 = uVar47;
          uVar28 = uVar29;
          do {
            puVar33 = local_100;
            if (uVar55 == uVar30) goto joined_r0x031ae998;
            uVar28 = uVar28 + 1 & 0x7f;
            uVar55 = *(uint *)((long)__s + (ulong)uVar28 * 4);
          } while (uVar55 != 0xffffffff);
        }
        if (iVar132 * 2 < 0x80) {
          if (uVar47 == 0xffffffff) {
            iVar114 = 1;
          }
          else if (uVar47 == uVar30) {
            iVar114 = 0;
          }
          else {
            do {
              uVar29 = uVar29 + 1 & 0x7f;
              uVar47 = *(uint *)((long)__s + (ulong)uVar29 * 4);
              if (uVar47 == 0xffffffff) {
                iVar114 = 1;
                goto LAB_031ae9c8;
              }
            } while (uVar47 != uVar30);
            iVar114 = 0;
LAB_031ae9c8:
            puVar45 = (uint *)((long)__s + (ulong)uVar29 * 4);
          }
          *puVar45 = uVar30;
          uVar49 = uVar165 & 0x3fffff;
          lVar53 = *(long *)(*(long *)(param_4 + 0x38) + (ulong)(uVar30 >> 0x16) * 0xf0);
          lVar52 = *(long *)(lVar53 + 0x20);
          iVar195 = *(int *)(lVar52 + 0x50);
          iVar196 = (int)uVar49;
          iVar115 = iVar196 - *(int *)(lVar52 + 0x20);
          if (iVar196 < *(int *)(lVar52 + 0x20)) {
            if (*(int *)(lVar52 + 0x98) == 0) {
              iVar115 = iVar196;
LAB_031adef8:
              lVar35 = *(long *)(lVar52 + 0x120) + (long)(iVar115 * iVar195) * 4;
              lVar52 = *(long *)(lVar52 + 0xb0);
              goto LAB_031adf1c;
            }
            iVar115 = *(int *)(*(long *)(lVar52 + 0x90) + uVar49 * 4);
            if (iVar115 != -1) goto LAB_031adef8;
            lVar35 = *(long *)(lVar52 + 0x48) + (long)(iVar195 * iVar196) * 4;
            puVar33 = (uint *)(*(long *)(lVar52 + 0x18) + uVar49 * 0x10);
          }
          else {
            lVar35 = *(long *)(lVar52 + 0x140) + (long)(iVar195 * iVar115) * 4;
            lVar52 = *(long *)(lVar52 + 0xd0);
LAB_031adf1c:
            puVar33 = (uint *)(lVar52 + (long)iVar115 * 0x10);
          }
          iVar132 = iVar114 + iVar132;
          if (local_e80 == (long *)0x0) {
            uVar29 = 1;
          }
          else {
            uVar29 = (**(code **)(*local_e80 + 0x20))
                               (local_e80,local_e70,uVar165,puVar33,lVar35,
                                lVar35 + (long)iVar195 * 4);
          }
          sVar37 = *(short *)((long)puVar33 + 10);
          puVar45 = puVar33 + 1;
          if (sVar37 < 1) {
            puVar45 = puVar33;
          }
          uVar47 = *puVar45;
          if (uVar47 != 0xffffffff) {
LAB_031adf60:
            uVar24 = uStack_c7;
            bVar2 = bStack_c8;
            puVar45 = local_d0;
            if ((((bVar39 & 3) == 0) && (uVar30 = puVar33[1], (int)uVar30 <= (int)uVar47)) &&
               (iVar114 = (int)sVar37, (int)uVar47 < (int)(uVar30 + iVar114))) goto LAB_031ae200;
            lVar52 = *(long *)(lVar53 + 0x20);
            iVar114 = *(int *)(lVar52 + 0x60);
            lVar35 = (long)iVar114;
            uVar30 = uVar47 - *(int *)(lVar52 + 0x30);
            if ((int)uVar47 < *(int *)(lVar52 + 0x30)) {
              uVar30 = uVar47;
              if ((*(int *)(lVar52 + 0x78) == 0) ||
                 (uVar30 = *(uint *)(*(long *)(lVar52 + 0x70) + (long)(int)uVar47 * 4),
                 uVar30 != 0xffffffff)) {
                lVar50 = *(long *)(lVar52 + 0x130) + (long)(int)(uVar30 * iVar114) * 4;
                lVar35 = lVar50 + lVar35 * 4;
                lVar43 = *(long *)(lVar52 + 0xc0);
                goto LAB_031adfdc;
              }
              lVar50 = *(long *)(lVar52 + 0x58) + (long)(int)(iVar114 * uVar47) * 4;
              piVar46 = (int *)(*(long *)(lVar52 + 0x28) + (long)(int)uVar47 * 0x14);
              lVar35 = lVar50 + lVar35 * 4;
            }
            else {
              lVar50 = *(long *)(lVar52 + 0x150) + (long)(int)(iVar114 * uVar30) * 4;
              lVar35 = lVar50 + lVar35 * 4;
              lVar43 = *(long *)(lVar52 + 0xe0);
LAB_031adfdc:
              piVar46 = (int *)(lVar43 + (long)(int)uVar30 * 0x14);
            }
            iVar196 = *(int *)(lVar52 + 0x40);
            iVar115 = *piVar46;
            iVar195 = piVar46[1];
            iVar114 = 0;
            if (iVar196 <= iVar115) {
              iVar114 = iVar196;
            }
            plVar38 = (long *)(lVar52 + 0x38);
            if (iVar196 <= iVar115) {
              plVar38 = (long *)(lVar52 + 0xf0);
            }
            plVar4 = (long *)(lVar52 + 0x38);
            if (iVar196 <= iVar195) {
              plVar4 = (long *)(lVar52 + 0xf0);
            }
            pfVar199 = (float *)(*plVar38 + (long)(iVar115 - iVar114) * 0x10);
            fVar83 = *pfVar199;
            fVar151 = pfVar199[1];
            fVar110 = pfVar199[2];
            iVar114 = 0;
            if (iVar196 <= iVar195) {
              iVar114 = iVar196;
            }
            auVar13._9_7_ = uStack_c7;
            auVar13[8] = bStack_c8;
            uVar193 = NEON_fmov(0x3f800000,4);
            pfVar199 = (float *)(*plVar4 + (long)(iVar195 - iVar114) * 0x10);
            fVar113 = *pfVar199;
            fVar118 = pfVar199[1];
            fVar134 = pfVar199[2];
            fVar202 = *(float *)(lVar53 + 0x90) +
                      *(float *)(lVar53 + 0x80) * fVar110 +
                      *(float *)(lVar53 + 0x60) * fVar83 + *(float *)(lVar53 + 0x70) * fVar151;
            fVar203 = *(float *)(lVar53 + 0x94) +
                      *(float *)(lVar53 + 0x84) * fVar110 +
                      *(float *)(lVar53 + 100) * fVar83 + *(float *)(lVar53 + 0x74) * fVar151;
            local_110 = CONCAT44(fVar203,fVar202);
            fVar204 = *(float *)(lVar53 + 0x98) +
                      *(float *)(lVar53 + 0x88) * fVar110 +
                      *(float *)(lVar53 + 0x68) * fVar83 + *(float *)(lVar53 + 0x78) * fVar151;
            fVar205 = *(float *)(lVar53 + 0x9c) +
                      *(float *)(lVar53 + 0x8c) * fVar110 +
                      *(float *)(lVar53 + 0x6c) * fVar83 + *(float *)(lVar53 + 0x7c) * fVar151;
            uStack_108 = CONCAT44(fVar205,fVar204);
            fVar110 = fVar202 - local_f60;
            fVar152 = fVar203 - fStack_f5c;
            fVar161 = fVar204 - fStack_f58;
            fVar162 = fVar205 - fStack_f54;
            fVar171 = *(float *)(lVar53 + 0x90) +
                      *(float *)(lVar53 + 0x80) * fVar134 +
                      *(float *)(lVar53 + 0x60) * fVar113 + *(float *)(lVar53 + 0x70) * fVar118;
            fVar182 = *(float *)(lVar53 + 0x94) +
                      *(float *)(lVar53 + 0x84) * fVar134 +
                      *(float *)(lVar53 + 100) * fVar113 + *(float *)(lVar53 + 0x74) * fVar118;
            local_120 = CONCAT44(fVar182,fVar171);
            fVar200 = *(float *)(lVar53 + 0x98) +
                      *(float *)(lVar53 + 0x88) * fVar134 +
                      *(float *)(lVar53 + 0x68) * fVar113 + *(float *)(lVar53 + 0x78) * fVar118;
            fVar201 = *(float *)(lVar53 + 0x9c) +
                      *(float *)(lVar53 + 0x8c) * fVar134 +
                      *(float *)(lVar53 + 0x6c) * fVar113 + *(float *)(lVar53 + 0x7c) * fVar118;
            uStack_118 = CONCAT44(fVar201,fVar200);
            fVar178 = (float)((uint7)uStack_c7 >> 0x18);
            auVar64._0_4_ = fVar135 * fVar178;
            auVar64._4_4_ = fVar133 * fVar178;
            auVar64._8_4_ = auVar157._8_4_ * fVar178;
            auVar64._12_4_ = auVar157._12_4_ * fVar178;
            auVar154 = NEON_ext(auVar64,auVar64,4,1);
            auVar100._0_4_ = fVar171 - fVar202;
            auVar100._4_4_ = fVar182 - fVar203;
            auVar100._8_4_ = fVar200 - fVar204;
            auVar100._12_4_ = fVar201 - fVar205;
            auVar96 = NEON_ext(auVar100,auVar100,4,1);
            auVar194._0_4_ = auVar100._0_4_ * fVar110;
            auVar194._4_4_ = auVar100._4_4_ * fVar152;
            auVar194._8_4_ = auVar100._8_4_ * fVar161;
            auVar194._12_4_ = auVar100._12_4_ * fVar162;
            fVar83 = auVar96._0_4_;
            fVar151 = auVar96._4_4_;
            fVar113 = auVar100._0_4_ * auVar154._0_4_ - fVar83 * auVar64._0_4_;
            fVar118 = auVar100._4_4_ * auVar154._4_4_ - fVar151 * auVar64._4_4_;
            auVar158._0_8_ = CONCAT44(fVar118,fVar113);
            auVar158._8_4_ = auVar100._8_4_ * auVar64._0_4_ - auVar100._0_4_ * auVar64._8_4_;
            auVar158._12_4_ = auVar100._12_4_ * auVar64._4_4_ - auVar100._4_4_ * auVar64._12_4_;
            auVar96 = NEON_ext(auVar158,auVar158,4,1);
            uVar174 = NEON_ext(auVar96._0_8_,auVar158._0_8_,4,1);
            fVar134 = auVar96._0_4_;
            fVar164 = auVar96._4_4_;
            fVar163 = fVar134 * fVar134 + fVar164 * fVar164 + fVar113 * fVar113;
            fVar170 = fVar134 * fVar134 + fVar164 * fVar164 + fVar113 * fVar113;
            uVar153 = CONCAT44(fVar170,fVar163);
            uVar188 = NEON_frecpe(uVar153,4);
            uVar189 = NEON_frecps(uVar153,uVar188,4);
            auVar175._0_4_ = fVar83 * fVar134 - auVar100._0_4_ * (float)uVar174;
            auVar175._4_4_ = fVar151 * fVar164 - auVar100._4_4_ * (float)((ulong)uVar174 >> 0x20);
            auVar175._8_4_ = auVar100._0_4_ * fVar113 - auVar100._8_4_ * fVar134;
            auVar175._12_4_ = auVar100._4_4_ * fVar118 - auVar100._12_4_ * fVar164;
            auVar96 = NEON_ext(auVar175,auVar175,4,1);
            fVar118 = (float)uVar188 * (float)uVar189;
            fVar164 = (float)((ulong)uVar188 >> 0x20) * (float)((ulong)uVar189 >> 0x20);
            iVar114 = -(uint)(fVar163 == 0.0);
            iVar115 = -(uint)(fVar170 == 0.0);
            uVar153 = NEON_frecps(uVar153,CONCAT44(fVar164,fVar118),4);
            uVar31 = CONCAT17(~(byte)((uint)iVar115 >> 0x18),
                              CONCAT16(~(byte)((uint)iVar115 >> 0x10),
                                       CONCAT15(~(byte)((uint)iVar115 >> 8),
                                                CONCAT14(~(byte)iVar115,
                                                         CONCAT13(~(byte)((uint)iVar114 >> 0x18),
                                                                  CONCAT12(~(byte)((uint)iVar114 >>
                                                                                  0x10),
                                                                           CONCAT11(~(byte)((uint)
                                                  iVar114 >> 8),~(byte)iVar114)))))));
            fVar113 = fVar110 * auVar96._0_4_;
            fVar134 = fVar152 * auVar96._4_4_;
            auVar191._0_4_ = auVar64._0_4_ * auVar64._0_4_;
            auVar191._4_4_ = auVar64._4_4_ * auVar64._4_4_;
            auVar191._8_4_ = auVar64._8_4_ * auVar64._8_4_;
            auVar191._12_4_ = auVar64._12_4_ * auVar64._12_4_;
            uVar49 = CONCAT44(fVar164 * (float)((ulong)uVar153 >> 0x20),fVar118 * (float)uVar153) &
                     uVar31;
            auVar179._0_4_ = fVar110 * auVar64._0_4_;
            auVar179._4_4_ = fVar152 * auVar64._4_4_;
            auVar179._8_4_ = fVar161 * auVar64._8_4_;
            auVar179._12_4_ = fVar162 * auVar64._12_4_;
            auVar192 = NEON_ext(auVar191,auVar191,8,1);
            auVar154 = NEON_ext(auVar179,auVar179,8,1);
            auVar176._0_4_ = auVar100._0_4_ * auVar100._0_4_;
            auVar176._4_4_ = auVar100._4_4_ * auVar100._4_4_;
            auVar176._8_4_ = auVar100._8_4_ * auVar100._8_4_;
            auVar176._12_4_ = auVar100._12_4_ * auVar100._12_4_;
            auVar96 = NEON_ext(auVar176,auVar176,8,1);
            auVar95 = NEON_ext(auVar194,auVar194,8,1);
            auVar180._0_4_ = auVar192._0_4_ + auVar191._0_4_ + auVar191._4_4_;
            auVar180._4_4_ = auVar154._0_4_ + auVar179._0_4_ + auVar179._4_4_;
            fVar118 = auVar96._0_4_ + auVar176._0_4_ + auVar176._4_4_;
            fVar163 = auVar95._0_4_ + auVar194._0_4_ + auVar194._4_4_;
            auVar180._12_4_ = fVar163;
            auVar180._8_4_ = fVar118;
            auVar96 = NEON_frecpe(auVar180,4);
            auVar154 = NEON_frecps(auVar180,auVar96,4);
            uVar153 = NEON_fminnm(CONCAT44((float)(uVar49 >> 0x20) *
                                           (fVar113 + fVar134 + fVar161 * auVar175._0_4_),
                                           (float)uVar49 *
                                           (fVar113 + fVar134 + fVar161 * auVar175._0_4_)),uVar193,4
                                 );
            iVar114 = -(uint)(auVar180._0_4_ == 0.0);
            iVar115 = -(uint)(auVar180._4_4_ == 0.0);
            iVar195 = -(uint)(fVar118 == 0.0);
            iVar196 = -(uint)(fVar163 == 0.0);
            auVar197._0_4_ = auVar96._0_4_ * auVar154._0_4_;
            auVar197._4_4_ = auVar96._4_4_ * auVar154._4_4_;
            auVar197._8_4_ = auVar96._8_4_ * auVar154._8_4_;
            auVar197._12_4_ = auVar96._12_4_ * auVar154._12_4_;
            auVar96 = NEON_frecps(auVar180,auVar197,4);
            uVar167 = NEON_fmax(uVar153,0,4);
            fVar170 = auVar100._8_4_ * auVar64._8_4_ +
                      auVar100._0_4_ * auVar64._0_4_ + auVar100._4_4_ * auVar64._4_4_;
            fVar172 = auVar100._8_4_ * auVar64._8_4_ +
                      auVar100._0_4_ * auVar64._0_4_ + auVar100._4_4_ * auVar64._4_4_;
            fVar113 = auVar197._0_4_ * auVar96._0_4_;
            fVar118 = auVar197._4_4_ * auVar96._4_4_;
            fVar134 = auVar197._8_4_ * auVar96._8_4_;
            fVar164 = auVar197._12_4_ * auVar96._12_4_;
            auVar181._0_4_ =
                 (float)CONCAT13((byte)((uint)fVar113 >> 0x18) & ~(byte)((uint)iVar114 >> 0x18),
                                 CONCAT12((byte)((uint)fVar113 >> 0x10) &
                                          ~(byte)((uint)iVar114 >> 0x10),
                                          CONCAT11((byte)((uint)fVar113 >> 8) &
                                                   ~(byte)((uint)iVar114 >> 8),
                                                   SUB41(fVar113,0) & ~(byte)iVar114)));
            auVar181[4] = SUB41(fVar118,0) & ~(byte)iVar115;
            auVar181[5] = (byte)((uint)fVar118 >> 8) & ~(byte)((uint)iVar115 >> 8);
            auVar181[6] = (byte)((uint)fVar118 >> 0x10) & ~(byte)((uint)iVar115 >> 0x10);
            auVar181[7] = (byte)((uint)fVar118 >> 0x18) & ~(byte)((uint)iVar115 >> 0x18);
            auVar181[8] = SUB41(fVar134,0) & ~(byte)iVar195;
            auVar181[9] = (byte)((uint)fVar134 >> 8) & ~(byte)((uint)iVar195 >> 8);
            auVar181[10] = (byte)((uint)fVar134 >> 0x10) & ~(byte)((uint)iVar195 >> 0x10);
            auVar181[0xb] = (byte)((uint)fVar134 >> 0x18) & ~(byte)((uint)iVar195 >> 0x18);
            auVar181[0xc] = SUB41(fVar164,0) & ~(byte)iVar196;
            auVar181[0xd] = (byte)((uint)fVar164 >> 8) & ~(byte)((uint)iVar196 >> 8);
            auVar181[0xe] = (byte)((uint)fVar164 >> 0x10) & ~(byte)((uint)iVar196 >> 0x10);
            auVar181[0xf] = (byte)((uint)fVar164 >> 0x18) & ~(byte)((uint)iVar196 >> 0x18);
            auVar96 = NEON_ext(auVar181,auVar181,8,1);
            fVar113 = ((float)uVar167 * fVar170 - fVar163) * auVar96._0_4_;
            fVar118 = ((float)(uVar167 >> 0x20) * fVar172 - fVar163) * auVar96._0_4_;
            uVar153 = NEON_fminnm(CONCAT44(fVar118,fVar113),uVar193,4);
            uVar153 = NEON_fmax(uVar153,0,4);
            fVar163 = (float)uVar153;
            fVar164 = (float)((ulong)uVar153 >> 0x20);
            uVar153 = NEON_fminnm(CONCAT44((auVar180._4_4_ + fVar172 * fVar164) * auVar181._0_4_,
                                           (auVar180._4_4_ + fVar170 * fVar163) * auVar181._0_4_),
                                  uVar193,4);
            uVar49 = NEON_fmax(uVar153,0,4);
            uVar49 = uVar49 ^ (uVar49 ^ uVar167) &
                              CONCAT44(-(uint)(fVar164 == fVar118),-(uint)(fVar163 == fVar113)) &
                              uVar31;
            fVar118 = (float)uVar49;
            fVar134 = (float)(uVar49 >> 0x20);
            fVar110 = auVar100._0_4_ * fVar163 + (fVar110 - auVar64._0_4_ * fVar118);
            fVar113 = auVar100._4_4_ * fVar164 + (fVar152 - auVar64._4_4_ * fVar134);
            fVar118 = auVar100._8_4_ * fVar163 + (fVar161 - auVar64._8_4_ * fVar118);
            fVar134 = auVar100._12_4_ * fVar164 + (fVar162 - auVar64._12_4_ * fVar134);
            auVar142._0_4_ = fVar110 * fVar110;
            auVar142._4_4_ = fVar113 * fVar113;
            auVar142._8_4_ = fVar118 * fVar118;
            auVar142._12_4_ = fVar134 * fVar134;
            auVar96 = NEON_ext(auVar142,auVar142,8,1);
            if (auVar142._0_4_ + auVar142._4_4_ + auVar96._0_4_ < fVar56 * fVar56) {
              bVar8 = *(byte *)(piVar46 + 4);
              if (piVar46[2] == -1) {
                bVar40 = 0;
              }
              else {
                bVar40 = (bVar8 >> 5 ^ 0xff) & 1;
              }
              bVar26 = bVar40 != 0;
              if ((bVar8 >> 4 & 1) == 0) {
                if (param_5[6][6] == '\0') goto LAB_031aee58;
LAB_031aea20:
                auVar20._8_4_ = fStack_168;
                auVar20._0_8_ = CONCAT44(fStack_16c,local_170);
                auVar20._12_4_ = fStack_164;
                auVar96 = NEON_ext(auVar20,auVar20,8,1);
                uVar153 = NEON_ext(CONCAT44(fStack_16c,local_170),auVar96._0_8_,4,1);
                auVar103._0_4_ = auVar100._0_4_ * (float)uVar153 - fVar83 * local_170;
                auVar103._4_4_ =
                     auVar100._4_4_ * (float)((ulong)uVar153 >> 0x20) - fVar151 * fStack_16c;
                auVar103._8_4_ = auVar100._8_4_ * local_170 - auVar100._0_4_ * fStack_168;
                auVar103._12_4_ = auVar100._12_4_ * fStack_16c - auVar100._4_4_ * fStack_164;
                auVar96 = NEON_ext(auVar103,auVar103,4,1);
                auVar67._0_4_ = auVar64._0_4_ * auVar96._0_4_;
                auVar67._4_4_ = auVar64._4_4_ * auVar96._4_4_;
                auVar67._8_4_ = auVar64._8_4_ * auVar103._0_4_;
                auVar67._12_4_ = auVar64._12_4_ * auVar103._4_4_;
                auVar96 = NEON_ext(auVar67,auVar67,8,1);
                bVar27 = auVar67._0_4_ + auVar67._4_4_ + auVar96._0_4_ <= 0.0;
                if ((bVar8 >> 4 & 1) != 0) {
                  bVar27 = bVar27 && (param_5[6][5] & 0x12) == 0;
                }
              }
              else {
                bVar26 = bVar26 && (param_5[6][5] & 2) == 0;
                if (param_5[6][6] != '\0') goto LAB_031aea20;
LAB_031aee58:
                bVar27 = false;
              }
              uVar30 = uVar29;
              if ((((uVar29 & 1) == 0) || ((bool)(bVar26 ^ 1U))) || (bVar27)) {
LAB_031aea88:
                if ((bool)(bVar26 ^ 1U) || ((uVar30 ^ 0xffffffff) & 1) != 0) {
LAB_031afe58:
                  if (bVar27) goto LAB_031ae1f4;
                  local_128 = CONCAT44(fVar178,fVar178);
                  auVar79._8_8_ = uVar184;
                  auVar79._0_8_ = uVar183;
                  iVar114 = FUN_031b0310(auVar79,&local_e0,&local_110,&local_120,&local_128);
                  auVar14._8_8_ = auVar157._8_8_;
                  auVar14._0_8_ = auVar157._0_8_;
                  auVar93 = auVar14._0_12_;
                  if (iVar114 != 0) {
                    local_160 = local_f60;
                    fStack_15c = fStack_f5c;
                    fStack_158 = fStack_f58;
                    fStack_154 = fStack_f54;
                    if (param_5[6][1] != '\0') {
                      fVar83 = local_f60 * local_170 + fStack_f5c * fStack_16c +
                               fStack_f58 * fStack_168;
                      fVar151 = local_f60 * local_170 + fStack_f5c * fStack_16c +
                                fStack_f58 * fStack_168;
                      fVar110 = fVar87 * local_170 + fVar111 * fStack_16c + fVar117 * fStack_168;
                      fVar113 = fVar204 * fStack_168 + fVar202 * local_170 + fVar203 * fStack_16c;
                      fVar118 = fVar204 * fStack_168 + fVar202 * local_170 + fVar203 * fStack_16c;
                      uStack_108 = CONCAT44(fVar205 - fStack_164 * fVar118,
                                            fVar204 - fStack_168 * fVar113);
                      local_110 = CONCAT44(fVar203 - fStack_16c * fVar118,
                                           fVar202 - local_170 * fVar113);
                      fVar113 = fVar200 * fStack_168 + fVar171 * local_170 + fVar182 * fStack_16c;
                      fVar118 = fVar200 * fStack_168 + fVar171 * local_170 + fVar182 * fStack_16c;
                      local_160 = local_f60 - local_170 * fVar83;
                      fStack_15c = fStack_f5c - fStack_16c * fVar151;
                      fStack_158 = fStack_f58 - fStack_168 * fVar83;
                      fStack_154 = fStack_f54 - fStack_164 * fVar151;
                      uStack_118 = CONCAT44(fVar201 - fStack_164 * fVar118,
                                            fVar200 - fStack_168 * fVar113);
                      local_120 = CONCAT44(fVar182 - fStack_16c * fVar118,
                                           fVar171 - local_170 * fVar113);
                      auVar93._0_4_ = (fVar87 - local_170 * fVar110) - local_160;
                      auVar93._4_4_ =
                           (fVar111 -
                           fStack_16c *
                           (fVar87 * local_170 + fVar111 * fStack_16c + fVar117 * fStack_168)) -
                           fStack_15c;
                      auVar93._8_4_ = (fVar117 - fStack_168 * fVar110) - fStack_158;
                    }
                    auVar81._8_8_ = auVar168._8_8_;
                    auVar81._0_8_ = 0x7f7fffee7f7fffee;
                    iVar112 = -(uint)(auVar93._0_4_ == 0.0);
                    iVar114 = -(uint)(auVar93._4_4_ == 0.0);
                    iVar115 = -(uint)(auVar93._8_4_ == 0.0);
                    iVar195 = -(uint)(fVar178 == 0.0);
                    fVar83 = (float)CONCAT13(auVar93[3] & ~(byte)((uint)iVar112 >> 0x18),
                                             CONCAT12(auVar93[2] & ~(byte)((uint)iVar112 >> 0x10),
                                                      CONCAT11(auVar93[1] &
                                                               ~(byte)((uint)iVar112 >> 8),
                                                               auVar93[0] & ~(byte)iVar112)));
                    auVar94._0_8_ =
                         CONCAT17(auVar93[7] & ~(byte)((uint)iVar114 >> 0x18),
                                  CONCAT16(auVar93[6] & ~(byte)((uint)iVar114 >> 0x10),
                                           CONCAT15(auVar93[5] & ~(byte)((uint)iVar114 >> 8),
                                                    CONCAT14(auVar93[4] & ~(byte)iVar114,fVar83))));
                    auVar94[8] = auVar93[8] & ~(byte)iVar115;
                    auVar94[9] = auVar93[9] & ~(byte)((uint)iVar115 >> 8);
                    auVar94[10] = auVar93[10] & ~(byte)((uint)iVar115 >> 0x10);
                    auVar94[0xb] = auVar93[0xb] & ~(byte)((uint)iVar115 >> 0x18);
                    auVar108[0xc] = (byte)((uint7)uVar24 >> 0x18) & ~(byte)iVar195;
                    auVar108._0_12_ = auVar94;
                    auVar108[0xd] = (byte)((uint7)uVar24 >> 0x20) & ~(byte)((uint)iVar195 >> 8);
                    auVar108[0xe] = (byte)((uint7)uVar24 >> 0x28) & ~(byte)((uint)iVar195 >> 0x10);
                    auVar108[0xf] = (byte)((uint7)uVar24 >> 0x30) & ~(byte)((uint)iVar195 >> 0x18);
                    auVar96 = NEON_frecpe(auVar108,4);
                    iVar112 = -(uint)(fVar83 == 0.0);
                    fVar151 = (float)((ulong)auVar94._0_8_ >> 0x20);
                    iVar114 = -(uint)(fVar151 == 0.0);
                    fVar110 = auVar94._8_4_;
                    iVar115 = -(uint)(fVar110 == 0.0);
                    fVar113 = auVar108._12_4_;
                    iVar195 = -(uint)(fVar113 == 0.0);
                    auVar80[0] = ~(byte)iVar112;
                    auVar80[1] = ~(byte)((uint)iVar112 >> 8);
                    auVar80[2] = ~(byte)((uint)iVar112 >> 0x10);
                    auVar80[3] = ~(byte)((uint)iVar112 >> 0x18);
                    auVar80[4] = ~(byte)iVar114;
                    auVar80[5] = ~(byte)((uint)iVar114 >> 8);
                    auVar80[6] = ~(byte)((uint)iVar114 >> 0x10);
                    auVar80[7] = ~(byte)((uint)iVar114 >> 0x18);
                    auVar80[8] = ~(byte)iVar115;
                    auVar80[9] = ~(byte)((uint)iVar115 >> 8);
                    auVar80[10] = ~(byte)((uint)iVar115 >> 0x10);
                    auVar80[0xb] = ~(byte)((uint)iVar115 >> 0x18);
                    auVar80[0xc] = ~(byte)iVar195;
                    auVar80[0xd] = ~(byte)((uint)iVar195 >> 8);
                    auVar80[0xe] = ~(byte)((uint)iVar195 >> 0x10);
                    auVar80[0xf] = ~(byte)((uint)iVar195 >> 0x18);
                    auVar154 = NEON_frecps(auVar108,auVar96,4);
                    uStack_148 = auVar108._8_8_;
                    auVar130._0_4_ = auVar96._0_4_ * auVar154._0_4_;
                    auVar130._4_4_ = auVar96._4_4_ * auVar154._4_4_;
                    auVar130._8_4_ = auVar96._8_4_ * auVar154._8_4_;
                    auVar130._12_4_ = auVar96._12_4_ * auVar154._12_4_;
                    auVar150._0_4_ = fVar83 * fVar83;
                    auVar150._4_4_ = fVar151 * fVar151;
                    auVar150._8_4_ = fVar110 * fVar110;
                    auVar150._12_4_ = fVar113 * fVar113;
                    auVar96 = NEON_frecps(auVar108,auVar130,4);
                    auVar131._0_4_ = auVar130._0_4_ * auVar96._0_4_;
                    auVar131._4_4_ = auVar130._4_4_ * auVar96._4_4_;
                    auVar131._8_4_ = auVar130._8_4_ * auVar96._8_4_;
                    auVar131._12_4_ = auVar130._12_4_ * auVar96._12_4_;
                    auVar96 = NEON_ext(auVar150,auVar150,8,1);
                    auVar81 = auVar81 ^ (auVar81 ^ auVar131) & auVar80;
                    uStack_138 = auVar81._8_8_;
                    local_140 = auVar81._0_8_;
                    local_150 = auVar94._0_8_;
                    if (0.0 < auVar96._0_4_ + auVar150._0_4_ + auVar150._4_4_) {
                      auVar82._8_8_ = uVar184;
                      auVar82._0_8_ = uVar183;
                      FUN_031b0310(auVar82,&local_160,&local_110,&local_120,&local_128);
                    }
                    auVar13._0_8_ = puVar45;
                    auVar109._0_12_ = auVar13._0_12_;
                    auVar109._12_4_ = (int)local_128;
                    uStack_c7 = auVar109._9_7_;
                    iVar112 = 4;
                    if ((uVar30 & 1) == 0) {
                      iVar112 = 5;
                    }
                    local_d0 = puVar45;
                    bStack_c8 = bVar2;
                    if (param_5[6][4] == '\0') goto LAB_031b00b0;
                    bVar25 = true;
                  }
                  goto LAB_031ae1f4;
                }
              }
              else {
                if (local_e80 == (long *)0x0) {
                  uVar30 = 1;
                  goto LAB_031aea88;
                }
                uVar30 = (**(code **)(*local_e80 + 0x28))
                                   (local_e80,local_e70,(ulong)uVar47 | uVar165 & 0xffc00000,piVar46
                                    ,lVar50,lVar35);
                if (((uVar30 ^ 0xffffffff) & 1) != 0) goto LAB_031afe58;
              }
              uVar31 = uStack_f8;
              puVar45 = local_100;
              if ((*(byte *)(piVar46 + 4) >> 4 & 1) == 0) {
                uVar30 = piVar46[3];
                if ((*(byte *)(piVar46 + 4) >> 6 & 1) == 0) {
                  if (uVar30 == 0xffffffff) {
                    uVar30 = 0xffffffff;
                  }
                  else {
                    uVar30 = uVar30 & 0x3fffff | *(int *)(*(long *)(lVar53 + 0x20) + 0x17c) << 0x16;
                  }
                }
                uVar28 = uVar30 * -0x61c8864f >> 0x18;
                while( true ) {
                  uVar55 = *(uint *)((long)__s + (ulong)(uVar28 & 0x7f) * 4);
                  if (uVar55 == 0xffffffff) break;
                  if (uVar55 == uVar30) goto LAB_031ae1f4;
                  uVar28 = (uVar28 & 0x7f) + 1;
                }
                uVar28 = uStack_f8._4_4_;
                if ((uint)uStack_f8 == (uStack_f8._4_4_ & 0x3fffffff)) {
                  iVar112 = 2;
                  goto LAB_031ae2b8;
                }
                uVar55 = (uint)uStack_f8 + 1;
                if ((int)(uStack_f8._4_4_ & 0x3fffffff) <= (int)(uint)uStack_f8) {
                  if (0x3ffffffe < (int)(uint)uStack_f8) {
                    FUN_032bd0a8(uVar55);
                  }
                  uVar28 = (uVar28 & 0x3fffffff) * 2;
                  uVar48 = uVar55;
                  if (uVar28 < 0x3fffffff) {
                    if ((int)uVar55 <= (int)uVar28) goto LAB_031af1bc;
                  }
                  else {
                    uVar28 = 0x3fffffff;
                    if ((int)uVar55 < 0x40000000) {
LAB_031af1bc:
                      uVar48 = uVar28;
                    }
                  }
                  local_100 = (uint *)FUN_032bd1d4(puVar23,uVar48,4,puVar45,uVar31 & 0xffffffff,
                                                   (long)&uStack_f8 + 4);
                }
                local_100[(int)(uint)uStack_f8] = uVar30;
                uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar55);
              }
            }
LAB_031ae1f4:
            sVar37 = *(short *)((long)puVar33 + 10);
            iVar114 = (int)sVar37;
            uVar30 = puVar33[1];
LAB_031ae200:
            uVar28 = (iVar114 + uVar30) - 1;
            if (((int)uVar47 < (int)uVar30) || ((int)uVar28 <= (int)uVar47)) {
              uVar30 = *puVar33;
              if (uVar47 != uVar28) {
                if (((int)uVar30 <= (int)uVar47) &&
                   ((int)uVar47 < (int)(uVar30 + (int)(short)puVar33[2] + -1))) goto LAB_031ae240;
                goto LAB_031ae270;
              }
            }
            else {
LAB_031ae240:
              uVar30 = uVar47 + 1;
            }
            uVar47 = uVar30;
            if (uVar47 == 0xffffffff) goto LAB_031ae270;
            goto LAB_031adf60;
          }
          goto LAB_031ae27c;
        }
        iVar112 = 2;
        goto LAB_031ae2b8;
      }
      iVar112 = 3;
      uVar153 = NEON_fmov(0x3f800000,4);
      uVar31 = uStack_f8;
      goto joined_r0x031ae398;
    }
    if (param_5[6][2] != '\0') goto LAB_031adce8;
    goto LAB_031adb58;
  }
LAB_031af200:
  uVar173 = 0;
  uVar166 = 0;
  local_1010 = local_fe0;
LAB_031af2d8:
  iVar116 = 5;
  uVar153 = uVar173;
  goto LAB_031adbbc;
LAB_031ae270:
  uVar31 = uStack_f8 & 0xffffffff;
LAB_031ae27c:
  iVar114 = (int)uVar31;
  puVar33 = local_100;
joined_r0x031ae998:
  local_100 = puVar33;
  if (iVar114 == 0) goto LAB_031ae2b8;
  goto LAB_031ade64;
LAB_031ae2b8:
  if (bVar25) {
    auVar109[8] = bStack_c8;
    auVar109._0_8_ = local_d0;
    auVar109._9_7_ = uStack_c7;
LAB_031b00b0:
    uVar153 = CONCAT44(auVar109._12_4_,auVar109._12_4_);
  }
  else {
    uVar153 = NEON_fmov(0x3f800000,4);
  }
  lVar52 = *(long *)(lVar10 + 0x38d490);
  if (lVar52 == 0) {
    lVar52 = FUN_0333d16c(0,1);
    *(long *)(lVar10 + 0x38d490) = lVar52;
  }
  lVar52 = *(long *)(lVar52 + 8);
  if (((*(ulong *)(lVar52 + 0x10) < 0x200) || (*(long *)(lVar52 + 0x18) != (long)__s + 0x200)) ||
     (*(void **)(lVar52 + 0x28) == __s)) {
    if (__s != (void *)0x0) {
      if (*(ulong *)(lVar52 + 0x10) < 0x200) {
        *(int *)(*(long *)(lVar52 + 8) + 0x20) = *(int *)(*(long *)(lVar52 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar52 + 0x40) + 0x18))(*(long **)(lVar52 + 0x40),__s,0x200);
      }
      else if (*(long *)(lVar52 + 0x18) == (long)__s + 0x200) {
        *(void **)(lVar52 + 0x18) = __s;
        FUN_032ce944();
      }
      else {
        FUN_032ceaf0(lVar52,__s,0x200);
      }
    }
  }
  else {
    *(void **)(lVar52 + 0x18) = __s;
  }
  iVar132 = local_e8;
  puVar45 = local_f0;
  puVar33 = local_100;
  if (local_f0 == local_100) {
    uStack_f8 = uStack_f8 & 0xffffffff00000000;
  }
  lVar52 = *(long *)(lVar10 + 0x38d490);
  if (lVar52 == 0) {
    lVar52 = FUN_0333d16c(0,1);
    *(long *)(lVar10 + 0x38d490) = lVar52;
  }
  lVar52 = *(long *)(lVar52 + 8);
  uVar31 = (ulong)(int)(iVar132 * 4 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar52 + 0x10) < uVar31) || (*(long *)(lVar52 + 0x18) != uVar31 + (long)puVar45))
     || (*(uint **)(lVar52 + 0x28) == puVar45)) {
    if (puVar45 != (uint *)0x0) {
      if (*(ulong *)(lVar52 + 0x10) < uVar31) {
        *(int *)(*(long *)(lVar52 + 8) + 0x20) = *(int *)(*(long *)(lVar52 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar52 + 0x40) + 0x18))(*(long **)(lVar52 + 0x40),puVar45);
      }
      else if (*(long *)(lVar52 + 0x18) == uVar31 + (long)puVar45) {
        *(uint **)(lVar52 + 0x18) = puVar45;
        FUN_032ce944();
      }
      else {
        FUN_032ceaf0(lVar52,puVar45);
      }
    }
  }
  else {
    *(uint **)(lVar52 + 0x18) = puVar45;
  }
  uVar31 = uStack_f8 & 0xffffffff00000000;
  if (puVar33 != (uint *)0x0) {
    uStack_f8._4_4_ = (uint)(uVar31 >> 0x20);
    if (-1 < (long)uVar31) {
      iVar132 = uStack_f8._4_4_ << 2;
      uStack_f8 = uVar31;
      (**(code **)(*(long *)puVar23 + 0x18))(puVar23,puVar33,iVar132);
      uVar31 = uStack_f8;
    }
  }
joined_r0x031ae398:
  uStack_f8 = uVar31;
  if (local_b0 != 0) {
    puVar9 = *(undefined8 **)(local_b0 + 8);
    uVar31 = (long)puVar9 + 0x17U & 0xfffffffffffffff8;
    if ((uVar31 <= *(ulong *)(local_b0 + 0x10)) &&
       (*(ulong *)(local_b0 + 8) = uVar31, puVar9 != (undefined8 *)0x0)) {
      *puVar9 = &DAT_0390f40e;
      uVar174 = nn::os::GetSystemTick();
      puVar9[1] = uVar174;
    }
  }
  if (iVar112 == 3) {
LAB_031adb58:
    uVar153 = uVar173;
    if (fVar186 < (float)uVar137 + (float)uVar166 * (float)uVar173) {
      iVar116 = 7;
    }
    else {
      iVar132 = local_fe4 + 1;
      if (local_fe4 < *(int *)(param_5[2] + 4)) {
        if ((char)param_6[6] == '\0') {
          local_fe4 = iVar132;
          if (uVar51 == 0xffffffff) goto LAB_031adbbc;
          iVar112 = (int)param_6[1];
          uVar47 = *(uint *)((long)param_6 + 0xc);
          uVar29 = uVar47 & 0x3fffffff;
LAB_031adba0:
          uVar30 = iVar112 + 1;
          if (iVar112 < (int)uVar29) {
            lVar52 = *param_6;
          }
          else {
            lVar52 = *param_6;
            if (0x3ffffffe < iVar112) {
              FUN_032bd0a8(uVar30);
              uVar47 = *(uint *)((long)param_6 + 0xc);
            }
            uVar29 = (uVar47 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar29) {
              uVar29 = 0x3fffffff;
            }
            uVar47 = uVar30;
            if ((int)uVar30 <= (int)uVar29) {
              uVar47 = uVar29;
            }
            lVar52 = FUN_032bd1d4(puVar23,uVar47,4,lVar52,iVar112,(uint *)((long)param_6 + 0xc));
            *param_6 = lVar52;
            iVar112 = (int)param_6[1];
          }
          *(uint *)(lVar52 + (long)iVar112 * 4) = uVar51;
          *(uint *)(param_6 + 1) = uVar30;
        }
        else if (uVar51 != 0xffffffff) {
          iVar112 = (int)param_6[1];
          uVar47 = *(uint *)((long)param_6 + 0xc);
          uVar29 = uVar47 & 0x3fffffff;
          if (iVar112 < (int)uVar29) goto LAB_031adba0;
        }
        local_fe4 = iVar132;
      }
      else {
        iVar116 = 8;
        local_fe4 = iVar132;
      }
    }
  }
  else {
    bVar25 = (float)uVar153 < local_f90;
    if (bVar25) {
      uVar173 = uVar153;
      iVar116 = iVar112;
    }
    if (!(bVar25 && cVar6 == '\0')) goto LAB_031adb58;
    iVar116 = iVar112;
  }
LAB_031adbbc:
  fVar83 = (float)uVar153;
  fVar110 = (float)((ulong)uVar153 >> 0x20);
  cVar7 = (char)param_6[6];
  iVar132 = (int)param_6[3];
  uVar29 = *(uint *)((long)param_6 + 0x1c);
  fVar151 = (float)uVar137 + (float)uVar166 * fVar83;
  fVar113 = (float)((ulong)uVar137 >> 0x20) + (float)((ulong)uVar166 >> 0x20) * fVar110;
  if ((cVar7 == '\0') || (iVar132 < (int)(uVar29 & 0x3fffffff))) {
    uVar47 = iVar132 + 1;
    if (iVar132 < (int)(uVar29 & 0x3fffffff)) {
      lVar52 = param_6[2];
    }
    else {
      lVar52 = param_6[2];
      if (0x3ffffffe < iVar132) {
        FUN_032bd0a8(uVar47);
        uVar29 = *puVar1;
      }
      uVar29 = (uVar29 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar29) {
        uVar29 = 0x3fffffff;
      }
      uVar30 = uVar47;
      if ((int)uVar47 <= (int)uVar29) {
        uVar30 = uVar29;
      }
      lVar52 = FUN_032bd1d4(puVar23,uVar30,4,lVar52,iVar132,puVar1);
      param_6[2] = lVar52;
      iVar132 = (int)param_6[3];
    }
    *(float *)(lVar52 + (long)iVar132 * 4) = fVar151;
    cVar7 = (char)param_6[6];
    *(uint *)(param_6 + 3) = uVar47;
  }
  fVar87 = (float)auVar74._0_8_;
  auVar156._0_4_ = fVar87 - local_f60;
  fVar111 = (float)((ulong)auVar74._0_8_ >> 0x20);
  auVar156._4_4_ = fVar111 - fStack_f5c;
  fVar117 = SUB84(pfVar198,0);
  auVar156._8_4_ = fVar117 - fStack_f58;
  fVar135 = (float)((ulong)pfVar198 >> 0x20);
  auVar156._12_4_ = fVar135 - fStack_f54;
  iVar132 = (int)param_6[5];
  uVar29 = *(uint *)((long)param_6 + 0x2c);
  auVar62._0_4_ = local_f60 + auVar156._0_4_ * fVar83;
  auVar62._4_4_ = fStack_f5c + auVar156._4_4_ * fVar110;
  auVar62._8_4_ = fStack_f58 + auVar156._8_4_ * fVar83;
  auVar62._12_4_ = fStack_f54 + auVar156._12_4_ * fVar110;
  if ((cVar7 == '\0') || (iVar132 < (int)(uVar29 & 0x3fffffff))) {
    uVar47 = iVar132 + 1;
    if (iVar132 < (int)(uVar29 & 0x3fffffff)) {
      lVar52 = param_6[4];
    }
    else {
      lVar52 = param_6[4];
      uVar137 = auVar62._8_8_;
      if (0x3ffffffe < iVar132) {
        FUN_032bd0a8(uVar47);
        uVar29 = *puVar42;
      }
      uVar29 = (uVar29 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar29) {
        uVar29 = 0x3fffffff;
      }
      uVar30 = uVar47;
      if ((int)uVar47 <= (int)uVar29) {
        uVar30 = uVar29;
      }
      lVar52 = FUN_032bd1d4(puVar23,uVar30,0x10,lVar52,iVar132,puVar42);
      param_6[4] = lVar52;
      iVar132 = (int)param_6[5];
      auVar62._8_8_ = uVar137;
    }
    puVar9 = (undefined8 *)(lVar52 + (long)iVar132 * 0x10);
    puVar9[1] = auVar62._8_8_;
    *puVar9 = auVar62._0_8_;
    *(uint *)(param_6 + 5) = uVar47;
  }
  if (iVar116 != 3) {
    if ((iVar116 != 9) && (param_5[6][0] == '\0' && cVar6 == '\0')) {
      *(undefined4 *)(param_6 + 1) = 0;
    }
    param_6[9] = auVar62._8_8_;
    param_6[8] = auVar62._0_8_;
    *(int *)((long)param_6 + 0x34) = local_fe4;
    *(uint *)(param_6 + 7) = uVar5;
    *(float *)((long)param_6 + 0x3c) = fVar151;
    auVar74._0_8_ = (long)DAT_0444b53c;
    lVar52 = *(long *)(lVar10 + 0x38d490);
    if (lVar52 == 0) {
      lVar52 = FUN_0333d16c(0,1);
      *(long *)(lVar10 + 0x38d490) = lVar52;
    }
    if (*(long *)(lVar52 + auVar74._0_8_ * 8 + 0x18) != 0) {
      FUN_0332a954();
      lVar52 = *(long *)(lVar10 + 0x38d490);
    }
    if (lVar52 == 0) {
      lVar52 = FUN_0333d16c(0,1);
      *(long *)(lVar10 + 0x38d490) = lVar52;
    }
    FUN_03166d64(auStack_e50,*(undefined8 *)(lVar52 + 0x10));
    lVar52 = *(long *)(lVar10 + 0x38d490);
    if (lVar52 == 0) {
      lVar52 = FUN_0333d16c(0,1);
      *(long *)(lVar10 + 0x38d490) = lVar52;
    }
    lVar52 = *(long *)(lVar52 + 8);
    if (((*(ulong *)(lVar52 + 0x10) < 0x80) || (*(long *)(lVar52 + 0x18) != local_1038 + 0x80)) ||
       (*(long *)(lVar52 + 0x28) == local_1038)) {
      if (local_1038 != 0) {
        if (*(ulong *)(lVar52 + 0x10) < 0x80) {
          *(int *)(*(long *)(lVar52 + 8) + 0x20) = *(int *)(*(long *)(lVar52 + 8) + 0x20) + -1;
          (**(code **)(**(long **)(lVar52 + 0x40) + 0x18))
                    (*(long **)(lVar52 + 0x40),local_1038,0x80);
        }
        else if (*(long *)(lVar52 + 0x18) == local_1038 + 0x80) {
          *(long *)(lVar52 + 0x18) = local_1038;
          FUN_032ce944();
        }
        else {
          FUN_032ceaf0(lVar52,local_1038,0x80);
        }
      }
    }
    else {
      *(long *)(lVar52 + 0x18) = local_1038;
    }
    return iVar116;
  }
  local_f90 = (float)(uint)local_f30;
  uVar5 = local_f30._4_4_;
  if ((*(long *)(param_5[3] + 8) != 0) || (*(long *)param_5[4] != 0)) {
    local_18c = local_f34;
    local_188 = local_f30;
    local_190 = local_f38;
    local_f10 = local_ee0;
    local_f18 = &local_190;
    local_180 = local_f28;
    local_f20[0] = local_ef0;
    local_f08 = local_ed8;
    pfStack_ef8 = pfStack_ec8;
    local_f00 = local_ed0;
  }
  if (param_5[6][3] != '\0') {
    fVar133 = auVar156._0_4_;
    fVar152 = auVar156._4_4_;
    fVar161 = auVar156._8_4_;
    fVar83 = fVar161 * fVar161 + fVar133 * fVar133 + fVar152 * fVar152;
    fVar118 = fVar161 * fVar161 + fVar133 * fVar133 + fVar152 * fVar152;
    uVar137 = CONCAT44(fVar118,fVar83);
    uVar153 = NEON_frsqrte(uVar137,4);
    fVar110 = (float)uVar153;
    fVar134 = (float)((ulong)uVar153 >> 0x20);
    uVar153 = NEON_frsqrts(uVar137,CONCAT44(fVar134 * fVar134,fVar110 * fVar110),4);
    fVar110 = fVar110 * (float)uVar153;
    fVar134 = fVar134 * (float)((ulong)uVar153 >> 0x20);
    iVar116 = -(uint)(fVar83 <= 0.0);
    iVar132 = -(uint)(fVar118 <= 0.0);
    uVar137 = NEON_frsqrts(uVar137,CONCAT44(fVar134 * fVar134,fVar110 * fVar110),4);
    fVar110 = (float)uVar137 * fVar110;
    fVar134 = (float)((ulong)uVar137 >> 0x20) * fVar134;
    fVar83 = (float)CONCAT13((byte)((uint)fVar110 >> 0x18) & ~(byte)((uint)iVar116 >> 0x18),
                             CONCAT12((byte)((uint)fVar110 >> 0x10) & ~(byte)((uint)iVar116 >> 0x10)
                                      ,CONCAT11((byte)((uint)fVar110 >> 8) &
                                                ~(byte)((uint)iVar116 >> 8),
                                                SUB41(fVar110,0) & ~(byte)iVar116)));
    pfStack_d8 = (float *)CONCAT44(fStack_164,fStack_168);
    local_e0 = CONCAT44(fStack_16c,local_170);
    fVar133 = fVar133 * fVar83;
    fVar110 = (float)(CONCAT17((byte)((uint)fVar134 >> 0x18) & ~(byte)((uint)iVar132 >> 0x18),
                               CONCAT16((byte)((uint)fVar134 >> 0x10) &
                                        ~(byte)((uint)iVar132 >> 0x10),
                                        CONCAT15((byte)((uint)fVar134 >> 8) &
                                                 ~(byte)((uint)iVar132 >> 8),
                                                 CONCAT14(SUB41(fVar134,0) & ~(byte)iVar132,fVar83))
                                       )) >> 0x20);
    fVar152 = fVar152 * fVar110;
    fVar161 = fVar161 * fVar83;
    fVar110 = auVar156._12_4_ * fVar110;
    local_f40[0] = local_f30._4_4_ & 0x3fffff;
    FUN_031934ec(*(undefined8 *)
                  (*(long *)(param_4 + 0x38) + (ulong)(local_f30._4_4_ >> 0x16) * 0xf0),local_f40,
                 &local_170);
    auVar22._8_8_ = pfStack_d8;
    auVar22._0_8_ = local_e0;
    auVar71._4_4_ = fStack_16c;
    auVar71._0_4_ = local_170;
    auVar71._8_4_ = fStack_168;
    auVar71._12_4_ = fStack_164;
    fVar134 = (float)local_e0;
    fVar162 = (float)((ulong)local_e0 >> 0x20);
    fVar118 = SUB84(pfStack_d8,0) * fStack_168;
    fVar83 = fVar134 * local_170 + fVar162 * fStack_16c + fVar118;
    fVar118 = fVar134 * local_170 + fVar162 * fStack_16c + fVar118;
    if (0.99999 < fVar83) {
      auVar107._8_8_ = _UNK_0388a138;
      auVar107._0_8_ = _DAT_0388a130;
LAB_031af480:
      fStack_158 = auVar107._8_4_;
      fStack_154 = auVar107._12_4_;
      local_160 = auVar107._0_4_;
      fStack_15c = auVar107._4_4_;
    }
    else {
      if (-0.99999 <= fVar83) {
        auVar154 = NEON_ext(auVar71,auVar71,4,1);
        fVar164 = fVar83 * 0.5 + 0.5;
        fVar163 = fVar118 * 0.5 + 0.5;
        uVar137 = CONCAT44(fVar163,fVar164);
        auVar96 = NEON_ext(auVar22,auVar22,4,1);
        uVar153 = NEON_frsqrte(uVar137,4);
        fVar170 = (float)uVar153;
        fVar172 = (float)((ulong)uVar153 >> 0x20);
        auVar159._0_4_ = fVar134 * auVar154._0_4_ - local_170 * auVar96._0_4_;
        auVar159._4_4_ = fVar162 * auVar154._4_4_ - fStack_16c * auVar96._4_4_;
        auVar159._8_4_ = SUB84(pfStack_d8,0) * local_170 - fStack_168 * fVar134;
        auVar159._12_4_ = (float)((ulong)pfStack_d8 >> 0x20) * fStack_16c - fStack_164 * fVar162;
        auVar96 = NEON_ext(auVar159,auVar159,4,1);
        uVar153 = NEON_frsqrts(uVar137,CONCAT44(fVar172 * fVar172,fVar170 * fVar170),4);
        fVar170 = fVar170 * (float)uVar153;
        fVar172 = fVar172 * (float)((ulong)uVar153 >> 0x20);
        uVar137 = NEON_frsqrts(uVar137,CONCAT44(fVar172 * fVar172,fVar170 * fVar170),4);
        fVar170 = (float)uVar137 * fVar170;
        fVar172 = (float)((ulong)uVar137 >> 0x20) * fVar172;
        iVar116 = -(uint)(fVar164 <= 0.0);
        iVar132 = -(uint)(fVar163 <= 0.0);
        fVar170 = (float)CONCAT13((byte)((uint)fVar170 >> 0x18) & ~(byte)((uint)iVar116 >> 0x18),
                                  CONCAT12((byte)((uint)fVar170 >> 0x10) &
                                           ~(byte)((uint)iVar116 >> 0x10),
                                           CONCAT11((byte)((uint)fVar170 >> 8) &
                                                    ~(byte)((uint)iVar116 >> 8),
                                                    SUB41(fVar170,0) & ~(byte)iVar116)));
        fVar162 = auVar96._4_4_;
        fVar134 = auVar96._0_4_;
        if (fVar83 < -0.999) {
          fVar172 = auVar159._0_4_ * auVar159._0_4_ + fVar134 * fVar134 + fVar162 * fVar162;
          fVar171 = auVar159._0_4_ * auVar159._0_4_ + fVar134 * fVar134 + fVar162 * fVar162;
          uVar137 = CONCAT44(fVar171,fVar172);
          uVar153 = NEON_frsqrte(uVar137,4);
          fVar178 = (float)uVar153;
          fVar182 = (float)((ulong)uVar153 >> 0x20);
          uVar153 = NEON_frsqrts(uVar137,CONCAT44(fVar182 * fVar182,fVar178 * fVar178),4);
          fVar178 = fVar178 * (float)uVar153;
          fVar182 = fVar182 * (float)((ulong)uVar153 >> 0x20);
          iVar116 = -(uint)(fVar172 <= 0.0);
          iVar132 = -(uint)(fVar171 <= 0.0);
          uVar153 = NEON_frsqrts(uVar137,CONCAT44(fVar182 * fVar182,fVar178 * fVar178),4);
          fVar83 = fVar164 - fVar83;
          fVar163 = fVar163 - fVar118;
          uVar137 = CONCAT44(fVar163,fVar83);
          fVar178 = (float)uVar153 * fVar178;
          fVar182 = (float)((ulong)uVar153 >> 0x20) * fVar182;
          uVar153 = NEON_frsqrte(uVar137,4);
          fVar172 = (float)uVar153;
          fVar171 = (float)((ulong)uVar153 >> 0x20);
          uVar153 = NEON_frsqrts(uVar137,CONCAT44(fVar171 * fVar171,fVar172 * fVar172),4);
          fVar172 = fVar172 * (float)uVar153;
          fVar171 = fVar171 * (float)((ulong)uVar153 >> 0x20);
          uVar137 = NEON_frsqrts(uVar137,CONCAT44(fVar171 * fVar171,fVar172 * fVar172),4);
          fVar118 = (float)CONCAT13((byte)((uint)fVar178 >> 0x18) & ~(byte)((uint)iVar116 >> 0x18),
                                    CONCAT12((byte)((uint)fVar178 >> 0x10) &
                                             ~(byte)((uint)iVar116 >> 0x10),
                                             CONCAT11((byte)((uint)fVar178 >> 8) &
                                                      ~(byte)((uint)iVar116 >> 8),
                                                      SUB41(fVar178,0) & ~(byte)iVar116)));
          iVar116 = -(uint)(fVar83 <= 0.0);
          iVar112 = -(uint)(fVar163 <= 0.0);
          fVar172 = (float)uVar137 * fVar172;
          fVar171 = (float)((ulong)uVar137 >> 0x20) * fVar171;
          fVar172 = (float)CONCAT13((byte)((uint)fVar172 >> 0x18) & ~(byte)((uint)iVar116 >> 0x18),
                                    CONCAT12((byte)((uint)fVar172 >> 0x10) &
                                             ~(byte)((uint)iVar116 >> 0x10),
                                             CONCAT11((byte)((uint)fVar172 >> 8) &
                                                      ~(byte)((uint)iVar116 >> 8),
                                                      SUB41(fVar172,0) & ~(byte)iVar116)));
          fVar83 = fVar118 * fVar83 * fVar172;
          fVar118 = (float)(CONCAT17((byte)((uint)fVar182 >> 0x18) & ~(byte)((uint)iVar132 >> 0x18),
                                     CONCAT16((byte)((uint)fVar182 >> 0x10) &
                                              ~(byte)((uint)iVar132 >> 0x10),
                                              CONCAT15((byte)((uint)fVar182 >> 8) &
                                                       ~(byte)((uint)iVar132 >> 8),
                                                       CONCAT14(SUB41(fVar182,0) & ~(byte)iVar132,
                                                                fVar118)))) >> 0x20) *
                    fVar163 * (float)(CONCAT17((byte)((uint)fVar171 >> 0x18) &
                                               ~(byte)((uint)iVar112 >> 0x18),
                                               CONCAT16((byte)((uint)fVar171 >> 0x10) &
                                                        ~(byte)((uint)iVar112 >> 0x10),
                                                        CONCAT15((byte)((uint)fVar171 >> 8) &
                                                                 ~(byte)((uint)iVar112 >> 8),
                                                                 CONCAT14(SUB41(fVar171,0) &
                                                                          ~(byte)iVar112,fVar172))))
                                     >> 0x20);
        }
        else {
          fVar83 = fVar170 * 0.5;
          fVar118 = (float)(CONCAT17((byte)((uint)fVar172 >> 0x18) & ~(byte)((uint)iVar132 >> 0x18),
                                     CONCAT16((byte)((uint)fVar172 >> 0x10) &
                                              ~(byte)((uint)iVar132 >> 0x10),
                                              CONCAT15((byte)((uint)fVar172 >> 8) &
                                                       ~(byte)((uint)iVar132 >> 8),
                                                       CONCAT14(SUB41(fVar172,0) & ~(byte)iVar132,
                                                                fVar170)))) >> 0x20) * 0.5;
        }
        auVar107._0_4_ = fVar134 * fVar83;
        auVar107._4_4_ = fVar162 * fVar118;
        auVar107._8_4_ = auVar159._0_4_ * fVar83;
        auVar107._12_4_ = fVar164 * fVar170;
        goto LAB_031af480;
      }
      FUN_032cad60(&local_160,&local_e0);
      auVar107._4_4_ = fStack_15c;
      auVar107._0_4_ = local_160;
      auVar107._8_4_ = fStack_158;
      auVar107._12_4_ = fStack_154;
      auVar71._4_4_ = fStack_16c;
      auVar71._0_4_ = local_170;
      auVar71._8_4_ = fStack_168;
      auVar71._12_4_ = fStack_164;
    }
    auVar96 = NEON_ext(auVar107,auVar107,8,1);
    fVar164 = auVar96._4_4_ * auVar96._4_4_;
    auVar19._4_4_ = fVar152;
    auVar19._0_4_ = fVar133;
    auVar19._8_4_ = fVar161;
    auVar19._12_4_ = fVar110;
    fVar163 = fVar164 + -0.5;
    fVar164 = fVar164 + -0.5;
    fVar83 = auVar107._0_4_;
    fVar118 = auVar107._4_4_;
    fVar134 = auVar107._8_4_;
    fVar162 = auVar107._12_4_;
    fVar170 = fVar133 * fVar83 + fVar152 * fVar118 + fVar161 * fVar134;
    fVar172 = fVar133 * fVar83 + fVar152 * fVar118 + fVar161 * fVar134;
    auVar154 = NEON_ext(auVar19,auVar19,4,1);
    auVar96 = NEON_ext(auVar107,auVar107,4,1);
    auVar146._0_4_ = auVar154._0_4_ * fVar83 - fVar133 * auVar96._0_4_;
    auVar146._4_4_ = auVar154._4_4_ * fVar118 - fVar152 * auVar96._4_4_;
    auVar146._8_4_ = fVar133 * fVar134 - fVar161 * fVar83;
    auVar146._12_4_ = fVar152 * fVar162 - fVar110 * fVar118;
    auVar96 = NEON_ext(auVar146,auVar146,4,1);
    fVar83 = fVar133 * fVar163 + fVar83 * fVar170 + auVar96._0_4_ * fVar162;
    fVar133 = fVar152 * fVar164 + fVar118 * fVar172 + auVar96._4_4_ * fVar162;
    fVar118 = fVar161 * fVar163 + fVar134 * fVar170 + auVar146._0_4_ * fVar162;
    fVar110 = fVar110 * fVar164 + fVar162 * fVar172 + auVar146._4_4_ * fVar162;
    auVar147._0_4_ = fVar83 + fVar83;
    auVar147._4_4_ = fVar133 + fVar133;
    auVar147._8_4_ = fVar118 + fVar118;
    auVar147._12_4_ = fVar110 + fVar110;
    auVar96 = NEON_ext(auVar71,auVar71,4,1);
    auVar154 = NEON_ext(auVar147,auVar147,4,1);
    auVar72._0_4_ = auVar71._0_4_ * auVar154._0_4_ - auVar96._0_4_ * auVar147._0_4_;
    auVar72._4_4_ = auVar71._4_4_ * auVar154._4_4_ - auVar96._4_4_ * auVar147._4_4_;
    auVar72._8_4_ = auVar71._8_4_ * auVar147._0_4_ - auVar71._0_4_ * auVar147._8_4_;
    auVar72._12_4_ = auVar71._12_4_ * auVar147._4_4_ - auVar71._4_4_ * auVar147._12_4_;
    auVar96 = NEON_ext(auVar72,auVar72,4,1);
    local_f50 = auVar96._0_4_;
    fStack_f4c = auVar96._4_4_;
    fVar83 = local_f50 * local_f50 + fStack_f4c * fStack_f4c + auVar72._0_4_ * auVar72._0_4_;
    fVar133 = local_f50 * local_f50 + fStack_f4c * fStack_f4c + auVar72._0_4_ * auVar72._0_4_;
    uVar137 = CONCAT44(fVar133,fVar83);
    uVar153 = NEON_frsqrte(uVar137,4);
    fVar110 = (float)uVar153;
    fVar118 = (float)((ulong)uVar153 >> 0x20);
    uVar153 = NEON_frsqrts(uVar137,CONCAT44(fVar118 * fVar118,fVar110 * fVar110),4);
    fVar110 = fVar110 * (float)uVar153;
    fVar118 = fVar118 * (float)((ulong)uVar153 >> 0x20);
    iVar116 = -(uint)(fVar83 <= 0.0);
    iVar132 = -(uint)(fVar133 <= 0.0);
    uVar137 = NEON_frsqrts(uVar137,CONCAT44(fVar118 * fVar118,fVar110 * fVar110),4);
    fVar110 = (float)uVar137 * fVar110;
    fVar118 = (float)((ulong)uVar137 >> 0x20) * fVar118;
    fStack_f48 = (float)CONCAT13((byte)((uint)fVar110 >> 0x18) & ~(byte)((uint)iVar116 >> 0x18),
                                 CONCAT12((byte)((uint)fVar110 >> 0x10) &
                                          ~(byte)((uint)iVar116 >> 0x10),
                                          CONCAT11((byte)((uint)fVar110 >> 8) &
                                                   ~(byte)((uint)iVar116 >> 8),
                                                   SUB41(fVar110,0) & ~(byte)iVar116)));
    local_f50 = local_f50 * fStack_f48;
    fVar83 = (float)(CONCAT17((byte)((uint)fVar118 >> 0x18) & ~(byte)((uint)iVar132 >> 0x18),
                              CONCAT16((byte)((uint)fVar118 >> 0x10) &
                                       ~(byte)((uint)iVar132 >> 0x10),
                                       CONCAT15((byte)((uint)fVar118 >> 8) &
                                                ~(byte)((uint)iVar132 >> 8),
                                                CONCAT14(SUB41(fVar118,0) & ~(byte)iVar132,
                                                         fStack_f48)))) >> 0x20);
    fStack_f4c = fStack_f4c * fVar83;
    fStack_f48 = auVar72._0_4_ * fStack_f48;
    auVar73._0_4_ = fVar87 * local_f50;
    auVar73._4_4_ = fVar111 * fStack_f4c;
    auVar73._8_4_ = fVar117 * fStack_f48;
    auVar73._12_4_ = fVar135 * auVar72._4_4_ * fVar83;
    auVar96 = NEON_ext(auVar73,auVar73,8,1);
    fStack_f44 = -(auVar73._0_4_ + auVar73._4_4_ + auVar96._0_4_);
    local_10b0 = auVar147._0_4_;
    fStack_10ac = auVar147._4_4_;
    fStack_10a8 = auVar147._8_4_;
    fStack_10a4 = auVar147._12_4_;
  }
  uVar137 = CONCAT44(fVar113,fVar151);
  if (((byte)local_f28 >> 4 & 1) == 0) goto LAB_031adccc;
  lVar52 = *(long *)(*(long *)(param_4 + 0x38) + (ulong)(uVar5 >> 0x16) * 0xf0);
  uVar31 = local_f30 & 0x3fffff;
  auVar74._0_8_ = *(long *)(lVar52 + 0x20);
  iVar132 = (int)uVar31;
  iVar116 = iVar132 - *(int *)(auVar74._0_8_ + 0x30);
  if (iVar132 < *(int *)(auVar74._0_8_ + 0x30)) {
    iVar116 = iVar132;
    if ((*(int *)(auVar74._0_8_ + 0x78) == 0) ||
       (iVar116 = *(int *)(*(long *)(auVar74._0_8_ + 0x70) + uVar31 * 4), iVar116 != -1)) {
      lVar53 = *(long *)(auVar74._0_8_ + 0xc0);
      goto LAB_031af590;
    }
    piVar46 = (int *)(*(long *)(auVar74._0_8_ + 0x28) + uVar31 * 0x14);
  }
  else {
    lVar53 = *(long *)(auVar74._0_8_ + 0xe0);
LAB_031af590:
    piVar46 = (int *)(lVar53 + (long)iVar116 * 0x14);
  }
  iVar112 = *(int *)(auVar74._0_8_ + 0x40);
  iVar116 = *piVar46;
  iVar132 = piVar46[1];
  auVar96 = *(undefined1 (*) [16])(lVar52 + 0x70);
  plVar38 = (long *)(auVar74._0_8_ + 0x38);
  if (iVar112 <= iVar116) {
    plVar38 = (long *)(auVar74._0_8_ + 0xf0);
  }
  iVar114 = 0;
  if (iVar112 <= iVar116) {
    iVar114 = iVar112;
  }
  pfVar199 = (float *)(*plVar38 + (long)(iVar116 - iVar114) * 0x10);
  fVar83 = *pfVar199;
  fVar110 = pfVar199[1];
  fVar135 = pfVar199[2];
  plVar38 = (long *)(auVar74._0_8_ + 0x38);
  if (iVar112 <= iVar132) {
    plVar38 = (long *)(auVar74._0_8_ + 0xf0);
  }
  auVar154 = *(undefined1 (*) [16])(lVar52 + 0x90);
  uVar29 = (uint)local_f28._2_2_;
  iVar116 = 0;
  if (iVar112 <= iVar132) {
    iVar116 = iVar112;
  }
  pfVar199 = (float *)(*plVar38 + (long)(iVar132 - iVar116) * 0x10);
  fVar133 = *pfVar199;
  fVar118 = pfVar199[1];
  fVar134 = pfVar199[2];
  fVar152 = auVar154._0_4_ +
            *(float *)(lVar52 + 0x80) * fVar135 +
            *(float *)(lVar52 + 0x60) * fVar83 + auVar96._0_4_ * fVar110;
  fVar161 = auVar154._4_4_ +
            *(float *)(lVar52 + 0x84) * fVar135 +
            *(float *)(lVar52 + 100) * fVar83 + auVar96._4_4_ * fVar110;
  fVar162 = auVar154._8_4_ +
            *(float *)(lVar52 + 0x88) * fVar135 +
            *(float *)(lVar52 + 0x68) * fVar83 + auVar96._8_4_ * fVar110;
  fVar163 = auVar154._12_4_ +
            *(float *)(lVar52 + 0x8c) * fVar135 +
            *(float *)(lVar52 + 0x6c) * fVar83 + auVar96._12_4_ * fVar110;
  fVar164 = auVar154._0_4_ +
            *(float *)(lVar52 + 0x80) * fVar134 +
            *(float *)(lVar52 + 0x60) * fVar133 + auVar96._0_4_ * fVar118;
  fVar170 = auVar154._4_4_ +
            *(float *)(lVar52 + 0x84) * fVar134 +
            *(float *)(lVar52 + 100) * fVar133 + auVar96._4_4_ * fVar118;
  fVar172 = auVar154._8_4_ +
            *(float *)(lVar52 + 0x88) * fVar134 +
            *(float *)(lVar52 + 0x68) * fVar133 + auVar96._8_4_ * fVar118;
  fVar133 = auVar154._12_4_ +
            *(float *)(lVar52 + 0x8c) * fVar134 +
            *(float *)(lVar52 + 0x6c) * fVar133 + auVar96._12_4_ * fVar118;
  fVar83 = local_1010 - local_fe0;
  fVar110 = fStack_100c - fStack_fdc;
  fVar135 = fStack_1008 - fStack_fd8;
  fVar87 = fVar83 * (local_1010 - fVar87);
  fVar111 = fVar110 * (fStack_100c - fVar111);
  fVar117 = fVar135 * (fStack_1008 - fVar117);
  uVar137 = CONCAT44(fVar135 * fVar135 + fVar83 * fVar83 + fVar110 * fVar110,
                     fVar135 * fVar135 + fVar83 * fVar83 + fVar110 * fVar110);
  uVar153 = NEON_frecpe(uVar137,4);
  uVar166 = NEON_frecps(uVar137,uVar153,4);
  fVar83 = (float)uVar153 * (float)uVar166;
  fVar110 = (float)((ulong)uVar153 >> 0x20) * (float)((ulong)uVar166 >> 0x20);
  uVar137 = NEON_frecps(uVar137,CONCAT44(fVar110,fVar83),4);
  uVar137 = NEON_fminnm(CONCAT44((fVar117 + fVar87 + fVar111) *
                                 fVar110 * (float)((ulong)uVar137 >> 0x20),
                                 (fVar117 + fVar87 + fVar111) * fVar83 * (float)uVar137),uVar187,4);
  uVar137 = NEON_fmax(uVar137,0,4);
  fVar83 = (float)uVar187 - (float)uVar137;
  fVar110 = fVar152 + (fVar164 - fVar152) * fVar83;
  fVar87 = fVar161 + (fVar170 - fVar161) * fVar83;
  auVar74._0_8_ = CONCAT44(fVar87,fVar110);
  auVar74._8_4_ = fVar162 + (fVar172 - fVar162) * fVar83;
  auVar74._12_4_ = fVar163 + (fVar133 - fVar163) * fVar83;
  pfVar198 = auVar74._8_8_;
  auVar12._2_12_ = auVar74._4_12_;
  auVar12._0_2_ = local_f28._2_2_;
  fVar151 = fVar151 + (float)(auVar12._0_4_ << 0x10);
  iVar116 = (int)param_6[3];
  uVar47 = *(uint *)((long)param_6 + 0x1c);
  if (((char)param_6[6] == '\0') || (iVar116 < (int)(uVar47 & 0x3fffffff))) {
    uVar30 = iVar116 + 1;
    if (iVar116 < (int)(uVar47 & 0x3fffffff)) {
      lVar52 = param_6[2];
    }
    else {
      lVar52 = param_6[2];
      if (0x3ffffffe < iVar116) {
        FUN_032bd0a8(uVar30);
        uVar47 = *puVar1;
      }
      uVar47 = (uVar47 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar47) {
        uVar47 = 0x3fffffff;
      }
      uVar51 = uVar30;
      if ((int)uVar30 <= (int)uVar47) {
        uVar51 = uVar47;
      }
      lVar52 = FUN_032bd1d4(puVar23,uVar51,4,lVar52,iVar116,puVar1);
      iVar116 = (int)param_6[3];
      param_6[2] = lVar52;
    }
    *(float *)(lVar52 + (long)iVar116 * 4) = fVar151;
    *(uint *)(param_6 + 3) = uVar30;
    if ((char)param_6[6] != '\0') goto LAB_031b011c;
    iVar116 = (int)param_6[5];
    uVar30 = *(uint *)((long)param_6 + 0x2c);
    uVar47 = uVar30 & 0x3fffffff;
LAB_031af724:
    uVar51 = iVar116 + 1;
    if (iVar116 < (int)uVar47) {
      lVar52 = param_6[4];
    }
    else {
      lVar52 = param_6[4];
      if (0x3ffffffe < iVar116) {
        FUN_032bd0a8(uVar51);
        uVar30 = *puVar42;
      }
      uVar47 = (uVar30 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar47) {
        uVar47 = 0x3fffffff;
      }
      uVar30 = uVar51;
      if ((int)uVar51 <= (int)uVar47) {
        uVar30 = uVar47;
      }
      lVar52 = FUN_032bd1d4(puVar23,uVar30,0x10,lVar52,iVar116,puVar42);
      iVar116 = (int)param_6[5];
      param_6[4] = lVar52;
    }
    plVar38 = (long *)(lVar52 + (long)iVar116 * 0x10);
    plVar38[1] = (long)pfVar198;
    *plVar38 = auVar74._0_8_;
    *(uint *)(param_6 + 5) = uVar51;
  }
  else {
LAB_031b011c:
    iVar116 = (int)param_6[5];
    uVar30 = *(uint *)((long)param_6 + 0x2c);
    uVar47 = uVar30 & 0x3fffffff;
    if (iVar116 < (int)uVar47) goto LAB_031af724;
  }
  if (param_5[6][4] == '\0') {
    local_10b0 = *(float *)*param_2 - fVar110;
    fStack_10ac = *(float *)(*param_2 + 4) - fVar87;
    fStack_10a8 = *(float *)(*param_2 + 8) - auVar74._8_4_;
    fVar83 = local_10b0 * local_10b0 + fStack_10ac * fStack_10ac + fStack_10a8 * fStack_10a8;
    fVar117 = local_10b0 * local_10b0 + fStack_10ac * fStack_10ac + fStack_10a8 * fStack_10a8;
    uVar137 = CONCAT44(fVar117,fVar83);
    uVar187 = NEON_frsqrte(uVar137,4);
    fVar111 = (float)uVar187;
    fVar135 = (float)((ulong)uVar187 >> 0x20);
    uVar187 = NEON_frsqrts(uVar137,CONCAT44(fVar135 * fVar135,fVar111 * fVar111),4);
    fVar111 = fVar111 * (float)uVar187;
    fVar135 = fVar135 * (float)((ulong)uVar187 >> 0x20);
    iVar116 = -(uint)(fVar83 <= 0.0);
    iVar132 = -(uint)(fVar117 <= 0.0);
    uVar137 = NEON_frsqrts(uVar137,CONCAT44(fVar135 * fVar135,fVar111 * fVar111),4);
    fVar111 = (float)uVar137 * fVar111;
    fVar135 = (float)((ulong)uVar137 >> 0x20) * fVar135;
    fVar83 = (float)CONCAT13((byte)((uint)fVar111 >> 0x18) & ~(byte)((uint)iVar116 >> 0x18),
                             CONCAT12((byte)((uint)fVar111 >> 0x10) & ~(byte)((uint)iVar116 >> 0x10)
                                      ,CONCAT11((byte)((uint)fVar111 >> 8) &
                                                ~(byte)((uint)iVar116 >> 8),
                                                SUB41(fVar111,0) & ~(byte)iVar116)));
    local_10b0 = local_10b0 * fVar83;
    fStack_10a4 = (float)(CONCAT17((byte)((uint)fVar135 >> 0x18) & ~(byte)((uint)iVar132 >> 0x18),
                                   CONCAT16((byte)((uint)fVar135 >> 0x10) &
                                            ~(byte)((uint)iVar132 >> 0x10),
                                            CONCAT15((byte)((uint)fVar135 >> 8) &
                                                     ~(byte)((uint)iVar132 >> 8),
                                                     CONCAT14(SUB41(fVar135,0) & ~(byte)iVar132,
                                                              fVar83)))) >> 0x20);
    fStack_10ac = fStack_10ac * fStack_10a4;
    fStack_10a8 = fStack_10a8 * fVar83;
    fStack_10a4 = (*(float *)(*param_2 + 0xc) - auVar74._12_4_) * fStack_10a4;
  }
  else if (((byte)param_5[6][5] >> 6 & 1) != 0) {
    local_fe0 = local_fe0 - local_1010;
    fStack_fdc = fStack_fdc - fStack_100c;
    fStack_fd8 = fStack_fd8 - fStack_1008;
    fVar83 = fStack_fd8 * fStack_fd8 + local_fe0 * local_fe0 + fStack_fdc * fStack_fdc;
    fVar117 = fStack_fd8 * fStack_fd8 + local_fe0 * local_fe0 + fStack_fdc * fStack_fdc;
    uVar137 = CONCAT44(fVar117,fVar83);
    uVar187 = NEON_frsqrte(uVar137,4);
    fVar111 = (float)uVar187;
    fVar135 = (float)((ulong)uVar187 >> 0x20);
    uVar187 = NEON_frsqrts(uVar137,CONCAT44(fVar135 * fVar135,fVar111 * fVar111),4);
    fVar111 = fVar111 * (float)uVar187;
    fVar135 = fVar135 * (float)((ulong)uVar187 >> 0x20);
    iVar116 = -(uint)(fVar83 <= 0.0);
    iVar132 = -(uint)(fVar117 <= 0.0);
    uVar137 = NEON_frsqrts(uVar137,CONCAT44(fVar135 * fVar135,fVar111 * fVar111),4);
    fVar111 = (float)uVar137 * fVar111;
    fVar135 = (float)((ulong)uVar137 >> 0x20) * fVar135;
    fVar83 = (float)CONCAT13((byte)((uint)fVar111 >> 0x18) & ~(byte)((uint)iVar116 >> 0x18),
                             CONCAT12((byte)((uint)fVar111 >> 0x10) & ~(byte)((uint)iVar116 >> 0x10)
                                      ,CONCAT11((byte)((uint)fVar111 >> 8) &
                                                ~(byte)((uint)iVar116 >> 8),
                                                SUB41(fVar111,0) & ~(byte)iVar116)));
    local_fe0 = local_fe0 * fVar83;
    fVar111 = (float)(CONCAT17((byte)((uint)fVar135 >> 0x18) & ~(byte)((uint)iVar132 >> 0x18),
                               CONCAT16((byte)((uint)fVar135 >> 0x10) &
                                        ~(byte)((uint)iVar132 >> 0x10),
                                        CONCAT15((byte)((uint)fVar135 >> 8) &
                                                 ~(byte)((uint)iVar132 >> 8),
                                                 CONCAT14(SUB41(fVar135,0) & ~(byte)iVar132,fVar83))
                                       )) >> 0x20);
    fStack_fdc = fStack_fdc * fVar111;
    auVar75._0_8_ = CONCAT44(fStack_fdc,local_fe0);
    auVar75._8_4_ = fStack_fd8 * fVar83;
    auVar75._12_4_ = (fStack_fd4 - fStack_1004) * fVar111;
    pfStack_d8 = auVar75._8_8_;
    fVar152 = fVar152 - fVar164;
    fVar161 = fVar161 - fVar170;
    fVar162 = fVar162 - fVar172;
    fVar83 = fVar162 * fVar162 + fVar152 * fVar152 + fVar161 * fVar161;
    fVar117 = fVar162 * fVar162 + fVar152 * fVar152 + fVar161 * fVar161;
    uVar137 = CONCAT44(fVar117,fVar83);
    uVar187 = NEON_frsqrte(uVar137,4);
    fVar111 = (float)uVar187;
    fVar135 = (float)((ulong)uVar187 >> 0x20);
    uVar187 = NEON_frsqrts(uVar137,CONCAT44(fVar135 * fVar135,fVar111 * fVar111),4);
    fVar111 = fVar111 * (float)uVar187;
    fVar135 = fVar135 * (float)((ulong)uVar187 >> 0x20);
    iVar116 = -(uint)(fVar83 <= 0.0);
    iVar132 = -(uint)(fVar117 <= 0.0);
    uVar137 = NEON_frsqrts(uVar137,CONCAT44(fVar135 * fVar135,fVar111 * fVar111),4);
    fVar111 = (float)uVar137 * fVar111;
    fVar135 = (float)((ulong)uVar137 >> 0x20) * fVar135;
    fVar83 = (float)CONCAT13((byte)((uint)fVar111 >> 0x18) & ~(byte)((uint)iVar116 >> 0x18),
                             CONCAT12((byte)((uint)fVar111 >> 0x10) & ~(byte)((uint)iVar116 >> 0x10)
                                      ,CONCAT11((byte)((uint)fVar111 >> 8) &
                                                ~(byte)((uint)iVar116 >> 8),
                                                SUB41(fVar111,0) & ~(byte)iVar116)));
    auVar148._0_4_ = fVar152 * fVar83;
    fVar111 = (float)(CONCAT17((byte)((uint)fVar135 >> 0x18) & ~(byte)((uint)iVar132 >> 0x18),
                               CONCAT16((byte)((uint)fVar135 >> 0x10) &
                                        ~(byte)((uint)iVar132 >> 0x10),
                                        CONCAT15((byte)((uint)fVar135 >> 8) &
                                                 ~(byte)((uint)iVar132 >> 8),
                                                 CONCAT14(SUB41(fVar135,0) & ~(byte)iVar132,fVar83))
                                       )) >> 0x20);
    auVar148._4_4_ = fVar161 * fVar111;
    auVar148._8_4_ = fVar162 * fVar83;
    auVar148._12_4_ = (fVar163 - fVar133) * fVar111;
    fVar83 = local_fe0 * auVar148._0_4_ + fStack_fdc * auVar148._4_4_ +
             auVar75._8_4_ * auVar148._8_4_;
    fVar111 = local_fe0 * auVar148._0_4_ + fStack_fdc * auVar148._4_4_ +
              auVar75._8_4_ * auVar148._8_4_;
    local_e0 = auVar75._0_8_;
    if (0.99999 < fVar83) {
      auVar78._8_8_ = _UNK_0388a138;
      auVar78._0_8_ = _DAT_0388a130;
LAB_031afa5c:
      fStack_158 = auVar78._8_4_;
      fStack_154 = auVar78._12_4_;
      local_160 = auVar78._0_4_;
      fStack_15c = auVar78._4_4_;
    }
    else {
      if (-0.99999 <= fVar83) {
        auVar96 = NEON_ext(auVar75,auVar75,4,1);
        fVar118 = fVar83 * 0.5 + 0.5;
        fVar133 = fVar111 * 0.5 + 0.5;
        uVar137 = CONCAT44(fVar133,fVar118);
        auVar154 = NEON_ext(auVar148,auVar148,4,1);
        uVar187 = NEON_frsqrte(uVar137,4);
        iVar116 = -(uint)(fVar118 <= 0.0);
        iVar132 = -(uint)(fVar133 <= 0.0);
        auVar149._0_4_ = local_fe0 * auVar154._0_4_ - auVar96._0_4_ * auVar148._0_4_;
        auVar149._4_4_ = fStack_fdc * auVar154._4_4_ - auVar96._4_4_ * auVar148._4_4_;
        auVar149._8_4_ = auVar75._8_4_ * auVar148._0_4_ - local_fe0 * auVar148._8_4_;
        auVar149._12_4_ = auVar75._12_4_ * auVar148._4_4_ - fStack_fdc * auVar148._12_4_;
        fVar117 = (float)uVar187;
        fVar152 = (float)((ulong)uVar187 >> 0x20);
        auVar96 = NEON_ext(auVar149,auVar149,4,1);
        uVar187 = NEON_frsqrts(uVar137,CONCAT44(fVar152 * fVar152,fVar117 * fVar117),4);
        fVar117 = fVar117 * (float)uVar187;
        fVar152 = fVar152 * (float)((ulong)uVar187 >> 0x20);
        uVar137 = NEON_frsqrts(uVar137,CONCAT44(fVar152 * fVar152,fVar117 * fVar117),4);
        fVar117 = (float)uVar137 * fVar117;
        fVar152 = (float)((ulong)uVar137 >> 0x20) * fVar152;
        fVar134 = (float)CONCAT13((byte)((uint)fVar117 >> 0x18) & ~(byte)((uint)iVar116 >> 0x18),
                                  CONCAT12((byte)((uint)fVar117 >> 0x10) &
                                           ~(byte)((uint)iVar116 >> 0x10),
                                           CONCAT11((byte)((uint)fVar117 >> 8) &
                                                    ~(byte)((uint)iVar116 >> 8),
                                                    SUB41(fVar117,0) & ~(byte)iVar116)));
        fVar117 = auVar96._0_4_;
        fVar135 = auVar96._4_4_;
        if (fVar83 < -0.999) {
          fVar152 = auVar149._0_4_ * auVar149._0_4_ + fVar117 * fVar117 + fVar135 * fVar135;
          fVar162 = auVar149._0_4_ * auVar149._0_4_ + fVar117 * fVar117 + fVar135 * fVar135;
          uVar137 = CONCAT44(fVar162,fVar152);
          uVar187 = NEON_frsqrte(uVar137,4);
          fVar161 = (float)uVar187;
          fVar163 = (float)((ulong)uVar187 >> 0x20);
          uVar187 = NEON_frsqrts(uVar137,CONCAT44(fVar163 * fVar163,fVar161 * fVar161),4);
          fVar161 = fVar161 * (float)uVar187;
          fVar163 = fVar163 * (float)((ulong)uVar187 >> 0x20);
          iVar116 = -(uint)(fVar152 <= 0.0);
          iVar132 = -(uint)(fVar162 <= 0.0);
          uVar187 = NEON_frsqrts(uVar137,CONCAT44(fVar163 * fVar163,fVar161 * fVar161),4);
          fVar83 = fVar118 - fVar83;
          fVar133 = fVar133 - fVar111;
          uVar137 = CONCAT44(fVar133,fVar83);
          fVar161 = (float)uVar187 * fVar161;
          fVar163 = (float)((ulong)uVar187 >> 0x20) * fVar163;
          uVar187 = NEON_frsqrte(uVar137,4);
          fVar152 = (float)uVar187;
          fVar162 = (float)((ulong)uVar187 >> 0x20);
          uVar187 = NEON_frsqrts(uVar137,CONCAT44(fVar162 * fVar162,fVar152 * fVar152),4);
          fVar152 = fVar152 * (float)uVar187;
          fVar162 = fVar162 * (float)((ulong)uVar187 >> 0x20);
          uVar137 = NEON_frsqrts(uVar137,CONCAT44(fVar162 * fVar162,fVar152 * fVar152),4);
          fVar111 = (float)CONCAT13((byte)((uint)fVar161 >> 0x18) & ~(byte)((uint)iVar116 >> 0x18),
                                    CONCAT12((byte)((uint)fVar161 >> 0x10) &
                                             ~(byte)((uint)iVar116 >> 0x10),
                                             CONCAT11((byte)((uint)fVar161 >> 8) &
                                                      ~(byte)((uint)iVar116 >> 8),
                                                      SUB41(fVar161,0) & ~(byte)iVar116)));
          iVar116 = -(uint)(fVar83 <= 0.0);
          iVar112 = -(uint)(fVar133 <= 0.0);
          fVar152 = (float)uVar137 * fVar152;
          fVar162 = (float)((ulong)uVar137 >> 0x20) * fVar162;
          fVar152 = (float)CONCAT13((byte)((uint)fVar152 >> 0x18) & ~(byte)((uint)iVar116 >> 0x18),
                                    CONCAT12((byte)((uint)fVar152 >> 0x10) &
                                             ~(byte)((uint)iVar116 >> 0x10),
                                             CONCAT11((byte)((uint)fVar152 >> 8) &
                                                      ~(byte)((uint)iVar116 >> 8),
                                                      SUB41(fVar152,0) & ~(byte)iVar116)));
          fVar83 = fVar111 * fVar83 * fVar152;
          fVar111 = (float)(CONCAT17((byte)((uint)fVar163 >> 0x18) & ~(byte)((uint)iVar132 >> 0x18),
                                     CONCAT16((byte)((uint)fVar163 >> 0x10) &
                                              ~(byte)((uint)iVar132 >> 0x10),
                                              CONCAT15((byte)((uint)fVar163 >> 8) &
                                                       ~(byte)((uint)iVar132 >> 8),
                                                       CONCAT14(SUB41(fVar163,0) & ~(byte)iVar132,
                                                                fVar111)))) >> 0x20) *
                    fVar133 * (float)(CONCAT17((byte)((uint)fVar162 >> 0x18) &
                                               ~(byte)((uint)iVar112 >> 0x18),
                                               CONCAT16((byte)((uint)fVar162 >> 0x10) &
                                                        ~(byte)((uint)iVar112 >> 0x10),
                                                        CONCAT15((byte)((uint)fVar162 >> 8) &
                                                                 ~(byte)((uint)iVar112 >> 8),
                                                                 CONCAT14(SUB41(fVar162,0) &
                                                                          ~(byte)iVar112,fVar152))))
                                     >> 0x20);
        }
        else {
          fVar83 = fVar134 * 0.5;
          fVar111 = (float)(CONCAT17((byte)((uint)fVar152 >> 0x18) & ~(byte)((uint)iVar132 >> 0x18),
                                     CONCAT16((byte)((uint)fVar152 >> 0x10) &
                                              ~(byte)((uint)iVar132 >> 0x10),
                                              CONCAT15((byte)((uint)fVar152 >> 8) &
                                                       ~(byte)((uint)iVar132 >> 8),
                                                       CONCAT14(SUB41(fVar152,0) & ~(byte)iVar132,
                                                                fVar134)))) >> 0x20) * 0.5;
        }
        auVar78._0_4_ = fVar117 * fVar83;
        auVar78._4_4_ = fVar135 * fVar111;
        auVar78._8_4_ = auVar149._0_4_ * fVar83;
        auVar78._12_4_ = fVar118 * fVar134;
        goto LAB_031afa5c;
      }
      FUN_032cad60(&local_160,&local_e0);
      auVar78._4_4_ = fStack_15c;
      auVar78._0_4_ = local_160;
      auVar78._8_4_ = fStack_158;
      auVar78._12_4_ = fStack_154;
    }
    auVar96 = NEON_ext(auVar78,auVar78,8,1);
    fVar118 = auVar96._4_4_ * auVar96._4_4_;
    auVar16._4_4_ = fStack_10ac;
    auVar16._0_4_ = local_10b0;
    auVar16._8_4_ = fStack_10a8;
    auVar16._12_4_ = fStack_10a4;
    fVar133 = fVar118 + -0.5;
    fVar118 = fVar118 + -0.5;
    fVar83 = auVar78._0_4_;
    fVar111 = auVar78._4_4_;
    fVar117 = auVar78._8_4_;
    fVar135 = auVar78._12_4_;
    fVar134 = local_10b0 * fVar83 + fStack_10ac * fVar111 + fStack_10a8 * fVar117;
    fVar152 = local_10b0 * fVar83 + fStack_10ac * fVar111 + fStack_10a8 * fVar117;
    auVar154 = NEON_ext(auVar16,auVar16,4,1);
    auVar96 = NEON_ext(auVar78,auVar78,4,1);
    auVar129._0_4_ = auVar154._0_4_ * fVar83 - local_10b0 * auVar96._0_4_;
    auVar129._4_4_ = auVar154._4_4_ * fVar111 - fStack_10ac * auVar96._4_4_;
    auVar129._8_4_ = local_10b0 * fVar117 - fStack_10a8 * fVar83;
    auVar129._12_4_ = fStack_10ac * fVar135 - fStack_10a4 * fVar111;
    auVar96 = NEON_ext(auVar129,auVar129,4,1);
    local_10b0 = local_10b0 * fVar133 + fVar83 * fVar134 + auVar96._0_4_ * fVar135;
    fStack_10ac = fStack_10ac * fVar118 + fVar111 * fVar152 + auVar96._4_4_ * fVar135;
    fStack_10a8 = fStack_10a8 * fVar133 + fVar117 * fVar134 + auVar129._0_4_ * fVar135;
    fStack_10a4 = fStack_10a4 * fVar118 + fVar135 * fVar152 + auVar129._4_4_ * fVar135;
    local_10b0 = local_10b0 + local_10b0;
    fStack_10ac = fStack_10ac + fStack_10ac;
    fStack_10a8 = fStack_10a8 + fStack_10a8;
    fStack_10a4 = fStack_10a4 + fStack_10a4;
  }
  auVar21._8_4_ = fStack_168;
  auVar21._0_8_ = CONCAT44(fStack_16c,local_170);
  auVar21._12_4_ = fStack_164;
  auVar96 = NEON_ext(auVar21,auVar21,8,1);
  auVar15._4_4_ = fStack_10ac;
  auVar15._0_4_ = local_10b0;
  auVar15._8_4_ = fStack_10a8;
  auVar15._12_4_ = fStack_10a4;
  auVar154 = NEON_ext(auVar15,auVar15,4,1);
  uVar187 = NEON_ext(CONCAT44(fStack_16c,local_170),auVar96._0_8_,4,1);
  uVar137 = CONCAT44(fVar113 + (float)(uVar29 << 0x10),fVar151);
  auVar76._0_4_ = local_170 * auVar154._0_4_ - local_10b0 * (float)uVar187;
  auVar76._4_4_ = fStack_16c * auVar154._4_4_ - fStack_10ac * (float)((ulong)uVar187 >> 0x20);
  auVar76._8_4_ = fStack_168 * local_10b0 - fStack_10a8 * local_170;
  auVar76._12_4_ = fStack_164 * fStack_10ac - fStack_10a4 * fStack_16c;
  auVar96 = NEON_ext(auVar76,auVar76,4,1);
  local_f50 = auVar96._0_4_;
  fStack_f4c = auVar96._4_4_;
  fVar83 = local_f50 * local_f50 + fStack_f4c * fStack_f4c + auVar76._0_4_ * auVar76._0_4_;
  fVar113 = local_f50 * local_f50 + fStack_f4c * fStack_f4c + auVar76._0_4_ * auVar76._0_4_;
  uVar187 = CONCAT44(fVar113,fVar83);
  uVar153 = NEON_frsqrte(uVar187,4);
  fVar151 = (float)uVar153;
  fVar111 = (float)((ulong)uVar153 >> 0x20);
  uVar153 = NEON_frsqrts(uVar187,CONCAT44(fVar111 * fVar111,fVar151 * fVar151),4);
  fVar151 = fVar151 * (float)uVar153;
  fVar111 = fVar111 * (float)((ulong)uVar153 >> 0x20);
  iVar116 = -(uint)(fVar83 <= 0.0);
  iVar132 = -(uint)(fVar113 <= 0.0);
  uVar187 = NEON_frsqrts(uVar187,CONCAT44(fVar111 * fVar111,fVar151 * fVar151),4);
  fVar151 = (float)uVar187 * fVar151;
  fVar111 = (float)((ulong)uVar187 >> 0x20) * fVar111;
  fStack_f48 = (float)CONCAT13((byte)((uint)fVar151 >> 0x18) & ~(byte)((uint)iVar116 >> 0x18),
                               CONCAT12((byte)((uint)fVar151 >> 0x10) &
                                        ~(byte)((uint)iVar116 >> 0x10),
                                        CONCAT11((byte)((uint)fVar151 >> 8) &
                                                 ~(byte)((uint)iVar116 >> 8),
                                                 SUB41(fVar151,0) & ~(byte)iVar116)));
  local_f50 = local_f50 * fStack_f48;
  fVar83 = (float)(CONCAT17((byte)((uint)fVar111 >> 0x18) & ~(byte)((uint)iVar132 >> 0x18),
                            CONCAT16((byte)((uint)fVar111 >> 0x10) & ~(byte)((uint)iVar132 >> 0x10),
                                     CONCAT15((byte)((uint)fVar111 >> 8) &
                                              ~(byte)((uint)iVar132 >> 8),
                                              CONCAT14(SUB41(fVar111,0) & ~(byte)iVar132,fStack_f48)
                                             ))) >> 0x20);
  fStack_f4c = fStack_f4c * fVar83;
  fStack_f48 = auVar76._0_4_ * fStack_f48;
  auVar77._0_4_ = fVar110 * local_f50;
  auVar77._4_4_ = fVar87 * fStack_f4c;
  auVar77._8_4_ = auVar74._8_4_ * fStack_f48;
  auVar77._12_4_ = auVar74._12_4_ * auVar76._4_4_ * fVar83;
  auVar96 = NEON_ext(auVar77,auVar77,8,1);
  fStack_f44 = -(auVar77._0_4_ + auVar77._4_4_ + auVar96._0_4_);
LAB_031adccc:
  lVar52 = auVar74._0_8_;
  pfVar199 = pfVar198;
  goto LAB_031ad460;
}


