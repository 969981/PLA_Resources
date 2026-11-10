/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001c1544; name: FUN_001c1544
 */


void FUN_001c1544(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  uint uVar4;
  ulong uVar5;
  undefined *puVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  ulong *puVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  undefined4 *puVar22;
  ulong *puVar23;
  ulong *puVar24;
  uint *puVar25;
  ulong uVar26;
  ulong uVar27;
  long *plVar28;
  ulong uVar29;
  long *plVar30;
  ulong *puVar31;
  ulong uVar32;
  float fVar33;
  float fVar34;
  float fVar44;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  byte bVar43;
  byte bVar45;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  int iVar56;
  int iVar58;
  undefined1 auVar50 [12];
  undefined8 uVar49;
  undefined1 auVar51 [16];
  float fVar55;
  float fVar57;
  float fVar59;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar60;
  int iVar61;
  undefined1 auVar62 [12];
  float fVar68;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined8 uVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar81;
  float fVar82;
  float fVar83;
  uint local_108;
  long local_f0;
  ulong *local_d0;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80 [2];
  long *local_68;
  
  if (*(char *)(param_1 + 0x1fe) != '\0') {
    return;
  }
  local_90 = 0;
  uStack_88 = 0xffffffff00000000;
  local_a0 = 0;
  local_98 = 0x8000000000000000;
  iVar61 = *(int *)(param_1 + 0x78);
  if (iVar61 == 0) {
    uVar21 = 0;
    local_f0 = 0;
    local_108 = 0x80000000;
    plVar30 = *(long **)(param_1 + 0x58);
    goto joined_r0x001c16f8;
  }
  plVar30 = *(long **)PTR_PTR_04372408;
  if (iVar61 < 1) {
    local_f0 = 0;
    local_108 = 0x80000000;
    plVar15 = *(long **)(param_1 + 0x70);
joined_r0x001c1714:
    if (plVar15 != (long *)0x0) goto LAB_001c15f0;
LAB_001c1718:
    uVar21 = 0;
  }
  else {
    FUN_032bd100(iVar61,0x10,0x80000000,&local_68);
    local_f0 = (**(code **)(*plVar30 + 0x10))(plVar30,local_68,&local_68);
    if ((long *)0x3ffffffef < local_68) {
      local_108 = 0x3fffffff;
      plVar15 = *(long **)(param_1 + 0x70);
      goto joined_r0x001c1714;
    }
    local_108 = (uint)((ulong)local_68 >> 4);
    plVar15 = *(long **)(param_1 + 0x70);
    if (plVar15 == (long *)0x0) goto LAB_001c1718;
LAB_001c15f0:
    puVar22 = (undefined4 *)(local_f0 + 8);
    uVar21 = 0;
    do {
      uVar20 = uVar21;
      *(long **)(puVar22 + -2) = plVar15;
      auVar51 = NEON_scvtf(*(undefined1 (*) [16])(plVar15[2] + 0x20),4);
      auVar78 = NEON_scvtf(*(undefined1 (*) [16])(plVar15[3] + 0x20),4);
      fVar47 = *(float *)(param_1 + 0x150);
      fVar60 = *(float *)(param_1 + 0x154);
      fVar68 = *(float *)(param_1 + 0x158);
      fVar48 = *(float *)(param_1 + 0x15c);
      auVar80 = NEON_scvtf(*(undefined1 (*) [16])(plVar15[4] + 0x20),4);
      fVar33 = *(float *)(param_1 + 0x130);
      fVar34 = *(float *)(param_1 + 0x134);
      fVar75 = *(float *)(param_1 + 0x138);
      fVar44 = *(float *)(param_1 + 0x13c);
      uVar21 = uVar20 + 1;
      fVar46 = fVar33 + fVar47 * auVar51._0_4_;
      fVar55 = fVar34 + fVar60 * auVar51._4_4_;
      fVar57 = fVar75 + fVar68 * auVar51._8_4_;
      fVar59 = fVar44 + fVar48 * 0.0;
      auVar70._0_4_ = (fVar33 + fVar47 * auVar78._0_4_) - fVar46;
      auVar70._4_4_ = (fVar34 + fVar60 * auVar78._4_4_) - fVar55;
      auVar70._8_4_ = (fVar75 + fVar68 * auVar78._8_4_) - fVar57;
      auVar70._12_4_ = (fVar44 + fVar48 * 0.0) - fVar59;
      auVar51._0_4_ = (fVar33 + fVar47 * auVar80._0_4_) - fVar46;
      auVar51._4_4_ = (fVar34 + fVar60 * auVar80._4_4_) - fVar55;
      auVar51._8_4_ = (fVar75 + fVar68 * auVar80._8_4_) - fVar57;
      auVar51._12_4_ = (fVar44 + fVar48 * 0.0) - fVar59;
      auVar80 = NEON_ext(auVar70,auVar70,4,1);
      auVar79 = NEON_ext(auVar51,auVar51,4,1);
      auVar78._0_4_ = auVar70._0_4_ * auVar79._0_4_ - auVar51._0_4_ * auVar80._0_4_;
      auVar78._4_4_ = auVar70._4_4_ * auVar79._4_4_ - auVar51._4_4_ * auVar80._4_4_;
      auVar78._8_4_ = auVar70._8_4_ * auVar51._0_4_ - auVar51._8_4_ * auVar70._0_4_;
      auVar78._12_4_ = auVar70._12_4_ * auVar51._4_4_ - auVar51._12_4_ * auVar70._4_4_;
      auVar51 = NEON_ext(auVar78,auVar78,4,1);
      fVar60 = auVar51._0_4_ * auVar51._0_4_;
      fVar68 = auVar51._4_4_ * auVar51._4_4_;
      fVar47 = fVar60 + fVar68 + auVar78._0_4_ * auVar78._0_4_;
      uVar76 = CONCAT44(fVar60 + fVar68 + auVar78._0_4_ * auVar78._0_4_,fVar47);
      uVar69 = NEON_frsqrte(uVar76,4);
      fVar60 = (float)uVar69;
      fVar68 = (float)((ulong)uVar69 >> 0x20);
      uVar69 = NEON_frsqrts(uVar76,CONCAT44(fVar68 * fVar68,fVar60 * fVar60),4);
      fVar60 = fVar60 * (float)uVar69;
      fVar68 = fVar68 * (float)((ulong)uVar69 >> 0x20);
      uVar76 = NEON_frsqrts(uVar76,CONCAT44(fVar68 * fVar68,fVar60 * fVar60),4);
      iVar61 = -(uint)(fVar47 <= 0.0);
      fVar47 = (float)uVar76 * fVar60 * fVar47;
      *puVar22 = CONCAT13((byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18),
                          CONCAT12((byte)((uint)fVar47 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10),
                                   CONCAT11((byte)((uint)fVar47 >> 8) & ~(byte)((uint)iVar61 >> 8),
                                            SUB41(fVar47,0) & ~(byte)iVar61)));
      plVar15 = (long *)*plVar15;
      puVar22 = puVar22 + 4;
    } while (plVar15 != (long *)0x0);
    if (1 < uVar21) {
      FUN_001c26b0(local_f0,0,uVar20);
    }
  }
  FUN_032c3100(&local_90,plVar30,*(undefined4 *)(param_1 + 0x78));
  uVar26 = local_98;
  uVar20 = *(uint *)(param_1 + 0x78);
  if ((int)(local_98._4_4_ & 0x3fffffff) < (int)uVar20) {
    if (0x3fffffff < (int)uVar20) {
      FUN_032bd0a8(uVar20);
    }
    uVar11 = (local_98._4_4_ & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar11) {
      uVar11 = 0x3fffffff;
    }
    uVar12 = uVar20;
    if ((int)uVar20 <= (int)uVar11) {
      uVar12 = uVar11;
    }
    local_a0 = FUN_032bd1d4(plVar30,uVar12,0x10,0,uVar26 & 0xffffffff,(long)&local_98 + 4);
    if ((uint)local_98 == uVar20) goto LAB_001c174c;
LAB_001c17b4:
    local_98 = CONCAT44(local_98._4_4_,uVar20);
    plVar15 = *(long **)(param_1 + 0x70);
  }
  else {
    if ((uint)local_98 != uVar20) goto LAB_001c17b4;
LAB_001c174c:
    plVar15 = *(long **)(param_1 + 0x70);
  }
  if (plVar15 != (long *)0x0) {
    lVar9 = 0;
    do {
      local_80[0] = lVar9;
      local_68 = plVar15;
      FUN_032c2c3c(&local_90,plVar30,&local_68,local_80);
      fVar47 = *(float *)(param_1 + 0x130);
      fVar60 = *(float *)(param_1 + 0x134);
      fVar68 = *(float *)(param_1 + 0x138);
      fVar48 = *(float *)(param_1 + 0x13c);
      auVar51 = NEON_scvtf(*(undefined1 (*) [16])(plVar15[2] + 0x20),4);
      auVar78 = NEON_scvtf(*(undefined1 (*) [16])(plVar15[3] + 0x20),4);
      auVar80 = NEON_scvtf(*(undefined1 (*) [16])(plVar15[4] + 0x20),4);
      fVar33 = *(float *)(param_1 + 0x150);
      fVar34 = *(float *)(param_1 + 0x154);
      fVar75 = *(float *)(param_1 + 0x158);
      fVar44 = *(float *)(param_1 + 0x15c);
      fVar46 = fVar47 + fVar33 * auVar51._0_4_;
      fVar55 = fVar60 + fVar34 * auVar51._4_4_;
      fVar57 = fVar68 + fVar75 * auVar51._8_4_;
      fVar59 = fVar48 + fVar44 * 0.0;
      auVar63._0_4_ = (fVar47 + fVar33 * auVar78._0_4_) - fVar46;
      auVar63._4_4_ = (fVar60 + fVar34 * auVar78._4_4_) - fVar55;
      auVar63._8_4_ = (fVar68 + fVar75 * auVar78._8_4_) - fVar57;
      auVar63._12_4_ = (fVar48 + fVar44 * 0.0) - fVar59;
      auVar51 = NEON_ext(auVar63,auVar63,4,1);
      auVar79._0_4_ = (fVar47 + fVar33 * auVar80._0_4_) - fVar46;
      auVar79._4_4_ = (fVar60 + fVar34 * auVar80._4_4_) - fVar55;
      auVar79._8_4_ = (fVar68 + fVar75 * auVar80._8_4_) - fVar57;
      auVar79._12_4_ = (fVar48 + fVar44 * 0.0) - fVar59;
      auVar78 = NEON_ext(auVar79,auVar79,4,1);
      fVar47 = auVar63._0_4_ * auVar78._0_4_ - auVar79._0_4_ * auVar51._0_4_;
      fVar48 = auVar63._4_4_ * auVar78._4_4_ - auVar79._4_4_ * auVar51._4_4_;
      auVar52._0_8_ = CONCAT44(fVar48,fVar47);
      auVar52._8_4_ = auVar63._8_4_ * auVar79._0_4_ - auVar79._8_4_ * auVar63._0_4_;
      auVar52._12_4_ = auVar63._12_4_ * auVar79._4_4_ - auVar79._12_4_ * auVar63._4_4_;
      auVar51 = NEON_ext(auVar52,auVar52,4,1);
      fVar75 = auVar51._0_4_;
      fVar44 = auVar51._4_4_;
      auVar72._0_8_ = auVar51._0_8_;
      auVar72._8_8_ = auVar52._0_8_;
      fVar60 = fVar75 * fVar75 + fVar44 * fVar44 + fVar47 * fVar47;
      fVar33 = fVar75 * fVar75 + fVar44 * fVar44 + fVar47 * fVar47;
      uVar76 = CONCAT44(fVar33,fVar60);
      uVar69 = NEON_frsqrte(uVar76,4);
      fVar68 = (float)uVar69;
      fVar34 = (float)((ulong)uVar69 >> 0x20);
      uVar69 = NEON_frsqrts(uVar76,CONCAT44(fVar34 * fVar34,fVar68 * fVar68),4);
      fVar68 = fVar68 * (float)uVar69;
      fVar34 = fVar34 * (float)((ulong)uVar69 >> 0x20);
      auVar71._0_8_ = CONCAT44(-(uint)(0.0 < fVar33),-(uint)(0.0 < fVar60));
      iVar61 = -(uint)(fVar60 <= 0.0);
      iVar56 = -(uint)(fVar33 <= 0.0);
      uVar76 = NEON_frsqrts(uVar76,CONCAT44(fVar34 * fVar34,fVar68 * fVar68),4);
      auVar71._8_8_ = auVar71._0_8_;
      fVar68 = (float)uVar76 * fVar68;
      fVar34 = (float)((ulong)uVar76 >> 0x20) * fVar34;
      fVar60 = (float)CONCAT13((byte)((uint)fVar68 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18),
                               CONCAT12((byte)((uint)fVar68 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar68 >> 8) &
                                                  ~(byte)((uint)iVar61 >> 8),
                                                  SUB41(fVar68,0) & ~(byte)iVar61)));
      auVar53._0_4_ = fVar75 * fVar60;
      fVar68 = (float)(CONCAT17((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar56 >> 0x18),
                                CONCAT16((byte)((uint)fVar34 >> 0x10) &
                                         ~(byte)((uint)iVar56 >> 0x10),
                                         CONCAT15((byte)((uint)fVar34 >> 8) &
                                                  ~(byte)((uint)iVar56 >> 8),
                                                  CONCAT14(SUB41(fVar34,0) & ~(byte)iVar56,fVar60)))
                               ) >> 0x20);
      auVar53._4_4_ = fVar44 * fVar68;
      auVar53._8_4_ = fVar47 * fVar60;
      auVar53._12_4_ = fVar48 * fVar68;
      auVar72 = auVar72 ^ (auVar72 ^ auVar53) & auVar71;
      auVar80._0_4_ = fVar46 * auVar72._0_4_;
      auVar80._4_4_ = fVar55 * auVar72._4_4_;
      auVar80._8_4_ = fVar57 * auVar72._8_4_;
      auVar80._12_4_ = fVar59 * auVar72._12_4_;
      auVar51 = NEON_ext(auVar80,auVar80,8,1);
      auVar73._0_12_ = auVar72._0_12_;
      auVar73._12_4_ = -(auVar80._0_4_ + auVar80._4_4_ + auVar51._0_4_);
      puVar2 = (undefined8 *)(local_a0 + lVar9 * 0x10);
      puVar2[1] = auVar73._8_8_;
      *puVar2 = auVar72._0_8_;
      *(undefined4 *)(plVar15 + 0xb) = 0xffffffff;
      *(int *)((long)plVar15 + 100) = (int)lVar9;
      plVar15 = (long *)*plVar15;
      lVar9 = lVar9 + 1;
    } while (plVar15 != (long *)0x0);
  }
  plVar30 = *(long **)(param_1 + 0x58);
