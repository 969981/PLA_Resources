/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03287e60; name: FUN_03287e60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03287e60(undefined1 (*param_1) [12],undefined8 *param_2)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  ulong uVar19;
  ulong uVar20;
  byte bVar21;
  ulong uVar22;
  ulong *puVar23;
  long lVar24;
  float *pfVar25;
  long lVar26;
  uint *puVar27;
  long *plVar28;
  long lVar29;
  byte bVar30;
  undefined8 *puVar31;
  long lVar32;
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  int iVar43;
  float fVar54;
  undefined1 auVar44 [16];
  undefined1 auVar52 [16];
  undefined1 auVar51 [16];
  undefined1 auVar50 [16];
  undefined1 auVar49 [16];
  undefined1 auVar48 [16];
  undefined1 auVar47 [16];
  undefined1 auVar46 [16];
  undefined1 auVar45 [16];
  undefined1 auVar53 [16];
  uint uVar55;
  undefined8 uVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar66 [16];
  undefined1 auVar65 [16];
  undefined1 auVar64 [16];
  undefined1 auVar63 [16];
  undefined1 auVar62 [16];
  undefined1 auVar61 [16];
  undefined1 auVar60 [16];
  undefined1 auVar59 [16];
  undefined8 uVar67;
  undefined8 uVar68;
  undefined1 auVar69 [16];
  float fVar71;
  undefined1 auVar70 [16];
  float fVar72;
  int iVar73;
  float fVar74;
  int iVar75;
  float fVar76;
  float fVar77;
  undefined8 uVar78;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined *local_590 [2];
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 local_540;
  float local_530;
  float fStack_52c;
  float fStack_528;
  float fStack_524;
  ulong *local_520;
  long lStack_518;
  ulong local_510 [62];
  undefined8 local_320;
  undefined8 uStack_318;
  uint *local_310;
  undefined8 local_308;
  uint local_300 [2];
  undefined4 auStack_2f8 [2];
  undefined8 uStack_2f0;
  undefined4 auStack_2e8 [54];
  undefined1 auStack_210 [16];
  undefined1 auStack_200 [48];
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [176];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f8;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  long local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  lVar4 = tpidr_el0;
  if (*(long *)(lVar4 + 0x38d490) == 0) {
    lVar29 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar29;
    lVar29 = *(long *)(lVar29 + 0x10);
  }
  else {
    lVar29 = *(long *)(*(long *)(lVar4 + 0x38d490) + 0x10);
  }
  if (lVar29 != 0) {
    puVar31 = *(undefined8 **)(lVar29 + 8);
    uVar22 = (long)puVar31 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar22 <= *(ulong *)(lVar29 + 0x10)) &&
       (*(ulong *)(lVar29 + 8) = uVar22, puVar31 != (undefined8 *)0x0)) {
      *puVar31 = "LtsolveSingleAgent";
      puVar31[2] = "Stinit";
      uVar56 = nn::os::GetSystemTick();
      puVar31[1] = uVar56;
    }
  }
  lVar26 = *(long *)(param_1[1] + 4);
  fStack_e8 = (float)*(undefined8 *)(*param_1 + 8);
  fStack_e4 = (float)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20);
  local_f0 = (float)*(undefined8 *)*param_1;
  fStack_ec = (float)((ulong)*(undefined8 *)*param_1 >> 0x20);
  auVar33 = *(undefined1 (*) [16])(lVar26 + 0x80);
  fVar34 = *(float *)(lVar26 + 0xa8);
  fVar35 = auVar33._0_4_ * fVar34;
  fVar36 = auVar33._4_4_ * fVar34;
  fVar37 = auVar33._8_4_ * fVar34;
  fVar38 = auVar33._12_4_ * fVar34;
  local_f8 = CONCAT44(fVar34,fVar34);
  auVar69._0_4_ = fVar35 * fVar35;
  auVar69._4_4_ = fVar36 * fVar36;
  auVar69._8_4_ = fVar37 * fVar37;
  auVar69._12_4_ = fVar38 * fVar38;
  auVar40 = NEON_ext(auVar69,auVar69,8,1);
  fVar35 = auVar69._0_4_ + auVar69._4_4_ + auVar40._0_4_;
  if (fVar35 < 1e-05) {
    auVar33._12_4_ = fStack_e4;
    auVar33._0_12_ = *param_1;
    fVar34 = 0.0;
    auVar40._8_8_ = _UNK_03889f38;
    auVar40._0_8_ = _DAT_03889f30;
    local_f8 = 0;
    auVar33 = a64_TBL(ZEXT816(0),auVar33,auVar40);
  }
  fVar36 = *(float *)(lVar26 + 0x40);
  fVar37 = *(float *)(lVar26 + 0x44);
  fVar38 = *(float *)(lVar26 + 0x48);
  fVar39 = *(float *)(lVar26 + 0xa4);
  fVar42 = fVar36 * fVar36 + fVar37 * fVar37 + fVar38 * fVar38;
  fVar54 = fVar36 * fVar36 + fVar37 * fVar37 + fVar38 * fVar38;
  uVar56 = CONCAT44(fVar54,fVar42);
  if (fVar39 * fVar39 < fVar42) {
    uVar67 = NEON_frsqrte(uVar56,4);
    fVar41 = (float)uVar67;
    fVar71 = (float)((ulong)uVar67 >> 0x20);
    uVar67 = NEON_frsqrts(uVar56,CONCAT44(fVar71 * fVar71,fVar41 * fVar41),4);
    fVar41 = fVar41 * (float)uVar67;
    fVar71 = fVar71 * (float)((ulong)uVar67 >> 0x20);
    iVar43 = -(uint)(fVar42 <= 0.0);
    iVar73 = -(uint)(fVar54 <= 0.0);
    uVar56 = NEON_frsqrts(uVar56,CONCAT44(fVar71 * fVar71,fVar41 * fVar41),4);
    fVar41 = (float)uVar56 * fVar41;
    fVar71 = (float)((ulong)uVar56 >> 0x20) * fVar71;
    fVar42 = (float)CONCAT13((byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18),
                             CONCAT12((byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10),
                                      CONCAT11((byte)((uint)fVar41 >> 8) &
                                               ~(byte)((uint)iVar43 >> 8),
                                               SUB41(fVar41,0) & ~(byte)iVar43)));
    fVar36 = fVar36 * fVar42 * fVar39;
    fVar37 = fVar37 * (float)(CONCAT17((byte)((uint)fVar71 >> 0x18) & ~(byte)((uint)iVar73 >> 0x18),
                                       CONCAT16((byte)((uint)fVar71 >> 0x10) &
                                                ~(byte)((uint)iVar73 >> 0x10),
                                                CONCAT15((byte)((uint)fVar71 >> 8) &
                                                         ~(byte)((uint)iVar73 >> 8),
                                                         CONCAT14(SUB41(fVar71,0) & ~(byte)iVar73,
                                                                  fVar42)))) >> 0x20) * fVar39;
    fVar38 = fVar38 * fVar42 * fVar39;
  }
  local_540 = CONCAT44(fVar39,fVar39);
  local_310 = local_300;
  local_520 = local_510;
  local_308 = 0x80;
  lStack_518 = 0x80;
  uStack_108 = 0;
  local_110 = 0;
  uStack_318 = 0;
  local_320 = 0;
  lVar24 = 0x10;
  local_d8 = lVar29;
  do {
    lVar32 = lVar24 + 0x20;
    Hint_Prefetch(auStack_210 + lVar24,0,0,0);
    Hint_Prefetch(auStack_1d0 + lVar24,0,0,0);
    *(undefined4 *)((long)local_300 + lVar24 + -8) = 0x5f7ffff0;
    *(undefined4 *)((long)local_300 + lVar24 + -4) = 0x5f7ffff0;
    *(undefined8 *)((long)local_300 + lVar24 + -0x10) = 0x5f7ffff05f7ffff0;
    *(undefined4 *)((long)auStack_2f8 + lVar24) = 0x5f7ffff0;
    *(undefined4 *)((long)auStack_2f8 + lVar24 + 4) = 0x5f7ffff0;
    *(undefined8 *)((long)local_300 + lVar24) = 0x5f7ffff05f7ffff0;
    Hint_Prefetch(auStack_200 + lVar24,0,0,0);
    Hint_Prefetch(auStack_1c0 + lVar24,0,0,0);
    lVar24 = lVar32;
  } while ((int)lVar32 != 0x210);
  uVar55 = 0;
  puVar23 = local_520;
  do {
    uVar55 = uVar55 + 2;
    Hint_Prefetch(puVar23 + 0x20,0,0,0);
    Hint_Prefetch(puVar23 + 0x28,0,0,0);
    puVar23[1] = 0;
    *puVar23 = 0;
    puVar23[3] = 0;
    puVar23[2] = 0;
    Hint_Prefetch(puVar23 + 0x22,0,0,0);
    Hint_Prefetch(puVar23 + 0x2a,0,0,0);
    puVar23 = puVar23 + 4;
  } while (uVar55 < 0x20);
  uVar55 = *(uint *)(lVar26 + 0xc4);
  if (1e-05 <= fVar35) {
    local_510[1] = (ulong)uVar55;
  }
  else {
    local_510[1] = (ulong)uVar55 << 0x20;
    uVar55 = 0;
  }
  uVar78 = NEON_frecpe(local_540,4);
  auVar17._8_4_ = fStack_e8;
  auVar17._0_8_ = CONCAT44(fStack_ec,local_f0);
  auVar17._12_4_ = fStack_e4;
  auVar69 = NEON_ext(auVar17,auVar17,8,1);
  uVar56 = NEON_frecps(local_540,uVar78,4);
  auVar40 = NEON_ext(auVar33,auVar33,4,1);
  local_580 = auVar33._0_8_;
  uVar67 = NEON_ext(CONCAT44(fStack_ec,local_f0),auVar69._0_8_,4,1);
  fVar35 = (float)uVar78 * (float)uVar56;
  fVar42 = (float)((ulong)uVar78 >> 0x20) * (float)((ulong)uVar56 >> 0x20);
  uVar56 = NEON_frecps(local_540,CONCAT44(fVar42,fVar35),4);
  fVar76 = auVar33._0_4_;
  fVar77 = auVar33._4_4_;
  iVar43 = -(uint)(fVar39 == 0.0);
  iVar73 = -(uint)(fVar39 == 0.0);
  auVar57._0_4_ = (float)uVar67 * fVar76 - auVar40._0_4_ * local_f0;
  auVar57._4_4_ = (float)((ulong)uVar67 >> 0x20) * fVar77 - auVar40._4_4_ * fStack_ec;
  auVar57._8_4_ = local_f0 * auVar33._8_4_ - fVar76 * fStack_e8;
  auVar57._12_4_ = fStack_ec * auVar33._12_4_ - fVar77 * fStack_e4;
  auVar69 = NEON_ext(auVar57,auVar57,4,1);
  fVar41 = auVar69._0_4_;
  fVar71 = auVar69._4_4_;
  local_510[0] = CONCAT44(uVar55,uVar55);
  local_530 = 0.0;
  fStack_52c = 0.0;
  fStack_528 = 0.0;
  fStack_524 = 0.0;
  uVar22 = CONCAT44(fVar42 * (float)((ulong)uVar56 >> 0x20),fVar35 * (float)uVar56) &
           CONCAT17(~(byte)((uint)iVar73 >> 0x18),
                    CONCAT16(~(byte)((uint)iVar73 >> 0x10),
                             CONCAT15(~(byte)((uint)iVar73 >> 8),
                                      CONCAT14(~(byte)iVar73,
                                               CONCAT13(~(byte)((uint)iVar43 >> 0x18),
                                                        CONCAT12(~(byte)((uint)iVar43 >> 0x10),
                                                                 CONCAT11(~(byte)((uint)iVar43 >> 8)
                                                                          ,~(byte)iVar43)))))));
  fVar72 = fVar41 * fVar41 + fVar71 * fVar71 + auVar57._0_4_ * auVar57._0_4_;
  fVar74 = fVar41 * fVar41 + fVar71 * fVar71 + auVar57._0_4_ * auVar57._0_4_;
  uVar78 = CONCAT44(fVar74,fVar72);
  fVar42 = fVar38 * fVar38 + fVar36 * fVar36 + fVar37 * fVar37;
  uVar67 = CONCAT44(fVar38 * fVar38 + fVar36 * fVar36 + fVar37 * fVar37,fVar42);
  uVar56 = NEON_frsqrte(uVar67,4);
  fVar54 = (float)uVar56;
  fVar39 = (float)((ulong)uVar56 >> 0x20);
  fVar35 = fVar39 * fVar39;
  uVar56 = NEON_frsqrts(uVar67,CONCAT17((char)((uint)fVar35 >> 0x18),
                                        CONCAT16((char)((uint)fVar35 >> 0x10),
                                                 CONCAT15((char)((uint)fVar35 >> 8),
                                                          CONCAT14(SUB41(fVar35,0),fVar54 * fVar54))
                                                )),4);
  fVar54 = fVar54 * (float)uVar56;
  fVar39 = fVar39 * (float)((ulong)uVar56 >> 0x20);
  fVar39 = fVar39 * fVar39;
  uVar56 = NEON_frsqrts(uVar67,CONCAT17((char)((uint)fVar39 >> 0x18),
                                        CONCAT16((char)((uint)fVar39 >> 0x10),
                                                 CONCAT15((char)((uint)fVar39 >> 8),
                                                          CONCAT14(SUB41(fVar39,0),fVar54 * fVar54))
                                                )),4);
  iVar43 = -(uint)(fVar42 <= 0.0);
  fVar54 = (float)uVar56 * fVar54;
  uVar56 = NEON_frsqrte(uVar78,4);
  fVar35 = (float)uVar56;
  fVar39 = (float)((ulong)uVar56 >> 0x20);
  uVar56 = NEON_frsqrts(uVar78,CONCAT44(fVar39 * fVar39,fVar35 * fVar35),4);
  fVar35 = fVar35 * (float)uVar56;
  fVar39 = fVar39 * (float)((ulong)uVar56 >> 0x20);
  fVar42 = fVar39 * fVar39;
  uVar56 = NEON_frsqrts(uVar78,CONCAT17((char)((uint)fVar42 >> 0x18),
                                        CONCAT16((char)((uint)fVar42 >> 0x10),
                                                 CONCAT15((char)((uint)fVar42 >> 8),
                                                          CONCAT14(SUB41(fVar42,0),fVar35 * fVar35))
                                                )),4);
  iVar73 = -(uint)(fVar72 <= 0.0);
  iVar75 = -(uint)(fVar74 <= 0.0);
  fVar35 = (float)uVar56 * fVar35;
  fVar39 = (float)((ulong)uVar56 >> 0x20) * fVar39;
  fVar72 = (float)uVar22;
  fVar42 = fVar72 * fVar34;
  fVar37 = fVar37 * (float)(uVar22 >> 0x20);
  fVar35 = (float)CONCAT13((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar73 >> 0x18),
                           CONCAT12((byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar73 >> 0x10),
                                    CONCAT11((byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar73 >> 8),
                                             SUB41(fVar35,0) & ~(byte)iVar73)));
  fVar34 = fVar34 * (float)CONCAT13((byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18),
                                    CONCAT12((byte)((uint)fVar54 >> 0x10) &
                                             ~(byte)((uint)iVar43 >> 0x10),
                                             CONCAT11((byte)((uint)fVar54 >> 8) &
                                                      ~(byte)((uint)iVar43 >> 8),
                                                      SUB41(fVar54,0) & ~(byte)iVar43)));
  fVar39 = (float)(CONCAT17((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar75 >> 0x18),
                            CONCAT16((byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar75 >> 0x10),
                                     CONCAT15((byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar75 >> 8)
                                              ,CONCAT14(SUB41(fVar39,0) & ~(byte)iVar75,fVar35))))
                  >> 0x20);
  fVar71 = fVar71 * fVar39;
  auVar70._0_8_ = CONCAT44(fVar71,fVar41 * fVar35);
  auVar70._8_4_ = auVar57._0_4_ * fVar35;
  auVar70._12_4_ = auVar57._4_4_ * fVar39;
  fVar39 = fVar36 * fVar72 * fVar76 + fVar37 * fVar77 + fVar38 * fVar72 * auVar33._8_4_;
  uStack_578 = auVar33._8_8_;
  uStack_568 = auVar70._8_8_;
  fVar35 = fVar41 * fVar35 * fVar36 * fVar72 + fVar71 * fVar37 + auVar70._8_4_ * fVar38 * fVar72;
  uStack_550 = (ulong)(uint)fVar35;
  local_560 = CONCAT44(fVar42,fVar39);
  uStack_558 = (ulong)(uint)(fVar39 * fVar34);
  uStack_548 = (ulong)(uint)(fVar35 * fVar34);
  if (0.25 <= fVar42) {
    if (0.7853982 <= fVar42) {
      local_590[0] = &DAT_03aabac0;
    }
    else {
      local_590[0] = &DAT_03aabbd0;
    }
  }
  else {
    local_590[0] = &DAT_03aabce0;
  }
  local_598 = CONCAT44(*(undefined4 *)(lVar26 + 0xd0),*(undefined4 *)(lVar26 + 0xd0));
  uStack_570 = auVar70._0_8_;
  if (*(long *)(lVar4 + 0x38d490) == 0) {
    lVar24 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar24;
    lVar24 = *(long *)(lVar24 + 0x10);
  }
  else {
    lVar24 = *(long *)(*(long *)(lVar4 + 0x38d490) + 0x10);
  }
  if (lVar24 != 0) {
    puVar31 = *(undefined8 **)(lVar24 + 8);
    uVar22 = (long)puVar31 + 0x17U & 0xfffffffffffffff8;
    if ((uVar22 <= *(ulong *)(lVar24 + 0x10)) &&
       (*(ulong *)(lVar24 + 8) = uVar22, puVar31 != (undefined8 *)0x0)) {
      *puVar31 = "StscoreBoundaryObstacles";
      uVar56 = nn::os::GetSystemTick();
      puVar31[1] = uVar56;
    }
  }
  iVar43 = *(int *)(*(undefined8 **)param_1[2] + 1);
  if (iVar43 == 0) {
    bVar30 = 0;
  }
  else {
    puVar31 = (undefined8 *)**(undefined8 **)param_1[2];
    uVar56 = NEON_fmov(0x3f800000,4);
    puVar1 = puVar31 + (long)iVar43 * 4;
    bVar30 = 0;
    do {
      local_a0._0_4_ = (float)*(undefined8 *)(lVar26 + 0x30);
      local_a0._4_4_ = (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >> 0x20);
      uStack_98._0_4_ = (float)*(undefined8 *)(lVar26 + 0x38);
      uStack_98._4_4_ = (float)((ulong)*(undefined8 *)(lVar26 + 0x38) >> 0x20);
      fVar34 = local_f0 * (float)local_a0 + fStack_ec * local_a0._4_4_ +
               fStack_e8 * (float)uStack_98;
      fVar35 = local_f0 * (float)local_a0 + fStack_ec * local_a0._4_4_ +
               fStack_e8 * (float)uStack_98;
      local_a0._0_4_ = (float)local_a0 - local_f0 * fVar34;
      local_a0._4_4_ = local_a0._4_4_ - fStack_ec * fVar35;
      uStack_98._0_4_ = (float)uStack_98 - fStack_e8 * fVar34;
      uStack_98._4_4_ = uStack_98._4_4_ - fStack_e4 * fVar35;
      fStack_a8 = (float)puVar31[3];
      local_b0 = (float)puVar31[2];
      fStack_ac = (float)((ulong)puVar31[2] >> 0x20);
      fVar34 = local_f0 * local_b0;
      fVar35 = fVar34 + fStack_ec * fStack_ac + fStack_e8 * fStack_a8;
      fStack_b4 = *(float *)(lVar26 + 0xa0) + *(float *)((long)puVar31 + 0xc);
      local_b0 = local_b0 - local_f0 * fVar35;
      fStack_ac = fStack_ac - fStack_ec * (fVar34 + fStack_ec * fStack_ac + fStack_e8 * fStack_a8);
      fStack_a8 = fStack_a8 - fStack_e8 * fVar35;
      if (fStack_b4 <= 0.0) {
        fStack_b4 = 0.0;
      }
      fStack_b8 = (float)puVar31[1];
      local_c0 = (float)*puVar31;
      fStack_bc = (float)((ulong)*puVar31 >> 0x20);
      fVar34 = local_f0 * local_c0;
      fVar35 = fVar34 + fStack_ec * fStack_bc + fStack_e8 * fStack_b8;
      local_c0 = local_c0 - local_f0 * fVar35;
      fStack_bc = fStack_bc - fStack_ec * (fVar34 + fStack_ec * fStack_bc + fStack_e8 * fStack_b8);
      fStack_b8 = fStack_b8 - fStack_e8 * fVar35;
      auVar18._8_4_ = fStack_a8;
      auVar18._0_8_ = CONCAT44(fStack_ac,local_b0);
      auVar18._12_4_ = fStack_b4;
      fVar34 = (local_b0 - local_c0) * (local_b0 - local_c0);
      fVar35 = (fStack_ac - fStack_bc) * (fStack_ac - fStack_bc);
      fVar36 = (fStack_a8 - fStack_b8) * (fStack_a8 - fStack_b8);
      fVar37 = (fStack_b4 - fStack_b4) * (fStack_b4 - fStack_b4);
      auVar7._4_4_ = fVar35;
      auVar7._0_4_ = fVar34;
      auVar7._8_4_ = fVar36;
      auVar7._12_4_ = fVar37;
      auVar8._4_4_ = fVar35;
      auVar8._0_4_ = fVar34;
      auVar8._8_4_ = fVar36;
      auVar8._12_4_ = fVar37;
      auVar33 = NEON_ext(auVar7,auVar8,8,1);
      fStack_a4 = fStack_b4;
      if (fVar34 + fVar35 + auVar33._0_4_ == 0.0) {
        local_90 = 0;
        uStack_88 = 0;
        local_d0 = CONCAT44(fStack_ac,local_b0);
        uStack_c8 = auVar18._8_8_;
        bVar21 = FUN_03288b30(&local_a0,&local_d0,&local_90,&local_598,local_590,&local_310);
      }
      else {
        fVar37 = local_c0 - local_b0;
        fVar38 = fStack_bc - fStack_ac;
        fVar39 = fStack_b8 - fStack_a8;
        fVar34 = local_c0 - (float)local_a0;
        fVar35 = fStack_bc - local_a0._4_4_;
        fVar36 = fStack_b8 - (float)uStack_98;
        fVar54 = fVar34 * fVar37;
        fVar41 = fVar35 * fVar38;
        fVar71 = fVar36 * fVar39;
        fVar42 = fStack_b4 + *(float *)(lVar26 + 0x60);
        uVar67 = CONCAT44(fVar39 * fVar39 + fVar37 * fVar37 + fVar38 * fVar38,
                          fVar39 * fVar39 + fVar37 * fVar37 + fVar38 * fVar38);
        uVar78 = NEON_frecpe(uVar67,4);
        uVar68 = NEON_frecps(uVar67,uVar78,4);
        fVar72 = (float)uVar78 * (float)uVar68;
        fVar74 = (float)((ulong)uVar78 >> 0x20) * (float)((ulong)uVar68 >> 0x20);
        uVar67 = NEON_frecps(uVar67,CONCAT44(fVar74,fVar72),4);
        uVar67 = NEON_fminnm(CONCAT44((fVar71 + fVar54 + fVar41) *
                                      fVar74 * (float)((ulong)uVar67 >> 0x20),
                                      (fVar71 + fVar54 + fVar41) * fVar72 * (float)uVar67),uVar56,4)
        ;
        uVar67 = NEON_fmax(uVar67,0,4);
        fVar54 = (float)((ulong)uVar67 >> 0x20);
        fVar34 = fVar34 - fVar37 * (float)uVar67;
        fVar35 = fVar35 - fVar38 * fVar54;
        fVar36 = fVar36 - fVar39 * (float)uVar67;
        fVar37 = (fStack_b4 - uStack_98._4_4_) - (fStack_b4 - fStack_b4) * fVar54;
        fVar34 = fVar34 * fVar34;
        fVar35 = fVar35 * fVar35;
        fVar36 = fVar36 * fVar36;
        fVar37 = fVar37 * fVar37;
        auVar5._4_4_ = fVar35;
        auVar5._0_4_ = fVar34;
        auVar5._8_4_ = fVar36;
        auVar5._12_4_ = fVar37;
        auVar6._4_4_ = fVar35;
        auVar6._0_4_ = fVar34;
        auVar6._8_4_ = fVar36;
        auVar6._12_4_ = fVar37;
        auVar33 = NEON_ext(auVar5,auVar6,8,1);
        if (fVar42 * fVar42 < fVar34 + fVar35 + auVar33._0_4_) {
          bVar21 = 0;
        }
        else {
          local_90 = CONCAT44(fStack_b4,fStack_b4);
          bVar21 = FUN_03289460(&local_a0,&local_b0,&local_c0,&local_90,&local_598,local_590,
                                &local_310);
        }
      }
      puVar31 = puVar31 + 4;
      bVar30 = bVar30 | bVar21;
    } while (puVar31 != puVar1);
  }
  lVar24 = *(long *)(lVar4 + 0x38d490);
  if (lVar24 == 0) {
    lVar24 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar24;
  }
  lVar24 = *(long *)(lVar24 + 0x10);
  if (lVar24 != 0) {
    puVar31 = *(undefined8 **)(lVar24 + 8);
    uVar22 = (long)puVar31 + 0x17U & 0xfffffffffffffff8;
    if ((uVar22 <= *(ulong *)(lVar24 + 0x10)) &&
       (*(ulong *)(lVar24 + 8) = uVar22, puVar31 != (undefined8 *)0x0)) {
      *puVar31 = "StscoreSphereObstacles";
      uVar56 = nn::os::GetSystemTick();
      puVar31[1] = uVar56;
    }
  }
  lVar24 = *(long *)param_1[2];
  if (*(int *)(lVar24 + 0x18) == 0) {
    iVar43 = *(int *)(lVar24 + 0x40);
    uVar56 = local_580;
    uVar67 = uStack_570;
    uVar78 = local_560;
    uVar22 = uStack_558;
    uVar19 = uStack_550;
    uVar20 = uStack_548;
  }
  else {
    lVar32 = *(long *)(lVar24 + 0x10);
    lVar24 = (long)*(int *)(lVar24 + 0x18) << 5;
    do {
      bVar21 = FUN_03288a50(lVar26,lVar32,&local_f0,&local_598,local_590,&local_310,&local_520,
                            &local_530);
      bVar30 = bVar30 | bVar21;
      lVar32 = lVar32 + 0x20;
      lVar24 = lVar24 + -0x20;
    } while (lVar24 != 0);
    lVar24 = *(long *)param_1[2];
    iVar43 = *(int *)(lVar24 + 0x40);
    uVar56 = local_580;
    uVar67 = uStack_570;
    uVar78 = local_560;
    uVar22 = uStack_558;
    uVar19 = uStack_550;
    uVar20 = uStack_548;
  }
  if (iVar43 != 0) {
    pfVar25 = *(float **)(lVar24 + 0x38);
    auVar33 = NEON_fmov(0xbf800000,4);
    pfVar2 = pfVar25 + (long)iVar43 * 4;
    bVar30 = 1;
    do {
      fVar34 = (float)((ulong)local_598 >> 0x20);
      local_530 = local_530 + (float)local_598 * *pfVar25;
      fStack_52c = fStack_52c + fVar34 * pfVar25[1];
      fStack_528 = fStack_528 + (float)local_598 * pfVar25[2];
      fStack_524 = fStack_524 + fVar34 * pfVar25[3];
      local_580._0_4_ = (float)uVar56;
      local_580._4_4_ = (float)((ulong)uVar56 >> 0x20);
      uStack_570._0_4_ = (float)uVar67;
      uStack_570._4_4_ = (float)((ulong)uVar67 >> 0x20);
      fVar36 = (float)*(undefined8 *)pfVar25;
      fVar38 = (float)((ulong)*(undefined8 *)pfVar25 >> 0x20);
      local_580._0_4_ = (float)local_580 * fVar36;
      local_580._4_4_ = local_580._4_4_ * fVar38;
      fVar35 = (float)uStack_578 * (float)*(undefined8 *)(pfVar25 + 2);
      fVar36 = fVar36 * (float)uStack_570;
      fVar38 = fVar38 * uStack_570._4_4_;
      fVar39 = (float)*(undefined8 *)(pfVar25 + 2) * (float)uStack_568;
      fVar34 = (float)local_580 + local_580._4_4_ + fVar35;
      fVar35 = (float)local_580 + local_580._4_4_ + fVar35;
      fVar37 = fVar36 + fVar38 + fVar39;
      fVar39 = fVar36 + fVar38 + fVar39;
      local_560._0_4_ = (float)uVar78;
      local_560._4_4_ = (float)((ulong)uVar78 >> 0x20);
      uStack_558._0_4_ = (float)uVar22;
      uStack_558._4_4_ = (float)(uVar22 >> 0x20);
      uStack_550._0_4_ = (float)uVar19;
      uStack_550._4_4_ = (float)(uVar19 >> 0x20);
      uStack_548._0_4_ = (float)uVar20;
      uStack_548._4_4_ = (float)(uVar20 >> 0x20);
      lVar24 = 8;
      puVar27 = local_310;
      do {
        auVar58._0_4_ = fVar37 * (float)uStack_550;
        auVar58._4_4_ = fVar39 * uStack_550._4_4_;
        auVar58._8_4_ = fVar37 * (float)uStack_548;
        auVar58._12_4_ = fVar39 * uStack_548._4_4_;
        auVar44._0_4_ = fVar34 * (float)local_560;
        auVar44._4_4_ = fVar35 * local_560._4_4_;
        auVar44._8_4_ = fVar34 * (float)uStack_558;
        auVar44._12_4_ = fVar35 * uStack_558._4_4_;
        puVar3 = local_590[0] + lVar24;
        uVar16 = puVar3[7];
        lVar24 = lVar24 + 8;
        auVar45._1_15_ = auVar44._1_15_;
        auVar45[0] = *puVar3;
        auVar46._0_8_ = auVar44._7_8_ << 0x38;
        auVar46._9_7_ = auVar44._9_7_;
        auVar46[8] = puVar3[4];
        auVar48._11_5_ = auVar44._11_5_;
        auVar48._0_10_ = auVar46._0_10_;
        auVar48[10] = puVar3[5];
        auVar50._13_3_ = (undefined3)((uint)auVar44._12_4_ >> 8);
        auVar50._0_12_ = auVar48._0_12_;
        auVar50[0xc] = puVar3[6];
        auVar52[0xf] = (undefined1)((uint)auVar44._12_4_ >> 0x18);
        auVar52._0_14_ = auVar50._0_14_;
        auVar52[0xe] = uVar16;
        auVar47._0_9_ = (unkuint9)auVar52._8_8_ << 0x40;
        auVar47._10_6_ = auVar52._10_6_;
        auVar47[9] = 0;
        auVar49._12_4_ = auVar52._12_4_;
        auVar49._0_11_ = auVar47._0_11_;
        auVar49[0xb] = 0;
        auVar51._14_2_ = auVar52._14_2_;
        auVar51._0_13_ = auVar49._0_13_;
        auVar51[0xd] = 0;
        auVar59._2_14_ = auVar58._2_14_;
        auVar59._0_2_ = auVar45._0_2_ & 0xff;
        auVar61._6_10_ = auVar58._6_10_;
        auVar61._0_4_ = auVar59._0_4_;
        auVar61[4] = puVar3[1];
        auVar61[5] = 0;
        auVar63._10_6_ = auVar58._10_6_;
        auVar63._0_8_ = auVar61._0_8_;
        auVar63[8] = puVar3[2];
        auVar63[9] = 0;
        auVar65._14_2_ = (undefined2)((uint)auVar58._12_4_ >> 0x10);
        auVar65._0_12_ = auVar63._0_12_;
        auVar65[0xc] = puVar3[3];
        auVar65[0xd] = 0;
        auVar60._4_12_ = auVar65._4_12_;
        auVar60._0_4_ = auVar61._0_4_ & 0xffff;
        auVar62._8_8_ = auVar65._8_8_;
        auVar62._0_6_ = auVar60._0_6_;
        auVar62._6_2_ = 0;
        auVar64._12_4_ = auVar65._12_4_;
        auVar64._0_10_ = auVar62._0_10_;
        auVar64._10_2_ = 0;
        auVar66._0_14_ = auVar64._0_14_;
        auVar66._14_2_ = 0;
        auVar9[1] = 0;
        auVar9[0] = puVar3[4];
        auVar9._2_13_ = auVar51._2_13_;
        auVar10[4] = puVar3[5];
        auVar10._0_4_ = auVar9._0_4_;
        auVar10[5] = 0;
        auVar10._6_9_ = auVar51._6_9_;
        auVar11[8] = puVar3[6];
        auVar11._0_8_ = auVar10._0_8_;
        auVar11[9] = 0;
        auVar11._10_5_ = auVar51._10_5_;
        auVar12[0xc] = uVar16;
        auVar12._0_12_ = auVar11._0_12_;
        auVar12[0xd] = 0;
        auVar12[0xe] = uVar16;
        auVar13._4_11_ = auVar12._4_11_;
        auVar13._0_4_ = auVar9._0_4_;
        auVar14._6_2_ = 0;
        auVar14._0_6_ = auVar13._0_6_;
        auVar14._8_7_ = auVar12._8_7_;
        auVar15._10_2_ = 0;
        auVar15._0_10_ = auVar14._0_10_;
        auVar15._12_3_ = auVar12._12_3_;
        auVar53._0_14_ = auVar15._0_14_;
        auVar53._14_2_ = 0;
        auVar40 = NEON_ucvtf(auVar66,4);
        auVar69 = NEON_ucvtf(auVar53,4);
        local_560._0_4_ = auVar40._0_4_ * 0.007874016 + auVar33._0_4_;
        local_560._4_4_ = auVar40._4_4_ * 0.007874016 + auVar33._4_4_;
        uStack_558._0_4_ = auVar40._8_4_ * 0.007874016 + auVar33._8_4_;
        uStack_558._4_4_ = auVar40._12_4_ * 0.007874016 + auVar33._12_4_;
        uStack_550._0_4_ = auVar69._0_4_ * 0.007874016 + auVar33._0_4_;
        uStack_550._4_4_ = auVar69._4_4_ * 0.007874016 + auVar33._4_4_;
        uStack_548._0_4_ = auVar69._8_4_ * 0.007874016 + auVar33._8_4_;
        uStack_548._4_4_ = auVar69._12_4_ * 0.007874016 + auVar33._12_4_;
        puVar27[2] = puVar27[2] ^
                     (puVar27[2] ^ 0x3c010204) & -(uint)(auVar44._8_4_ + auVar58._8_4_ <= 0.0);
        puVar27[3] = puVar27[3] ^
                     (puVar27[3] ^ 0x3c010204) & -(uint)(auVar44._12_4_ + auVar58._12_4_ <= 0.0);
        *puVar27 = *puVar27 ^
                   (*puVar27 ^ 0x3c010204) & -(uint)(auVar44._0_4_ + auVar58._0_4_ <= 0.0);
        puVar27[1] = puVar27[1] ^
                     (puVar27[1] ^ 0x3c010204) & -(uint)(auVar44._4_4_ + auVar58._4_4_ <= 0.0);
        puVar27 = puVar27 + 4;
      } while (lVar24 != 0x108);
      pfVar25 = pfVar25 + 4;
    } while (pfVar25 != pfVar2);
  }
  local_580 = uVar56;
  uStack_570 = uVar67;
  local_560 = uVar78;
  uStack_558 = uVar22;
  uStack_550 = uVar19;
  uStack_548 = uVar20;
  if (*(long *)(lVar4 + 0x38d490) == 0) {
    lVar24 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar24;
    lVar24 = *(long *)(lVar24 + 0x10);
  }
  else {
    lVar24 = *(long *)(*(long *)(lVar4 + 0x38d490) + 0x10);
  }
  if (lVar24 != 0) {
    puVar31 = *(undefined8 **)(lVar24 + 8);
    uVar22 = (long)puVar31 + 0x17U & 0xfffffffffffffff8;
    if ((uVar22 <= *(ulong *)(lVar24 + 0x10)) &&
       (*(ulong *)(lVar24 + 8) = uVar22, puVar31 != (undefined8 *)0x0)) {
      *puVar31 = "StscoreAgentObstacles";
      uVar56 = nn::os::GetSystemTick();
      puVar31[1] = uVar56;
    }
  }
  local_90 = CONCAT44(*(undefined4 *)(lVar26 + 200),*(undefined4 *)(lVar26 + 200));
  lVar24 = *(long *)param_1[2];
  uVar22 = (ulong)*(uint *)(lVar24 + 0x28);
  if (0 < (int)*(uint *)(lVar24 + 0x28)) {
    lVar32 = 0;
    while( true ) {
      uVar22 = uVar22 - 1;
      bVar21 = FUN_03288de0(lVar26,*(undefined8 *)(*(long *)(lVar24 + 0x20) + lVar32),&local_f0,
                            local_590,&local_90,&local_598,&local_310,&local_520,&local_530);
      bVar30 = bVar30 | bVar21;
      if (uVar22 == 0) break;
      lVar24 = *(long *)param_1[2];
      lVar32 = lVar32 + 0x10;
    }
  }
  if (*(long *)(lVar4 + 0x38d490) == 0) {
    lVar24 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar24;
    lVar24 = *(long *)(lVar24 + 0x10);
  }
  else {
    lVar24 = *(long *)(*(long *)(lVar4 + 0x38d490) + 0x10);
  }
  if (lVar24 != 0) {
    puVar31 = *(undefined8 **)(lVar24 + 8);
    uVar22 = (long)puVar31 + 0x17U & 0xfffffffffffffff8;
    if ((uVar22 <= *(ulong *)(lVar24 + 0x10)) &&
       (*(ulong *)(lVar24 + 8) = uVar22, puVar31 != (undefined8 *)0x0)) {
      *puVar31 = "StapplyModifiers";
      uVar56 = nn::os::GetSystemTick();
      puVar31[1] = uVar56;
      iVar43 = *(int *)(lVar26 + 0xf0);
      goto joined_r0x0328840c;
    }
  }
  iVar43 = *(int *)(lVar26 + 0xf0);
