/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0309f8d0; name: FUN_0309f8d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0309f8d0(undefined4 *param_1,uint *param_2,long param_3,long param_4,long param_5,
                 long param_6,long param_7)

{
  ushort *puVar1;
  long lVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  char cVar6;
  char cVar7;
  ushort uVar8;
  ushort uVar9;
  float *pfVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  bool bVar20;
  int iVar21;
  undefined8 uVar22;
  long lVar23;
  byte *pbVar24;
  int iVar25;
  byte *pbVar26;
  uint uVar27;
  ulong uVar28;
  byte bVar29;
  uint uVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  bool bVar35;
  ulong uVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  ulong uVar40;
  long lVar41;
  long lVar42;
  uint uVar43;
  float fVar44;
  float fVar45;
  float fVar50;
  double dVar46;
  undefined8 uVar47;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar55;
  undefined1 auVar48 [16];
  float fVar54;
  float fVar56;
  undefined1 auVar49 [16];
  float fVar57;
  double dVar58;
  undefined8 uVar59;
  float fVar65;
  undefined1 auVar60 [16];
  float fVar64;
  float fVar66;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  int iVar67;
  double dVar68;
  undefined8 uVar69;
  float fVar71;
  undefined1 auVar70 [16];
  double dVar72;
  undefined8 uVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined4 uVar77;
  float fVar78;
  undefined4 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  float fVar88;
  undefined8 uVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined8 uVar93;
  float fVar94;
  undefined4 uStack_188;
  undefined4 uStack_184;
  float local_110;
  float fStack_10c;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  long local_e0;
  undefined8 local_d8;
  long local_d0;
  uint local_c8;
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  uint local_a8;
  long local_a0;
  undefined8 local_98;
  long local_90;
  uint local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  
  iVar21 = *(int *)(param_5 + 0x184);
  uVar43 = *(uint *)(param_5 + 0x10);
  uVar40 = (ulong)uVar43;
  uVar27 = param_2[4];
  if (((uVar27 & 1) == 0) && (*(char *)(param_5 + 0x120) != '\0')) {
    return;
  }
  if ((*(char *)(param_5 + 0x175) == '\x01') && (uVar30 = *param_2, uVar30 != 0)) {
    if (uVar30 + 1 != param_1[0x1c]) {
      if ((uVar30 & 1) != 0) {
        return;
      }
      if ((int)uVar30 < 2) {
        return;
      }
      if (param_1[0x1c] + -1 <= (int)(uVar30 + 1)) {
        return;
      }
    }
  }
  if (*(int *)(param_5 + 0x1ac) - *(int *)(param_5 + 0x1b0) != iVar21) {
    return;
  }
  if (((iVar21 < 1) || (*(char *)(param_5 + 0x121) != '\0')) || (*(int *)(param_5 + 0x40) < iVar21))
  {
    *(undefined1 *)(param_5 + 0x121) = 1;
    return;
  }
  if (((uVar27 & 1) != 0) && (iVar67 = *(int *)(param_5 + 0x80), iVar67 != iVar21)) {
    if ((int)(*(uint *)(param_5 + 0x84) & 0x3fffffff) < iVar21) {
      uVar22 = FUN_030a3508(PTR_PTR_0434a080,iVar21,*(undefined8 *)(param_5 + 0x78));
      iVar67 = *(int *)(param_5 + 0x80);
      *(undefined8 *)(param_5 + 0x78) = uVar22;
    }
    if (iVar67 != iVar21) {
      *(int *)(param_5 + 0x80) = iVar21;
    }
    *(undefined1 *)(param_5 + 0x120) = 1;
  }
  if ((uVar27 & 1) != 0) {
    lVar31 = *(long *)(param_5 + 0x38) + (long)(iVar21 + -1) * 0x70;
    iVar25 = *(int *)(param_5 + 0x90);
    iVar67 = (uint)*(byte *)(lVar31 + 0x19) + (int)*(short *)(lVar31 + 0x14);
    if (iVar25 != iVar67) {
      if ((int)(*(uint *)(param_5 + 0x94) & 0x3fffffff) < iVar67) {
        uVar22 = FUN_030a39f0(PTR_PTR_0434a080,iVar67,*(undefined8 *)(param_5 + 0x88));
        iVar25 = *(int *)(param_5 + 0x90);
        *(undefined8 *)(param_5 + 0x88) = uVar22;
      }
      if (iVar25 != iVar67) {
        *(int *)(param_5 + 0x90) = iVar67;
      }
      *(undefined1 *)(param_5 + 0x120) = 1;
    }
    iVar67 = *(int *)(param_5 + 0x18c);
    if ((int)(*(uint *)(param_5 + 0xa4) & 0x3fffffff) < iVar67) {
      lVar31 = FUN_030a3bf4(PTR_PTR_0434a080,iVar67,*(undefined8 *)(param_5 + 0x98),
                            *(undefined4 *)(param_5 + 0xa0));
      iVar25 = *(int *)(param_5 + 0xa0);
      *(long *)(param_5 + 0x98) = lVar31;
      if (iVar25 < iVar67) {
        *(int *)(param_5 + 0xa0) = iVar67;
        lVar32 = lVar31 + (long)iVar25 * 0x20;
        uVar36 = ((long)iVar67 * 0x20 + (long)iVar25 * -0x20) - 0x20;
        uVar30 = ((uint)(uVar36 >> 5) & 0x7ffffff) + 1;
        if ((uVar30 & 7) != 0) {
          lVar39 = -((ulong)uVar30 & 7);
          do {
            *(undefined1 *)(lVar32 + 0x1d) = 0;
            lVar32 = lVar32 + 0x20;
            bVar20 = lVar39 != -1;
            lVar39 = lVar39 + 1;
          } while (bVar20);
        }
        if (0xdf < uVar36) {
          do {
            *(undefined1 *)(lVar32 + 0x1d) = 0;
            *(undefined1 *)(lVar32 + 0x3d) = 0;
            *(undefined1 *)(lVar32 + 0x5d) = 0;
            *(undefined1 *)(lVar32 + 0x7d) = 0;
            *(undefined1 *)(lVar32 + 0x9d) = 0;
            *(undefined1 *)(lVar32 + 0xbd) = 0;
            *(undefined1 *)(lVar32 + 0xdd) = 0;
            *(undefined1 *)(lVar32 + 0xfd) = 0;
            lVar32 = lVar32 + 0x100;
          } while (lVar31 + (long)iVar67 * 0x20 != lVar32);
        }
      }
      else if (iVar67 < iVar25) {
        *(int *)(param_5 + 0xa0) = iVar67;
      }
    }
  }
  local_70[0] = *(undefined8 *)(param_1 + 0x10);
  uVar22 = *(undefined8 *)(param_1 + 0xe);
  local_78 = CONCAT44(*param_1,*param_1);
  local_80 = *(undefined8 *)(param_1 + 2);
  uVar30 = *(uint *)(param_5 + 0x20);
  local_a0 = 0;
  local_98 = 0x8000000000000000;
  lVar31 = tpidr_el0;
  local_88 = uVar30;
  if (uVar30 == 0) {
    iVar67 = 0;
    local_90 = 0;
  }
  else {
    lVar32 = *(long *)(lVar31 + 0x38d490);
    if (lVar32 == 0) {
      lVar32 = FUN_0333d16c(0,1);
      *(long *)(lVar31 + 0x38d490) = lVar32;
    }
    lVar32 = *(long *)(lVar32 + 8);
    uVar36 = (long)(int)uVar30 * 0xa0 + 0x7fU & 0xffffffffffffff80;
    if (*(ulong *)(lVar32 + 0x10) < uVar36) {
LAB_030a0a50:
      local_90 = FUN_032ce670();
    }
    else {
      local_90 = *(long *)(lVar32 + 0x18);
      uVar36 = local_90 + uVar36;
      if (*(ulong *)(lVar32 + 0x20) < uVar36) goto LAB_030a0a50;
      *(ulong *)(lVar32 + 0x18) = uVar36;
    }
    iVar67 = *(int *)(param_5 + 0x20);
  }
  local_98 = CONCAT44(uVar30,(int)local_98) | 0x8000000000000000;
  local_a0 = local_90;
  if ((int)(uVar30 & 0x3fffffff) < iVar67) {
    local_a0 = FUN_030a3d64(PTR_PTR_0434a080,iVar67,local_90,(long)&local_98 + 4);
    iVar25 = (int)local_98;
    if ((int)local_98 != iVar67) {
LAB_0309fc1c:
      local_98 = CONCAT44(local_98._4_4_,iVar67);
      iVar25 = iVar67;
    }
  }
  else {
    iVar25 = 0;
    if (iVar67 != 0) goto LAB_0309fc1c;
  }
  *(long *)(param_5 + 0x28) = local_a0;
  *(long *)(param_5 + 0x30) = local_a0 + (long)iVar25 * 0xa0;
  uVar18 = _DAT_038895d0;
  uVar17 = _UNK_03889108;
  uVar16 = _DAT_03889100;
  uVar15 = _UNK_038890f8;
  uVar93 = _DAT_038890f0;
  uVar89 = _UNK_03888e28;
  uVar73 = _DAT_03888e20;
  uVar59 = _UNK_03888d78;
  uVar47 = _DAT_03888d70;
  if (0 < (int)uVar43) {
    auVar60 = NEON_fmov(0xbf800000,4);
    lVar32 = 0;
    lVar33 = *(long *)(param_4 + 8);
    fVar44 = (float)param_1[0x30] + auVar60._0_4_;
    fVar50 = (float)param_1[0x31] + auVar60._4_4_;
    fVar52 = (float)param_1[0x32] + auVar60._8_4_;
    fVar55 = (float)param_1[0x33] + auVar60._12_4_;
    local_110 = (float)uVar22;
    fStack_10c = (float)((ulong)uVar22 >> 0x20);
    lVar39 = 0x90;
    lVar41 = 0x10;
    uStack_188 = (undefined4)_UNK_038895d8;
    uStack_184 = (undefined4)((ulong)_UNK_038895d8 >> 0x20);
    lVar23 = local_a0;
    while( true ) {
      uVar40 = uVar40 - 1;
      lVar34 = *(long *)(param_5 + 0x18);
      lVar42 = *(long *)(param_5 + 8);
      if (((uVar27 & 1) != 0) && (iVar67 = *(int *)(lVar42 + lVar32), iVar67 != 0x7fffffff)) {
        lVar37 = *(long *)(lVar33 + 0x150);
        lVar2 = lVar37 + (long)iVar67 * 0x80;
        if (*(int *)(lVar2 + 0x4c) != 0) {
          dVar46 = *(double *)(lVar2 + 0x10);
          dVar58 = *(double *)(lVar2 + 0x18);
          dVar68 = *(double *)(param_5 + 400);
          dVar72 = *(double *)(param_5 + 0x198);
          *(ulong *)(lVar34 + lVar41 + -8) =
               (ulong)(uint)(float)(*(double *)(lVar2 + 0x20) - *(double *)(param_5 + 0x1a0));
          *(ulong *)(lVar34 + lVar41 + -0x10) =
               CONCAT44((float)(dVar58 - dVar72),(float)(dVar46 - dVar68));
        }
        pfVar10 = (float *)(lVar37 + (long)iVar67 * 0x80);
        auVar60._0_8_ = CONCAT44(-pfVar10[1],-*pfVar10);
        auVar60._8_4_ = -pfVar10[2];
        auVar60._12_4_ = pfVar10[3];
        ((undefined8 *)(lVar34 + lVar41))[1] = auVar60._8_8_;
        *(undefined8 *)(lVar34 + lVar41) = auVar60._0_8_;
      }
      lVar2 = lVar42 + lVar32;
      if (*(uint *)(lVar2 + 4) == 0x7fffffff) goto LAB_030a02ac;
      lVar38 = (long)*(char *)(lVar2 + 0xe) * 8;
      lVar37 = (ulong)*(uint *)(lVar2 + 4) * 0x20;
      pfVar10 = (float *)(lVar23 + lVar39);
      pfVar3 = (float *)(*(long *)(param_6 + lVar38) + lVar37);
      pfVar4 = (float *)(*(long *)(param_3 + lVar38) + lVar37);
      fVar45 = *pfVar3;
      fVar51 = pfVar3[1];
      fVar53 = pfVar3[2];
      fVar54 = pfVar3[3];
      uVar22 = *(undefined8 *)(pfVar3 + 4);
      *(ulong *)(pfVar10 + -10) = (ulong)(uint)fVar54;
      *(undefined8 *)(pfVar10 + -0xc) = uVar22;
      pfVar10[-6] = fVar53;
      pfVar10[-5] = fVar54;
      pfVar10[-8] = fVar45;
      pfVar10[-7] = fVar51;
      uVar69 = *(undefined8 *)(pfVar3 + 6);
      pfVar10[-0xe] = (float)((int)(short)((ulong)uVar69 >> 0x20) << 0x10);
      pfVar10[-0xd] = (float)((int)(short)((ulong)uVar69 >> 0x30) << 0x10);
      pfVar10[-0x10] = (float)((int)(short)uVar69 << 0x10);
      pfVar10[-0xf] = (float)((int)(short)((ulong)uVar69 >> 0x10) << 0x10);
      fVar56 = pfVar4[3];
      pfVar3 = (float *)(lVar34 + lVar41);
      fVar45 = fVar45 + fVar44 * *pfVar4;
      fVar51 = fVar51 + fVar50 * pfVar4[1];
      fVar53 = fVar53 + fVar52 * pfVar4[2];
      fVar57 = (float)uVar22 + fVar44 * (float)*(undefined8 *)(pfVar4 + 4);
      fVar64 = (float)((ulong)uVar22 >> 0x20) +
               fVar50 * (float)((ulong)*(undefined8 *)(pfVar4 + 4) >> 0x20);
      fVar65 = fVar54 + fVar52 * fVar56;
      fVar66 = fVar55 * 0.0 + 0.0;
      pfVar10[-2] = fVar65;
      pfVar10[-1] = fVar66;
      pfVar10[-4] = fVar57;
      pfVar10[-3] = fVar64;
      pfVar10[2] = fVar53;
      pfVar10[3] = fVar54 + fVar55 * fVar56;
      *pfVar10 = fVar45;
      pfVar10[1] = fVar51;
      fVar54 = pfVar3[-4];
      fVar56 = pfVar3[-3];
      fVar71 = pfVar3[-1];
      pfVar10[-0x1e] = pfVar3[-2] + local_110 * fVar65;
      pfVar10[-0x1d] = fVar71 + fStack_10c * fVar66;
      pfVar10[-0x20] = fVar54 + local_110 * fVar57;
      pfVar10[-0x1f] = fVar56 + fStack_10c * fVar64;
      auVar48._0_4_ = local_110 * 0.5 * fVar45;
      auVar48._4_4_ = fStack_10c * 0.5 * fVar51;
      auVar48._8_4_ = local_110 * 0.5 * fVar53;
      auVar48._12_4_ = 0x3f800000;
      auVar61._0_4_ = -*pfVar3;
      auVar61._4_4_ = -pfVar3[1];
      auVar61._8_4_ = -pfVar3[2];
      auVar61._12_4_ = pfVar3[3];
      auVar62._8_8_ = uVar89;
      auVar62._0_8_ = uVar73;
      auVar70._8_8_ = uVar15;
      auVar70._0_8_ = uVar93;
      auVar70 = a64_TBL(ZEXT816(0),auVar61,auVar70);
      auVar62 = a64_TBL(ZEXT816(0),auVar61,auVar62);
      auVar13._8_8_ = uVar17;
      auVar13._0_8_ = uVar16;
      auVar74._8_8_ = uVar59;
      auVar74._0_8_ = uVar47;
      auVar74 = a64_TBL(ZEXT816(0),auVar48,auVar74);
      auVar60 = a64_TBL(ZEXT816(0),auVar48,auVar13);
      auVar75._0_4_ = auVar62._0_4_ * auVar60._0_4_ - auVar70._0_4_ * auVar74._0_4_;
      auVar75._4_4_ = auVar62._4_4_ * auVar60._4_4_ - auVar70._4_4_ * auVar74._4_4_;
      auVar75._8_4_ = auVar62._8_4_ * auVar60._8_4_ - auVar70._8_4_ * auVar74._8_4_;
      auVar75._12_4_ = auVar62._12_4_ * auVar60._12_4_ - auVar70._12_4_ * auVar74._12_4_;
      auVar76._8_4_ = uStack_188;
      auVar76._0_8_ = uVar18;
      auVar76._12_4_ = uStack_184;
      auVar76 = a64_TBL(ZEXT816(0),auVar75,auVar76);
      fVar56 = auVar76._12_4_ - (auVar62._12_4_ * auVar74._12_4_ + auVar70._12_4_ * auVar60._12_4_);
      fVar51 = -(auVar76._0_4_ - (auVar62._0_4_ * auVar74._0_4_ + auVar70._0_4_ * auVar60._0_4_));
      fVar53 = -(auVar76._4_4_ - (auVar62._4_4_ * auVar74._4_4_ + auVar70._4_4_ * auVar60._4_4_));
      fVar54 = -(auVar76._8_4_ - (auVar62._8_4_ * auVar74._8_4_ + auVar70._8_4_ * auVar60._8_4_));
      auVar63._0_4_ = fVar51 * fVar51;
      auVar63._4_4_ = fVar53 * fVar53;
      auVar63._8_4_ = fVar54 * fVar54;
      auVar63._12_4_ = fVar56 * fVar56;
      auVar60 = NEON_ext(auVar63,auVar63,8,1);
      fVar45 = auVar60._0_4_ + auVar60._4_4_;
      uVar22 = CONCAT44(auVar63._0_4_ + auVar63._4_4_ + fVar45,
                        auVar63._0_4_ + auVar63._4_4_ + fVar45);
      uVar69 = NEON_frsqrte(uVar22,4);
      fVar45 = (float)uVar69;
      fVar71 = (float)((ulong)uVar69 >> 0x20);
      uVar69 = NEON_frsqrts(uVar22,CONCAT44(fVar71 * fVar71,fVar45 * fVar45),4);
      fVar45 = fVar45 * (float)uVar69;
      fVar71 = fVar71 * (float)((ulong)uVar69 >> 0x20);
      uVar22 = NEON_frsqrts(uVar22,CONCAT44(fVar71 * fVar71,fVar45 * fVar45),4);
      fVar45 = (float)uVar22 * fVar45;
      fVar71 = (float)((ulong)uVar22 >> 0x20) * fVar71;
      auVar49._0_8_ = CONCAT44(fVar53 * fVar71,fVar51 * fVar45);
      auVar49._8_4_ = fVar54 * fVar45;
      auVar49._12_4_ = fVar56 * fVar71;
      *(long *)(pfVar10 + -0x22) = auVar49._8_8_;
      *(undefined8 *)(pfVar10 + -0x24) = auVar49._0_8_;
      FUN_032c9fc0(pfVar10 + -0x1c);
      if ((*(int *)(lVar2 + 4) == 0x7fffffff) ||
         (((~*(uint *)(lVar2 + 8) & 0xffffff) == 0 && (*(int *)(lVar42 + lVar32) == 0x7fffffff))))
      goto LAB_030a02ac;
      if (uVar40 == 0) break;
      lVar23 = *(long *)(param_5 + 0x28);
      lVar32 = lVar32 + 0x10;
      lVar39 = lVar39 + 0xa0;
      lVar41 = lVar41 + 0x20;
    }
  }
  if (((*(char *)(param_5 + 0x120) != '\0') || (iVar21 < *(int *)(param_5 + 0xd0))) &&
     (iVar21 = FUN_030a6780(param_5), iVar21 < 0)) {
LAB_030a02ac:
    *(undefined1 *)(param_5 + 0x121) = 1;
    goto LAB_030a02b8;
  }
  uVar43 = *(uint *)(*(long *)(param_5 + 0xd8) + 0x28);
  uVar27 = *(uint *)(param_5 + 0x110);
  local_c0 = 0;
  local_b8 = 0x8000000000000000;
  local_a8 = uVar43;
  if (uVar43 == 0) {
    local_b0 = 0;
  }
  else {
    lVar32 = *(long *)(lVar31 + 0x38d490);
    if (lVar32 == 0) {
      lVar32 = FUN_0333d16c(0,1);
      *(long *)(lVar31 + 0x38d490) = lVar32;
    }
    lVar32 = *(long *)(lVar32 + 8);
    uVar40 = (ulong)(int)(uVar43 * 4 + 0x7f & 0xffffff80);
    if (uVar40 <= *(ulong *)(lVar32 + 0x10)) {
      local_b0 = *(long *)(lVar32 + 0x18);
      uVar40 = local_b0 + uVar40;
      if (uVar40 <= *(ulong *)(lVar32 + 0x20)) {
        *(ulong *)(lVar32 + 0x18) = uVar40;
        goto LAB_0309ff88;
      }
    }
    local_b0 = FUN_032ce670(lVar32);
  }
LAB_0309ff88:
  local_b8 = CONCAT44(uVar43,(uint)local_b8) | 0x8000000000000000;
  local_e0 = 0;
  local_d8 = 0x8000000000000000;
  local_c8 = uVar27;
  local_c0 = local_b0;
  if (uVar27 == 0) {
    lVar32 = 0;
  }
  else {
    lVar32 = *(long *)(lVar31 + 0x38d490);
    if (lVar32 == 0) {
      lVar32 = FUN_0333d16c(0,1);
      *(long *)(lVar31 + 0x38d490) = lVar32;
    }
    lVar39 = *(long *)(lVar32 + 8);
    uVar40 = (ulong)(int)(uVar27 * 4 + 0x7f & 0xffffff80);
    if (uVar40 <= *(ulong *)(lVar39 + 0x10)) {
      lVar32 = *(long *)(lVar39 + 0x18);
      uVar40 = lVar32 + uVar40;
      if (uVar40 <= *(ulong *)(lVar39 + 0x20)) {
        *(ulong *)(lVar39 + 0x18) = uVar40;
        goto LAB_0309fff8;
      }
    }
    lVar32 = FUN_032ce670();
  }
LAB_0309fff8:
  puVar19 = PTR_PTR_0434a080;
  local_d8 = CONCAT44(uVar27,(uint)local_d8) | 0x8000000000000000;
  local_e0 = lVar32;
  local_d0 = lVar32;
  if ((int)uVar27 < 0x40000000) {
    uVar30 = 0;
    if (uVar27 != 0) goto LAB_030a0078;
  }
  else {
    FUN_032bd0a8(uVar27);
    uVar30 = (uVar27 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar30) {
      uVar30 = 0x3fffffff;
    }
    uVar5 = uVar27;
    if ((int)uVar27 <= (int)uVar30) {
      uVar5 = uVar30;
    }
    local_e0 = FUN_032bd1d4(puVar19,uVar5,4,lVar32,0,(long)&local_d8 + 4);
    uVar30 = (uint)local_d8;
    if ((uint)local_d8 != uVar27) {
LAB_030a0078:
      local_d8 = CONCAT44(local_d8._4_4_,uVar27);
      uVar30 = uVar27;
    }
  }
  lVar32 = local_c0;
  *(long *)(param_5 + 0xf0) = local_e0;
  *(long *)(param_5 + 0xf8) = local_e0 + (long)(int)uVar30 * 4;
  if ((int)(local_b8._4_4_ & 0x3fffffff) < (int)uVar43) {
    uVar40 = local_b8 & 0xffffffff;
    if (0x3fffffff < (int)uVar43) {
      FUN_032bd0a8(uVar43);
    }
    uVar30 = (local_b8._4_4_ & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar30) {
      uVar30 = 0x3fffffff;
    }
    uVar5 = uVar43;
    if ((int)uVar43 <= (int)uVar30) {
      uVar5 = uVar30;
    }
    local_c0 = FUN_032bd1d4(puVar19,uVar5,4,lVar32,uVar40,(long)&local_b8 + 4);
  }
  if ((uint)local_b8 == uVar43) {
    uVar43 = (uint)local_b8;
  }
  else {
    local_b8 = CONCAT44(local_b8._4_4_,uVar43);
  }
  lVar32 = *(long *)(param_5 + 0xd8);
  *(long *)(lVar32 + 0x18) = local_c0;
  *(long *)(lVar32 + 0x20) = local_c0 + (long)(int)uVar43 * 4;
  FUN_030a0bc0(param_1,param_2,param_5,param_7,&local_78,&local_80,local_70,auStack_e8,auStack_f0,
               auStack_f8,auStack_100);
  uVar22 = local_70[0];
  FUN_030a7610(param_5,*param_2);
  iVar21 = (**(code **)(**(long **)(param_5 + 0xd8) + 0x28))();
  if (iVar21 <= (int)uVar27 / 10) {
    (**(code **)(**(long **)(param_5 + 0xd8) + 0x30))();
    cVar6 = *(char *)(param_5 + 0x122);
    uVar43 = *(uint *)(param_5 + 0x184);
    if ((0 < *(int *)(param_5 + 0x18c)) && (*(int *)(param_5 + 0xa0) != 0)) {
      lVar32 = (long)*(int *)(param_5 + 0xa0) << 5;
      fVar44 = (float)(int)((param_1[0x1c] - *param_2) + 1);
      cVar7 = *(char *)(*(long *)(param_5 + 0x98) + 0x1b);
      puVar14 = (undefined1 *)(*(long *)(param_5 + 0x98) + 0x1d);
      while( true ) {
        if (cVar7 == '\0') {
          lVar39 = (long)*(short *)(puVar14 + -7);
          lVar41 = *(long *)(param_5 + 0xf0);
          fVar50 = *(float *)(puVar14 + -0x1d);
          fVar52 = *(float *)(lVar41 + lVar39 * 4) + fVar50;
          if ((*(float *)(puVar14 + -0xd) + *(float *)(puVar14 + -0x15)) * fVar44 < fVar52) {
            *(float *)(lVar41 + lVar39 * 4) =
                 (*(float *)(puVar14 + -0xd) + *(float *)(puVar14 + -0x15)) - fVar50;
            *puVar14 = 4;
          }
          else if (fVar52 < (*(float *)(puVar14 + -0x11) + *(float *)(puVar14 + -0x19)) * fVar44) {
            *(float *)(lVar41 + lVar39 * 4) =
                 (*(float *)(puVar14 + -0x11) + *(float *)(puVar14 + -0x19)) - fVar50;
            *puVar14 = 3;
          }
        }
        lVar32 = lVar32 + -0x20;
        if (lVar32 == 0) break;
        cVar7 = puVar14[0x1e];
        puVar14 = puVar14 + 0x20;
      }
    }
    if ((int)uVar43 < 1) {
      uVar59 = 0;
      bVar20 = true;
      uVar47 = uVar59;
    }
    else {
      uVar47 = 0;
      uVar59 = 0;
      uVar40 = 0;
      bVar35 = true;
      bVar20 = true;
      do {
        uVar36 = (ulong)*(ushort *)(*(long *)(param_5 + 200) + uVar40 * 2);
        lVar39 = *(long *)(param_5 + 0x38);
        lVar41 = lVar39 + uVar36 * 0x70;
        lVar32 = *(long *)(*(long *)(param_5 + 0xd8) + 0x30) + uVar40 * 8;
        if (*(byte *)(lVar32 + 6) != 0) {
          uVar27 = 0;
          lVar23 = *(long *)(param_5 + 0x28) + (long)*(short *)(lVar41 + 0xc) * 0xa0;
          lVar41 = *(long *)(param_5 + 0x28) + (long)*(short *)(lVar41 + 0xe) * 0xa0;
          do {
            fVar45 = *(float *)(*(long *)(param_5 + 0xf0) +
                               (ulong)(uVar27 + *(ushort *)(lVar32 + 4)) * 4);
            bVar35 = bVar35 && (((uint)fVar45 ^ 0xffffffff) & 0x7fc00000) != 0;
            fVar44 = *(float *)(lVar23 + 0x50);
            fVar50 = *(float *)(lVar23 + 0x54);
            fVar52 = *(float *)(lVar23 + 0x58);
            pfVar10 = (float *)(*(long *)(param_5 + 0x88) +
                               (long)(int)(uVar27 + (int)*(short *)(lVar39 + uVar36 * 0x70 + 0x14))
                               * 0x40);
            uVar27 = uVar27 + 1;
            fVar56 = *(float *)(lVar23 + 0x5c) * fVar45;
            fVar55 = pfVar10[3];
            fVar65 = *pfVar10 * fVar56;
            fVar66 = pfVar10[1] * fVar56;
            fVar78 = pfVar10[2] * fVar56;
            uVar93 = *(undefined8 *)(lVar23 + 0x60);
            uVar89 = *(undefined8 *)(lVar41 + 0x58);
            uVar73 = *(undefined8 *)(lVar41 + 0x50);
            fVar54 = (float)((ulong)uVar89 >> 0x20) * fVar45;
            fVar71 = *pfVar10 * fVar54;
            fVar57 = pfVar10[1] * fVar54;
            fVar64 = pfVar10[2] * fVar54;
            *(ulong *)(lVar23 + 0x68) =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar23 + 0x68) >> 0x20) + fVar55 * fVar56,
                          (float)*(undefined8 *)(lVar23 + 0x68) + fVar78);
            *(undefined8 *)(lVar23 + 0x60) =
                 CONCAT44((float)((ulong)uVar93 >> 0x20) + fVar66,(float)uVar93 + fVar65);
            uVar93 = *(undefined8 *)(lVar41 + 0x60);
            *(ulong *)(lVar41 + 0x68) =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar41 + 0x68) >> 0x20) - fVar55 * fVar54,
                          (float)*(undefined8 *)(lVar41 + 0x68) - fVar64);
            *(undefined8 *)(lVar41 + 0x60) =
                 CONCAT44((float)((ulong)uVar93 >> 0x20) - fVar57,(float)uVar93 - fVar71);
            uVar93 = *(undefined8 *)(pfVar10 + 10);
            fVar55 = (float)uVar73 * fVar45 * (float)*(undefined8 *)(pfVar10 + 8);
            fVar51 = (float)((ulong)uVar73 >> 0x20) * fVar45 *
                     (float)((ulong)*(undefined8 *)(pfVar10 + 8) >> 0x20);
            fVar53 = (float)uVar89 * fVar45 * (float)uVar93;
            fVar44 = fVar44 * fVar45 * (float)*(undefined8 *)(pfVar10 + 4);
            fVar50 = fVar50 * fVar45 * (float)((ulong)*(undefined8 *)(pfVar10 + 4) >> 0x20);
            fVar52 = fVar52 * fVar45 * (float)*(undefined8 *)(pfVar10 + 6);
            uVar73 = *(undefined8 *)(lVar23 + 0x70);
            *(ulong *)(lVar23 + 0x78) =
                 CONCAT44(fVar56 * (float)((ulong)*(undefined8 *)(pfVar10 + 6) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar23 + 0x78) >> 0x20),
                          fVar52 + (float)*(undefined8 *)(lVar23 + 0x78));
            *(undefined8 *)(lVar23 + 0x70) =
                 CONCAT44(fVar50 + (float)((ulong)uVar73 >> 0x20),fVar44 + (float)uVar73);
            uVar73 = *(undefined8 *)(lVar41 + 0x70);
            *(ulong *)(lVar41 + 0x78) =
                 CONCAT44(fVar54 * (float)((ulong)uVar93 >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar41 + 0x78) >> 0x20),
                          fVar53 + (float)*(undefined8 *)(lVar41 + 0x78));
            *(undefined8 *)(lVar41 + 0x70) =
                 CONCAT44(fVar51 + (float)((ulong)uVar73 >> 0x20),fVar55 + (float)uVar73);
            uVar59 = NEON_fmax(uVar59,CONCAT44(fVar78 * fVar78 + fVar65 * fVar65 + fVar66 * fVar66,
                                               fVar78 * fVar78 + fVar65 * fVar65 + fVar66 * fVar66),
                               4);
            uVar59 = NEON_fmax(uVar59,CONCAT44(fVar64 * fVar64 + fVar71 * fVar71 + fVar57 * fVar57,
                                               fVar64 * fVar64 + fVar71 * fVar71 + fVar57 * fVar57),
                               4);
            uVar47 = NEON_fmax(uVar47,CONCAT44(fVar52 * fVar52 + fVar44 * fVar44 + fVar50 * fVar50,
                                               fVar52 * fVar52 + fVar44 * fVar44 + fVar50 * fVar50),
                               4);
            uVar47 = NEON_fmax(uVar47,CONCAT44(fVar53 * fVar53 + fVar55 * fVar55 + fVar51 * fVar51,
                                               fVar53 * fVar53 + fVar55 * fVar55 + fVar51 * fVar51),
                               4);
            bVar20 = bVar35;
          } while (uVar27 < *(byte *)(lVar32 + 6));
        }
        if ((bVar20) &&
           ((param_7 != 0 && cVar6 != '\0' || (*(char *)(lVar39 + uVar36 * 0x70 + 0x61) != '\0'))))
        {
          lVar41 = lVar39 + uVar36 * 0x70;
          pbVar26 = (byte *)(lVar41 + 0x18);
          bVar29 = *pbVar26;
          if (bVar29 != 0) {
            puVar1 = (ushort *)(lVar32 + 4);
            uVar28 = 0;
            iVar21 = 0;
            pbVar24 = (byte *)(*(long *)(param_5 + 0x48) + (long)*(short *)(lVar41 + 0x16) * 0xc + 8
                              );
            do {
              uVar8 = *(ushort *)(pbVar24 + -4);
              uVar9 = uVar8 >> 6 & 3;
              lVar32 = 2;
              if (0x13 < (uVar8 & 0x3f) || (1 << (ulong)(uVar8 & 0x1f) & 0xc0800U) == 0) {
                lVar32 = 1;
              }
              if (uVar9 != 0) {
                lVar41 = (ulong)*(ushort *)(lVar39 + uVar36 * 0x70 + 0x1a) + (ulong)*pbVar24;
                lVar23 = *(long *)(param_5 + 0xf0);
                *(float *)(param_7 + lVar41 * 4) =
                     *(float *)(lVar23 + (long)(int)(iVar21 + (uint)*puVar1) * 4) +
                     *(float *)(param_7 + lVar41 * 4);
                iVar67 = iVar21 + 1;
                if (1 < uVar9) {
                  lVar33 = (lVar41 + lVar32) * 4;
                  *(float *)(param_7 + lVar33) =
                       *(float *)(lVar23 + (long)(int)(iVar21 + 1 + (uint)*puVar1) * 4) +
                       *(float *)(param_7 + lVar33);
                  iVar67 = iVar21 + 2;
                  if (uVar9 == 3) {
                    lVar32 = (lVar41 + lVar32 * 2) * 4;
                    *(float *)(param_7 + lVar32) =
                         *(float *)(lVar23 + (long)(int)(iVar21 + 2 + (uint)*puVar1) * 4) +
                         *(float *)(param_7 + lVar32);
                    iVar67 = iVar21 + 3;
                  }
                }
                iVar21 = iVar67;
                bVar29 = *pbVar26;
              }
              uVar28 = uVar28 + 1;
              pbVar24 = pbVar24 + 0xc;
            } while (uVar28 < bVar29);
          }
        }
        uVar40 = uVar40 + 1;
      } while (uVar40 != uVar43);
    }
    uVar73 = NEON_frsqrte(uVar59,4);
    fVar44 = (float)uVar73;
    fVar50 = (float)((ulong)uVar73 >> 0x20);
    uVar73 = NEON_frsqrts(uVar59,CONCAT44(fVar50 * fVar50,fVar44 * fVar44),4);
    fVar44 = fVar44 * (float)uVar73;
    fVar50 = fVar50 * (float)((ulong)uVar73 >> 0x20);
    uVar73 = NEON_frsqrts(uVar59,CONCAT44(fVar50 * fVar50,fVar44 * fVar44),4);
    iVar21 = -(uint)((float)uVar59 <= 0.0);
    fVar50 = (float)uVar59 * (float)uVar73 * fVar44;
    uVar59 = NEON_frsqrte(uVar47,4);
    fVar44 = (float)uVar59;
    fVar52 = (float)((ulong)uVar59 >> 0x20);
    uVar59 = NEON_frsqrts(uVar47,CONCAT44(fVar52 * fVar52,fVar44 * fVar44),4);
    fVar44 = fVar44 * (float)uVar59;
    fVar52 = fVar52 * (float)((ulong)uVar59 >> 0x20);
    uVar59 = NEON_frsqrts(uVar47,CONCAT44(fVar52 * fVar52,fVar44 * fVar44),4);
    iVar67 = -(uint)((float)uVar47 <= 0.0);
    fVar44 = (float)uVar47 * (float)uVar59 * fVar44;
    *(ulong *)(param_5 + 0x124) =
         CONCAT44(CONCAT13((byte)((uint)fVar50 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                           CONCAT12((byte)((uint)fVar50 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10),
                                    CONCAT11((byte)((uint)fVar50 >> 8) & ~(byte)((uint)iVar21 >> 8),
                                             SUB41(fVar50,0) & ~(byte)iVar21))),
                  CONCAT13((byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar67 >> 0x18),
                           CONCAT12((byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar67 >> 0x10),
                                    CONCAT11((byte)((uint)fVar44 >> 8) & ~(byte)((uint)iVar67 >> 8),
                                             SUB41(fVar44,0) & ~(byte)iVar67))));
    if (bVar20) {
      if (0 < *(int *)(param_5 + 0x18c)) {
        uVar43 = *(uint *)(param_5 + 0x108);
        if (((0 < (int)uVar43) &&
            (uVar43 == (uint)((ulong)(*(long *)(param_5 + 0xf8) -
                                     (long)*(undefined4 **)(param_5 + 0xf0)) >> 2))) &&
           (**(undefined4 **)(param_5 + 0x100) = **(undefined4 **)(param_5 + 0xf0), uVar43 != 1)) {
          if (uVar43 == 2) {
            lVar39 = 1;
          }
          else {
            lVar32 = 0;
            do {
              lVar39 = lVar32;
              lVar32 = lVar39 * 4;
              *(undefined4 *)(*(long *)(param_5 + 0x100) + lVar32 + 4) =
                   *(undefined4 *)(*(long *)(param_5 + 0xf0) + lVar32 + 4);
              *(undefined4 *)(*(long *)(param_5 + 0x100) + lVar32 + 8) =
                   *(undefined4 *)(*(long *)(param_5 + 0xf0) + lVar32 + 8);
              lVar32 = lVar39 + 2;
            } while (~((ulong)(uVar43 - 1) & 1) + (ulong)uVar43 != lVar39 + 2);
            lVar39 = lVar39 + 3;
            if ((uVar43 - 1 & 1) == 0) goto LAB_030a07d8;
          }
          *(undefined4 *)(*(long *)(param_5 + 0x100) + lVar39 * 4) =
               *(undefined4 *)(*(long *)(param_5 + 0xf0) + lVar39 * 4);
        }
      }
LAB_030a07d8:
      uVar47 = _DAT_0388a1f0;
      uVar40 = (ulong)*(uint *)(param_5 + 0x10);
      if ((int)*(uint *)(param_5 + 0x10) < 1) {
        fVar44 = 0.0;
        uVar77 = 0;
        uVar22 = 0;
      }
      else {
        fVar50 = *(float *)(param_5 + 0x17c);
        local_110 = (float)uVar22;
        fStack_10c = (float)((ulong)uVar22 >> 0x20);
        fVar55 = local_110 * fVar50;
        fVar52 = *(float *)(param_5 + 0x180);
        local_110 = local_110 * fVar52;
        uVar22 = 0;
        fVar44 = 0.0;
        uVar77 = 0;
        uVar79 = (undefined4)_UNK_0388a1f8;
        uVar36 = (ulong)_UNK_0388a1f8 >> 0x20;
        lVar39 = 0;
        lVar32 = 0;
        do {
          lVar41 = *(long *)(param_5 + 8) + lVar39;
          if ((~*(uint *)(lVar41 + 8) & 0xffffff) != 0) {
            lVar23 = *(long *)(param_5 + 0x28) + lVar32;
            pfVar10 = (float *)(*(long *)(param_6 + (long)*(char *)(lVar41 + 0xe) * 8) +
                               (ulong)*(uint *)(lVar41 + 4) * 0x20);
            fVar66 = (float)*(undefined8 *)(lVar23 + 0x68);
            fVar78 = (float)((ulong)*(undefined8 *)(lVar23 + 0x68) >> 0x20);
            uVar59 = *(undefined8 *)(lVar23 + 0x60);
            uVar80 = (undefined1)uVar59;
            uVar81 = (undefined1)((ulong)uVar59 >> 8);
            uVar82 = (undefined1)((ulong)uVar59 >> 0x10);
            uVar83 = (undefined1)((ulong)uVar59 >> 0x18);
            uVar84 = (undefined1)((ulong)uVar59 >> 0x20);
            uVar85 = (undefined1)((ulong)uVar59 >> 0x28);
            uVar86 = (undefined1)((ulong)uVar59 >> 0x30);
            uVar87 = (undefined1)((ulong)uVar59 >> 0x38);
            uVar89 = *(undefined8 *)(lVar23 + 0x70);
            fVar57 = (float)uVar89 - *pfVar10;
            fVar64 = (float)((ulong)uVar89 >> 0x20) - pfVar10[1];
            fVar88 = (float)*(undefined8 *)(lVar23 + 0x78);
            fVar65 = fVar88 - pfVar10[2];
            uVar73 = *(undefined8 *)(pfVar10 + 4);
            fVar45 = (float)uVar73;
            fVar90 = (float)uVar59 - fVar45;
            fVar51 = (float)((ulong)uVar73 >> 0x20);
            fVar91 = (float)((ulong)uVar59 >> 0x20) - fVar51;
            fVar92 = fVar66 - pfVar10[3];
            fVar53 = fVar90 * fVar90 + fVar91 * fVar91 + fVar92 * fVar92;
            fVar54 = fVar90 * fVar90 + fVar91 * fVar91 + fVar92 * fVar92;
            uVar59 = CONCAT44(fVar54,fVar53);
            fVar56 = fVar57 * fVar57 + fVar64 * fVar64 + fVar65 * fVar65;
            fVar71 = fVar57 * fVar57 + fVar64 * fVar64 + fVar65 * fVar65;
            uVar73 = CONCAT44(fVar71,fVar56);
            if (fVar55 * fVar55 < fVar53) {
              uVar93 = NEON_frsqrte(uVar59,4);
              fVar66 = (float)uVar93;
              fVar94 = (float)((ulong)uVar93 >> 0x20);
              uVar93 = NEON_frsqrts(uVar59,CONCAT44(fVar94 * fVar94,fVar66 * fVar66),4);
              fVar66 = fVar66 * (float)uVar93;
              fVar94 = fVar94 * (float)((ulong)uVar93 >> 0x20);
              uVar93 = NEON_frsqrts(uVar59,CONCAT44(fVar94 * fVar94,fVar66 * fVar66),4);
              iVar21 = -(uint)(fVar53 <= 0.0);
              iVar67 = -(uint)(fVar54 <= 0.0);
              fVar66 = (float)uVar93 * fVar66;
              fVar94 = (float)((ulong)uVar93 >> 0x20) * fVar94;
              fVar53 = fVar55 * (float)CONCAT13((byte)((uint)fVar66 >> 0x18) &
                                                ~(byte)((uint)iVar21 >> 0x18),
                                                CONCAT12((byte)((uint)fVar66 >> 0x10) &
                                                         ~(byte)((uint)iVar21 >> 0x10),
                                                         CONCAT11((byte)((uint)fVar66 >> 8) &
                                                                  ~(byte)((uint)iVar21 >> 8),
                                                                  SUB41(fVar66,0) & ~(byte)iVar21)))
              ;
              fVar54 = fStack_10c * fVar50 *
                       (float)CONCAT13((byte)((uint)fVar94 >> 0x18) & ~(byte)((uint)iVar67 >> 0x18),
                                       CONCAT12((byte)((uint)fVar94 >> 0x10) &
                                                ~(byte)((uint)iVar67 >> 0x10),
                                                CONCAT11((byte)((uint)fVar94 >> 8) &
                                                         ~(byte)((uint)iVar67 >> 8),
                                                         SUB41(fVar94,0) & ~(byte)iVar67)));
              fVar45 = fVar45 + fVar90 * fVar53;
              uVar80 = SUB41(fVar45,0);
              uVar81 = (undefined1)((uint)fVar45 >> 8);
              uVar82 = (undefined1)((uint)fVar45 >> 0x10);
              uVar83 = (undefined1)((uint)fVar45 >> 0x18);
              fVar51 = fVar51 + fVar91 * fVar54;
              uVar84 = SUB41(fVar51,0);
              uVar85 = (undefined1)((uint)fVar51 >> 8);
              uVar86 = (undefined1)((uint)fVar51 >> 0x10);
              uVar87 = (undefined1)((uint)fVar51 >> 0x18);
              fVar66 = pfVar10[3] + fVar92 * fVar53;
              fVar78 = (fVar78 - 0.0) *
                       (float)(CONCAT17((char)((uint)fVar54 >> 0x18),
                                        CONCAT16((char)((uint)fVar54 >> 0x10),
                                                 CONCAT15((char)((uint)fVar54 >> 8),
                                                          CONCAT14(SUB41(fVar54,0),fVar53)))) >>
                              0x20) + 0.0;
            }
            if (local_110 * local_110 < fVar56) {
              uVar89 = NEON_frsqrte(uVar73,4);
              fVar45 = (float)uVar89;
              fVar53 = (float)((ulong)uVar89 >> 0x20);
              uVar89 = NEON_frsqrts(uVar73,CONCAT44(fVar53 * fVar53,fVar45 * fVar45),4);
              fVar45 = fVar45 * (float)uVar89;
              fVar53 = fVar53 * (float)((ulong)uVar89 >> 0x20);
              uVar89 = NEON_frsqrts(uVar73,CONCAT44(fVar53 * fVar53,fVar45 * fVar45),4);
              iVar21 = -(uint)(fVar56 <= 0.0);
              iVar67 = -(uint)(fVar71 <= 0.0);
              fVar45 = (float)uVar89 * fVar45;
              fVar53 = (float)((ulong)uVar89 >> 0x20) * fVar53;
              fVar45 = (float)CONCAT13((byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                                       CONCAT12((byte)((uint)fVar45 >> 0x10) &
                                                ~(byte)((uint)iVar21 >> 0x10),
                                                CONCAT11((byte)((uint)fVar45 >> 8) &
                                                         ~(byte)((uint)iVar21 >> 8),
                                                         SUB41(fVar45,0) & ~(byte)iVar21)));
              fVar51 = local_110 * fVar45;
              uVar89 = CONCAT44(pfVar10[1] +
                                fVar64 * fStack_10c * fVar52 *
                                         (float)(CONCAT17((byte)((uint)fVar53 >> 0x18) &
                                                          ~(byte)((uint)iVar67 >> 0x18),
                                                          CONCAT16((byte)((uint)fVar53 >> 0x10) &
                                                                   ~(byte)((uint)iVar67 >> 0x10),
                                                                   CONCAT15((byte)((uint)fVar53 >> 8
                                                                                  ) & ~(byte)((uint)
                                                  iVar67 >> 8),
                                                  CONCAT14(SUB41(fVar53,0) & ~(byte)iVar67,fVar45)))
                                                  ) >> 0x20),*pfVar10 + fVar57 * fVar51);
              fVar88 = pfVar10[2] + fVar65 * fVar51;
            }
            auVar11._8_4_ = uVar79;
            auVar11._0_8_ = uVar47;
            auVar11._12_4_ = (int)uVar36;
            auVar12[1] = uVar81;
            auVar12[0] = uVar80;
            auVar12[2] = uVar82;
            auVar12[3] = uVar83;
            auVar12[4] = uVar84;
            auVar12[5] = uVar85;
            auVar12[6] = uVar86;
            auVar12[7] = uVar87;
            auVar12._8_4_ = fVar66;
            auVar12._12_4_ = fVar78;
            auVar60 = a64_TBL(ZEXT816(0),auVar12,auVar11);
            uVar59 = NEON_fmax(CONCAT44(uVar77,fVar44),uVar59,4);
            fVar44 = (float)uVar59;
            uVar77 = (undefined4)((ulong)uVar59 >> 0x20);
            uVar22 = NEON_fmax(uVar22,uVar73,4);
            *(ulong *)(pfVar10 + 2) = CONCAT44(auVar60._12_4_,fVar88);
            *(undefined8 *)pfVar10 = uVar89;
            *(ulong *)(pfVar10 + 4) =
                 CONCAT17(uVar87,CONCAT16(uVar86,CONCAT15(uVar85,CONCAT14(uVar84,CONCAT13(uVar83,
                                                  CONCAT12(uVar82,CONCAT11(uVar81,uVar80)))))));
          }
          uVar40 = uVar40 - 1;
          lVar32 = lVar32 + 0xa0;
          lVar39 = lVar39 + 0x10;
        } while (uVar40 != 0);
      }
      uVar47 = NEON_frsqrte(CONCAT44(uVar77,fVar44),4);
      fVar50 = (float)uVar47;
      fVar52 = (float)((ulong)uVar47 >> 0x20);
      uVar47 = NEON_frsqrts(CONCAT44(uVar77,fVar44),CONCAT44(fVar52 * fVar52,fVar50 * fVar50),4);
      fVar50 = fVar50 * (float)uVar47;
      fVar52 = fVar52 * (float)((ulong)uVar47 >> 0x20);
      uVar47 = NEON_frsqrts(CONCAT44(uVar77,fVar44),CONCAT44(fVar52 * fVar52,fVar50 * fVar50),4);
      uVar59 = NEON_frsqrte(uVar22,4);
      fVar52 = (float)uVar59;
      fVar55 = (float)((ulong)uVar59 >> 0x20);
      uVar59 = NEON_frsqrts(uVar22,CONCAT44(fVar55 * fVar55,fVar52 * fVar52),4);
      fVar52 = fVar52 * (float)uVar59;
      fVar55 = fVar55 * (float)((ulong)uVar59 >> 0x20);
      uVar59 = NEON_frsqrts(uVar22,CONCAT44(fVar55 * fVar55,fVar52 * fVar52),4);
      iVar21 = -(uint)(fVar44 <= 0.0);
      fVar44 = fVar44 * (float)uVar47 * fVar50;
      iVar67 = -(uint)((float)uVar22 <= 0.0);
      fVar50 = (float)uVar22 * (float)uVar59 * fVar52;
      *(ulong *)(param_5 + 300) =
           CONCAT44(CONCAT13((byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                             CONCAT12((byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10),
                                      CONCAT11((byte)((uint)fVar44 >> 8) &
                                               ~(byte)((uint)iVar21 >> 8),
                                               SUB41(fVar44,0) & ~(byte)iVar21))),
                    CONCAT13((byte)((uint)fVar50 >> 0x18) & ~(byte)((uint)iVar67 >> 0x18),
                             CONCAT12((byte)((uint)fVar50 >> 0x10) & ~(byte)((uint)iVar67 >> 0x10),
                                      CONCAT11((byte)((uint)fVar50 >> 8) &
                                               ~(byte)((uint)iVar67 >> 8),
                                               SUB41(fVar50,0) & ~(byte)iVar67))));
    }
  }
  uVar43 = local_c8;
  lVar32 = local_d0;
  if (local_d0 == local_e0) {
    local_d8 = local_d8 & 0xffffffff00000000;
  }
  lVar39 = *(long *)(lVar31 + 0x38d490);
  if (lVar39 == 0) {
    lVar39 = FUN_0333d16c(0,1);
    *(long *)(lVar31 + 0x38d490) = lVar39;
  }
  lVar39 = *(long *)(lVar39 + 8);
  uVar40 = (ulong)(int)(uVar43 * 4 + 0x7f & 0xffffff80);
  if (((*(ulong *)(lVar39 + 0x10) < uVar40) || (*(long *)(lVar39 + 0x18) != uVar40 + lVar32)) ||
     (*(long *)(lVar39 + 0x28) == lVar32)) {
    FUN_032cedf0(lVar39,lVar32);
  }
  else {
    *(long *)(lVar39 + 0x18) = lVar32;
  }
  uVar40 = local_d8;
  uVar43 = local_d8._4_4_;
  local_d8 = (ulong)local_d8._4_4_ << 0x20;
  if ((-1 < (long)uVar40) && (local_e0 != 0)) {
    FUN_032cf244(puVar19,local_e0,4,uVar43 & 0x3fffffff);
  }
  uVar43 = local_a8;
  lVar32 = local_b0;
  if (local_b0 == local_c0) {
    local_b8 = local_b8 & 0xffffffff00000000;
  }
  lVar39 = *(long *)(lVar31 + 0x38d490);
  if (lVar39 == 0) {
    lVar39 = FUN_0333d16c(0,1);
    *(long *)(lVar31 + 0x38d490) = lVar39;
  }
  lVar39 = *(long *)(lVar39 + 8);
  uVar40 = (ulong)(int)(uVar43 * 4 + 0x7f & 0xffffff80);
  if (((*(ulong *)(lVar39 + 0x10) < uVar40) || (*(long *)(lVar39 + 0x18) != uVar40 + lVar32)) ||
     (*(long *)(lVar39 + 0x28) == lVar32)) {
    FUN_032cedf0(lVar39,lVar32);
  }
  else {
    *(long *)(lVar39 + 0x18) = lVar32;
  }
  uVar40 = local_b8;
  uVar43 = local_b8._4_4_;
  local_b8 = (ulong)local_b8._4_4_ << 0x20;
  if ((-1 < (long)uVar40) && (local_c0 != 0)) {
    FUN_032cf244(puVar19,local_c0,4,uVar43 & 0x3fffffff);
  }
LAB_030a02b8:
  lVar39 = local_90;
  lVar32 = local_a0;
  if (local_90 == local_a0) {
    local_98 = local_98 & 0xffffffff00000000;
  }
  lVar23 = (long)(int)local_88;
  lVar41 = *(long *)(lVar31 + 0x38d490);
  if (lVar41 == 0) {
    lVar41 = FUN_0333d16c(0,1);
    *(long *)(lVar31 + 0x38d490) = lVar41;
  }
  lVar31 = *(long *)(lVar41 + 8);
  uVar40 = lVar23 * 0xa0 + 0x7fU & 0xffffffffffffff80;
  if (((*(ulong *)(lVar31 + 0x10) < uVar40) || (*(long *)(lVar31 + 0x18) != uVar40 + lVar39)) ||
     (*(long *)(lVar31 + 0x28) == lVar39)) {
    FUN_032cedf0(lVar31,lVar39);
    uVar40 = local_98;
  }
  else {
    *(long *)(lVar31 + 0x18) = lVar39;
    uVar40 = local_98;
  }
  if (lVar32 != 0) {
    local_98 = uVar40 & 0xffffffff00000000;
    uVar36 = local_98;
    local_98._4_4_ = (uint)(uVar40 >> 0x20);
    if (-1 < (long)uVar36) {
      uVar43 = local_98._4_4_ & 0x3fffffff;
      local_98 = uVar36;
      FUN_032cf244(PTR_PTR_0434a080,lVar32,0xa0,uVar43);
    }
  }
  return;
}