joined_r0x001c16f8:
  if (plVar30 != (long *)0x0) {
    iVar61 = 0;
    do {
      *(int *)((long)plVar30 + 0x34) = iVar61;
      plVar30 = (long *)*plVar30;
      iVar61 = iVar61 + 1;
    } while (plVar30 != (long *)0x0);
  }
  iVar61 = *(int *)(param_1 + 0x1f0);
  plVar30 = (long *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (iVar61 == 1) {
    auVar51 = NEON_scvtf(*(undefined1 (*) [16])(*(long **)(param_1 + 0x58) + 4),4);
    plVar15 = *(long **)(param_1 + 0x58);
    do {
      plVar28 = plVar15;
      plVar15 = (long *)*plVar28;
    } while (plVar15 != (long *)0x0);
    fVar59 = *(float *)(param_1 + 0x130) + *(float *)(param_1 + 0x150) * auVar51._0_4_;
    fVar81 = *(float *)(param_1 + 0x134) + *(float *)(param_1 + 0x154) * auVar51._4_4_;
    fVar82 = *(float *)(param_1 + 0x138) + *(float *)(param_1 + 0x158) * auVar51._8_4_;
    fVar83 = *(float *)(param_1 + 0x13c) + *(float *)(param_1 + 0x15c) * 0.0;
    uVar76 = *(undefined8 *)PTR_PTR_04372408;
    auVar51 = NEON_scvtf(*(undefined1 (*) [16])(plVar28 + 4),4);
    puVar25 = (uint *)(param_1 + 0x9c);
    fVar47 = *(float *)(param_1 + 0x130) + *(float *)(param_1 + 0x150) * auVar51._0_4_;
    fVar60 = *(float *)(param_1 + 0x134) + *(float *)(param_1 + 0x154) * auVar51._4_4_;
    fVar68 = *(float *)(param_1 + 0x138) + *(float *)(param_1 + 0x158) * auVar51._8_4_;
    fVar48 = *(float *)(param_1 + 0x13c) + *(float *)(param_1 + 0x15c) * 0.0;
    fVar33 = fVar47 - fVar59;
    fVar34 = fVar60 - fVar81;
    fVar75 = fVar68 - fVar82;
    fVar44 = fVar33 * fVar33 + fVar34 * fVar34 + fVar75 * fVar75;
    fVar55 = fVar33 * fVar33 + fVar34 * fVar34 + fVar75 * fVar75;
    uVar69 = CONCAT44(fVar55,fVar44);
    uVar49 = NEON_frsqrte(uVar69,4);
    fVar46 = (float)uVar49;
    fVar57 = (float)((ulong)uVar49 >> 0x20);
    uVar49 = NEON_frsqrts(uVar69,CONCAT44(fVar57 * fVar57,fVar46 * fVar46),4);
    fVar46 = fVar46 * (float)uVar49;
    fVar57 = fVar57 * (float)((ulong)uVar49 >> 0x20);
    iVar61 = -(uint)(fVar44 <= 0.0);
    iVar56 = -(uint)(fVar55 <= 0.0);
    uVar69 = NEON_frsqrts(uVar69,CONCAT44(fVar57 * fVar57,fVar46 * fVar46),4);
    fVar46 = (float)uVar69 * fVar46;
    fVar57 = (float)((ulong)uVar69 >> 0x20) * fVar57;
    fVar44 = (float)CONCAT13((byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18),
                             CONCAT12((byte)((uint)fVar46 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10),
                                      CONCAT11((byte)((uint)fVar46 >> 8) &
                                               ~(byte)((uint)iVar61 >> 8),
                                               SUB41(fVar46,0) & ~(byte)iVar61)));
    fVar46 = (float)(CONCAT17((byte)((uint)fVar57 >> 0x18) & ~(byte)((uint)iVar56 >> 0x18),
                              CONCAT16((byte)((uint)fVar57 >> 0x10) & ~(byte)((uint)iVar56 >> 0x10),
                                       CONCAT15((byte)((uint)fVar57 >> 8) &
                                                ~(byte)((uint)iVar56 >> 8),
                                                CONCAT14(SUB41(fVar57,0) & ~(byte)iVar56,fVar44))))
                    >> 0x20);
    fVar34 = fVar34 * fVar46;
    auVar64._0_8_ = CONCAT44(fVar34,fVar33 * fVar44);
    auVar64._8_4_ = fVar75 * fVar44;
    auVar36._0_4_ = fVar47 * fVar33 * fVar44;
    auVar36._4_4_ = fVar60 * fVar34;
    auVar36._8_4_ = fVar68 * auVar64._8_4_;
    auVar36._12_4_ = fVar48 * (fVar48 - fVar83) * fVar46;
    auVar51 = NEON_ext(auVar36,auVar36,8,1);
    auVar64._12_4_ = -(auVar36._0_4_ + auVar36._4_4_ + auVar51._0_4_);
    if ((*puVar25 & 0x3fffffff) == 0) {
      uVar21 = (*puVar25 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar21) {
        uVar21 = 0x3fffffff;
      }
      if (uVar21 < 2) {
        uVar21 = 1;
      }
      lVar9 = FUN_032bd1d4(uVar76,uVar21,0x10,*plVar30,0,puVar25);
      *(long *)(param_1 + 0x90) = lVar9;
      lVar19 = (long)*(int *)(param_1 + 0x98);
      auVar64._8_8_ = auVar64._8_8_;
    }
    else {
      lVar9 = *plVar30;
      lVar19 = 0;
    }
    puVar2 = (undefined8 *)(lVar9 + lVar19 * 0x10);
    puVar2[1] = auVar64._8_8_;
    *puVar2 = auVar64._0_8_;
    auVar65._0_8_ = CONCAT44(-auVar64._4_4_,-auVar64._0_4_);
    auVar65._8_4_ = -auVar64._8_4_;
    auVar37._0_4_ = fVar59 * -auVar64._0_4_;
    auVar37._4_4_ = fVar81 * -auVar64._4_4_;
    auVar37._8_4_ = fVar82 * auVar65._8_4_;
    auVar37._12_4_ = fVar83 * -auVar64._12_4_;
    auVar51 = NEON_ext(auVar37,auVar37,8,1);
    auVar65._12_4_ = -(auVar51._0_4_ + auVar37._0_4_ + auVar37._4_4_);
    *(undefined4 *)(param_1 + 0x98) = 1;
    if ((*(uint *)(param_1 + 0x9c) & 0x3ffffffe) == 0) {
      uVar21 = (*(uint *)(param_1 + 0x9c) & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar21) {
        uVar21 = 0x3fffffff;
      }
      if (uVar21 < 3) {
        uVar21 = 2;
      }
      lVar9 = FUN_032bd1d4(uVar76,uVar21,0x10,*plVar30,1,puVar25);
      auVar65._8_8_ = auVar65._8_8_;
      *(long *)(param_1 + 0x90) = lVar9;
      lVar19 = (long)*(int *)(param_1 + 0x98);
    }
    else {
      lVar9 = *plVar30;
      lVar19 = 1;
    }
    puVar2 = (undefined8 *)(lVar9 + lVar19 * 0x10);
    puVar2[1] = auVar65._8_8_;
    *puVar2 = auVar65._0_8_;
    *(undefined4 *)(param_1 + 0x98) = 2;
  }
  else if (iVar61 == 2) {
    uVar26 = *(ulong *)(param_1 + 200);
    uVar76 = *(undefined8 *)(param_1 + 0xc0);
    if ((float)(uVar26 >> 0x20) == *(float *)(PTR_DAT_04372370 + 0x240)) {
      plVar15 = *(long **)(param_1 + 0x58);
      uVar76 = 0;
      uVar26 = 0;
      *(undefined8 *)(param_1 + 200) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
      if (plVar15 != (long *)0x0) {
        uVar76 = 0;
        uVar26 = 0;
        auVar51 = *(undefined1 (*) [16])(param_1 + 0x130);
        plVar28 = plVar15;
        do {
          auVar78 = NEON_scvtf(*(undefined1 (*) [16])(plVar28 + 4),4);
          uVar76 = CONCAT44((float)((ulong)uVar76 >> 0x20) +
                            auVar51._4_4_ + *(float *)(param_1 + 0x154) * auVar78._4_4_,
                            (float)uVar76 +
                            auVar51._0_4_ + *(float *)(param_1 + 0x150) * auVar78._0_4_);
          uVar26 = CONCAT44((float)(uVar26 >> 0x20) +
                            auVar51._12_4_ + *(float *)(param_1 + 0x15c) * 0.0,
                            (float)uVar26 +
                            auVar51._8_4_ + *(float *)(param_1 + 0x158) * auVar78._8_4_);
          *(ulong *)(param_1 + 200) = uVar26;
          *(undefined8 *)(param_1 + 0xc0) = uVar76;
          plVar28 = (long *)*plVar28;
        } while (plVar28 != (long *)0x0);
      }
      iVar61 = *(int *)(param_1 + 0x60);
      if (iVar61 != 0) {
        uVar69 = NEON_scvtf(CONCAT44(iVar61,iVar61),4);
        uVar49 = NEON_frecpe(uVar69,4);
        uVar77 = NEON_frecps(uVar69,uVar49,4);
        fVar47 = (float)uVar49 * (float)uVar77;
        fVar60 = (float)((ulong)uVar49 >> 0x20) * (float)((ulong)uVar77 >> 0x20);
        uVar69 = NEON_frecps(uVar69,CONCAT44(fVar60,fVar47),4);
        fVar47 = fVar47 * (float)uVar69;
        fVar60 = fVar60 * (float)((ulong)uVar69 >> 0x20);
        uVar76 = CONCAT44((float)((ulong)uVar76 >> 0x20) * fVar60,(float)uVar76 * fVar47);
        uVar26 = CONCAT44((float)(uVar26 >> 0x20) * fVar60,(float)uVar26 * fVar47);
        *(ulong *)(param_1 + 200) = uVar26;
        *(undefined8 *)(param_1 + 0xc0) = uVar76;
      }
      uVar26 = uVar26 & 0xffffffff;
      *(ulong *)(param_1 + 200) = uVar26;
      *(undefined8 *)(param_1 + 0xc0) = uVar76;
    }
    else {
      plVar15 = *(long **)(param_1 + 0x58);
    }
    if (plVar15 != (long *)0x0) {
      plVar28 = plVar15;
      do {
        plVar8 = plVar28;
        plVar28 = (long *)*plVar8;
      } while (plVar28 != (long *)0x0);
      if (plVar15 != (long *)0x0) {
        uVar69 = *(undefined8 *)PTR_PTR_04372408;
        iVar61 = 0;
        while( true ) {
          uVar21 = iVar61 + 1;
          auVar51 = *(undefined1 (*) [16])(param_1 + 0x150);
          auVar80 = NEON_scvtf(*(undefined1 (*) [16])(plVar8 + 4),4);
          auVar78 = *(undefined1 (*) [16])(param_1 + 0x130);
          uVar20 = *(uint *)(param_1 + 0x9c);
          fVar47 = auVar78._0_4_ + auVar51._0_4_ * auVar80._0_4_;
          fVar60 = auVar78._4_4_ + auVar51._4_4_ * auVar80._4_4_;
          fVar68 = auVar78._8_4_ + auVar51._8_4_ * auVar80._8_4_;
          fVar48 = auVar78._12_4_ + auVar51._12_4_ * 0.0;
          auVar80 = NEON_scvtf(*(undefined1 (*) [16])(plVar15 + 4),4);
          auVar74._0_8_ =
               CONCAT44((auVar78._4_4_ + auVar51._4_4_ * auVar80._4_4_) - fVar60,
                        (auVar78._0_4_ + auVar51._0_4_ * auVar80._0_4_) - fVar47);
          auVar74._8_4_ = (auVar78._8_4_ + auVar51._8_4_ * auVar80._8_4_) - fVar68;
          auVar74._12_4_ = (auVar78._12_4_ + auVar51._12_4_ * 0.0) - fVar48;
          if (iVar61 < (int)(uVar20 & 0x3fffffff)) {
            lVar9 = *plVar30;
          }
          else {
            lVar9 = *plVar30;
            if (0x3ffffffe < iVar61) {
              FUN_032bd0a8(uVar21);
              uVar20 = *(uint *)(param_1 + 0x9c);
            }
            uVar20 = (uVar20 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar20) {
              uVar20 = 0x3fffffff;
            }
            uVar11 = uVar21;
            if ((int)uVar21 <= (int)uVar20) {
              uVar11 = uVar20;
            }
            lVar9 = FUN_032bd1d4(uVar69,uVar11,0x10,lVar9,iVar61,(uint *)(param_1 + 0x9c));
            *(long *)(param_1 + 0x90) = lVar9;
            iVar61 = *(int *)(param_1 + 0x98);
            auVar74._8_8_ = auVar74._8_8_;
          }
          auVar51 = *(undefined1 (*) [16])(param_1 + 0x120);
          auVar78 = NEON_ext(auVar51,auVar51,8,1);
          uVar49 = NEON_ext(auVar51._0_8_,auVar78._0_8_,4,1);
          auVar78 = NEON_ext(auVar74,auVar74,4,1);
          *(uint *)(param_1 + 0x98) = uVar21;
          fVar33 = auVar78._0_4_ * auVar51._0_4_ - auVar74._0_4_ * (float)uVar49;
          fVar44 = auVar78._4_4_ * auVar51._4_4_ - auVar74._4_4_ * (float)((ulong)uVar49 >> 0x20);
          auVar38._0_8_ = CONCAT44(fVar44,fVar33);
          auVar38._8_4_ = auVar74._0_4_ * auVar51._8_4_ - auVar74._8_4_ * auVar51._0_4_;
          auVar38._12_4_ = auVar74._4_4_ * auVar51._12_4_ - auVar74._12_4_ * auVar51._4_4_;
          auVar51 = NEON_ext(auVar38,auVar38,4,1);
          fVar57 = auVar51._0_4_;
          fVar59 = auVar51._4_4_;
          auVar67._0_8_ = auVar51._0_8_;
          auVar67._8_8_ = auVar38._0_8_;
          fVar34 = fVar57 * fVar57 + fVar59 * fVar59 + fVar33 * fVar33;
          fVar46 = fVar57 * fVar57 + fVar59 * fVar59 + fVar33 * fVar33;
          uVar49 = CONCAT44(fVar46,fVar34);
          uVar77 = NEON_frsqrte(uVar49,4);
          fVar75 = (float)uVar77;
          fVar55 = (float)((ulong)uVar77 >> 0x20);
          uVar77 = NEON_frsqrts(uVar49,CONCAT44(fVar55 * fVar55,fVar75 * fVar75),4);
          fVar75 = fVar75 * (float)uVar77;
          fVar55 = fVar55 * (float)((ulong)uVar77 >> 0x20);
          auVar66._0_8_ = CONCAT44(-(uint)(0.0 < fVar46),-(uint)(0.0 < fVar34));
          iVar56 = -(uint)(fVar34 <= 0.0);
          iVar58 = -(uint)(fVar46 <= 0.0);
          uVar49 = NEON_frsqrts(uVar49,CONCAT44(fVar55 * fVar55,fVar75 * fVar75),4);
          auVar66._8_8_ = auVar66._0_8_;
          fVar75 = (float)uVar49 * fVar75;
          fVar55 = (float)((ulong)uVar49 >> 0x20) * fVar55;
          fVar34 = (float)CONCAT13((byte)((uint)fVar75 >> 0x18) & ~(byte)((uint)iVar56 >> 0x18),
                                   CONCAT12((byte)((uint)fVar75 >> 0x10) &
                                            ~(byte)((uint)iVar56 >> 0x10),
                                            CONCAT11((byte)((uint)fVar75 >> 8) &
                                                     ~(byte)((uint)iVar56 >> 8),
                                                     SUB41(fVar75,0) & ~(byte)iVar56)));
          auVar39._0_4_ = fVar57 * fVar34;
          fVar75 = (float)(CONCAT17((byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18),
                                    CONCAT16((byte)((uint)fVar55 >> 0x10) &
                                             ~(byte)((uint)iVar58 >> 0x10),
                                             CONCAT15((byte)((uint)fVar55 >> 8) &
                                                      ~(byte)((uint)iVar58 >> 8),
                                                      CONCAT14(SUB41(fVar55,0) & ~(byte)iVar58,
                                                               fVar34)))) >> 0x20);
          auVar39._4_4_ = fVar59 * fVar75;
          auVar39._8_4_ = fVar33 * fVar34;
          auVar39._12_4_ = fVar44 * fVar75;
          auVar67 = auVar67 ^ (auVar67 ^ auVar39) & auVar66;
          auVar40._0_4_ = fVar47 * auVar67._0_4_;
          auVar40._4_4_ = fVar60 * auVar67._4_4_;
          auVar40._8_4_ = fVar68 * auVar67._8_4_;
          auVar40._12_4_ = fVar48 * auVar67._12_4_;
          auVar51 = NEON_ext(auVar40,auVar40,8,1);
          fVar60 = -(auVar40._0_4_ + auVar40._4_4_ + auVar51._0_4_);
          auVar54._0_4_ = (float)uVar76 * auVar67._0_4_;
          auVar54._4_4_ = (float)((ulong)uVar76 >> 0x20) * auVar67._4_4_;
          auVar54._8_4_ = (float)uVar26 * auVar67._8_4_;
          auVar54._12_4_ = (float)(uVar26 >> 0x20) * fVar60;
          auVar51 = NEON_ext(auVar54,auVar54,8,1);
          fVar47 = auVar51._0_4_ + fVar60;
          bVar43 = (byte)(-(uint)(0.0 <= auVar54._0_4_ + auVar54._4_4_ + fVar47) >> 0x18);
          bVar45 = (byte)(-(uint)(0.0 <= auVar54._0_4_ + auVar54._4_4_ + fVar47) >> 0x18);
          uVar13 = CONCAT17(bVar45,(uint7)(bVar43 & 0x80) << 0x18) & 0x80ffffffffffffff;
          auVar41._0_8_ =
               CONCAT17((byte)(uVar13 >> 0x38) ^ auVar67[7],
                        CONCAT16(auVar67[6],
                                 CONCAT15(auVar67[5],
                                          CONCAT14(auVar67[4],
                                                   CONCAT13((byte)(uVar13 >> 0x18) ^ auVar67[3],
                                                            auVar67._0_3_)))));
          auVar41[8] = auVar67[8];
          auVar41[9] = auVar67[9];
          auVar41[10] = auVar67[10];
          auVar41[0xb] = bVar43 & 0x80 ^ auVar67[0xb];
          auVar41[0xc] = SUB41(fVar60,0);
          auVar41[0xd] = (char)((uint)fVar60 >> 8);
          auVar41[0xe] = (char)((uint)fVar60 >> 0x10);
          auVar41[0xf] = bVar45 & 0x80 ^ (byte)((uint)fVar60 >> 0x18);
          puVar2 = (undefined8 *)(lVar9 + (long)iVar61 * 0x10);
          puVar2[1] = auVar41._8_8_;
          *puVar2 = auVar41._0_8_;
          if ((long *)*plVar15 == (long *)0x0) break;
          iVar61 = *(int *)(param_1 + 0x98);
          plVar8 = plVar15;
          plVar15 = (long *)*plVar15;
        }
      }
    }
  }
  else if ((iVar61 == 3) && (uVar21 != 0)) {
    uVar26 = 0;
    local_d0 = (ulong *)0x0;
    plVar15 = *(long **)PTR_PTR_04372408;
    uVar76 = *(undefined8 *)(PTR_DAT_04372370 + 0x60);
    puVar24 = (ulong *)0x0;
    puVar31 = (ulong *)0x0;
    uVar13 = 0x80000000;
    do {
      plVar28 = *(long **)(local_f0 + uVar26 * 0x10);
      if ((int)plVar28[0xb] == -1) {
        local_80[0] = -1;
        local_68 = plVar28;
        plVar8 = (long *)FUN_032c2dcc(&local_90,&local_68,local_80);
        pfVar3 = (float *)(local_a0 + ((*plVar8 << 0x20) >> 0x1c));
        *(undefined4 *)(plVar28 + 0xb) = *(undefined4 *)(param_1 + 0x98);
        iVar61 = *(int *)(param_1 + 0x98);
        uVar11 = *(uint *)(param_1 + 0x9c);
        uVar20 = iVar61 + 1;
        if (iVar61 < (int)(uVar11 & 0x3fffffff)) {
          lVar9 = *plVar30;
        }
        else {
          lVar9 = *plVar30;
          if (0x3ffffffe < iVar61) {
            FUN_032bd0a8(uVar20);
            uVar11 = *(uint *)(param_1 + 0x9c);
          }
          uVar11 = (uVar11 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar11) {
            uVar11 = 0x3fffffff;
          }
          uVar12 = uVar20;
          if ((int)uVar20 <= (int)uVar11) {
            uVar12 = uVar11;
          }
          lVar9 = FUN_032bd1d4(plVar15,uVar12,0x10,lVar9,iVar61,(uint *)(param_1 + 0x9c));
          *(long *)(param_1 + 0x90) = lVar9;
          iVar61 = *(int *)(param_1 + 0x98);
        }
        puVar2 = (undefined8 *)(lVar9 + (long)iVar61 * 0x10);
        uVar11 = (uint)uVar13;
        puVar2[1] = *(undefined8 *)(pfVar3 + 2);
        *puVar2 = *(undefined8 *)pfVar3;
        *(uint *)(param_1 + 0x98) = uVar20;
        uVar16 = plVar28[5];
        if ((uVar13 & 0x3fffffff) == 0) {
          uVar20 = (uVar11 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar20) {
            uVar20 = 0x3fffffff;
          }
          if (uVar20 < 2) {
            uVar20 = 1;
          }
          FUN_032bd100(uVar20,0x10,uVar13,&local_68);
          puVar10 = (ulong *)(**(code **)(*plVar15 + 0x10))(plVar15,local_68,&local_68);
          if (-1 < (int)uVar11) {
            (**(code **)(*plVar15 + 0x18))(plVar15,puVar31,0);
          }
          if (local_68 < (long *)0x3fffffff0) {
            uVar13 = (ulong)local_68 >> 4;
          }
          else {
            uVar13 = 0x3fffffff;
          }
          uVar11 = (uint)uVar13;
          local_d0 = puVar10;
          puVar31 = puVar10;
        }
        else {
          puVar10 = puVar24;
        }
        uVar27 = (ulong)(uVar11 & 0x3fffffff);
        *puVar10 = uVar16 & 0xfffffffffffffffc;
        puVar10[1] = uVar16 & 3;
        uVar16 = plVar28[6];
        if ((uVar11 & 0x3fffffff) < 2) {
          uVar20 = ((uint)uVar13 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar20) {
            uVar20 = 0x3fffffff;
          }
          if (uVar20 < 3) {
            uVar20 = 2;
          }
          FUN_032bd100(uVar20,0x10,uVar13,&local_68);
          puVar10 = (ulong *)(**(code **)(*plVar15 + 0x10))(plVar15,local_68,&local_68);
          uVar32 = local_d0[1];
          *puVar10 = *local_d0;
          puVar10[1] = uVar32;
          if (-1 < (int)(uint)uVar13) {
            (**(code **)(*plVar15 + 0x18))(plVar15,puVar31,uVar27 << 4);
          }
          if (local_68 < (long *)0x3fffffff0) {
            uVar13 = (ulong)local_68 >> 4;
          }
          else {
            uVar13 = 0x3fffffff;
          }
          uVar27 = (ulong)((uint)uVar13 & 0x3fffffff);
          local_d0 = puVar10;
          puVar31 = puVar10;
        }
        else {
        }
        puVar10[2] = uVar16 & 0xfffffffffffffffc;
        puVar10[3] = uVar16 & 3;
        uVar16 = plVar28[7];
        if ((uint)uVar27 < 3) {
          uVar20 = ((uint)uVar13 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar20) {
            uVar20 = 0x3fffffff;
          }
          if (uVar20 < 4) {
            uVar20 = 3;
          }
          FUN_032bd100(uVar20,0x10,uVar13,&local_68);
          puVar24 = (ulong *)(**(code **)(*plVar15 + 0x10))(plVar15,local_68,&local_68);
          uVar32 = local_d0[1];
          *puVar24 = *local_d0;
          puVar24[1] = uVar32;
          uVar32 = puVar10[3];
          puVar24[2] = puVar10[2];
          puVar24[3] = uVar32;
          if (-1 < (int)(uint)uVar13) {
            (**(code **)(*plVar15 + 0x18))(plVar15,puVar31,uVar27 << 4);
          }
          if (local_68 < (long *)0x3fffffff0) {
            uVar13 = (ulong)local_68 >> 4;
          }
          else {
            uVar13 = 0x3fffffff;
          }
          local_d0 = puVar24;
          puVar31 = puVar24;
        }
        else {
          puVar24 = puVar10;
        }
        puVar24[4] = uVar16 & 0xfffffffffffffffc;
        puVar24[5] = uVar16 & 3;
        uVar16 = 3;
        do {
          while( true ) {
            uVar20 = (uint)uVar16;
            uVar32 = (ulong)(int)uVar20;
            uVar27 = uVar32 - 1;
            plVar8 = (long *)puVar24[uVar27 * 2];
            if ((int)plVar8[0xb] == -1) break;
LAB_001c1cb4:
            uVar16 = uVar27;
            if ((int)uVar27 == 0) goto LAB_001c197c;
          }
          uVar17 = (puVar24 + uVar27 * 2)[1];
          local_80[0] = -1;
          local_68 = plVar8;
          puVar10 = (ulong *)FUN_032c2dcc(&local_90,&local_68,local_80);
          auVar51 = *(undefined1 (*) [16])
                     (local_a0 +
                     (-(*puVar10 >> 0x1f & 1) & 0xfffffff000000000 | (*puVar10 & 0xffffffff) << 4));
          auVar78 = **(undefined1 (**) [16])PTR_PTR_04372570;
          iVar61 = CONCAT13(auVar78[3] & auVar51[3],
                            CONCAT12(auVar78[2] & auVar51[2],
                                     CONCAT11(auVar78[1] & auVar51[1],auVar78[0] & auVar51[0])));
          auVar62._0_8_ =
               CONCAT17(auVar78[7] & auVar51[7],
                        CONCAT16(auVar78[6] & auVar51[6],
                                 CONCAT15(auVar78[5] & auVar51[5],
                                          CONCAT14(auVar78[4] & auVar51[4],iVar61))));
          auVar62[8] = auVar78[8] & auVar51[8];
          auVar62[9] = auVar78[9] & auVar51[9];
          auVar62[10] = auVar78[10] & auVar51[10];
          auVar62[0xb] = auVar78[0xb] & auVar51[0xb];
          iVar61 = -(uint)(iVar61 == auVar78._0_4_);
          iVar56 = -(uint)((int)((ulong)auVar62._0_8_ >> 0x20) == auVar78._4_4_);
          iVar58 = -(uint)(auVar62._8_4_ == auVar78._8_4_);
          uVar11 = CONCAT13(~(byte)((uint)iVar61 >> 0x18),
                            CONCAT12(~(byte)((uint)iVar61 >> 0x10),
                                     CONCAT11(~(byte)((uint)iVar61 >> 8),~(byte)iVar61)));
          auVar50._0_8_ =
               CONCAT17(~(byte)((uint)iVar56 >> 0x18),
                        CONCAT16(~(byte)((uint)iVar56 >> 0x10),
                                 CONCAT15(~(byte)((uint)iVar56 >> 8),CONCAT14(~(byte)iVar56,uVar11))
                                ));
          auVar50[8] = ~(byte)iVar58;
          auVar50[9] = ~(byte)((uint)iVar58 >> 8);
          auVar50[10] = ~(byte)((uint)iVar58 >> 0x10);
          auVar50[0xb] = ~(byte)((uint)iVar58 >> 0x18);
          fVar47 = auVar51._0_4_;
          fVar60 = auVar51._4_4_;
          fVar68 = auVar51._8_4_;
          fVar48 = ABS((fVar68 * fVar68 + fVar47 * fVar47 + fVar60 * fVar60) - (float)uVar76);
          bVar7 = false;
          if (((uVar11 & (uint)((ulong)auVar50._0_8_ >> 0x20) & auVar50._8_4_) != 0) &&
             (bVar7 = false, !NAN(fVar48))) {
            bVar7 = fVar48 < 0.0001;
          }
          iVar61 = (int)uVar27;
          if ((!bVar7) ||
             (auVar35._0_4_ = *pfVar3 * fVar47, auVar35._4_4_ = pfVar3[1] * fVar60,
             auVar35._8_4_ = pfVar3[2] * fVar68, auVar35._12_4_ = pfVar3[3] * auVar51._12_4_,
             auVar51 = NEON_ext(auVar35,auVar35,8,1),
             *(float *)(param_1 + 4) <= auVar35._0_4_ + auVar35._4_4_ + auVar51._0_4_)) {
            uVar11 = (int)uVar17 << 1;
            *(int *)(plVar8 + 0xb) = (int)plVar28[0xb];
            uVar17 = plVar8[(ulong)(9U >> (ulong)(uVar11 & 0x1f) & 3) + 5];
            uVar12 = (uint)uVar13;
            uVar29 = (ulong)(uVar12 & 0x3fffffff);
            if ((int)(uVar12 & 0x3fffffff) < (int)uVar20) {
              if (0x3ffffffe < iVar61) {
                FUN_032bd0a8(uVar16 & 0xffffffff);
              }
              uVar14 = (uVar12 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar14) {
                uVar14 = 0x3fffffff;
              }
              uVar4 = uVar20;
              if ((int)uVar20 <= (int)uVar14) {
                uVar4 = uVar14;
              }
              FUN_032bd100(uVar4,0x10,uVar13,&local_68);
              local_d0 = (ulong *)(**(code **)(*plVar15 + 0x10))(plVar15,local_68,&local_68);
              if (0 < iVar61) {
                uVar13 = uVar27 & 3;
                if ((uVar27 & 0xffffffff) - 1 < 3) {
                  lVar9 = 0;
                }
                else {
                  lVar9 = 0;
                  puVar10 = local_d0 + 4;
                  puVar23 = puVar24 + 4;
                  do {
                    uVar18 = puVar23[-3];
                    lVar9 = lVar9 + 4;
                    puVar10[-4] = puVar23[-4];
                    puVar10[-3] = uVar18;
                    uVar18 = puVar23[-1];
                    puVar10[-2] = puVar23[-2];
                    puVar10[-1] = uVar18;
                    uVar18 = puVar23[1];
                    *puVar10 = *puVar23;
                    puVar10[1] = uVar18;
                    puVar1 = puVar23 + 2;
                    uVar18 = puVar23[3];
                    puVar23 = puVar23 + 8;
                    puVar10[2] = *puVar1;
                    puVar10[3] = uVar18;
                    puVar10 = puVar10 + 8;
                  } while ((uVar27 & 0xffffffff) - uVar13 != lVar9);
                }
                if (uVar13 != 0) {
                  puVar24 = puVar24 + lVar9 * 2;
                  puVar10 = local_d0 + lVar9 * 2;
                  do {
                    uVar18 = puVar24[1];
                    uVar13 = uVar13 - 1;
                    *puVar10 = *puVar24;
                    puVar10[1] = uVar18;
                    puVar24 = puVar24 + 2;
                    puVar10 = puVar10 + 2;
                  } while (uVar13 != 0);
                }
              }
              if (-1 < (int)uVar12) {
                (**(code **)(*plVar15 + 0x18))(plVar15,puVar31,uVar29 << 4);
              }
              if (local_68 < (long *)0x3fffffff0) {
                uVar13 = (ulong)local_68 >> 4;
              }
              else {
                uVar13 = 0x3fffffff;
              }
              uVar29 = (ulong)((uint)uVar13 & 0x3fffffff);
              puVar24 = local_d0;
              puVar31 = local_d0;
            }
            lVar9 = uVar27 * 2;
            uVar12 = uVar20 + 1;
            uVar27 = (ulong)uVar12;
            puVar24[lVar9] = uVar17 & 0xfffffffffffffffc;
            (puVar24 + lVar9)[1] = uVar17 & 3;
            uVar17 = plVar8[(ulong)(0x12U >> (ulong)(uVar11 & 0x1f) & 3) + 5];
            if ((int)uVar29 <= (int)uVar20) {
              if (0x3ffffffe < (int)uVar20) {
                FUN_032bd0a8(uVar27);
              }
              uVar11 = ((uint)uVar13 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar11) {
                uVar11 = 0x3fffffff;
              }
              if ((int)uVar12 <= (int)uVar11) {
                uVar12 = uVar11;
              }
              FUN_032bd100(uVar12,0x10,uVar13,&local_68);
              local_d0 = (ulong *)(**(code **)(*plVar15 + 0x10))(plVar15,local_68,&local_68);
              if (0 < (int)uVar20) {
                uVar18 = uVar32 & 3;
                if ((uVar16 & 0xffffffff) - 1 < 3) {
                  lVar9 = 0;
                }
                else {
                  lVar9 = 0;
                  puVar10 = local_d0 + 4;
                  puVar23 = puVar24 + 4;
                  do {
                    uVar5 = puVar23[-3];
                    lVar9 = lVar9 + 4;
                    puVar10[-4] = puVar23[-4];
                    puVar10[-3] = uVar5;
                    uVar5 = puVar23[-1];
                    puVar10[-2] = puVar23[-2];
                    puVar10[-1] = uVar5;
                    uVar5 = puVar23[1];
                    *puVar10 = *puVar23;
                    puVar10[1] = uVar5;
                    puVar1 = puVar23 + 2;
                    uVar5 = puVar23[3];
                    puVar23 = puVar23 + 8;
                    puVar10[2] = *puVar1;
                    puVar10[3] = uVar5;
                    puVar10 = puVar10 + 8;
                  } while ((uVar16 & 0xffffffff) - uVar18 != lVar9);
                }
                if (uVar18 != 0) {
                  puVar24 = puVar24 + lVar9 * 2;
                  puVar10 = local_d0 + lVar9 * 2;
                  do {
                    uVar16 = puVar24[1];
                    uVar18 = uVar18 - 1;
                    *puVar10 = *puVar24;
                    puVar10[1] = uVar16;
                    puVar24 = puVar24 + 2;
                    puVar10 = puVar10 + 2;
                  } while (uVar18 != 0);
                }
              }
              if (-1 < (int)(uint)uVar13) {
                (**(code **)(*plVar15 + 0x18))(plVar15,puVar31,uVar29 << 4);
              }
              uVar20 = (uint)((ulong)local_68 >> 4);
              if ((long *)0x3ffffffef < local_68) {
                uVar20 = 0x3fffffff;
              }
              uVar13 = (ulong)uVar20;
              puVar24 = local_d0;
              puVar31 = local_d0;
            }
            puVar24[uVar32 * 2] = uVar17 & 0xfffffffffffffffc;
            (puVar24 + uVar32 * 2)[1] = uVar17 & 3;
            goto LAB_001c1cb4;
          }
          uVar16 = uVar27;
        } while (iVar61 != 0);
      }
LAB_001c197c:
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar21);
    if ((puVar24 != (ulong *)0x0) && (-1 < (int)(uint)uVar13)) {
      FUN_032cf244(plVar15,puVar31,0x10,(uint)uVar13 & 0x3fffffff);
    }
  }
  puVar6 = PTR_PTR_04372408;
  if ((*(char *)(param_1 + 0xe) != '\0') &&
     (plVar15 = *(long **)(param_1 + 0x58), plVar15 != (long *)0x0)) {
    iVar61 = *(int *)(param_1 + 0x98);
    do {
      if (0 < iVar61) {
        lVar9 = 0;
        do {
          auVar51 = *(undefined1 (*) [16])(*plVar30 + lVar9 * 0x10);
          fVar47 = auVar51._12_4_ +
                   auVar51._0_4_ * *(float *)(plVar15 + 2) +
                   auVar51._4_4_ * *(float *)((long)plVar15 + 0x14) +
                   auVar51._8_4_ * *(float *)(plVar15 + 3);
          if (0.0 < fVar47) {
            auVar42._0_12_ = auVar51._0_12_;
            auVar42._12_4_ = auVar51._12_4_ - fVar47;
            puVar2 = (undefined8 *)(*plVar30 + lVar9 * 0x10);
            puVar2[1] = auVar42._8_8_;
            *puVar2 = auVar51._0_8_;
            iVar61 = *(int *)(param_1 + 0x98);
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < iVar61);
      }
      plVar15 = (long *)*plVar15;
    } while (plVar15 != (long *)0x0);
  }
  if ((*(int *)(param_1 + 0x98) != 0) &&
     (*(int *)(param_1 + 0x98) < (int)(*(uint *)(param_1 + 0x9c) & 0x3fffffff))) {
    FUN_032bd3f0(*(undefined8 *)puVar6,plVar30,0x10,0);
  }
  uVar26 = local_98;
  *(undefined1 *)(param_1 + 0x1fe) = 1;
  uVar76 = *(undefined8 *)puVar6;
  uVar21 = local_98._4_4_;
  local_98 = (ulong)local_98._4_4_ << 0x20;
  if ((-1 < (long)uVar26) && (local_a0 != 0)) {
    FUN_032cf244(uVar76,local_a0,0x10,uVar21 & 0x3fffffff);
  }
  FUN_032c3060(&local_90,uVar76);
  FUN_032c2c38(&local_90);
  if ((local_f0 != 0) && (-1 < (int)local_108)) {
    FUN_032cf244(uVar76,local_f0,0x10,local_108 & 0x3fffffff);
  }
  return;
}