joined_r0x0328840c:
  if (iVar43 != 0) {
    lVar24 = (long)iVar43 << 3;
    plVar28 = *(long **)(lVar26 + 0xe8);
    do {
      lVar32 = 0;
      if (*plVar28 != 0) {
        lVar32 = *plVar28 + 0x18;
      }
      FUN_032899a0(lVar26,lVar32,local_590,&local_520);
      lVar24 = lVar24 + -8;
      plVar28 = plVar28 + 1;
    } while (lVar24 != 0);
  }
  if (*(long *)(lVar4 + 0x38d490) == 0) {
    lVar24 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar24;
    lVar24 = *(long *)(lVar24 + 0x10);
  }
  else {
    lVar24 = *(long *)(*(long *)(lVar4 + 0x38d490) + 0x10);
  }
  if (lVar24 != 0) {
    puVar31 = *(undefined8 **)(lVar24 + 8);
    uVar22 = (long)puVar31 + 0x17U & 0xfffffffffffffff8;
    if ((uVar22 <= *(ulong *)(lVar24 + 0x10)) &&
       (*(ulong *)(lVar24 + 8) = uVar22, puVar31 != (undefined8 *)0x0)) {
      *puVar31 = "StchooseBestCandidate";
      uVar56 = nn::os::GetSystemTick();
      puVar31[1] = uVar56;
    }
  }
  uVar56 = NEON_fmov(0x40800000,4);
  fVar34 = *(float *)(lVar26 + 0xa0) * (float)uVar56;
  local_a0 = CONCAT44(fVar34,fVar34);
  local_b0 = 0.0;
  fStack_ac = 0.0;
  local_c0 = *(float *)(lVar26 + 0xbc);
  local_d0 = CONCAT44(*(undefined4 *)(lVar26 + 0xcc),*(undefined4 *)(lVar26 + 0xcc));
  local_5a0 = CONCAT44(*(undefined4 *)(lVar26 + 0xc0),*(undefined4 *)(lVar26 + 0xc0));
  fStack_bc = local_c0;
  FUN_03289f40(local_590,&local_310,&local_520,&local_530,&local_b0,&local_c0,&local_d0,&local_f8,
               &local_a0,&local_5a0,lVar26 + 0x70,&local_90);
  puVar23 = local_520;
  *(byte *)(param_2 + 2) = bVar30 & 1;
  param_2[1] = uStack_88;
  *param_2 = local_90;
  puVar27 = local_310;
  if (lStack_518 < 0) {
    lVar26 = *(long *)(lVar4 + 0x38d490);
    if (lVar26 == 0) {
      lVar26 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar26;
    }
    FUN_032cf810(*(undefined8 *)(*(long *)(lVar26 + 8) + 0x58),puVar23);
    puVar27 = local_310;
  }
  local_310 = puVar27;
  if (local_308 < 0) {
    lVar26 = *(long *)(lVar4 + 0x38d490);
    if (lVar26 == 0) {
      lVar26 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar26;
    }
    FUN_032cf810(*(undefined8 *)(*(long *)(lVar26 + 8) + 0x58),puVar27);
  }
  if (lVar29 != 0) {
    puVar31 = *(undefined8 **)(lVar29 + 8);
    uVar22 = (long)puVar31 + 0x17U & 0xfffffffffffffff8;
    if ((uVar22 <= *(ulong *)(lVar29 + 0x10)) &&
       (*(ulong *)(lVar29 + 8) = uVar22, puVar31 != (undefined8 *)0x0)) {
      *puVar31 = &DAT_03922da5;
      uVar56 = nn::os::GetSystemTick();
      puVar31[1] = uVar56;
    }
  }
  return;
}


